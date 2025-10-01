#include "SGGolfClubManager.h"
#include "Engine/Engine.h"

USGGolfClubManager::USGGolfClubManager()
{
    PrimaryComponentTick.bCanEverTick = false;

    // Set default club order for cycling (only one club now)
    ClubOrder = {
        EGolfClubType::Iron7  // Only one club
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
    // Create only one golf club for mini golf
    if (ClubDatabase.Num() == 0)
    {
        // Mini Golf Club (only one needed)
        USGGolfClubData* MiniGolfClub = NewObject<USGGolfClubData>(this);
        MiniGolfClub->ClubType = EGolfClubType::Iron7; // Use Iron7 as the base type
        MiniGolfClub->ClubName = TEXT("Mini Golf Club");
        MiniGolfClub->ClubDisplayName = FText::FromString(TEXT("Mini Golf Club"));
        MiniGolfClub->PowerMultiplier = 1.0f;
        MiniGolfClub->LaunchAngle = 5.0f; // Low angle for rolling
        MiniGolfClub->MaxDistance = 100.0f;
        MiniGolfClub->Accuracy = 0.95f; // High accuracy for mini golf
        MiniGolfClub->SpinEffect = 0.1f; // Minimal spin for rolling
        ClubDatabase.Add(EGolfClubType::Iron7, MiniGolfClub);
        
        UE_LOG(LogTemp, Warning, TEXT("SGGolfClubManager: Initialized with single Mini Golf Club"));
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