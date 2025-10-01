#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "SGSaveData.generated.h"

/**
 * Binary data wrapper for UE serialization
 */
USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGBinaryData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Binary Data")
    TArray<uint8> Data;

    FSGBinaryData() = default;
    FSGBinaryData(const TArray<uint8>& InData) : Data(InData) {}
};

/**
 * Generic save data container that can store various types of data
 * Use this to store any game state that needs persistence
 */
USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGSaveData
{
    GENERATED_BODY()

public:
    FSGSaveData() = default;

    // String data storage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, FString> StringData;

    // Integer data storage  
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, int32> IntData;

    // Float data storage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, float> FloatData;

    // Boolean data storage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, bool> BoolData;

    // Vector data storage (for positions, rotations, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, FVector> VectorData;

    // Transform data storage (for full actor transforms)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, FTransform> TransformData;

    // Binary data storage (for custom serialized objects)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
    TMap<FString, FSGBinaryData> BinaryData;

    // Helper functions for easy data access
    void SetString(const FString& Key, const FString& Value) { StringData.Add(Key, Value); }
    void SetInt(const FString& Key, int32 Value) { IntData.Add(Key, Value); }
    void SetFloat(const FString& Key, float Value) { FloatData.Add(Key, Value); }
    void SetBool(const FString& Key, bool Value) { BoolData.Add(Key, Value); }
    void SetVector(const FString& Key, const FVector& Value) { VectorData.Add(Key, Value); }
    void SetTransform(const FString& Key, const FTransform& Value) { TransformData.Add(Key, Value); }
    void SetBinary(const FString& Key, const TArray<uint8>& Value) { BinaryData.Add(Key, FSGBinaryData(Value)); }

    FString GetString(const FString& Key, const FString& DefaultValue = TEXT("")) const
    {
        return StringData.FindRef(Key).IsEmpty() ? DefaultValue : StringData.FindRef(Key);
    }

    int32 GetInt(const FString& Key, int32 DefaultValue = 0) const
    {
        return IntData.Contains(Key) ? IntData.FindRef(Key) : DefaultValue;
    }

    float GetFloat(const FString& Key, float DefaultValue = 0.0f) const
    {
        return FloatData.Contains(Key) ? FloatData.FindRef(Key) : DefaultValue;
    }

    bool GetBool(const FString& Key, bool DefaultValue = false) const
    {
        return BoolData.Contains(Key) ? BoolData.FindRef(Key) : DefaultValue;
    }

    FVector GetVector(const FString& Key, const FVector& DefaultValue = FVector::ZeroVector) const
    {
        return VectorData.Contains(Key) ? VectorData.FindRef(Key) : DefaultValue;
    }

    FTransform GetTransform(const FString& Key, const FTransform& DefaultValue = FTransform::Identity) const
    {
        return TransformData.Contains(Key) ? TransformData.FindRef(Key) : DefaultValue;
    }

    TArray<uint8> GetBinary(const FString& Key) const
    {
        const FSGBinaryData* Found = BinaryData.Find(Key);
        return Found ? Found->Data : TArray<uint8>();
    }

    // Check if data exists
    bool HasString(const FString& Key) const { return StringData.Contains(Key); }
    bool HasInt(const FString& Key) const { return IntData.Contains(Key); }
    bool HasFloat(const FString& Key) const { return FloatData.Contains(Key); }
    bool HasBool(const FString& Key) const { return BoolData.Contains(Key); }
    bool HasVector(const FString& Key) const { return VectorData.Contains(Key); }
    bool HasTransform(const FString& Key) const { return TransformData.Contains(Key); }
    bool HasBinary(const FString& Key) const { return BinaryData.Contains(Key); }

    // Utility functions
    void Clear()
    {
        StringData.Empty();
        IntData.Empty();
        FloatData.Empty();
        BoolData.Empty();
        VectorData.Empty();
        TransformData.Empty();
        BinaryData.Empty();
    }

    bool IsEmpty() const
    {
        return StringData.Num() == 0 && IntData.Num() == 0 && FloatData.Num() == 0 && 
               BoolData.Num() == 0 && VectorData.Num() == 0 && TransformData.Num() == 0 && 
               BinaryData.Num() == 0;
    }
};

/**
 * Main save game data structure
 * This represents the entire save file content
 */
USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGSaveGameData
{
    GENERATED_BODY()

public:
    FSGSaveGameData()
    {
        SaveVersion = 1;
        SaveTimestamp = FDateTime::Now();
        PlayerName = TEXT("Player");
    }

    // Save file metadata
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Metadata")
    int32 SaveVersion;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Metadata")
    FDateTime SaveTimestamp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Metadata")
    FString PlayerName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Metadata")
    FString LevelName;

    // Game progress data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Progress")
    FSGSaveData GameProgressData;

    // Player-specific data  
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
    FSGSaveData PlayerData;

    // World/Level-specific data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Data")
    FSGSaveData WorldData;

    // Settings and preferences
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    FSGSaveData SettingsData;

    // Individual saveable objects data (keyed by SaveID)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object Data")
    TMap<FString, FSGSaveData> ObjectData;

    // Utility functions
    FSGSaveData* GetObjectData(const FString& SaveID)
    {
        return ObjectData.Find(SaveID);
    }

    const FSGSaveData* GetObjectData(const FString& SaveID) const
    {
        return ObjectData.Find(SaveID);
    }

    void SetObjectData(const FString& SaveID, const FSGSaveData& Data)
    {
        ObjectData.Add(SaveID, Data);
    }

    bool HasObjectData(const FString& SaveID) const
    {
        return ObjectData.Contains(SaveID);
    }

    void RemoveObjectData(const FString& SaveID)
    {
        ObjectData.Remove(SaveID);
    }
};