#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h"
#include "SGFocusableInterface.h"
#include "SGFocusableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocusChanged);

/**
 * Component that handles focus visual effects (like scaling) for interactable objects
 * Automatically scales the actor when focused and returns to normal when unfocused
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGFocusableComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USGFocusableComponent();

    // Focus control
    UFUNCTION(BlueprintCallable, Category = "Focus")
    void BeginFocus();

    UFUNCTION(BlueprintCallable, Category = "Focus")
    void EndFocus();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Focus")
    bool IsFocused() const { return bIsFocused; }

    // Configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Settings", meta = (ClampMin = "1.0", ClampMax = "2.0"))
    float FocusScaleFactor = 1.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Settings", meta = (ClampMin = "0.1", ClampMax = "1.0"))
    float ScaleAnimationDuration = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Settings")
    bool bEnableFocusEffect = true;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Focus Events")
    FOnFocusChanged OnBeginFocus;

    UPROPERTY(BlueprintAssignable, Category = "Focus Events")
    FOnFocusChanged OnEndFocus;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    class UTimelineComponent* ScaleTimeline;

    UPROPERTY()
    class UCurveFloat* ScaleCurve;

    UFUNCTION()
    void OnScaleTimelineUpdate(float Value);

    UFUNCTION()
    void OnScaleTimelineFinished();

    bool bIsFocused = false;
    FVector OriginalScale;
    FVector TargetScale;

    void CreateScaleCurve();
};