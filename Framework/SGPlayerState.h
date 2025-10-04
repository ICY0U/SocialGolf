#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SGPlayerState.generated.h"

UCLASS()
class SOCIALGOLF_API ASGPlayerState : public APlayerState
{
    GENERATED_BODY()
public:
    ASGPlayerState();

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Player")
    FText DisplayName;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};