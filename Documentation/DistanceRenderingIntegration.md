# Distance Rendering Integration Examples

## Integration with SGGolfBall

Add distance rendering to golf balls with special handling for active/important balls:

```cpp
// In SGGolfBall.h - Add this to the class
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rendering")
TObjectPtr<class USGDistanceRenderingComponent> DistanceRenderingComponent;
```

```cpp
// In SGGolfBall.cpp constructor
ASGGolfBall::ASGGolfBall()
{
    // ... existing code ...
    
    // Add distance rendering component
    DistanceRenderingComponent = CreateDefaultSubobject<USGDistanceRenderingComponent>(TEXT("DistanceRendering"));
    if (DistanceRenderingComponent)
    {
        // Golf balls are important - use UI element settings for responsiveness
        DistanceRenderingComponent->RenderingSettings = USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings();
        DistanceRenderingComponent->ImportanceMultiplier = 2.0f; // Render at 2x closer distance
        DistanceRenderingComponent->bAutoRegisterWithManager = true;
    }
}

// Add this function to adjust rendering based on ball state
void ASGGolfBall::UpdateRenderingImportance()
{
    if (!DistanceRenderingComponent)
        return;
        
    // Active balls (currently being used) should have higher priority
    bool bIsActiveBall = (CurrentBallOwner != nullptr) || (GetVelocity().Size() > 10.0f);
    
    if (bIsActiveBall)
    {
        DistanceRenderingComponent->ImportanceMultiplier = 5.0f; // Very high priority
        DistanceRenderingComponent->bIgnoreDistanceRendering = true; // Always visible
    }
    else
    {
        DistanceRenderingComponent->ImportanceMultiplier = 2.0f; // Normal priority
        DistanceRenderingComponent->bIgnoreDistanceRendering = false;
    }
}

// Call this in state changes
void ASGGolfBall::ServerHitBall_Implementation(const FVector& HitDirection, float Power, AActor* HittingPlayer)
{
    // ... existing code ...
    
    // Update rendering importance when ball is hit
    UpdateRenderingImportance();
}
```

## Integration with Level/World Setup

Create a LevelScript or GameMode function to automatically setup distance rendering:

```cpp
// In your Level Blueprint or GameMode
UCLASS()
class SOCIALGOLF_API ASGGolfGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Rendering")
    void SetupCourseDistanceRendering();
    
protected:
    virtual void BeginPlay() override;
};

void ASGGolfGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    // Setup distance rendering after a short delay to ensure all actors are spawned
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &ASGGolfGameMode::SetupCourseDistanceRendering, 2.0f, false);
}

void ASGGolfGameMode::SetupCourseDistanceRendering()
{
    UWorld* World = GetWorld();
    if (!World)
        return;
        
    // Setup different object types with appropriate settings
    
    // Environment objects (trees, rocks, buildings)
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        this, 
        FName("Environment"), 
        USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings()
    );
    
    // Vegetation (grass, plants, foliage)
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        this, 
        FName("Vegetation"), 
        USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings()
    );
    
    // Course structures (tees, flags, bunkers)
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        this, 
        FName("CourseStructure"), 
        USGDistanceRenderingBlueprintLibrary::GetGolfCourseRenderingSettings()
    );
    
    // UI elements (signs, scoreboards)
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        this, 
        FName("UI"), 
        USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings()
    );
    
    UE_LOG(LogTemp, Log, TEXT("Distance rendering setup complete for golf course"));
}
```

## Player-Specific Adjustments

Integrate with player controller for dynamic adjustments:

```cpp
// In SGPlayerController.h
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
bool bUseAggressiveDistanceRendering = false;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
float RenderingQualityMultiplier = 1.0f;

// In SGPlayerController.cpp
void ASGPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    // Adjust rendering based on player preferences or hardware
    AdjustRenderingQuality();
}

void ASGPlayerController::AdjustRenderingQuality()
{
    USGDistanceRenderingManager* Manager = USGDistanceRenderingManager::Get(this);
    if (!Manager)
        return;
        
    FSGDistanceRenderingSettings GlobalSettings = Manager->GlobalSettings;
    
    // Adjust all distances based on quality multiplier
    GlobalSettings.VeryHighDetailDistance *= RenderingQualityMultiplier;
    GlobalSettings.HighDetailDistance *= RenderingQualityMultiplier;
    GlobalSettings.MediumDetailDistance *= RenderingQualityMultiplier;
    GlobalSettings.LowDetailDistance *= RenderingQualityMultiplier;
    GlobalSettings.VeryLowDetailDistance *= RenderingQualityMultiplier;
    GlobalSettings.CullingDistance *= RenderingQualityMultiplier;
    
    if (bUseAggressiveDistanceRendering)
    {
        // More aggressive culling for lower-end devices
        GlobalSettings.UpdateFrequency = 5.0f; // Slower updates
        GlobalSettings.MaxObjectsPerFrame = 25; // Fewer objects per frame
        
        // Reduce all distances by 50%
        GlobalSettings.VeryHighDetailDistance *= 0.5f;
        GlobalSettings.HighDetailDistance *= 0.5f;
        GlobalSettings.MediumDetailDistance *= 0.5f;
        GlobalSettings.LowDetailDistance *= 0.5f;
        GlobalSettings.VeryLowDetailDistance *= 0.5f;
        GlobalSettings.CullingDistance *= 0.7f; // Don't reduce culling as much
    }
    
    Manager->ApplyGlobalSettings(GlobalSettings);
}
```

## Blueprint Integration Example

For Blueprint users, create a simple setup function:

```cpp
// Blueprint Function Library addition
UCLASS()
class SOCIALGOLF_API USGGolfCourseBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Golf Course", meta = (CallInEditor = "true"))
    static void AutoSetupGolfCourseRendering(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, Category = "Golf Course")
    static void UpdateRenderingForGameMode(const UObject* WorldContext, bool bIsMultiplayer, int32 PlayerCount);
};

void USGGolfCourseBlueprintLibrary::AutoSetupGolfCourseRendering(const UObject* WorldContext)
{
    if (!WorldContext)
        return;
        
    // Automatically detect and setup common golf course objects
    
    // Find all StaticMeshActors and categorize them
    TArray<AActor*> AllStaticMeshActors;
    UGameplayStatics::GetAllActorsOfClass(WorldContext, AStaticMeshActor::StaticClass(), AllStaticMeshActors);
    
    for (AActor* Actor : AllStaticMeshActors)
    {
        if (!Actor)
            continue;
            
        FString ActorName = Actor->GetName().ToLower();
        FSGDistanceRenderingSettings Settings;
        
        // Categorize based on actor name patterns
        if (ActorName.Contains("tree") || ActorName.Contains("rock") || ActorName.Contains("building"))
        {
            Settings = USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings();
        }
        else if (ActorName.Contains("grass") || ActorName.Contains("plant") || ActorName.Contains("flower"))
        {
            Settings = USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings();
        }
        else if (ActorName.Contains("flag") || ActorName.Contains("tee") || ActorName.Contains("hole"))
        {
            Settings = USGDistanceRenderingBlueprintLibrary::GetGolfCourseRenderingSettings();
        }
        else if (ActorName.Contains("sign") || ActorName.Contains("marker") || ActorName.Contains("board"))
        {
            Settings = USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings();
        }
        else
        {
            // Default to environment settings
            Settings = USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings();
        }
        
        USGDistanceRenderingBlueprintLibrary::AddDistanceRenderingToActor(Actor, Settings);
    }
}

void USGGolfCourseBlueprintLibrary::UpdateRenderingForGameMode(const UObject* WorldContext, bool bIsMultiplayer, int32 PlayerCount)
{
    USGDistanceRenderingManager* Manager = USGDistanceRenderingManager::Get(WorldContext);
    if (!Manager)
        return;
        
    FSGDistanceRenderingSettings GlobalSettings = Manager->GlobalSettings;
    
    if (bIsMultiplayer)
    {
        // In multiplayer, we need to be more conservative
        float MultiplayerMultiplier = FMath::Clamp(1.0f - (PlayerCount * 0.1f), 0.5f, 1.0f);
        
        GlobalSettings.VeryHighDetailDistance *= MultiplayerMultiplier;
        GlobalSettings.HighDetailDistance *= MultiplayerMultiplier;
        GlobalSettings.MediumDetailDistance *= MultiplayerMultiplier;
        GlobalSettings.UpdateFrequency *= 0.8f; // Slower updates
        GlobalSettings.MaxObjectsPerFrame = FMath::Max(GlobalSettings.MaxObjectsPerFrame - (PlayerCount * 5), 10);
    }
    
    Manager->ApplyGlobalSettings(GlobalSettings);
}
```

## Performance Monitoring Integration

Add performance monitoring to your game:

```cpp
// In your HUD or UI class
UCLASS()
class SOCIALGOLF_API ASGPerformanceHUD : public AHUD
{
    GENERATED_BODY()
    
public:
    virtual void DrawHUD() override;
    
protected:
    UPROPERTY(EditAnywhere, Category = "Debug")
    bool bShowRenderingStats = false;
};

void ASGPerformanceHUD::DrawHUD()
{
    Super::DrawHUD();
    
    if (!bShowRenderingStats)
        return;
        
    FSGRenderingManagerStats Stats = USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingStats(this);
    
    FString StatsText = FString::Printf(
        TEXT("Distance Rendering Stats:\n")
        TEXT("Total Objects: %d\n")
        TEXT("Visible: %d\n")
        TEXT("Culled: %d\n")
        TEXT("Avg Distance: %.1fm\n")
        TEXT("Update Time: %.2fms"),
        Stats.TotalRegisteredObjects,
        Stats.VisibleObjects,
        Stats.CulledObjects,
        Stats.AverageDistance / 100.0f,
        Stats.UpdateDuration
    );
    
    DrawText(StatsText, FColor::Yellow, 10, 100);
}
```

This integration provides a complete solution for distance-based rendering in your SocialGolf project, with automatic setup, performance monitoring, and dynamic adjustments based on game state.