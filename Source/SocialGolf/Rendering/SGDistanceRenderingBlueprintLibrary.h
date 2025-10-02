#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "SGDistanceRenderingTypes.h"
#include "SGDistanceRenderingComponent.h"
#include "SGDistanceRenderingBlueprintLibrary.generated.h"

/**
 * Blueprint Function Library for Distance Rendering System
 * Provides easy access to distance rendering functionality from Blueprints
 */
UCLASS()
class SOCIALGOLF_API USGDistanceRenderingBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Manager Access
    UFUNCTION(BlueprintPure, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static class USGDistanceRenderingManager* GetDistanceRenderingManager(const UObject* WorldContext);

    // Component Setup
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static USGDistanceRenderingComponent* AddDistanceRenderingToActor(AActor* Actor, const FSGDistanceRenderingSettings& Settings);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    static void RemoveDistanceRenderingFromActor(AActor* Actor);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static USGDistanceRenderingComponent* GetDistanceRenderingComponent(AActor* Actor);

    // Bulk Operations
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static void SetupDistanceRenderingForActors(const TArray<AActor*>& Actors, const FSGDistanceRenderingSettings& Settings);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static void SetupDistanceRenderingForActorsWithTag(const UObject* WorldContext, FName Tag, const FSGDistanceRenderingSettings& Settings);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static void SetupDistanceRenderingForActorsOfClass(const UObject* WorldContext, TSubclassOf<AActor> ActorClass, const FSGDistanceRenderingSettings& Settings);

    // Settings Management
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    static void ApplyGlobalDistanceRenderingSettings(const UObject* WorldContext, const FSGDistanceRenderingSettings& Settings);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings GetDefaultDistanceRenderingSettings();

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings CreateDistanceRenderingSettings(
        float VeryHighDetailDistance = 500.0f,
        float HighDetailDistance = 1500.0f,
        float MediumDetailDistance = 3000.0f,
        float LowDetailDistance = 6000.0f,
        float VeryLowDetailDistance = 10000.0f,
        float CullingDistance = 15000.0f,
        float UpdateFrequency = 10.0f,
        bool bUseAsyncUpdates = true,
        int32 MaxObjectsPerFrame = 50
    );

    // System Control
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    static void EnableDistanceRendering(const UObject* WorldContext, bool bEnable = true);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static bool IsDistanceRenderingEnabled(const UObject* WorldContext);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    static void ForceUpdateAllDistanceRendering(const UObject* WorldContext);

    // Debugging and Statistics
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering", meta = (CallInEditor = "true"))
    static void ShowDistanceRenderingStats(const UObject* WorldContext);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGRenderingManagerStats GetDistanceRenderingStats(const UObject* WorldContext);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    static void ToggleDistanceRenderingDebug(const UObject* WorldContext);

    // Utility Functions
    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static EDistanceRenderingLevel CalculateRenderingLevelForDistance(float Distance, const FSGDistanceRenderingSettings& Settings, float ImportanceMultiplier = 1.0f);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static float GetDistanceBetweenActors(AActor* ActorA, AActor* ActorB);

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static float GetDistanceToNearestPlayer(const UObject* WorldContext, const FVector& Location);

    // Preset Configurations
    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings GetGolfCourseRenderingSettings();

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings GetEnvironmentObjectRenderingSettings();

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings GetVegetationRenderingSettings();

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    static FSGDistanceRenderingSettings GetUIElementRenderingSettings();
};