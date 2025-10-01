#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Core/SGInteractable.h"
#include "SGGolfTee.generated.h"

class ASGGolfBall;
class ASGCharacter;

UCLASS()
class SOCIALGOLF_API ASGGolfTee : public AActor, public ISGInteractable
{
    GENERATED_BODY()
    
public:    
    ASGGolfTee();

protected:
    virtual void BeginPlay() override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* TeeMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* InteractionSphere;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

    // Golf Tee Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Tee")
    float InteractionDistance = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Tee")
    bool bHasBall = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Tee")
    ASGGolfBall* CurrentBall = nullptr;

public:
    // ISGInteractable implementation
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Golf Tee Functions
    UFUNCTION(BlueprintCallable, Category = "Golf Tee")
    void SpawnGolfBall();

    UFUNCTION(BlueprintCallable, Category = "Golf Tee")
    void RemoveBall();

    UFUNCTION(BlueprintCallable, Category = "Golf Tee")
    bool HasBall() const { return bHasBall && CurrentBall != nullptr; }

    UFUNCTION(BlueprintCallable, Category = "Golf Tee")
    ASGGolfBall* GetBall() const { return CurrentBall; }
};