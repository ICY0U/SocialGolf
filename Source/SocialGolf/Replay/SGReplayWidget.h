#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"
#include "Components/ComboBoxString.h"
#include "Components/ProgressBar.h"
#include "Components/ListView.h"
#include "SGReplayTypes.h"
#include "SGReplayWidget.generated.h"

class USGReplayManager;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplaySelected, const FString&, ReplayName);

UCLASS()
class SOCIALGOLF_API USGReplayWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    // Initialize with replay manager reference (renamed to avoid conflict)
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void InitializeReplayWidget(USGReplayManager* InReplayManager);

    // Update UI state
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void RefreshUI();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void RefreshReplayList();

    // Recording controls
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StartRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StopRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void PauseRecording();

    // Playback controls
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StartPlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StopPlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void PausePlayback();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void TogglePlayPause();

    // Replay management
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void LoadSelectedReplay();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void DeleteSelectedReplay();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SaveCurrentReplay();

    // Camera controls
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void NextCamera();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SetCameraMode(int32 ModeIndex);

    // Delegates
    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplaySelected OnReplaySelected;

protected:
    // === UI COMPONENTS ===
    
    // Recording Panel
    UPROPERTY(meta = (BindWidget))
    UButton* RecordButton;

    UPROPERTY(meta = (BindWidget))
    UButton* StopRecordButton;

    UPROPERTY(meta = (BindWidget))
    UButton* PauseRecordButton;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* RecordingStatusText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* RecordingTimeText;

    // Playback Panel
    UPROPERTY(meta = (BindWidget))
    UButton* PlayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* StopPlayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* PausePlayButton;

    UPROPERTY(meta = (BindWidget))
    USlider* PlaybackSlider;

    UPROPERTY(meta = (BindWidget))
    USlider* SpeedSlider;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* PlaybackTimeText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* PlaybackSpeedText;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* PlaybackProgress;

    // Camera Controls
    UPROPERTY(meta = (BindWidget))
    UButton* NextCameraButton;

    UPROPERTY(meta = (BindWidget))
    UComboBoxString* CameraModeCombo;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* CameraModeText;

    // Replay List
    UPROPERTY(meta = (BindWidget))
    UListView* ReplayListView;

    UPROPERTY(meta = (BindWidget))
    UButton* LoadReplayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* DeleteReplayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* SaveReplayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* RefreshListButton;

    // Info Panel
    UPROPERTY(meta = (BindWidget))
    UTextBlock* ReplayInfoText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* EventListText;

private:
    UPROPERTY()
    USGReplayManager* ReplayManager = nullptr;

    UPROPERTY()
    FString SelectedReplayName;

    // UI State
    bool bIsRecording = false;
    bool bIsPlaying = false;
    float LastUpdateTime = 0.0f;

    // Button event handlers
    UFUNCTION()
    void OnRecordButtonClicked();

    UFUNCTION()
    void OnStopRecordButtonClicked();

    UFUNCTION()
    void OnPauseRecordButtonClicked();

    UFUNCTION()
    void OnPlayButtonClicked();

    UFUNCTION()
    void OnStopPlayButtonClicked();

    UFUNCTION()
    void OnPausePlayButtonClicked();

    UFUNCTION()
    void OnNextCameraButtonClicked();

    UFUNCTION()
    void OnLoadReplayButtonClicked();

    UFUNCTION()
    void OnDeleteReplayButtonClicked();

    UFUNCTION()
    void OnSaveReplayButtonClicked();

    UFUNCTION()
    void OnRefreshListButtonClicked();

    // Slider event handlers
    UFUNCTION()
    void OnPlaybackSliderChanged(float Value);

    UFUNCTION()
    void OnSpeedSliderChanged(float Value);

    // Combo box event handlers
    UFUNCTION()
    void OnCameraModeChanged(FString SelectedItem, ESelectInfo::Type SelectionType);

    // List view event handlers
    UFUNCTION()
    void OnReplayListSelectionChanged(UObject* SelectedItem);

    // Replay manager event handlers
    UFUNCTION()
    void OnRecordingStateChanged(bool bRecording, float Duration);

    UFUNCTION()
    void OnPlaybackStateChanged(bool bPlaying, float CurrentTime, float TotalDuration);

    UFUNCTION()
    void OnEventRecorded(EReplayEventType EventType, const FString& Description);

    UFUNCTION()
    void OnReplaySaved(bool bSuccess, const FString& ReplayName);

    // Helper functions
    void UpdateRecordingUI();
    void UpdatePlaybackUI();
    void UpdateCameraUI();
    void UpdateReplayInfo();
    void PopulateCameraModes();
    FString FormatTime(float Seconds) const;
    FString GetCameraModeDisplayName(ECameraReplayMode Mode) const;
};