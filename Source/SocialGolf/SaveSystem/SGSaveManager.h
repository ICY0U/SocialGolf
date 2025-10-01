#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "SGSaveGame.h"
#include "SGSaveManager.generated.h"

class ISGSaveableInterface;

// Delegates for save/load events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveComplete, bool, bSuccess, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadComplete, bool, bSuccess, const FString&, ErrorMessage);

/**
 * Central manager for all save/load operations
 * Handles file I/O, validation, and coordination with saveable objects
 */
UCLASS(BlueprintType, Blueprintable)
class SOCIALGOLF_API USGSaveManager : public UObject
{
    GENERATED_BODY()

public:
    USGSaveManager();

    // Main save/load functions
    UFUNCTION(BlueprintCallable, Category = "Save System")
    void SaveGame(const FString& SlotName = TEXT("AutoSave"), int32 UserIndex = 0);

    UFUNCTION(BlueprintCallable, Category = "Save System")
    void LoadGame(const FString& SlotName = TEXT("AutoSave"), int32 UserIndex = 0);

    UFUNCTION(BlueprintCallable, Category = "Save System")
    bool DoesSaveExist(const FString& SlotName = TEXT("AutoSave"), int32 UserIndex = 0) const;

    UFUNCTION(BlueprintCallable, Category = "Save System")
    bool DeleteSave(const FString& SlotName, int32 UserIndex = 0);

    // Quick save/load with default slot
    UFUNCTION(BlueprintCallable, Category = "Save System")
    void QuickSave();

    UFUNCTION(BlueprintCallable, Category = "Save System")
    void QuickLoad();

    // Get save file information
    UFUNCTION(BlueprintCallable, Category = "Save System")
    TArray<FString> GetAllSaveSlots() const;

    UFUNCTION(BlueprintCallable, Category = "Save System")
    USGSaveGame* GetSaveGameInfo(const FString& SlotName, int32 UserIndex = 0) const;

    // Current save data access
    UFUNCTION(BlueprintCallable, Category = "Save System")
    USGSaveGame* GetCurrentSave() const { return CurrentSaveGame; }

    UFUNCTION(BlueprintCallable, Category = "Save System")
    bool HasCurrentSave() const { return CurrentSaveGame != nullptr; }

    // Event delegates
    UPROPERTY(BlueprintAssignable, Category = "Save System")
    FOnSaveComplete OnSaveComplete;

    UPROPERTY(BlueprintAssignable, Category = "Save System")
    FOnLoadComplete OnLoadComplete;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save System|Settings")
    bool bDebugMode = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save System|Settings")
    FString DefaultSlotName = TEXT("AutoSave");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save System|Settings")
    bool bUseAsyncSaving = false; // For future async implementation

protected:
    // Internal save/load logic
    bool CollectSaveData(FSGSaveGameData& OutSaveData);
    bool ApplySaveData(const FSGSaveGameData& SaveData);
    
    // Find all saveable objects in the world
    TArray<TScriptInterface<ISGSaveableInterface>> FindAllSaveableObjects() const;

    // Validation
    bool ValidateSaveData(const FSGSaveGameData& SaveData) const;

private:
    UPROPERTY()
    USGSaveGame* CurrentSaveGame;

    // Debug logging
    void LogDebug(const FString& Message) const;
    void LogError(const FString& Message) const;
};