#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "SGMaterialShowcase.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class USGMaterialManager;
class USGFocusableComponent;

UCLASS()
class SOCIALGOLF_API ASGMaterialShowcase : public AActor, public ISGInteractable
{
    GENERATED_BODY()
    
public:    
    ASGMaterialShowcase();

protected:
    virtual void BeginPlay() override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* RootSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* ShowcaseMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGMaterialManager* MaterialManager;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

public:
    // ISGInteractable interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Material showcase functionality
    UFUNCTION(BlueprintCallable, Category = "Material Showcase")
    void CycleMaterial();

    UFUNCTION(BlueprintCallable, Category = "Material Showcase")
    void ToggleMaterialType();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Material Showcase")
    FString GetCurrentMaterialInfo() const;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Settings")
    bool bCycleUVPresetsOnly = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Settings")
    bool bShowMaterialNameInWorld = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Settings")
    FText InteractionText = FText::FromString(TEXT("Press E to Change Material"));

private:
    UFUNCTION()
    void OnMaterialChanged(int32 MaterialIndex, UMaterialInterface* NewMaterial);

    void UpdateInteractionText();
};