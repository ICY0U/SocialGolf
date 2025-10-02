#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "SGDistanceRenderingTypes.generated.h"

UENUM(BlueprintType)
enum class EDistanceRenderingLevel : uint8
{
    None        UMETA(DisplayName = "Not Rendered"),
    VeryLow     UMETA(DisplayName = "Very Low Detail"),
    Low         UMETA(DisplayName = "Low Detail"),
    Medium      UMETA(DisplayName = "Medium Detail"),
    High        UMETA(DisplayName = "High Detail"),
    VeryHigh    UMETA(DisplayName = "Very High Detail"),
    MAX         UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGDistanceRenderingSettings
{
    GENERATED_BODY()

    // Distance thresholds for different LOD levels (in Unreal Units - cm)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float VeryHighDetailDistance = 500.0f;      // 5 meters

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float HighDetailDistance = 1500.0f;         // 15 meters

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float MediumDetailDistance = 3000.0f;       // 30 meters

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float LowDetailDistance = 6000.0f;          // 60 meters

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float VeryLowDetailDistance = 10000.0f;     // 100 meters

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (ClampMin = "0.0"))
    float CullingDistance = 15000.0f;           // 150 meters - completely hidden

    // Performance settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    float UpdateFrequency = 10.0f;              // Updates per second

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    bool bUseAsyncUpdates = true;               // Use background thread for distance calculations

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    int32 MaxObjectsPerFrame = 50;              // Max objects to update per frame

    FSGDistanceRenderingSettings()
    {
        VeryHighDetailDistance = 500.0f;
        HighDetailDistance = 1500.0f;
        MediumDetailDistance = 3000.0f;
        LowDetailDistance = 6000.0f;
        VeryLowDetailDistance = 10000.0f;
        CullingDistance = 15000.0f;
        UpdateFrequency = 10.0f;
        bUseAsyncUpdates = true;
        MaxObjectsPerFrame = 50;
    }
};

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGObjectRenderingData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    TWeakObjectPtr<AActor> Actor;

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    float DistanceToNearestPlayer = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    EDistanceRenderingLevel CurrentRenderingLevel = EDistanceRenderingLevel::VeryHigh;

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    EDistanceRenderingLevel TargetRenderingLevel = EDistanceRenderingLevel::VeryHigh;

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    bool bIsVisible = true;

    UPROPERTY(BlueprintReadOnly, Category = "Rendering")
    bool bIsCulled = false;

    // Performance tracking
    UPROPERTY(BlueprintReadOnly, Category = "Performance")
    float LastUpdateTime = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Performance")
    int32 UpdateCount = 0;

    FSGObjectRenderingData()
    {
        Actor = nullptr;
        DistanceToNearestPlayer = 0.0f;
        CurrentRenderingLevel = EDistanceRenderingLevel::VeryHigh;
        TargetRenderingLevel = EDistanceRenderingLevel::VeryHigh;
        bIsVisible = true;
        bIsCulled = false;
        LastUpdateTime = 0.0f;
        UpdateCount = 0;
    }

    FSGObjectRenderingData(AActor* InActor)
        : FSGObjectRenderingData()
    {
        Actor = InActor;
    }
};

// Delegate for when object rendering level changes
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnObjectRenderingLevelChanged, AActor*, Actor, EDistanceRenderingLevel, OldLevel, EDistanceRenderingLevel, NewLevel);

// Delegate for performance monitoring
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRenderingPerformanceUpdate, int32, TotalObjects, int32, VisibleObjects, float, AverageDistance);