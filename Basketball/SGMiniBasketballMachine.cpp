#include "SGMiniBasketballMachine.h"
#include "SGBasketball.h"
#include "../Characters/SGCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"

ASGMiniBasketballMachine::ASGMiniBasketballMachine()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    // Create simple root scene component for positioning
    RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = RootSceneComponent;

    // ========== CREATE START BUTTON MESH ==========
    StartButton = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartButton"));
    StartButton->SetupAttachment(RootComponent);
    StartButton->SetRelativeLocation(FVector(100.0f, 0.0f, 50.0f)); // In front of machine, at button height
    StartButton->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f)); // Smaller button size
    
    // Setup button collision - make it interactable via trace
    StartButton->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    StartButton->SetCollisionObjectType(ECC_WorldDynamic); // Important for trace detection
    StartButton->SetCollisionResponseToAllChannels(ECR_Block);
    StartButton->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); // Allow pawns to walk through
    StartButton->SetGenerateOverlapEvents(true);
    
    // Load cube mesh for button
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube"));
    if (CubeMesh.Succeeded())
    {
        StartButton->SetStaticMesh(CubeMesh.Object);
    }
    
    // Bind overlap event for button
    StartButton->OnComponentBeginOverlap.AddDynamic(this, &ASGMiniBasketballMachine::OnStartButtonOverlap);

    // Setup collision zones
    SetupCollision();

    // Create score display
    ScoreDisplay = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreDisplay"));
    ScoreDisplay->SetupAttachment(RootComponent);
    ScoreDisplay->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f)); // High above root
    ScoreDisplay->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f)); // Face forward
    ScoreDisplay->SetHorizontalAlignment(EHTA_Center);
    ScoreDisplay->SetVerticalAlignment(EVRTA_TextCenter);
    ScoreDisplay->SetTextRenderColor(FColor::Green);
    ScoreDisplay->SetWorldSize(80.0f);
    ScoreDisplay->SetText(FText::FromString(TEXT("00")));

    // Create timer display
    TimerDisplay = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TimerDisplay"));
    TimerDisplay->SetupAttachment(RootComponent);
    TimerDisplay->SetRelativeLocation(FVector(0.0f, 0.0f, 80.0f)); // Below score
    TimerDisplay->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f)); // Face forward
    TimerDisplay->SetHorizontalAlignment(EHTA_Center);
    TimerDisplay->SetVerticalAlignment(EVRTA_TextCenter);
    TimerDisplay->SetTextRenderColor(FColor::Yellow);
    TimerDisplay->SetWorldSize(60.0f);
    TimerDisplay->SetText(FText::FromString(TEXT("PRESS START")));

    // Enable debug visualization by default
    bShowDebugInfo = true;

    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Created with START BUTTON mesh and trigger zones"));
}

void ASGMiniBasketballMachine::SetupCollision()
{
    // Create scoring zone - this is where balls score (position this at your hoop location)
    ScoringZone = CreateDefaultSubobject<UBoxComponent>(TEXT("ScoringZone"));
    ScoringZone->SetupAttachment(RootComponent);
    ScoringZone->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f)); // Default: 180cm above root (adjust in editor)
    ScoringZone->SetBoxExtent(FVector(30.0f, 30.0f, 15.0f)); // Default scoring area size
    ScoringZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ScoringZone->SetCollisionObjectType(ECC_WorldStatic);
    ScoringZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    ScoringZone->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
    ScoringZone->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Overlap);
    ScoringZone->SetHiddenInGame(false);
    ScoringZone->SetVisibility(true);
    ScoringZone->ShapeColor = FColor::Green;
    ScoringZone->SetGenerateOverlapEvents(true);

    // Create ball return/spawn zone - this is where balls spawn at game start
    BallReturnZone = CreateDefaultSubobject<UBoxComponent>(TEXT("BallReturnZone"));
    BallReturnZone->SetupAttachment(RootComponent);
    BallReturnZone->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // Default: at root (adjust in editor)
    BallReturnZone->SetBoxExtent(FVector(50.0f, 80.0f, 30.0f)); // Default spawn area size
    BallReturnZone->SetCollisionEnabled(ECollisionEnabled::NoCollision); // No collision, just for positioning
    BallReturnZone->SetHiddenInGame(false);
    BallReturnZone->SetVisibility(true);
    BallReturnZone->ShapeColor = FColor::Cyan;

    // Create interaction zone - where players can start the game
    InteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionZone"));
    InteractionZone->SetupAttachment(RootComponent);
    InteractionZone->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f)); // Default: 100cm in front
    InteractionZone->SetBoxExtent(FVector(50.0f, 100.0f, 150.0f)); // Large interaction area
    InteractionZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionZone->SetCollisionObjectType(ECC_WorldStatic);
    InteractionZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionZone->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    InteractionZone->SetGenerateOverlapEvents(true);
    InteractionZone->SetHiddenInGame(false);
    InteractionZone->SetVisibility(true);
    InteractionZone->ShapeColor = FColor::Yellow;

    // Bind collision events
    ScoringZone->OnComponentBeginOverlap.AddDynamic(this, &ASGMiniBasketballMachine::OnScoringZoneBeginOverlap);
    InteractionZone->OnComponentBeginOverlap.AddDynamic(this, &ASGMiniBasketballMachine::OnInteractionZoneBeginOverlap);
    
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Simplified collision zones setup complete"));
}

void ASGMiniBasketballMachine::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: %s BeginPlay - HasAuthority: %s"),
           *GetName(), HasAuthority() ? TEXT("true") : TEXT("false"));

    // Setup periodic cleanup on server
    if (HasAuthority())
    {
        FTimerHandle CleanupTimer;
        GetWorld()->GetTimerManager().SetTimer(CleanupTimer, this, 
            &ASGMiniBasketballMachine::CleanupOldScoringEntries, 2.0f, true);
    }

    UpdateDisplaysToIdle();
}

void ASGMiniBasketballMachine::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update timer display on clients
    if (bIsGameActive)
    {
        UpdateTimerDisplay();
    }
    
    // Draw all zones for easy positioning in editor
    if (bShowDebugInfo && GetWorld())
    {
        // Draw START BUTTON (BRIGHT MAGENTA) - the actual interaction point!
        if (StartButton)
        {
            FVector ButtonLocation = StartButton->GetComponentLocation();
            FVector ButtonExtent = StartButton->Bounds.BoxExtent;
            
            DrawDebugBox(GetWorld(), 
                        ButtonLocation, 
                        ButtonExtent,
                        StartButton->GetComponentQuat(),
                        FColor::Magenta, 
                        false, -1.0f, 0, 5.0f); // Thick magenta outline
            
            DrawDebugString(GetWorld(), 
                           ButtonLocation + FVector(0, 0, ButtonExtent.Z + 20), 
                           TEXT("? START BUTTON ?\n(Walk into this!)"),
                           nullptr, FColor::Magenta, 0.0f, true, 1.5f);
        }
        
        // Draw scoring zone (GREEN) - where balls score
        if (ScoringZone)
        {
            DrawDebugBox(GetWorld(), 
                        ScoringZone->GetComponentLocation(), 
                        ScoringZone->GetScaledBoxExtent(), 
                        ScoringZone->GetComponentQuat(),
                        FColor::Green, 
                        false, -1.0f, 0, 3.0f);
            
            DrawDebugString(GetWorld(), 
                           ScoringZone->GetComponentLocation() + FVector(0, 0, 50), 
                           TEXT("SCORING ZONE\n(Position at hoop)"),
                           nullptr, FColor::Green, 0.0f, true);
        }
        
        // Draw ball return zone (CYAN) - where balls spawn
        if (BallReturnZone)
        {
            DrawDebugBox(GetWorld(), 
                        BallReturnZone->GetComponentLocation(), 
                        BallReturnZone->GetScaledBoxExtent(), 
                        BallReturnZone->GetComponentQuat(),
                        FColor::Cyan, 
                        false, -1.0f, 0, 3.0f);
            
            DrawDebugString(GetWorld(), 
                           BallReturnZone->GetComponentLocation() + FVector(0, 0, 100), 
                           TEXT("BALL RETURN ZONE\n(Adjust spawn location)"),
                           nullptr, FColor::Cyan, 0.0f, true);
        }
        
        // Draw interaction zone (YELLOW) - where players interact via E key
        if (InteractionZone)
        {
            DrawDebugBox(GetWorld(), 
                        InteractionZone->GetComponentLocation(), 
                        InteractionZone->GetScaledBoxExtent(), 
                        InteractionZone->GetComponentQuat(),
                        FColor::Yellow, 
                        false, -1.0f, 0, 2.0f);
            
            DrawDebugString(GetWorld(), 
                           InteractionZone->GetComponentLocation() + FVector(0, 0, 50), 
                           TEXT("INTERACTION ZONE\n(Press E here)"),
                           nullptr, FColor::Yellow, 0.0f, true);
        }
        
        // Draw game state info
        if (bIsGameActive)
        {
            FString GameStateInfo = FString::Printf(TEXT("GAME ACTIVE | Score: %d | Time: %.1fs\nBalls: %d"),
                                                   CurrentScore, TimeRemaining, SpawnedBasketballs.Num());
            DrawDebugString(GetWorld(),
                           GetActorLocation() + FVector(0, 0, 300),
                           GameStateInfo,
                           nullptr, FColor::White, 0.0f, true, 1.5f);
        }
        else
        {
            DrawDebugString(GetWorld(),
                           GetActorLocation() + FVector(0, 0, 300),
                           TEXT("READY TO PLAY\n(Walk into MAGENTA button OR press E in yellow zone)"),
                           nullptr, FColor::White, 0.0f, true, 1.5f);
        }
    }
}

void ASGMiniBasketballMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ASGMiniBasketballMachine, bIsGameActive);
    DOREPLIFETIME(ASGMiniBasketballMachine, CurrentScore);
    DOREPLIFETIME(ASGMiniBasketballMachine, TimeRemaining);
    DOREPLIFETIME(ASGMiniBasketballMachine, CurrentPlayer);
    DOREPLIFETIME(ASGMiniBasketballMachine, HighScore);
    DOREPLIFETIME(ASGMiniBasketballMachine, HighScorePlayerName);
}

// ========== GAME MANAGEMENT ==========

void ASGMiniBasketballMachine::StartGame(ASGCharacter* Player)
{
    if (HasAuthority())
    {
        ServerStartGame(Player);
    }
    else
    {
        ServerStartGame(Player);
    }
}

void ASGMiniBasketballMachine::ServerStartGame_Implementation(ASGCharacter* Player)
{
    if (!CanStartGame(Player))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Cannot start game"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Starting game for %s"), 
           Player ? *Player->GetName() : TEXT("Unknown"));

    // Set game state
    bIsGameActive = true;
    CurrentScore = 0;
    TimeRemaining = GameDuration;
    CurrentPlayer = Player;

    // Update displays
    UpdateScoreDisplay();
    UpdateTimerDisplay();

    // Spawn basketballs
    SpawnBasketballs();

    // Start game timer
    GetWorld()->GetTimerManager().SetTimer(GameTimerHandle, this, 
        &ASGMiniBasketballMachine::OnGameTimerTick, 0.1f, true);

    // Notify all clients
    MulticastOnGameStarted();
}

void ASGMiniBasketballMachine::EndGame()
{
    if (HasAuthority())
    {
        ServerEndGame();
    }
    else
    {
        ServerEndGame();
    }
}

void ASGMiniBasketballMachine::ServerEndGame_Implementation()
{
    if (!bIsGameActive)
        return;

    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Ending game. Final score: %d"), CurrentScore);

    // Stop timer
    GetWorld()->GetTimerManager().ClearTimer(GameTimerHandle);

    // Check for high score
    bool bNewHighScore = CheckAndUpdateHighScore();

    int32 FinalScore = CurrentScore;

    // Reset game state
    bIsGameActive = false;
    TimeRemaining = 0.0f;

    // Return basketballs
    ReturnBasketballs();

    // Reset current player after a delay
    FTimerHandle ResetPlayerTimer;
    GetWorld()->GetTimerManager().SetTimer(ResetPlayerTimer, [this]()
    {
        CurrentPlayer = nullptr;
    }, 2.0f, false);

    // Update displays
    UpdateDisplaysToIdle();

    // Notify all clients
    MulticastOnGameEnded(FinalScore, bNewHighScore);
}

bool ASGMiniBasketballMachine::CanStartGame(ASGCharacter* Player) const
{
    if (!Player)
        return false;

    if (bIsGameActive)
        return false;

    return true;
}

void ASGMiniBasketballMachine::RegisterScore()
{
    if (HasAuthority())
    {
        ServerRegisterScore();
    }
    else
    {
        ServerRegisterScore();
    }
}

void ASGMiniBasketballMachine::ServerRegisterScore_Implementation()
{
    if (!bIsGameActive)
        return;

    CurrentScore += PointsPerBasket;

    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: SCORE! New score: %d"), CurrentScore);

    UpdateScoreDisplay();

    // Notify all clients
    MulticastOnScored();
}

// ========== TIMER MANAGEMENT ==========

void ASGMiniBasketballMachine::OnGameTimerTick()
{
    if (!bIsGameActive)
        return;

    TimeRemaining -= 0.1f;

    if (TimeRemaining <= 0.0f)
    {
        TimeRemaining = 0.0f;
        EndGame();
    }
}

// ========== BASKETBALL MANAGEMENT ==========

void ASGMiniBasketballMachine::SpawnBasketballs()
{
    if (!HasAuthority())
        return;

    // Clean up any existing basketballs
    ReturnBasketballs();

    // Spawn basketballs at the ball return zone location
    FVector SpawnBaseLocation = BallReturnZone->GetComponentLocation();

    for (int32 i = 0; i < NumberOfBalls; i++)
    {
        // Spread balls out in a line
        FVector SpawnLocation = SpawnBaseLocation + FVector(0.0f, i * 30.0f - (NumberOfBalls - 1) * 15.0f, 20.0f);

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        ASGBasketball* NewBasketball = GetWorld()->SpawnActor<ASGBasketball>(
            ASGBasketball::StaticClass(), SpawnLocation, FRotator::ZeroRotator, SpawnParams);

        if (NewBasketball)
        {
            SpawnedBasketballs.Add(NewBasketball);
            UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Spawned basketball %d at %s"), 
                   i, *SpawnLocation.ToString());
            
            // Draw spawn location for debugging
            if (bShowDebugInfo)
            {
                DrawDebugSphere(GetWorld(), SpawnLocation, 30.0f, 12, FColor::Magenta, false, 5.0f, 0, 3.0f);
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: FAILED to spawn basketball %d"), i);
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Total spawned basketballs: %d"), SpawnedBasketballs.Num());
}

void ASGMiniBasketballMachine::ReturnBasketballs()
{
    if (!HasAuthority())
        return;

    for (ASGBasketball* Basketball : SpawnedBasketballs)
    {
        if (IsValid(Basketball))
        {
            Basketball->Destroy();
        }
    }

    SpawnedBasketballs.Empty();
    RecentlyScoredBalls.Empty();
    BallsInPreScoringZone.Empty();

    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Returned all basketballs"));
}

// ========== SCORING VALIDATION ==========

bool ASGMiniBasketballMachine::IsValidScoringBall(ASGBasketball* Basketball) const
{
    if (!Basketball)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: IsValidScoringBall - NULL basketball"));
        return false;
    }

    // ULTRA SIMPLIFIED: ANY basketball is valid for scoring (removed throw requirement)
    // This allows even freshly spawned balls to score
    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: IsValidScoringBall - Ball IS VALID (no requirements)"));
    return true;
}

bool ASGMiniBasketballMachine::CanBallScore(ASGBasketball* Basketball) const
{
    if (!Basketball)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: CanBallScore - NULL basketball"));
        return false;
    }

    // SIMPLIFIED: Only check scoring cooldown (removed pre-zone check)
    if (const float* LastScoringTime = RecentlyScoredBalls.Find(Basketball))
    {
        float TimeSinceLastScore = GetWorld()->GetTimeSeconds() - *LastScoringTime;
        if (TimeSinceLastScore < 1.0f) // 1 second cooldown
        {
            UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: CanBallScore - Ball on COOLDOWN (%.2fs since last score)"),
                   TimeSinceLastScore);
            return false;
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: CanBallScore - Ball CAN SCORE!"));
    return true;
}

void ASGMiniBasketballMachine::CleanupOldScoringEntries()
{
    if (!HasAuthority())
        return;

    float CurrentTime = GetWorld()->GetTimeSeconds();

    // Clean up old scoring entries
    for (auto It = RecentlyScoredBalls.CreateIterator(); It; ++It)
    {
        if (!It.Key().IsValid() || (CurrentTime - It.Value()) > 2.0f)
        {
            It.RemoveCurrent();
        }
    }

    // PRE-SCORING ZONE DISABLED - No longer tracking balls in pre-zone
    // The BallsInPreScoringZone set is no longer used for scoring validation
}

// ========== COLLISION EVENTS ==========

void ASGMiniBasketballMachine::OnScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, 
                                                        AActor* OtherActor,
                                                        UPrimitiveComponent* OtherComp, 
                                                        int32 OtherBodyIndex,
                                                        bool bFromSweep, 
                                                        const FHitResult& SweepResult)
{
    // DEBUG: Draw scoring zone in bright green when anything enters
    DrawDebugBox(GetWorld(), ScoringZone->GetComponentLocation(), 
                 ScoringZone->GetScaledBoxExtent(), 
                 FQuat::Identity, FColor::Green, false, 2.0f, 0, 5.0f);
    
    // CRITICAL DEBUG: Log EVERYTHING that overlaps
    FString OtherActorInfo = OtherActor ? FString::Printf(TEXT("Actor: %s, Class: %s"), *OtherActor->GetName(), *OtherActor->GetClass()->GetName()) : TEXT("NULL ACTOR");
    FString OtherCompInfo = OtherComp ? FString::Printf(TEXT("Component: %s, CollisionType: %d"), *OtherComp->GetName(), (int32)OtherComp->GetCollisionObjectType()) : TEXT("NULL COMPONENT");
    
    UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ??? SCORING ZONE OVERLAP ??? %s, %s, HasAuthority: %s, GameActive: %s"), 
           *OtherActorInfo, *OtherCompInfo,
           HasAuthority() ? TEXT("YES") : TEXT("NO"),
           bIsGameActive ? TEXT("YES") : TEXT("NO"));
    
    // Only server handles scoring
    if (!HasAuthority() || !bIsGameActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Scoring ignored - Authority: %s, GameActive: %s"),
               HasAuthority() ? TEXT("YES") : TEXT("NO"),
               bIsGameActive ? TEXT("YES") : TEXT("NO"));
        return;
    }

    ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor);
    if (!Basketball)
    {
        UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ? NOT A BASKETBALL - Actor: %s, Class: %s ?"), 
               OtherActor ? *OtherActor->GetName() : TEXT("NULL"),
               OtherActor ? *OtherActor->GetClass()->GetName() : TEXT("NULL CLASS"));
        return;
    }

    UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ? BASKETBALL DETECTED ? %s"), *Basketball->GetName());

    // SIMPLIFIED: Only check if ball has been thrown
    if (!IsValidScoringBall(Basketball))
    {
        UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ? INVALID SCORING BALL ? HasBeenThrown: %s"),
               Basketball->HasBeenThrown() ? TEXT("YES") : TEXT("NO"));
        return;
    }

    // SIMPLIFIED: Check cooldown only (removed velocity and pre-zone checks)
    if (!CanBallScore(Basketball))
    {
        bool bRecentlyScored = RecentlyScoredBalls.Contains(Basketball);
        UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ? BALL ON COOLDOWN ? RecentlyScored: %s"),
               bRecentlyScored ? TEXT("YES") : TEXT("NO"));
        return;
    }

    // SCORE! (No velocity or pre-zone requirements)
    UE_LOG(LogTemp, Error, TEXT("SGMiniBasketballMachine: ?? ?? ?? BASKET SCORED! ?? ?? ?? Ball: %s"), 
           *Basketball->GetName());
    
    // Draw big success visualization
    DrawDebugBox(GetWorld(), ScoringZone->GetComponentLocation(), 
                 ScoringZone->GetScaledBoxExtent(), 
                 FQuat::Identity, FColor::Cyan, false, 3.0f, 0, 10.0f);
    DrawDebugSphere(GetWorld(), Basketball->GetActorLocation(), 50.0f, 12, FColor::Green, false, 3.0f, 0, 5.0f);

    // Mark this ball as recently scored
    RecentlyScoredBalls.Add(Basketball, GetWorld()->GetTimeSeconds());

    // Register the score
    RegisterScore();
}

void ASGMiniBasketballMachine::OnInteractionZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent,
                                                            AActor* OtherActor,
                                                            UPrimitiveComponent* OtherComp,
                                                            int32 OtherBodyIndex,
                                                            bool bFromSweep,
                                                            const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Interaction zone overlap - Actor: %s"), 
           OtherActor ? *OtherActor->GetName() : TEXT("NULL"));
    
    // This is handled by the ISGInteractable interface
    // The overlap is just for showing interaction prompts to the player
}

void ASGMiniBasketballMachine::OnStartButtonOverlap(UPrimitiveComponent* OverlappedComponent, 
                                                  AActor* OtherActor,
                                                  UPrimitiveComponent* OtherComp, 
                                                  int32 OtherBodyIndex,
                                                  bool bFromSweep, 
                                                  const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("??? START BUTTON OVERLAP! ??? Actor: %s"), 
           OtherActor ? *OtherActor->GetName() : TEXT("NULL"));

    // Only server handles game start
    if (!HasAuthority())
    {
        UE_LOG(LogTemp, Warning, TEXT("Start Button: Not server, ignoring"));
        return;
    }

    // Try to start game if it's a character
    ASGCharacter* Character = Cast<ASGCharacter>(OtherActor);
    if (Character && CanStartGame(Character))
    {
        UE_LOG(LogTemp, Warning, TEXT("? START BUTTON: Starting game for %s! ?"), *Character->GetName());
        StartGame(Character);
    }
    else if (Character)
    {
        UE_LOG(LogTemp, Warning, TEXT("Start Button: Cannot start game - already active or invalid state"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Start Button: Not a character, ignoring"));
    }
}

// ========== DISPLAY UPDATES ==========

void ASGMiniBasketballMachine::UpdateScoreDisplay()
{
    if (ScoreDisplay)
    {
        FString ScoreText = FString::Printf(TEXT("%02d"), CurrentScore);
        ScoreDisplay->SetText(FText::FromString(ScoreText));
        ScoreDisplay->SetTextRenderColor(FColor::Green);
    }
}

void ASGMiniBasketballMachine::UpdateTimerDisplay()
{
    if (TimerDisplay)
    {
        if (bIsGameActive)
        {
            int32 Seconds = FMath::CeilToInt(TimeRemaining);
            FString TimerText = FString::Printf(TEXT("%02d"), Seconds);
            TimerDisplay->SetText(FText::FromString(TimerText));
            
            // Change color based on time remaining
            if (TimeRemaining <= 5.0f)
            {
                TimerDisplay->SetTextRenderColor(FColor::Red);
            }
            else if (TimeRemaining <= 10.0f)
            {
                TimerDisplay->SetTextRenderColor(FColor::Orange);
            }
            else
            {
                TimerDisplay->SetTextRenderColor(FColor::Yellow);
            }
        }
        else
        {
            TimerDisplay->SetText(FText::FromString(TEXT("PRESS START")));
            TimerDisplay->SetTextRenderColor(FColor::Yellow);
        }
    }
}

void ASGMiniBasketballMachine::UpdateDisplaysToIdle()
{
    if (ScoreDisplay)
    {
        ScoreDisplay->SetText(FText::FromString(TEXT("00")));
        ScoreDisplay->SetTextRenderColor(FColor::Green);
    }
    
    if (TimerDisplay)
    {
        TimerDisplay->SetText(FText::FromString(TEXT("PRESS START")));
        TimerDisplay->SetTextRenderColor(FColor::Yellow);
    }
}

bool ASGMiniBasketballMachine::CheckAndUpdateHighScore()
{
    if (CurrentScore > HighScore)
    {
        HighScore = CurrentScore;
        
        if (CurrentPlayer)
        {
            // Use GetName() for the player name since GetPlayerName() doesn't exist
            HighScorePlayerName = CurrentPlayer->GetName();
        }
        else
        {
            HighScorePlayerName = TEXT("Unknown Player");
        }
        
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: NEW HIGH SCORE! %d by %s"), 
               HighScore, *HighScorePlayerName);
        
        return true;
    }
    
    return false;
}

// ========== MULTICAST RPCs ==========

void ASGMiniBasketballMachine::MulticastOnGameStarted_Implementation()
{
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Game started notification"));
    
    PlaySound(GameStartSound);
    
    // Visual feedback
    if (ScoreDisplay)
    {
        ScoreDisplay->SetTextRenderColor(FColor::Cyan);
    }
}

void ASGMiniBasketballMachine::MulticastOnGameEnded_Implementation(int32 FinalScore, bool bNewHighScore)
{
    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Game ended - Score: %d, New High Score: %s"), 
           FinalScore, bNewHighScore ? TEXT("YES") : TEXT("NO"));
    
    if (bNewHighScore)
    {
        PlaySound(HighScoreSound);
    }
    else
    {
        PlaySound(GameEndSound);
    }
}

void ASGMiniBasketballMachine::MulticastOnScored_Implementation()
{
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Score notification"));
    
    PlaySound(ScoreSound);
    
    // Flash the score display
    if (ScoreDisplay)
    {
        ScoreDisplay->SetTextRenderColor(FColor::Cyan);
    }
}

// ========== REPLICATION CALLBACKS ==========

void ASGMiniBasketballMachine::OnRep_IsGameActive()
{
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Game active state changed to: %s"), 
           bIsGameActive ? TEXT("Active") : TEXT("Inactive"));
    
    if (!bIsGameActive)
    {
        UpdateDisplaysToIdle();
    }
}

void ASGMiniBasketballMachine::OnRep_CurrentScore()
{
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Score changed to: %d"), CurrentScore);
    UpdateScoreDisplay();
}

// ========== ISGINTERACTABLE INTERFACE ==========

FText ASGMiniBasketballMachine::GetInteractionText_Implementation() const
{
    if (bIsGameActive)
    {
        if (CurrentPlayer)
        {
            return FText::FromString(FString::Printf(TEXT("Playing - Score: %d Time: %.0fs"), 
                                                     CurrentScore, TimeRemaining));
        }
        return FText::FromString(TEXT("Game in Progress"));
    }
    
    if (HighScore > 0)
    {
        return FText::FromString(FString::Printf(TEXT("Mini Basketball\nHigh Score: %d by %s\nPress E to Start OR Walk into button"), 
                                                 HighScore, *HighScorePlayerName));
    }
    
    return FText::FromString(TEXT("Mini Basketball\nPress E to Start OR Walk into button"));
}

void ASGMiniBasketballMachine::Interact_Implementation(APawn* InstigatorPawn)
{
    ASGCharacter* Character = Cast<ASGCharacter>(InstigatorPawn);
    if (Character && CanStartGame(Character))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: Player interaction - Starting game"));
        StartGame(Character);
    }
}

// ========== AUDIO ==========

void ASGMiniBasketballMachine::PlaySound(USoundCue* Sound)
{
    if (bPlaySounds && Sound && GetWorld())
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation());
    }
}

bool ASGMiniBasketballMachine::IsValidScoringVelocity(const FVector& Velocity) const
{
    // SIMPLIFIED: Always return true - no velocity requirement
    UE_LOG(LogTemp, Warning, TEXT("SGMiniBasketballMachine: IsValidScoringVelocity - Velocity check DISABLED, always valid"));
    return true;
}

void ASGMiniBasketballMachine::OnPreScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent,
                                                           AActor* OtherActor,
                                                           UPrimitiveComponent* OtherComp,
                                                           int32 OtherBodyIndex,
                                                           bool bFromSweep,
                                                           const FHitResult& SweepResult)
{
    // PRE-SCORING ZONE DISABLED - No longer required for scoring
    // Scoring now works with just the main scoring zone
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Pre-scoring zone overlap (DISABLED - not required for scoring)"));
}

void ASGMiniBasketballMachine::OnPreScoringZoneEndOverlap(UPrimitiveComponent* OverlappedComponent,
                                                         AActor* OtherActor,
                                                         UPrimitiveComponent* OtherComp,
                                                         int32 OtherBodyIndex)
{
    // PRE-SCORING ZONE DISABLED - No longer required for scoring
    // This function is kept for compatibility but does nothing
    UE_LOG(LogTemp, Log, TEXT("SGMiniBasketballMachine: Pre-scoring zone end overlap (DISABLED - not required for scoring)"));
}
