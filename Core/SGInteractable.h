#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGInteractable.generated.h"

UINTERFACE(BlueprintType)
class USGInteractable : public UInterface
{
    GENERATED_BODY()
};

class SOCIALGOLF_API ISGInteractable
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Interact")
    FText GetInteractionText() const;
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Interact")
    void Interact(APawn* InstigatorPawn);
};