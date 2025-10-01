#include "SGCameraRecorder.h"
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
    UpdateScreenMaterial();
    LoadRecordingsFromSave();
    
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
            int32 CurrentIndex = SavedRecordings.Num() - 1; // Playing latest by default
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
}

void USGCameraRecorder::SetupComponents()
{
    // Create scene capture component
    SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    SceneCaptureComponent->SetupAttachment(this);
    SceneCaptureComponent->bCaptureEveryFrame = false;
    SceneCaptureComponent->bCaptureOnMovement = false;
    
    // Create camera mesh component
    CameraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMeshComponent"));
    CameraMeshComponent->SetupAttachment(this);
    CameraMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CameraMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
    
    // Create screen mesh component
    ScreenMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMeshComponent"));
    ScreenMeshComponent->SetupAttachment(CameraMeshComponent);
    ScreenMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    // Load default meshes if not set
    if (!CameraMesh)
    {
        CameraMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
    }
    
    if (CameraMesh)
    {
        CameraMeshComponent->SetStaticMesh(CameraMesh);
    }
    
    // Set up screen mesh (simple plane)
    UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Plane.Plane"));
    if (PlaneMesh)
    {
        ScreenMeshComponent->SetStaticMesh(PlaneMesh);
        ScreenMeshComponent->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
        ScreenMeshComponent->SetRelativeScale3D(ScreenScale);
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
            
            // Enable real-time capture for view switching
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

void USGCameraRecorder::StartRecording(const FString& RecordingName)
{
    if (CurrentState == ECameraRecorderState::Recording)
    {
        UE_LOG(LogTemp, Warning, TEXT("Already recording!"));
        return;
    }
    
    // Generate unique name if not provided
    CurrentRecordingName = RecordingName.IsEmpty() ? GenerateUniqueRecordingName() : RecordingName;
    
    // Reset recording state
    CurrentRecordingTime = 0.0f;
    TotalPausedTime = 0.0f;
    RecordedFrames.Empty();
    bIsPaused = false;
    
    // Start capturing frames
    if (SceneCaptureComponent)
    {
        SceneCaptureComponent->bCaptureEveryFrame = true;
        
        // Set up timer for frame capture
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
    
    // Stop capturing
    if (SceneCaptureComponent)
    {
        SceneCaptureComponent->bCaptureEveryFrame = false;
    }
    
    GetWorld()->GetTimerManager().ClearTimer(RecordingTimerHandle);
    
    // Save recording data
    FCameraRecordingData NewRecording;
    NewRecording.RecordingName = CurrentRecordingName;
    NewRecording.RecordingDate = FDateTime::Now();
    NewRecording.Duration = CurrentRecordingTime;
    NewRecording.RecordingLocation = GetComponentLocation();
    NewRecording.RecordingRotation = GetComponentRotation();
    
    // Create file path (for now, we'll save frame data in memory)
    // In a full implementation, you'd want to compress this to a video file
    NewRecording.FilePath = FPaths::Combine(GetRecordingDirectory(), CurrentRecordingName + TEXT(".sgcam"));
    
    SavedRecordings.Add(NewRecording);
    SaveRecordingsToSave();
    
    ChangeState(ECameraRecorderState::Idle);
    
    UE_LOG(LogTemp, Log, TEXT("Stopped recording: %s (Duration: %.2f seconds, Frames: %d)"), 
           *CurrentRecordingName, CurrentRecordingTime, RecordedFrames.Num());
}

void USGCameraRecorder::PauseRecording()
{
    if (CurrentState == ECameraRecorderState::Recording && !bIsPaused)
    {
        bIsPaused = true;
        PauseStartTime = GetWorld()->GetTimeSeconds();
        GetWorld()->GetTimerManager().PauseTimer(RecordingTimerHandle);
        UE_LOG(LogTemp, Log, TEXT("Paused recording"));
    }
}

void USGCameraRecorder::ResumeRecording()
{
    if (CurrentState == ECameraRecorderState::Recording && bIsPaused)
    {
        bIsPaused = false;
        TotalPausedTime += GetWorld()->GetTimeSeconds() - PauseStartTime;
        GetWorld()->GetTimerManager().UnPauseTimer(RecordingTimerHandle);
        UE_LOG(LogTemp, Log, TEXT("Resumed recording"));
    }
}

void USGCameraRecorder::PlayRecording(int32 RecordingIndex)
{
    if (SavedRecordings.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No recordings available to play"));
        return;
    }
    
    // Use latest recording if index is -1 or invalid
    if (RecordingIndex < 0 || RecordingIndex >= SavedRecordings.Num())
    {
        RecordingIndex = SavedRecordings.Num() - 1;
    }
    
    CurrentPlaybackTime = 0.0f;
    bIsPaused = false;
    
    // Set up playback timer
    float PlaybackInterval = 1.0f / RecordingFPS;
    GetWorld()->GetTimerManager().SetTimer(PlaybackTimerHandle, this, &USGCameraRecorder::UpdatePlaybackFrame, PlaybackInterval, true);
    
    ChangeState(ECameraRecorderState::Playing);
    
    UE_LOG(LogTemp, Log, TEXT("Started playing recording: %s"), *SavedRecordings[RecordingIndex].RecordingName);
}

void USGCameraRecorder::StopPlayback()
{
    if (CurrentState != ECameraRecorderState::Playing)
    {
        return;
    }
    
    GetWorld()->GetTimerManager().ClearTimer(PlaybackTimerHandle);
    CurrentPlaybackTime = 0.0f;
    
    ChangeState(ECameraRecorderState::Idle);
    
    UE_LOG(LogTemp, Log, TEXT("Stopped playback"));
}

void USGCameraRecorder::PausePlayback()
{
    if (CurrentState == ECameraRecorderState::Playing && !bIsPaused)
    {
        bIsPaused = true;
        GetWorld()->GetTimerManager().PauseTimer(PlaybackTimerHandle);
        UE_LOG(LogTemp, Log, TEXT("Paused playback"));
    }
}

void USGCameraRecorder::ResumePlayback()
{
    if (CurrentState == ECameraRecorderState::Playing && bIsPaused)
    {
        bIsPaused = false;
        GetWorld()->GetTimerManager().UnPauseTimer(PlaybackTimerHandle);
        UE_LOG(LogTemp, Log, TEXT("Resumed playback"));
    }
}

void USGCameraRecorder::SeekToTime(float TimeInSeconds)
{
    if (CurrentState == ECameraRecorderState::Playing && SavedRecordings.Num() > 0)
    {
        int32 CurrentIndex = SavedRecordings.Num() - 1;
        float TotalDuration = SavedRecordings[CurrentIndex].Duration;
        
        CurrentPlaybackTime = FMath::Clamp(TimeInSeconds, 0.0f, TotalDuration);
        UpdatePlaybackFrame();
    }
}

void USGCameraRecorder::SaveRecordingToDesktop(int32 RecordingIndex)
{
    if (RecordingIndex < 0 || RecordingIndex >= SavedRecordings.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid recording index: %d"), RecordingIndex);
        return;
    }
    
    // This is a simplified implementation
    // In a full system, you'd want to export to a standard video format like MP4
    FString DesktopPath = GetDesktopDirectory();
    FString FileName = SavedRecordings[RecordingIndex].RecordingName + TEXT(".mp4");
    FString OutputPath = FPaths::Combine(DesktopPath, FileName);
    
    // For now, just log the export (you'd implement actual video encoding here)
    UE_LOG(LogTemp, Log, TEXT("Exporting recording '%s' to: %s"), 
           *SavedRecordings[RecordingIndex].RecordingName, *OutputPath);
    
    // TODO: Implement actual video file creation
    // CreateVideoFromFrames(RecordedFrames, OutputPath);
}

void USGCameraRecorder::DeleteRecording(int32 RecordingIndex)
{
    if (RecordingIndex >= 0 && RecordingIndex < SavedRecordings.Num())
    {
        FString RecordingName = SavedRecordings[RecordingIndex].RecordingName;
        SavedRecordings.RemoveAt(RecordingIndex);
        SaveRecordingsToSave();
        
        UE_LOG(LogTemp, Log, TEXT("Deleted recording: %s"), *RecordingName);
    }
}

void USGCameraRecorder::LoadRecordingsFromSave()
{
    // This would integrate with your existing save system
    // For now, just initialize empty array
    SavedRecordings.Empty();
    UE_LOG(LogTemp, Log, TEXT("Loaded recordings from save (placeholder)"));
}

void USGCameraRecorder::SaveRecordingsToSave()
{
    // This would integrate with your existing save system
    // For now, just log the save
    UE_LOG(LogTemp, Log, TEXT("Saved %d recordings to save system (placeholder)"), SavedRecordings.Num());
}

FCameraRecordingData USGCameraRecorder::GetRecordingData(int32 Index) const
{
    if (Index >= 0 && Index < SavedRecordings.Num())
    {
        return SavedRecordings[Index];
    }
    return FCameraRecordingData();
}

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
        default:
            return FText::FromString(TEXT("Camera"));
    }
}

void USGCameraRecorder::Interact_Implementation(APawn* InstigatorPawn)
{
    switch (CurrentState)
    {
        case ECameraRecorderState::Idle:
            if (SavedRecordings.Num() > 0)
            {
                // Toggle between record and play
                // For simplicity, start recording on first interaction
                StartRecording();
            }
            else
            {
                StartRecording();
            }
            break;
        case ECameraRecorderState::Recording:
            StopRecording();
            break;
        case ECameraRecorderState::Playing:
            StopPlayback();
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

void USGCameraRecorder::CaptureFrame()
{
    if (!SceneCaptureComponent || !RenderTarget)
    {
        return;
    }
    
    // Capture the current frame
    SceneCaptureComponent->CaptureScene();
    
    // Read the render target pixels (simplified for now)
    TArray<FColor> PixelData;
    // In a full implementation, you'd read the render target data here
    // For now, just add an empty frame to maintain timing
    RecordedFrames.Add(PixelData);
}

void USGCameraRecorder::UpdatePlaybackFrame()
{
    // In a full implementation, this would update the screen material
    // with the appropriate frame from the recorded data
    if (ScreenMaterialInstance && SavedRecordings.Num() > 0)
    {
        // Update display with current playback frame
        // This is where you'd set the texture parameter to show the recorded frame
    }
}

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
    return FString::Printf(TEXT("Recording_%s"), *Now.ToString(TEXT("%Y%m%d_%H%M%S")));
}

FString USGCameraRecorder::GetRecordingDirectory() const
{
    return FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CameraRecordings"));
}

FString USGCameraRecorder::GetDesktopDirectory() const
{
    return FPaths::Combine(FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE")), TEXT("Desktop"));
}

void USGCameraRecorder::CreateVideoFromFrames(const TArray<TArray<FColor>>& Frames, const FString& OutputPath)
{
    // This would be implemented with a video encoding library
    // For now, just placeholder
    UE_LOG(LogTemp, Log, TEXT("Creating video from %d frames to: %s"), Frames.Num(), *OutputPath);
}