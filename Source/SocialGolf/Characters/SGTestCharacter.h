#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Camera/SGCameraManager.h"
#include "SGTestCharacter.generated.h"

UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API ASGTestCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ASGTestCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Camera system
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USGCameraManager* CameraManager;

    // Interaction component  
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
    class USGInteractionComponent* InteractionComponent;

public:
    // Input actions
    UFUNCTION()
    void OnInteractPressed();

    UFUNCTION()
    void OnToggleCameraPressed();

    UFUNCTION()
    void OnDropCameraPressed();

    // Getter for camera manager
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    USGCameraManager* GetCameraManager() const { return CameraManager; }
};