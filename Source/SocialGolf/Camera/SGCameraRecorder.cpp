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
#include "Modules/ModuleManager.h"

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
    
    const FCameraRecordingData& Recording = SavedRecordings[RecordingIndex];
    FString DesktopPath = GetDesktopDirectory();
    
    // Create timestamp for unique filename
    FDateTime Now = FDateTime::Now();
    FString TimeStamp = Now.ToString(TEXT("%Y%m%d_%H%M%S"));
    
    // Create filename with recording name and timestamp
    FString BaseFileName = FString::Printf(TEXT("%s_%s"), *Recording.RecordingName, *TimeStamp);
    FString OutputPath = FPaths::Combine(DesktopPath, BaseFileName);
    
    UE_LOG(LogTemp, Log, TEXT("Starting export of recording '%s' to: %s"), 
           *Recording.RecordingName, *OutputPath);
    
    // For now, export the frames as a sequence of images
    // This creates a folder with individual frame images
    ExportFrameSequence(RecordingIndex, OutputPath);
    
    // TODO: Later we can add proper video encoding here
    // CreateVideoFromFrames(RecordedFrames, OutputPath + TEXT(".mp4"));
    
    UE_LOG(LogTemp, Log, TEXT("Recording export completed: %s"), *OutputPath);
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

    // Log the frame capture (for debugging)
    UE_LOG(LogTemp, Log, TEXT("Captured frame %d"), RecordedFrames.Num() - 1);
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
    // Get the user's desktop directory path
    FString DesktopPath;
    
#if PLATFORM_WINDOWS
    // On Windows, get the Desktop folder from user profile
    TCHAR* UserProfile = nullptr;
    size_t UserProfileSize = 0;
    
    if (_wgetenv_s(&UserProfileSize, nullptr, 0, L"USERPROFILE") == 0 && UserProfileSize > 0)
    {
        UserProfile = new TCHAR[UserProfileSize];
        if (_wgetenv_s(&UserProfileSize, UserProfile, UserProfileSize, L"USERPROFILE") == 0)
        {
            DesktopPath = FString(UserProfile) + TEXT("\\Desktop");
        }
        delete[] UserProfile;
    }
    
    // Fallback to Documents if Desktop path fails
    if (DesktopPath.IsEmpty())
    {
        DesktopPath = FPaths::ProjectDir() + TEXT("Recordings");
    }
#elif PLATFORM_MAC
    // On Mac, use ~/Desktop
    DesktopPath = FPaths::ConvertRelativePathToFull(FPaths::HomeDir() + TEXT("Desktop"));
#elif PLATFORM_LINUX
    // On Linux, use ~/Desktop
    DesktopPath = FPaths::ConvertRelativePathToFull(FPaths::HomeDir() + TEXT("Desktop"));
#else
    // Fallback for other platforms
    DesktopPath = FPaths::ProjectDir() + TEXT("Recordings");
#endif

    // Ensure the directory exists
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*DesktopPath))
    {
        // If desktop doesn't exist, create a Recordings folder in project directory
        DesktopPath = FPaths::ProjectDir() + TEXT("Recordings");
        if (!PlatformFile.DirectoryExists(*DesktopPath))
        {
            PlatformFile.CreateDirectoryTree(*DesktopPath);
        }
    }
    
    return DesktopPath;
}

void USGCameraRecorder::CreateVideoFromFrames(const TArray<TArray<FColor>>& Frames, const FString& OutputPath)
{
    // TODO: Implement actual video encoding
    // For now, this is a placeholder that creates a batch file to convert the frame sequence
    
    UE_LOG(LogTemp, Log, TEXT("CreateVideoFromFrames called with %d frames for output: %s"), Frames.Num(), *OutputPath);
    
    if (Frames.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No frames to create video from"));
        return;
    }
    
    // Get the frame directory path
    FString FrameDirectory = FPaths::GetPath(OutputPath) + TEXT("_Frames");
    
    // Create a batch file for FFmpeg conversion (if user has FFmpeg installed)
    FString BatchFilePath = FPaths::GetPath(OutputPath) + TEXT("/ConvertToVideo.bat");
    FString BatchContent = FString::Printf(
        TEXT("@echo off\n")
        TEXT("echo Converting frame sequence to video...\n")
        TEXT("echo Frame directory: %s\n")
        TEXT("echo Output video: %s.mp4\n")
        TEXT("echo.\n")
        TEXT("echo To convert frames to video, you need FFmpeg installed.\n")
        TEXT("echo Run this command if you have FFmpeg:\n")
        TEXT("echo ffmpeg -r %.1f -i \"%s/Frame_%%04d.png\" -c:v libx264 -pix_fmt yuv420p \"%s.mp4\"\n")
        TEXT("echo.\n")
        TEXT("pause\n"),
        *FrameDirectory,
        *OutputPath,
        RecordingFPS,
        *FrameDirectory,
        *OutputPath
    );
    
    if (FFileHelper::SaveStringToFile(BatchContent, *BatchFilePath))
    {
        UE_LOG(LogTemp, Log, TEXT("Created video conversion batch file: %s"), *BatchFilePath);
    }
    
    // Also create a ReadMe file with instructions
    FString ReadMePath = FPaths::GetPath(OutputPath) + TEXT("/README.txt");
    FString ReadMeContent = FString::Printf(
        TEXT("Camera Recording Export\n")
        TEXT("=======================\n\n")
        TEXT("This folder contains an exported camera recording.\n\n")
        TEXT("Contents:\n")
        TEXT("- %s_Frames/: Individual frame images (PNG format)\n")
        TEXT("- ConvertToVideo.bat: Batch file for video conversion\n")
        TEXT("- This README.txt file\n\n")
        TEXT("To create a video:\n")
        TEXT("1. Install FFmpeg (https://ffmpeg.org/)\n")
        TEXT("2. Run ConvertToVideo.bat\n")
        TEXT("   OR\n")
        TEXT("3. Use the command shown in the batch file\n\n")
        TEXT("Recording Details:\n")
        TEXT("- Frame Rate: %.1f FPS\n")
        TEXT("- Total Frames: %d\n")
        TEXT("- Resolution: %dx%d\n")
        TEXT("- Exported: %s\n"),
        *FPaths::GetBaseFilename(OutputPath),
        RecordingFPS,
        Frames.Num(),
        RecordingResolutionX, RecordingResolutionY,
        *FDateTime::Now().ToString()
    );
    
    FFileHelper::SaveStringToFile(ReadMeContent, *ReadMePath);
    UE_LOG(LogTemp, Log, TEXT("Created README file: %s"), *ReadMePath);
}

void USGCameraRecorder::TestDesktopExport()
{
    UE_LOG(LogTemp, Log, TEXT("=== Testing Desktop Export Functionality ==="));
    
    // Test desktop path detection
    FString DesktopPath = GetDesktopDirectory();
    UE_LOG(LogTemp, Log, TEXT("Desktop Path: %s"), *DesktopPath);
    
    // Check if we have any recordings to export
    if (SavedRecordings.Num() == 0)
    {
        UE_LOG(LogTemp, Log, TEXT("No recordings found. Creating a test recording entry..."));
        
        // Create a test recording entry
        FCameraRecordingData TestRecording;
        TestRecording.RecordingName = TEXT("TestRecording");
        TestRecording.Duration = 10.0f;
        TestRecording.RecordingDate = FDateTime::Now();
        TestRecording.RecordingLocation = GetComponentLocation();
        TestRecording.RecordingRotation = GetComponentRotation();
        
        SavedRecordings.Add(TestRecording);
        
        UE_LOG(LogTemp, Log, TEXT("Created test recording: %s"), *TestRecording.RecordingName);
    }
    
    // Test export functionality
    UE_LOG(LogTemp, Log, TEXT("Testing export of recording 0..."));
    SaveRecordingToDesktop(0);
    
    UE_LOG(LogTemp, Log, TEXT("=== Desktop Export Test Complete ==="));
}

FString USGCameraRecorder::GetDesktopPathForTesting()
{
    return GetDesktopDirectory();
}

void USGCameraRecorder::ExportAllRecordingsToDesktop()
{
    if (SavedRecordings.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No recordings to export"));
        return;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Starting export of %d recordings to desktop..."), SavedRecordings.Num());
    
    int32 SuccessfulExports = 0;
    for (int32 i = 0; i < SavedRecordings.Num(); i++)
    {
        UE_LOG(LogTemp, Log, TEXT("Exporting recording %d/%d: %s"), i + 1, SavedRecordings.Num(), *SavedRecordings[i].RecordingName);
        
        SaveRecordingToDesktop(i);
        SuccessfulExports++;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Export complete. Successfully exported %d recordings"), SuccessfulExports);
}

void USGCameraRecorder::ExportFrameSequence(int32 RecordingIndex, const FString& OutputPath)
{
    if (RecordingIndex < 0 || RecordingIndex >= SavedRecordings.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid recording index for frame export: %d"), RecordingIndex);
        return;
    }
    
    const FCameraRecordingData& Recording = SavedRecordings[RecordingIndex];
    
    // Create output directory for frame sequence
    FString FrameDirectory = OutputPath + TEXT("_Frames");
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    
    if (!PlatformFile.CreateDirectoryTree(*FrameDirectory))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create frame directory: %s"), *FrameDirectory);
        return;
    }
    
    // Check if we have recorded frames for this recording
    if (RecordedFrames.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No recorded frames available for recording: %s"), *Recording.RecordingName);
        
        // Create a placeholder info file instead
        FString InfoPath = FPaths::Combine(FrameDirectory, TEXT("RecordingInfo.txt"));
        FString InfoContent = FString::Printf(
            TEXT("Recording Name: %s\n")
            TEXT("Duration: %.2f seconds\n")
            TEXT("Recorded: %s\n")
            TEXT("Location: %s\n")
            TEXT("Note: Frame data not available - this is a placeholder export\n"),
            *Recording.RecordingName,
            Recording.Duration,
            *Recording.RecordingDate.ToString(),
            *Recording.RecordingLocation.ToString()
        );
        
        FFileHelper::SaveStringToFile(InfoContent, *InfoPath);
        UE_LOG(LogTemp, Log, TEXT("Created recording info file: %s"), *InfoPath);
        return;
    }
    
    // Export each frame as a PNG image
    int32 FrameCount = RecordedFrames.Num();
    for (int32 FrameIndex = 0; FrameIndex < FrameCount; FrameIndex++)
    {
        FString FrameFileName = FString::Printf(TEXT("Frame_%04d.png"), FrameIndex);
        FString FramePath = FPaths::Combine(FrameDirectory, FrameFileName);
        
        // Convert frame data to image and save
        if (SaveFrameAsImage(RecordedFrames[FrameIndex], FramePath))
        {
            if (FrameIndex % 30 == 0) // Log progress every 30 frames
            {
                UE_LOG(LogTemp, Log, TEXT("Exported frame %d/%d"), FrameIndex + 1, FrameCount);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to save frame %d"), FrameIndex);
        }
    }
    
    // Create a summary file
    FString SummaryPath = FPaths::Combine(FrameDirectory, TEXT("Summary.txt"));
    FString SummaryContent = FString::Printf(
        TEXT("Recording Export Summary\n")
        TEXT("======================\n")
        TEXT("Recording Name: %s\n")
        TEXT("Total Frames: %d\n")
        TEXT("Duration: %.2f seconds\n")
        TEXT("FPS: %.1f\n")
        TEXT("Resolution: %dx%d\n")
        TEXT("Recorded: %s\n")
        TEXT("Exported: %s\n"),
        *Recording.RecordingName,
        FrameCount,
        Recording.Duration,
        RecordingFPS,
        RecordingResolutionX, RecordingResolutionY,
        *Recording.RecordingDate.ToString(),
        *FDateTime::Now().ToString()
    );
    
    FFileHelper::SaveStringToFile(SummaryContent, *SummaryPath);
    UE_LOG(LogTemp, Log, TEXT("Frame sequence export completed: %d frames exported to %s"), FrameCount, *FrameDirectory);
}

bool USGCameraRecorder::SaveFrameAsImage(const TArray<FColor>& FrameData, const FString& FilePath)
{
    if (FrameData.Num() == 0)
    {
        return false;
    }
    
    // Calculate expected frame size
    int32 ExpectedPixels = RecordingResolutionX * RecordingResolutionY;
    if (FrameData.Num() != ExpectedPixels)
    {
        UE_LOG(LogTemp, Warning, TEXT("Frame data size mismatch. Expected: %d, Got: %d"), ExpectedPixels, FrameData.Num());
        return false;
    }
    
    // Create image wrapper for PNG export
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
    
    if (!ImageWrapper.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create PNG image wrapper"));
        return false;
    }
    
    // Convert FColor array to raw RGBA data
    TArray<uint8> RawData;
    RawData.Reserve(FrameData.Num() * 4);
    
    for (const FColor& Color : FrameData)
    {
        RawData.Add(Color.R);
        RawData.Add(Color.G);
        RawData.Add(Color.B);
        RawData.Add(Color.A);
    }
    
    // Set image data
    if (!ImageWrapper->SetRaw(RawData.GetData(), RawData.Num(), RecordingResolutionX, RecordingResolutionY, ERGBFormat::RGBA, 8))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to set image data for PNG export"));
        return false;
    }
    
    // Get compressed PNG data
    const TArray64<uint8>& CompressedData = ImageWrapper->GetCompressed();
    
    // Save to file
    if (!FFileHelper::SaveArrayToFile(CompressedData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save PNG file: %s"), *FilePath);
        return false;
    }
    
    return true;
}

void USGCameraRecorder::CreateTestRecordingAndExport()
{
    UE_LOG(LogTemp, Log, TEXT("=== Creating Test Recording and Exporting ==="));
    
    // Create multiple test recordings for demonstration
    for (int32 i = 0; i < 3; i++)
    {
        FCameraRecordingData TestRecording;
        TestRecording.RecordingName = FString::Printf(TEXT("TestRecording_%d"), i + 1);
        TestRecording.Duration = 5.0f + (i * 2.5f); // Varying durations
        TestRecording.RecordingDate = FDateTime::Now() - FTimespan::FromMinutes(i * 10); // Different times
        TestRecording.RecordingLocation = GetComponentLocation() + FVector(i * 100.0f, 0, 0);
        TestRecording.RecordingRotation = GetComponentRotation();
        
        SavedRecordings.Add(TestRecording);
        
        UE_LOG(LogTemp, Log, TEXT("Created test recording %d: %s (Duration: %.1fs)"), 
               i + 1, *TestRecording.RecordingName, TestRecording.Duration);
    }
    
    // Export all test recordings
    ExportAllRecordingsToDesktop();
    
    UE_LOG(LogTemp, Log, TEXT("=== Test Recording Creation and Export Complete ==="));
    UE_LOG(LogTemp, Log, TEXT("Check your desktop (or project Recordings folder) for exported files"));
    
    // Show a helpful message to the user
    if (GEngine)
    {
        FString DesktopPath = GetDesktopDirectory();
        FString Message = FString::Printf(TEXT("Test recordings exported to: %s"), *DesktopPath);
        GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, Message);
    }
}