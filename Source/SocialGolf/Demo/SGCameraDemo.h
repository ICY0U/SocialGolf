#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Camera/SGCameraRecorderActor.h"
#include "../Camera/SGCameraRecordingSubsystem.h"
#include "SGCameraDemo.generated.h"

/**
 * Demo actor showing how to use the camera recording system
 * Place this in your level to test camera functionality
 */
UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API ASGCameraDemo : public AActor
{
    GENERATED_BODY()

public:
    ASGCameraDemo();

protected:
    virtual void BeginPlay() override;

    // Demo camera instances
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Demo")
    TArray<ASGCameraRecorderActor*> DemoCameras;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Demo")
    int32 NumberOfCameras = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Demo")
    float CameraSpacing = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Demo")
    TSubclassOf<ASGCameraRecorderActor> CameraClass;

public:
    // Demo functions to test the camera system
    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void StartRecordingAllCameras();

    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void StopRecordingAllCameras();

    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void PlayAllRecordings();

    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void ExportAllRecordings();

    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void ClearAllRecordings();

    // Test functions for specific use cases
    UFUNCTION(BlueprintCallable, Category = "Camera Demo")
    void SimulateContentWarningGameplay();

protected:
    void CreateDemoCameras();
    void SetupCameraEvents();

    UFUNCTION()
    void OnRecordingStateChanged(ECameraRecorderState NewState);

    UFUNCTION()
    void OnRecordingProgress(float CurrentTime, float TotalTime);

private:
    bool bDemoInProgress = false;
    FTimerHandle DemoTimerHandle;
};