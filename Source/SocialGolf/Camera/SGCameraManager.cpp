#include "SGCameraManager.h"
#include "SGPickupableCamera.h"
#include "SGCameraRecorder.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

USGCameraManager::USGCameraManager()
{
    PrimaryComponentTick.bCanEverTick = false;
    bWantsInitializeComponent = true;
}

void USGCameraManager::BeginPlay()
{
    Super::BeginPlay();
    
    // No need to setup input bindings - character handles direct key inputs
    UE_LOG(LogTemp, Log, TEXT("Camera Manager initialized"));
}

void USGCameraManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // No input bindings to remove
    
    // Make sure we're not stuck in camera view
    if (bIsCameraViewActive)
    {
        SetCameraView(false);
    }
    
    Super::EndPlay(EndPlayReason);
    
    UE_LOG(LogTemp, Log, TEXT("Camera Manager deinitialized"));
}

void USGCameraManager::PickUpCamera(ASGPickupableCamera* Camera)
{
    if (!Camera || CurrentCamera == Camera)
    {
        return;
    }

    // Drop current camera if we have one
    if (CurrentCamera)
    {
        DropCamera();
    }

    CurrentCamera = Camera;
    
    // Let the camera handle the pickup logic
    if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
    {
        Camera->PickUp(OwnerPawn);
    }

    UE_LOG(LogTemp, Log, TEXT("Camera Manager: Picked up camera"));
}

void USGCameraManager::DropCamera()
{
    if (!CurrentCamera)
    {
        return;
    }

    // If we're in camera view, switch back to player view first
    if (bIsCameraViewActive)
    {
        SetCameraView(false);
    }

    // Drop the camera in front of the player
    FVector DropLocation = GetDropLocation();
    CurrentCamera->Drop(DropLocation);
    CurrentCamera = nullptr;

    UE_LOG(LogTemp, Log, TEXT("Camera Manager: Dropped camera"));
}

void USGCameraManager::ToggleCameraView()
{
    if (!CurrentCamera)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("No camera to toggle!"));
        }
        return;
    }

    SetCameraView(!bIsCameraViewActive);
}

void USGCameraManager::StartRecording()
{
    if (!CurrentCamera)
    {
        return;
    }

    if (USGCameraRecorder* Recorder = CurrentCamera->GetCameraRecorder())
    {
        if (!Recorder->IsRecording())
        {
            Recorder->StartRecording();
            
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Recording started"));
            }
        }
    }
}

void USGCameraManager::StopRecording()
{
    if (!CurrentCamera)
    {
        return;
    }

    if (USGCameraRecorder* Recorder = CurrentCamera->GetCameraRecorder())
    {
        if (Recorder->IsRecording())
        {
            Recorder->StopRecording();
            
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Recording stopped"));
            }
        }
    }
}

bool USGCameraManager::IsRecording() const
{
    if (!CurrentCamera)
    {
        return false;
    }

    if (USGCameraRecorder* Recorder = CurrentCamera->GetCameraRecorder())
    {
        return Recorder->IsRecording();
    }

    return false;
}

void USGCameraManager::SetCameraView(bool bActivate)
{
    APlayerController* PC = GetPlayerController();
    if (!PC)
    {
        return;
    }

    if (bActivate)
    {
        if (!CurrentCamera || bIsCameraViewActive)
        {
            return;
        }

        // Store the original view target
        OriginalViewTarget = PC->GetViewTarget();

        // Get the camera recorder component and use it as view target
        if (USGCameraRecorder* Recorder = CurrentCamera->GetCameraRecorder())
        {
            // The camera recorder component should be the view target
            // This will show the camera's perspective
            PC->SetViewTarget(CurrentCamera); // Use the camera actor itself
            bIsCameraViewActive = true;

            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, 
                    TEXT("CAMERA VIEW ON - Press T to return to player"));
            }
        }
    }
    else
    {
        if (!bIsCameraViewActive)
        {
            return;
        }

        // Return to original view target (player)
        if (OriginalViewTarget)
        {
            PC->SetViewTarget(OriginalViewTarget);
        }
        else
        {
            // Fallback to owner pawn
            PC->SetViewTarget(GetOwner());
        }

        bIsCameraViewActive = false;
        OriginalViewTarget = nullptr;

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, 
                TEXT("PLAYER VIEW ON - Press T to switch to camera"));
        }
    }

    // Broadcast the view change event
    OnCameraViewChanged.Broadcast(bIsCameraViewActive);
}

APlayerController* USGCameraManager::GetPlayerController() const
{
    if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
    {
        return Cast<APlayerController>(OwnerPawn->GetController());
    }
    return nullptr;
}

FVector USGCameraManager::GetDropLocation() const
{
    if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
    {
        FVector ForwardVector = OwnerPawn->GetActorForwardVector();
        FVector OwnerLocation = OwnerPawn->GetActorLocation();
        
        // Drop camera in front of player at ground level
        FVector DropLocation = OwnerLocation + (ForwardVector * DropDistance);
        
        // Try to find ground level
        FHitResult HitResult;
        FVector TraceStart = DropLocation + FVector(0, 0, 100);
        FVector TraceEnd = DropLocation - FVector(0, 0, 1000);
        
        if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_WorldStatic))
        {
            DropLocation = HitResult.ImpactPoint + FVector(0, 0, 50); // Slightly above ground
        }
        
        return DropLocation;
    }
    
    return FVector::ZeroVector;
}

FString USGCameraManager::GenerateLocationID(const FVector& Location) const
{
    // Create a location-based ID that's consistent but allows for some tolerance
    int32 X = FMath::RoundToInt(Location.X / 100.0f) * 100;
    int32 Y = FMath::RoundToInt(Location.Y / 100.0f) * 100;
    int32 Z = FMath::RoundToInt(Location.Z / 100.0f) * 100;
    
    return FString::Printf(TEXT("Camera_%d_%d_%d"), X, Y, Z);
}

USGCameraManager* USGCameraManager::Get(const UObject* WorldContext)
{
    // Since USGCameraManager is a component, not a subsystem, we can't use GetSubsystem
    // This function would need to find the component on the player character
    // For now, return nullptr and let the character handle the camera manager directly
    return nullptr;
}