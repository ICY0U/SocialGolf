#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "SGGolfBall.generated.h"

UENUM(BlueprintType)
enum class EGolfBallState : uint8
{
    Stationary      UMETA(DisplayName = "Stationary"),
    InFlight        UMETA(DisplayName = "In Flight"),
    Rolling         UMETA(DisplayName = "Rolling"),
    InWater         UMETA(DisplayName = "In Water"),
    OutOfBounds     UMETA(DisplayName = "Out of Bounds")
};

UCLASS()
class SOCIALGOLF_API ASGGolfBall : public AActor
{
    GENERATED_BODY()
    
public:    
    ASGGolfBall();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BallMesh;

    // Golf Ball Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float BallMass = 45.93f; // Standard golf ball mass in grams

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float BallRadius = 21.35f; // Standard golf ball radius in cm (increased from 2.135f)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float AirResistance = 0.1f; // Reduced from 0.5f for less air resistance

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float RollingFriction = 0.8f; // Increased from 0.3f for more ground friction

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float BounceDamping = 0.3f; // Reduced from 0.6f for less bouncy behavior

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float StopVelocityThreshold = 100.0f; // Increased from 50.0f to stop sooner

    // Current State
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    EGolfBallState CurrentState;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    FVector LastStationaryPosition;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    float DistanceTraveled;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    int32 StrokeCount;

    // Hitting proximity system
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float HittingDistance = 100.0f; // Distance within which you can hit the ball

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    AActor* NearbyPlayer = nullptr;

public:
    // Golf Ball Functions
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void HitBall(const FVector& HitDirection, float Power);

    // New overloaded function that takes club parameters
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void HitBallWithClub(const FVector& HitDirection, float Power, float ClubPowerMultiplier = 1.0f, float ClubLaunchAngle = 25.0f, float ClubAccuracy = 0.8f);

    // New function that checks proximity before hitting
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    bool CanHitBall(AActor* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    bool TryHitBallFromPlayer(AActor* Player, float Power);

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void ResetBall();

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void PlaceBall(const FVector& NewLocation);

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    bool IsBallStationary() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    float GetCurrentSpeed() const;

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    FVector GetBallVelocity() const;

    // Getters
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    EGolfBallState GetBallState() const { return CurrentState; }

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    float GetDistanceTraveled() const { return DistanceTraveled; }

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    int32 GetStrokeCount() const { return StrokeCount; }

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void SetBallSize(float NewRadius);

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    float GetBallRadius() const { return BallRadius; }

protected:
    void UpdateBallState();
    void UpdatePhysics(float DeltaTime);
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
    FVector PreviousLocation;
    bool bIsInitialized;
};