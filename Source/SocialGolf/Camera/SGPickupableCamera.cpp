#include "SGPickupableCamera.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"

ASGPickupableCamera::ASGPickupableCamera()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = true;

    SetupComponents();
}

void ASGPickupableCamera::BeginPlay()
{
    Super::BeginPlay();
    
    // Set initial visibility
    SetVisibility(!bIsPickedUp);
}

void ASGPickupableCamera::SetupComponents()
{
    // Create root component
    RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = RootSceneComponent;

    // Create camera mesh
    CameraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMeshComponent"));
    CameraMeshComponent->SetupAttachment(RootComponent);
    CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Create interaction sphere
    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->SetSphereRadius(InteractionRadius);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionSphere->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // Create camera recorder component
    CameraRecorderComponent = CreateDefaultSubobject<USGCameraRecorder>(TEXT("CameraRecorderComponent"));
    CameraRecorderComponent->SetupAttachment(RootComponent);

    // Load default camera mesh if not set
    if (!CameraMesh)
    {
        CameraMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
    }

    if (CameraMesh)
    {
        CameraMeshComponent->SetStaticMesh(CameraMesh);
        // Scale down to realistic handheld camera size (like a GoPro or small camcorder)
        CameraMeshComponent->SetRelativeScale3D(FVector(0.08f, 0.05f, 0.03f)); // Much smaller, realistic size
    }

    // Configure camera recorder for handheld use
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->RecordingResolutionX = 1280;
        CameraRecorderComponent->RecordingResolutionY = 720;
        CameraRecorderComponent->RecordingFPS = 30.0f;
        CameraRecorderComponent->MaxRecordingDuration = 60.0f; // Longer recording time
        CameraRecorderComponent->FOV = 90.0f; // Wider FOV for action camera feel
    }
}

FText ASGPickupableCamera::GetInteractionText_Implementation() const
{
    if (bIsPickedUp)
    {
        return FText::FromString(TEXT("Camera is picked up"));
    }
    
    return FText::FromString(TEXT("Press F to pick up Camera"));
}

void ASGPickupableCamera::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!InstigatorPawn || bIsPickedUp)
    {
        return;
    }

    PickUp(InstigatorPawn);
}

void ASGPickupableCamera::PickUp(APawn* Picker)
{
    if (!Picker || bIsPickedUp || !bCanBePickedUp)
    {
        return;
    }

    CurrentOwner = Picker;
    bIsPickedUp = true;

    // Hide the pickup mesh
    SetVisibility(false);

    // Attach camera recorder to the player (positioned for first-person handheld view)
    if (CameraRecorderComponent)
    {
        // Detach from current parent and attach to player
        CameraRecorderComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
        CameraRecorderComponent->AttachToComponent(
            Picker->GetRootComponent(),
            FAttachmentTransformRules::SnapToTargetNotIncludingScale
        );

        // Position camera like holding a handheld camera at chest/shoulder level
        CameraRecorderComponent->SetRelativeLocation(FVector(30.0f, 15.0f, 140.0f)); // Forward, right, up
        CameraRecorderComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // Level rotation
    }

    UE_LOG(LogTemp, Log, TEXT("Camera picked up by %s"), *Picker->GetName());

    // Notify the picker that they now have a camera
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, 
            TEXT("Camera picked up! Press T to toggle camera view"));
    }
}

void ASGPickupableCamera::Drop(const FVector& DropLocation)
{
    if (!bIsPickedUp)
    {
        return;
    }

    // Set new location
    SetActorLocation(DropLocation);

    // Detach camera recorder and reattach to this actor
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
        CameraRecorderComponent->AttachToComponent(
            RootComponent,
            FAttachmentTransformRules::SnapToTargetNotIncludingScale
        );
        CameraRecorderComponent->SetRelativeLocation(FVector::ZeroVector);
        CameraRecorderComponent->SetRelativeRotation(FRotator::ZeroRotator);
    }

    // Reset state
    CurrentOwner = nullptr;
    bIsPickedUp = false;

    // Show the pickup mesh again
    SetVisibility(true);

    UE_LOG(LogTemp, Log, TEXT("Camera dropped at location %s"), *DropLocation.ToString());

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Camera dropped"));
    }
}

void ASGPickupableCamera::SetVisibility(bool bVisible)
{
    if (CameraMeshComponent)
    {
        CameraMeshComponent->SetVisibility(bVisible);
    }

    if (InteractionSphere)
    {
        InteractionSphere->SetCollisionEnabled(bVisible ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
    }
}