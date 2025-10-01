#include "SGMaterialManager.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

USGMaterialManager::USGMaterialManager()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
    
    CurrentUVPresetIndex = 0;
    CurrentStandardPresetIndex = 0;
    bUseUVPresets = true;
    MaterialPresetAsset = nullptr;
    TargetMeshComponent = nullptr;
}

void USGMaterialManager::BeginPlay()
{
    Super::BeginPlay();
    
    InitializeMaterialManager();
}

void USGMaterialManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USGMaterialManager, CurrentUVPresetIndex);
    DOREPLIFETIME(USGMaterialManager, CurrentStandardPresetIndex);
    DOREPLIFETIME(USGMaterialManager, bUseUVPresets);
}

void USGMaterialManager::InitializeMaterialManager()
{
    // Try to find target mesh component if not set
    if (!TargetMeshComponent)
    {
        TargetMeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Initializing - TargetMeshComponent: %s"), 
           TargetMeshComponent ? *TargetMeshComponent->GetName() : TEXT("NULL"));
    
    // If material preset asset wasn't loaded in constructor, try alternative loading method
    if (!MaterialPresetAsset)
    {
        LoadDefaultMaterialPresets();
    }
    
    if (MaterialPresetAsset)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: MaterialPresetAsset found: %s"), *MaterialPresetAsset->GetName());
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: UV Presets: %d, Standard Presets: %d"), 
               MaterialPresetAsset->GetUVPresetCount(), MaterialPresetAsset->GetStandardPresetCount());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: No MaterialPresetAsset found! You must assign one manually."));
    }
    
    // Apply initial material
    ApplyCurrentMaterial();
    
    UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: Initialized for %s"), *GetOwner()->GetName());
}

void USGMaterialManager::LoadDefaultMaterialPresets()
{
    // Only try to load if no asset is already set
    if (MaterialPresetAsset)
    {
        return;
    }
    
    // Try to load the default material preset asset using LoadObject (safe to use outside constructor)
    // Note: This path assumes you've created the data asset - it's optional
    MaterialPresetAsset = LoadObject<USGMaterialPreset>(nullptr, TEXT("/Game/SocialGolf/Materials/DA_DefaultMaterialPresets"));
    
    if (MaterialPresetAsset)
    {
        UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: Loaded default material presets using LoadObject"));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: No default material presets found. You can manually assign MaterialPresetAsset in the component details."));
    }
}

void USGMaterialManager::SetUVPreset(int32 PresetIndex)
{
    if (!MaterialPresetAsset)
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: No material preset asset assigned"));
        return;
    }
    
    int32 PresetCount = MaterialPresetAsset->GetUVPresetCount();
    UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: SetUVPreset called with index %d, total presets: %d"), 
           PresetIndex, PresetCount);
    
    if (PresetIndex >= 0 && PresetIndex < PresetCount)
    {
        CurrentUVPresetIndex = PresetIndex;
        bUseUVPresets = true;
        
        ApplyCurrentMaterial();
        
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Set UV preset to %d"), PresetIndex);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: Invalid UV preset index %d (valid range: 0-%d)"), 
               PresetIndex, PresetCount - 1);
    }
}

void USGMaterialManager::SetStandardPreset(int32 PresetIndex)
{
    if (!MaterialPresetAsset)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: No material preset asset assigned"));
        return;
    }
    
    if (PresetIndex >= 0 && PresetIndex < MaterialPresetAsset->GetStandardPresetCount())
    {
        CurrentStandardPresetIndex = PresetIndex;
        bUseUVPresets = false;
        
        ApplyCurrentMaterial();
        
        UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: Set standard preset to %d"), PresetIndex);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Invalid standard preset index %d"), PresetIndex);
    }
}

void USGMaterialManager::NextUVPreset()
{
    if (!MaterialPresetAsset) 
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: No MaterialPresetAsset assigned!"));
        return;
    }
    
    int32 PresetCount = MaterialPresetAsset->GetUVPresetCount();
    if (PresetCount == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: MaterialPresetAsset has 0 UV presets!"));
        return;
    }
    
    int32 NextIndex = (CurrentUVPresetIndex + 1) % PresetCount;
    UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Cycling UV preset from %d to %d (total: %d)"), 
           CurrentUVPresetIndex, NextIndex, PresetCount);
    
    SetUVPreset(NextIndex);
}

void USGMaterialManager::PreviousUVPreset()
{
    if (!MaterialPresetAsset) return;
    
    int32 PrevIndex = (CurrentUVPresetIndex - 1 + MaterialPresetAsset->GetUVPresetCount()) % MaterialPresetAsset->GetUVPresetCount();
    SetUVPreset(PrevIndex);
}

void USGMaterialManager::NextStandardPreset()
{
    if (!MaterialPresetAsset) return;
    
    int32 NextIndex = (CurrentStandardPresetIndex + 1) % MaterialPresetAsset->GetStandardPresetCount();
    SetStandardPreset(NextIndex);
}

void USGMaterialManager::PreviousStandardPreset()
{
    if (!MaterialPresetAsset) return;
    
    int32 PrevIndex = (CurrentStandardPresetIndex - 1 + MaterialPresetAsset->GetStandardPresetCount()) % MaterialPresetAsset->GetStandardPresetCount();
    SetStandardPreset(PrevIndex);
}

void USGMaterialManager::TogglePresetType()
{
    bUseUVPresets = !bUseUVPresets;
    ApplyCurrentMaterial();
    
    UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: Toggled to %s presets"), 
           bUseUVPresets ? TEXT("UV") : TEXT("Standard"));
}

FString USGMaterialManager::GetCurrentPresetName() const
{
    if (!MaterialPresetAsset)
    {
        return TEXT("No Preset Asset");
    }
    
    if (bUseUVPresets)
    {
        return MaterialPresetAsset->GetUVPresetName(CurrentUVPresetIndex);
    }
    else
    {
        return MaterialPresetAsset->GetStandardPresetName(CurrentStandardPresetIndex);
    }
}

void USGMaterialManager::ApplyCurrentMaterial()
{
    if (!MaterialPresetAsset || !TargetMeshComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: ApplyCurrentMaterial failed - MaterialPresetAsset: %s, TargetMeshComponent: %s"),
               MaterialPresetAsset ? TEXT("Valid") : TEXT("NULL"),
               TargetMeshComponent ? TEXT("Valid") : TEXT("NULL"));
        return;
    }
    
    UMaterialInterface* MaterialToApply = nullptr;
    
    if (bUseUVPresets)
    {
        MaterialToApply = MaterialPresetAsset->GetUVPresetMaterial(CurrentUVPresetIndex);
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Getting UV preset material at index %d: %s"), 
               CurrentUVPresetIndex, MaterialToApply ? *MaterialToApply->GetName() : TEXT("NULL"));
    }
    else
    {
        MaterialToApply = MaterialPresetAsset->GetStandardPresetMaterial(CurrentStandardPresetIndex);
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialManager: Getting standard preset material at index %d: %s"), 
               CurrentStandardPresetIndex, MaterialToApply ? *MaterialToApply->GetName() : TEXT("NULL"));
    }
    
    if (MaterialToApply)
    {
        ApplyMaterialToMesh(MaterialToApply);
        OnMaterialChanged.Broadcast(bUseUVPresets ? CurrentUVPresetIndex : CurrentStandardPresetIndex, MaterialToApply);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGMaterialManager: No material found to apply!"));
    }
}

void USGMaterialManager::ApplyMaterialToMesh(UMaterialInterface* Material)
{
    if (!TargetMeshComponent || !Material)
    {
        return;
    }
    
    // Apply material to all material slots
    for (int32 i = 0; i < TargetMeshComponent->GetNumMaterials(); ++i)
    {
        TargetMeshComponent->SetMaterial(i, Material);
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGMaterialManager: Applied material %s to %s"), 
           *Material->GetName(), *TargetMeshComponent->GetOwner()->GetName());
}

void USGMaterialManager::OnRep_CurrentUVPresetIndex()
{
    if (bUseUVPresets)
    {
        ApplyCurrentMaterial();
    }
}

void USGMaterialManager::OnRep_CurrentStandardPresetIndex()
{
    if (!bUseUVPresets)
    {
        ApplyCurrentMaterial();
    }
}

void USGMaterialManager::OnRep_bUseUVPresets()
{
    ApplyCurrentMaterial();
}