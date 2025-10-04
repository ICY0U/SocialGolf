#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SGPlayerController.generated.h"

class ASGHUD;
class UCameraComponent;
class USGReplayManager;

UCLASS()
class SOCIALGOLF_API ASGPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ASGPlayerController();

    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;
    virtual void Tick(float DeltaTime) override;

    // === REPLAY SYSTEM FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Replay")
    void ToggleReplayRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StartReplayRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void StopReplayRecording();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void OpenReplayUI();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void QuickSaveReplay();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    void PlayLastReplay();

    UFUNCTION(BlueprintCallable, Category = "Replay")
    USGReplayManager* GetReplayManager() const { return ReplayManager; }

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

    // Candle system functions
    UFUNCTION(BlueprintCallable, Category = "Candles")
    void SpawnTestCandle();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void LightAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void ExtinguishAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void ToggleAllCandles();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void SpawnPickupCandle();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void DropAllPickupCandles();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void ListAllPickupCandles();

    // Character Customization functions
    UFUNCTION(BlueprintCallable, Category = "Customization", CallInEditor)
    void RandomizeCharacterAppearance();

    UFUNCTION(BlueprintCallable, Category = "Customization", CallInEditor)
    void CycleCharacterTorsoMaterial();

    UFUNCTION(BlueprintCallable, Category = "Customization", CallInEditor)
    void CycleCharacterHeadMaterial();

    UFUNCTION(BlueprintCallable, Category = "Customization", CallInEditor)
    void SetCharacterToRedBlue();

    UFUNCTION(BlueprintCallable, Category = "Customization", CallInEditor)
    void SetCharacterToRandomBrightColors();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void FixPickupCandleIssues();

    UFUNCTION(BlueprintCallable, Category = "Candles")
    void ForceTestCandleToggle();

    // Character functions
    UFUNCTION(BlueprintCallable, Category = "Character")
    void RotateCharacterModel(float YawOffset);

    UFUNCTION(BlueprintCallable, Category = "Character")
    void ResetCharacterRotation();

    // Interaction functions
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void DebugInteractionTrace();

    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void ForcePickupNearestCandle();

    // Golf Ball functions (Core only)
    UFUNCTION(BlueprintCallable, Category = "Golf")
    void SpawnGolfBall();

    UFUNCTION(BlueprintCallable, Category = "Golf")
    void HitGolfBallForward(float Power = 50.0f);

    UFUNCTION(BlueprintCallable, Category = "Golf")
    void HitGolfBallAt(FVector Direction, float Power = 50.0f);

    UFUNCTION(BlueprintCallable, Category = "Golf")
    void ResetGolfBall();

    UFUNCTION(BlueprintCallable, Category = "Golf")
    void ListGolfBallStatus();

    // Golf Ball input wrapper functions (no parameters for input binding)
    UFUNCTION(BlueprintCallable, Category = "Golf")
    void HitGolfBallForwardInput();

    // Golf charging system
    UFUNCTION(BlueprintCallable, Category = "Golf")
    void StartChargingGolfShot();

    UFUNCTION(BlueprintCallable, Category = "Golf")
    void ReleaseGolfShot();

    // Candle input function
    UFUNCTION(BlueprintCallable, Category = "Candles")
    void DropCandle();

    // Golf Tee function
    UFUNCTION(BlueprintCallable, Category = "Golf")
    void SpawnGolfTee();
    
    // === CAMERA SYSTEM FUNCTIONS ===
    UFUNCTION(BlueprintCallable, Category = "Camera|Recording")
    void StartCameraRecording();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Recording")
    void StopCameraRecording();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Recording")
    void PlayCameraRecording();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Recording")
    void ExportCameraRecording();
    
    // Camera View Functions
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void SwitchToCameraView1();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void SwitchToCameraView2();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void SwitchToCameraView3();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void SwitchToCameraView4();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void NextCameraView();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void PreviousCameraView();
    
    UFUNCTION(BlueprintCallable, Category = "Camera|Views")
    void SwitchToCameraView(int32 ViewIndex);

protected:
    // === REPLAY SYSTEM ===
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Replay")
    USGReplayManager* ReplayManager;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replay")
    bool bAutoRecordOnShot = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replay")
    TSubclassOf<class USGReplayWidget> ReplayWidgetClass;

    UPROPERTY()
    class USGReplayWidget* ReplayWidget = nullptr;

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

private:
    // === REPLAY SYSTEM PRIVATE ===
    void OnGolfShotEvent(float Power, const FString& ClubName);
    void SetupReplaySystem();
};