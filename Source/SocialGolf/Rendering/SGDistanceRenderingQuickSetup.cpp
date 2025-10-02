#include "SGDistanceRenderingQuickSetup.h"
#include "SGDistanceRenderingBlueprintLibrary.h"
#include "Engine/World.h"

// Implementation of FSGDistanceRenderingQuickSetup static functions
void FSGDistanceRenderingQuickSetup::SetupGolfCourse(UWorld* World)
{
    if (!World)
        return;
        
    // Setup all common object types with a single call
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        World, FName("Environment"), 
        USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings()
    );
    
    USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(
        World, FName("Vegetation"), 
        USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings()
    );
}

void FSGDistanceRenderingQuickSetup::SetupPerformanceMode(UWorld* World)
{
    if (!World)
        return;
        
    // Create aggressive settings for better performance
    FSGDistanceRenderingSettings AggressiveSettings = 
        USGDistanceRenderingBlueprintLibrary::CreateDistanceRenderingSettings(
            300.0f,   // VeryHigh: 3m (reduced from 5m)
            800.0f,   // High: 8m (reduced from 15m)
            1500.0f,  // Medium: 15m (reduced from 30m)
            3000.0f,  // Low: 30m (reduced from 60m)
            5000.0f,  // VeryLow: 50m (reduced from 100m)
            8000.0f,  // Culling: 80m (reduced from 150m)
            5.0f,     // Update rate: 5 FPS (slower)
            true,     // Async updates
            20        // Max 20 objects per frame
        );
        
    USGDistanceRenderingBlueprintLibrary::ApplyGlobalDistanceRenderingSettings(World, AggressiveSettings);
}

void FSGDistanceRenderingQuickSetup::SetupQualityMode(UWorld* World)
{
    if (!World)
        return;
        
    // Create high-quality settings
    FSGDistanceRenderingSettings QualitySettings = 
        USGDistanceRenderingBlueprintLibrary::CreateDistanceRenderingSettings(
            1000.0f,  // VeryHigh: 10m (increased)
            2500.0f,  // High: 25m (increased)
            5000.0f,  // Medium: 50m (increased)
            10000.0f, // Low: 100m (increased)
            18000.0f, // VeryLow: 180m (increased)
            30000.0f, // Culling: 300m (increased)
            30.0f,    // Update rate: 30 FPS (faster)
            true,     // Async updates
            100       // Max 100 objects per frame
        );
        
    USGDistanceRenderingBlueprintLibrary::ApplyGlobalDistanceRenderingSettings(World, QualitySettings);
}

// Implementation of USGQuickDistanceRenderingComponent
USGQuickDistanceRenderingComponent::USGQuickDistanceRenderingComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    bAutoSetup = true;
    SetupType = EQuickSetupType::Environment;
}

void USGQuickDistanceRenderingComponent::BeginPlay()
{
    Super::BeginPlay();
    
    if (bAutoSetup)
    {
        SetupDistanceRendering();
    }
}

void USGQuickDistanceRenderingComponent::SetupDistanceRendering()
{
    if (!GetOwner())
        return;
        
    FSGDistanceRenderingSettings SettingsToUse;
    
    // Choose settings based on setup type
    switch (SetupType)
    {
        case EQuickSetupType::Environment:
            SettingsToUse = USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings();
            break;
        case EQuickSetupType::Vegetation:
            SettingsToUse = USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings();
            break;
        case EQuickSetupType::GolfCourse:
            SettingsToUse = USGDistanceRenderingBlueprintLibrary::GetGolfCourseRenderingSettings();
            break;
        case EQuickSetupType::UIElements:
            SettingsToUse = USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings();
            break;
        case EQuickSetupType::Custom:
            SettingsToUse = CustomSettings;
            break;
        default:
            SettingsToUse = USGDistanceRenderingBlueprintLibrary::GetDefaultDistanceRenderingSettings();
            break;
    }
    
    // Add the distance rendering component
    DistanceRenderingComponent = USGDistanceRenderingBlueprintLibrary::AddDistanceRenderingToActor(GetOwner(), SettingsToUse);
    
    UE_LOG(LogTemp, Log, TEXT("Quick Distance Rendering setup complete for %s"), *GetOwner()->GetName());
}