#include "SGSimplePickupableCamera.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "Components/InputComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"

ASGSimplePickupableCamera::ASGSimplePickupableCamera()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    SetupComponents();
}

void ASGSimplePickupableCamera::BeginPlay()
{
    Super::BeginPlay();
    
    // Set initial visibility
    SetVisibility(!bIsPickedUp);
    
    UE_LOG(LogTemp, Log, TEXT("Simple Pickupable Camera initialized"));
}

void ASGSimplePickupableCamera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // If picked up by a player, bind input (only once)
    if (bIsPickedUp && CurrentOwner && !bInputBound)
    {
        if (UInputComponent* InputComp = CurrentOwner->InputComponent)
        {
            InputComp->BindKey(EKeys::T, IE_Pressed, this, &ASGSimplePickupableCamera::OnToggleCameraPressed);
            InputComp->BindKey(EKeys::G, IE_Pressed, this, &ASGSimplePickupableCamera::OnDropCameraPressed);
            bInputBound = true;
            
            UE_LOG(LogTemp, Log, TEXT("Camera input bound: T=Toggle View, G=Drop"));
            
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
                    TEXT("Camera Controls: T=Toggle View, G=Drop"));
            }
        }
    }
}

void ASGSimplePickupableCamera::SetupComponents()
{
    // Create root component
    RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = RootSceneComponent;

    // Create camera mesh with physics
    CameraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMeshComponent"));
    CameraMeshComponent->SetupAttachment(RootComponent);
    
    // Enable physics and gravity
    CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CameraMeshComponent->SetCollisionObjectType(ECC_WorldDynamic);
    CameraMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
    CameraMeshComponent->SetSimulatePhysics(true);
    CameraMeshComponent->SetEnableGravity(true);
    CameraMeshComponent->SetMassOverrideInKg(NAME_None, 2.0f); // 2kg camera weight

    // Create interaction sphere
    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->SetSphereRadius(InteractionRadius);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionSphere->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // Create camera recorder component
    CameraRecorderComponent = CreateDefaultSubobject<USGCameraRecorder>(TEXT("CameraRecorderComponent"));
    CameraRecorderComponent->SetupAttachment(CameraMeshComponent); // Attach to mesh for proper view

    // Load default camera mesh if not set
    if (!CameraMesh)
    {
        CameraMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
    }

    if (CameraMesh)
    {
        CameraMeshComponent->SetStaticMesh(CameraMesh);
        // Keep the current size from screenshots - looks perfect!
        CameraMeshComponent->SetRelativeScale3D(FVector(0.3f, 0.2f, 0.15f));
    }

    // Configure camera recorder for handheld use
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->RecordingResolutionX = 1280;
        CameraRecorderComponent->RecordingResolutionY = 720;
        CameraRecorderComponent->RecordingFPS = 30.0f;
        CameraRecorderComponent->MaxRecordingDuration = 60.0f;
        CameraRecorderComponent->FOV = 90.0f;
        
        // Position camera recorder on the "front" of the camera mesh
        CameraRecorderComponent->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
        CameraRecorderComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    }
}

FText ASGSimplePickupableCamera::GetInteractionText_Implementation() const
{
    if (bIsPickedUp)
    {
        return FText::FromString(TEXT("Camera is being carried"));
    }
    
    return FText::FromString(TEXT("Press F to pick up Camera"));
}

void ASGSimplePickupableCamera::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!InstigatorPawn || bIsPickedUp)
    {
        return;
    }

    PickUp(InstigatorPawn);
}

void ASGSimplePickupableCamera::PickUp(APawn* Picker)
{
    if (!Picker || bIsPickedUp)
    {
        return;
    }

    CurrentOwner = Picker;
    bIsPickedUp = true;
    bInputBound = false; // Reset input binding flag

    // Disable physics when picked up
    if (CameraMeshComponent)
    {
        CameraMeshComponent->SetSimulatePhysics(false);
        CameraMeshComponent->SetEnableGravity(false);
        CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    // DON'T hide the mesh - we want to see the camera being carried
    // SetVisibility(false); // Commented out so camera stays visible

    // Disable interaction sphere since camera is picked up
    if (InteractionSphere)
    {
        InteractionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    // Attach the entire camera actor to the player
    AttachToComponent(
        Picker->GetRootComponent(),
        FAttachmentTransformRules::SnapToTargetNotIncludingScale
    );

    // Position camera like holding a handheld camera - visible in hands
    RootComponent->SetRelativeLocation(FVector(50.0f, 30.0f, 120.0f)); // More forward and to the side
    RootComponent->SetRelativeRotation(FRotator(-10.0f, 15.0f, 0.0f)); // Slight tilt for handheld look

    UE_LOG(LogTemp, Log, TEXT("Camera picked up by %s"), *Picker->GetName());

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, 
            TEXT("Camera picked up! You can see it in your hands. T=Toggle View, G=Drop"));
    }
}

void ASGSimplePickupableCamera::Drop()
{
    if (!bIsPickedUp || !CurrentOwner)
    {
        return;
    }

    // If in camera view, switch back to player view first
    if (bIsCameraViewActive)
    {
        SetCameraView(false);
    }

    // Remove input bindings
    if (bInputBound && CurrentOwner->InputComponent)
    {
        // Clear the specific key bindings we added
        for (int32 i = CurrentOwner->InputComponent->KeyBindings.Num() - 1; i >= 0; i--)
        {
            FInputKeyBinding& Binding = CurrentOwner->InputComponent->KeyBindings[i];
            if (Binding.Chord.Key == EKeys::T || Binding.Chord.Key == EKeys::G)
            {
                CurrentOwner->InputComponent->KeyBindings.RemoveAt(i);
            }
        }
        bInputBound = false;
    }

    // Detach from player
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

    // Set new location in front of player
    FVector DropLocation = GetDropLocation();
    SetActorLocation(DropLocation);
    SetActorRotation(FRotator::ZeroRotator);

    // Re-enable physics and gravity
    if (CameraMeshComponent)
    {
        CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        CameraMeshComponent->SetSimulatePhysics(true);
        CameraMeshComponent->SetEnableGravity(true);
    }

    // Re-enable interaction sphere for pickup
    if (InteractionSphere)
    {
        InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }

    // Reset state
    CurrentOwner = nullptr;
    bIsPickedUp = false;

    // Camera mesh is already visible, no need to change visibility
    // SetVisibility(true); // Not needed since we never hid it

    UE_LOG(LogTemp, Log, TEXT("Camera dropped at location %s"), *DropLocation.ToString());

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Camera dropped"));
    }
}

void ASGSimplePickupableCamera::ToggleCameraView()
{
    if (!bIsPickedUp || !CurrentOwner)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Camera not picked up!"));
        }
        return;
    }

    SetCameraView(!bIsCameraViewActive);
}

void ASGSimplePickupableCamera::SetCameraView(bool bActivate)
{
    APlayerController* PC = GetPlayerController();
    if (!PC)
    {
        return;
    }

    if (bActivate)
    {
        if (bIsCameraViewActive)
        {
            return;
        }

        // Store the original view target
        OriginalViewTarget = PC->GetViewTarget();

        // Instead of changing view target, we'll use a different approach
        // Set the camera recorder component as view target but keep player controls
        if (CameraRecorderComponent)
        {
            // Store original control rotation
            FRotator OriginalControlRotation = PC->GetControlRotation();
            
            PC->SetViewTarget(CameraRecorderComponent->GetOwner());
            
            // Restore control rotation so player can still look around
            PC->SetControlRotation(OriginalControlRotation);
            
            bIsCameraViewActive = true;

            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, 
                    TEXT("CAMERA VIEW ON - You can still move and look around!"));
            }
        }
    }
    else
    {
        if (!bIsCameraViewActive)
        {
            return;
        }

        // Return to original view target
        if (OriginalViewTarget)
        {
            PC->SetViewTarget(OriginalViewTarget);
        }
        else
        {
            PC->SetViewTarget(CurrentOwner);
        }

        bIsCameraViewActive = false;
        OriginalViewTarget = nullptr;

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, 
                TEXT("PLAYER VIEW ON - Press T for camera view"));
        }
    }
}

void ASGSimplePickupableCamera::SetVisibility(bool bVisible)
{
    // Camera mesh should always be visible when the camera exists
    // We only control the interaction sphere collision
    if (InteractionSphere)
    {
        InteractionSphere->SetCollisionEnabled(bVisible ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
    }
    
    // Camera mesh stays visible always so players can see it being carried
    // if (CameraMeshComponent)
    // {
    //     CameraMeshComponent->SetVisibility(bVisible);
    // }
}

APlayerController* ASGSimplePickupableCamera::GetPlayerController() const
{
    if (CurrentOwner)
    {
        return Cast<APlayerController>(CurrentOwner->GetController());
    }
    return nullptr;
}

FVector ASGSimplePickupableCamera::GetDropLocation() const
{
    if (CurrentOwner)
    {
        FVector ForwardVector = CurrentOwner->GetActorForwardVector();
        FVector OwnerLocation = CurrentOwner->GetActorLocation();
        
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
    
    return GetActorLocation();
}

void ASGSimplePickupableCamera::OnToggleCameraPressed()
{
    ToggleCameraView();
}

void ASGSimplePickupableCamera::OnDropCameraPressed()
{
    Drop();
}