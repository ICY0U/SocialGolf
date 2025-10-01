#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "SGCameraRecorder.h"
#include "SGPickupableCamera.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class USceneComponent;

UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API ASGPickupableCamera : public AActor, public ISGInteractable
{
    GENERATED_BODY()

public:
    ASGPickupableCamera();

protected:
    virtual void BeginPlay() override;

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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
    bool bCanBePickedUp = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    UStaticMesh* CameraMesh;

    // State
    UPROPERTY(BlueprintReadOnly, Category = "State")
    bool bIsPickedUp = false;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    class APawn* CurrentOwner = nullptr;

public:
    // ISGInteractable implementation
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Pickup functionality
    UFUNCTION(BlueprintCallable, Category = "Pickup")
    void PickUp(APawn* Picker);

    UFUNCTION(BlueprintCallable, Category = "Pickup")
    void Drop(const FVector& DropLocation);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pickup")
    bool IsPickedUp() const { return bIsPickedUp; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pickup")
    APawn* GetCurrentOwner() const { return CurrentOwner; }

    // Camera access
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    USGCameraRecorder* GetCameraRecorder() const { return CameraRecorderComponent; }

protected:
    void SetupComponents();
    void SetVisibility(bool bVisible);
};