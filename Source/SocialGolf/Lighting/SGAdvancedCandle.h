#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "../Core/SGFocusableInterface.h"
#include "Components/TimelineComponent.h"
#include "SGAdvancedCandle.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UParticleSystemComponent;
class UAudioComponent;
class USGFocusableComponent;
class UTimelineComponent;
class UCurveFloat;
class UMaterialParameterCollection;

UENUM(BlueprintType)
enum class ECandleType : uint8
{
    SmallCandle     UMETA(DisplayName = "Small Candle"),
    MediumCandle    UMETA(DisplayName = "Medium Candle"),
    LargeCandle     UMETA(DisplayName = "Large Candle"),
    Torch           UMETA(DisplayName = "Torch"),
    Lantern         UMETA(DisplayName = "Lantern"),
    OilLamp         UMETA(DisplayName = "Oil Lamp")
};

UENUM(BlueprintType)
enum class ECandleLightMode : uint8
{
    Realistic       UMETA(DisplayName = "Realistic Flickering"),
    Steady          UMETA(DisplayName = "Steady Light"),
    Dramatic        UMETA(DisplayName = "Dramatic Flickering"),
    Magical         UMETA(DisplayName = "Magical Glow")
};

USTRUCT(BlueprintType)
struct FCandlePreset
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor LightColor = FLinearColor(1.0f, 0.8f, 0.6f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BaseIntensity = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LightRadius = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlickerIntensity = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlickerSpeed = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Temperature = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ParticleScale = FVector(1.0f);

    FCandlePreset()
    {
        LightColor = FLinearColor(1.0f, 0.8f, 0.6f);
        BaseIntensity = 200.0f;
        LightRadius = 300.0f;
        FlickerIntensity = 0.3f;
        FlickerSpeed = 2.0f;
        Temperature = 2000.0f;
        ParticleScale = FVector(1.0f);
    }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAdvancedCandleLightChanged, bool, bIsLit, ECandleType, CandleType);

UCLASS()
class SOCIALGOLF_API ASGAdvancedCandle : public AActor, public ISGInteractable, public ISGFocusableInterface
{
    GENERATED_BODY()
    
public:    
    ASGAdvancedCandle();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CandleBaseMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CandleWickMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPointLightComponent* MainLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPointLightComponent* FillLight; // Secondary softer light for realism

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UParticleSystemComponent* FlameParticles;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UParticleSystemComponent* SmokeParticles;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UAudioComponent* CandleAudioComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTimelineComponent* FlickerTimeline;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTimelineComponent* ColorTimeline; // For magical color changes

public:
    // ISGInteractable interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // ISGFocusableInterface interface
    virtual void BeginFocus_Implementation() override;
    virtual void EndFocus_Implementation() override;
    virtual bool IsFocused_Implementation() const override;
    virtual float GetFocusScaleFactor_Implementation() const override;

    // Candle functionality
    UFUNCTION(BlueprintCallable, Category = "Advanced Candle")
    void LightCandle();

    UFUNCTION(BlueprintCallable, Category = "Advanced Candle")
    void ExtinguishCandle();

    UFUNCTION(BlueprintCallable, Category = "Advanced Candle")
    void ToggleCandle();

    UFUNCTION(BlueprintCallable, Category = "Advanced Candle")
    void SetCandleType(ECandleType NewType);

    UFUNCTION(BlueprintCallable, Category = "Advanced Candle")
    void SetLightMode(ECandleLightMode NewMode);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Advanced Candle")
    bool IsLit() const { return bIsLit; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Advanced Candle")
    ECandleType GetCandleType() const { return CandleType; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Advanced Candle")
    ECandleLightMode GetLightMode() const { return LightMode; }

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    ECandleType CandleType = ECandleType::MediumCandle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    ECandleLightMode LightMode = ECandleLightMode::Realistic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    bool bStartLit = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    bool bCanBeExtinguished = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    bool bAutoRelight = false; // Automatically relight after extinguishing

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    float AutoRelightDelay = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FText LitText = FText::FromString(TEXT("Press E to Extinguish"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FText UnlitText = FText::FromString(TEXT("Press E to Light"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
    FText PermanentText = FText::FromString(TEXT("Magical Eternal Flame"));

    // Presets for different candle types
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Presets")
    TMap<ECandleType, FCandlePreset> CandlePresets;

    // Effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class UParticleSystem* FlameParticleSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class UParticleSystem* SmokeParticleSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* LightSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* ExtinguishSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Effects")
    class USoundBase* AmbientFlameSound;

    // Magical effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magical Effects")
    bool bMagicalCandle = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magical Effects")
    TArray<FLinearColor> MagicalColors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magical Effects")
    float ColorChangeSpeed = 1.0f;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Candle Events")
    FOnAdvancedCandleLightChanged OnCandleLightChanged;

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(ReplicatedUsing = OnRep_IsLit)
    bool bIsLit = false;

    UPROPERTY(ReplicatedUsing = OnRep_CandleType)
    ECandleType ReplicatedCandleType = ECandleType::MediumCandle;

    UFUNCTION()
    void OnRep_IsLit();

    UFUNCTION()
    void OnRep_CandleType();

    // Curve systems
    UPROPERTY()
    UCurveFloat* RealisticFlickerCurve;

    UPROPERTY()
    UCurveFloat* DramaticFlickerCurve;

    UPROPERTY()
    UCurveFloat* MagicalFlickerCurve;

    UPROPERTY()
    UCurveFloat* ColorChangeCurve;

    UFUNCTION()
    void OnFlickerTimelineUpdate(float Value);

    UFUNCTION()
    void OnColorTimelineUpdate(float Value);

    void CreateFlickerCurves();
    void StartFlickering();
    void StopFlickering();
    void UpdateFlickerMode();

    // Candle type management
    void InitializeCandlePresets();
    void ApplyCandlePreset();
    FCandlePreset GetCurrentPreset() const;

    // Helper functions
    void UpdateCandleVisuals();
    void UpdateLightVisibility();
    void UpdateMeshScale();

    // Auto-relight system
    UFUNCTION()
    void AutoRelight();

    FTimerHandle AutoRelightTimer;

private:
    bool bIsFocused = false;
    int32 CurrentMagicalColorIndex = 0;
    float CurrentFlickerMultiplier = 1.0f;
};