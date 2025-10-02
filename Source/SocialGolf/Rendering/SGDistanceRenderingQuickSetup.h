/**
 * Simple example of how to quickly setup the Distance Rendering System
 * This file shows the most common integration patterns
 */

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "SGDistanceRenderingTypes.h"
#include "SGDistanceRenderingComponent.h"
#include "SGDistanceRenderingBlueprintLibrary.h"
#include "SGDistanceRenderingQuickSetup.generated.h"

// Quick setup types for easy selection
UENUM(BlueprintType)
enum EQuickSetupType
{
    Environment     UMETA(DisplayName = "Environment Objects"),
    Vegetation      UMETA(DisplayName = "Vegetation"),
    GolfCourse      UMETA(DisplayName = "Golf Course Structures"),
    UIElements      UMETA(DisplayName = "UI Elements"),
    Custom          UMETA(DisplayName = "Custom Settings")
};

/**
 * Simple example of how to quickly setup the Distance Rendering System
 * This file shows the most common integration patterns
 */
class SOCIALGOLF_API FSGDistanceRenderingQuickSetup
{
public:
    /**
     * One-line setup for a typical golf course
     * Call this from your GameMode::BeginPlay or Level Blueprint
     */
    static void SetupGolfCourse(UWorld* World);
    
    /**
     * Setup for performance-critical scenarios (many players, lower-end hardware)
     */
    static void SetupPerformanceMode(UWorld* World);
    
    /**
     * Setup for high-quality scenarios (single player, high-end hardware)
     */
    static void SetupQualityMode(UWorld* World);
};

/**
 * Example component that can be added to any actor to enable distance rendering
 * This shows how to create a simple, reusable setup
 */
UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class SOCIALGOLF_API USGQuickDistanceRenderingComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USGQuickDistanceRenderingComponent();

protected:
    virtual void BeginPlay() override;

public:
    // Configuration - set these in Blueprint defaults or constructor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    bool bAutoSetup = true;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (EditCondition = "bAutoSetup"))
    TEnumAsByte<enum EQuickSetupType> SetupType;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering", meta = (EditCondition = "!bAutoSetup"))
    FSGDistanceRenderingSettings CustomSettings;

    // Quick setup function
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void SetupDistanceRendering();

private:
    UPROPERTY()
    TObjectPtr<class USGDistanceRenderingComponent> DistanceRenderingComponent;
};