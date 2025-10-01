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
}

void ASGPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    // Enable FPS display for clients
    if (IsLocalPlayerController())
    {
        ConsoleCommand("stat fps", true);
        
        // Set input mode here instead of constructor - object is fully initialized now
        EnableGameInput();
        
        // Additional useful stats for multiplayer debugging
        if (GEngine && GEngine->bEnableOnScreenDebugMessages)
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

void ASGPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    
    // Add debug input bindings for multiplayer testing
    if (InputComponent)
    {
        InputComponent->BindAction("ToggleStats", IE_Pressed, this, &ASGPlayerController::ToggleNetworkStats);
        InputComponent->BindAction("ToggleFPS", IE_Pressed, this, &ASGPlayerController::ToggleFPSDisplay);
        
        // Save System Debug Bindings
        InputComponent->BindAction("QuickSave", IE_Pressed, this, &ASGPlayerController::QuickSave);
        InputComponent->BindAction("QuickLoad", IE_Pressed, this, &ASGPlayerController::QuickLoad);
        
        // Emergency recovery bindings
        InputComponent->BindAction("EmergencyTeleport", IE_Pressed, this, &ASGPlayerController::EmergencyTeleportToSafeLocation);
        InputComponent->BindAction("ForceStandUp", IE_Pressed, this, &ASGPlayerController::ForceStandUpFromBench);
        
        // Golf ball debug bindings
        InputComponent->BindAction("SpawnGolfBall", IE_Pressed, this, &ASGPlayerController::SpawnGolfBall);
        InputComponent->BindAction("HitGolfBall", IE_Pressed, this, &ASGPlayerController::HitGolfBallForwardInput);
        InputComponent->BindAction("ResetGolfBall", IE_Pressed, this, &ASGPlayerController::ResetGolfBall);
        InputComponent->BindAction("ChargeGolfShot", IE_Pressed, this, &ASGPlayerController::StartChargingGolfShot);
        InputComponent->BindAction("ChargeGolfShot", IE_Released, this, &ASGPlayerController::ReleaseGolfShot);
        
        // Golf Tee debug binding - temporary for testing
        InputComponent->BindKey(EKeys::T, IE_Pressed, this, &ASGPlayerController::SpawnGolfTee);
        
        // Drop candle binding
        InputComponent->BindAction("DropCandle", IE_Pressed, this, &ASGPlayerController::DropCandle);
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
        UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: No golf ball found, spawning one first"));
        SpawnGolfBall();
        return;
    }

    if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(FoundGolfBalls[0]))
    {
        FVector HitDirection = GetPawn()->GetActorForwardVector();
        
        // Get club parameters from character's golf club manager
        if (ASGCharacter* SGChar = Cast<ASGCharacter>(GetPawn()))
        {
            if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
            {
                float ClubPowerMultiplier = ClubManager->GetPowerMultiplier();
                float ClubLaunchAngle = ClubManager->GetLaunchAngle();
                float ClubAccuracy = ClubManager->GetAccuracy();
                
                // Use the new club-aware hit function
                GolfBall->HitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy);
                
                // Log club info
                if (USGGolfClubData* ClubData = ClubManager->GetCurrentClubData())
                {
                    UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit golf ball with %s (Power: %.1f, Angle: %.1f°, Accuracy: %.1f)"), 
                           *ClubData->ClubDisplayName.ToString(), ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy);
                }
            }
            else
            {
                // Fallback to regular hit if no club manager
                GolfBall->HitBall(HitDirection, Power);
                UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit golf ball without club system (fallback)"));
            }
        }
        else
        {
            // Fallback to regular hit if not SGCharacter
            GolfBall->HitBall(HitDirection, Power);
            UE_LOG(LogTemp, Warning, TEXT("SGPlayerController: Hit golf ball with power %f (no character club system)"), Power);
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