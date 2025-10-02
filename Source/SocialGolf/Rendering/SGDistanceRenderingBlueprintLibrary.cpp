#include "SGDistanceRenderingBlueprintLibrary.h"
#include "SGDistanceRenderingManager.h"
#include "SGDistanceRenderingComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

USGDistanceRenderingManager* USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingManager(const UObject* WorldContext)
{
    return USGDistanceRenderingManager::Get(WorldContext);
}

USGDistanceRenderingComponent* USGDistanceRenderingBlueprintLibrary::AddDistanceRenderingToActor(AActor* Actor, const FSGDistanceRenderingSettings& Settings)
{
    if (!Actor)
    {
        return nullptr;
    }

    // Check if component already exists
    USGDistanceRenderingComponent* ExistingComponent = Actor->FindComponentByClass<USGDistanceRenderingComponent>();
    if (ExistingComponent)
    {
        ExistingComponent->RenderingSettings = Settings;
        return ExistingComponent;
    }

    // Create new component
    USGDistanceRenderingComponent* NewComponent = NewObject<USGDistanceRenderingComponent>(Actor);
    if (NewComponent)
    {
        NewComponent->RenderingSettings = Settings;
        Actor->AddInstanceComponent(NewComponent);
        NewComponent->RegisterComponent();
    }

    return NewComponent;
}

void USGDistanceRenderingBlueprintLibrary::RemoveDistanceRenderingFromActor(AActor* Actor)
{
    if (!Actor)
    {
        return;
    }

    USGDistanceRenderingComponent* Component = Actor->FindComponentByClass<USGDistanceRenderingComponent>();
    if (Component)
    {
        Component->DestroyComponent();
    }
}

USGDistanceRenderingComponent* USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingComponent(AActor* Actor)
{
    if (!Actor)
    {
        return nullptr;
    }

    return Actor->FindComponentByClass<USGDistanceRenderingComponent>();
}

void USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActors(const TArray<AActor*>& Actors, const FSGDistanceRenderingSettings& Settings)
{
    for (AActor* Actor : Actors)
    {
        AddDistanceRenderingToActor(Actor, Settings);
    }
}

void USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(const UObject* WorldContext, FName Tag, const FSGDistanceRenderingSettings& Settings)
{
    if (!WorldContext)
    {
        return;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(WorldContext, Tag, FoundActors);
    
    SetupDistanceRenderingForActors(FoundActors, Settings);
}

void USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsOfClass(const UObject* WorldContext, TSubclassOf<AActor> ActorClass, const FSGDistanceRenderingSettings& Settings)
{
    if (!WorldContext || !ActorClass)
    {
        return;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, FoundActors);
    
    SetupDistanceRenderingForActors(FoundActors, Settings);
}

void USGDistanceRenderingBlueprintLibrary::ApplyGlobalDistanceRenderingSettings(const UObject* WorldContext, const FSGDistanceRenderingSettings& Settings)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    if (Manager)
    {
        Manager->ApplyGlobalSettings(Settings);
    }
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::GetDefaultDistanceRenderingSettings()
{
    return FSGDistanceRenderingSettings();
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::CreateDistanceRenderingSettings(
    float VeryHighDetailDistance,
    float HighDetailDistance,
    float MediumDetailDistance,
    float LowDetailDistance,
    float VeryLowDetailDistance,
    float CullingDistance,
    float UpdateFrequency,
    bool bUseAsyncUpdates,
    int32 MaxObjectsPerFrame)
{
    FSGDistanceRenderingSettings Settings;
    Settings.VeryHighDetailDistance = VeryHighDetailDistance;
    Settings.HighDetailDistance = HighDetailDistance;
    Settings.MediumDetailDistance = MediumDetailDistance;
    Settings.LowDetailDistance = LowDetailDistance;
    Settings.VeryLowDetailDistance = VeryLowDetailDistance;
    Settings.CullingDistance = CullingDistance;
    Settings.UpdateFrequency = UpdateFrequency;
    Settings.bUseAsyncUpdates = bUseAsyncUpdates;
    Settings.MaxObjectsPerFrame = MaxObjectsPerFrame;
    return Settings;
}

void USGDistanceRenderingBlueprintLibrary::EnableDistanceRendering(const UObject* WorldContext, bool bEnable)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    if (Manager)
    {
        Manager->SetGlobalRenderingEnabled(bEnable);
    }
}

bool USGDistanceRenderingBlueprintLibrary::IsDistanceRenderingEnabled(const UObject* WorldContext)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    return Manager ? Manager->bEnableDistanceRendering : false;
}

void USGDistanceRenderingBlueprintLibrary::ForceUpdateAllDistanceRendering(const UObject* WorldContext)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    if (Manager)
    {
        Manager->ForceUpdateAllObjects();
    }
}

void USGDistanceRenderingBlueprintLibrary::ShowDistanceRenderingStats(const UObject* WorldContext)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    if (Manager)
    {
        Manager->DumpRenderingStats();
    }
}

FSGRenderingManagerStats USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingStats(const UObject* WorldContext)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    return Manager ? Manager->GetStats() : FSGRenderingManagerStats();
}

void USGDistanceRenderingBlueprintLibrary::ToggleDistanceRenderingDebug(const UObject* WorldContext)
{
    USGDistanceRenderingManager* Manager = GetDistanceRenderingManager(WorldContext);
    if (Manager)
    {
        Manager->ToggleDistanceRendering();
    }
}

EDistanceRenderingLevel USGDistanceRenderingBlueprintLibrary::CalculateRenderingLevelForDistance(float Distance, const FSGDistanceRenderingSettings& Settings, float ImportanceMultiplier)
{
    float AdjustedDistance = Distance / FMath::Max(ImportanceMultiplier, 0.1f);

    if (AdjustedDistance >= Settings.CullingDistance)
    {
        return EDistanceRenderingLevel::None;
    }
    else if (AdjustedDistance >= Settings.VeryLowDetailDistance)
    {
        return EDistanceRenderingLevel::VeryLow;
    }
    else if (AdjustedDistance >= Settings.LowDetailDistance)
    {
        return EDistanceRenderingLevel::Low;
    }
    else if (AdjustedDistance >= Settings.MediumDetailDistance)
    {
        return EDistanceRenderingLevel::Medium;
    }
    else if (AdjustedDistance >= Settings.HighDetailDistance)
    {
        return EDistanceRenderingLevel::High;
    }
    else
    {
        return EDistanceRenderingLevel::VeryHigh;
    }
}

float USGDistanceRenderingBlueprintLibrary::GetDistanceBetweenActors(AActor* ActorA, AActor* ActorB)
{
    if (!ActorA || !ActorB)
    {
        return 0.0f;
    }

    return FVector::Dist(ActorA->GetActorLocation(), ActorB->GetActorLocation());
}

float USGDistanceRenderingBlueprintLibrary::GetDistanceToNearestPlayer(const UObject* WorldContext, const FVector& Location)
{
    if (!WorldContext)
    {
        return 0.0f;
    }

    const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
    if (!World)
    {
        return 0.0f;
    }

    float MinDistance = MAX_FLT;

    for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator)
    {
        APlayerController* PC = Iterator->Get();
        if (PC && PC->GetPawn())
        {
            FVector PlayerLocation = PC->GetPawn()->GetActorLocation();
            float Distance = FVector::Dist(Location, PlayerLocation);
            if (Distance < MinDistance)
            {
                MinDistance = Distance;
            }
        }
    }

    return (MinDistance == MAX_FLT) ? 0.0f : MinDistance;
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::GetGolfCourseRenderingSettings()
{
    FSGDistanceRenderingSettings Settings;
    
    // Golf course settings - larger distances due to open environments
    Settings.VeryHighDetailDistance = 1000.0f;   // 10 meters
    Settings.HighDetailDistance = 3000.0f;       // 30 meters
    Settings.MediumDetailDistance = 6000.0f;     // 60 meters
    Settings.LowDetailDistance = 12000.0f;       // 120 meters
    Settings.VeryLowDetailDistance = 20000.0f;   // 200 meters
    Settings.CullingDistance = 30000.0f;         // 300 meters
    Settings.UpdateFrequency = 15.0f;            // 15 FPS for course objects
    Settings.bUseAsyncUpdates = true;
    Settings.MaxObjectsPerFrame = 30;
    
    return Settings;
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings()
{
    FSGDistanceRenderingSettings Settings;
    
    // Environment objects (trees, rocks, buildings)
    Settings.VeryHighDetailDistance = 800.0f;    // 8 meters
    Settings.HighDetailDistance = 2000.0f;       // 20 meters
    Settings.MediumDetailDistance = 5000.0f;     // 50 meters
    Settings.LowDetailDistance = 10000.0f;       // 100 meters
    Settings.VeryLowDetailDistance = 15000.0f;   // 150 meters
    Settings.CullingDistance = 25000.0f;         // 250 meters
    Settings.UpdateFrequency = 10.0f;
    Settings.bUseAsyncUpdates = true;
    Settings.MaxObjectsPerFrame = 40;
    
    return Settings;
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings()
{
    FSGDistanceRenderingSettings Settings;
    
    // Vegetation (grass, small plants, flowers)
    Settings.VeryHighDetailDistance = 300.0f;    // 3 meters
    Settings.HighDetailDistance = 800.0f;        // 8 meters
    Settings.MediumDetailDistance = 1500.0f;     // 15 meters
    Settings.LowDetailDistance = 3000.0f;        // 30 meters
    Settings.VeryLowDetailDistance = 5000.0f;    // 50 meters
    Settings.CullingDistance = 8000.0f;          // 80 meters
    Settings.UpdateFrequency = 8.0f;             // Lower update rate for vegetation
    Settings.bUseAsyncUpdates = true;
    Settings.MaxObjectsPerFrame = 60;            // More vegetation objects
    
    return Settings;
}

FSGDistanceRenderingSettings USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings()
{
    FSGDistanceRenderingSettings Settings;
    
    // UI elements, signs, markers
    Settings.VeryHighDetailDistance = 500.0f;    // 5 meters
    Settings.HighDetailDistance = 1200.0f;       // 12 meters
    Settings.MediumDetailDistance = 2500.0f;     // 25 meters
    Settings.LowDetailDistance = 5000.0f;        // 50 meters
    Settings.VeryLowDetailDistance = 8000.0f;    // 80 meters
    Settings.CullingDistance = 12000.0f;         // 120 meters
    Settings.UpdateFrequency = 20.0f;            // Higher update rate for UI elements
    Settings.bUseAsyncUpdates = false;           // UI should be responsive
    Settings.MaxObjectsPerFrame = 20;
    
    return Settings;
}