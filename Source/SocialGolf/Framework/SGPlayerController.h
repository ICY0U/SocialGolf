#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SGPlayerController.generated.h"

class ASGHUD;
class UCameraComponent;

UCLASS()
class SOCIALGOLF_API ASGPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ASGPlayerController();

    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;
    virtual void Tick(float DeltaTime) override;

    // Debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void ToggleNetworkStats();

    UFUNCTION(BlueprintCallable, Category = "Debug")
    void ToggleFPSDisplay();

    // Save System functions
    UFUNCTION(BlueprintCallable, Category = "Save System")
    void QuickSave();

    UFUNCTION(BlueprintCallable, Category = "Save System")
    void QuickLoad();

    // Input control functions
    UFUNCTION(BlueprintCallable, Category = "Input")
    void EnableGameInput();

    UFUNCTION(BlueprintCallable, Category = "Input")
    void DisableGameInput();

    // Multiplayer camera setup
    UFUNCTION(BlueprintCallable, Category = "Camera")
    void EnsureProperCameraSetup();

    // Emergency recovery functions
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void EmergencyTeleportToSafeLocation();

    UFUNCTION(BlueprintCallable, Category = "Debug")
    void ForceStandUpFromBench();

    // Candle system debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void SpawnTestCandle();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void LightAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void ExtinguishAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void ToggleAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void SpawnPickupCandle();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void DropAllPickupCandles();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void ListAllPickupCandles();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void TestPickupSystem();

    UFUNCTION(BlueprintCallable, Category = "Debug|Input")
    void TestInputMappings();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void FixPickupCandleIssues();

    UFUNCTION(BlueprintCallable, Category = "Debug|Candles")
    void ForceTestCandleToggle();

    // Character debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug|Character")
    void RotateCharacterModel(float YawOffset);

    UFUNCTION(BlueprintCallable, Category = "Debug|Character")
    void ResetCharacterRotation();

    // Interaction debugging
    UFUNCTION(BlueprintCallable, Category = "Debug|Interaction")
    void DebugInteractionTrace();

    UFUNCTION(BlueprintCallable, Category = "Debug|Interaction")
    void ForcePickupNearestCandle();

    // Golf Ball debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void SpawnGolfBall();

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitGolfBallForward(float Power = 50.0f);

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitGolfBallAt(FVector Direction, float Power = 50.0f);

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ResetGolfBall();

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ListGolfBallStatus();

    // Golf Ball input wrapper functions (no parameters for input binding)
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitGolfBallForwardInput();

    // Golf charging system
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void StartChargingGolfShot();

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ReleaseGolfShot();

    // Candle input function
    UFUNCTION(BlueprintCallable, Category = "Input|Candles")
    void DropCandle();

    // Golf club debug function
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ShowCurrentClubInfo();

    // Character debug function
    UFUNCTION(BlueprintCallable, Category = "Debug|Character")
    void ShowCharacterStatus();

    // Golf Tee debug function
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void SpawnGolfTee();

    // Golf Ball Physics debug function
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ToggleGolfBallPhysics();

    // Mini Golf Mode debug function
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ToggleMiniGolfMode();

    // Debug function to check ball status
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void CheckGolfBallStatus();

    // Debug function to toggle Chaos physics
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void ToggleChaosPhysics();

    // Debug functions for testing different power levels
    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitBallLightPower(); // 25% power

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitBallMediumPower(); // 50% power

    UFUNCTION(BlueprintCallable, Category = "Debug|Golf")
    void HitBallHardPower(); // 75% power

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bShowFPS;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    bool bGameInputEnabled = true;

    // Golf charging variables
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf")
    bool bIsChargingShot = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf")
    float ShotChargeTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf")
    float MaxChargeTime = 3.0f; // Maximum charge time in seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf")
    float MinPower = 10.0f; // Minimum power percentage

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf")
    float MaxPower = 100.0f; // Maximum power percentage
};