#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SGGolfClub.h"
#include "SGGolfClubManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClubChanged, EGolfClubType, PreviousClub, EGolfClubType, NewClub);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOCIALGOLF_API USGGolfClubManager : public UActorComponent
{
    GENERATED_BODY()

public:
    USGGolfClubManager();

protected:
    virtual void BeginPlay() override;

public:
    // Club selection
    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    void SelectClub(EGolfClubType ClubType);

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    void NextClub();

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    void PreviousClub();

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    EGolfClubType GetCurrentClubType() const { return CurrentClubType; }

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    USGGolfClubData* GetCurrentClubData() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    USGGolfClubData* GetClubData(EGolfClubType ClubType) const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    TArray<EGolfClubType> GetAvailableClubs() const;

    // Club stats for ball hitting
    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    float GetPowerMultiplier() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    float GetLaunchAngle() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    float GetMaxDistance() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    float GetAccuracy() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Club")
    float GetSpinEffect() const;

    // Events
    UPROPERTY(BlueprintAssignable, Category = "Golf Club")
    FOnClubChanged OnClubChanged;

protected:
    // Available clubs
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Golf Club Setup")
    TMap<EGolfClubType, USGGolfClubData*> ClubDatabase;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Club State")
    EGolfClubType CurrentClubType;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Golf Club Setup")
    EGolfClubType DefaultClub = EGolfClubType::Iron7;

    // Club order for cycling
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Golf Club Setup")
    TArray<EGolfClubType> ClubOrder;

private:
    void InitializeDefaultClubs();
    int32 GetCurrentClubIndex() const;
};