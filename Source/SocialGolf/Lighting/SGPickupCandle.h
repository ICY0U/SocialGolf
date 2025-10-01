#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "../Core/SGFocusableInterface.h"
#include "Components/TimelineComponent.h"
#include "SGPickupCandle.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UParticleSystemComponent;
class UAudioComponent;
class USGFocusableComponent;
class UTimelineComponent;
class UCurveFloat;
class USceneComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickupCandleStateChanged, bool, bIsPickedUp, bool, bIsLit);

UCLASS()
class SOCIALGOLF_API ASGPickupCandle : public AActor, public ISGInteractable, public ISGFocusableInterface
{
    GENERATED_BODY()
    
public:    
    ASGPickupCandle();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CandleBaseMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CandleWickMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPointLightComponent* CandleLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UParticleSystemComponent* FlameParticles;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UAudioComponent* CandleAudioComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTimelineComponent* FlickerTimeline;

    // Attachment point when carried
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* AttachmentPoint;

public:
    // ISGInteractable interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // ISGFocusableInterface interface
    virtual void BeginFocus_Implementation() override;
    virtual void EndFocus_Implementation() override;
    virtual bool IsFocused_Implementation() const override;
    virtual float GetFocusScaleFactor_Implementation() const override { return 1.0f; } // Disabled scaling

    // Pickup functionality
    UFUNCTION(BlueprintCallable, Category = "Pickup Candle")
    void PickupCandle(APawn* Holder);

    UFUNCTION(BlueprintCallable, Category = "Pickup Candle")
    void DropCandle();

    UFUNCTION(BlueprintCallable, Category = "Pickup Candle")
    void ToggleCandle();

    UFUNCTION(BlueprintCallable, Category = "Pickup Candle")
    void LightCandle();

    UFUNCTION(BlueprintCallable, Category = "Pickup Candle")
    void ExtinguishCandle();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pickup Candle")
    bool IsPickedUp() const { return bIsPickedUp; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pickup Candle")
    bool IsLit() const { return bIsLit; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pickup Candle")
    APawn* GetCurrentHolder() const { return CurrentHolder; }

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    bool bStartLit = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    bool bDropOnExtinguish = false; // Auto-drop when extinguished

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    bool bExtinguishOnDrop = true; // Auto-extinguish when dropped

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    FName AttachSocketName = TEXT("hand_r"); // Socket to attach to on character

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    FVector AttachOffset = FVector(10.0f, 0.0f, 0.0f); // Offset from socket

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    FRotator AttachRotation = FRotator(0.0f, 0.0f, 90.0f); // Rotation when held

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
    FVector AttachScale = FVector(0.5f, 0.5f, 0.5f); // Scale when held (make smaller)

    // Candle Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FLinearColor CandleLightColor = FLinearColor(1.0f, 0.8f, 0.6f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float BaseLightIntensity = 150.0f; // Slightly dimmer for handheld

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float LightRadius = 250.0f; // Smaller radius for handheld

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float FlickerIntensity = 0.4f; // More flicker for handheld

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float FlickerSpeed = 3.0f; // Faster flicker for handheld

    // Text prompts
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Text")
    FText PickupText = FText::FromString(TEXT("Press E to Pick Up"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Text")
    FText DropText = FText::FromString(TEXT("Press E to Drop"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Text")
    FText LightText = FText::FromString(TEXT("Press F to Light"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Text")
    FText ExtinguishText = FText::FromString(TEXT("Press F to Extinguish"));

    // Effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class UParticleSystem* FlameParticleSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* PickupSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* DropSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* LightSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* ExtinguishSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* AmbientFlameSound;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Pickup Candle Events")
    FOnPickupCandleStateChanged OnPickupCandleStateChanged;

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(ReplicatedUsing = OnRep_IsPickedUp)
    bool bIsPickedUp = false;

    UPROPERTY(ReplicatedUsing = OnRep_IsLit)
    bool bIsLit = false;

    UPROPERTY(ReplicatedUsing = OnRep_CurrentHolder)
    APawn* CurrentHolder = nullptr;

    UFUNCTION()
    void OnRep_IsPickedUp();

    UFUNCTION()
    void OnRep_IsLit();

    UFUNCTION()
    void OnRep_CurrentHolder();

    // Flickering system
    UPROPERTY()
    UCurveFloat* FlickerCurve;

    UFUNCTION()
    void OnFlickerTimelineUpdate(float Value);

    void CreateFlickerCurve();
    void StartFlickering();
    void StopFlickering();

    // Helper functions
    void UpdateCandleVisuals();
    void UpdateAttachment();
    void SetPhysicsEnabled(bool bEnabled);
    void PlaySound(USoundBase* Sound);

    // Input handling for held candle
    void SetupInputBindings(APawn* Holder);
    void RemoveInputBindings(APawn* Holder);

private:
    bool bIsFocused = false;
    FTimerHandle InputSetupTimer;

public:
    // Input actions for when candle is held
    UFUNCTION(BlueprintCallable, Category = "Input")
    void OnToggleCandlePressed();
};