#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "SGCameraRecorder.h"
#include "SGSimplePickupableCamera.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class USceneComponent;
class APlayerController;

UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API ASGSimplePickupableCamera : public AActor, public ISGInteractable
{
    GENERATED_BODY()

public:
    ASGSimplePickupableCamera();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* RootSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CameraMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* InteractionSphere;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGCameraRecorder* CameraRecorderComponent;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
    float InteractionRadius = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    UStaticMesh* CameraMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float DropDistance = 200.0f;

    // State
    UPROPERTY(BlueprintReadOnly, Category = "State")
    bool bIsPickedUp = false;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    bool bIsCameraViewActive = false;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    APawn* CurrentOwner = nullptr;

    UPROPERTY()
    AActor* OriginalViewTarget = nullptr;

public:
    // ISGInteractable implementation
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Main functionality
    UFUNCTION(BlueprintCallable, Category = "Camera")
    void PickUp(APawn* Picker);

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void Drop();

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void ToggleCameraView();

    // Getters
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "State")
    bool IsPickedUp() const { return bIsPickedUp; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "State")
    bool IsCameraViewActive() const { return bIsCameraViewActive; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "State")
    APawn* GetCurrentOwner() const { return CurrentOwner; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    USGCameraRecorder* GetCameraRecorder() const { return CameraRecorderComponent; }

protected:
    void SetupComponents();
    void SetVisibility(bool bVisible);
    void SetCameraView(bool bActivate);
    APlayerController* GetPlayerController() const;
    FVector GetDropLocation() const;

    // Input handlers
    UFUNCTION()
    void OnToggleCameraPressed();

    UFUNCTION()
    void OnDropCameraPressed();

private:
    // Track if we've bound input to avoid multiple bindings
    bool bInputBound = false;
};