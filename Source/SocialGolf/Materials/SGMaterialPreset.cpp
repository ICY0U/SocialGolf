#include "SGMaterialPreset.h"
#include "Engine/Engine.h"

UMaterialInterface* USGMaterialPreset::GetUVPresetMaterial(int32 PresetIndex) const
{
    if (UVPresets.IsValidIndex(PresetIndex))
    {
        return UVPresets[PresetIndex].Material;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGMaterialPreset: Invalid UV preset index %d"), PresetIndex);
    return nullptr;
}

UMaterialInterface* USGMaterialPreset::GetStandardPresetMaterial(int32 PresetIndex) const
{
    if (StandardPresets.IsValidIndex(PresetIndex))
    {
        return StandardPresets[PresetIndex].Material;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGMaterialPreset: Invalid standard preset index %d"), PresetIndex);
    return nullptr;
}

FString USGMaterialPreset::GetUVPresetName(int32 PresetIndex) const
{
    if (UVPresets.IsValidIndex(PresetIndex))
    {
        return UVPresets[PresetIndex].PresetName;
    }
    
    return TEXT("Invalid Preset");
}

FString USGMaterialPreset::GetStandardPresetName(int32 PresetIndex) const
{
    if (StandardPresets.IsValidIndex(PresetIndex))
    {
        return StandardPresets[PresetIndex].PresetName;
    }
    
    return TEXT("Invalid Preset");
}