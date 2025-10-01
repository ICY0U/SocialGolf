#include "SGGameMode.h"
#include "../Characters/SGCharacter.h"
#include "SGPlayerController.h"
#include "SGPlayerState.h"
#include "SGGameState.h"
#include "../UI/SGHUD.h"
#include "../SaveSystem/SGSaveManager.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"

ASGGameMode::ASGGameMode()
{
    DefaultPawnClass = ASGCharacter::StaticClass();
    PlayerControllerClass = ASGPlayerController::StaticClass();
    PlayerStateClass = ASGPlayerState::StaticClass();
    GameStateClass = ASGGameState::StaticClass();
    HUDClass = ASGHUD::StaticClass(); // Set our custom HUD
    
    bUseSeamlessTravel = true;
    
    // Multiplayer optimizations
    bReplicates = true;
    
    // Ensure proper pawn spawning and possession for multiplayer
    bStartPlayersAsSpectators = false;
    
    // Set tick rate for dedicated servers
    if (GEngine)
    {
        GEngine->SetMaxFPS(60.0f); // Cap server FPS for performance
    }

    // Initialize Save Manager
    SaveManager = CreateDefaultSubobject<USGSaveManager>(TEXT("SaveManager"));
}

void ASGGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGGameMode: BeginPlay - DefaultPawnClass is %s"), 
           DefaultPawnClass ? *DefaultPawnClass->GetName() : TEXT("NULL"));
    
    // Initialize save system
    if (SaveManager)
    {
        UE_LOG(LogTemp, Log, TEXT("Save Manager initialized successfully"));
        
        // Bind to save/load events for debugging
        SaveManager->OnSaveComplete.AddDynamic(this, &ASGGameMode::OnSaveCompleted);
        SaveManager->OnLoadComplete.AddDynamic(this, &ASGGameMode::OnLoadCompleted);
    }
    
    // Debug multiplayer setup
    UE_LOG(LogTemp, Warning, TEXT("SGGameMode: Network Mode = %d"), (int32)GetWorld()->GetNetMode());
}

// Override to ensure proper pawn possession for multiplayer
void ASGGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
    
    if (NewPlayer)
    {
        UE_LOG(LogTemp, Log, TEXT("SGGameMode: PostLogin for controller %s"), *NewPlayer->GetName());
        
        // Ensure the player controller is properly set up for multiplayer
        if (ASGPlayerController* SGController = Cast<ASGPlayerController>(NewPlayer))
        {
            // Force enable input for the new player
            SGController->EnableGameInput();
            
            // Ensure the player has a pawn
            if (!NewPlayer->GetPawn())
            {
                UE_LOG(LogTemp, Warning, TEXT("SGGameMode: No pawn found for %s, attempting to spawn"), *NewPlayer->GetName());
                RestartPlayer(NewPlayer);
            }
        }
    }
}

void ASGGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
    Super::HandleStartingNewPlayer_Implementation(NewPlayer);
    
    if (NewPlayer)
    {
        UE_LOG(LogTemp, Log, TEXT("SGGameMode: HandleStartingNewPlayer for %s"), *NewPlayer->GetName());
        
        // Ensure proper camera setup for multiplayer
        if (ASGPlayerController* SGController = Cast<ASGPlayerController>(NewPlayer))
        {
            // Small delay to ensure pawn is fully spawned and possessed
            FTimerHandle TimerHandle;
            GetWorld()->GetTimerManager().SetTimer(TimerHandle, [SGController]()
            {
                if (SGController && SGController->GetPawn())
                {
                    SGController->SetViewTargetWithBlend(SGController->GetPawn(), 0.0f);
                    SGController->EnableGameInput();
                    UE_LOG(LogTemp, Log, TEXT("SGGameMode: Set view target for multiplayer client %s"), *SGController->GetName());
                }
            }, 0.1f, false);
        }
    }
}

void ASGGameMode::OnSaveCompleted(bool bSuccess, const FString& ErrorMessage)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("GameMode: Save completed successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode: Save failed - %s"), *ErrorMessage);
    }
}

void ASGGameMode::OnLoadCompleted(bool bSuccess, const FString& ErrorMessage)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("GameMode: Load completed successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode: Load failed - %s"), *ErrorMessage);
    }
}