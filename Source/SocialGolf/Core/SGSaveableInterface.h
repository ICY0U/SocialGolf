#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGSaveableInterface.generated.h"

struct FSGSaveData;

UINTERFACE(BlueprintType)
class USGSaveableInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * Interface for objects that can be saved/loaded
 * Implement this interface on any Actor or Component that needs persistence
 */
class SOCIALGOLF_API ISGSaveableInterface
{
    GENERATED_BODY()

public:
    /**
     * Called when the object should save its data
     * @param SaveData The save data container to write to
     * @return true if save was successful
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Save System")
    bool SaveData(FSGSaveData& SaveData) const;
    virtual bool SaveData_Implementation(FSGSaveData& SaveData) const { return true; }

    /**
     * Called when the object should load its data
     * @param SaveData The save data container to read from
     * @return true if load was successful
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Save System")
    bool LoadData(const FSGSaveData& SaveData);
    virtual bool LoadData_Implementation(const FSGSaveData& SaveData) { return true; }

    /**
     * Get a unique identifier for this saveable object
     * This should be consistent across game sessions
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Save System")
    FString GetSaveID() const;
    virtual FString GetSaveID_Implementation() const { return TEXT("DefaultSaveID"); }

    /**
     * Get the priority for save/load operations (higher = saved/loaded first)
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Save System")
    int32 GetSavePriority() const;
    virtual int32 GetSavePriority_Implementation() const { return 0; }
};