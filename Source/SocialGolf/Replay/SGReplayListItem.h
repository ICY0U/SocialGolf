#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "SGReplayTypes.h"
#include "SGReplayListItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayItemSelected, const FString&, ReplayName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayItemDelete, const FString&, ReplayName);

UCLASS()
class SOCIALGOLF_API USGReplayListItem : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void SetReplayData(const FString& InReplayName, const FSGReplayData& InReplayData);

    UFUNCTION(BlueprintCallable, Category = "Replay")
    FString GetReplayName() const { return ReplayName; }

    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplayItemSelected OnItemSelected;

    UPROPERTY(BlueprintAssignable, Category = "Replay")
    FOnReplayItemDelete OnItemDelete;

protected:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* ReplayNameText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* PlayerNameText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* DateText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* DurationText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* ScoreText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* CourseText;

    UPROPERTY(meta = (BindWidget))
    UButton* SelectButton;

    UPROPERTY(meta = (BindWidget))
    UButton* DeleteButton;

    UPROPERTY(meta = (BindWidget))
    UImage* ThumbnailImage;

private:
    UPROPERTY()
    FString ReplayName;

    UPROPERTY()
    FSGReplayData ReplayData;

    UFUNCTION()
    void OnSelectButtonClicked();

    UFUNCTION()
    void OnDeleteButtonClicked();

    FString FormatDuration(float Seconds) const;
    FString FormatDate(const FDateTime& DateTime) const;
};