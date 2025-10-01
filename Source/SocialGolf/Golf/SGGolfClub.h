#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SGGolfClub.generated.h"

UENUM(BlueprintType)
enum class EGolfClubType : uint8
{
    Driver      UMETA(DisplayName = "Driver"),
    Iron3       UMETA(DisplayName = "3 Iron"),
    Iron5       UMETA(DisplayName = "5 Iron"),
    Iron7       UMETA(DisplayName = "7 Iron"),
    Iron9       UMETA(DisplayName = "9 Iron"),
    PitchingWedge UMETA(DisplayName = "Pitching Wedge"),
    SandWedge   UMETA(DisplayName = "Sand Wedge"),
    Putter      UMETA(DisplayName = "Putter")
};

UCLASS(BlueprintType)
class SOCIALGOLF_API USGGolfClubData : public UDataAsset
{
    GENERATED_BODY()

public:
    // Club identification
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Info")
    EGolfClubType ClubType;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Info")
    FString ClubName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Info")
    FText ClubDisplayName;

    // Club characteristics
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Stats", meta = (ClampMin = "0.1", ClampMax = "2.0"))
    float PowerMultiplier = 1.0f; // How much this club multiplies base power

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Stats", meta = (ClampMin = "0.0", ClampMax = "90.0"))
    float LaunchAngle = 15.0f; // Default launch angle in degrees

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Stats", meta = (ClampMin = "50.0", ClampMax = "400.0"))
    float MaxDistance = 200.0f; // Maximum effective distance in meters

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Stats", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float Accuracy = 0.8f; // How accurate this club is (0-1)

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Club Stats", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float SpinEffect = 0.5f; // How much spin this club adds (0-1)

    // Visual representation
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visuals")
    UStaticMesh* ClubMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visuals")
    UTexture2D* ClubIcon;

public:
    USGGolfClubData()
    {
        ClubType = EGolfClubType::Iron7;
        ClubName = TEXT("7 Iron");
        ClubDisplayName = FText::FromString(TEXT("7 Iron"));
        PowerMultiplier = 1.0f;
        LaunchAngle = 25.0f;
        MaxDistance = 150.0f;
        Accuracy = 0.8f;
        SpinEffect = 0.5f;
    }

    // Helper function to get club color for UI
    UFUNCTION(BlueprintCallable, Category = "Club Info")
    FLinearColor GetClubColor() const
    {
        switch (ClubType)
        {
        case EGolfClubType::Driver:
            return FLinearColor::Red;
        case EGolfClubType::Iron3:
        case EGolfClubType::Iron5:
        case EGolfClubType::Iron7:
        case EGolfClubType::Iron9:
            return FLinearColor::Blue;
        case EGolfClubType::PitchingWedge:
        case EGolfClubType::SandWedge:
            return FLinearColor::Yellow;
        case EGolfClubType::Putter:
            return FLinearColor::Green;
        default:
            return FLinearColor::White;
        }
    }
};