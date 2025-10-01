#include "SGBench.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "../Characters/SGCharacter.h"
#include "../Core/SGFocusableComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

ASGBench::ASGBench()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = true;
    
    // Only create components if this is being placed in editor or spawned intentionally
    // This prevents auto-spawning at origin
    if (HasAnyFlags(RF_ClassDefaultObject))
    {
        return; // Don't create components for class default object
    }

    // Create bench mesh component
    BenchMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BenchMesh"));
    RootComponent = BenchMesh;
    BenchMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    BenchMesh->SetIsReplicated(true);

    // Create sit position component - positioned ABOVE the bench
    SitPosition = CreateDefaultSubobject<USceneComponent>(TEXT("SitPosition"));
    SitPosition->SetupAttachment(RootComponent);
    SitPosition->SetRelativeLocation(FVector(0.0f, 0.0f, SitHeight));
    
    // Add focusable component for scaling effect
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    if (FocusableComponent)
    {
        FocusableComponent->FocusScaleFactor = 1.03f; // More subtle scale for benches
        FocusableComponent->ScaleAnimationDuration = 0.3f; // Slower animation for larger objects
    }
    
    // Initialize
    CurrentSittingCharacter = nullptr;
}

void ASGBench::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGBench, CurrentSittingCharacter);
}

FText ASGBench::GetInteractionText_Implementation() const
{
    if (IsBenchOccupied())
    {
        // Check if the interacting player is the one sitting
        if (CurrentSittingCharacter)
        {
            // For now, assume local player check - in multiplayer you'd check controller
            return StandUpText;
        }
        else
        {
            return OccupiedText;
        }
    }
    
    return SitText;
}

void ASGBench::Interact_Implementation(APawn* InstigatorPawn)
{
    ASGCharacter* Character = Cast<ASGCharacter>(InstigatorPawn);
    if (!Character)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBench: Invalid character trying to interact"));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGBench: Interact called by %s. Bench occupied: %s, Sitting character: %s"), 
           *Character->GetName(), 
           IsBenchOccupied() ? TEXT("Yes") : TEXT("No"),
           CurrentSittingCharacter ? *CurrentSittingCharacter->GetName() : TEXT("None"));

    // If this character is sitting on this bench, stand up
    if (CurrentSittingCharacter == Character)
    {
        StandUpFromBench(Character);
        return;
    }
    
    // If bench is occupied by someone else, can't sit
    if (IsBenchOccupied())
    {
        UE_LOG(LogTemp, Log, TEXT("SGBench: Bench is occupied by another player"));
        return;
    }
    
    // If the character is sitting somewhere else, force stand up first
    if (Character->IsSitting())
    {
        Character->ForceStandUp();
        
        // Small delay before sitting on new bench
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, Character]()
        {
            if (Character && !IsBenchOccupied())
            {
                SitOnBench(Character);
            }
        }, 0.1f, false);
    }
    else
    {
        // Bench is free and character is standing, sit down
        SitOnBench(Character);
    }
}

void ASGBench::SitOnBench(ASGCharacter* Character)
{
    if (!Character || IsBenchOccupied() || !BenchMesh)
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("SGBench: %s is sitting on bench at %s"), 
           *Character->GetName(), *GetActorLocation().ToString());

    // Store original character location as fallback
    FVector OriginalLocation = Character->GetActorLocation();

    // Set the current sitting character
    CurrentSittingCharacter = Character;

    // Calculate SAFE sit position using proper world coordinates
    FVector BenchWorldLocation = GetActorLocation();
    FVector SitWorldPos;
    
    // Use the SitPosition component if it exists, otherwise calculate
    if (SitPosition)
    {
        SitWorldPos = SitPosition->GetComponentLocation();
    }
    else
    {
        // Fallback: calculate based on bench bounds
        FBoxSphereBounds Bounds = BenchMesh->CalcBounds(BenchMesh->GetComponentTransform());
        SitWorldPos = BenchWorldLocation + FVector(0.0f, 0.0f, Bounds.BoxExtent.Z + SitHeight);
    }
    
    // Safety check: ensure sit position is above ground
    if (SitWorldPos.Z < BenchWorldLocation.Z)
    {
        SitWorldPos.Z = BenchWorldLocation.Z + SitHeight;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGBench: Moving character from %s to %s"), 
           *OriginalLocation.ToString(), *SitWorldPos.ToString());

    // Set character state BEFORE moving
    SetCharacterSittingState(Character, true);

    // Move character to sit position with safety checks
    if (!Character->SetActorLocation(SitWorldPos, false, nullptr, ETeleportType::TeleportPhysics))
    {
        UE_LOG(LogTemp, Error, TEXT("SGBench: Failed to set character location, reverting"));
        CurrentSittingCharacter = nullptr;
        SetCharacterSittingState(Character, false);
        return;
    }
    
    // Set rotation to face same direction as bench
    Character->SetActorRotation(GetActorRotation());

    UE_LOG(LogTemp, Log, TEXT("SGBench: Character %s successfully sat down"), *Character->GetName());
}

void ASGBench::StandUpFromBench(ASGCharacter* Character)
{
    if (!Character || Character != CurrentSittingCharacter || !BenchMesh)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBench: Invalid stand up request"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("SGBench: %s is standing up from bench"), *Character->GetName());

    // Clear the sitting character FIRST to prevent re-entry
    CurrentSittingCharacter = nullptr;

    // Set character state BEFORE moving
    SetCharacterSittingState(Character, false);

    // Calculate SAFE stand position
    FVector BenchWorldLocation = GetActorLocation();
    FVector BenchForward = GetActorForwardVector();
    
    // Multiple fallback positions for safety
    TArray<FVector> PotentialStandPositions;
    
    // Primary position: in front of bench
    PotentialStandPositions.Add(BenchWorldLocation + (BenchForward * StandDistance));
    
    // Fallback positions if primary fails
    PotentialStandPositions.Add(BenchWorldLocation + (BenchForward * -StandDistance)); // Behind bench
    PotentialStandPositions.Add(BenchWorldLocation + (GetActorRightVector() * StandDistance)); // Right side
    PotentialStandPositions.Add(BenchWorldLocation + (GetActorRightVector() * -StandDistance)); // Left side
    
    // Ensure all positions are at proper ground level
    for (FVector& Position : PotentialStandPositions)
    {
        Position.Z = BenchWorldLocation.Z;
        
        // Safety check: never below bench level
        if (Position.Z < BenchWorldLocation.Z - 50.0f)
        {
            Position.Z = BenchWorldLocation.Z;
        }
    }

    // Try each position until one works
    bool bSuccessfullyMoved = false;
    for (const FVector& StandPosition : PotentialStandPositions)
    {
        UE_LOG(LogTemp, Log, TEXT("SGBench: Trying stand position %s"), *StandPosition.ToString());
        
        if (Character->SetActorLocation(StandPosition, false, nullptr, ETeleportType::TeleportPhysics))
        {
            bSuccessfullyMoved = true;
            UE_LOG(LogTemp, Log, TEXT("SGBench: Successfully moved to %s"), *StandPosition.ToString());
            break;
        }
    }

    if (!bSuccessfullyMoved)
    {
        UE_LOG(LogTemp, Error, TEXT("SGBench: Failed to find valid stand position! Emergency teleport to bench location"));
        Character->SetActorLocation(BenchWorldLocation + FVector(0, 0, 100), true, nullptr, ETeleportType::TeleportPhysics);
    }

    UE_LOG(LogTemp, Log, TEXT("SGBench: Character %s stand up complete"), *Character->GetName());
}

void ASGBench::OnRep_CurrentSittingCharacter()
{
    // Handle visual updates when sitting character changes
    UE_LOG(LogTemp, Log, TEXT("SGBench: OnRep_CurrentSittingCharacter - Current: %s"), 
           CurrentSittingCharacter ? *CurrentSittingCharacter->GetName() : TEXT("None"));
}

void ASGBench::SetCharacterSittingState(ASGCharacter* Character, bool bSitting)
{
    if (!Character)
        return;

    // Set the character's sitting state
    Character->SetSittingState(bSitting);
    
    UE_LOG(LogTemp, Log, TEXT("SGBench: Setting %s sitting state to %s"), 
           *Character->GetName(), bSitting ? TEXT("true") : TEXT("false"));

    // Additional bench-specific behavior
    if (bSitting)
    {
        // Character is sitting on this bench
        // You could add more sitting-specific behavior here:
        // - Play sitting animation
        // - Adjust camera for better bench view
        // - Show sitting UI elements
        // - Disable jump input
    }
    else
    {
        // Character is standing up from this bench
        // Restore normal character behavior
    }
}

FVector ASGBench::GetSitWorldPosition() const
{
    if (SitPosition)
    {
        return SitPosition->GetComponentLocation();
    }
    
    return GetActorLocation() + FVector(0.0f, 0.0f, SitHeight);
}

FRotator ASGBench::GetSitWorldRotation() const
{
    // Face the same direction as the bench
    return GetActorRotation();
}