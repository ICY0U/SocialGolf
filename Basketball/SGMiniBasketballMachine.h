#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/TimerHandle.h"
#include "Net/UnrealNetwork.h"
#include "../Core/SGInteractable.h"
#include "SGMiniBasketballMachine.generated.h"

class ASGBasketball;
class ASGCharacter;

/**
 * Mini Basketball Machine - Arcade-style basketball game
 * Features:
 * - Timed gameplay (e.g., 30 seconds)
 * - Score counter display
 * - Ball return/respawn system
 * - Automatic game start when player interacts
 */
UCLASS(Blueprintable)
class SOCIALGOLF_API ASGMiniBasketballMachine : public AActor, public ISGInteractable
{
    GENERATED_BODY()

public:
    ASGMiniBasketballMachine();

    // ISGInteractable Interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // ========== COMPONENTS ==========
    
    /** Root component for positioning */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* RootSceneComponent;

    /** Physical button mesh players can walk into to start game */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* StartButton;

    /** Scoring trigger zone - place this where you want baskets to score */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* ScoringZone;

    /** Ball return/spawn zone - place this where balls should spawn */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* BallReturnZone;

    /** Score display text */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTextRenderComponent* ScoreDisplay;

    /** Timer display text */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTextRenderComponent* TimerDisplay;

    /** Interaction zone for starting game */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* InteractionZone;

    // ========== GAME SETTINGS ==========
    
    /** Game duration in seconds */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    float GameDuration = 30.0f;

    /** Points awarded per successful basket */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    int32 PointsPerBasket = 2;

    /** Number of basketballs available */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    int32 NumberOfBalls = 3;

    /** Time to wait before returning balls */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    float BallReturnDelay = 1.0f;

    /** Minimum downward velocity to count as valid shot */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    float MinimumScoringVelocityZ = -100.0f;

    /** Enable/disable sound effects */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    bool bPlaySounds = true;

    /** Show debug information */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
    bool bShowDebugInfo = false;

    // ========== REPLICATED GAME STATE ==========
    
    /** Is a game currently active? */
    UPROPERTY(ReplicatedUsing = OnRep_IsGameActive, BlueprintReadOnly, Category = "Game State")
    bool bIsGameActive = false;

    /** Current player score */
    UPROPERTY(ReplicatedUsing = OnRep_CurrentScore, BlueprintReadOnly, Category = "Game State")
    int32 CurrentScore = 0;

    /** Time remaining in current game */
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    float TimeRemaining = 0.0f;

    /** Current player using the machine */
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    ASGCharacter* CurrentPlayer = nullptr;

    /** High score for this machine */
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    int32 HighScore = 0;

    /** Name of high score holder */
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
    FString HighScorePlayerName = TEXT("---");

    // ========== BALL TRACKING ==========
    
    /** Basketballs spawned for this machine */
    UPROPERTY()
    TArray<ASGBasketball*> SpawnedBasketballs;

    /** Balls that recently scored (prevent double counting) */
    TMap<TWeakObjectPtr<ASGBasketball>, float> RecentlyScoredBalls;

    /** Balls that passed through pre-scoring zone */
    TSet<TWeakObjectPtr<ASGBasketball>> BallsInPreScoringZone;

    // ========== TIMERS ==========
    
    FTimerHandle GameTimerHandle;
    FTimerHandle BallReturnTimerHandle;

public:
    // ========== PUBLIC FUNCTIONS ==========
    
    /** Start a new game for the given player */
    UFUNCTION(BlueprintCallable, Category = "Mini Basketball Machine")
    void StartGame(ASGCharacter* Player);

    /** End the current game */
    UFUNCTION(BlueprintCallable, Category = "Mini Basketball Machine")
    void EndGame();

    /** Register a successful score */
    UFUNCTION(BlueprintCallable, Category = "Mini Basketball Machine")
    void RegisterScore();

    /** Check if player can start a game */
    UFUNCTION(BlueprintCallable, Category = "Mini Basketball Machine")
    bool CanStartGame(ASGCharacter* Player) const;

    /** Get current score */
    UFUNCTION(BlueprintPure, Category = "Mini Basketball Machine")
    int32 GetCurrentScore() const { return CurrentScore; }

    /** Get time remaining */
    UFUNCTION(BlueprintPure, Category = "Mini Basketball Machine")
    float GetTimeRemaining() const { return TimeRemaining; }

    /** Is game active? */
    UFUNCTION(BlueprintPure, Category = "Mini Basketball Machine")
    bool IsGameActive() const { return bIsGameActive; }

    // ========== SERVER RPCs ==========
    
    UFUNCTION(Server, Reliable, Category = "Mini Basketball Machine")
    void ServerStartGame(ASGCharacter* Player);

    UFUNCTION(Server, Reliable, Category = "Mini Basketball Machine")
    void ServerEndGame();

    UFUNCTION(Server, Reliable, Category = "Mini Basketball Machine")
    void ServerRegisterScore();

    // ========== MULTICAST RPCs ==========
    
    UFUNCTION(NetMulticast, Reliable, Category = "Mini Basketball Machine")
    void MulticastOnGameStarted();

    UFUNCTION(NetMulticast, Reliable, Category = "Mini Basketball Machine")
    void MulticastOnGameEnded(int32 FinalScore, bool bNewHighScore);

    UFUNCTION(NetMulticast, Reliable, Category = "Mini Basketball Machine")
    void MulticastOnScored();

protected:
    // ========== REPLICATION CALLBACKS ==========
    
    UFUNCTION()
    void OnRep_IsGameActive();

    UFUNCTION()
    void OnRep_CurrentScore();

    // ========== COLLISION EVENTS ==========
    
    UFUNCTION()
    void OnScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                   bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPreScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                     bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPreScoringZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UFUNCTION()
    void OnInteractionZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                      UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                      bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnStartButtonOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                             bool bFromSweep, const FHitResult& SweepResult);

    // ========== INTERNAL FUNCTIONS ==========
    
    /** Setup all components */
    void SetupComponents();

    /** Setup collision detection */
    void SetupCollision();

    /** Spawn basketballs for the game */
    void SpawnBasketballs();

    /** Return/despawn all basketballs */
    void ReturnBasketballs();

    /** Update the score display */
    void UpdateScoreDisplay();

    /** Update the timer display */
    void UpdateTimerDisplay();

    /** Update displays to idle state */
    void UpdateDisplaysToIdle();

    /** Check if ball is valid for scoring */
    bool IsValidScoringBall(ASGBasketball* Basketball) const;

    /** Check if ball has valid velocity for scoring */
    bool IsValidScoringVelocity(const FVector& Velocity) const;

    /** Check if ball can score (cooldown check) */
    bool CanBallScore(ASGBasketball* Basketball) const;

    /** Clean up old scoring entries */
    void CleanupOldScoringEntries();

    /** Game timer tick */
    void OnGameTimerTick();

    /** Check and update high score */
    bool CheckAndUpdateHighScore();

    // ========== SOUND EFFECTS ==========
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* GameStartSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* GameEndSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* ScoreSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* HighScoreSound = nullptr;

    /** Play sound effect */
    void PlaySound(USoundCue* Sound);
};
