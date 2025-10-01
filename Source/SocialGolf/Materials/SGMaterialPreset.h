#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Materials/MaterialInterface.h"
#include "SGMaterialPreset.generated.h"

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGMaterialPresetInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Preset")
    FString PresetName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Preset")
    UMaterialInterface* Material;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Preset")
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Preset")
    bool bIsUVPreset = true;

    FSGMaterialPresetInfo()
    {
        PresetName = TEXT("Default");
        Material = nullptr;
        Description = TEXT("");
        bIsUVPreset = true;
    }
};

UCLASS(BlueprintType)
class SOCIALGOLF_API USGMaterialPreset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Presets")
    TArray<FSGMaterialPresetInfo> UVPresets;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Presets")
    TArray<FSGMaterialPresetInfo> StandardPresets;

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    UMaterialInterface* GetUVPresetMaterial(int32 PresetIndex) const;

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    UMaterialInterface* GetStandardPresetMaterial(int32 PresetIndex) const;

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    int32 GetUVPresetCount() const { return UVPresets.Num(); }

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    int32 GetStandardPresetCount() const { return StandardPresets.Num(); }

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    FString GetUVPresetName(int32 PresetIndex) const;

    UFUNCTION(BlueprintCallable, Category = "Material Presets")
    FString GetStandardPresetName(int32 PresetIndex) const;
};