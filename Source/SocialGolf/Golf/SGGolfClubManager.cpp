#include "SGGolfClubManager.h"
#include "Engine/Engine.h"

USGGolfClubManager::USGGolfClubManager()
{
    PrimaryComponentTick.bCanEverTick = false;

    // Set default club order for cycling
    ClubOrder = {
        EGolfClubType::Driver,
        EGolfClubType::Iron3,
        EGolfClubType::Iron5,
        EGolfClubType::Iron7,
        EGolfClubType::Iron9,
        EGolfClubType::PitchingWedge,
        EGolfClubType::SandWedge,
        EGolfClubType::Putter
    };

    CurrentClubType = DefaultClub;
}

void USGGolfClubManager::BeginPlay()
{
    Super::BeginPlay();
    
    InitializeDefaultClubs();
    
    // Set to default club
    CurrentClubType = DefaultClub;
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfClubManager: Initialized with %d clubs"), ClubDatabase.Num());
}

void USGGolfClubManager::InitializeDefaultClubs()
{
    // Create default club data if not already set
    if (ClubDatabase.Num() == 0)
    {
        // Driver
        USGGolfClubData* Driver = NewObject<USGGolfClubData>(this);
        Driver->ClubType = EGolfClubType::Driver;
        Driver->ClubName = TEXT("Driver");
        Driver->ClubDisplayName = FText::FromString(TEXT("Driver"));
        Driver->PowerMultiplier = 1.5f;
        Driver->LaunchAngle = 12.0f;
        Driver->MaxDistance = 300.0f;
        Driver->Accuracy = 0.6f;
        Driver->SpinEffect = 0.2f;
        ClubDatabase.Add(EGolfClubType::Driver, Driver);

        // 3 Iron
        USGGolfClubData* Iron3 = NewObject<USGGolfClubData>(this);
        Iron3->ClubType = EGolfClubType::Iron3;
        Iron3->ClubName = TEXT("3 Iron");
        Iron3->ClubDisplayName = FText::FromString(TEXT("3 Iron"));
        Iron3->PowerMultiplier = 1.3f;
        Iron3->LaunchAngle = 18.0f;
        Iron3->MaxDistance = 220.0f;
        Iron3->Accuracy = 0.7f;
        Iron3->SpinEffect = 0.3f;
        ClubDatabase.Add(EGolfClubType::Iron3, Iron3);

        // 5 Iron
        USGGolfClubData* Iron5 = NewObject<USGGolfClubData>(this);
        Iron5->ClubType = EGolfClubType::Iron5;
        Iron5->ClubName = TEXT("5 Iron");
        Iron5->ClubDisplayName = FText::FromString(TEXT("5 Iron"));
        Iron5->PowerMultiplier = 1.1f;
        Iron5->LaunchAngle = 22.0f;
        Iron5->MaxDistance = 180.0f;
        Iron5->Accuracy = 0.75f;
        Iron5->SpinEffect = 0.4f;
        ClubDatabase.Add(EGolfClubType::Iron5, Iron5);

        // 7 Iron (Default)
        USGGolfClubData* Iron7 = NewObject<USGGolfClubData>(this);
        Iron7->ClubType = EGolfClubType::Iron7;
        Iron7->ClubName = TEXT("7 Iron");
        Iron7->ClubDisplayName = FText::FromString(TEXT("7 Iron"));
        Iron7->PowerMultiplier = 1.0f;
        Iron7->LaunchAngle = 28.0f;
        Iron7->MaxDistance = 150.0f;
        Iron7->Accuracy = 0.8f;
        Iron7->SpinEffect = 0.5f;
        ClubDatabase.Add(EGolfClubType::Iron7, Iron7);

        // 9 Iron
        USGGolfClubData* Iron9 = NewObject<USGGolfClubData>(this);
        Iron9->ClubType = EGolfClubType::Iron9;
        Iron9->ClubName = TEXT("9 Iron");
        Iron9->ClubDisplayName = FText::FromString(TEXT("9 Iron"));
        Iron9->PowerMultiplier = 0.8f;
        Iron9->LaunchAngle = 35.0f;
        Iron9->MaxDistance = 120.0f;
        Iron9->Accuracy = 0.85f;
        Iron9->SpinEffect = 0.7f;
        ClubDatabase.Add(EGolfClubType::Iron9, Iron9);

        // Pitching Wedge
        USGGolfClubData* PitchingWedge = NewObject<USGGolfClubData>(this);
        PitchingWedge->ClubType = EGolfClubType::PitchingWedge;
        PitchingWedge->ClubName = TEXT("Pitching Wedge");
        PitchingWedge->ClubDisplayName = FText::FromString(TEXT("Pitching Wedge"));
        PitchingWedge->PowerMultiplier = 0.6f;
        PitchingWedge->LaunchAngle = 45.0f;
        PitchingWedge->MaxDistance = 90.0f;
        PitchingWedge->Accuracy = 0.9f;
        PitchingWedge->SpinEffect = 0.8f;
        ClubDatabase.Add(EGolfClubType::PitchingWedge, PitchingWedge);

        // Sand Wedge
        USGGolfClubData* SandWedge = NewObject<USGGolfClubData>(this);
        SandWedge->ClubType = EGolfClubType::SandWedge;
        SandWedge->ClubName = TEXT("Sand Wedge");
        SandWedge->ClubDisplayName = FText::FromString(TEXT("Sand Wedge"));
        SandWedge->PowerMultiplier = 0.5f;
        SandWedge->LaunchAngle = 55.0f;
        SandWedge->MaxDistance = 70.0f;
        SandWedge->Accuracy = 0.85f;
        SandWedge->SpinEffect = 0.9f;
        ClubDatabase.Add(EGolfClubType::SandWedge, SandWedge);

        // Putter
        USGGolfClubData* Putter = NewObject<USGGolfClubData>(this);
        Putter->ClubType = EGolfClubType::Putter;
        Putter->ClubName = TEXT("Putter");
        Putter->ClubDisplayName = FText::FromString(TEXT("Putter"));
        Putter->PowerMultiplier = 0.2f;
        Putter->LaunchAngle = 2.0f;
        Putter->MaxDistance = 20.0f;
        Putter->Accuracy = 0.95f;
        Putter->SpinEffect = 0.1f;
        ClubDatabase.Add(EGolfClubType::Putter, Putter);
    }
}

void USGGolfClubManager::SelectClub(EGolfClubType ClubType)
{
    if (ClubDatabase.Contains(ClubType))
    {
        EGolfClubType PreviousClub = CurrentClubType;
        CurrentClubType = ClubType;
        
        OnClubChanged.Broadcast(PreviousClub, CurrentClubType);
        
        if (USGGolfClubData* ClubData = GetCurrentClubData())
        {
            UE_LOG(LogTemp, Warning, TEXT("SGGolfClubManager: Selected %s"), *ClubData->ClubDisplayName.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfClubManager: Club type %d not available"), (int32)ClubType);
    }
}

void USGGolfClubManager::NextClub()
{
    int32 CurrentIndex = GetCurrentClubIndex();
    if (CurrentIndex != INDEX_NONE)
    {
        int32 NextIndex = (CurrentIndex + 1) % ClubOrder.Num();
        SelectClub(ClubOrder[NextIndex]);
    }
}

void USGGolfClubManager::PreviousClub()
{
    int32 CurrentIndex = GetCurrentClubIndex();
    if (CurrentIndex != INDEX_NONE)
    {
        int32 PrevIndex = (CurrentIndex - 1 + ClubOrder.Num()) % ClubOrder.Num();
        SelectClub(ClubOrder[PrevIndex]);
    }
}

USGGolfClubData* USGGolfClubManager::GetCurrentClubData() const
{
    return GetClubData(CurrentClubType);
}

USGGolfClubData* USGGolfClubManager::GetClubData(EGolfClubType ClubType) const
{
    if (USGGolfClubData* const* ClubDataPtr = ClubDatabase.Find(ClubType))
    {
        return *ClubDataPtr;
    }
    return nullptr;
}

TArray<EGolfClubType> USGGolfClubManager::GetAvailableClubs() const
{
    TArray<EGolfClubType> AvailableClubs;
    ClubDatabase.GetKeys(AvailableClubs);
    return AvailableClubs;
}

float USGGolfClubManager::GetPowerMultiplier() const
{
    if (USGGolfClubData* ClubData = GetCurrentClubData())
    {
        return ClubData->PowerMultiplier;
    }
    return 1.0f;
}

float USGGolfClubManager::GetLaunchAngle() const
{
    if (USGGolfClubData* ClubData = GetCurrentClubData())
    {
        return ClubData->LaunchAngle;
    }
    return 25.0f;
}

float USGGolfClubManager::GetMaxDistance() const
{
    if (USGGolfClubData* ClubData = GetCurrentClubData())
    {
        return ClubData->MaxDistance;
    }
    return 150.0f;
}

float USGGolfClubManager::GetAccuracy() const
{
    if (USGGolfClubData* ClubData = GetCurrentClubData())
    {
        return ClubData->Accuracy;
    }
    return 0.8f;
}

float USGGolfClubManager::GetSpinEffect() const
{
    if (USGGolfClubData* ClubData = GetCurrentClubData())
    {
        return ClubData->SpinEffect;
    }
    return 0.5f;
}

int32 USGGolfClubManager::GetCurrentClubIndex() const
{
    return ClubOrder.IndexOfByKey(CurrentClubType);
}