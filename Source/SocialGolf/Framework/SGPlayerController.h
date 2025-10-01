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

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bShowFPS;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    bool bGameInputEnabled = true;
};