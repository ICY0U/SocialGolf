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

    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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

    // Golf club input functions
    void NextClubPressed();
    void PreviousClubPressed();

    // Direct key binding functions (backup for input action issues)
    void DirectToggleCandlePressed();
    void DirectDropCandlePressed();
    void DirectTestCandleSystem();  // Test system status and enable debug
    
    // Debug functions
    void ToggleInteractionDebug();

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

    // Golf club system
    UFUNCTION(BlueprintCallable, Category="Golf")
    USGGolfClubManager* GetGolfClubManager() const { return GolfClubManager; }

    UFUNCTION(BlueprintCallable, Category="Input")
    void SetMouseSensitivity(float NewSensitivity);

protected:
    // Sitting state
    UPROPERTY(ReplicatedUsing = OnRep_IsSitting, BlueprintReadOnly, Category="Sitting")
    bool bIsSitting = false;

    // Pickup candle state
    UPROPERTY(ReplicatedUsing = OnRep_HeldCandle, BlueprintReadOnly, Category="Pickup Candle")
    class ASGPickupCandle* HeldCandle = nullptr;

    UFUNCTION()
    void OnRep_IsSitting();

    UFUNCTION()
    void OnRep_HeldCandle();
};
