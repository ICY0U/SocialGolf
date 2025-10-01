#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "SGInteractableActor.generated.h"
class UStaticMeshComponent;
UCLASS()
class SOCIALGOLF_API ASGInteractableActor : public AActor, public ISGInteractable
{
    GENERATED_BODY()
public:
    ASGInteractableActor();
protected:
    UPROPERTY(VisibleAnywhere) UStaticMeshComponent* Mesh;
public:
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;
};