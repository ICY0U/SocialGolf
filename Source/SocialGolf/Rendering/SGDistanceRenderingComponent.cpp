#include "SGDistanceRenderingComponent.h"
#include "SGDistanceRenderingManager.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

USGDistanceRenderingComponent::USGDistanceRenderingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
    PrimaryComponentTick.TickGroup = TG_PostUpdateWork;

    // Initialize default settings
    RenderingSettings = FSGDistanceRenderingSettings();
    
    // Initialize rendering data
    RenderingData = FSGObjectRenderingData();
    RenderingData.Actor = nullptr; // Will be set in BeginPlay
    
    UpdateInterval = 1.0f / RenderingSettings.UpdateFrequency;
}

void USGDistanceRenderingComponent::BeginPlay()
{
    Super::BeginPlay();

    // Set up rendering data
    RenderingData.Actor = GetOwner();
    RenderingData.LastUpdateTime = GetWorld()->GetTimeSeconds();

    // Cache components for performance
    if (AActor* Owner = GetOwner())
    {
        Owner->GetComponents<UStaticMeshComponent>(CachedStaticMeshComponents);
        Owner->GetComponents<USkeletalMeshComponent>(CachedSkeletalMeshComponents);
        Owner->GetComponents<UInstancedStaticMeshComponent>(CachedInstancedMeshComponents);
    }

    // Register with manager
    if (bAutoRegisterWithManager)
    {
        RegisterWithManager();
    }

    // Initial distance calculation
    UpdateDistanceToPlayers();
}

void USGDistanceRenderingComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UnregisterFromManager();
    Super::EndPlay(EndPlayReason);
}

void USGDistanceRenderingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIgnoreDistanceRendering)
    {
        return;
    }

    float CurrentTime = GetWorld()->GetTimeSeconds();
    if (CurrentTime - LastUpdateTime >= UpdateInterval)
    {
        UpdateDistanceToPlayers();
        LastUpdateTime = CurrentTime;
    }
}

void USGDistanceRenderingComponent::UpdateDistanceToPlayers()
{
    if (!GetWorld() || bIgnoreDistanceRendering)
    {
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    float MinDistance = MAX_FLT;
    FVector OwnerLocation = Owner->GetActorLocation();

    // Find nearest player
    for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
    {
        APlayerController* PC = Iterator->Get();
        if (PC && PC->GetPawn())
        {
            FVector PlayerLocation = PC->GetPawn()->GetActorLocation();
            float Distance = FVector::Dist(OwnerLocation, PlayerLocation);
            if (Distance < MinDistance)
            {
                MinDistance = Distance;
            }
        }
    }

    // Update rendering data
    RenderingData.DistanceToNearestPlayer = (MinDistance == MAX_FLT) ? 0.0f : MinDistance;
    RenderingData.UpdateCount++;
    RenderingData.LastUpdateTime = GetWorld()->GetTimeSeconds();

    // Calculate target rendering level
    EDistanceRenderingLevel NewTargetLevel = CalculateTargetRenderingLevel(RenderingData.DistanceToNearestPlayer);
    
    if (NewTargetLevel != RenderingData.TargetRenderingLevel)
    {
        RenderingData.TargetRenderingLevel = NewTargetLevel;
        
        // Apply immediately or let manager handle it
        if (USGDistanceRenderingManager* Manager = USGDistanceRenderingManager::Get(GetWorld()))
        {
            Manager->QueueRenderingLevelChange(this, NewTargetLevel);
        }
        else
        {
            // Fallback - apply immediately
            SetRenderingLevel(NewTargetLevel);
        }
    }
}

EDistanceRenderingLevel USGDistanceRenderingComponent::CalculateTargetRenderingLevel(float Distance) const
{
    // Apply importance multiplier
    float AdjustedDistance = Distance / FMath::Max(ImportanceMultiplier, 0.1f);

    if (AdjustedDistance >= RenderingSettings.CullingDistance)
    {
        return EDistanceRenderingLevel::None;
    }
    else if (AdjustedDistance >= RenderingSettings.VeryLowDetailDistance)
    {
        return EDistanceRenderingLevel::VeryLow;
    }
    else if (AdjustedDistance >= RenderingSettings.LowDetailDistance)
    {
        return EDistanceRenderingLevel::Low;
    }
    else if (AdjustedDistance >= RenderingSettings.MediumDetailDistance)
    {
        return EDistanceRenderingLevel::Medium;
    }
    else if (AdjustedDistance >= RenderingSettings.HighDetailDistance)
    {
        return EDistanceRenderingLevel::High;
    }
    else if (AdjustedDistance >= RenderingSettings.VeryHighDetailDistance)
    {
        return EDistanceRenderingLevel::VeryHigh;
    }
    else
    {
        return EDistanceRenderingLevel::VeryHigh;
    }
}

void USGDistanceRenderingComponent::SetRenderingLevel(EDistanceRenderingLevel NewLevel)
{
    if (RenderingData.CurrentRenderingLevel == NewLevel)
    {
        return;
    }

    EDistanceRenderingLevel OldLevel = RenderingData.CurrentRenderingLevel;
    RenderingData.CurrentRenderingLevel = NewLevel;

    // Apply the rendering level
    ApplyRenderingLevel(NewLevel);

    // Broadcast event
    if (OnRenderingLevelChanged.IsBound())
    {
        OnRenderingLevelChanged.Broadcast(GetOwner(), OldLevel, NewLevel);
    }
}

void USGDistanceRenderingComponent::ApplyRenderingLevel(EDistanceRenderingLevel Level)
{
    bool bShouldBeVisible = Level != EDistanceRenderingLevel::None;
    SetVisibility(bShouldBeVisible);

    if (!bShouldBeVisible)
    {
        RenderingData.bIsCulled = true;
        RenderingData.bIsVisible = false;
        return;
    }

    RenderingData.bIsCulled = false;
    RenderingData.bIsVisible = true;

    // Apply LOD to components
    ApplyLODToComponents(Level);
}

void USGDistanceRenderingComponent::ApplyLODToComponents(EDistanceRenderingLevel Level)
{
    int32 LODLevel = 0;
    
    // Convert rendering level to LOD index
    switch (Level)
    {
        case EDistanceRenderingLevel::VeryHigh:
            LODLevel = 0;
            break;
        case EDistanceRenderingLevel::High:
            LODLevel = 1;
            break;
        case EDistanceRenderingLevel::Medium:
            LODLevel = 2;
            break;
        case EDistanceRenderingLevel::Low:
            LODLevel = 3;
            break;
        case EDistanceRenderingLevel::VeryLow:
            LODLevel = 4;
            break;
        default:
            LODLevel = 0;
            break;
    }

    // Apply to static mesh components
    for (UStaticMeshComponent* MeshComp : CachedStaticMeshComponents)
    {
        if (MeshComp && MeshComp->GetStaticMesh())
        {
            // Force LOD level
            MeshComp->SetForcedLodModel(LODLevel + 1); // UE uses 1-based indexing for forced LOD
        }
    }

    // Apply to skeletal mesh components
    for (USkeletalMeshComponent* SkelComp : CachedSkeletalMeshComponents)
    {
        if (SkelComp)
        {
            // Set minimum LOD using the new API
            SkelComp->OverrideMinLOD(LODLevel);
        }
    }

    // Apply to instanced mesh components
    for (UInstancedStaticMeshComponent* InstancedComp : CachedInstancedMeshComponents)
    {
        if (InstancedComp && InstancedComp->GetStaticMesh())
        {
            // For instanced meshes, we might want to reduce instance count or disable entirely
            bool bVisible = Level >= EDistanceRenderingLevel::Low;
            InstancedComp->SetVisibility(bVisible);
        }
    }
}

void USGDistanceRenderingComponent::SetVisibility(bool bVisible)
{
    if (AActor* Owner = GetOwner())
    {
        Owner->SetActorHiddenInGame(!bVisible);
        
        // Also set on root component if it exists
        if (USceneComponent* RootComp = Owner->GetRootComponent())
        {
            RootComp->SetVisibility(bVisible, true); // Propagate to children
        }
    }

    RenderingData.bIsVisible = bVisible;
}

void USGDistanceRenderingComponent::RegisterWithManager()
{
    if (bIsRegisteredWithManager || !GetWorld())
    {
        return;
    }

    if (USGDistanceRenderingManager* Manager = USGDistanceRenderingManager::Get(GetWorld()))
    {
        Manager->RegisterObject(this);
        bIsRegisteredWithManager = true;
    }
}

void USGDistanceRenderingComponent::UnregisterFromManager()
{
    if (!bIsRegisteredWithManager || !GetWorld())
    {
        return;
    }

    if (USGDistanceRenderingManager* Manager = USGDistanceRenderingManager::Get(GetWorld()))
    {
        Manager->UnregisterObject(this);
        bIsRegisteredWithManager = false;
    }
}

void USGDistanceRenderingComponent::GetAffectedComponents(TArray<UPrimitiveComponent*>& OutComponents)
{
    OutComponents.Reset();
    
    if (AActor* Owner = GetOwner())
    {
        TArray<UPrimitiveComponent*> PrimitiveComponents;
        Owner->GetComponents<UPrimitiveComponent>(PrimitiveComponents);
        OutComponents = PrimitiveComponents;
    }
}