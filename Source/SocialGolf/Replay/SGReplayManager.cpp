#include "SGReplayManager.h"
#include "../Characters/SGCharacter.h"
#include "../Golf/SGGolfBall.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/DateTime.h"
#include "Camera/CameraActor.h"
#include "Components/SceneComponent.h"
#include "Dom/JsonObject.h"
#include "JsonObjectConverter.h"
#include "HAL/FileManager.h"

USGReplayManager::USGReplayManager()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.TickInterval = 1.0f / RecordingFrameRate; // Default 30 FPS
}

void USGReplayManager::BeginPlay()
{
    Super::BeginPlay();
    
    CacheReferences();
    
    if (bAutoStartRecording)
    {
        StartRecording(TEXT("Auto Recording"));
    }
}

void USGReplayManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsRecording && !bRecordingPaused)
    {
        RecordingDuration += DeltaTime;
        
        // Check max duration
        if (RecordingDuration >= MaxRecordingDuration)
        {
            UE_LOG(LogTemp, Warning, TEXT("Replay: Max recording duration reached, stopping recording"));
            StopRecording();
            return;
        }
        
        // Record frame based on frame rate
        float FrameInterval = 1.0f / RecordingFrameRate;
        if (RecordingDuration - LastFrameTime >= FrameInterval)
        {
            RecordFrame();
            LastFrameTime = RecordingDuration;
        }
        
        OnRecordingStateChanged.Broadcast(true, RecordingDuration);
    }
    
    if (bIsPlaying && !bPlaybackPaused)
    {
        PlaybackTime += DeltaTime * PlaybackSpeed;
        
        // Check if playback is complete
        if (PlaybackTime >= CurrentReplayData.TotalDuration)
        {
            if (bLoopPlayback)
            {
                PlaybackTime = 0.0f;
                CurrentFrameIndex = 0;
            }
            else
            {
                StopPlayback();
                return;
            }
        }
        
        PlaybackFrame();
        
        // Auto switch cameras
        if (bAutoSwitchCameras && PlaybackTime - LastCameraSwitchTime >= CameraSwitchInterval)
        {
            NextCameraMode();
            LastCameraSwitchTime = PlaybackTime;
        }
        
        OnPlaybackStateChanged.Broadcast(true, PlaybackTime, CurrentReplayData.TotalDuration);
    }
}

void USGReplayManager::StartRecording(const FString& ReplayName)
{
    if (bIsRecording)
    {
        UE_LOG(LogTemp, Warning, TEXT("Replay: Already recording, stopping previous recording"));
        StopRecording();
    }
    
    CacheReferences();
    
    if (!CachedPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Cannot start recording - no player found"));
        return;
    }
    
    // Initialize new replay data
    CurrentReplayData = FSGReplayData();
    CurrentReplayData.ReplayName = ReplayName.IsEmpty() ? TEXT("Auto Replay") : ReplayName;
    CurrentReplayData.RecordingDate = FDateTime::Now();
    CurrentReplayData.PlayerName = CachedPlayer->GetName();
    
    // Get course info from game mode if available
    if (UWorld* World = GetWorld())
    {
        if (AGameModeBase* GameMode = World->GetAuthGameMode())
        {
            CurrentReplayData.CourseName = World->GetMapName();
        }
    }
    
    // Set initial positions
    CurrentReplayData.StartingBallPosition = CachedBall ? CachedBall->GetActorLocation() : FVector::ZeroVector;
    
    // Reset recording state
    bIsRecording = true;
    bRecordingPaused = false;
    RecordingDuration = 0.0f;
    LastFrameTime = 0.0f;
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Started recording '%s'"), *ReplayName);
    OnRecordingStateChanged.Broadcast(true, 0.0f);
}

void USGReplayManager::StopRecording()
{
    if (!bIsRecording)
    {
        return;
    }
    
    bIsRecording = false;
    bRecordingPaused = false;
    
    CurrentReplayData.TotalDuration = RecordingDuration;
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Stopped recording. Duration: %.2f seconds, Frames: %d"), 
           RecordingDuration, CurrentReplayData.FrameData.Num());
    
    OnRecordingStateChanged.Broadcast(false, RecordingDuration);
    
    // Auto save if we have data
    if (CurrentReplayData.FrameData.Num() > 0)
    {
        SaveReplay();
    }
}

void USGReplayManager::PauseRecording()
{
    if (bIsRecording)
    {
        bRecordingPaused = true;
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording paused"));
    }
}

void USGReplayManager::ResumeRecording()
{
    if (bIsRecording && bRecordingPaused)
    {
        bRecordingPaused = false;
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording resumed"));
    }
}

bool USGReplayManager::StartPlayback(const FSGReplayData& ReplayData, ECameraReplayMode CameraMode)
{
    if (ReplayData.FrameData.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Cannot start playback - no frame data"));
        return false;
    }
    
    StopPlayback(); // Stop any current playback
    
    CurrentReplayData = ReplayData;
    CurrentCameraMode = CameraMode;
    
    bIsPlaying = true;
    bPlaybackPaused = false;
    PlaybackTime = 0.0f;
    PlaybackSpeed = DefaultPlaybackSpeed;
    CurrentFrameIndex = 0;
    LastCameraSwitchTime = 0.0f;
    
    SetupCinematicCamera();
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Started playback of '%s' (%.2f seconds, %d frames)"), 
           *ReplayData.ReplayName, ReplayData.TotalDuration, ReplayData.FrameData.Num());
    
    OnPlaybackStateChanged.Broadcast(true, 0.0f, ReplayData.TotalDuration);
    
    return true;
}

void USGReplayManager::StopPlayback()
{
    if (!bIsPlaying)
    {
        return;
    }
    
    bIsPlaying = false;
    bPlaybackPaused = false;
    PlaybackTime = 0.0f;
    CurrentFrameIndex = 0;
    
    CleanupCinematicCamera();
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Stopped playback"));
    OnPlaybackStateChanged.Broadcast(false, 0.0f, 0.0f);
}

void USGReplayManager::SetCameraMode(ECameraReplayMode NewCameraMode)
{
    CurrentCameraMode = NewCameraMode;
    UE_LOG(LogTemp, Log, TEXT("Replay: Camera mode changed to %d"), (int32)NewCameraMode);
}

void USGReplayManager::NextCameraMode()
{
    int32 CurrentMode = (int32)CurrentCameraMode;
    CurrentMode = (CurrentMode + 1) % 7; // We have 7 camera modes
    CurrentCameraMode = (ECameraReplayMode)CurrentMode;
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Switched to camera mode %d"), CurrentMode);
}

void USGReplayManager::RecordEvent(EReplayEventType EventType, const FString& Description, const FVector& Location, float ShotPower, const FString& ClubUsed)
{
    if (!bIsRecording || bRecordingPaused)
    {
        return;
    }
    
    FSGReplayEvent NewEvent;
    NewEvent.EventType = EventType;
    NewEvent.TimeStamp = RecordingDuration;
    NewEvent.EventDescription = Description;
    NewEvent.EventLocation = Location;
    NewEvent.ShotPower = ShotPower;
    NewEvent.ClubUsed = ClubUsed;
    
    CurrentReplayData.Events.Add(NewEvent);
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Recorded event - %s at %.2f seconds"), *Description, RecordingDuration);
    OnEventRecorded.Broadcast(EventType, Description);
}

void USGReplayManager::RecordGolfShot(float Power, const FString& ClubName, const FVector& ShotLocation)
{
    FString Description = FString::Printf(TEXT("Golf shot with %s (Power: %.1f)"), *ClubName, Power);
    RecordEvent(EReplayEventType::GolfShot, Description, ShotLocation, Power, ClubName);
}

void USGReplayManager::RecordHoleComplete(int32 Score)
{
    FString Description = FString::Printf(TEXT("Hole completed in %d strokes"), Score);
    RecordEvent(EReplayEventType::HoleComplete, Description);
    CurrentReplayData.FinalScore = Score;
    
    if (bAutoStopOnHoleComplete)
    {
        UE_LOG(LogTemp, Log, TEXT("Replay: Auto-stopping recording on hole complete"));
        StopRecording();
    }
}

void USGReplayManager::RecordFrame()
{
    if (!CachedPlayer)
    {
        return;
    }
    
    FSGReplayFrameData FrameData;
    FrameData.TimeStamp = RecordingDuration;
    FrameData.PlayerLocation = CachedPlayer->GetActorLocation();
    FrameData.PlayerRotation = CachedPlayer->GetActorRotation();
    
    if (CachedBall)
    {
        FrameData.BallLocation = CachedBall->GetActorLocation();
        if (UPrimitiveComponent* BallPrimitive = CachedBall->GetRootComponent()->GetAttachmentRootActor()->FindComponentByClass<UPrimitiveComponent>())
        {
            FrameData.BallVelocity = BallPrimitive->GetPhysicsLinearVelocity();
        }
    }
    
    if (CachedCamera)
    {
        FrameData.CameraLocation = CachedCamera->GetComponentLocation();
        FrameData.CameraRotation = CachedCamera->GetComponentRotation();
        FrameData.CameraFOV = CachedCamera->FieldOfView;
    }
    
    CurrentReplayData.FrameData.Add(FrameData);
}

void USGReplayManager::PlaybackFrame()
{
    if (CurrentReplayData.FrameData.Num() == 0)
    {
        return;
    }
    
    // Find the appropriate frame for current playback time
    int32 TargetFrameIndex = 0;
    for (int32 i = 0; i < CurrentReplayData.FrameData.Num(); i++)
    {
        if (CurrentReplayData.FrameData[i].TimeStamp <= PlaybackTime)
        {
            TargetFrameIndex = i;
        }
        else
        {
            break;
        }
    }
    
    CurrentFrameIndex = TargetFrameIndex;
    
    // Get frame data (with interpolation if possible)
    FSGReplayFrameData CurrentFrame = CurrentReplayData.FrameData[CurrentFrameIndex];
    
    if (CurrentFrameIndex + 1 < CurrentReplayData.FrameData.Num())
    {
        FSGReplayFrameData NextFrame = CurrentReplayData.FrameData[CurrentFrameIndex + 1];
        float TimeDiff = NextFrame.TimeStamp - CurrentFrame.TimeStamp;
        
        if (TimeDiff > 0.0f)
        {
            float Alpha = (PlaybackTime - CurrentFrame.TimeStamp) / TimeDiff;
            Alpha = FMath::Clamp(Alpha, 0.0f, 1.0f);
            CurrentFrame = InterpolateFrameData(CurrentFrame, NextFrame, Alpha);
        }
    }
    
    // Apply camera based on mode
    switch (CurrentCameraMode)
    {
        case ECameraReplayMode::Cinematic:
            UpdateCinematicCamera();
            break;
        case ECameraReplayMode::BallFollow:
            UpdateBallFollowCamera();
            break;
        case ECameraReplayMode::StaticOverview:
            UpdateStaticOverviewCamera();
            break;
        default:
            // Use frame data directly
            if (CachedCamera)
            {
                CachedCamera->SetWorldLocationAndRotation(CurrentFrame.CameraLocation, CurrentFrame.CameraRotation);
                CachedCamera->SetFieldOfView(CurrentFrame.CameraFOV);
            }
            break;
    }
}

FSGReplayFrameData USGReplayManager::InterpolateFrameData(const FSGReplayFrameData& FrameA, const FSGReplayFrameData& FrameB, float Alpha) const
{
    FSGReplayFrameData Result;
    
    Result.TimeStamp = FMath::Lerp(FrameA.TimeStamp, FrameB.TimeStamp, Alpha);
    Result.PlayerLocation = FMath::Lerp(FrameA.PlayerLocation, FrameB.PlayerLocation, Alpha);
    Result.PlayerRotation = FMath::Lerp(FrameA.PlayerRotation, FrameB.PlayerRotation, Alpha);
    Result.BallLocation = FMath::Lerp(FrameA.BallLocation, FrameB.BallLocation, Alpha);
    Result.BallVelocity = FMath::Lerp(FrameA.BallVelocity, FrameB.BallVelocity, Alpha);
    Result.CameraLocation = FMath::Lerp(FrameA.CameraLocation, FrameB.CameraLocation, Alpha);
    Result.CameraRotation = FMath::Lerp(FrameA.CameraRotation, FrameB.CameraRotation, Alpha);
    Result.CameraFOV = FMath::Lerp(FrameA.CameraFOV, FrameB.CameraFOV, Alpha);
    
    return Result;
}

void USGReplayManager::UpdateCinematicCamera()
{
    if (!CinematicCameraActor || CurrentFrameIndex >= CurrentReplayData.FrameData.Num())
    {
        return;
    }
    
    FSGReplayFrameData CurrentFrame = CurrentReplayData.FrameData[CurrentFrameIndex];
    
    // Create a cinematic orbit around the ball
    FVector BallLocation = CurrentFrame.BallLocation;
    float OrbitRadius = 400.0f;
    float OrbitHeight = 200.0f;
    float OrbitSpeed = CinematicCameraSpeed;
    
    float Angle = PlaybackTime * OrbitSpeed;
    FVector CameraOffset = FVector(
        FMath::Cos(Angle) * OrbitRadius,
        FMath::Sin(Angle) * OrbitRadius,
        OrbitHeight
    );
    
    FVector CameraLocation = BallLocation + CameraOffset;
    FRotator CameraRotation = (BallLocation - CameraLocation).Rotation();
    
    CinematicCameraActor->SetActorLocationAndRotation(CameraLocation, CameraRotation);
    
    // Set as view target
    if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
    {
        PC->SetViewTargetWithBlend(CinematicCameraActor, 0.5f);
    }
}

void USGReplayManager::UpdateBallFollowCamera()
{
    if (CurrentFrameIndex >= CurrentReplayData.FrameData.Num())
    {
        return;
    }
    
    FSGReplayFrameData CurrentFrame = CurrentReplayData.FrameData[CurrentFrameIndex];
    
    FVector BallLocation = CurrentFrame.BallLocation;
    FVector BallVelocity = CurrentFrame.BallVelocity;
    
    // Position camera behind the ball relative to its velocity
    FVector CameraOffset = BallVelocity.GetSafeNormal() * -BallFollowDistance;
    CameraOffset.Z += BallFollowHeight;
    
    FVector CameraLocation = BallLocation + CameraOffset;
    FRotator CameraRotation = (BallLocation - CameraLocation).Rotation();
    
    if (CachedCamera)
    {
        CachedCamera->SetWorldLocationAndRotation(CameraLocation, CameraRotation);
    }
}

void USGReplayManager::UpdateStaticOverviewCamera()
{
    // Position camera high above the course for overview
    FVector StartPos = CurrentReplayData.StartingBallPosition;
    FVector HolePos = CurrentReplayData.HolePosition;
    FVector MidPoint = (StartPos + HolePos) * 0.5f;
    
    FVector CameraLocation = MidPoint + FVector(0, 0, 1000);
    FRotator CameraRotation = FRotator(-60, 0, 0); // Look down at an angle
    
    if (CachedCamera)
    {
        CachedCamera->SetWorldLocationAndRotation(CameraLocation, CameraRotation);
    }
}

void USGReplayManager::SetupCinematicCamera()
{
    if (!CinematicCameraActor)
    {
        // Create a temporary camera actor for cinematic playback
        CinematicCameraActor = GetWorld()->SpawnActor<ACameraActor>();
        if (CinematicCameraActor)
        {
            // Cast to camera actor to access GetCameraComponent
            if (ACameraActor* CameraActor = Cast<ACameraActor>(CinematicCameraActor))
            {
                if (UCameraComponent* CameraComp = CameraActor->GetCameraComponent())
                {
                    CameraComp->SetFieldOfView(90.0f);
                }
            }
        }
    }
}

void USGReplayManager::CleanupCinematicCamera()
{
    if (CinematicCameraActor)
    {
        // Return camera control to player
        if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
        {
            if (CachedPlayer)
            {
                PC->SetViewTargetWithBlend(CachedPlayer, 1.0f);
            }
        }
        
        CinematicCameraActor->Destroy();
        CinematicCameraActor = nullptr;
    }
}

void USGReplayManager::CacheReferences()
{
    if (!CachedPlayer)
    {
        CachedPlayer = Cast<ASGCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
        if (CachedPlayer)
        {
            CachedCamera = CachedPlayer->FindComponentByClass<UCameraComponent>();
        }
    }
    
    if (!CachedBall)
    {
        // Try to find golf ball in the world
        TArray<AActor*> FoundActors;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundActors);
        if (FoundActors.Num() > 0)
        {
            CachedBall = Cast<ASGGolfBall>(FoundActors[0]);
        }
    }
}

bool USGReplayManager::SaveReplay(const FString& FileName)
{
    FString SaveFileName = FileName.IsEmpty() ? GenerateReplayFileName() : FileName;
    FString FullPath = GetReplaySaveDirectory() + SaveFileName + TEXT(".sgreplay");
    
    // Convert replay data to JSON string
    FString JsonString;
    if (!FJsonObjectConverter::UStructToJsonObjectString(CurrentReplayData, JsonString))
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Failed to serialize replay data"));
        OnReplaySaved.Broadcast(false, SaveFileName);
        return false;
    }
    
    // Save to file
    if (!FFileHelper::SaveStringToFile(JsonString, *FullPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Failed to save replay to file: %s"), *FullPath);
        OnReplaySaved.Broadcast(false, SaveFileName);
        return false;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Replay: Saved replay '%s' to %s"), *SaveFileName, *FullPath);
    OnReplaySaved.Broadcast(true, SaveFileName);
    return true;
}

bool USGReplayManager::LoadReplay(const FString& FileName)
{
    FString FullPath = GetReplaySaveDirectory() + FileName + TEXT(".sgreplay");
    
    FString JsonString;
    if (!FFileHelper::LoadFileToString(JsonString, *FullPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Failed to load replay file: %s"), *FullPath);
        return false;
    }
    
    FSGReplayData LoadedData;
    if (!FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &LoadedData))
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: Failed to deserialize replay data"));
        return false;
    }
    
    CurrentReplayData = LoadedData;
    UE_LOG(LogTemp, Log, TEXT("Replay: Loaded replay '%s' with %d frames"), *LoadedData.ReplayName, LoadedData.FrameData.Num());
    return true;
}

FString USGReplayManager::GenerateReplayFileName() const
{
    FDateTime Now = FDateTime::Now();
    return FString::Printf(TEXT("Replay_%s_%s"), 
                          *CurrentReplayData.PlayerName, 
                          *Now.ToString(TEXT("%Y%m%d_%H%M%S")));
}

FString USGReplayManager::GetReplaySaveDirectory() const
{
    return FPaths::ProjectSavedDir() + TEXT("Replays/");
}

TArray<FString> USGReplayManager::GetAvailableReplays() const
{
    TArray<FString> ReplayFiles;
    FString SearchPath = GetReplaySaveDirectory() + TEXT("*.sgreplay");
    
    TArray<FString> FoundFiles;
    IFileManager::Get().FindFiles(FoundFiles, *SearchPath, true, false);
    
    for (const FString& File : FoundFiles)
    {
        FString BaseName = FPaths::GetBaseFilename(File);
        ReplayFiles.Add(BaseName);
    }
    
    return ReplayFiles;
}

bool USGReplayManager::DeleteReplay(const FString& FileName)
{
    FString FullPath = GetReplaySaveDirectory() + FileName + TEXT(".sgreplay");
    
    if (FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*FullPath))
    {
        UE_LOG(LogTemp, Log, TEXT("Replay: Deleted replay file %s"), *FullPath);
        return true;
    }
    
    UE_LOG(LogTemp, Error, TEXT("Replay: Failed to delete replay file %s"), *FullPath);
    return false;
}

void USGReplayManager::ClearCurrentReplay()
{
    CurrentReplayData = FSGReplayData();
    UE_LOG(LogTemp, Log, TEXT("Replay: Cleared current replay data"));
}

void USGReplayManager::SetPlaybackTime(float NewTime)
{
    PlaybackTime = FMath::Clamp(NewTime, 0.0f, CurrentReplayData.TotalDuration);
}

void USGReplayManager::SetPlaybackSpeed(float NewSpeed)
{
    PlaybackSpeed = FMath::Clamp(NewSpeed, 0.1f, 5.0f);
}

void USGReplayManager::PausePlayback()
{
    if (bIsPlaying)
    {
        bPlaybackPaused = true;
    }
}

void USGReplayManager::ResumePlayback()
{
    if (bIsPlaying && bPlaybackPaused)
    {
        bPlaybackPaused = false;
    }
}

void USGReplayManager::AutoSwitchCamera()
{
    if (bAutoSwitchCameras)
    {
        NextCameraMode();
        LastCameraSwitchTime = PlaybackTime;
    }
}