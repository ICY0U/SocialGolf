#include "SGSaveGame.h"
#include "Engine/Engine.h"

USGSaveGame::USGSaveGame()
{
    SlotName = TEXT("DefaultSlot");
    UserIndex = 0;
    InitializeDefaults();
}

void USGSaveGame::SetSlotInfo(const FString& InSlotName, int32 InUserIndex)
{
    SlotName = InSlotName;
    UserIndex = InUserIndex;
}

FString USGSaveGame::GetFormattedTimestamp() const
{
    return SaveData.SaveTimestamp.ToString(TEXT("%Y-%m-%d %H:%M:%S"));
}

bool USGSaveGame::IsValid() const
{
    // Basic validation - can be expanded based on your needs
    return !SlotName.IsEmpty() && 
           SaveData.SaveVersion <= CURRENT_SAVE_VERSION && 
           SaveData.SaveVersion > 0;
}

void USGSaveGame::InitializeDefaults()
{
    SaveData = FSGSaveGameData();
    SaveData.SaveVersion = CURRENT_SAVE_VERSION;
    SaveData.SaveTimestamp = FDateTime::Now();
    
    // Set default player name from system if available
    if (GEngine && GEngine->GetGameUserSettings())
    {
        SaveData.PlayerName = TEXT("Player"); // Default fallback
    }
}