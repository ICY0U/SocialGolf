#include "SGReplayListItem.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"

void USGReplayListItem::NativeConstruct()
{
    Super::NativeConstruct();
    
    if (SelectButton)
    {
        SelectButton->OnClicked.AddDynamic(this, &USGReplayListItem::OnSelectButtonClicked);
    }
    
    if (DeleteButton)
    {
        DeleteButton->OnClicked.AddDynamic(this, &USGReplayListItem::OnDeleteButtonClicked);
    }
}

void USGReplayListItem::SetReplayData(const FString& InReplayName, const FSGReplayData& InReplayData)
{
    ReplayName = InReplayName;
    ReplayData = InReplayData;
    
    // Update UI elements
    if (ReplayNameText)
    {
        ReplayNameText->SetText(FText::FromString(ReplayData.ReplayName));
    }
    
    if (PlayerNameText)
    {
        PlayerNameText->SetText(FText::FromString(ReplayData.PlayerName));
    }
    
    if (DateText)
    {
        FString DateString = FormatDate(ReplayData.RecordingDate);
        DateText->SetText(FText::FromString(DateString));
    }
    
    if (DurationText)
    {
        FString DurationString = FormatDuration(ReplayData.TotalDuration);
        DurationText->SetText(FText::FromString(DurationString));
    }
    
    if (ScoreText)
    {
        FString ScoreString = FString::Printf(TEXT("Score: %d"), ReplayData.FinalScore);
        ScoreText->SetText(FText::FromString(ScoreString));
    }
    
    if (CourseText)
    {
        CourseText->SetText(FText::FromString(ReplayData.CourseName));
    }
}

void USGReplayListItem::OnSelectButtonClicked()
{
    OnItemSelected.Broadcast(ReplayName);
}

void USGReplayListItem::OnDeleteButtonClicked()
{
    OnItemDelete.Broadcast(ReplayName);
}

FString USGReplayListItem::FormatDuration(float Seconds) const
{
    int32 Minutes = FMath::FloorToInt(Seconds / 60.0f);
    int32 Secs = FMath::FloorToInt(Seconds) % 60;
    
    return FString::Printf(TEXT("%d:%02d"), Minutes, Secs);
}

FString USGReplayListItem::FormatDate(const FDateTime& DateTime) const
{
    return DateTime.ToString(TEXT("%m/%d/%Y %H:%M"));
}