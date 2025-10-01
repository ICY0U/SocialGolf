#include "SGMaterialShowcase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "SGMaterialManager.h"
#include "../Core/SGFocusableComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

ASGMaterialShowcase::ASGMaterialShowcase()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = true;

    // Create root component
    RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = RootSceneComponent;

    // Create showcase mesh
    ShowcaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShowcaseMesh"));
    ShowcaseMesh->SetupAttachment(RootComponent);
    ShowcaseMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);

    // Create material manager
    MaterialManager = CreateDefaultSubobject<USGMaterialManager>(TEXT("MaterialManager"));

    // Add focusable component for scaling effect
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    if (FocusableComponent)
    {
        FocusableComponent->FocusScaleFactor = 1.05f; // Moderate scale for showcase objects
        FocusableComponent->ScaleAnimationDuration = 0.2f; // Quick animation
    }

    // Set up default cube mesh for showcase
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMesh.Succeeded())
    {
        ShowcaseMesh->SetStaticMesh(CubeMesh.Object);
        ShowcaseMesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f)); // Make it more visible
    }

    // Initialize settings
    bCycleUVPresetsOnly = true;
    bShowMaterialNameInWorld = true;
}

void ASGMaterialShowcase::BeginPlay()
{
    Super::BeginPlay();

    // Set up material manager to target our showcase mesh
    if (MaterialManager)
    {
        MaterialManager->TargetMeshComponent = ShowcaseMesh;
        MaterialManager->InitializeMaterialManager();
        
        // Bind to material change events
        MaterialManager->OnMaterialChanged.AddDynamic(this, &ASGMaterialShowcase::OnMaterialChanged);
    }

    UpdateInteractionText();
    
    UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: %s initialized"), *GetName());
}

void ASGMaterialShowcase::OnMaterialChanged(int32 MaterialIndex, UMaterialInterface* NewMaterial)
{
    UpdateInteractionText();
    UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: Material changed to %s"), 
           NewMaterial ? *NewMaterial->GetName() : TEXT("None"));
}

FText ASGMaterialShowcase::GetInteractionText_Implementation() const
{
    if (bShowMaterialNameInWorld && MaterialManager)
    {
        FString CurrentMaterial = MaterialManager->GetCurrentPresetName();
        FString MaterialType = MaterialManager->bUseUVPresets ? TEXT("UV") : TEXT("Standard");
        
        return FText::FromString(FString::Printf(TEXT("Press E to Change Material\nCurrent: %s (%s)"), 
                                                *CurrentMaterial, *MaterialType));
    }
    
    return InteractionText;
}

void ASGMaterialShowcase::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!MaterialManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGMaterialShowcase: No material manager assigned"));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: %s interacted by %s"), 
           *GetName(), InstigatorPawn ? *InstigatorPawn->GetName() : TEXT("Unknown"));

    CycleMaterial();
}

void ASGMaterialShowcase::CycleMaterial()
{
    if (!MaterialManager)
    {
        return;
    }

    if (bCycleUVPresetsOnly || MaterialManager->bUseUVPresets)
    {
        MaterialManager->NextUVPreset();
        UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: Cycled to next UV preset"));
    }
    else
    {
        MaterialManager->NextStandardPreset();
        UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: Cycled to next standard preset"));
    }
}

void ASGMaterialShowcase::ToggleMaterialType()
{
    if (MaterialManager && !bCycleUVPresetsOnly)
    {
        MaterialManager->TogglePresetType();
        UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: Toggled material type"));
    }
}

FString ASGMaterialShowcase::GetCurrentMaterialInfo() const
{
    if (!MaterialManager)
    {
        return TEXT("No Material Manager");
    }

    FString MaterialType = MaterialManager->bUseUVPresets ? TEXT("UV Preset") : TEXT("Standard Preset");
    FString MaterialName = MaterialManager->GetCurrentPresetName();
    int32 CurrentIndex = MaterialManager->bUseUVPresets ? 
        MaterialManager->CurrentUVPresetIndex : MaterialManager->CurrentStandardPresetIndex;

    return FString::Printf(TEXT("%s: %s (Index: %d)"), *MaterialType, *MaterialName, CurrentIndex);
}

void ASGMaterialShowcase::UpdateInteractionText()
{
    // This function can be called when materials change to update any UI or interaction text
    UE_LOG(LogTemp, Log, TEXT("SGMaterialShowcase: Material changed - %s"), *GetCurrentMaterialInfo());
}