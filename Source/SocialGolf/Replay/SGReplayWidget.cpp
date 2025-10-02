#include "SGReplayWidget.h"
#include "SGReplayManager.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"
#include "Components/ComboBoxString.h"
#include "Components/ProgressBar.h"
#include "Components/ListView.h"

void USGReplayWidget::NativeConstruct()
{
    Super::NativeConstruct();
    
    // Bind button events
    if (RecordButton)
        RecordButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnRecordButtonClicked);
    if (StopRecordButton)
        StopRecordButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnStopRecordButtonClicked);
    if (PauseRecordButton)
        PauseRecordButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnPauseRecordButtonClicked);
    
    if (PlayButton)
        PlayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnPlayButtonClicked);
    if (StopPlayButton)
        StopPlayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnStopPlayButtonClicked);
    if (PausePlayButton)
        PausePlayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnPausePlayButtonClicked);
    
    if (NextCameraButton)
        NextCameraButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnNextCameraButtonClicked);
    
    if (LoadReplayButton)
        LoadReplayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnLoadReplayButtonClicked);
    if (DeleteReplayButton)
        DeleteReplayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnDeleteReplayButtonClicked);
    if (SaveReplayButton)
        SaveReplayButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnSaveReplayButtonClicked);
    if (RefreshListButton)
        RefreshListButton->OnClicked.AddDynamic(this, &USGReplayWidget::OnRefreshListButtonClicked);
    
    // Bind slider events
    if (PlaybackSlider)
        PlaybackSlider->OnValueChanged.AddDynamic(this, &USGReplayWidget::OnPlaybackSliderChanged);
    if (SpeedSlider)
        SpeedSlider->OnValueChanged.AddDynamic(this, &USGReplayWidget::OnSpeedSliderChanged);
    
    // Bind combo box events
    if (CameraModeCombo)
        CameraModeCombo->OnSelectionChanged.AddDynamic(this, &USGReplayWidget::OnCameraModeChanged);
    
    PopulateCameraModes();
}

void USGReplayWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);
    
    RefreshUI();
}

void USGReplayWidget::InitializeReplayWidget(USGReplayManager* InReplayManager)
{
    ReplayManager = InReplayManager;
    
    if (ReplayManager)
    {
        // Bind to replay manager delegates
        ReplayManager->OnRecordingStateChanged.AddDynamic(this, &USGReplayWidget::OnRecordingStateChanged);
        ReplayManager->OnPlaybackStateChanged.AddDynamic(this, &USGReplayWidget::OnPlaybackStateChanged);
        ReplayManager->OnEventRecorded.AddDynamic(this, &USGReplayWidget::OnEventRecorded);
        ReplayManager->OnReplaySaved.AddDynamic(this, &USGReplayWidget::OnReplaySaved);
    }
    
    RefreshReplayList();
}

void USGReplayWidget::RefreshUI()
{
    UpdateRecordingUI();
    UpdatePlaybackUI();
    UpdateCameraUI();
    UpdateReplayInfo();
}

void USGReplayWidget::RefreshReplayList()
{
    if (!ReplayManager)
        return;
    
    // Get available replays and populate list
    TArray<FString> AvailableReplays = ReplayManager->GetAvailableReplays();
    
    // Update UI list here
    // This would typically involve creating list items and adding them to the ListView
}

void USGReplayWidget::StartRecording()
{
    if (ReplayManager)
    {
        FString ReplayName = FString::Printf(TEXT("Manual Recording %s"), *FDateTime::Now().ToString(TEXT("%H:%M:%S")));
        ReplayManager->StartRecording(ReplayName);
    }
}

void USGReplayWidget::StopRecording()
{
    if (ReplayManager)
    {
        ReplayManager->StopRecording();
    }
}

void USGReplayWidget::PauseRecording()
{
    if (ReplayManager)
    {
        ReplayManager->PauseRecording();
    }
}

void USGReplayWidget::StartPlayback()
{
    if (ReplayManager)
    {
        FSGReplayData CurrentData = ReplayManager->GetCurrentReplayData();
        if (CurrentData.FrameData.Num() > 0)
        {
            ReplayManager->StartPlayback(CurrentData, ECameraReplayMode::Cinematic);
        }
    }
}

void USGReplayWidget::StopPlayback()
{
    if (ReplayManager)
    {
        ReplayManager->StopPlayback();
    }
}

void USGReplayWidget::PausePlayback()
{
    if (ReplayManager)
    {
        ReplayManager->PausePlayback();
    }
}

void USGReplayWidget::TogglePlayPause()
{
    if (ReplayManager)
    {
        if (ReplayManager->IsPlaying())
        {
            ReplayManager->PausePlayback();
        }
        else
        {
            ReplayManager->ResumePlayback();
        }
    }
}

void USGReplayWidget::LoadSelectedReplay()
{
    if (ReplayManager && !SelectedReplayName.IsEmpty())
    {
        ReplayManager->LoadReplay(SelectedReplayName);
    }
}

void USGReplayWidget::DeleteSelectedReplay()
{
    if (ReplayManager && !SelectedReplayName.IsEmpty())
    {
        ReplayManager->DeleteReplay(SelectedReplayName);
        RefreshReplayList();
    }
}

void USGReplayWidget::SaveCurrentReplay()
{
    if (ReplayManager)
    {
        ReplayManager->SaveReplay();
    }
}

void USGReplayWidget::NextCamera()
{
    if (ReplayManager)
    {
        ReplayManager->NextCameraMode();
    }
}

void USGReplayWidget::SetCameraMode(int32 ModeIndex)
{
    if (ReplayManager)
    {
        ECameraReplayMode Mode = static_cast<ECameraReplayMode>(ModeIndex);
        ReplayManager->SetCameraMode(Mode);
    }
}

// Button event handlers
void USGReplayWidget::OnRecordButtonClicked()
{
    StartRecording();
}

void USGReplayWidget::OnStopRecordButtonClicked()
{
    StopRecording();
}

void USGReplayWidget::OnPauseRecordButtonClicked()
{
    PauseRecording();
}

void USGReplayWidget::OnPlayButtonClicked()
{
    StartPlayback();
}

void USGReplayWidget::OnStopPlayButtonClicked()
{
    StopPlayback();
}

void USGReplayWidget::OnPausePlayButtonClicked()
{
    PausePlayback();
}

void USGReplayWidget::OnNextCameraButtonClicked()
{
    NextCamera();
}

void USGReplayWidget::OnLoadReplayButtonClicked()
{
    LoadSelectedReplay();
}

void USGReplayWidget::OnDeleteReplayButtonClicked()
{
    DeleteSelectedReplay();
}

void USGReplayWidget::OnSaveReplayButtonClicked()
{
    SaveCurrentReplay();
}

void USGReplayWidget::OnRefreshListButtonClicked()
{
    RefreshReplayList();
}

// Slider event handlers
void USGReplayWidget::OnPlaybackSliderChanged(float Value)
{
    if (ReplayManager)
    {
        FSGReplayData CurrentData = ReplayManager->GetCurrentReplayData();
        float NewTime = Value * CurrentData.TotalDuration;
        ReplayManager->SetPlaybackTime(NewTime);
    }
}

void USGReplayWidget::OnSpeedSliderChanged(float Value)
{
    if (ReplayManager)
    {
        ReplayManager->SetPlaybackSpeed(Value);
    }
}

// Combo box event handlers
void USGReplayWidget::OnCameraModeChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
    // Convert string back to enum and set camera mode
    for (int32 i = 0; i < 7; i++)
    {
        ECameraReplayMode Mode = static_cast<ECameraReplayMode>(i);
        if (GetCameraModeDisplayName(Mode) == SelectedItem)
        {
            SetCameraMode(i);
            break;
        }
    }
}

// List view event handlers
void USGReplayWidget::OnReplayListSelectionChanged(UObject* SelectedItem)
{
    // Handle replay selection
    // SelectedReplayName would be set from the selected item
}

// Replay manager event handlers
void USGReplayWidget::OnRecordingStateChanged(bool bRecording, float Duration)
{
    bIsRecording = bRecording;
    UpdateRecordingUI();
}

void USGReplayWidget::OnPlaybackStateChanged(bool bPlaying, float CurrentTime, float TotalDuration)
{
    bIsPlaying = bPlaying;
    UpdatePlaybackUI();
}

void USGReplayWidget::OnEventRecorded(EReplayEventType EventType, const FString& Description)
{
    // Update event list display
}

void USGReplayWidget::OnReplaySaved(bool bSuccess, const FString& ReplayName)
{
    if (bSuccess)
    {
        RefreshReplayList();
    }
}

// Helper functions
void USGReplayWidget::UpdateRecordingUI()
{
    if (RecordingStatusText)
    {
        FString StatusText = bIsRecording ? TEXT("Recording") : TEXT("Not Recording");
        RecordingStatusText->SetText(FText::FromString(StatusText));
    }
    
    if (RecordingTimeText && ReplayManager && bIsRecording)
    {
        float Duration = ReplayManager->GetRecordingDuration();
        RecordingTimeText->SetText(FText::FromString(FormatTime(Duration)));
    }
}

void USGReplayWidget::UpdatePlaybackUI()
{
    if (PlaybackTimeText && ReplayManager && bIsPlaying)
    {
        float CurrentTime = ReplayManager->GetPlaybackTime();
        PlaybackTimeText->SetText(FText::FromString(FormatTime(CurrentTime)));
    }
    
    if (PlaybackProgress && ReplayManager && bIsPlaying)
    {
        FSGReplayData CurrentData = ReplayManager->GetCurrentReplayData();
        if (CurrentData.TotalDuration > 0.0f)
        {
            float Progress = ReplayManager->GetPlaybackTime() / CurrentData.TotalDuration;
            PlaybackProgress->SetPercent(Progress);
        }
    }
}

void USGReplayWidget::UpdateCameraUI()
{
    if (CameraModeText && ReplayManager)
    {
        ECameraReplayMode CurrentMode = ReplayManager->GetCurrentCameraMode();
        FString ModeText = GetCameraModeDisplayName(CurrentMode);
        CameraModeText->SetText(FText::FromString(ModeText));
    }
}

void USGReplayWidget::UpdateReplayInfo()
{
    if (ReplayInfoText && ReplayManager)
    {
        FSGReplayData CurrentData = ReplayManager->GetCurrentReplayData();
        FString InfoText = FString::Printf(TEXT("Frames: %d | Duration: %s | Player: %s"),
                                          CurrentData.FrameData.Num(),
                                          *FormatTime(CurrentData.TotalDuration),
                                          *CurrentData.PlayerName);
        ReplayInfoText->SetText(FText::FromString(InfoText));
    }
}

void USGReplayWidget::PopulateCameraModes()
{
    if (CameraModeCombo)
    {
        CameraModeCombo->ClearOptions();
        
        for (int32 i = 0; i < 7; i++)
        {
            ECameraReplayMode Mode = static_cast<ECameraReplayMode>(i);
            FString DisplayName = GetCameraModeDisplayName(Mode);
            CameraModeCombo->AddOption(DisplayName);
        }
    }
}

FString USGReplayWidget::FormatTime(float Seconds) const
{
    int32 Minutes = FMath::FloorToInt(Seconds / 60.0f);
    int32 Secs = FMath::FloorToInt(Seconds) % 60;
    int32 Millisecs = FMath::FloorToInt((Seconds - FMath::FloorToFloat(Seconds)) * 100.0f);
    
    return FString::Printf(TEXT("%02d:%02d.%02d"), Minutes, Secs, Millisecs);
}

FString USGReplayWidget::GetCameraModeDisplayName(ECameraReplayMode Mode) const
{
    switch (Mode)
    {
        case ECameraReplayMode::FirstPerson: return TEXT("First Person");
        case ECameraReplayMode::ThirdPerson: return TEXT("Third Person");
        case ECameraReplayMode::Cinematic: return TEXT("Cinematic");
        case ECameraReplayMode::BallFollow: return TEXT("Ball Follow");
        case ECameraReplayMode::StaticOverview: return TEXT("Static Overview");
        case ECameraReplayMode::SideView: return TEXT("Side View");
        case ECameraReplayMode::BehindShot: return TEXT("Behind Shot");
        default: return TEXT("Unknown");
    }
}