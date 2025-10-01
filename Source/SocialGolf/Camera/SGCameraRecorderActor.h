#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGCameraRecorder.h"
#include "SGCameraRecorderActor.generated.h"

UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API ASGCameraRecorderActor : public AActor
{
    GENERATED_BODY()

public:
    ASGCameraRecorderActor();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGCameraRecorder* CameraRecorderComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UBoxComponent* InteractionBox;

public:
    // Quick access functions for Blueprint
    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void StartRecording(const FString& RecordingName = TEXT(""));

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void StopRecording();

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void PlayLatestRecording();

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void StopPlayback();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    bool IsRecording() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    bool IsPlaying() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    int32 GetRecordingCount() const;

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void SaveRecordingToDesktop(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "Camera Recording")
    void DeleteRecording(int32 RecordingIndex);

    // Get the camera recorder component for advanced usage
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Recording")
    USGCameraRecorder* GetCameraRecorderComponent() const { return CameraRecorderComponent; }
};