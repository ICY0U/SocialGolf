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
#include "SGCameraRecorder.generated.h"

class USceneCaptureComponent2D;
class UMediaPlayer;
class UFileMediaSource;
class UMediaTexture;

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

    FCameraRecordingData()
    {
        RecordingName = TEXT("");
        RecordingDate = FDateTime::Now();
        Duration = 0.0f;
        FilePath = TEXT("");
        RecordingLocation = FVector::ZeroVector;
        RecordingRotation = FRotator::ZeroRotator;
    }
};

UENUM(BlueprintType)
enum class ECameraRecorderState : uint8
{
    Idle,
    Recording,
    Playing,
    Paused
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecordingStateChanged, ECameraRecorderState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecordingProgress, float, CurrentTime, float, TotalTime);

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
    float MaxRecordingDuration = 60.0f; // Maximum recording time in seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
    float FOV = 90.0f;

    // Playback Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bAutoPlayLastRecording = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Playback")
    bool bLoopPlayback = true;

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

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnRecordingStateChanged OnRecordingStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnRecordingProgress OnRecordingProgress;

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

    // Render Targets
    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;

    UPROPERTY()
    UMaterialInstanceDynamic* ScreenMaterialInstance;

    // Internal State
    FString CurrentRecordingName;
    bool bIsPaused = false;
    float PauseStartTime = 0.0f;
    float TotalPausedTime = 0.0f;

    // Frame capture for recording
    TArray<TArray<FColor>> RecordedFrames;
    FTimerHandle RecordingTimerHandle;
    FTimerHandle PlaybackTimerHandle;

    // Helper Functions
    void SetupComponents();
    void SetupRenderTarget();
    void UpdateScreenMaterial();
    void CaptureFrame();
    void UpdatePlaybackFrame();
    void ChangeState(ECameraRecorderState NewState);
    FString GenerateUniqueRecordingName();
    FString GetRecordingDirectory() const;
    FString GetDesktopDirectory() const;
    void CreateVideoFromFrames(const TArray<TArray<FColor>>& Frames, const FString& OutputPath);
    
    // Export helper functions
    void ExportFrameSequence(int32 RecordingIndex, const FString& OutputPath);
    bool SaveFrameAsImage(const TArray<FColor>& FrameData, const FString& FilePath);
};