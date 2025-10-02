#include "SGBasketballGameManager.h"
#include "SGBasketball.h"
#include "SGBasketballHoop.h"
#include "../Characters/SGCharacter.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"

ASGBasketballGameManager::ASGBasketballGameManager()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
    
    // Set default values
    bGameActive = false;
    GameTimeRemaining = 0.0f;
    GameDuration = 300.0f; // 5 minutes
    MaxPlayers = 8;
    bAutoSpawnBasketballs = true;
    MaxBasketballs = 10;
    
    // Initialize spawn locations (can be overridden in Blueprint)
    BasketballSpawnLocations.Add(FVector(0.0f, 0.0f, 100.0f));
    BasketballSpawnLocations.Add(FVector(200.0f, 200.0f, 100.0f));
    BasketballSpawnLocations.Add(FVector(-200.0f, 200.0f, 100.0f));
    BasketballSpawnLocations.Add(FVector(200.0f, -200.0f, 100.0f));
    BasketballSpawnLocations.Add(FVector(-200.0f, -200.0f, 100.0f));
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Created"));
}

void ASGBasketballGameManager::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: %s BeginPlay - HasAuthority: %s"), 
           *GetName(), HasAuthority() ? TEXT("true") : TEXT("false"));
    
    // Auto-register any existing hoops in the level
    if (HasAuthority())
    {
        TArray<AActor*> FoundHoops;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballHoop::StaticClass(), FoundHoops);
        
        for (AActor* Actor : FoundHoops)
        {
            if (ASGBasketballHoop* Hoop = Cast<ASGBasketballHoop>(Actor))
            {
                RegisterHoop(Hoop);
            }
        }
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Auto-registered %d hoops"), RegisteredHoops.Num());
        
        // Spawn initial basketballs if enabled
        if (bAutoSpawnBasketballs)
        {
            for (int32 i = 0; i < FMath::Min(MaxBasketballs / 2, 5); i++)
            {
                SpawnBasketball();
            }
        }
    }
}

void ASGBasketballGameManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (HasAuthority() && bGameActive)
    {
        UpdateGameTimer(DeltaTime);
        
        if (bAutoSpawnBasketballs)
        {
            EnsureBasketballAvailability();
        }
        
        // Clean up invalid references periodically
        static float LastCleanupTime = 0.0f;
        if (GetWorld()->GetTimeSeconds() - LastCleanupTime > 5.0f)
        {
            CleanupInvalidReferences();
            LastCleanupTime = GetWorld()->GetTimeSeconds();
        }
    }
}

void ASGBasketballGameManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGBasketballGameManager, bGameActive);
    DOREPLIFETIME(ASGBasketballGameManager, GameTimeRemaining);
    DOREPLIFETIME(ASGBasketballGameManager, PlayerStats);
}

void ASGBasketballGameManager::StartGame()
{
    if (HasAuthority())
    {
        if (bGameActive)
        {
            UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game is already active"));
            return;
        }
        
        bGameActive = true;
        GameTimeRemaining = GameDuration;
        
        // Reset all player stats
        for (FBasketballPlayerStats& Stats : PlayerStats)
        {
            Stats.TotalShots = 0;
            Stats.SuccessfulShots = 0;
            Stats.Accuracy = 0.0f;
            Stats.Score = 0;
        }
        
        MulticastOnGameStarted();
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game started! Duration: %f seconds"), GameDuration);
    }
    else
    {
        ServerStartGame();
    }
}

void ASGBasketballGameManager::EndGame()
{
    if (HasAuthority())
    {
        if (!bGameActive)
        {
            UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: No game is currently active"));
            return;
        }
        
        bGameActive = false;
        GameTimeRemaining = 0.0f;
        
        // Sort players by score for final results
        SortPlayerStatsByScore();
        
        MulticastOnGameEnded();
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game ended!"));
        
        // Log final results
        FBasketballPlayerStats TopPlayer = GetTopPlayer();
        if (!TopPlayer.PlayerName.IsEmpty())
        {
            UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Winner: %s with %d points (%.1f%% accuracy)"), 
                   *TopPlayer.PlayerName, TopPlayer.Score, TopPlayer.Accuracy);
        }
    }
    else
    {
        ServerEndGame();
    }
}

void ASGBasketballGameManager::ResetGame()
{
    if (HasAuthority())
    {
        bGameActive = false;
        GameTimeRemaining = 0.0f;
        
        // Clear all player stats
        PlayerStats.Empty();
        
        // Reset all hoop stats
        for (ASGBasketballHoop* Hoop : RegisteredHoops)
        {
            if (IsValid(Hoop))
            {
                Hoop->ResetStats();
            }
        }
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game reset"));
    }
    else
    {
        ServerResetGame();
    }
}

void ASGBasketballGameManager::RegisterPlayer(ASGCharacter* Player)
{
    if (!HasAuthority() || !IsValid(Player))
        return;
    
    // Check if player is already registered
    for (const FBasketballPlayerStats& Stats : PlayerStats)
    {
        if (Stats.PlayerName == Player->GetName())
        {
            UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Player %s already registered"), *Player->GetName());
            return;
        }
    }
    
    // Add new player
    FBasketballPlayerStats NewStats;
    NewStats.PlayerName = Player->GetName();
    PlayerStats.Add(NewStats);
    
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Registered player %s"), *Player->GetName());
}

void ASGBasketballGameManager::UnregisterPlayer(ASGCharacter* Player)
{
    if (!HasAuthority() || !IsValid(Player))
        return;
    
    PlayerStats.RemoveAll([Player](const FBasketballPlayerStats& Stats)
    {
        return Stats.PlayerName == Player->GetName();
    });
    
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Unregistered player %s"), *Player->GetName());
}

FBasketballPlayerStats ASGBasketballGameManager::GetPlayerStats(ASGCharacter* Player) const
{
    if (!IsValid(Player))
        return FBasketballPlayerStats();
    
    for (const FBasketballPlayerStats& Stats : PlayerStats)
    {
        if (Stats.PlayerName == Player->GetName())
        {
            return Stats;
        }
    }
    
    return FBasketballPlayerStats();
}

void ASGBasketballGameManager::UpdatePlayerStats(ASGCharacter* Player, bool bSuccessfulShot)
{
    if (!HasAuthority() || !IsValid(Player))
        return;
    
    FBasketballPlayerStats* Stats = FindPlayerStats(Player);
    if (!Stats)
    {
        RegisterPlayer(Player);
        Stats = FindPlayerStats(Player);
    }
    
    if (Stats)
    {
        Stats->TotalShots++;
        
        if (bSuccessfulShot)
        {
            Stats->SuccessfulShots++;
            Stats->Score += 2; // 2 points per basket
            
            MulticastOnPlayerScored(Stats->PlayerName, Stats->Score);
        }
        
        // Update accuracy
        Stats->Accuracy = Stats->TotalShots > 0 ? 
            (float(Stats->SuccessfulShots) / float(Stats->TotalShots)) * 100.0f : 0.0f;
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Updated stats for %s - %d/%d shots (%.1f%%), Score: %d"), 
               *Stats->PlayerName, Stats->SuccessfulShots, Stats->TotalShots, Stats->Accuracy, Stats->Score);
    }
}

void ASGBasketballGameManager::RegisterHoop(ASGBasketballHoop* Hoop)
{
    if (!HasAuthority() || !IsValid(Hoop))
        return;
    
    if (!RegisteredHoops.Contains(Hoop))
    {
        RegisteredHoops.Add(Hoop);
        UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Registered hoop %s"), *Hoop->GetName());
    }
}

void ASGBasketballGameManager::UnregisterHoop(ASGBasketballHoop* Hoop)
{
    if (!HasAuthority() || !IsValid(Hoop))
        return;
    
    RegisteredHoops.Remove(Hoop);
    UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Unregistered hoop %s"), *Hoop->GetName());
}

void ASGBasketballGameManager::SpawnBasketball(const FVector& Location)
{
    if (!HasAuthority())
        return;
    
    FVector SpawnLocation = Location;
    if (SpawnLocation.IsZero() && BasketballSpawnLocations.Num() > 0)
    {
        // Choose a random spawn location
        int32 RandomIndex = FMath::RandRange(0, BasketballSpawnLocations.Num() - 1);
        SpawnLocation = GetActorLocation() + BasketballSpawnLocations[RandomIndex];
    }
    else if (SpawnLocation.IsZero())
    {
        // Default spawn location
        SpawnLocation = GetActorLocation() + FVector(0.0f, 0.0f, 100.0f);
    }
    
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    
    ASGBasketball* NewBasketball = GetWorld()->SpawnActor<ASGBasketball>(ASGBasketball::StaticClass(), SpawnLocation, FRotator::ZeroRotator, SpawnParams);
    
    if (NewBasketball)
    {
        SpawnedBasketballs.Add(NewBasketball);
        UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Spawned basketball %s at %s"), *NewBasketball->GetName(), *SpawnLocation.ToString());
    }
}

void ASGBasketballGameManager::CleanupBasketballs()
{
    if (!HasAuthority())
        return;
    
    int32 RemovedCount = 0;
    for (int32 i = SpawnedBasketballs.Num() - 1; i >= 0; i--)
    {
        if (!IsValid(SpawnedBasketballs[i]))
        {
            SpawnedBasketballs.RemoveAt(i);
            RemovedCount++;
        }
    }
    
    if (RemovedCount > 0)
    {
        UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: Cleaned up %d invalid basketballs"), RemovedCount);
    }
}

void ASGBasketballGameManager::OnBasketballScored(ASGCharacter* Shooter, ASGBasketballHoop* Hoop)
{
    if (!HasAuthority())
        return;
    
    if (IsValid(Shooter) && IsValid(Hoop))
    {
        UpdatePlayerStats(Shooter, true);
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: %s scored in hoop %s!"), 
               *Shooter->GetName(), *Hoop->GetName());
    }
}

void ASGBasketballGameManager::OnBasketballThrown(ASGCharacter* Shooter)
{
    if (!HasAuthority())
        return;
    
    if (IsValid(Shooter))
    {
        UpdatePlayerStats(Shooter, false); // Just increment shot count, not successful shots
        
        UE_LOG(LogTemp, Log, TEXT("SGBasketballGameManager: %s threw a basketball"), *Shooter->GetName());
    }
}

FBasketballPlayerStats ASGBasketballGameManager::GetTopPlayer() const
{
    if (PlayerStats.Num() == 0)
        return FBasketballPlayerStats();
    
    FBasketballPlayerStats TopPlayer = PlayerStats[0];
    for (const FBasketballPlayerStats& Stats : PlayerStats)
    {
        if (Stats.Score > TopPlayer.Score)
        {
            TopPlayer = Stats;
        }
    }
    
    return TopPlayer;
}

// Server RPC implementations
void ASGBasketballGameManager::ServerStartGame_Implementation()
{
    StartGame();
}

void ASGBasketballGameManager::ServerEndGame_Implementation()
{
    EndGame();
}

void ASGBasketballGameManager::ServerResetGame_Implementation()
{
    ResetGame();
}

// Multicast RPC implementations
void ASGBasketballGameManager::MulticastOnGameStarted_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game started notification received"));
    // Here you could trigger UI updates, sounds, etc.
}

void ASGBasketballGameManager::MulticastOnGameEnded_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: Game ended notification received"));
    // Here you could trigger end game UI, sounds, etc.
}

void ASGBasketballGameManager::MulticastOnPlayerScored_Implementation(const FString& PlayerName, int32 NewScore)
{
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballGameManager: %s scored! New score: %d"), *PlayerName, NewScore);
    // Here you could trigger scoring effects, sounds, UI updates, etc.
}

// Private helper functions
void ASGBasketballGameManager::UpdateGameTimer(float DeltaTime)
{
    if (GameTimeRemaining > 0.0f)
    {
        GameTimeRemaining -= DeltaTime;
        
        if (GameTimeRemaining <= 0.0f)
        {
            GameTimeRemaining = 0.0f;
            EndGame();
        }
    }
}

void ASGBasketballGameManager::EnsureBasketballAvailability()
{
    CleanupBasketballs();
    
    if (SpawnedBasketballs.Num() < MaxBasketballs / 2)
    {
        SpawnBasketball();
    }
}

FBasketballPlayerStats* ASGBasketballGameManager::FindPlayerStats(ASGCharacter* Player)
{
    if (!IsValid(Player))
        return nullptr;
    
    for (FBasketballPlayerStats& Stats : PlayerStats)
    {
        if (Stats.PlayerName == Player->GetName())
        {
            return &Stats;
        }
    }
    
    return nullptr;
}

void ASGBasketballGameManager::SortPlayerStatsByScore()
{
    PlayerStats.Sort([](const FBasketballPlayerStats& A, const FBasketballPlayerStats& B)
    {
        return A.Score > B.Score; // Sort by score descending
    });
}

void ASGBasketballGameManager::CleanupInvalidReferences()
{
    // Clean up invalid hoops
    RegisteredHoops.RemoveAll([](ASGBasketballHoop* Hoop)
    {
        return !IsValid(Hoop);
    });
    
    // Clean up invalid basketballs
    SpawnedBasketballs.RemoveAll([](ASGBasketball* Basketball)
    {
        return !IsValid(Basketball);
    });
}