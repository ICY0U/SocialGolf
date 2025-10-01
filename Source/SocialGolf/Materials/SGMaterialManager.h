#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SGMaterialPreset.h"
#include "SGMaterialManager.generated.h"

class UStaticMeshComponent;
class UMaterialInterface;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMaterialChanged, int32, MaterialIndex, UMaterialInterface*, NewMaterial);

UCLASS(BlueprintType, ClassGroup=(SocialGolf), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGMaterialManager : public UActorComponent
{
    GENERATED_BODY()

public:
    USGMaterialManager();

    // Material preset reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Manager")
    USGMaterialPreset* MaterialPresetAsset;

    // Target mesh component to apply materials to
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Manager")
    UStaticMeshComponent* TargetMeshComponent;

    // Current material indices
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Manager", ReplicatedUsing = OnRep_CurrentUVPresetIndex)
    int32 CurrentUVPresetIndex = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Manager", ReplicatedUsing = OnRep_CurrentStandardPresetIndex)
    int32 CurrentStandardPresetIndex = 0;

    // Whether to use UV presets or standard presets
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Manager", ReplicatedUsing = OnRep_bUseUVPresets)
    bool bUseUVPresets = true;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Material Manager")
    FOnMaterialChanged OnMaterialChanged;

    // Functions
    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void SetUVPreset(int32 PresetIndex);

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void SetStandardPreset(int32 PresetIndex);

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void NextUVPreset();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void PreviousUVPreset();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void NextStandardPreset();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void PreviousStandardPreset();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void TogglePresetType();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    FString GetCurrentPresetName() const;

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void InitializeMaterialManager();

    UFUNCTION(BlueprintCallable, Category = "Material Manager")
    void ApplyCurrentMaterial();

protected:
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_CurrentUVPresetIndex();

    UFUNCTION()
    void OnRep_CurrentStandardPresetIndex();

    UFUNCTION()
    void OnRep_bUseUVPresets();

private:
    void ApplyMaterialToMesh(UMaterialInterface* Material);
    void LoadDefaultMaterialPresets();
};