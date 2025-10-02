#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "SGReplayTypes.h"
#include "SGReplayManager.generated.h"

class ASGCharacter;
class ASGGolfBall;
class UCameraComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayRecordingStateChanged, bool, bIsRecording, float, CurrentDuration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReplayPlaybackStateChanged, bool, bIsPlaying, float, CurrentTime, float, TotalDuration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayEventRecorded, EReplayEventType, EventType, const FString&, Description);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplaySaved, bool, bSuccess, const FString&, ReplayName);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGReplayManager : public UActorComponent
{
    GENERATED_BODY()

public:
    USGReplayManager();

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
    // === RECORDING FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StartRecording(const FString& ReplayName = TEXT("Auto Replay"));

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StopRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void PauseRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void ResumeRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool IsRecording() const { return bIsRecording && !bRecordingPaused; }

    // === PLAYBACK FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool StartPlayback(const FSGReplayData& ReplayData, ECameraReplayMode CameraMode = ECameraReplayMode::Cinematic);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StopPlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void PausePlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void ResumePlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SetPlaybackTime(float NewTime);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SetPlaybackSpeed(float NewSpeed);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool IsPlaying() const { return bIsPlaying && !bPlaybackPaused; }

    // === CAMERA FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SetCameraMode(ECameraReplayMode NewCameraMode);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void NextCameraMode();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    ECameraReplayMode GetCurrentCameraMode() const { return CurrentCameraMode; }

    // === EVENT FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void RecordEvent(EReplayEventType EventType, const FString& Description, const FVector& Location = FVector::ZeroVector, float ShotPower = 0.0f, const FString& ClubUsed = TEXT(""));

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void RecordGolfShot(float Power, const FString& ClubName, const FVector& ShotLocation);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void RecordHoleComplete(int32 Score);

    // === DATA MANAGEMENT ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool SaveReplay(const FString& FileName = TEXT(""));

    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool LoadReplay(const FString& FileName);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    TArray<FString> GetAvailableReplays() const;

    UFUNCTION(BlueprintCallable, Category = "Replay")
    bool DeleteReplay(const FString& FileName);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    FSGReplayData GetCurrentReplayData() const { return CurrentReplayData; }

    // === UTILITY FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void ClearCurrentReplay();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    float GetRecordingDuration() const { return RecordingDuration; }

    UFUNCTION(BlueprintCallable, Category = "Replay")
    float GetPlaybackTime() const { return PlaybackTime; }

    UFUNCTION(BlueprintCallable, Category = "Replay")
    int32 GetTotalFrames() const { return CurrentReplayData.FrameData.Num(); }

    // === DELEGATES ===
    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplayRecordingStateChanged OnRecordingStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplayPlaybackStateChanged OnPlaybackStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplayEventRecorded OnEventRecorded;

    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplaySaved OnReplaySaved;

protected:
    // === RECORDING SETTINGS ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording Settings")
    float RecordingFrameRate = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording Settings")
    bool bAutoStartRecording = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording Settings")
    bool bAutoStopOnHoleComplete = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording Settings")
    float MaxRecordingDuration = 300.0f; // 5 minutes

    // === PLAYBACK SETTINGS ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback Settings")
    float DefaultPlaybackSpeed = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback Settings")
    bool bLoopPlayback = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback Settings")
    bool bAutoSwitchCameras = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback Settings")
    float CameraSwitchInterval = 5.0f;

    // === CAMERA SETTINGS ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
    float CinematicCameraSpeed = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
    float BallFollowDistance = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
    float BallFollowHeight = 150.0f;

private:
    // === RECORDING STATE ===
    UPROPERTY()
    bool bIsRecording = false;

    UPROPERTY()
    bool bRecordingPaused = false;

    UPROPERTY()
    float RecordingDuration = 0.0f;

    UPROPERTY()
    float LastFrameTime = 0.0f;

    // === PLAYBACK STATE ===
    UPROPERTY()
    bool bIsPlaying = false;

    UPROPERTY()
    bool bPlaybackPaused = false;

    UPROPERTY()
    float PlaybackTime = 0.0f;

    UPROPERTY()
    float PlaybackSpeed = 1.0f;

    UPROPERTY()
    int32 CurrentFrameIndex = 0;

    UPROPERTY()
    ECameraReplayMode CurrentCameraMode = ECameraReplayMode::Cinematic;

    UPROPERTY()
    float LastCameraSwitchTime = 0.0f;

    // === DATA ===
    UPROPERTY()
    FSGReplayData CurrentReplayData;

    // === CACHED REFERENCES ===
    UPROPERTY()
    ASGCharacter* CachedPlayer = nullptr;

    UPROPERTY()
    ASGGolfBall* CachedBall = nullptr;

    UPROPERTY()
    UCameraComponent* CachedCamera = nullptr;

    UPROPERTY()
    APawn* CachedOriginalPawn = nullptr;

    // === CINEMATIC CAMERA ===
    UPROPERTY()
    AActor* CinematicCameraActor = nullptr;

    // === PRIVATE FUNCTIONS ===
    void RecordFrame();
    void PlaybackFrame();
    FSGReplayFrameData InterpolateFrameData(const FSGReplayFrameData& FrameA, const FSGReplayFrameData& FrameB, float Alpha) const;
    void UpdateCinematicCamera();
    void UpdateBallFollowCamera();
    void UpdateStaticOverviewCamera();
    void SetupCinematicCamera();
    void CleanupCinematicCamera();
    void CacheReferences();
    FString GenerateReplayFileName() const;
    FString GetReplaySaveDirectory() const;
    void AutoSwitchCamera();
};