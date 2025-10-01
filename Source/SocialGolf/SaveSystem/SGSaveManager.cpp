#include "SGSaveManager.h"
#include "../Core/SGSaveableInterface.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

USGSaveManager::USGSaveManager()
{
    CurrentSaveGame = nullptr;
}

void USGSaveManager::SaveGame(const FString& SlotName, int32 UserIndex)
{
    LogDebug(FString::Printf(TEXT("Starting save to slot '%s'"), *SlotName));

    // Create or update current save game object
    if (!CurrentSaveGame)
    {
        CurrentSaveGame = Cast<USGSaveGame>(UGameplayStatics::CreateSaveGameObject(USGSaveGame::StaticClass()));
    }

    if (!CurrentSaveGame)
    {
        LogError(TEXT("Failed to create save game object"));
        OnSaveComplete.Broadcast(false, TEXT("Failed to create save game object"));
        return;
    }

    // Set slot information
    CurrentSaveGame->SetSlotInfo(SlotName, UserIndex);

    // Collect save data from all saveable objects
    FSGSaveGameData SaveData;
    if (!CollectSaveData(SaveData))
    {
        LogError(TEXT("Failed to collect save data"));
        OnSaveComplete.Broadcast(false, TEXT("Failed to collect save data"));
        return;
    }

    // Validate the collected data
    if (!ValidateSaveData(SaveData))
    {
        LogError(TEXT("Save data validation failed"));
        OnSaveComplete.Broadcast(false, TEXT("Save data validation failed"));
        return;
    }

    // Update the save game object
    CurrentSaveGame->SaveData = SaveData;

    // Perform the actual save to disk
    bool bSaveSuccess = UGameplayStatics::SaveGameToSlot(CurrentSaveGame, SlotName, UserIndex);

    if (bSaveSuccess)
    {
        LogDebug(FString::Printf(TEXT("Successfully saved to slot '%s'"), *SlotName));
        OnSaveComplete.Broadcast(true, TEXT("Save completed successfully"));
    }
    else
    {
        LogError(FString::Printf(TEXT("Failed to save to slot '%s'"), *SlotName));
        OnSaveComplete.Broadcast(false, TEXT("Failed to write save file to disk"));
    }
}

void USGSaveManager::LoadGame(const FString& SlotName, int32 UserIndex)
{
    LogDebug(FString::Printf(TEXT("Starting load from slot '%s'"), *SlotName));

    // Check if save exists
    if (!DoesSaveExist(SlotName, UserIndex))
    {
        LogError(FString::Printf(TEXT("Save slot '%s' does not exist"), *SlotName));
        OnLoadComplete.Broadcast(false, FString::Printf(TEXT("Save slot '%s' does not exist"), *SlotName));
        return;
    }

    // Load the save game object
    USGSaveGame* LoadedSave = Cast<USGSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
    if (!LoadedSave)
    {
        LogError(FString::Printf(TEXT("Failed to load save game from slot '%s'"), *SlotName));
        OnLoadComplete.Broadcast(false, TEXT("Failed to load save file"));
        return;
    }

    // Validate loaded data
    if (!ValidateSaveData(LoadedSave->SaveData))
    {
        LogError(TEXT("Loaded save data is invalid"));
        OnLoadComplete.Broadcast(false, TEXT("Save file is corrupted or invalid"));
        return;
    }

    // Apply the loaded data to the world
    if (!ApplySaveData(LoadedSave->SaveData))
    {
        LogError(TEXT("Failed to apply loaded save data"));
        OnLoadComplete.Broadcast(false, TEXT("Failed to apply save data to game world"));
        return;
    }

    // Update current save reference
    CurrentSaveGame = LoadedSave;

    LogDebug(FString::Printf(TEXT("Successfully loaded from slot '%s'"), *SlotName));
    OnLoadComplete.Broadcast(true, TEXT("Load completed successfully"));
}

bool USGSaveManager::DoesSaveExist(const FString& SlotName, int32 UserIndex) const
{
    return UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex);
}

bool USGSaveManager::DeleteSave(const FString& SlotName, int32 UserIndex)
{
    if (!DoesSaveExist(SlotName, UserIndex))
    {
        LogDebug(FString::Printf(TEXT("Save slot '%s' doesn't exist, nothing to delete"), *SlotName));
        return true;
    }

    bool bSuccess = UGameplayStatics::DeleteGameInSlot(SlotName, UserIndex);
    
    if (bSuccess)
    {
        LogDebug(FString::Printf(TEXT("Successfully deleted save slot '%s'"), *SlotName));
        
        // Clear current save if it was the deleted one
        if (CurrentSaveGame && CurrentSaveGame->SlotName == SlotName)
        {
            CurrentSaveGame = nullptr;
        }
    }
    else
    {
        LogError(FString::Printf(TEXT("Failed to delete save slot '%s'"), *SlotName));
    }

    return bSuccess;
}

void USGSaveManager::QuickSave()
{
    SaveGame(DefaultSlotName);
}

void USGSaveManager::QuickLoad()
{
    LoadGame(DefaultSlotName);
}

TArray<FString> USGSaveManager::GetAllSaveSlots() const
{
    // For now, return a basic implementation
    // In a full implementation, you'd scan the save directory
    TArray<FString> SaveSlots;
    
    // Check common slot names
    TArray<FString> CommonSlots = {TEXT("AutoSave"), TEXT("QuickSave"), TEXT("Slot1"), TEXT("Slot2"), TEXT("Slot3")};
    
    for (const FString& Slot : CommonSlots)
    {
        if (DoesSaveExist(Slot))
        {
            SaveSlots.Add(Slot);
        }
    }
    
    return SaveSlots;
}

USGSaveGame* USGSaveManager::GetSaveGameInfo(const FString& SlotName, int32 UserIndex) const
{
    if (!DoesSaveExist(SlotName, UserIndex))
    {
        return nullptr;
    }
    
    return Cast<USGSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
}

bool USGSaveManager::CollectSaveData(FSGSaveGameData& OutSaveData)
{
    // Initialize save data with current timestamp and metadata
    OutSaveData = FSGSaveGameData();
    
    // Set level name
    if (UWorld* World = GetWorld())
    {
        OutSaveData.LevelName = World->GetMapName();
    }

    // Find all saveable objects in the world
    TArray<TScriptInterface<ISGSaveableInterface>> SaveableObjects = FindAllSaveableObjects();
    
    LogDebug(FString::Printf(TEXT("Found %d saveable objects"), SaveableObjects.Num()));

    // Collect data from each saveable object
    int32 SuccessCount = 0;
    for (const auto& SaveableObject : SaveableObjects)
    {
        if (!SaveableObject.GetInterface())
        {
            continue;
        }

        FString SaveID = ISGSaveableInterface::Execute_GetSaveID(SaveableObject.GetObject());
        if (SaveID.IsEmpty() || SaveID == TEXT("DefaultSaveID"))
        {
            LogError(FString::Printf(TEXT("Object %s has invalid SaveID"), *GetNameSafe(SaveableObject.GetObject())));
            continue;
        }

        FSGSaveData ObjectSaveData;
        if (ISGSaveableInterface::Execute_SaveData(SaveableObject.GetObject(), ObjectSaveData))
        {
            OutSaveData.SetObjectData(SaveID, ObjectSaveData);
            SuccessCount++;
            LogDebug(FString::Printf(TEXT("Saved data for object: %s"), *SaveID));
        }
        else
        {
            LogError(FString::Printf(TEXT("Failed to save data for object: %s"), *SaveID));
        }
    }

    LogDebug(FString::Printf(TEXT("Successfully collected data from %d/%d objects"), SuccessCount, SaveableObjects.Num()));
    return SuccessCount > 0 || SaveableObjects.Num() == 0; // Success if we saved something or there was nothing to save
}

bool USGSaveManager::ApplySaveData(const FSGSaveGameData& SaveData)
{
    // Find all saveable objects in the current world
    TArray<TScriptInterface<ISGSaveableInterface>> SaveableObjects = FindAllSaveableObjects();
    
    LogDebug(FString::Printf(TEXT("Applying save data to %d objects"), SaveableObjects.Num()));

    int32 SuccessCount = 0;
    for (const auto& SaveableObject : SaveableObjects)
    {
        if (!SaveableObject.GetInterface())
        {
            continue;
        }

        FString SaveID = ISGSaveableInterface::Execute_GetSaveID(SaveableObject.GetObject());
        if (SaveID.IsEmpty() || SaveID == TEXT("DefaultSaveID"))
        {
            continue;
        }

        // Check if we have save data for this object
        const FSGSaveData* ObjectData = SaveData.GetObjectData(SaveID);
        if (!ObjectData)
        {
            LogDebug(FString::Printf(TEXT("No save data found for object: %s"), *SaveID));
            continue;
        }

        // Apply the save data
        if (ISGSaveableInterface::Execute_LoadData(SaveableObject.GetObject(), *ObjectData))
        {
            SuccessCount++;
            LogDebug(FString::Printf(TEXT("Loaded data for object: %s"), *SaveID));
        }
        else
        {
            LogError(FString::Printf(TEXT("Failed to load data for object: %s"), *SaveID));
        }
    }

    LogDebug(FString::Printf(TEXT("Successfully applied data to %d objects"), SuccessCount));
    return true; // Return true even if some objects failed - partial loads can be valid
}

TArray<TScriptInterface<ISGSaveableInterface>> USGSaveManager::FindAllSaveableObjects() const
{
    TArray<TScriptInterface<ISGSaveableInterface>> SaveableObjects;
    
    UWorld* World = GetWorld();
    if (!World)
    {
        return SaveableObjects;
    }

    // Find all actors that implement the saveable interface
    for (TActorIterator<AActor> ActorIterator(World); ActorIterator; ++ActorIterator)
    {
        AActor* Actor = *ActorIterator;
        if (Actor && Actor->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()))
        {
            SaveableObjects.Add(TScriptInterface<ISGSaveableInterface>(Actor));
        }

        // Also check all components on this actor
        TInlineComponentArray<UActorComponent*> Components;
        Actor->GetComponents(Components);
        for (UActorComponent* Component : Components)
        {
            if (Component && Component->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()))
            {
                SaveableObjects.Add(TScriptInterface<ISGSaveableInterface>(Component));
            }
        }
    }

    // Sort by save priority (higher priority saved first)
    SaveableObjects.Sort([](const TScriptInterface<ISGSaveableInterface>& A, const TScriptInterface<ISGSaveableInterface>& B)
    {
        int32 PriorityA = ISGSaveableInterface::Execute_GetSavePriority(A.GetObject());
        int32 PriorityB = ISGSaveableInterface::Execute_GetSavePriority(B.GetObject());
        return PriorityA > PriorityB;
    });

    return SaveableObjects;
}

bool USGSaveManager::ValidateSaveData(const FSGSaveGameData& SaveData) const
{
    // Basic validation
    if (SaveData.SaveVersion <= 0)
    {
        LogError(TEXT("Invalid save version"));
        return false;
    }

    if (SaveData.SaveTimestamp == FDateTime())
    {
        LogError(TEXT("Invalid save timestamp"));
        return false;
    }

    // More validation can be added here as needed
    return true;
}

void USGSaveManager::LogDebug(const FString& Message) const
{
    if (bDebugMode)
    {
        UE_LOG(LogTemp, Log, TEXT("[SaveManager] %s"), *Message);
        
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
                FString::Printf(TEXT("SaveManager: %s"), *Message));
        }
    }
}

void USGSaveManager::LogError(const FString& Message) const
{
    UE_LOG(LogTemp, Error, TEXT("[SaveManager] ERROR: %s"), *Message);
    
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, 
            FString::Printf(TEXT("SaveManager ERROR: %s"), *Message));
    }
}