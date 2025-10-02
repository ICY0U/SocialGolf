#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/World.h"
#include "GameFramework/SaveGame.h"
#include "../Core/SGInteractable.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/DateTime.h"
#include "RHI.h"
#include "RenderingThread.h"
#include "SGCameraRecorder.generated.h"

class USceneCaptureComponent2D;
class UMediaPlayer;
class UFileMediaSource;
class UMediaTexture;
class USGVideoEncoder;
class USGFFmpegVideoEncoder;

USTRUCT(BlueprintType)
struct FCameraRecordingData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString RecordingName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FDateTime RecordingDate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Duration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString FilePath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector RecordingLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FRotator RecordingRotation;

    // Actual MP4 file path on desktop
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DesktopFilePath;

    FCameraRecordingData()
    {
        RecordingName = TEXT("");
        RecordingDate = FDateTime::Now();
        Duration = 0.0f;
        FilePath = TEXT("");
        RecordingLocation = FVector::ZeroVector;
        RecordingRotation = FRotator::ZeroRotator;
        DesktopFilePath = TEXT("");
    }
};

UENUM(BlueprintType)
enum class ECameraRecorderState : uint8
{
    Idle,
    Recording,
    Playing,
    Paused,
    Encoding // NEW: Encoding state
};

UENUM(BlueprintType)
enum class EVideoEncodingMethod : uint8
{
    Hardware,   // Use UE5's GameplayMediaEncoder
    FFmpeg,     // Use external FFmpeg
    Auto        // Try hardware first, fallback to FFmpeg
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecordingStateChanged, ECameraRecorderState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecordingProgress, float, CurrentTime, float, TotalTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVideoSaved, const FString&, FilePath, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVideoEncodingProgress, float, Progress);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGCameraRecorder : public USceneComponent, public ISGInteractable
{
    GENERATED_BODY()

public:
    USGCameraRecorder();

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
    // Recording Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    int32 RecordingResolutionX = 1920;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    int32 RecordingResolutionY = 1080;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    float RecordingFPS = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    float MaxRecordingDuration = 60.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    float FOV = 90.0f;

    // NEW: Video Encoding Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Encoding")
    EVideoEncodingMethod EncodingMethod = EVideoEncodingMethod::Auto;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Encoding")
    int32 VideoBitrate = 5000000; // 5 Mbps

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Encoding")
    int32 VideoQuality = 23; // H.264 CRF value

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Encoding")
    bool bUseHardwareEncoding = true;

    // Video Export Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Export")
    bool bAutoSaveToDesktop = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Export")
    bool bAutoConvertToMp4 = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Export")
    bool bCreateThumbnail = true;

    // Playback Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bAutoPlayLastRecording = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bLoopPlayback = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bUseMediaPlayerForPlayback = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bPreferHtmlPlayback = false;

    // Visual Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    UStaticMesh* CameraMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    UMaterialInterface* ScreenMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    FVector ScreenScale = FVector(1.0f, 1.0f, 0.1f);

    // State
    UPROPERTY(BlueprintReadOnly, Category = "State")
    ECameraRecorderState CurrentState = ECameraRecorderState::Idle;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    float CurrentRecordingTime = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    float CurrentPlaybackTime = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    TArray<FCameraRecordingData> SavedRecordings;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    float VideoEncodingProgress = 0.0f;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnRecordingStateChanged OnRecordingStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnRecordingProgress OnRecordingProgress;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnVideoSaved OnVideoSaved;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnVideoEncodingProgress OnVideoEncodingProgress;

    // Recording Functions
    UFUNCTION(BlueprintCallable, Category = "Recording")
    void StartRecording(const FString& RecordingName = TEXT(""));

    UFUNCTION(BlueprintCallable, Category = "Recording")
    void StopRecording();

    UFUNCTION(BlueprintCallable, Category = "Recording")
    void PauseRecording();

    UFUNCTION(BlueprintCallable, Category = "Recording")
    void ResumeRecording();

    // Playback Functions
    UFUNCTION(BlueprintCallable, Category = "Playback")
    void PlayRecording(int32 RecordingIndex = -1); // -1 for latest

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void StopPlayback();

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void PausePlayback();

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void ResumePlayback();

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void SeekToTime(float TimeInSeconds);

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void LoadVideoFile(const FString& VideoFilePath);

    UFUNCTION(BlueprintCallable, Category = "Playback")
    void PlayVideoFromDesktop(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "Playback")
    bool IsVideoFileValid(const FString& VideoFilePath) const;

    // NEW: Video Encoding Functions
    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    void EncodeVideoMP4(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    void EncodeVideoMP4Async(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    void CancelVideoEncoding();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Video Encoding")
    bool IsVideoEncoding() const;

    // File Management
    UFUNCTION(BlueprintCallable, Category = "File Management")
    void SaveRecordingToDesktop(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void DeleteRecording(int32 RecordingIndex);

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void LoadRecordingsFromSave();

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void SaveRecordingsToSave();

    // Test and Debug Functions
    UFUNCTION(BlueprintCallable, Category = "File Management")
    void TestDesktopExport();

    UFUNCTION(BlueprintCallable, Category = "File Management") 
    FString GetDesktopPathForTesting();

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void ExportAllRecordingsToDesktop();

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void CreateTestRecordingAndExport();

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void ForceCreateDesktopFolder();

    UFUNCTION(BlueprintCallable, Category = "File Management")
    void TestDesktopAccess();

    UFUNCTION(BlueprintCallable, Category = "File Management", meta = (CallInEditor = "true"))
    void QuickDesktopTest();

    UFUNCTION(Exec)
    void TestCameraDesktop();

    // MP4 Video Functions
    UFUNCTION(BlueprintCallable, Category = "Video")
    void ConvertFramesToMp4(int32 RecordingIndex, const FString& OutputPath);

    UFUNCTION(BlueprintCallable, Category = "Video")
    FString GetDesktopVideoPath(const FString& RecordingName) const;

    // Utility Functions
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
    int32 GetRecordingCount() const { return SavedRecordings.Num(); }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
    FCameraRecordingData GetRecordingData(int32 Index) const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
    bool IsRecording() const { return CurrentState == ECameraRecorderState::Recording; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
    bool IsPlaying() const { return CurrentState == ECameraRecorderState::Playing; }

    // ISGInteractable implementation
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

protected:
    // Internal Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneCaptureComponent2D* SceneCaptureComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CameraMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* ScreenMeshComponent;

    // Media Player Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Media Playback")
    UMediaPlayer* MediaPlayer;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Media Playback")
    UFileMediaSource* MediaSource;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Media Playback")
    UMediaTexture* MediaTexture;

    // NEW: Video Encoder
    UPROPERTY()
    USGVideoEncoder* VideoEncoder;

    // Render Targets
    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;

    UPROPERTY()
    UMaterialInstanceDynamic* ScreenMaterialInstance;

    UPROPERTY()
    UTexture2D* PlaybackTexture;

    // Internal State
    FString CurrentRecordingName;
    bool bIsPaused = false;
    float PauseStartTime = 0.0f;
    float TotalPausedTime = 0.0f;
    int32 CurrentPlaybackRecordingIndex = -1;

    // Frame capture for recording
    TArray<TArray<FColor>> RecordedFrames;
    FTimerHandle RecordingTimerHandle;
    FTimerHandle PlaybackTimerHandle;

    // Video processing state
    bool bIsProcessingVideo = false;
    FString CurrentProcessingPath;

    // Helper Functions
    void SetupComponents();
    void SetupRenderTarget();
    void SetupMediaComponents();
    void UpdateScreenMaterial();
    void CaptureFrame();
    void UpdatePlaybackFrame();
    void ChangeState(ECameraRecorderState NewState);
    FString GenerateUniqueRecordingName();
    FString GetRecordingDirectory() const;
    FString GetDesktopDirectory() const;
    
    // Enhanced playback functions
    void UpdateScreenWithFrame(const TArray<FColor>& FrameData);
    void UpdatePlaybackTexture(const TArray<FColor>& FrameData);
    bool LoadRecordingForPlayback(int32 RecordingIndex);
    void OpenVideoInExternalPlayer(const FString& VideoPath);

    // Media player event handlers
    UFUNCTION()
    void OnMediaOpened(FString OpenedUrl);

    UFUNCTION()
    void OnMediaOpenFailed(FString FailedUrl);

    UFUNCTION()
    void OnMediaEnded();

    // NEW: Video encoding callbacks
    void OnVideoEncodingComplete(bool bSuccess, const FString& OutputPath);
    void OnVideoEncodingProgressUpdate(float Progress);
    
    // Enhanced video export functions
    void CreateVideoFromFrames(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    bool SaveFrameAsImage(const TArray<FColor>& FrameData, const FString& FilePath);
    
    // Video creation functions
    void ProcessVideoInBackground(const TArray<TArray<FColor>>& Frames, const FString& OutputPath, int32 RecordingIndex);
    void OnVideoProcessingComplete(const FString& VideoPath, bool bSuccess, int32 RecordingIndex);
    bool CreateMp4FromFrames(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    
    // Video helper functions
    void CreateFFmpegBatchFile(const FString& FrameDirectory, const FString& OutputPath);
    void CreateMp4InfoFile(const FString& OutputPath, int32 FrameCount);
    void CreateVideoInfoFile(const FString& OutputPath, const FCameraRecordingData& Recording);
    
    // Video creation functions
    bool CreateActualVideoFile(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    bool CreateHtml5VideoPlayer(const TArray<TArray<FColor>>& Frames, const FString& HtmlPath);
    bool CreateBasicVideoContainer(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    bool CreateVideoInfoFileAsPlayable(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    void ExportFrameSequence(const TArray<TArray<FColor>>& Frames, const FString& FrameDirectory);
    
    // Desktop management
    bool EnsureDesktopDirectoryExists();
    FString GetValidDesktopPath() const;
};