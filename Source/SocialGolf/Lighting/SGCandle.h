#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "../Core/SGFocusableInterface.h"
#include "Components/TimelineComponent.h"
#include "SGCandle.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UParticleSystemComponent;
class UAudioComponent;
class USGFocusableComponent;
class UTimelineComponent;
class UCurveFloat;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCandleLightChanged, bool, bIsLit);

UCLASS()
class SOCIALGOLF_API ASGCandle : public AActor, public ISGInteractable, public ISGFocusableInterface
{
    GENERATED_BODY()
    
public:    
    ASGCandle();

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

public:
    // ISGInteractable interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // ISGFocusableInterface interface
    virtual void BeginFocus_Implementation() override;
    virtual void EndFocus_Implementation() override;
    virtual bool IsFocused_Implementation() const override;
    virtual float GetFocusScaleFactor_Implementation() const override { return 1.05f; }

    // Candle functionality
    UFUNCTION(BlueprintCallable, Category = "Candle")
    void LightCandle();

    UFUNCTION(BlueprintCallable, Category = "Candle")
    void ExtinguishCandle();

    UFUNCTION(BlueprintCallable, Category = "Candle")
    void ToggleCandle();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Candle")
    bool IsLit() const { return bIsLit; }

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    bool bStartLit = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FLinearColor CandleLightColor = FLinearColor(1.0f, 0.8f, 0.6f); // Warm candle color

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float BaseLightIntensity = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float LightRadius = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float FlickerIntensity = 0.3f; // How much the light flickers (0-1)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float FlickerSpeed = 2.0f; // How fast the light flickers

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FText LitText = FText::FromString(TEXT("Press E to Extinguish"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FText UnlitText = FText::FromString(TEXT("Press E to Light"));

    // Effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class UParticleSystem* FlameParticleSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* LightSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* ExtinguishSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* AmbientFlameSound;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Candle Events")
    FOnCandleLightChanged OnCandleLightChanged;

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(ReplicatedUsing = OnRep_IsLit)
    bool bIsLit = false;

    UFUNCTION()
    void OnRep_IsLit();

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
    void UpdateLightVisibility();

private:
    float CurrentFlickerOffset = 0.0f;
    bool bIsFocused = false;
};