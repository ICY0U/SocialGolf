#include "SGCameraDemo.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"

ASGCameraDemo::ASGCameraDemo()
{
    PrimaryActorTick.bCanEverTick = false;
    
    // Set default camera class
    CameraClass = ASGCameraRecorderActor::StaticClass();
    
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASGCameraDemo::BeginPlay()
{
    Super::BeginPlay();
    
    CreateDemoCameras();
    SetupCameraEvents();
    
    UE_LOG(LogTemp, Log, TEXT("Camera Demo initialized with %d cameras"), DemoCameras.Num());
}

void ASGCameraDemo::CreateDemoCameras()
{
    if (!CameraClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No camera class set for demo"));
        return;
    }
    
    FVector BaseLocation = GetActorLocation();
    
    for (int32 i = 0; i < NumberOfCameras; i++)
    {
        // Calculate camera position in a line
        FVector CameraLocation = BaseLocation + FVector(0, i * CameraSpacing, 0);
        FRotator CameraRotation = FRotator(0, 90 * i, 0); // Different rotations for variety
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Name = FName(*FString::Printf(TEXT("DemoCamera_%d"), i));
        
        ASGCameraRecorderActor* NewCamera = GetWorld()->SpawnActor<ASGCameraRecorderActor>(
            CameraClass, CameraLocation, CameraRotation, SpawnParams);
            
        if (NewCamera)
        {
            DemoCameras.Add(NewCamera);
            
            // Configure camera settings for demo
            if (USGCameraRecorder* CameraComponent = NewCamera->GetCameraRecorderComponent())
            {
                CameraComponent->MaxRecordingDuration = 30.0f; // 30 second demos
                CameraComponent->RecordingFPS = 30.0f;
                CameraComponent->bAutoPlayLastRecording = false;
                CameraComponent->bLoopPlayback = true;
            }
            
            UE_LOG(LogTemp, Log, TEXT("Created demo camera %d at location %s"), i, *CameraLocation.ToString());
        }
    }
}

void ASGCameraDemo::SetupCameraEvents()
{
    for (ASGCameraRecorderActor* Camera : DemoCameras)
    {
        if (Camera && Camera->GetCameraRecorderComponent())
        {
            USGCameraRecorder* CameraComponent = Camera->GetCameraRecorderComponent();
            CameraComponent->OnRecordingStateChanged.AddDynamic(this, &ASGCameraDemo::OnRecordingStateChanged);
            CameraComponent->OnRecordingProgress.AddDynamic(this, &ASGCameraDemo::OnRecordingProgress);
        }
    }
}

void ASGCameraDemo::StartRecordingAllCameras()
{
    UE_LOG(LogTemp, Log, TEXT("Starting recording on all demo cameras"));
    
    for (int32 i = 0; i < DemoCameras.Num(); i++)
    {
        if (DemoCameras[i])
        {
            FString RecordingName = FString::Printf(TEXT("Demo_Camera_%d_%s"), 
                i, *FDateTime::Now().ToString(TEXT("%H%M%S")));
            DemoCameras[i]->StartRecording(RecordingName);
        }
    }
}

void ASGCameraDemo::StopRecordingAllCameras()
{
    UE_LOG(LogTemp, Log, TEXT("Stopping recording on all demo cameras"));
    
    for (ASGCameraRecorderActor* Camera : DemoCameras)
    {
        if (Camera && Camera->IsRecording())
        {
            Camera->StopRecording();
        }
    }
}

void ASGCameraDemo::PlayAllRecordings()
{
    UE_LOG(LogTemp, Log, TEXT("Playing recordings on all demo cameras"));
    
    for (ASGCameraRecorderActor* Camera : DemoCameras)
    {
        if (Camera && Camera->GetRecordingCount() > 0)
        {
            Camera->PlayLatestRecording();
        }
    }
}

void ASGCameraDemo::ExportAllRecordings()
{
    if (USGCameraRecordingSubsystem* CameraSubsystem = USGCameraRecordingSubsystem::Get(this))
    {
        CameraSubsystem->ExportAllRecordingsToDesktop();
        UE_LOG(LogTemp, Log, TEXT("Exported all recordings to desktop"));
    }
}

void ASGCameraDemo::ClearAllRecordings()
{
    UE_LOG(LogTemp, Log, TEXT("Clearing all recordings"));
    
    for (ASGCameraRecorderActor* Camera : DemoCameras)
    {
        if (Camera)
        {
            for (int32 i = Camera->GetRecordingCount() - 1; i >= 0; i--)
            {
                Camera->DeleteRecording(i);
            }
        }
    }
    
    if (USGCameraRecordingSubsystem* CameraSubsystem = USGCameraRecordingSubsystem::Get(this))
    {
        CameraSubsystem->ClearAllRecordings();
    }
}

void ASGCameraDemo::SimulateContentWarningGameplay()
{
    if (bDemoInProgress)
    {
        UE_LOG(LogTemp, Warning, TEXT("Demo already in progress"));
        return;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Starting Content Warning-style gameplay simulation"));
    bDemoInProgress = true;
    
    // Simulate the gameplay loop from Content Warning:
    // 1. Start recording on multiple cameras
    // 2. Record for a period
    // 3. Stop recording
    // 4. Play back recordings
    
    // Step 1: Start recording
    StartRecordingAllCameras();
    
    // Step 2: Stop recording after 15 seconds
    GetWorld()->GetTimerManager().SetTimer(DemoTimerHandle, [this]()
    {
        StopRecordingAllCameras();
        
        // Step 3: Wait a moment, then start playback
        GetWorld()->GetTimerManager().SetTimer(DemoTimerHandle, [this]()
        {
            PlayAllRecordings();
            
            // Step 4: Reset demo state after playback starts
            GetWorld()->GetTimerManager().SetTimer(DemoTimerHandle, [this]()
            {
                bDemoInProgress = false;
                UE_LOG(LogTemp, Log, TEXT("Content Warning simulation complete"));
            }, 2.0f, false);
            
        }, 2.0f, false);
        
    }, 15.0f, false);
}

void ASGCameraDemo::OnRecordingStateChanged(ECameraRecorderState NewState)
{
    FString StateName;
    switch (NewState)
    {
        case ECameraRecorderState::Idle:
            StateName = TEXT("Idle");
            break;
        case ECameraRecorderState::Recording:
            StateName = TEXT("Recording");
            break;
        case ECameraRecorderState::Playing:
            StateName = TEXT("Playing");
            break;
        case ECameraRecorderState::Paused:
            StateName = TEXT("Paused");
            break;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Camera state changed to: %s"), *StateName);
    
    // Show on-screen message for demo purposes
    if (GEngine)
    {
        FString Message = FString::Printf(TEXT("Camera State: %s"), *StateName);
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, Message);
    }
}

void ASGCameraDemo::OnRecordingProgress(float CurrentTime, float TotalTime)
{
    // Show recording progress for demo purposes
    if (GEngine)
    {
        float Progress = (TotalTime > 0) ? (CurrentTime / TotalTime) * 100.0f : 0.0f;
        FString Message = FString::Printf(TEXT("Recording Progress: %.1f%% (%.1fs / %.1fs)"), 
            Progress, CurrentTime, TotalTime);
        GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Green, Message);
    }
}