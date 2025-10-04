#include "SGBasketballStatsWidget.h"
#include "SGBasketballGameManager.h"
#include "../Characters/SGCharacter.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

USGBasketballStatsWidget::USGBasketballStatsWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // Set default values
    UpdateFrequency = 0.5f;
    LastUpdateTime = 0.0f;
    GameManager = nullptr;
}

void USGBasketballStatsWidget::NativeConstruct()
{
    Super::NativeConstruct();
    
    // Find the game manager
    FindGameManager();
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballStatsWidget: Widget constructed"));
}

void USGBasketballStatsWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);
    
    // Update UI at specified frequency
    LastUpdateTime += InDeltaTime;
    if (LastUpdateTime >= UpdateFrequency)
    {
        UpdateUI();
        LastUpdateTime = 0.0f;
    }
}

void USGBasketballStatsWidget::StartGame()
{
    if (GameManager)
    {
        GameManager->StartGame();
        OnGameStarted();
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: Game started via UI"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: No game manager found to start game"));
    }
}

void USGBasketballStatsWidget::EndGame()
{
    if (GameManager)
    {
        FBasketballPlayerStats Winner = GameManager->GetTopPlayer();
        GameManager->EndGame();
        OnGameEnded(Winner);
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: Game ended via UI"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: No game manager found to end game"));
    }
}

void USGBasketballStatsWidget::ResetGame()
{
    if (GameManager)
    {
        GameManager->ResetGame();
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: Game reset via UI"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: No game manager found to reset game"));
    }
}

bool USGBasketballStatsWidget::IsGameActive() const
{
    if (GameManager)
    {
        return GameManager->IsGameActive();
    }
    return false;
}

float USGBasketballStatsWidget::GetGameTimeRemaining() const
{
    if (GameManager)
    {
        return GameManager->GetGameTimeRemaining();
    }
    return 0.0f;
}

TArray<FBasketballPlayerStats> USGBasketballStatsWidget::GetAllPlayerStats() const
{
    if (GameManager)
    {
        return GameManager->GetAllPlayerStats();
    }
    return TArray<FBasketballPlayerStats>();
}

FBasketballPlayerStats USGBasketballStatsWidget::GetTopPlayer() const
{
    if (GameManager)
    {
        return GameManager->GetTopPlayer();
    }
    return FBasketballPlayerStats();
}

FBasketballPlayerStats USGBasketballStatsWidget::GetLocalPlayerStats() const
{
    if (GameManager)
    {
        // Get the local player's character
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (ASGCharacter* Character = Cast<ASGCharacter>(PC->GetPawn()))
            {
                return GameManager->GetPlayerStats(Character);
            }
        }
    }
    return FBasketballPlayerStats();
}

void USGBasketballStatsWidget::SetVisibilityState(bool bVisible)
{
    if (bVisible)
    {
        SetVisibility(ESlateVisibility::Visible);
    }
    else
    {
        SetVisibility(ESlateVisibility::Hidden);
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballStatsWidget: Visibility set to %s"), bVisible ? TEXT("Visible") : TEXT("Hidden"));
}

void USGBasketballStatsWidget::FindGameManager()
{
    // Find the basketball game manager in the world
    TArray<AActor*> FoundManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballGameManager::StaticClass(), FoundManagers);
    
    if (FoundManagers.Num() > 0)
    {
        GameManager = Cast<ASGBasketballGameManager>(FoundManagers[0]);
        UE_LOG(LogTemp, Log, TEXT("SGBasketballStatsWidget: Found game manager %s"), *GameManager->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballStatsWidget: No basketball game manager found in world"));
    }
}

void USGBasketballStatsWidget::UpdateUI()
{
    if (!GameManager)
    {
        FindGameManager(); // Try to find it again
        return;
    }
    
    // Update game status
    bool bGameActive = GameManager->IsGameActive();
    float TimeRemaining = GameManager->GetGameTimeRemaining();
    UpdateGameStatus(bGameActive, TimeRemaining);
    
    // Update player stats
    TArray<FBasketballPlayerStats> PlayerStats = GameManager->GetAllPlayerStats();
    UpdatePlayerStats(PlayerStats);
    
    // Update top player
    FBasketballPlayerStats TopPlayer = GameManager->GetTopPlayer();
    UpdateTopPlayer(TopPlayer);
}

FString USGBasketballStatsWidget::FormatTime(float TimeInSeconds) const
{
    int32 Minutes = FMath::FloorToInt(TimeInSeconds / 60.0f);
    int32 Seconds = FMath::FloorToInt(TimeInSeconds) % 60;
    
    return FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
}