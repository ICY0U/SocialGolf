#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Core/SGSaveableInterface.h"
#include "SGCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USGInteractionComponent;
class UStaticMeshComponent;
class USceneComponent;
class USGGolfClubManager;
class ASGPickupCandle;
class ASGBasketball;
class ASGBasketballHoop;
class ASGGolfBall;
struct FSGSaveData;

UCLASS()
class SOCIALGOLF_API ASGCharacter : public ACharacter, public ISGSaveableInterface
{
    GENERATED_BODY()

public:
    ASGCharacter();

    // ISGSaveableInterface implementation
    virtual bool SaveData_Implementation(FSGSaveData& SaveData) const override;
    virtual bool LoadData_Implementation(const FSGSaveData& SaveData) override;
    virtual FString GetSaveID_Implementation() const override;
    virtual int32 GetSavePriority_Implementation() const override;

    // Input sensitivity settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
    float MouseSensitivity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
    bool bInvertMouseY = false;

    // Camera offset settings for basketball
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector BasketballCameraOffset = FVector(0.0f, 80.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector BasketballChargingCameraOffset = FVector(0.0f, 120.0f, 20.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    float CameraTransitionSpeed = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    float ChargingCameraTransitionSpeed = 8.0f;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
    UCameraComponent* FollowCamera;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Interaction")
    USGInteractionComponent* InteractionComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Golf")
    USGGolfClubManager* GolfClubManager;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Visual")
    USceneComponent* PlaceholderRoot;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Visual")
    UStaticMeshComponent* PlaceholderTorso;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Visual")
    UStaticMeshComponent* PlaceholderHead;

    // Debug collision visualization
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Debug")
    UStaticMeshComponent* DebugCollisionCapsule;

    // Debug settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Debug")
    bool bShowDebugCollision = true;

    // Camera offset state
    FVector DefaultCameraOffset;
    FVector CurrentCameraOffset;
    FVector TargetCameraOffset;

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Camera offset functions
    void UpdateCameraOffset(float DeltaTime);
    void SetCameraOffset(const FVector& NewOffset);
    FVector GetDesiredCameraOffset() const;

    // Movement input functions
    void MoveForward(float Value);
    void MoveRight(float Value);
    
    // Camera input functions - these should always work regardless of movement
    void Turn(float Value);
    void LookUp(float Value);
    void AddControllerYawInputWithSensitivity(float Value);
    void AddControllerPitchInputWithSensitivity(float Value);
    
    // Action input functions
    void DoJump();
    void StopJumpingLocal();
    void InteractPressed();

    // Pickup candle input functions
    void ToggleHeldCandlePressed();
    void DropCandlePressed();
    
    // Golf system functions
    void ResetGolfBallPressed();
    void PlaceBallAtTeePressed();
    
    // Golf charging system
    void StartChargingGolfShot();
    void ReleaseGolfShot();
    void HitNearbyGolfBall(const FVector& HitDirection, float Power);

public:
    UFUNCTION(BlueprintCallable, Category="Debug")
    void ToggleDebugCollision();

    // Sitting system
    UFUNCTION(BlueprintCallable, Category="Sitting")
    void SetSittingState(bool bNewSitting);

    UFUNCTION(BlueprintCallable, Category="Sitting")
    bool IsSitting() const { return bIsSitting; }

    UFUNCTION(BlueprintCallable, Category="Sitting")
    void ForceStandUp();

    // Pickup candle system
    UFUNCTION(BlueprintCallable, Category="Pickup Candle")
    void SetHeldCandle(class ASGPickupCandle* Candle);

    UFUNCTION(BlueprintCallable, Category="Pickup Candle")
    class ASGPickupCandle* GetHeldCandle() const { return HeldCandle; }

    UFUNCTION(BlueprintCallable, Category="Pickup Candle")
    bool IsHoldingCandle() const { return HeldCandle != nullptr; }

    // Basketball system
    UFUNCTION(BlueprintCallable, Category="Basketball")
    void SetHeldBasketball(class ASGBasketball* Basketball);

    UFUNCTION(BlueprintCallable, Category="Basketball")
    class ASGBasketball* GetHeldBasketball() const { return HeldBasketball; }

    UFUNCTION(BlueprintCallable, Category="Basketball")
    bool IsHoldingBasketball() const { return HeldBasketball != nullptr; }

    // Basketball shooting with charging system (like golf)
    UFUNCTION(BlueprintCallable, Category="Basketball")
    void StartChargingBasketballShot();

    UFUNCTION(BlueprintCallable, Category="Basketball")
    void ReleaseBasketballShot();

    UFUNCTION(BlueprintCallable, Category="Basketball")
    void ThrowBasketball(float ThrowPower = 1200.0f);

    UFUNCTION(BlueprintCallable, Category="Basketball")
    void DropBasketball();

    UFUNCTION(BlueprintCallable, Category="Basketball")
    void SpawnBasketball();

    UFUNCTION(BlueprintCallable, Category="Basketball")
    void SpawnBasketballHoop();

    UFUNCTION(BlueprintCallable, Category="Basketball")
    float CalculateOptimalThrowPower(const FVector& ThrowDirection, float BasePower);

    // Golf ball spawning function
    UFUNCTION(BlueprintCallable, Category="Golf")
    void SpawnGolfBall();

    // Golf club system
    UFUNCTION(BlueprintCallable, Category="Golf")
    USGGolfClubManager* GetGolfClubManager() const { return GolfClubManager; }

    UFUNCTION(BlueprintCallable, Category="Input")
    void SetMouseSensitivity(float NewSensitivity);

    // Server RPC for multiplayer randomize appearance
    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Customization")
    void ServerRandomizeAppearance();

    // Server RPCs for multiplayer customization
    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Customization")
    void ServerCycleTorsoMaterial();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Customization")
    void ServerCycleHeadMaterial();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Customization")
    void ServerSetCustomColors(FLinearColor NewPrimaryColor, FLinearColor NewSecondaryColor, FLinearColor NewAccentColor);

    // Basketball server RPCs for multiplayer
    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Basketball")
    void ServerThrowBasketball(float ThrowPower);

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Basketball")
    void ServerThrowBasketballWithDirection(float ThrowPower, const FVector& ThrowDirection);

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Basketball")
    void ServerDropBasketball();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Basketball")
    void ServerStartChargingBasketball();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category="Basketball")
    void ServerStopChargingBasketball();

    // Separate basketball functions (no conflicts)
    UFUNCTION(BlueprintCallable, Category="Basketball")
    void StartChargingBasketball();

    UFUNCTION(BlueprintCallable, Category="Basketball") 
    void ReleaseBasketball();

    // Separate golf functions (no conflicts)
    UFUNCTION(BlueprintCallable, Category="Golf")
    void StartChargingGolf();

    UFUNCTION(BlueprintCallable, Category="Golf")
    void ReleaseGolf();

    // Function to randomize another player's appearance (server only)
    UFUNCTION(BlueprintCallable, Category="Customization")
    void RandomizePlayerAppearance(ASGCharacter* TargetPlayer);

    // Function to randomize all players' appearances (server only)
    UFUNCTION(BlueprintCallable, Category="Customization")
    void RandomizeAllPlayersAppearance();

    // Multicast RPC to notify all clients about appearance changes
    UFUNCTION(NetMulticast, Reliable, Category="Customization")
    void MulticastNotifyAppearanceChanged(const FString& PlayerName, const FString& ChangeType);

    UFUNCTION(BlueprintCallable, Category="Customization")
    void InitializeDefaultMaterials();

    // Debug function to force refresh appearance
    UFUNCTION(BlueprintCallable, Category="Customization")
    void ForceRefreshAppearance();

protected:
    // Sitting state
    UPROPERTY(ReplicatedUsing = OnRep_IsSitting, BlueprintReadOnly, Category="Sitting")
    bool bIsSitting = false;

    // Pickup candle state
    UPROPERTY(ReplicatedUsing = OnRep_HeldCandle, BlueprintReadOnly, Category="Pickup Candle")
    class ASGPickupCandle* HeldCandle = nullptr;

    // Basketball state
    UPROPERTY(ReplicatedUsing = OnRep_HeldBasketball, BlueprintReadOnly, Category="Basketball")
    class ASGBasketball* HeldBasketball = nullptr;

    // Golf charging system
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Golf", Replicated)
    bool bIsChargingShot = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Golf")
    float ShotChargeTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Golf")
    float MaxChargeTime = 3.0f; // Maximum charge time in seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Golf")
    float MinPower = 5.0f;    // Reduced from 10.0f

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Golf")
    float MaxPower = 30.0f;   // Reduced from 100.0f for much gentler hits

    // Basketball charging system (integrated with golf charging) - ENHANCED REALISTIC SETTINGS
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Basketball", Replicated)
    float BasketballMinPower = 600.0f; // Reduced minimum power for better control (replicated)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Basketball", Replicated)
    float BasketballMaxPower = 3200.0f; // Optimized maximum power for realistic shots (replicated)

    UFUNCTION()
    void OnRep_IsSitting();

    UFUNCTION()
    void OnRep_HeldCandle();

    UFUNCTION()
    void OnRep_HeldBasketball();

private:
    // Basketball input functions
    void DropBasketballPressed();
    void SpawnBasketballPressed();
    void SpawnBasketballHoopPressed();

    // Golf input functions
    void SpawnGolfBallPressed();
};
