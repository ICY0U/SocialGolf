#include "SGCameraRecordingSubsystem.h"
#include "SGCameraRecorder.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"

void USGCameraRecordingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    UE_LOG(LogTemp, Log, TEXT("Camera Recording Subsystem Initialized"));
    
    if (bAutoLoadOnStartup)
    {
        LoadCameraRecordings();
    }
}

void USGCameraRecordingSubsystem::Deinitialize()
{
    if (bAutoSaveOnRecordingFinish)
    {
        SaveCameraRecordings();
    }
    
    RegisteredCameras.Empty();
    CameraSaveGame = nullptr;
    
    Super::Deinitialize();
    
    UE_LOG(LogTemp, Log, TEXT("Camera Recording Subsystem Deinitialized"));
}

void USGCameraRecordingSubsystem::SaveCameraRecordings()
{
    if (!CameraSaveGame)
    {
        CreateNewSaveGame();
    }
    
    // Clear existing data
    CameraSaveGame->ClearAllRecordings();
    
    // Collect recordings from all registered cameras
    for (auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            // Add all recordings from this camera
            for (int32 i = 0; i < Camera->GetRecordingCount(); i++)
            {
                FCameraRecordingData RecordingData = Camera->GetRecordingData(i);
                CameraSaveGame->AddRecording(RecordingData);
                
                // Also save by location for persistence
                FString LocationID = GenerateLocationID(RecordingData.RecordingLocation);
                CameraSaveGame->SaveCameraDataForLocation(LocationID, RecordingData);
            }
        }
    }
    
    // Save to disk
    bool bSaveSuccess = UGameplayStatics::SaveGameToSlot(CameraSaveGame, SaveSlotName, 0);
    
    if (bSaveSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("Successfully saved %d camera recordings"), CameraSaveGame->GetRecordingCount());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save camera recordings"));
    }
}

void USGCameraRecordingSubsystem::LoadCameraRecordings()
{
    if (UGameplayStatics::DoesSaveGameExist(SaveSlotName, 0))
    {
        CameraSaveGame = Cast<USGCameraSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
        
        if (CameraSaveGame)
        {
            UE_LOG(LogTemp, Log, TEXT("Loaded %d camera recordings from save"), CameraSaveGame->GetRecordingCount());
            
            // Distribute recordings back to cameras based on location
            for (auto& WeakCamera : RegisteredCameras)
            {
                if (USGCameraRecorder* Camera = WeakCamera.Get())
                {
                    FString LocationID = GenerateLocationID(Camera->GetComponentLocation());
                    if (CameraSaveGame->HasCameraDataForLocation(LocationID))
                    {
                        FCameraRecordingData LocationData = CameraSaveGame->GetCameraDataForLocation(LocationID);
                        // Camera would need a function to restore this data
                        // Camera->LoadRecordingData(LocationData);
                    }
                }
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to load camera recordings - invalid save game"));
            CreateNewSaveGame();
        }
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("No existing camera recordings save found, creating new save"));
        CreateNewSaveGame();
    }
}

void USGCameraRecordingSubsystem::ClearAllRecordings()
{
    // Clear from all registered cameras
    for (auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            // Camera would need a function to clear recordings
            // Camera->ClearAllRecordings();
        }
    }
    
    // Clear from save game
    if (CameraSaveGame)
    {
        CameraSaveGame->ClearAllRecordings();
        SaveCameraRecordings();
    }
    
    UE_LOG(LogTemp, Log, TEXT("Cleared all camera recordings"));
}

void USGCameraRecordingSubsystem::RegisterCameraRecorder(USGCameraRecorder* CameraRecorder)
{
    if (CameraRecorder && !RegisteredCameras.Contains(CameraRecorder))
    {
        RegisteredCameras.Add(CameraRecorder);
        
        // Bind to camera events
        CameraRecorder->OnRecordingStateChanged.AddDynamic(this, &USGCameraRecordingSubsystem::OnCameraStateChanged);
        
        UE_LOG(LogTemp, Log, TEXT("Registered camera recorder: %s"), *CameraRecorder->GetName());
    }
}

void USGCameraRecordingSubsystem::UnregisterCameraRecorder(USGCameraRecorder* CameraRecorder)
{
    if (CameraRecorder)
    {
        RegisteredCameras.RemoveAll([CameraRecorder](const TWeakObjectPtr<USGCameraRecorder>& WeakPtr)
        {
            return WeakPtr.Get() == CameraRecorder;
        });
        
        // Unbind from camera events
        CameraRecorder->OnRecordingStateChanged.RemoveAll(this);
        
        UE_LOG(LogTemp, Log, TEXT("Unregistered camera recorder: %s"), *CameraRecorder->GetName());
    }
}

int32 USGCameraRecordingSubsystem::GetTotalRecordingCount() const
{
    int32 TotalCount = 0;
    
    for (const auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            TotalCount += Camera->GetRecordingCount();
        }
    }
    
    return TotalCount;
}

TArray<FCameraRecordingData> USGCameraRecordingSubsystem::GetAllRecordings() const
{
    TArray<FCameraRecordingData> AllRecordings;
    
    for (const auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            for (int32 i = 0; i < Camera->GetRecordingCount(); i++)
            {
                AllRecordings.Add(Camera->GetRecordingData(i));
            }
        }
    }
    
    return AllRecordings;
}

void USGCameraRecordingSubsystem::ExportAllRecordingsToDesktop()
{
    int32 ExportCount = 0;
    
    for (const auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            for (int32 i = 0; i < Camera->GetRecordingCount(); i++)
            {
                Camera->SaveRecordingToDesktop(i);
                ExportCount++;
            }
        }
    }
    
    UE_LOG(LogTemp, Log, TEXT("Exported %d recordings to desktop"), ExportCount);
}

void USGCameraRecordingSubsystem::ExportRecordingToDesktop(const FString& RecordingName)
{
    for (const auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            for (int32 i = 0; i < Camera->GetRecordingCount(); i++)
            {
                FCameraRecordingData RecordingData = Camera->GetRecordingData(i);
                if (RecordingData.RecordingName == RecordingName)
                {
                    Camera->SaveRecordingToDesktop(i);
                    UE_LOG(LogTemp, Log, TEXT("Exported recording '%s' to desktop"), *RecordingName);
                    return;
                }
            }
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Recording '%s' not found for export"), *RecordingName);
}

void USGCameraRecordingSubsystem::CreateNewSaveGame()
{
    CameraSaveGame = Cast<USGCameraSaveGame>(UGameplayStatics::CreateSaveGameObject(USGCameraSaveGame::StaticClass()));
    
    if (CameraSaveGame)
    {
        UE_LOG(LogTemp, Log, TEXT("Created new camera recordings save game"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create new camera recordings save game"));
    }
}

FString USGCameraRecordingSubsystem::GenerateLocationID(const FVector& Location) const
{
    // Create a location-based ID that's consistent but allows for some tolerance
    int32 X = FMath::RoundToInt(Location.X / 100.0f) * 100;
    int32 Y = FMath::RoundToInt(Location.Y / 100.0f) * 100;
    int32 Z = FMath::RoundToInt(Location.Z / 100.0f) * 100;
    
    return FString::Printf(TEXT("Camera_%d_%d_%d"), X, Y, Z);
}

// Event handler for camera state changes
UFUNCTION()
void USGCameraRecordingSubsystem::OnCameraStateChanged(ECameraRecorderState NewState)
{
    // Find which camera changed state (you'd need to track this better in a real implementation)
    for (const auto& WeakCamera : RegisteredCameras)
    {
        if (USGCameraRecorder* Camera = WeakCamera.Get())
        {
            if (Camera->CurrentState == NewState)
            {
                switch (NewState)
                {
                    case ECameraRecorderState::Recording:
                        OnRecordingStarted.Broadcast(TEXT("Unknown"));
                        break;
                    case ECameraRecorderState::Idle:
                        if (Camera->GetRecordingCount() > 0)
                        {
                            FCameraRecordingData LastRecording = Camera->GetRecordingData(Camera->GetRecordingCount() - 1);
                            OnRecordingFinished.Broadcast(LastRecording.RecordingName);
                            
                            if (bAutoSaveOnRecordingFinish)
                            {
                                SaveCameraRecordings();
                            }
                        }
                        break;
                    case ECameraRecorderState::Playing:
                        OnPlaybackStarted.Broadcast(TEXT("Unknown"));
                        break;
                }
                break;
            }
        }
    }
}

USGCameraRecordingSubsystem* USGCameraRecordingSubsystem::Get(const UObject* WorldContext)
{
    if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull))
    {
        if (UGameInstance* GameInstance = World->GetGameInstance())
        {
            return GameInstance->GetSubsystem<USGCameraRecordingSubsystem>();
        }
    }
    
    return nullptr;
}