#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SGSaveData.h"
#include "SGSaveGame.generated.h"

/**
 * Main save game object that UE5 serializes to disk
 * This wraps our custom save data structures in UE's save game system
 */
UCLASS(BlueprintType)
class SOCIALGOLF_API USGSaveGame : public USaveGame
{
    GENERATED_BODY()

public:
    USGSaveGame();

    // The main save data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Game")
    FSGSaveGameData SaveData;

    // Save slot information
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Game")
    FString SlotName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Game")
    int32 UserIndex;

    // Quick access functions
    UFUNCTION(BlueprintCallable, Category = "Save Game")
    void SetSlotInfo(const FString& InSlotName, int32 InUserIndex = 0);

    UFUNCTION(BlueprintCallable, Category = "Save Game")
    FString GetFormattedTimestamp() const;

    UFUNCTION(BlueprintCallable, Category = "Save Game")
    bool IsValid() const;

    UFUNCTION(BlueprintCallable, Category = "Save Game")
    void InitializeDefaults();

private:
    static const int32 CURRENT_SAVE_VERSION = 1;
};