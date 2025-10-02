#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Basketball/SGBasketballGameManager.h"
#include "SGBasketballStatsWidget.generated.h"

UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API USGBasketballStatsWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    USGBasketballStatsWidget(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    // Reference to the game manager
    UPROPERTY(BlueprintReadOnly, Category = "Basketball")
    ASGBasketballGameManager* GameManager = nullptr;

    // UI Update frequency
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float UpdateFrequency = 0.5f; // Update every 0.5 seconds

    // Last update time
    float LastUpdateTime = 0.0f;

public:
    // Functions to be implemented in Blueprint
    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void UpdateGameStatus(bool bGameActive, float TimeRemaining);

    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void UpdatePlayerStats(const TArray<FBasketballPlayerStats>& PlayerStats);

    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void UpdateTopPlayer(const FBasketballPlayerStats& TopPlayer);

    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void OnGameStarted();

    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void OnGameEnded(const FBasketballPlayerStats& Winner);

    UFUNCTION(BlueprintImplementableEvent, Category = "Basketball UI")
    void OnPlayerScored(const FString& PlayerName, int32 NewScore);

    // Callable functions from Blueprint
    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    bool IsGameActive() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    float GetGameTimeRemaining() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    TArray<FBasketballPlayerStats> GetAllPlayerStats() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    FBasketballPlayerStats GetTopPlayer() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    FBasketballPlayerStats GetLocalPlayerStats() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball UI")
    void SetVisibilityState(bool bVisible);

protected:
    // Helper functions
    void FindGameManager();
    void UpdateUI();
    FString FormatTime(float TimeInSeconds) const;
};