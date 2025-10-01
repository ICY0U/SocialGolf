#include "SGCameraSaveGame.h"
#include "Engine/Engine.h"

USGCameraSaveGame::USGCameraSaveGame()
{
    // USaveGame doesn't have SaveSlotName and UserIndex by default
    // These would be handled by the save/load system externally
    LastSaveTime = FDateTime::Now();
}

void USGCameraSaveGame::AddRecording(const FCameraRecordingData& RecordingData)
{
    SavedRecordings.Add(RecordingData);
    LastSaveTime = FDateTime::Now();
    
    UE_LOG(LogTemp, Log, TEXT("Added recording: %s"), *RecordingData.RecordingName);
}

void USGCameraSaveGame::RemoveRecording(int32 Index)
{
    if (Index >= 0 && Index < SavedRecordings.Num())
    {
        FString RecordingName = SavedRecordings[Index].RecordingName;
        SavedRecordings.RemoveAt(Index);
        LastSaveTime = FDateTime::Now();
        
        UE_LOG(LogTemp, Log, TEXT("Removed recording: %s"), *RecordingName);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid recording index: %d"), Index);
    }
}

void USGCameraSaveGame::ClearAllRecordings()
{
    int32 Count = SavedRecordings.Num();
    SavedRecordings.Empty();
    CameraRecordingsByLocation.Empty();
    LastSaveTime = FDateTime::Now();
    
    UE_LOG(LogTemp, Log, TEXT("Cleared %d recordings"), Count);
}

void USGCameraSaveGame::SaveCameraDataForLocation(const FString& LocationID, const FCameraRecordingData& Data)
{
    CameraRecordingsByLocation.Add(LocationID, Data);
    LastSaveTime = FDateTime::Now();
    
    UE_LOG(LogTemp, Log, TEXT("Saved camera data for location: %s"), *LocationID);
}

FCameraRecordingData USGCameraSaveGame::GetCameraDataForLocation(const FString& LocationID) const
{
    if (const FCameraRecordingData* FoundData = CameraRecordingsByLocation.Find(LocationID))
    {
        return *FoundData;
    }
    
    return FCameraRecordingData();
}

bool USGCameraSaveGame::HasCameraDataForLocation(const FString& LocationID) const
{
    return CameraRecordingsByLocation.Contains(LocationID);
}