#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "SGReplayTypes.generated.h"

UENUM(BlueprintType)
enum class EReplayEventType : uint8
{
    GolfShot        UMETA(DisplayName = "Golf Shot"),
    PlayerMovement  UMETA(DisplayName = "Player Movement"),
    BallMovement    UMETA(DisplayName = "Ball Movement"),
    CameraChange    UMETA(DisplayName = "Camera Change"),
    ClubChange      UMETA(DisplayName = "Club Change"),
    Interaction     UMETA(DisplayName = "Interaction"),
    ScoreEvent      UMETA(DisplayName = "Score Event"),
    HoleComplete    UMETA(DisplayName = "Hole Complete")
};

UENUM(BlueprintType)
enum class ECameraReplayMode : uint8
{
    FirstPerson     UMETA(DisplayName = "First Person"),
    ThirdPerson     UMETA(DisplayName = "Third Person"),
    Cinematic       UMETA(DisplayName = "Cinematic"),
    BallFollow      UMETA(DisplayName = "Ball Follow"),
    StaticOverview  UMETA(DisplayName = "Static Overview"),
    SideView        UMETA(DisplayName = "Side View"),
    BehindShot      UMETA(DisplayName = "Behind Shot")
};

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGReplayFrameData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    float TimeStamp = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector PlayerLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FRotator PlayerRotation = FRotator::ZeroRotator;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector BallLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector BallVelocity = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector CameraLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FRotator CameraRotation = FRotator::ZeroRotator;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    float CameraFOV = 90.0f;

    FSGReplayFrameData()
    {
        TimeStamp = 0.0f;
        PlayerLocation = FVector::ZeroVector;
        PlayerRotation = FRotator::ZeroRotator;
        BallLocation = FVector::ZeroVector;
        BallVelocity = FVector::ZeroVector;
        CameraLocation = FVector::ZeroVector;
        CameraRotation = FRotator::ZeroRotator;
        CameraFOV = 90.0f;
    }
};

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGReplayEvent
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    EReplayEventType EventType = EReplayEventType::GolfShot;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    float TimeStamp = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FString EventDescription;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector EventLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    float ShotPower = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FString ClubUsed;

    FSGReplayEvent()
    {
        EventType = EReplayEventType::GolfShot;
        TimeStamp = 0.0f;
        EventDescription = TEXT("");
        EventLocation = FVector::ZeroVector;
        ShotPower = 0.0f;
        ClubUsed = TEXT("");
    }
};

USTRUCT(BlueprintType)
struct SOCIALGOLF_API FSGReplayData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FString ReplayName;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FString PlayerName;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FDateTime RecordingDate;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    float TotalDuration = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FString CourseName;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    int32 HoleNumber = 1;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    int32 FinalScore = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    TArray<FSGReplayFrameData> FrameData;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    TArray<FSGReplayEvent> Events;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector StartingBallPosition = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category = "Replay")
    FVector HolePosition = FVector::ZeroVector;

    FSGReplayData()
    {
        ReplayName = TEXT("Untitled Replay");
        PlayerName = TEXT("Unknown Player");
        RecordingDate = FDateTime::Now();
        TotalDuration = 0.0f;
        CourseName = TEXT("Unknown Course");
        HoleNumber = 1;
        FinalScore = 0;
        FrameData.Empty();
        Events.Empty();
        StartingBallPosition = FVector::ZeroVector;
        HolePosition = FVector::ZeroVector;
    }
};