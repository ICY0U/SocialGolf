#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "SGBasketballGameManager.generated.h"

class ASGBasketball;
class ASGBasketballHoop;
class ASGCharacter;

USTRUCT(BlueprintType)
struct FBasketballPlayerStats
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;

    UPROPERTY(BlueprintReadOnly)
    int32 TotalShots = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 SuccessfulShots = 0;

    UPROPERTY(BlueprintReadOnly)
    float Accuracy = 0.0f;

    UPROPERTY(BlueprintReadOnly)
    int32 Score = 0;

    FBasketballPlayerStats()
    {
        PlayerName = TEXT("Unknown");
        TotalShots = 0;
        SuccessfulShots = 0;
        Accuracy = 0.0f;
        Score = 0;
    }
};

UCLASS(Blueprintable)
class SOCIALGOLF_API ASGBasketballGameManager : public AActor
{
    GENERATED_BODY()

public:
    ASGBasketballGameManager();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Game state
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    bool bGameActive = false;

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    float GameTimeRemaining = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    float GameDuration = 300.0f; // 5 minutes default

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    int32 MaxPlayers = 8;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    bool bAutoSpawnBasketballs = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    int32 MaxBasketballs = 10;

    // Player stats
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Stats")
    TArray<FBasketballPlayerStats> PlayerStats;

    // References
    UPROPERTY(BlueprintReadOnly, Category = "References")
    TArray<ASGBasketballHoop*> RegisteredHoops;

    UPROPERTY(BlueprintReadOnly, Category = "References")
    TArray<ASGBasketball*> SpawnedBasketballs;

public:
    // Game management
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    bool IsGameActive() const { return bGameActive; }

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    float GetGameTimeRemaining() const { return GameTimeRemaining; }

    // Player management
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void RegisterPlayer(ASGCharacter* Player);

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void UnregisterPlayer(ASGCharacter* Player);

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    FBasketballPlayerStats GetPlayerStats(ASGCharacter* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void UpdatePlayerStats(ASGCharacter* Player, bool bSuccessfulShot);

    // Hoop management
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void RegisterHoop(ASGBasketballHoop* Hoop);

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void UnregisterHoop(ASGBasketballHoop* Hoop);

    // Basketball management
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void SpawnBasketball(const FVector& Location = FVector::ZeroVector);

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void CleanupBasketballs();

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    int32 GetBasketballCount() const { return SpawnedBasketballs.Num(); }

    // Events
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void OnBasketballScored(ASGCharacter* Shooter, ASGBasketballHoop* Hoop);

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    void OnBasketballThrown(ASGCharacter* Shooter);

    // Server RPCs
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball Game")
    void ServerStartGame();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball Game")
    void ServerEndGame();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball Game")
    void ServerResetGame();

    // Multicast RPCs
    UFUNCTION(NetMulticast, Reliable, Category = "Basketball Game")
    void MulticastOnGameStarted();

    UFUNCTION(NetMulticast, Reliable, Category = "Basketball Game")
    void MulticastOnGameEnded();

    UFUNCTION(NetMulticast, Reliable, Category = "Basketball Game")
    void MulticastOnPlayerScored(const FString& PlayerName, int32 NewScore);

    // Getters for UI
    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    TArray<FBasketballPlayerStats> GetAllPlayerStats() const { return PlayerStats; }

    UFUNCTION(BlueprintCallable, Category = "Basketball Game")
    FBasketballPlayerStats GetTopPlayer() const;

protected:
    // Helper functions
    void UpdateGameTimer(float DeltaTime);
    void EnsureBasketballAvailability();
    FBasketballPlayerStats* FindPlayerStats(ASGCharacter* Player);
    void SortPlayerStatsByScore();
    void CleanupInvalidReferences();

    // Spawn locations for basketballs
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Spawning")
    TArray<FVector> BasketballSpawnLocations;

    // Timer handle for game duration
    FTimerHandle GameTimerHandle;
};