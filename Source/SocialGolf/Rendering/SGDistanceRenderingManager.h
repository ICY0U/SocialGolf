#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Engine/World.h"
#include "SGDistanceRenderingTypes.h"
#include "SGDistanceRenderingComponent.h"
#include "SGDistanceRenderingManager.generated.h"

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGRenderingManagerStats
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    int32 TotalRegisteredObjects = 0;

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    int32 VisibleObjects = 0;

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    int32 CulledObjects = 0;

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    float AverageDistance = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    float LastUpdateTime = 0.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stats")
    float UpdateDuration = 0.0f;

    FSGRenderingManagerStats()
    {
        TotalRegisteredObjects = 0;
        VisibleObjects = 0;
        CulledObjects = 0;
        AverageDistance = 0.0f;
        LastUpdateTime = 0.0f;
        UpdateDuration = 0.0f;
    }
};

USTRUCT()
struct FSGRenderingLevelChangeRequest
{
    GENERATED_BODY()

    UPROPERTY()
    TWeakObjectPtr<USGDistanceRenderingComponent> Component;

    UPROPERTY()
    EDistanceRenderingLevel TargetLevel = EDistanceRenderingLevel::VeryHigh;

    UPROPERTY()
    float Priority = 0.0f;

    FSGRenderingLevelChangeRequest()
    {
        Component = nullptr;
        TargetLevel = EDistanceRenderingLevel::VeryHigh;
        Priority = 0.0f;
    }

    FSGRenderingLevelChangeRequest(USGDistanceRenderingComponent* InComponent, EDistanceRenderingLevel InTargetLevel)
        : Component(InComponent), TargetLevel(InTargetLevel), Priority(0.0f)
    {
    }
};

UCLASS(BlueprintType)
class SOCIALGOLF_API USGDistanceRenderingManager : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    USGDistanceRenderingManager();

    // USubsystem interface
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

    // UWorldSubsystem interface
    virtual void OnWorldBeginPlay(UWorld& InWorld) override;

    // Static access
    UFUNCTION(BlueprintPure, Category = "Distance Rendering", meta = (CallInEditor = "true", DefaultToSelf = "WorldContext"))
    static USGDistanceRenderingManager* Get(const UObject* WorldContext);

    // Global settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Rendering")
    FSGDistanceRenderingSettings GlobalSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    bool bEnableDistanceRendering = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    bool bUseAsyncProcessing = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    int32 MaxUpdatesPerFrame = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
    float ManagerUpdateFrequency = 30.0f; // Manager updates per second

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Distance Rendering")
    FOnRenderingPerformanceUpdate OnPerformanceUpdate;

    // Object management
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void RegisterObject(USGDistanceRenderingComponent* Component);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void UnregisterObject(USGDistanceRenderingComponent* Component);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void QueueRenderingLevelChange(USGDistanceRenderingComponent* Component, EDistanceRenderingLevel TargetLevel);

    // Bulk operations
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void UpdateAllObjects();

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void SetGlobalRenderingEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void ForceUpdateAllObjects();

    // Statistics and debugging
    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    FSGRenderingManagerStats GetStats() const { return CurrentStats; }

    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void DumpRenderingStats();

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    int32 GetRegisteredObjectCount() const { return RegisteredComponents.Num(); }

    UFUNCTION(BlueprintPure, Category = "Distance Rendering")
    TArray<USGDistanceRenderingComponent*> GetRegisteredObjects() const;

    // Settings
    UFUNCTION(BlueprintCallable, Category = "Distance Rendering")
    void ApplyGlobalSettings(const FSGDistanceRenderingSettings& NewSettings);

protected:
    // Internal update functions
    void TickManager();
    void ProcessRenderingQueue();
    void UpdateStatsAndPerformance();
    void ProcessComponentBatch(int32 StartIndex, int32 Count);

    // Player tracking
    void UpdatePlayerPositions();
    FVector GetNearestPlayerPosition(const FVector& Location) const;

private:
    // Registered objects
    UPROPERTY()
    TArray<TWeakObjectPtr<USGDistanceRenderingComponent>> RegisteredComponents;

    // Queued changes
    TArray<FSGRenderingLevelChangeRequest> PendingChanges;

    // Player positions cache
    TArray<FVector> CachedPlayerPositions;

    // Statistics
    FSGRenderingManagerStats CurrentStats;

    // Timing
    float LastManagerUpdate = 0.0f;
    float ManagerUpdateInterval = 0.033f; // ~30 FPS

    // Performance tracking
    int32 CurrentBatchIndex = 0;
    double LastFrameStartTime = 0.0;

    // Timer handle for regular updates
    FTimerHandle UpdateTimerHandle;

public:
    // Console commands
    UFUNCTION(Category = "Distance Rendering", meta = (CallInEditor = "true"))
    void ToggleDistanceRendering();

    UFUNCTION(Category = "Distance Rendering", meta = (CallInEditor = "true")) 
    void ResetAllObjects();

    UFUNCTION(Category = "Distance Rendering", meta = (CallInEditor = "true"))
    void ShowDebugInfo();
};