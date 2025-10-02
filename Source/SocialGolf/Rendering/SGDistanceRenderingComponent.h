#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "SGDistanceRenderingTypes.h"
#include "SGDistanceRenderingComponent.generated.h"

UCLASS(BlueprintType, Blueprintable, ClassGroup=(Rendering), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGDistanceRenderingComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USGDistanceRenderingComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    FSGDistanceRenderingSettings RenderingSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    bool bAutoRegisterWithManager = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    bool bIgnoreDistanceRendering = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    float ImportanceMultiplier = 1.0f;

    // Current state
    UPROPERTY(BlueprintReadOnly, Category = "Distance Rendering")
    FSGObjectRenderingData RenderingData;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Distance Rendering")
    FOnObjectRenderingLevelChanged OnRenderingLevelChanged;

    // Functions
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void SetRenderingLevel(EDistanceRenderingLevel NewLevel);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void UpdateDistanceToPlayers();

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    EDistanceRenderingLevel CalculateTargetRenderingLevel(float Distance) const;

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    float GetDistanceToNearestPlayer() const { return RenderingData.DistanceToNearestPlayer; }

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    EDistanceRenderingLevel GetCurrentRenderingLevel() const { return RenderingData.CurrentRenderingLevel; }

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    bool IsVisible() const { return RenderingData.bIsVisible; }

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    bool IsCulled() const { return RenderingData.bIsCulled; }

    // Component management
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void ApplyRenderingLevel(EDistanceRenderingLevel Level);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void SetVisibility(bool bVisible);

protected:
    // Internal functions
    void RegisterWithManager();
    void UnregisterFromManager();
    void ApplyLODToComponents(EDistanceRenderingLevel Level);
    void GetAffectedComponents(TArray<UPrimitiveComponent*>& OutComponents);

private:
    // Cached components for performance
    UPROPERTY()
    TArray<TObjectPtr<UStaticMeshComponent>> CachedStaticMeshComponents;

    UPROPERTY()
    TArray<TObjectPtr<USkeletalMeshComponent>> CachedSkeletalMeshComponents;

    UPROPERTY()
    TArray<TObjectPtr<UInstancedStaticMeshComponent>> CachedInstancedMeshComponents;

    // Timing
    float LastUpdateTime = 0.0f;
    float UpdateInterval = 0.1f; // 10 FPS by default

    // State tracking
    bool bIsRegisteredWithManager = false;
    EDistanceRenderingLevel PreviousLevel = EDistanceRenderingLevel::VeryHigh;
};