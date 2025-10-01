#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SGCameraManager.generated.h"

class ASGPickupableCamera;
class USGCameraRecorder;
class APawn;
class APlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraViewChanged, bool, bIsCameraView);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGCameraManager : public UActorComponent
{
    GENERATED_BODY()

public:
    USGCameraManager();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    // Current state
    UPROPERTY(BlueprintReadOnly, Category = "Camera")
    ASGPickupableCamera* CurrentCamera = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "Camera")
    bool bIsCameraViewActive = false;

    UPROPERTY(BlueprintReadOnly, Category = "Camera")
    AActor* OriginalViewTarget = nullptr;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    float DropDistance = 200.0f;

public:
    // Events
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnCameraViewChanged OnCameraViewChanged;

    // Camera management
    UFUNCTION(BlueprintCallable, Category = "Camera")
    void PickUpCamera(ASGPickupableCamera* Camera);

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void DropCamera();

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void ToggleCameraView();

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void StartRecording();

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void StopRecording();

    // Getters
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    bool HasCamera() const { return CurrentCamera != nullptr; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    bool IsCameraViewActive() const { return bIsCameraViewActive; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    ASGPickupableCamera* GetCurrentCamera() const { return CurrentCamera; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    bool IsRecording() const;

    // Static access function for easy access from anywhere
    UFUNCTION(BlueprintCallable, Category = "Camera Recording", meta = (CallInEditor = "true"))
    static USGCameraManager* Get(const UObject* WorldContext);

protected:
    void SetCameraView(bool bActivate);
    APlayerController* GetPlayerController() const;
    FVector GetDropLocation() const;
    FString GenerateLocationID(const FVector& Location) const;
};