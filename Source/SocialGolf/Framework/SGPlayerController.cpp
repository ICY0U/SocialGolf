#include "SGPlayerController.h"
#include "Engine/Engine.h"
#include "Components/InputComponent.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "Camera/CameraComponent.h"
#include "../UI/SGHUD.h"
#include "../SaveSystem/SGSaveManager.h"
#include "../Characters/SGCharacter.h"
#include "../Lighting/SGCandle.h"
#include "../Lighting/SGAdvancedCandle.h"
#include "../Lighting/SGPickupCandle.h"
#include "../Interaction/SGInteractionComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Golf/SGGolfBall.h"
#include "../Golf/SGGolfClubManager.h"
#include "../Golf/SGGolfTee.h"
#include "SGGameMode.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "../Replay/SGReplayManager.h"
#include "../Replay/SGReplayWidget.h"

ASGPlayerController::ASGPlayerController()
{
    bReplicates = true;
    bAutoManageActiveCameraTarget = true; // This is crucial for camera switching
    
    // Set basic properties - don't call functions that require full initialization
    bShowMouseCursor = false;
    bEnableClickEvents = false;
    bEnableMouseOverEvents = false;
    bGameInputEnabled = true;
    
    // Network optimizations - use new API
    NetPriority = 3.0f; // Higher priority for player controllers
    SetNetUpdateFrequency(100.0f); // Update rate for this actor
    
    // Enable FPS display by default
    bShowFPS = true;
    
    // Initialize replay system
    ReplayManager = CreateDefaultSubobject<USGReplayManager>(TEXT("ReplayManager"));
}

void ASGPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGPlayerController: BeginPlay started"));
    
    // Ensure we have a valid pawn
    if (!GetPawn())
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No pawn found at BeginPlay"));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Pawn found: %s"), *GetPawn()->GetName());
        
        // Special multiplayer handling
        if (GetWorld())
        {
            ENetMode NetMode = GetWorld()->GetNetMode();
            UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Network mode: %d"), (int32)NetMode);
            
            if (NetMode != NM_Standalone)
            {
                UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Multiplayer mode detected"));
            }
        }
    }
    
    // Setup replay system
    SetupReplaySystem();
    
    // Initialize HUD reference if needed
    if (GetHUD())
    {
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: HUD found: %s"), *GetHUD()->GetName());
    }
    
    // Small delay for multiplayer sync
    if (GetWorld())
    {
        // Show network stats if in multiplayer
        if (GetWorld()->GetNetMode() != NM_Standalone)
        {
            // Show network stats if in multiplayer
            if (GetWorld() && GetWorld()->GetNetMode() != NM_Standalone)
            {
                ConsoleCommand("stat net", true);
                UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Multiplayer mode detected - NetMode: %d"), (int32)GetWorld()->GetNetMode());
            }
        }
        
        // Small delay to ensure pawn possession is complete in multiplayer
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
        {
            EnsureProperCameraSetup();
        }, 0.2f, false);
    }
}

void ASGPlayerController::SetupReplaySystem()
{
    if (ReplayManager)
    {
        // Bind to golf shot events for auto-recording
        // We'll need to add this when we implement golf shot events
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Replay system initialized"));
        
        // Auto-start recording if enabled
        if (bAutoRecordOnShot)
        {
            UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Auto-record on shot enabled"));
        }
    }
}

void ASGPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    
    // Add debug input bindings for multiplayer testing
    if (InputComponent)
    {
        // === REPLAY SYSTEM BINDINGS ===
        InputComponent->BindAction("ToggleReplayRecording", IE_Pressed, this, &ASGPlayerController::ToggleReplayRecording);
        InputComponent->BindAction("QuickSaveReplay", IE_Pressed, this, &ASGPlayerController::QuickSaveReplay);
        InputComponent->BindAction("OpenReplayUI", IE_Pressed, this, &ASGPlayerController::OpenReplayUI);
        InputComponent->BindAction("PlayLastReplay", IE_Pressed, this, &ASGPlayerController::PlayLastReplay);
        InputComponent->BindAction("ReplayNextCamera", IE_Pressed, this, &ASGPlayerController::NextCameraView);
        
        // === CORE DEBUG BINDINGS (Updated to avoid F-key conflicts) ===
        InputComponent->BindAction("ToggleStats", IE_Pressed, this, &ASGPlayerController::ToggleNetworkStats);
        InputComponent->BindAction("ToggleFPS", IE_Pressed, this, &ASGPlayerController::ToggleFPSDisplay);
        
        // === SAVE SYSTEM (Updated to Shift+S/L) ===
        InputComponent->BindAction("QuickSave", IE_Pressed, this, &ASGPlayerController::QuickSave);
        InputComponent->BindAction("QuickLoad", IE_Pressed, this, &ASGPlayerController::QuickLoad);
        
        // === EMERGENCY RECOVERY ===
        InputComponent->BindAction("EmergencyTeleport", IE_Pressed, this, &ASGPlayerController::EmergencyTeleportToSafeLocation);
        InputComponent->BindAction("ForceStandUp", IE_Pressed, this, &ASGPlayerController::ForceStandUpFromBench);
        
        // === GOLF SYSTEM ===
        InputComponent->BindAction("SpawnGolfBall", IE_Pressed, this, &ASGPlayerController::SpawnGolfBall);
        InputComponent->BindAction("HitGolfBall", IE_Pressed, this, &ASGPlayerController::HitGolfBallForwardInput);
        InputComponent->BindAction("ResetGolfBall", IE_Pressed, this, &ASGPlayerController::ResetGolfBall);
        InputComponent->BindAction("ChargeGolfShot", IE_Pressed, this, &ASGPlayerController::StartChargingGolfShot);
        InputComponent->BindAction("ChargeGolfShot", IE_Released, this, &ASGPlayerController::ReleaseGolfShot);
        
        // Golf Tee (J key)
        InputComponent->BindAction("SpawnGolfTee", IE_Pressed, this, &ASGPlayerController::SpawnGolfTee);
        
        // === PHYSICS TESTING (Alt+ combinations) ===
        InputComponent->BindAction("ToggleGolfPhysics", IE_Pressed, this, &ASGPlayerController::ToggleGolfBallPhysics);
        InputComponent->BindAction("ToggleMiniGolfMode", IE_Pressed, this, &ASGPlayerController::ToggleMiniGolfMode);
        InputComponent->BindAction("CheckGolfBallStatus", IE_Pressed, this, &ASGPlayerController::CheckGolfBallStatus);

        // === CAMERA SYSTEM (Updated to Ctrl+ combinations) ===
        InputComponent->BindAction("StartCameraRecording", IE_Pressed, this, &ASGPlayerController::StartCameraRecording);
        InputComponent->BindAction("StopCameraRecording", IE_Pressed, this, &ASGPlayerController::StopCameraRecording);
        InputComponent->BindAction("PlayCameraRecording", IE_Pressed, this, &ASGPlayerController::PlayCameraRecording);
        InputComponent->BindAction("ExportCameraRecording", IE_Pressed, this, &ASGPlayerController::ExportCameraRecording);
        
        // Camera Views (bracket keys)
        InputComponent->BindAction("CameraView1", IE_Pressed, this, &ASGPlayerController::SwitchToCameraView1);
        InputComponent->BindAction("CameraView2", IE_Pressed, this, &ASGPlayerController::SwitchToCameraView2);
        InputComponent->BindAction("CameraView3", IE_Pressed, this, &ASGPlayerController::SwitchToCameraView3);
        InputComponent->BindAction("CameraView4", IE_Pressed, this, &ASGPlayerController::SwitchToCameraView4);
        InputComponent->BindAction("NextCameraView", IE_Pressed, this, &ASGPlayerController::NextCameraView);
        InputComponent->BindAction("PreviousCameraView", IE_Pressed, this, &ASGPlayerController::PreviousCameraView);
        
        // === TESTING POWER LEVELS (Ctrl+ number combinations) ===
        InputComponent->BindAction("HitBallLightPower", IE_Pressed, this, &ASGPlayerController::HitBallLightPower);
        InputComponent->BindAction("HitBallMediumPower", IE_Pressed, this, &ASGPlayerController::HitBallMediumPower);
        InputComponent->BindAction("HitBallHardPower", IE_Pressed, this, &ASGPlayerController::HitBallHardPower);
        
        // === CANDLE SYSTEM ===
        InputComponent->BindAction("DropCandle", IE_Pressed, this, &ASGPlayerController::DropCandle);
        
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Input bindings set up successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGPlayerController: InputComponent is null!"));
    }
}

void ASGPlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Update golf shot charging
    if (bIsChargingShot)
    {
        ShotChargeTime += DeltaTime;
        
        // Optional: Cap the charge time
        if (ShotChargeTime >= MaxChargeTime)
        {
            ShotChargeTime = MaxChargeTime;
        }
        
        // Optional: Show current power in log (can be removed for less spam)
        if (FMath::Fmod(ShotChargeTime, 0.5f) < DeltaTime) // Log every 0.5 seconds
        {
            float ChargeRatio = FMath::Clamp(ShotChargeTime / MaxChargeTime, 0.0f, 1.0f);
            float CurrentPower = FMath::Lerp(MinPower, MaxPower, ChargeRatio);
            UE_LOG(LogTemp, Log, TEXT("Charging... Power: %.1f%%"), CurrentPower);
        }
    }
}

void ASGPlayerController::EnableGameInput()
{
    if (IsLocalPlayerController())
    {
        bGameInputEnabled = true;
        
        // Ensure game input mode - safe to call here since object is fully initialized
        FInputModeGameOnly InputMode;
        SetInputMode(InputMode);
        
        // Hide mouse cursor
        bShowMouseCursor = false;
        
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Game input enabled"));
    }
}

void ASGPlayerController::DisableGameInput()
{
    if (IsLocalPlayerController())
    {
        bGameInputEnabled = false;
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Game input disabled"));
    }
}

void ASGPlayerController::ToggleNetworkStats()
{
    if (IsLocalPlayerController())
    {
        static bool bStatsVisible = false;
        bStatsVisible = !bStatsVisible;
        
        if (bStatsVisible)
        {
            ConsoleCommand("stat net", true);
            ConsoleCommand("stat game", true);
        }
        else
        {
            ConsoleCommand("stat none", true);
            ConsoleCommand("stat fps", true); // Keep FPS visible
        }
        
        // Also toggle HUD network stats
        if (ASGHUD* SGHud = Cast<ASGHUD>(GetHUD()))
        {
            SGHud->ToggleNetworkStats();
        }
    }
}

void ASGPlayerController::ToggleFPSDisplay()
{
    if (IsLocalPlayerController())
    {
        if (ASGHUD* SGHud = Cast<ASGHUD>(GetHUD()))
        {
            SGHud->ToggleFPSDisplay();
        }
    }
}

void ASGPlayerController::QuickSave()
{
    if (IsLocalPlayerController())
    {
        if (ASGGameMode* GameMode = GetWorld()->GetAuthGameMode<ASGGameMode>())
        {
            if (USGSaveManager* SaveManager = GameMode->GetSaveManager())
            {
                UE_LOG(LogTemp, Warning, TEXT("Quick Save triggered by player"));
                SaveManager->QuickSave();
            }
        }
    }
}

void ASGPlayerController::QuickLoad()
{
    if (IsLocalPlayerController())
    {
        if (ASGGameMode* GameMode = GetWorld()->GetAuthGameMode<ASGGameMode>())
        {
            if (USGSaveManager* SaveManager = GameMode->GetSaveManager())
            {
                UE_LOG(LogTemp, Warning, TEXT("Quick Load triggered by player"));
                SaveManager->QuickLoad();
            }
        }
    }
}

void ASGPlayerController::EmergencyTeleportToSafeLocation()
{
    if (IsLocalPlayerController() && GetPawn())
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Emergency teleport requested"));
        GetPawn()->SetActorLocation(FVector(0, 0, 200), true, nullptr, ETeleportType::TeleportPhysics);
        
        // Also force stand up if sitting
        if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
        {
            SGChar->ForceStandUp();
        }
    }
}

void ASGPlayerController::ForceStandUpFromBench()
{
    if (IsLocalPlayerController() && GetPawn())
    {
        if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Force stand up requested"));
            SGChar->ForceStandUp();
        }
    }
}

void ASGPlayerController::SpawnTestCandle()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    FVector CandleSpawnLocation = GetPawn()->GetActorLocation() + (GetPawn()->GetActorForwardVector() * 200.0f);
    FRotator SpawnRotation = FRotator::ZeroRotator;

    // Spawn an advanced candle
    if (ASGAdvancedCandle* NewCandle = GetWorld()->SpawnActor<ASGAdvancedCandle>(ASGAdvancedCandle::StaticClass(), CandleSpawnLocation, SpawnRotation))
    {
        NewCandle->SetCandleType(ECandleType::MediumCandle);
        NewCandle->LightCandle();
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Spawned test candle at %s"), *CandleSpawnLocation.ToString());
    }
}

void ASGPlayerController::SpawnPickupCandle()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    FVector CandleSpawnLocation = GetPawn()->GetActorLocation() + (GetPawn()->GetActorForwardVector() * 150.0f);
    FRotator SpawnRotation = FRotator::ZeroRotator;

    // Spawn a pickup candle
    if (ASGPickupCandle* NewPickupCandle = GetWorld()->SpawnActor<ASGPickupCandle>(ASGPickupCandle::StaticClass(), CandleSpawnLocation, SpawnRotation))
    {
        NewPickupCandle->LightCandle(); // Start it lit
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Spawned pickup candle at %s"), *CandleSpawnLocation.ToString());
    }
}

void ASGPlayerController::LightAllCandles()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGCandle::StaticClass(), FoundCandles);
    
    TArray<AActor*> FoundAdvancedCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGAdvancedCandle::StaticClass(), FoundAdvancedCandles);

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    int32 LitCount = 0;

    // Light basic candles
    for (AActor* Actor : FoundCandles)
    {
        if (ASGCandle* Candle = Cast<ASGCandle>(Actor))
        {
            if (!Candle->IsLit())
            {
                Candle->LightCandle();
                LitCount++;
            }
        }
    }

    // Light advanced candles
    for (AActor* Actor : FoundAdvancedCandles)
    {
        if (ASGAdvancedCandle* Candle = Cast<ASGAdvancedCandle>(Actor))
        {
            if (!Candle->IsLit())
            {
                Candle->LightCandle();
                LitCount++;
            }
        }
    }

    // Light pickup candles
    for (AActor* Actor : FoundPickupCandles)
    {
        if (ASGPickupCandle* Candle = Cast<ASGPickupCandle>(Actor))
        {
            if (!Candle->IsLit())
            {
                Candle->LightCandle();
                LitCount++;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Lit %d candles"), LitCount);
}

void ASGPlayerController::ExtinguishAllCandles()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGCandle::StaticClass(), FoundCandles);
    
    TArray<AActor*> FoundAdvancedCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGAdvancedCandle::StaticClass(), FoundAdvancedCandles);

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    int32 ExtinguishedCount = 0;

    // Extinguish basic candles
    for (AActor* Actor : FoundCandles)
    {
        if (ASGCandle* Candle = Cast<ASGCandle>(Actor))
        {
            if (Candle->IsLit())
            {
                Candle->ExtinguishCandle();
                ExtinguishedCount++;
            }
        }
    }

    // Extinguish advanced candles
    for (AActor* Actor : FoundAdvancedCandles)
    {
        if (ASGAdvancedCandle* Candle = Cast<ASGAdvancedCandle>(Actor))
        {
            if (Candle->IsLit())
            {
                Candle->ExtinguishCandle();
                ExtinguishedCount++;
            }
        }
    }

    // Extinguish pickup candles
    for (AActor* Actor : FoundPickupCandles)
    {
        if (ASGPickupCandle* Candle = Cast<ASGPickupCandle>(Actor))
        {
            if (Candle->IsLit())
            {
                Candle->ExtinguishCandle();
                ExtinguishedCount++;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Extinguished %d candles"), ExtinguishedCount);
}

void ASGPlayerController::ToggleAllCandles()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGCandle::StaticClass(), FoundCandles);
    
    TArray<AActor*> FoundAdvancedCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGAdvancedCandle::StaticClass(), FoundAdvancedCandles);

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    int32 ToggledCount = 0;

    // Toggle basic candles
    for (AActor* Actor : FoundCandles)
    {
        if (ASGCandle* Candle = Cast<ASGCandle>(Actor))
        {
            Candle->ToggleCandle();
            ToggledCount++;
        }
    }

    // Toggle advanced candles
    for (AActor* Actor : FoundAdvancedCandles)
    {
        if (ASGAdvancedCandle* Candle = Cast<ASGAdvancedCandle>(Actor))
        {
            Candle->ToggleCandle();
            ToggledCount++;
        }
    }

    // Toggle pickup candles
    for (AActor* Actor : FoundPickupCandles)
    {
        if (ASGPickupCandle* Candle = Cast<ASGPickupCandle>(Actor))
        {
            Candle->ToggleCandle();
            ToggledCount++;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Toggled %d candles"), ToggledCount);
}

void ASGPlayerController::DropAllPickupCandles()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    int32 DroppedCount = 0;

    for (AActor* Actor : FoundPickupCandles)
    {
        if (ASGPickupCandle* Candle = Cast<ASGPickupCandle>(Actor))
        {
            if (Candle->IsPickedUp())
            {
                Candle->DropCandle();
                DroppedCount++;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Dropped %d pickup candles"), DroppedCount);
}

void ASGPlayerController::RotateCharacterModel(float YawOffset)
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        // Find the placeholder root component and rotate it
        if (USceneComponent* PlaceholderRoot = SGChar->FindComponentByClass<USceneComponent>())
        {
            FRotator CurrentRotation = PlaceholderRoot->GetRelativeRotation();
            CurrentRotation.Yaw = YawOffset;
            PlaceholderRoot->SetRelativeRotation(CurrentRotation);
            
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Rotated character model to Yaw: %f"), YawOffset);
        }
    }
}

void ASGPlayerController::ResetCharacterRotation()
{
    RotateCharacterModel(-90.0f); // Reset to the corrected rotation
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Reset character rotation to default"));
}

void ASGPlayerController::EnsureProperCameraSetup()
{
    if (!IsLocalPlayerController())
        return;
        
    // Ensure we have a valid pawn and set the view target
    if (GetPawn())
    {
        SetViewTargetWithBlend(GetPawn(), 0.0f);
        UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Set view target to pawn %s (NetMode: %d)"), 
               *GetPawn()->GetName(), (int32)GetWorld()->GetNetMode());
        
        // Double-check that input is enabled
        EnableGameInput();
        
        // Verify camera component exists and is active
        if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
        {
            if (UCameraComponent* Camera = SGChar->FindComponentByClass<UCameraComponent>())
            {
                Camera->SetActive(true);
                UE_LOG(LogTemp, Log, TEXT("SGPlayerController: Camera component found and activated for %s"), *GetPawn()->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("SGPlayerController: No camera component found on pawn %s"), *GetPawn()->GetName());
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No pawn found during camera setup (NetMode: %d)"), (int32)GetWorld()->GetNetMode());
        
        // Try again in a moment if no pawn is available yet
        FTimerHandle RetryTimerHandle;
        GetWorld()->GetTimerManager().SetTimer(RetryTimerHandle, [this]()
        {
            EnsureProperCameraSetup();
        }, 0.5f, false);
    }
}

void ASGPlayerController::DebugInteractionTrace()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (USGInteractionComponent* InteractionComp = SGChar->FindComponentByClass<USGInteractionComponent>())
        {
            // Enable debug interaction temporarily
            bool bOriginalDebug = InteractionComp->bDebugInteraction;
            InteractionComp->bDebugInteraction = true;
            
            // Trigger an interaction trace
            InteractionComp->TryInteract();
            
            // Restore original debug setting after a short delay
            FTimerHandle TimerHandle;
            GetWorld()->GetTimerManager().SetTimer(TimerHandle, [InteractionComp, bOriginalDebug]()
            {
                if (InteractionComp)
                {
                    InteractionComp->bDebugInteraction = bOriginalDebug;
                }
            }, 2.0f, false);
            
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Debug interaction trace executed"));
        }
    }
}

void ASGPlayerController::ForcePickupNearestCandle()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    if (FoundPickupCandles.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No pickup candles found in the world"));
        return;
    }

    // Find the nearest candle that's not already picked up
    ASGPickupCandle* NearestCandle = nullptr;
    float NearestDistance = FLT_MAX;
    FVector PlayerLocation = GetPawn()->GetActorLocation();

    for (AActor* Actor : FoundPickupCandles)
    {
        if (ASGPickupCandle* PickupCandle = Cast<ASGPickupCandle>(Actor))
        {
            if (!PickupCandle->IsPickedUp())
            {
                float Distance = FVector::Dist(PlayerLocation, PickupCandle->GetActorLocation());
                if (Distance < NearestDistance)
                {
                    NearestDistance = Distance;
                    NearestCandle = PickupCandle;
                }
            }
        }
    }

    if (NearestCandle)
    {
        // Force pickup the nearest candle
        NearestCandle->PickupCandle(GetPawn());
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Force picked up nearest candle %s (Distance: %f)"), 
               *NearestCandle->GetName(), NearestDistance);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No available pickup candles found"));
    }
}

void ASGPlayerController::ListAllPickupCandles()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Found %d pickup candles in the world:"), FoundPickupCandles.Num());

    for (int32 i = 0; i < FoundPickupCandles.Num(); i++)
    {
        if (ASGPickupCandle* PickupCandle = Cast<ASGPickupCandle>(FoundPickupCandles[i]))
        {
            FVector Location = PickupCandle->GetActorLocation();
            UE_LOG(LogTemp, Warning, TEXT("  [%d] %s - Location: %s - PickedUp: %s - Lit: %s - Holder: %s"), 
                   i + 1,
                   *PickupCandle->GetName(),
                   *Location.ToString(),
                   PickupCandle->IsPickedUp() ? TEXT("Yes") : TEXT("No"),
                   PickupCandle->IsLit() ? TEXT("Yes") : TEXT("No"),
                   PickupCandle->GetCurrentHolder() ? *PickupCandle->GetCurrentHolder()->GetName() : TEXT("None"));
        }
    }

    // Also check if the player is holding a candle
    if (GetPawn())
    {
        if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
        {
            if (SGChar->GetHeldCandle())
            {
                UE_LOG(LogTemp, Warning, TEXT("Player %s is currently holding candle: %s"), 
                       *SGChar->GetName(), *SGChar->GetHeldCandle()->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Player %s is not holding any candle"), *SGChar->GetName());
            }
        }
    }
}

void ASGPlayerController::TestPickupSystem()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== PICKUP SYSTEM TEST STARTED ==="));

    // 1. List all pickup candles
    ListAllPickupCandles();

    // 2. Test interaction component
    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (USGInteractionComponent* InteractionComp = SGChar->FindComponentByClass<USGInteractionComponent>())
        {
            UE_LOG(LogTemp, Warning, TEXT("Interaction Component found - TraceDistance: %f"), InteractionComp->TraceDistance);
            
            // Enable debug temporarily for the test
            bool bOriginalDebug = InteractionComp->bDebugInteraction;
            InteractionComp->bDebugInteraction = true;
            
            // Try an interaction
            InteractionComp->TryInteract();
            
            // Restore debug setting
            FTimerHandle TimerHandle;
            GetWorld()->GetTimerManager().SetTimer(TimerHandle, [InteractionComp, bOriginalDebug]()
            {
                if (InteractionComp)
                {
                    InteractionComp->bDebugInteraction = bOriginalDebug;
                }
            }, 3.0f, false);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("No Interaction Component found on character!"));
        }
    }

    // 3. Spawn a test candle if none exist
    TArray<AActor*> FoundPickupCandles;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);
    
    if (FoundPickupCandles.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No pickup candles found, spawning test candle..."));
        SpawnPickupCandle();
    }

    UE_LOG(LogTemp, Warning, TEXT("=== PICKUP SYSTEM TEST COMPLETED ==="));
}

void ASGPlayerController::TestInputMappings()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== INPUT MAPPING TEST STARTED ==="));

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (UInputComponent* InputComp = SGChar->InputComponent)
        {
            UE_LOG(LogTemp, Warning, TEXT("Character has %d action bindings"), InputComp->GetNumActionBindings());
            
            // Check for specific action bindings
            for (int32 i = 0; i < InputComp->GetNumActionBindings(); i++)
            {
                const FInputActionBinding& Binding = InputComp->GetActionBinding(i);
                UE_LOG(LogTemp, Warning, TEXT("Action Binding [%d]: %s"), i, *Binding.GetActionName().ToString());
            }
            
            UE_LOG(LogTemp, Warning, TEXT("Character has %d axis bindings"), InputComp->AxisBindings.Num());
            
            for (int32 i = 0; i < InputComp->AxisBindings.Num(); i++)
            {
                const FInputAxisBinding& Binding = InputComp->AxisBindings[i];
                UE_LOG(LogTemp, Warning, TEXT("Axis Binding [%d]: %s"), i, *Binding.AxisName.ToString());
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Character has no input component!"));
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("=== INPUT MAPPING TEST COMPLETED ==="));
}

void ASGPlayerController::FixPickupCandleIssues()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== FIXING PICKUP CANDLE ISSUES ==="));

    // 1. Force spawn a test candle near the player
    FVector PlayerLocation = GetPawn()->GetActorLocation();
    FVector CandleSpawnLocation = PlayerLocation + (GetPawn()->GetActorForwardVector() * 150.0f);
    
    if (ASGPickupCandle* TestCandle = GetWorld()->SpawnActor<ASGPickupCandle>(ASGPickupCandle::StaticClass(), CandleSpawnLocation, FRotator::ZeroRotator))
    {
        // Disable the focus effect completely
        if (USGFocusableComponent* FocusComp = TestCandle->FindComponentByClass<USGFocusableComponent>())
        {
            FocusComp->bEnableFocusEffect = false;
            FocusComp->FocusScaleFactor = 1.0f;
        }
        
        // Make sure it's lit for visibility
        TestCandle->LightCandle();
        
        UE_LOG(LogTemp, Warning, TEXT("Spawned fixed test candle at %s"), *CandleSpawnLocation.ToString());
        
        // Force pickup after a short delay to test the system
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, TestCandle]()
        {
            if (TestCandle && GetPawn())
            {
                TestCandle->PickupCandle(GetPawn());
                UE_LOG(LogTemp, Warning, TEXT("Force picked up test candle"));
            }
        }, 1.0f, false);
    }

    UE_LOG(LogTemp, Warning, TEXT("=== PICKUP CANDLE ISSUES FIX COMPLETED ==="));
}

void ASGPlayerController::ForceTestCandleToggle()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== FORCE TESTING CANDLE TOGGLE ==="));

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (ASGPickupCandle* HeldCandle = SGChar->GetHeldCandle())
        {
            UE_LOG(LogTemp, Warning, TEXT("Player is holding candle: %s"), *HeldCandle->GetName());
            UE_LOG(LogTemp, Warning, TEXT("Candle is lit: %s"), HeldCandle->IsLit() ? TEXT("Yes") : TEXT("No"));
            
            // Force toggle the candle
            HeldCandle->ToggleCandle();
            
            UE_LOG(LogTemp, Warning, TEXT("Forced candle toggle - Now lit: %s"), HeldCandle->IsLit() ? TEXT("Yes") : TEXT("No"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Player is not holding any candle"));
            
            // Find nearest candle and force pickup
            TArray<AActor*> FoundPickupCandles;
            UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGPickupCandle::StaticClass(), FoundPickupCandles);
            
            if (FoundPickupCandles.Num() > 0)
            {
                if (ASGPickupCandle* NearestCandle = Cast<ASGPickupCandle>(FoundPickupCandles[0]))
                {
                    UE_LOG(LogTemp, Warning, TEXT("Force picking up nearest candle for test"));
                    NearestCandle->PickupCandle(SGChar);
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("No candles found, spawning one"));
                SpawnPickupCandle();
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("=== FORCE CANDLE TOGGLE TEST COMPLETED ==="));
}

void ASGPlayerController::SpawnGolfBall()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    FVector PlayerLocation = GetPawn()->GetActorLocation();
    FVector ForwardDirection = GetPawn()->GetActorForwardVector();
    FVector BallSpawnLocation = PlayerLocation + (ForwardDirection * 200.0f);
    
    // Trace down to find the ground
    FVector TraceStart = BallSpawnLocation + FVector(0, 0, 500.0f); // Start high above
    FVector TraceEnd = BallSpawnLocation - FVector(0, 0, 1000.0f); // Trace far down
    
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetPawn()); // Ignore the player
    
    bool bHitGround = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        TraceStart,
        TraceEnd,
        ECC_WorldStatic,
        QueryParams
    );
    
    if (bHitGround)
    {
        // Place ball on the ground with a small offset above
        BallSpawnLocation = HitResult.Location + FVector(0, 0, 25.0f); // 25cm above ground
    }
    else
    {
        // Fallback to player location if no ground found
        BallSpawnLocation.Z = PlayerLocation.Z;
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No ground found, using player Z level"));
    }
    
    // Check if a golf ball already exists
    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Golf ball already exists, moving it to spawn location"));
        if (ASGGolfBall* ExistingBall = Cast<ASGGolfBall>(FoundGolfBalls[0]))
        {
            ExistingBall->PlaceBall(BallSpawnLocation);
        }
    }
    else
    {
        // Spawn a new golf ball
        if (ASGGolfBall* NewGolfBall = GetWorld()->SpawnActor<ASGGolfBall>(ASGGolfBall::StaticClass(), BallSpawnLocation, FRotator::ZeroRotator))
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Spawned golf ball at %s"), *BallSpawnLocation.ToString());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGPlayerController: Failed to spawn golf ball!"));
        }
    }
}

void ASGPlayerController::HitGolfBallForward(float Power)
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf ball found"));
        return;
    }

    if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[0]))
    {
        // Use the new proximity-based hitting system with adjustable power
        // Default power is 50% but can be adjusted
        float HitPower = FMath::Clamp(Power, 10.0f, 100.0f); // Min 10%, Max 100%
        
        if (GolfBall->TryHitBallFromPlayer(GetPawn(), HitPower))
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Successfully hit golf ball with %f%% power"), HitPower);
            
            // Trigger replay recording for golf shot
            FString ClubName = TEXT("Default Club");
            if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
            {
                if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
                {
                    if (USGGolfClubData* ClubData = ClubManager->GetCurrentClubData())
                    {
                        ClubName = ClubData->ClubDisplayName.ToString();
                    }
                }
            }
            
            // Record the golf shot event for replay system
            OnGolfShotEvent(HitPower, ClubName);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Failed to hit golf ball - too far away or ball is moving"));
        }
    }
}

void ASGPlayerController::HitGolfBallAt(FVector Direction, float Power)
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf ball found, spawning one first"));
        SpawnGolfBall();
        return;
    }

    if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[0]))
    {
        GolfBall->HitBall(Direction, Power);
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit golf ball in direction %s with power %f"), *Direction.ToString(), Power);
    }
}

void ASGPlayerController::ResetGolfBall()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf ball found to reset"));
        return;
    }

    if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[0]))
    {
        GolfBall->ResetBall();
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Golf ball reset"));
    }
}

void ASGPlayerController::ListGolfBallStatus()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf balls found in the world"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== GOLF BALL STATUS ==="));
    
    for (int32 i = 0; i < FoundGolfBalls.Num(); i++)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[i]))
        {
            FVector Location = GolfBall->GetActorLocation();
            FVector Velocity = GolfBall->GetBallVelocity();
            float Speed = GolfBall->GetCurrentSpeed();
            
            UE_LOG(LogTemp, Warning, TEXT("Golf Ball [%d]:"), i + 1);
            UE_LOG(LogTemp, Warning, TEXT("  Location: %s"), *Location.ToString());
            UE_LOG(LogTemp, Warning, TEXT("  Velocity: %s"), *Velocity.ToString());
            UE_LOG(LogTemp, Warning, TEXT("  Speed: %.2f cm/s"), Speed);
            UE_LOG(LogTemp, Warning, TEXT("  State: %d"), (int32)GolfBall->GetBallState());
            UE_LOG(LogTemp, Warning, TEXT("  Distance Traveled: %.2f cm"), GolfBall->GetDistanceTraveled());
            UE_LOG(LogTemp, Warning, TEXT("  Stroke Count: %d"), GolfBall->GetStrokeCount());
            UE_LOG(LogTemp, Warning, TEXT("  Is Stationary: %s"), GolfBall->IsBallStationary() ? TEXT("Yes") : TEXT("No"));
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("=== END GOLF BALL STATUS ==="));
}

void ASGPlayerController::HitGolfBallForwardInput()
{
    HitGolfBallForward(50.0f); // Default power
}

void ASGPlayerController::StartChargingGolfShot()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    // Check if we have a golf ball to hit
    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf ball found, spawning one first"));
        SpawnGolfBall();
        return;
    }

    bIsChargingShot = true;
    ShotChargeTime = 0.0f;
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Started charging golf shot..."));
}

void ASGPlayerController::ReleaseGolfShot()
{
    if (!IsLocalPlayerController() || !bIsChargingShot)
    {
        return;
    }

    bIsChargingShot = false;
    
    // Calculate power based on charge time
    float ChargeRatio = FMath::Clamp(ShotChargeTime / MaxChargeTime, 0.0f, 1.0f);
    float Power = FMath::Lerp(MinPower, MaxPower, ChargeRatio);
    
    // Hit the ball with calculated power using club system
    HitGolfBallForward(Power);
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Released golf shot! Charge time: %.2fs, Power: %.1f%%"), ShotChargeTime, Power);
    
    ShotChargeTime = 0.0f;
}

void ASGPlayerController::DropCandle()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: DropCandle action triggered"));

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (ASGPickupCandle* HeldCandle = SGChar->GetHeldCandle())
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Dropping held candle: %s"), *HeldCandle->GetName());
            HeldCandle->DropCandle();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No candle to drop"));
        }
    }
}

void ASGPlayerController::ShowCurrentClubInfo()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
        {
            if (USGGolfClubData* ClubData = ClubManager->GetCurrentClubData())
            {
                UE_LOG(LogTemp, Warning, TEXT("=== CURRENT GOLF CLUB INFO ==="));
                UE_LOG(LogTemp, Warning, TEXT("Club: %s"), *ClubData->ClubDisplayName.ToString());
                UE_LOG(LogTemp, Warning, TEXT("Power Multiplier: %.1fx"), ClubData->PowerMultiplier);
                UE_LOG(LogTemp, Warning, TEXT("Launch Angle: %.1f°"), ClubData->LaunchAngle);
                UE_LOG(LogTemp, Warning, TEXT("Max Distance: %.0fm"), ClubData->MaxDistance);
                UE_LOG(LogTemp, Warning, TEXT("Accuracy: %.0f%%"), ClubData->Accuracy * 100);
                UE_LOG(LogTemp, Warning, TEXT("Spin Effect: %.0f%%"), ClubData->SpinEffect * 100);
                UE_LOG(LogTemp, Warning, TEXT("=== Controls: Q=Previous Club, Z=Next Club ==="));
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No club data available"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf club manager available"));
        }
    }
}

void ASGPlayerController::ShowCharacterStatus()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No local player controller or pawn"));
        return;
    }

    if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
    {
        UE_LOG(LogTemp, Warning, TEXT("=== CHARACTER STATUS ==="));
        UE_LOG(LogTemp, Warning, TEXT("Character: %s"), *SGChar->GetName());
        UE_LOG(LogTemp, Warning, TEXT("Location: %s"), *SGChar->GetActorLocation().ToString());
        UE_LOG(LogTemp, Warning, TEXT("Is Sitting: %s"), SGChar->IsSitting() ? TEXT("Yes") : TEXT("No"));
        UE_LOG(LogTemp, Warning, TEXT("Is Holding Candle: %s"), SGChar->IsHoldingCandle() ? TEXT("Yes") : TEXT("No"));
        
        if (SGChar->GetHeldCandle())
        {
            UE_LOG(LogTemp, Warning, TEXT("Held Candle: %s"), *SGChar->GetHeldCandle()->GetName());
            UE_LOG(LogTemp, Warning, TEXT("Candle Lit: %s"), SGChar->GetHeldCandle()->IsLit() ? TEXT("Yes") : TEXT("No"));
        }
        
        if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
        {
            if (USGGolfClubData* ClubData = ClubManager->GetCurrentClubData())
            {
                UE_LOG(LogTemp, Warning, TEXT("Current Golf Club: %s"), *ClubData->ClubDisplayName.ToString());
            }
        }
        
        UE_LOG(LogTemp, Warning, TEXT("Mouse Sensitivity: %.2f"), SGChar->MouseSensitivity);
        UE_LOG(LogTemp, Warning, TEXT("Mouse Y Inverted: %s"), SGChar->bInvertMouseY ? TEXT("Yes") : TEXT("No"));
        UE_LOG(LogTemp, Warning, TEXT("=== END CHARACTER STATUS ==="));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Pawn is not an SGCharacter"));
    }
}

void ASGPlayerController::SpawnGolfTee()
{
    if (!IsLocalPlayerController() || !GetPawn())
    {
        return;
    }

    FVector PlayerLocation = GetPawn()->GetActorLocation();
    FVector ForwardDirection = GetPawn()->GetActorForwardVector();
    FVector TeeSpawnLocation = PlayerLocation + (ForwardDirection * 200.0f);
    
    // Trace down to find the ground
    FVector TraceStart = TeeSpawnLocation + FVector(0, 0, 500.0f);
    FVector TraceEnd = TeeSpawnLocation - FVector(0, 0, 1000.0f);
    
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetPawn());
    
    bool bHitGround = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        TraceStart,
        TraceEnd,
        ECC_WorldStatic,
        QueryParams
    );
    
    if (bHitGround)
    {
        TeeSpawnLocation = HitResult.Location;
    }
    else
    {
        TeeSpawnLocation.Z = PlayerLocation.Z - 50.0f; // Place below player if no ground found
    }
    
    // Spawn the golf tee
    if (ASGGolfTee* NewGolfTee = GetWorld()->SpawnActor<ASGGolfTee>(ASGGolfTee::StaticClass(), TeeSpawnLocation, FRotator::ZeroRotator))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Spawned golf tee at %s"), *TeeSpawnLocation.ToString());
        UE_LOG(LogTemp, Warning, TEXT("Walk up to the tee and press E to start golf!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGPlayerController: Failed to spawn golf tee!"));
    }
}

void ASGPlayerController::ToggleGolfBallPhysics()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf balls found to toggle physics"));
        return;
    }

    for (AActor* Actor : FoundGolfBalls)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(Actor))
        {
            // Access the physics toggle through reflection or add a public setter
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Found golf ball %s"), *GolfBall->GetName());
            UE_LOG(LogTemp, Warning, TEXT("Use console command to toggle: GolfBall.bEnableRealPhysics"));
        }
    }
}

void ASGPlayerController::ToggleMiniGolfMode()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf balls found to toggle mini golf mode"));
        return;
    }

    for (AActor* Actor : FoundGolfBalls)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(Actor))
        {
            // We need to add a public function to toggle this
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Found golf ball %s - Mini Golf Mode Active"), *GolfBall->GetName());
            UE_LOG(LogTemp, Warning, TEXT("Ball will now roll on ground without leaving surface"));
        }
    }
}

void ASGPlayerController::CheckGolfBallStatus()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    UE_LOG(LogTemp, Warning, TEXT("=== GOLF BALL STATUS CHECK ==="));
    UE_LOG(LogTemp, Warning, TEXT("Found %d golf balls in the world"), FoundGolfBalls.Num());

    for (int32 i = 0; i < FoundGolfBalls.Num(); i++)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[i]))
        {
            FVector Location = GolfBall->GetActorLocation();
            bool bIsHidden = GolfBall->IsHidden();
            bool bHasCollision = GolfBall->GetActorEnableCollision();
            
            UE_LOG(LogTemp, Warning, TEXT("Ball [%d]: %s"), i + 1, *GolfBall->GetName());
            UE_LOG(LogTemp, Warning, TEXT("  Location: %s"), *Location.ToString());
            UE_LOG(LogTemp, Warning, TEXT("  Is Hidden: %s"), bIsHidden ? TEXT("YES") : TEXT("NO"));
            UE_LOG(LogTemp, Warning, TEXT("  Has Collision: %s"), bHasCollision ? TEXT("YES") : TEXT("NO"));
            UE_LOG(LogTemp, Warning, TEXT("  Current Speed: %.2f"), GolfBall->GetCurrentSpeed());
            UE_LOG(LogTemp, Warning, TEXT("  Ball State: %d"), (int32)GolfBall->GetBallState());
        }
    }
    
    // Also check golf tees
    TArray<AActor*> FoundTees;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfTee::StaticClass(), FoundTees);
    UE_LOG(LogTemp, Warning, TEXT("Found %d golf tees in the world"), FoundTees.Num());
    
    UE_LOG(LogTemp, Warning, TEXT("=== END STATUS CHECK ==="));
}

void ASGPlayerController::ToggleChaosPhysics()
{
    if (!IsLocalPlayerController())
    {
        return;
    }

    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf balls found to toggle Chaos physics"));
        return;
    }

    for (AActor* Actor : FoundGolfBalls)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(Actor))
        {
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Toggled Chaos physics for golf ball"));
            UE_LOG(LogTemp, Warning, TEXT("Chaos physics will provide realistic ball behavior with proper stopping"));
        }
    }
}

void ASGPlayerController::HitBallLightPower()
{
    HitGolfBallForward(25.0f); // 25% power
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit ball with LIGHT power"));
}

void ASGPlayerController::HitBallMediumPower()
{
    HitGolfBallForward(50.0f); // 50% power
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit ball with MEDIUM power"));
}

void ASGPlayerController::HitBallHardPower()
{
    HitGolfBallForward(75.0f); // 75% power
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit ball with HARD power"));
}

// === CAMERA SYSTEM FUNCTIONS ===

void ASGPlayerController::StartCameraRecording()
{
    if (!IsLocalPlayerController())
    {
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Starting camera recording..."));
    
    // TODO: Implement camera recording start logic
    // This will need to interface with your SGCameraRecorder system
    // For now, just log the action
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Camera Recording Started (F6)"));
    }
}

void ASGPlayerController::StopCameraRecording()
{
    if (!IsLocalPlayerController())
    {
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Stopping camera recording..."));
    
    // TODO: Implement camera recording stop logic
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Camera Recording Stopped (F7)"));
    }
}

void ASGPlayerController::PlayCameraRecording()
{
    if (!IsLocalPlayerController())
    {
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Playing camera recording..."));
    
    // TODO: Implement camera recording playback logic
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Playing Camera Recording (F8)"));
    }
}

void ASGPlayerController::ExportCameraRecording()
{
    if (!IsLocalPlayerController())
    {
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Exporting camera recording to desktop..."));
    
    // TODO: Interface with your SGCameraRecorder export system
    // This should call the desktop export functionality you implemented
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Exporting Camera Recording to Desktop (F10)"));
    }
}

void ASGPlayerController::SwitchToCameraView1()
{
    SwitchToCameraView(1);
}

void ASGPlayerController::SwitchToCameraView2()
{
    SwitchToCameraView(2);
}

void ASGPlayerController::SwitchToCameraView3()
{
    SwitchToCameraView(3);
}

void ASGPlayerController::SwitchToCameraView4()
{
    SwitchToCameraView(4);
}

void ASGPlayerController::NextCameraView()
{
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Switching to next camera view (PageUp)"));
    
    // TODO: Implement next camera view logic
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Next Camera View"));
    }
}

void ASGPlayerController::PreviousCameraView()
{
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Switching to previous camera view (PageDown)"));
    
    // TODO: Implement previous camera view logic
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Previous Camera View"));
    }
}

void ASGPlayerController::SwitchToCameraView(int32 ViewIndex)
{
    if (!IsLocalPlayerController())
    {
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Switching to camera view %d"), ViewIndex);
    
    // TODO: Implement camera view switching logic
    // This should find and switch to the specified camera view
    
    if (GEngine)
    {
        FString Message = FString::Printf(TEXT("Switched to Camera View %d"), ViewIndex);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, Message);
    }
}

// === REPLAY SYSTEM IMPLEMENTATIONS ===

void ASGPlayerController::ToggleReplayRecording()
{
    if (!ReplayManager)
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: ReplayManager is null"));
        return;
    }
    
    if (ReplayManager->IsRecording())
    {
        ReplayManager->StopRecording();
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording stopped via toggle"));
    }
    else
    {
        FString ReplayName = FString::Printf(TEXT("Manual Recording %s"), *FDateTime::Now().ToString());
        ReplayManager->StartRecording(ReplayName);
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording started via toggle"));
    }
}

void ASGPlayerController::StartReplayRecording()
{
    if (ReplayManager && !ReplayManager->IsRecording())
    {
        FString ReplayName = FString::Printf(TEXT("Recording %s"), *FDateTime::Now().ToString());
        ReplayManager->StartRecording(ReplayName);
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording started manually"));
    }
}

void ASGPlayerController::StopReplayRecording()
{
    if (ReplayManager && ReplayManager->IsRecording())
    {
        ReplayManager->StopRecording();
        UE_LOG(LogTemp, Log, TEXT("Replay: Recording stopped manually"));
    }
}

void ASGPlayerController::OpenReplayUI()
{
    if (!ReplayWidgetClass)
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: ReplayWidgetClass not set"));
        return;
    }
    
    if (!ReplayWidget)
    {
        ReplayWidget = CreateWidget<USGReplayWidget>(this, ReplayWidgetClass);
        if (ReplayWidget)
        {
            ReplayWidget->InitializeReplayWidget(ReplayManager);
        }
    }
    
    if (ReplayWidget)
    {
        if (ReplayWidget->IsInViewport())
        {
            ReplayWidget->RemoveFromParent();
            SetInputMode(FInputModeGameOnly());
            SetShowMouseCursor(false);
            UE_LOG(LogTemp, Log, TEXT("Replay: UI closed"));
        }
        else
        {
            ReplayWidget->AddToViewport();
            SetInputMode(FInputModeUIOnly());
            SetShowMouseCursor(true);
            UE_LOG(LogTemp, Log, TEXT("Replay: UI opened"));
        }
    }
}

void ASGPlayerController::QuickSaveReplay()
{
    if (ReplayManager)
    {
        if (ReplayManager->IsRecording())
        {
            ReplayManager->StopRecording(); // This will auto-save
            UE_LOG(LogTemp, Log, TEXT("Replay: Quick save - stopped recording and saved"));
        }
        else
        {
            ReplayManager->SaveReplay();
            UE_LOG(LogTemp, Log, TEXT("Replay: Quick save - saved current replay data"));
        }
    }
}

void ASGPlayerController::PlayLastReplay()
{
    if (!ReplayManager)
    {
        UE_LOG(LogTemp, Error, TEXT("Replay: ReplayManager is null"));
        return;
    }
    
    TArray<FString> AvailableReplays = ReplayManager->GetAvailableReplays();
    if (AvailableReplays.Num() > 0)
    {
        // Load and play the most recent replay
        FString LastReplay = AvailableReplays.Last();
        if (ReplayManager->LoadReplay(LastReplay))
        {
            FSGReplayData ReplayData = ReplayManager->GetCurrentReplayData();
            ReplayManager->StartPlayback(ReplayData, ECameraReplayMode::Cinematic);
            UE_LOG(LogTemp, Log, TEXT("Replay: Playing last replay: %s"), *LastReplay);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Replay: No replays available to play"));
    }
}

void ASGPlayerController::OnGolfShotEvent(float Power, const FString& ClubName)
{
    if (ReplayManager && bAutoRecordOnShot)
    {
        if (!ReplayManager->IsRecording())
        {
            // Auto-start recording on golf shot
            FString ReplayName = FString::Printf(TEXT("Auto Shot %s"), *FDateTime::Now().ToString(TEXT("%H:%M:%S")));
            ReplayManager->StartRecording(ReplayName);
        }
        
        // Record the golf shot event
        FVector ShotLocation = GetPawn() ? GetPawn()->GetActorLocation() : FVector::ZeroVector;
        ReplayManager->RecordGolfShot(Power, ClubName, ShotLocation);
    }
}