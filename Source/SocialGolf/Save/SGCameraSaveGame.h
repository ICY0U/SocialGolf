#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "../Camera/SGCameraRecorder.h"
#include "SGCameraSaveGame.generated.h"

UCLASS(BlueprintType)
class SOCIALGOLF_API USGCameraSaveGame : public USaveGame
{
    GENERATED_BODY()

public:
    USGCameraSaveGame();

    UPROPERTY(VisibleAnywhere, SaveGame, Category = "Camera Recordings")
    TArray<FCameraRecordingData> SavedRecordings;

    UPROPERTY(VisibleAnywhere, SaveGame, Category = "Camera Settings")
    TMap<FString, FCameraRecordingData> CameraRecordingsByLocation;

    UPROPERTY(VisibleAnywhere, SaveGame, Category = "Save Info")
    FDateTime LastSaveTime;

    UPROPERTY(VisibleAnywhere, SaveGame, Category = "Save Info")
    int32 SaveVersion = 1;

    // Helper functions
    UFUNCTION(BlueprintCallable, Category = "Camera Save")
    void AddRecording(const FCameraRecordingData& RecordingData);

    UFUNCTION(BlueprintCallable, Category = "Camera Save")
    void RemoveRecording(int32 Index);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Save")
    int32 GetRecordingCount() const { return SavedRecordings.Num(); }

    UFUNCTION(BlueprintCallable, Category = "Camera Save")
    void ClearAllRecordings();

    // Location-based camera data management
    UFUNCTION(BlueprintCallable, Category = "Camera Save")
    void SaveCameraDataForLocation(const FString& LocationID, const FCameraRecordingData& Data);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Save")
    FCameraRecordingData GetCameraDataForLocation(const FString& LocationID) const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Save")
    bool HasCameraDataForLocation(const FString& LocationID) const;
};