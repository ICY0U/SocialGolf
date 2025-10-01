#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "../Save/SGCameraSaveGame.h"
#include "SGCameraRecordingSubsystem.generated.h"

class USGCameraRecorder;
class ASGCameraRecorderActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraRecordingEvent, const FString&, RecordingName);

UCLASS(BlueprintType)
class SOCIALGOLF_API USGCameraRecordingSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // USubsystem interface
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Camera Recording Events")
    FOnCameraRecordingEvent OnRecordingStarted;

    UPROPERTY(BlueprintAssignable, Category = "Camera Recording Events")
    FOnCameraRecordingEvent OnRecordingFinished;

    UPROPERTY(BlueprintAssignable, Category = "Camera Recording Events")
    FOnCameraRecordingEvent OnPlaybackStarted;

    UPROPERTY(BlueprintAssignable, Category = "Camera Recording Events")
    FOnCameraRecordingEvent OnPlaybackFinished;

    // Save/Load Functions
    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void SaveCameraRecordings();

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void LoadCameraRecordings();

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void ClearAllRecordings();

    // Global Recording Management
    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void RegisterCameraRecorder(USGCameraRecorder* CameraRecorder);

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void UnregisterCameraRecorder(USGCameraRecorder* CameraRecorder);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    int32 GetTotalRecordingCount() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    TArray<FCameraRecordingData> GetAllRecordings() const;

    // Desktop Export Functions
    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void ExportAllRecordingsToDesktop();

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void ExportRecordingToDesktop(const FString& RecordingName);

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    bool bAutoSaveOnRecordingFinish = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    bool bAutoLoadOnStartup = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    FString SaveSlotName = TEXT("CameraRecordingsSave");

protected:
    UPROPERTY()
    TArray<TWeakObjectPtr<USGCameraRecorder>> RegisteredCameras;

    UPROPERTY()
    USGCameraSaveGame* CameraSaveGame;

    // Internal functions
    void CreateNewSaveGame();
    FString GenerateLocationID(const FVector& Location) const;

public:
    // Static access function for easy access from anywhere
    UFUNCTION(BlueprintCallable, Category = "Camera Recording", meta = (CallInEditor = "true"))
    static USGCameraRecordingSubsystem* Get(const UObject* WorldContext);

private:
    // Event handler for camera state changes
    UFUNCTION()
    void OnCameraStateChanged(ECameraRecorderState NewState);
};