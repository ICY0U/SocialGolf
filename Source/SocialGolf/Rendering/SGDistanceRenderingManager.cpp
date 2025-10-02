#include "SGDistanceRenderingManager.h"
#include "SGDistanceRenderingComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "TimerManager.h"
#include "Async/Async.h"

USGDistanceRenderingManager::USGDistanceRenderingManager()
{
    GlobalSettings = FSGDistanceRenderingSettings();
    ManagerUpdateInterval = 1.0f / ManagerUpdateFrequency;
}

void USGDistanceRenderingManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: Initializing Distance Rendering Manager"));
}

void USGDistanceRenderingManager::Deinitialize()
{
    // Clear timer
    if (GetWorld() && UpdateTimerHandle.IsValid())
    {
        GetWorld()->GetTimerManager().ClearTimer(UpdateTimerHandle);
    }

    // Clear all registered components
    RegisteredComponents.Empty();
    PendingChanges.Empty();
    CachedPlayerPositions.Empty();

    Super::Deinitialize();
}

bool USGDistanceRenderingManager::ShouldCreateSubsystem(UObject* Outer) const
{
    return Super::ShouldCreateSubsystem(Outer);
}

void USGDistanceRenderingManager::OnWorldBeginPlay(UWorld& InWorld)
{
    Super::OnWorldBeginPlay(InWorld);

    // Start the manager timer
    if (bEnableDistanceRendering)
    {
        InWorld.GetTimerManager().SetTimer(
            UpdateTimerHandle,
            this,
            &USGDistanceRenderingManager::TickManager,
            ManagerUpdateInterval,
            true
        );
    }

    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: World begin play - Manager active"));
}

USGDistanceRenderingManager* USGDistanceRenderingManager::Get(const UObject* WorldContext)
{
    if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull))
    {
        return World->GetSubsystem<USGDistanceRenderingManager>();
    }
    return nullptr;
}

void USGDistanceRenderingManager::RegisterObject(USGDistanceRenderingComponent* Component)
{
    if (!Component || !Component->GetOwner())
    {
        return;
    }

    // Check if already registered
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (WeakComp.Get() == Component)
        {
            return; // Already registered
        }
    }

    RegisteredComponents.Add(Component);
    
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGDistanceRenderingManager: Registered object %s (Total: %d)"), 
           *Component->GetOwner()->GetName(), RegisteredComponents.Num());
}

void USGDistanceRenderingManager::UnregisterObject(USGDistanceRenderingComponent* Component)
{
    if (!Component)
    {
        return;
    }

    int32 RemovedCount = RegisteredComponents.RemoveAll([Component](const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp)
    {
        return WeakComp.Get() == Component || !WeakComp.IsValid();
    });

    if (RemovedCount > 0)
    {
        UE_LOG(LogTemp, VeryVerbose, TEXT("SGDistanceRenderingManager: Unregistered object %s (Total: %d)"), 
               Component->GetOwner() ? *Component->GetOwner()->GetName() : TEXT("Unknown"), RegisteredComponents.Num());
    }
}

void USGDistanceRenderingManager::QueueRenderingLevelChange(USGDistanceRenderingComponent* Component, EDistanceRenderingLevel TargetLevel)
{
    if (!Component)
    {
        return;
    }

    // Remove any existing requests for this component
    PendingChanges.RemoveAll([Component](const FSGRenderingLevelChangeRequest& Request)
    {
        return Request.Component.Get() == Component || !Request.Component.IsValid();
    });

    // Add new request
    FSGRenderingLevelChangeRequest NewRequest(Component, TargetLevel);
    
    // Calculate priority based on distance and importance
    if (Component->GetOwner())
    {
        NewRequest.Priority = Component->RenderingData.DistanceToNearestPlayer * Component->ImportanceMultiplier;
    }

    PendingChanges.Add(NewRequest);
}

void USGDistanceRenderingManager::TickManager()
{
    if (!bEnableDistanceRendering || !GetWorld())
    {
        return;
    }

    double FrameStartTime = FPlatformTime::Seconds();

    // Update player positions
    UpdatePlayerPositions();

    // Process rendering queue
    ProcessRenderingQueue();

    // Update statistics
    UpdateStatsAndPerformance();

    // Performance tracking
    double FrameDuration = FPlatformTime::Seconds() - FrameStartTime;
    CurrentStats.UpdateDuration = FrameDuration * 1000.0f; // Convert to milliseconds
    CurrentStats.LastUpdateTime = GetWorld()->GetTimeSeconds();
}

void USGDistanceRenderingManager::UpdatePlayerPositions()
{
    CachedPlayerPositions.Empty();

    if (!GetWorld())
    {
        return;
    }

    for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
    {
        APlayerController* PC = Iterator->Get();
        if (PC && PC->GetPawn())
        {
            CachedPlayerPositions.Add(PC->GetPawn()->GetActorLocation());
        }
    }
}

void USGDistanceRenderingManager::ProcessRenderingQueue()
{
    if (PendingChanges.Num() == 0)
    {
        return;
    }

    // Sort by priority (lower distance = higher priority)
    PendingChanges.Sort([](const FSGRenderingLevelChangeRequest& A, const FSGRenderingLevelChangeRequest& B)
    {
        return A.Priority < B.Priority;
    });

    // Process up to MaxUpdatesPerFrame changes
    int32 ProcessedCount = 0;
    for (int32 i = PendingChanges.Num() - 1; i >= 0 && ProcessedCount < MaxUpdatesPerFrame; --i)
    {
        const FSGRenderingLevelChangeRequest& Request = PendingChanges[i];
        
        if (USGDistanceRenderingComponent* Component = Request.Component.Get())
        {
            Component->SetRenderingLevel(Request.TargetLevel);
            ProcessedCount++;
        }

        PendingChanges.RemoveAt(i);
    }
}

void USGDistanceRenderingManager::UpdateStatsAndPerformance()
{
    // Clean up invalid components
    RegisteredComponents.RemoveAll([](const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp)
    {
        return !WeakComp.IsValid();
    });

    // Update statistics
    CurrentStats.TotalRegisteredObjects = RegisteredComponents.Num();
    CurrentStats.VisibleObjects = 0;
    CurrentStats.CulledObjects = 0;
    
    float TotalDistance = 0.0f;
    int32 ValidObjects = 0;

    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            if (Component->IsVisible())
            {
                CurrentStats.VisibleObjects++;
            }
            
            if (Component->IsCulled())
            {
                CurrentStats.CulledObjects++;
            }

            TotalDistance += Component->GetDistanceToNearestPlayer();
            ValidObjects++;
        }
    }

    CurrentStats.AverageDistance = (ValidObjects > 0) ? (TotalDistance / ValidObjects) : 0.0f;

    // Broadcast performance update
    if (OnPerformanceUpdate.IsBound())
    {
        OnPerformanceUpdate.Broadcast(
            CurrentStats.TotalRegisteredObjects,
            CurrentStats.VisibleObjects,
            CurrentStats.AverageDistance
        );
    }
}

void USGDistanceRenderingManager::UpdateAllObjects()
{
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            Component->UpdateDistanceToPlayers();
        }
    }
}

void USGDistanceRenderingManager::SetGlobalRenderingEnabled(bool bEnabled)
{
    bEnableDistanceRendering = bEnabled;

    if (!GetWorld())
    {
        return;
    }

    if (bEnabled)
    {
        if (!UpdateTimerHandle.IsValid())
        {
            GetWorld()->GetTimerManager().SetTimer(
                UpdateTimerHandle,
                this,
                &USGDistanceRenderingManager::TickManager,
                ManagerUpdateInterval,
                true
            );
        }
    }
    else
    {
        if (UpdateTimerHandle.IsValid())
        {
            GetWorld()->GetTimerManager().ClearTimer(UpdateTimerHandle);
        }

        // Reset all objects to highest detail
        for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
        {
            if (USGDistanceRenderingComponent* Component = WeakComp.Get())
            {
                Component->SetRenderingLevel(EDistanceRenderingLevel::VeryHigh);
            }
        }
    }

    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: Distance rendering %s"), 
           bEnabled ? TEXT("enabled") : TEXT("disabled"));
}

void USGDistanceRenderingManager::ForceUpdateAllObjects()
{
    UpdatePlayerPositions();
    
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            Component->UpdateDistanceToPlayers();
            
            // Force immediate application
            EDistanceRenderingLevel TargetLevel = Component->CalculateTargetRenderingLevel(
                Component->GetDistanceToNearestPlayer()
            );
            Component->SetRenderingLevel(TargetLevel);
        }
    }

    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: Force updated %d objects"), RegisteredComponents.Num());
}

void USGDistanceRenderingManager::DumpRenderingStats()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Distance Rendering Manager Stats ==="));
    UE_LOG(LogTemp, Warning, TEXT("Total Objects: %d"), CurrentStats.TotalRegisteredObjects);
    UE_LOG(LogTemp, Warning, TEXT("Visible Objects: %d"), CurrentStats.VisibleObjects);
    UE_LOG(LogTemp, Warning, TEXT("Culled Objects: %d"), CurrentStats.CulledObjects);
    UE_LOG(LogTemp, Warning, TEXT("Average Distance: %.2f"), CurrentStats.AverageDistance);
    UE_LOG(LogTemp, Warning, TEXT("Update Duration: %.2fms"), CurrentStats.UpdateDuration);
    UE_LOG(LogTemp, Warning, TEXT("Pending Changes: %d"), PendingChanges.Num());
    UE_LOG(LogTemp, Warning, TEXT("Manager Enabled: %s"), bEnableDistanceRendering ? TEXT("Yes") : TEXT("No"));
    UE_LOG(LogTemp, Warning, TEXT("=========================================="));

    // Also log to screen if possible
    if (GEngine)
    {
        FString StatsMessage = FString::Printf(
            TEXT("Distance Rendering: %d total, %d visible, %d culled, %.1fm avg distance"),
            CurrentStats.TotalRegisteredObjects,
            CurrentStats.VisibleObjects,
            CurrentStats.CulledObjects,
            CurrentStats.AverageDistance / 100.0f // Convert to meters
        );
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, StatsMessage);
    }
}

TArray<USGDistanceRenderingComponent*> USGDistanceRenderingManager::GetRegisteredObjects() const
{
    TArray<USGDistanceRenderingComponent*> ValidComponents;
    
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            ValidComponents.Add(Component);
        }
    }
    
    return ValidComponents;
}

void USGDistanceRenderingManager::ApplyGlobalSettings(const FSGDistanceRenderingSettings& NewSettings)
{
    GlobalSettings = NewSettings;
    ManagerUpdateInterval = 1.0f / FMath::Max(GlobalSettings.UpdateFrequency, 1.0f);

    // Apply to all registered components
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            Component->RenderingSettings = NewSettings;
        }
    }

    // Restart timer with new interval
    if (GetWorld() && UpdateTimerHandle.IsValid())
    {
        GetWorld()->GetTimerManager().ClearTimer(UpdateTimerHandle);
        GetWorld()->GetTimerManager().SetTimer(
            UpdateTimerHandle,
            this,
            &USGDistanceRenderingManager::TickManager,
            ManagerUpdateInterval,
            true
        );
    }

    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: Applied new global settings"));
}

FVector USGDistanceRenderingManager::GetNearestPlayerPosition(const FVector& Location) const
{
    if (CachedPlayerPositions.Num() == 0)
    {
        return FVector::ZeroVector;
    }

    FVector NearestPosition = CachedPlayerPositions[0];
    float MinDistanceSquared = FVector::DistSquared(Location, NearestPosition);

    for (int32 i = 1; i < CachedPlayerPositions.Num(); ++i)
    {
        float DistanceSquared = FVector::DistSquared(Location, CachedPlayerPositions[i]);
        if (DistanceSquared < MinDistanceSquared)
        {
            MinDistanceSquared = DistanceSquared;
            NearestPosition = CachedPlayerPositions[i];
        }
    }

    return NearestPosition;
}

void USGDistanceRenderingManager::ToggleDistanceRendering()
{
    SetGlobalRenderingEnabled(!bEnableDistanceRendering);
}

void USGDistanceRenderingManager::ResetAllObjects()
{
    for (const TWeakObjectPtr<USGDistanceRenderingComponent>& WeakComp : RegisteredComponents)
    {
        if (USGDistanceRenderingComponent* Component = WeakComp.Get())
        {
            Component->SetRenderingLevel(EDistanceRenderingLevel::VeryHigh);
            Component->SetVisibility(true);
        }
    }

    UE_LOG(LogTemp, Log, TEXT("SGDistanceRenderingManager: Reset all objects to highest detail"));
}

void USGDistanceRenderingManager::ShowDebugInfo()
{
    DumpRenderingStats();
}