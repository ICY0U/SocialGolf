#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/SGInteractable.h"
#include "Net/UnrealNetwork.h"
#include "SGBench.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class ASGCharacter;
class USGFocusableComponent;

UCLASS()
class SOCIALGOLF_API ASGBench : public AActor, public ISGInteractable
{
    GENERATED_BODY()
    
public:    
    ASGBench();

    // Interactable interface
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Bench functionality
    UFUNCTION(BlueprintCallable, Category = "Bench")
    void SitOnBench(ASGCharacter* Character);

    UFUNCTION(BlueprintCallable, Category = "Bench")
    void StandUpFromBench(ASGCharacter* Character);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Bench")
    bool IsBenchOccupied() const { return CurrentSittingCharacter != nullptr; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Bench")
    ASGCharacter* GetSittingCharacter() const { return CurrentSittingCharacter; }

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bench Settings")
    float SitHeight = 80.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bench Settings")
    float StandDistance = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bench Settings")
    FText SitText = FText::FromString(TEXT("Press E to Sit"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bench Settings")
    FText StandUpText = FText::FromString(TEXT("Press E to Stand Up"));

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bench Settings")
    FText OccupiedText = FText::FromString(TEXT("Bench is Occupied"));

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BenchMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* SitPosition;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

    UPROPERTY(ReplicatedUsing = OnRep_CurrentSittingCharacter)
    ASGCharacter* CurrentSittingCharacter;

    UFUNCTION()
    void OnRep_CurrentSittingCharacter();

    void SetCharacterSittingState(ASGCharacter* Character, bool bSitting);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
    // Helper functions for safe positioning
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Bench")
    FVector GetSitWorldPosition() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Bench")
    FRotator GetSitWorldRotation() const;
};