#include "SGTestCharacter.h"
#include "Components/InputComponent.h"
#include "../Interaction/SGInteractionComponent.h"
#include "Engine/Engine.h"

ASGTestCharacter::ASGTestCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create camera manager component
    CameraManager = CreateDefaultSubobject<USGCameraManager>(TEXT("CameraManager"));

    // Create interaction component
    InteractionComponent = CreateDefaultSubobject<USGInteractionComponent>(TEXT("InteractionComponent"));
}

void ASGTestCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
            TEXT("Test Character with Camera Manager loaded! F=Pickup, T=Toggle, G=Drop"));
    }
}

void ASGTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Direct key bindings - no need for Input Actions
    PlayerInputComponent->BindKey(EKeys::F, IE_Pressed, this, &ASGTestCharacter::OnInteractPressed);
    PlayerInputComponent->BindKey(EKeys::T, IE_Pressed, this, &ASGTestCharacter::OnToggleCameraPressed);
    PlayerInputComponent->BindKey(EKeys::G, IE_Pressed, this, &ASGTestCharacter::OnDropCameraPressed);
}

void ASGTestCharacter::OnInteractPressed()
{
    if (InteractionComponent)
    {
        InteractionComponent->TryInteract();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No interaction component found!"));
    }
}

void ASGTestCharacter::OnToggleCameraPressed()
{
    if (CameraManager)
    {
        CameraManager->ToggleCameraView();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No camera manager found!"));
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("No camera manager!"));
        }
    }
}

void ASGTestCharacter::OnDropCameraPressed()
{
    if (CameraManager)
    {
        CameraManager->DropCamera();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No camera manager found!"));
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("No camera manager!"));
        }
    }
}