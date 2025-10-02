#include "SGCameraRecorder.h"
#include "SGVideoEncoder.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Engine.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/DateTime.h"
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2D.h"
#include "RenderingThread.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Modules/ModuleManager.h"
#include "Async/Async.h"
#include "HAL/PlatformProcess.h"
// Media Player includes
#include "MediaPlayer.h"
#include "FileMediaSource.h"
#include "MediaTexture.h"
#include "MediaSoundComponent.h"
// Texture resource includes
#include "TextureResource.h"

USGCameraRecorder::USGCameraRecorder()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
    
    SetupComponents();
}

void USGCameraRecorder::BeginPlay()
{
    Super::BeginPlay();
    
    SetupRenderTarget();
    SetupMediaComponents();
    UpdateScreenMaterial();
    LoadRecordingsFromSave();
    
    // Create video encoder
    VideoEncoder = NewObject<USGVideoEncoder>(this);
    if (VideoEncoder)
    {
        VideoEncoder->OnEncodingComplete.BindUObject(this, &USGCameraRecorder::OnVideoEncodingComplete);
        VideoEncoder->OnEncodingProgress.BindUObject(this, &USGCameraRecorder::OnVideoEncodingProgressUpdate);
    }
    
    if (bAutoPlayLastRecording && SavedRecordings.Num() > 0)
    {
        PlayRecording(-1);
    }
}

void USGCameraRecorder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    if (CurrentState == ECameraRecorderState::Recording && !bIsPaused)
    {
        CurrentRecordingTime += DeltaTime;
        OnRecordingProgress.Broadcast(CurrentRecordingTime, MaxRecordingDuration);
        
        if (CurrentRecordingTime >= MaxRecordingDuration)
        {
            StopRecording();
        }
    }
    else if (CurrentState == ECameraRecorderState::Playing && !bIsPaused)
    {
        if (SavedRecordings.Num() > 0)
        {
            int32 CurrentIndex = SavedRecordings.Num() - 1;
            float TotalDuration = SavedRecordings[CurrentIndex].Duration;
            
            CurrentPlaybackTime += DeltaTime;
            OnRecordingProgress.Broadcast(CurrentPlaybackTime, TotalDuration);
            
            if (CurrentPlaybackTime >= TotalDuration)
            {
                if (bLoopPlayback)
                {
                    CurrentPlaybackTime = 0.0f;
                }
                else
                {
                    StopPlayback();
                }
            }
        }
    }
    else if (CurrentState == ECameraRecorderState::Encoding)
    {
        // Update encoding progress
        if (VideoEncoder)
        {
            VideoEncodingProgress = VideoEncoder->GetEncodingProgress();
            OnVideoEncodingProgress.Broadcast(VideoEncodingProgress);
        }
    }
}

void USGCameraRecorder::SetupComponents()
{
    SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    SceneCaptureComponent->SetupAttachment(this);
    SceneCaptureComponent->bCaptureEveryFrame = false;
    SceneCaptureComponent->bCaptureOnMovement = false;
    
    CameraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMeshComponent"));
    CameraMeshComponent->SetupAttachment(this);
    CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CameraMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
    
    ScreenMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMeshComponent"));
    ScreenMeshComponent->SetupAttachment(CameraMeshComponent);
    ScreenMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    if (!CameraMesh)
    {
        CameraMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
    }
    
    if (CameraMesh)
    {
        CameraMeshComponent->SetStaticMesh(CameraMesh);
    }
    
    UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Plane.Plane"));
    if (PlaneMesh)
    {
        ScreenMeshComponent->SetStaticMesh(PlaneMesh);
        ScreenMeshComponent->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
        ScreenMeshComponent->SetRelativeScale3D(ScreenScale);
    }
}

void USGCameraRecorder::SetupMediaComponents()
{
    MediaPlayer = NewObject<UMediaPlayer>(this, TEXT("CameraMediaPlayer"));
    if (MediaPlayer)
    {
        MediaPlayer->OnMediaOpened.AddDynamic(this, &USGCameraRecorder::OnMediaOpened);
        MediaPlayer->OnMediaOpenFailed.AddDynamic(this, &USGCameraRecorder::OnMediaOpenFailed);
        MediaPlayer->OnEndReached.AddDynamic(this, &USGCameraRecorder::OnMediaEnded);
        MediaPlayer->SetLooping(bLoopPlayback);
    }
    
    MediaSource = NewObject<UFileMediaSource>(this, TEXT("CameraMediaSource"));
    
    MediaTexture = NewObject<UMediaTexture>(this, TEXT("CameraMediaTexture"));
    if (MediaTexture && MediaPlayer)
    {
        MediaTexture->SetMediaPlayer(MediaPlayer);
        MediaTexture->UpdateResource();
    }
}

void USGCameraRecorder::SetupRenderTarget()
{
    if (!RenderTarget)
    {
        RenderTarget = NewObject<UTextureRenderTarget2D>(this);
        RenderTarget->InitCustomFormat(RecordingResolutionX, RecordingResolutionY, PF_B8G8R8A8, false);
        RenderTarget->UpdateResourceImmediate(true);
        
        if (SceneCaptureComponent)
        {
            SceneCaptureComponent->TextureTarget = RenderTarget;
            SceneCaptureComponent->FOVAngle = FOV;
            SceneCaptureComponent->bCaptureEveryFrame = true;
            SceneCaptureComponent->bCaptureOnMovement = true;
        }
    }
}

void USGCameraRecorder::UpdateScreenMaterial()
{
    if (ScreenMaterial && ScreenMeshComponent && RenderTarget)
    {
        if (!ScreenMaterialInstance)
        {
            ScreenMaterialInstance = UMaterialInstanceDynamic::Create(ScreenMaterial, this);
            ScreenMeshComponent->SetMaterial(0, ScreenMaterialInstance);
        }
        
        if (ScreenMaterialInstance)
        {
            ScreenMaterialInstance->SetTextureParameterValue(TEXT("ScreenTexture"), RenderTarget);
        }
    }
}

// Core recording functions
void USGCameraRecorder::StartRecording(const FString& RecordingName)
{
    if (CurrentState == ECameraRecorderState::Recording)
    {
        UE_LOG(LogTemp, Warning, TEXT("Already recording!"));
        return;
    }
    
    if (!EnsureDesktopDirectoryExists())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to ensure desktop directory exists"));
        return;
    }
    
    CurrentRecordingName = RecordingName.IsEmpty() ? GenerateUniqueRecordingName() : RecordingName;
    CurrentRecordingTime = 0.0f;
    TotalPausedTime = 0.0f;
    RecordedFrames.Empty();
    bIsPaused = false;
    
    int32 EstimatedFrames = FMath::CeilToInt(MaxRecordingDuration * RecordingFPS);
    RecordedFrames.Reserve(EstimatedFrames);
    
    if (SceneCaptureComponent)
    {
        SceneCaptureComponent->bCaptureEveryFrame = true;
        float CaptureInterval = 1.0f / RecordingFPS;
        GetWorld()->GetTimerManager().SetTimer(RecordingTimerHandle, this, &USGCameraRecorder::CaptureFrame, CaptureInterval, true);
    }
    
    ChangeState(ECameraRecorderState::Recording);
    UE_LOG(LogTemp, Log, TEXT("Started recording: %s"), *CurrentRecordingName);
}

void USGCameraRecorder::StopRecording()
{
    if (CurrentState != ECameraRecorderState::Recording)
    {
        return;
    }
    
    if (SceneCaptureComponent)
    {
        SceneCaptureComponent->bCaptureEveryFrame = false;
    }
    
    GetWorld()->GetTimerManager().ClearTimer(RecordingTimerHandle);
    
    FCameraRecordingData NewRecording;
    NewRecording.RecordingName = CurrentRecordingName;
    NewRecording.RecordingDate = FDateTime::Now();
    NewRecording.Duration = CurrentRecordingTime;
    NewRecording.RecordingLocation = GetComponentLocation();
    NewRecording.RecordingRotation = GetComponentRotation();
    NewRecording.FilePath = FPaths::Combine(GetRecordingDirectory(), CurrentRecordingName + TEXT(".sgcam"));
    
    FString DesktopVideoPath = GetDesktopVideoPath(CurrentRecordingName);
    NewRecording.DesktopFilePath = DesktopVideoPath;
    
    SavedRecordings.Add(NewRecording);
    SaveRecordingsToSave();
    
    ChangeState(ECameraRecorderState::Idle);
    
    UE_LOG(LogTemp, Log, TEXT("Stopped recording: %s (Duration: %.2f seconds, Frames: %d)"), 
           *CurrentRecordingName, CurrentRecordingTime, RecordedFrames.Num());
    
    // Auto-save to desktop as MP4 if enabled
    if (bAutoSaveToDesktop && bAutoConvertToMp4)
    {
        int32 RecordingIndex = SavedRecordings.Num() - 1;
        EncodeVideoMP4Async(RecordingIndex);
    }
}

// NEW: Video Encoding Functions
void USGCameraRecorder::EncodeVideoMP4(int32 RecordingIndex)
{
    if (RecordingIndex < 0 || RecordingIndex >= SavedRecordings.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid recording index for MP4 encoding: %d"), RecordingIndex);
        return;
    }

    if (RecordedFrames.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No frame data available for encoding"));
        return;
    }

    const FCameraRecordingData& Recording = SavedRecordings[RecordingIndex];
    FString OutputPath = Recording.DesktopFilePath;

    UE_LOG(LogTemp, Log, TEXT("Starting MP4 encoding for: %s"), *Recording.RecordingName);

    // Use FFmpeg encoding
    bool bSuccess = USGFFmpegVideoEncoder::EncodeFramesToMP4WithFFmpeg(
        RecordedFrames, OutputPath, RecordingResolutionX, RecordingResolutionY, 
        RecordingFPS, VideoQuality);

    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("MP4 encoding completed successfully: %s"), *OutputPath);
        
        // Update recording data
        SavedRecordings[RecordingIndex].DesktopFilePath = OutputPath;
        SaveRecordingsToSave();
        
        OnVideoSaved.Broadcast(OutputPath, true);
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
                FString::Printf(TEXT("? MP4 saved: %s"), *FPaths::GetCleanFilename(OutputPath)));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MP4 encoding failed for: %s"), *Recording.RecordingName);
        OnVideoSaved.Broadcast(OutputPath, false);
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, 
                TEXT("? MP4 encoding failed - Check if FFmpeg is installed"));
        }
    }
}

void USGCameraRecorder::EncodeVideoMP4Async(int32 RecordingIndex)
{
    if (CurrentState == ECameraRecorderState::Encoding)
    {
        UE_LOG(LogTemp, Warning, TEXT("Video encoding already in progress"));
        return;
    }

    if (RecordingIndex < 0 || RecordingIndex >= SavedRecordings.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid recording index for async MP4 encoding: %d"), RecordingIndex);
        return;
    }

    ChangeState(ECameraRecorderState::Encoding);
    VideoEncodingProgress = 0.0f;

    const FCameraRecordingData& Recording = SavedRecordings[RecordingIndex];
    FString OutputPath = Recording.DesktopFilePath;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, 
            TEXT("?? Encoding MP4 video..."));
    }

    // Process encoding in background thread
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, RecordingIndex, OutputPath]()
    {
        // Simulate progress updates
        for (int32 Progress = 0; Progress <= 10; Progress++)
        {
            AsyncTask(ENamedThreads::GameThread, [this, Progress]()
            {
                VideoEncodingProgress = Progress / 10.0f;
                OnVideoEncodingProgress.Broadcast(VideoEncodingProgress);
            });
            
            FPlatformProcess::Sleep(0.1f); // Small delay for progress updates
        }

        // Do the actual encoding
        bool bSuccess = USGFFmpegVideoEncoder::EncodeFramesToMP4WithFFmpeg(
            RecordedFrames, OutputPath, RecordingResolutionX, RecordingResolutionY, 
            RecordingFPS, VideoQuality);

        // Return to game thread for completion handling
        AsyncTask(ENamedThreads::GameThread, [this, bSuccess, OutputPath, RecordingIndex]()
        {
            OnVideoEncodingComplete(bSuccess, OutputPath);
            
            if (bSuccess && RecordingIndex >= 0 && RecordingIndex < SavedRecordings.Num())
            {
                SavedRecordings[RecordingIndex].DesktopFilePath = OutputPath;
                SaveRecordingsToSave();
            }
        });
    });
}

bool USGCameraRecorder::IsVideoEncoding() const
{
    return CurrentState == ECameraRecorderState::Encoding;
}

void USGCameraRecorder::CancelVideoEncoding()
{
    if (CurrentState == ECameraRecorderState::Encoding)
    {
        if (VideoEncoder)
        {
            VideoEncoder->CancelVideoEncoding();
        }
        
        ChangeState(ECameraRecorderState::Idle);
        VideoEncodingProgress = 0.0f;
        
        UE_LOG(LogTemp, Log, TEXT("Video encoding cancelled"));
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, 
                TEXT("?? Video encoding cancelled"));
        }
    }
}

void USGCameraRecorder::OnVideoEncodingComplete(bool bSuccess, const FString& OutputPath)
{
    ChangeState(ECameraRecorderState::Idle);
    VideoEncodingProgress = bSuccess ? 1.0f : 0.0f;

    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("Video encoding completed successfully: %s"), *OutputPath);
        OnVideoSaved.Broadcast(OutputPath, true);
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
                FString::Printf(TEXT("? MP4 ready: %s"), *FPaths::GetCleanFilename(OutputPath)));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Video encoding failed"));
        OnVideoSaved.Broadcast(OutputPath, false);
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, 
                TEXT("? MP4 encoding failed"));
        }
    }

    OnVideoEncodingProgress.Broadcast(VideoEncodingProgress);
}

void USGCameraRecorder::OnVideoEncodingProgressUpdate(float Progress)
{
    VideoEncodingProgress = Progress;
    OnVideoEncodingProgress.Broadcast(Progress);
    
    // Show progress updates occasionally
    static float LastProgressShown = 0.0f;
    if (Progress - LastProgressShown > 0.1f) // Every 10%
    {
        LastProgressShown = Progress;
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Cyan, 
                FString::Printf(TEXT("?? Encoding: %.0f%%"), Progress * 100.0f));
        }
    }
}

// Updated interaction text to show encoding state
FText USGCameraRecorder::GetInteractionText_Implementation() const
{
    switch (CurrentState)
    {
        case ECameraRecorderState::Idle:
            if (SavedRecordings.Num() > 0)
            {
                return FText::FromString(TEXT("Press E to Record/Play Camera"));
            }
            else
            {
                return FText::FromString(TEXT("Press E to Start Recording"));
            }
        case ECameraRecorderState::Recording:
            return FText::FromString(FString::Printf(TEXT("Recording... (%.1fs) - Press E to Stop"), CurrentRecordingTime));
        case ECameraRecorderState::Playing:
            return FText::FromString(TEXT("Playing - Press E to Stop"));
        case ECameraRecorderState::Encoding:
            return FText::FromString(FString::Printf(TEXT("Encoding MP4... (%.0f%%)"), VideoEncodingProgress * 100.0f));
        default:
            return FText::FromString(TEXT("Camera"));
    }
}

void USGCameraRecorder::Interact_Implementation(APawn* InstigatorPawn)
{
    switch (CurrentState)
    {
        case ECameraRecorderState::Idle:
            StartRecording();
            break;
        case ECameraRecorderState::Recording:
            StopRecording();
            break;
        case ECameraRecorderState::Playing:
            StopPlayback();
            break;
        case ECameraRecorderState::Encoding:
            // Show encoding status
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, 
                    FString::Printf(TEXT("?? Still encoding... %.0f%% complete"), VideoEncodingProgress * 100.0f));
            }
            break;
        case ECameraRecorderState::Paused:
            if (SavedRecordings.Num() > 0)
            {
                ResumePlayback();
            }
            else
            {
                ResumeRecording();
            }
            break;
    }
}

// Helper functions continue...
void USGCameraRecorder::CaptureFrame()
{
    if (!SceneCaptureComponent || !RenderTarget)
    {
        return;
    }
    
    SceneCaptureComponent->CaptureScene();
    
    ENQUEUE_RENDER_COMMAND(CaptureFrameCommand)(
        [this](FRHICommandListImmediate& RHICmdList)
        {
            if (RenderTarget && RenderTarget->GetResource())
            {
                FRenderTarget* RenderTargetResource = RenderTarget->GetRenderTargetResource();
                if (RenderTargetResource)
                {
                    TArray<FColor> TempPixelData;
                    RenderTargetResource->ReadPixels(TempPixelData);
                    
                    AsyncTask(ENamedThreads::GameThread, [this, TempPixelData]()
                    {
                        RecordedFrames.Add(TempPixelData);
                        
                        if (RecordedFrames.Num() % 30 == 0)
                        {
                            UE_LOG(LogTemp, Log, TEXT("Captured %d frames"), RecordedFrames.Num());
                        }
                    });
                }
            }
        });
}

// Utility functions
void USGCameraRecorder::ChangeState(ECameraRecorderState NewState)
{
    if (CurrentState != NewState)
    {
        CurrentState = NewState;
        OnRecordingStateChanged.Broadcast(NewState);
    }
}

FString USGCameraRecorder::GenerateUniqueRecordingName()
{
    FDateTime Now = FDateTime::Now();
    return FString::Printf(TEXT("CameraRecording_%s"), *Now.ToString(TEXT("%Y%m%d_%H%M%S")));
}

FString USGCameraRecorder::GetRecordingDirectory() const
{
    return FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CameraRecordings"));
}

FString USGCameraRecorder::GetDesktopDirectory() const
{
    return GetValidDesktopPath();
}

FString USGCameraRecorder::GetValidDesktopPath() const
{
    FString DesktopPath;
    
#if PLATFORM_WINDOWS
    FString UserProfile = FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE"));
    if (!UserProfile.IsEmpty())
    {
        DesktopPath = FPaths::Combine(UserProfile, TEXT("Desktop"), TEXT("SocialGolfRecordings"));
    }
    else
    {
        DesktopPath = TEXT("C:\\Users\\dop3b\\Desktop\\SocialGolfRecordings");
    }
#else
    DesktopPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Recordings"));
#endif

    return DesktopPath;
}

FString USGCameraRecorder::GetDesktopVideoPath(const FString& RecordingName) const
{
    FString DesktopDir = GetValidDesktopPath();
    FString FileName = FString::Printf(TEXT("%s.mp4"), *RecordingName);
    return FPaths::Combine(DesktopDir, FileName);
}

bool USGCameraRecorder::EnsureDesktopDirectoryExists()
{
    FString DesktopPath = GetValidDesktopPath();
    
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*DesktopPath))
    {
        if (!PlatformFile.CreateDirectoryTree(*DesktopPath))
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create desktop directory: %s"), *DesktopPath);
            return false;
        }
    }
    
    return true;
}

// Stub implementations for remaining functions
void USGCameraRecorder::PauseRecording() { /* Implementation needed */ }
void USGCameraRecorder::ResumeRecording() { /* Implementation needed */ }
void USGCameraRecorder::PlayRecording(int32 RecordingIndex) { /* Implementation needed */ }
void USGCameraRecorder::StopPlayback() { /* Implementation needed */ }
void USGCameraRecorder::PausePlayback() { /* Implementation needed */ }
void USGCameraRecorder::ResumePlayback() { /* Implementation needed */ }
void USGCameraRecorder::SeekToTime(float TimeInSeconds) { /* Implementation needed */ }
void USGCameraRecorder::LoadVideoFile(const FString& VideoFilePath) { /* Implementation needed */ }
void USGCameraRecorder::PlayVideoFromDesktop(int32 RecordingIndex) { /* Implementation needed */ }
bool USGCameraRecorder::IsVideoFileValid(const FString& VideoFilePath) const { return false; }
void USGCameraRecorder::SaveRecordingToDesktop(int32 RecordingIndex) { /* Implementation needed */ }
void USGCameraRecorder::DeleteRecording(int32 RecordingIndex) { /* Implementation needed */ }
void USGCameraRecorder::LoadRecordingsFromSave() { /* Implementation needed */ }
void USGCameraRecorder::SaveRecordingsToSave() { /* Implementation needed */ }
FCameraRecordingData USGCameraRecorder::GetRecordingData(int32 Index) const { return FCameraRecordingData(); }
void USGCameraRecorder::ConvertFramesToMp4(int32 RecordingIndex, const FString& OutputPath) { /* Implementation needed */ }
void USGCameraRecorder::TestDesktopExport() { /* Implementation needed */ }
FString USGCameraRecorder::GetDesktopPathForTesting() { return GetDesktopDirectory(); }
void USGCameraRecorder::ExportAllRecordingsToDesktop() { /* Implementation needed */ }
void USGCameraRecorder::CreateTestRecordingAndExport() { /* Implementation needed */ }
void USGCameraRecorder::ForceCreateDesktopFolder() { /* Implementation needed */ }
void USGCameraRecorder::TestDesktopAccess() { /* Implementation needed */ }
void USGCameraRecorder::QuickDesktopTest() { 
    UE_LOG(LogTemp, Log, TEXT("QuickDesktopTest: Desktop path: %s"), *GetValidDesktopPath());
}
void USGCameraRecorder::TestCameraDesktop() { QuickDesktopTest(); }

// Media event handlers
void USGCameraRecorder::OnMediaOpened(FString OpenedUrl) { /* Implementation needed */ }
void USGCameraRecorder::OnMediaOpenFailed(FString FailedUrl) { /* Implementation needed */ }
void USGCameraRecorder::OnMediaEnded() { /* Implementation needed */ }