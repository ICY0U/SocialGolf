#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
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
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BallMesh;

    // Golf Ball Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float BallMass = 45.93f; // Standard golf ball mass in grams

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float BallRadius = 21.35f; // Standard golf ball radius in cm

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float StopVelocityThreshold = 30.0f; // Threshold for ball stopping

    // Chaos Physics Properties (ONLY physics system)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Physics")
    float PhysicalMaterialFriction = 0.7f; // Physical material friction

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Physics")
    float PhysicalMaterialRestitution = 0.3f; // Bounce coefficient

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Physics")
    float LinearDamping = 0.1f; // Linear velocity damping

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Physics")
    float AngularDamping = 0.05f; // Angular velocity damping

    // Mini Golf Physics Properties (Chaos-based)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mini Golf Physics")
    bool bMiniGolfMode = true; // Enable mini golf rolling physics

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mini Golf Physics")
    float GroundTraceDistance = 50.0f; // How far to trace for ground

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mini Golf Physics")
    float RollingForce = 1500.0f; // Force applied for rolling

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mini Golf Physics")
    float MinimumRollingSpeed = 50.0f; // Minimum speed before ball stops

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mini Golf Physics")
    float GroundStickForce = 3000.0f; // Force to keep ball on ground

    // Debug Display Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bShowDebugInfo = true; // Always show debug info

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bShowVelocityVector = true; // Show velocity direction

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bShowGroundTrace = true; // Show ground detection trace

    // Multiplayer Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multiplayer")
    float NetworkUpdateFrequency = 20.0f; // How often to update clients (Hz)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multiplayer")
    float MovementThresholdForUpdate = 10.0f; // Min movement to trigger network update

    // Current State - Replicated
    UPROPERTY(ReplicatedUsing = OnRep_BallState, VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    EGolfBallState CurrentState;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    FVector LastStationaryPosition;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    float DistanceTraveled;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    int32 StrokeCount;

    UPROPERTY(ReplicatedUsing = OnRep_BallOwner, BlueprintReadOnly, Category = "Multiplayer")
    AActor* CurrentBallOwner; // Who currently "owns" the ball for hitting

    // Hitting proximity system
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Golf Ball")
    float HittingDistance = 150.0f; // Distance within which you can hit the ball - increased for better usability

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Golf Ball State")
    AActor* NearbyPlayer = nullptr;

public:
    // Golf Ball Functions
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void HitBall(const FVector& HitDirection, float Power);

    // Server RPC for hitting ball
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Golf Ball")
    void ServerHitBall(const FVector& HitDirection, float Power, AActor* HittingPlayer);

    // Multicast RPC for visual/audio effects
    UFUNCTION(NetMulticast, Reliable, Category = "Golf Ball")
    void MulticastBallHit(const FVector& HitDirection, float Power, AActor* HittingPlayer);

    // New overloaded function that takes club parameters
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void HitBallWithClub(const FVector& HitDirection, float Power, float ClubPowerMultiplier = 1.0f, float ClubLaunchAngle = 25.0f, float ClubAccuracy = 0.8f);

    // Server RPC for club-based hitting
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Golf Ball")
    void ServerHitBallWithClub(const FVector& HitDirection, float Power, float ClubPowerMultiplier, float ClubLaunchAngle, float ClubAccuracy, AActor* HittingPlayer);

    // New function that checks proximity before hitting
    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    bool CanHitBall(AActor* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    bool TryHitBallFromPlayer(AActor* Player, float Power);

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void HitBallMiniGolf(const FVector& HitDirection, float Power);

    // Server RPC for mini golf hitting
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Golf Ball")
    void ServerHitBallMiniGolf(const FVector& HitDirection, float Power, AActor* HittingPlayer);

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void ResetBall();

    // Server RPC for ball reset
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Golf Ball")
    void ServerResetBall();

    UFUNCTION(BlueprintCallable, Category = "Golf Ball")
    void PlaceBall(const FVector& NewLocation);

    // Server RPC for ball placement
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Golf Ball")
    void ServerPlaceBall(const FVector& NewLocation);

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

    // Multiplayer functions
    UFUNCTION(BlueprintCallable, Category = "Multiplayer")
    void SetBallOwner(AActor* NewOwner);

    UFUNCTION(BlueprintCallable, Category = "Multiplayer")
    AActor* GetBallOwner() const { return CurrentBallOwner; }

    UFUNCTION(BlueprintCallable, Category = "Multiplayer")
    bool CanPlayerHitBall(AActor* Player) const;

protected:
    void UpdateBallState();
    void UpdateChaosPhysics(float DeltaTime);
    void SetupChaosPhysics();
    void KeepBallOnGround(float DeltaTime);
    void DrawDebugInfo();
    bool IsOnGround() const;
    FVector GetGroundNormal() const;
    
    // Network update management
    void UpdateNetworkState();
    bool ShouldSendNetworkUpdate() const;
    
    // Replication callbacks
    UFUNCTION()
    void OnRep_BallState();
    
    UFUNCTION()
    void OnRep_BallOwner();
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
    FVector PreviousLocation;
    bool bIsInitialized;
    FVector LastGroundLocation; // Last known ground position
    FVector LastGroundNormal; // Last known ground normal
    UPhysicalMaterial* GolfBallPhysMaterial; // Physical material for Chaos physics
    
    // Network optimization
    float LastNetworkUpdateTime;
    FVector LastNetworkLocation;
    EGolfBallState LastNetworkState;
};