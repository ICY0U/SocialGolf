#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGFocusableInterface.generated.h"

UINTERFACE(BlueprintType, Blueprintable)
class SOCIALGOLF_API USGFocusableInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * Interface for objects that can be focused (hovered) by the player
 * Provides visual feedback like scaling when the player is looking at or near the object
 */
class SOCIALGOLF_API ISGFocusableInterface
{
    GENERATED_BODY()

public:
    /**
     * Called when the object begins being focused (hovered/looked at)
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Focus")
    void BeginFocus();
    virtual void BeginFocus_Implementation() {}

    /**
     * Called when the object stops being focused
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Focus")
    void EndFocus();
    virtual void EndFocus_Implementation() {}

    /**
     * Gets whether this object is currently focused
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Focus")
    bool IsFocused() const;
    virtual bool IsFocused_Implementation() const { return false; }

    /**
     * Gets the scale factor to apply when focused
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Focus")
    float GetFocusScaleFactor() const;
    virtual float GetFocusScaleFactor_Implementation() const { return 1.1f; }

    /**
     * Gets the duration for the scale animation
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Focus")
    float GetFocusScaleDuration() const;
    virtual float GetFocusScaleDuration_Implementation() const { return 0.2f; }
};