#include "SGInteractionComponent.h"
#include "../Core/SGInteractable.h"
#include "../Core/SGFocusableComponent.h"
#include "../Camera/SGPickupableCamera.h"
#include "../Camera/SGCameraManager.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

USGInteractionComponent::USGInteractionComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
    
    // Tone down debug visuals
    DebugLineColor = FColor::Green;
    DebugHitColor = FColor::Yellow;
    DebugActorBoxColor = FColor::Red;
    DebugThickness = 1.0f; // Reduced from default
    DebugDuration = 0.5f;  // Shorter duration
}

void USGInteractionComponent::BeginPlay()
{
    Super::BeginPlay();

    // Start focus detection for local players
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        // Check if this is a local player
        if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
        {
            if (APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController()))
            {
                if (PC->IsLocalController())
                {
                    StartFocusDetection();
                }
            }
        }
    }
    else if (GetOwner())
    {
        // For clients, check if this is the local player
        if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
        {
            if (APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController()))
            {
                if (PC->IsLocalPlayerController())
                {
                    StartFocusDetection();
                }
            }
        }
    }
}

void USGInteractionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    StopFocusDetection();
    Super::EndPlay(EndPlayReason);
}

void USGInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    // Replicate debug settings only to owner for performance
    DOREPLIFETIME_CONDITION(USGInteractionComponent, bDebugInteraction, COND_OwnerOnly);
}

void USGInteractionComponent::StartFocusDetection()
{
    if (!bEnableFocusDetection)
    {
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    // Start timer for focus detection
    World->GetTimerManager().SetTimer(FocusDetectionTimer, this, &USGInteractionComponent::UpdateFocusDetection, FocusUpdateRate, true);
    
    UE_LOG(LogTemp, Log, TEXT("SGInteractionComponent: Started focus detection for %s"), 
           GetOwner() ? *GetOwner()->GetName() : TEXT("Unknown"));
}

void USGInteractionComponent::StopFocusDetection()
{
    UWorld* World = GetWorld();
    if (World && FocusDetectionTimer.IsValid())
    {
        World->GetTimerManager().ClearTimer(FocusDetectionTimer);
    }

    // Clear current focus
    SetCurrentFocusedActor(nullptr);

    UE_LOG(LogTemp, Log, TEXT("SGInteractionComponent: Stopped focus detection"));
}

void USGInteractionComponent::UpdateFocusDetection()
{
    AActor* FocusedActor = TraceForFocusableActor();
    
    if (FocusedActor != CurrentFocusedActor)
    {
        SetCurrentFocusedActor(FocusedActor);
    }
}

AActor* USGInteractionComponent::TraceForFocusableActor()
{
    ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
    if (!OwnerChar) 
    {
        return nullptr;
    }

    APlayerController* PC = Cast<APlayerController>(OwnerChar->GetController());
    if (!PC) 
    {
        return nullptr;
    }

    // Get trace start from character's head/eye level
    FVector TraceStart = OwnerChar->GetActorLocation() + FVector(0.f, 0.f, 130.f);
    
    // Get look direction from controller
    FRotator ControlRotation = PC->GetControlRotation();
    FVector TraceDirection = ControlRotation.Vector();
    
    const FVector TraceEnd = TraceStart + TraceDirection * TraceDistance;

    FHitResult Hit;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(FocusTrace), true, OwnerChar);
    Params.bReturnPhysicalMaterial = false;
    Params.bTraceComplex = true;

    bool bHit = false;
    if (bUseSphereTrace)
    {
        bHit = GetWorld()->SweepSingleByChannel(
            Hit, TraceStart, TraceEnd, FQuat::Identity, TraceChannel,
            FCollisionShape::MakeSphere(TraceRadius), Params);
    }
    else
    {
        bHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, TraceChannel, Params);
    }

    if (bHit && Hit.GetActor())
    {
        // Check if the hit actor has a focusable component
        if (USGFocusableComponent* FocusableComponent = Hit.GetActor()->FindComponentByClass<USGFocusableComponent>())
        {
            return Hit.GetActor();
        }
    }

    return nullptr;
}

void USGInteractionComponent::SetCurrentFocusedActor(AActor* NewFocusedActor)
{
    // End focus on current actor
    if (CurrentFocusedComponent && CurrentFocusedActor)
    {
        CurrentFocusedComponent->EndFocus();
        UE_LOG(LogTemp, Log, TEXT("SGInteractionComponent: Ended focus on %s"), *CurrentFocusedActor->GetName());
    }

    // Update current focused actor
    CurrentFocusedActor = NewFocusedActor;
    CurrentFocusedComponent = nullptr;

    // Begin focus on new actor
    if (CurrentFocusedActor)
    {
        CurrentFocusedComponent = CurrentFocusedActor->FindComponentByClass<USGFocusableComponent>();
        if (CurrentFocusedComponent)
        {
            CurrentFocusedComponent->BeginFocus();
            UE_LOG(LogTemp, Log, TEXT("SGInteractionComponent: Began focus on %s"), *CurrentFocusedActor->GetName());
        }
    }
}

void USGInteractionComponent::TryInteract()
{
    UE_LOG(LogTemp, Warning, TEXT("TryInteract called"));
    
    ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
    if (!OwnerChar) 
    {
        UE_LOG(LogTemp, Error, TEXT("Owner is not a character"));
        return;
    }

    APlayerController* PC = Cast<APlayerController>(OwnerChar->GetController());
    if (!PC) 
    {
        UE_LOG(LogTemp, Error, TEXT("No player controller found"));
        return;
    }

    // Get trace start from character's head/eye level instead of camera
    FVector TraceStart = OwnerChar->GetActorLocation() + FVector(0.f, 0.f, 130.f); // Head height
    
    // Get look direction from controller
    FRotator ControlRotation = PC->GetControlRotation();
    FVector TraceDirection = ControlRotation.Vector();
    
    const FVector TraceEnd = TraceStart + TraceDirection * TraceDistance;

    FHitResult Hit;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(InteractTrace), true, OwnerChar);
    Params.bReturnPhysicalMaterial = false;
    Params.bTraceComplex = true;

    bool bHit = false;
    if (bUseSphereTrace)
    {
        bHit = GetWorld()->SweepSingleByChannel(
            Hit, TraceStart, TraceEnd, FQuat::Identity, TraceChannel,
            FCollisionShape::MakeSphere(TraceRadius), Params);
    }
    else
    {
        bHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, TraceChannel, Params);
    }

    // Handle debug visualization
    if (bDebugInteraction)
    {
        if (GetOwner() && GetOwner()->HasAuthority())
        {
            MulticastDrawTrace(TraceStart, TraceEnd, bHit, Hit);
        }
        else
        {
            LocalDrawTrace(TraceStart, TraceEnd, bHit, Hit);
        }
    }

    if (bHit && Hit.GetActor())
    {
        AActor* HitActor = Hit.GetActor();
        UE_LOG(LogTemp, Log, TEXT("Hit actor: %s"), *HitActor->GetName());

        // Check if the actor implements the interactable interface
        if (HitActor->GetClass()->ImplementsInterface(USGInteractable::StaticClass()))
        {
            UE_LOG(LogTemp, Log, TEXT("Actor %s implements ISGInteractable"), *HitActor->GetName());
            
            if (GetOwner() && GetOwner()->HasAuthority())
            {
                // We're on the server, execute directly
                ISGInteractable::Execute_Interact(HitActor, OwnerChar);
            }
            else
            {
                // We're on the client, send to server
                ServerInteract(HitActor);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Actor %s does not implement ISGInteractable"), *HitActor->GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("No valid interaction target found"));
    }
}

void USGInteractionComponent::ServerInteract_Implementation(AActor* Target)
{
    if (!Target || !GetOwner())
    {
        UE_LOG(LogTemp, Warning, TEXT("ServerInteract: Invalid target or owner"));
        return;
    }

    // Verify the interaction is still valid on the server
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (!OwnerPawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("ServerInteract: Owner is not a pawn"));
        return;
    }

    // Additional distance check to prevent cheating
    float DistanceToTarget = FVector::Dist(OwnerPawn->GetActorLocation(), Target->GetActorLocation());
    if (DistanceToTarget > TraceDistance + 100.f) // Add some tolerance
    {
        UE_LOG(LogTemp, Warning, TEXT("ServerInteract: Target too far away (Distance: %f)"), DistanceToTarget);
        return;
    }

    // Execute the interaction
    if (Target->GetClass()->ImplementsInterface(USGInteractable::StaticClass()))
    {
        ISGInteractable::Execute_Interact(Target, OwnerPawn);
        UE_LOG(LogTemp, Log, TEXT("ServerInteract: Executed interaction on %s"), *Target->GetName());
    }
}

void USGInteractionComponent::ServerReportTrace_Implementation(const FVector& Start, const FVector& End, bool bHit, FHitResult Hit)
{
    MulticastDrawTrace(Start, End, bHit, Hit);
}

void USGInteractionComponent::MulticastDrawTrace_Implementation(const FVector& Start, const FVector& End, bool bHit, FHitResult Hit)
{
    LocalDrawTrace(Start, End, bHit, Hit);
}

void USGInteractionComponent::LocalDrawTrace(const FVector& Start, const FVector& End, bool bHit, const FHitResult& Hit)
{
    if (!GetWorld() || !bDebugInteraction)
    {
        return;
    }

    // Draw the trace line
    FColor LineColor = bHit ? DebugHitColor : DebugLineColor;
    
    if (bUseSphereTrace)
    {
        // Draw sphere sweep
        DrawDebugSphere(GetWorld(), Start, TraceRadius, 12, DebugLineColor, false, DebugDuration, 0, DebugThickness);
        DrawDebugSphere(GetWorld(), End, TraceRadius, 12, LineColor, false, DebugDuration, 0, DebugThickness);
        DrawDebugLine(GetWorld(), Start, End, LineColor, false, DebugDuration, 0, DebugThickness);
    }
    else
    {
        DrawDebugLine(GetWorld(), Start, End, LineColor, false, DebugDuration, 0, DebugThickness);
    }

    // Draw hit result
    if (bHit)
    {
        DrawDebugSphere(GetWorld(), Hit.Location, 8.0f, 12, DebugHitColor, false, DebugDuration, 0, DebugThickness);
        
        if (Hit.GetActor())
        {
            FVector ActorLocation = Hit.GetActor()->GetActorLocation();
            FVector BoxExtent = Hit.GetActor()->GetRootComponent() ? 
                Hit.GetActor()->GetRootComponent()->Bounds.BoxExtent : FVector(50.0f);
            
            DrawDebugBox(GetWorld(), ActorLocation, BoxExtent, DebugActorBoxColor, false, DebugDuration, 0, DebugThickness);
        }
    }
}
