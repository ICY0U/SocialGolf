#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SGInteractionComponent.generated.h"

class USGFocusableComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGInteractionComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USGInteractionComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Trace")
    float TraceDistance = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Trace")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Trace")
    bool bUseSphereTrace = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Trace", meta=(EditCondition="bUseSphereTrace"))
    float TraceRadius = 12.f;

    // Focus settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Focus")
    bool bEnableFocusDetection = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Focus")
    float FocusUpdateRate = 0.1f; // How often to check for focus changes

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug", Replicated)
    bool bDebugInteraction = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug")
    float DebugDuration = 5.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug")
    float DebugThickness = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug")
    FColor DebugLineColor = FColor::Cyan;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug")
    FColor DebugHitColor = FColor::Yellow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction|Debug")
    FColor DebugActorBoxColor = FColor::Green;

    UFUNCTION(BlueprintCallable, Category="Interaction")
    void TryInteract();

    // Focus functions
    UFUNCTION(BlueprintCallable, Category="Interaction|Focus")
    void StartFocusDetection();

    UFUNCTION(BlueprintCallable, Category="Interaction|Focus")
    void StopFocusDetection();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Server, Reliable)
    void ServerInteract(AActor* Target);

    UFUNCTION(Server, Unreliable)
    void ServerReportTrace(const FVector& Start, const FVector& End, bool bHit, FHitResult Hit);

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastDrawTrace(const FVector& Start, const FVector& End, bool bHit, FHitResult Hit);

    void LocalDrawTrace(const FVector& Start, const FVector& End, bool bHit, const FHitResult& Hit);

    // Focus detection
    UFUNCTION()
    void UpdateFocusDetection();

    void SetCurrentFocusedActor(AActor* NewFocusedActor);

private:
    // Focus tracking
    UPROPERTY()
    AActor* CurrentFocusedActor = nullptr;

    UPROPERTY()
    USGFocusableComponent* CurrentFocusedComponent = nullptr;

    FTimerHandle FocusDetectionTimer;

    AActor* TraceForFocusableActor();
};
