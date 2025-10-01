#include "SGInteractableActor.h"
#include "../Core/SGInteractable.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ASGInteractableActor::ASGInteractableActor()
{
    bReplicates = true;
    SetReplicateMovement(true);
    
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;
    Mesh->SetIsReplicated(true);
    
    // Set up proper collision for interaction
    Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    Mesh->SetCollisionProfileName(FName("BlockAll"));
    
    // Use a more visible mesh by default
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMesh.Succeeded())
    {
        Mesh->SetStaticMesh(CubeMesh.Object);
        Mesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }
}

FText ASGInteractableActor::GetInteractionText_Implementation() const
{
    return FText::FromString(TEXT("Press E to Interact"));
}

void ASGInteractableActor::Interact_Implementation(APawn* InstigatorPawn)
{
    UE_LOG(LogTemp, Warning, TEXT("INTERACTION SUCCESSFUL! %s interacted with %s"),
        *GetNameSafe(InstigatorPawn), *GetName());
        
    // Add some visual feedback - scale up briefly
    if (Mesh)
    {
        FVector CurrentScale = Mesh->GetRelativeScale3D();
        Mesh->SetRelativeScale3D(CurrentScale * 1.2f);
        
        // Reset scale after a short delay using a proper timer handle
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(
            TimerHandle,
            [this, CurrentScale]()
            {
                if (Mesh)
                {
                    Mesh->SetRelativeScale3D(CurrentScale);
                }
            },
            0.2f,
            false
        );
    }
}