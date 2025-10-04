#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "../Core/SGFocusableComponent.h"
#include "../Core/SGInteractable.h"
#include "SGBasketball.generated.h"

class ASGCharacter;
class ASGBasketballHoop;
class USGBasketballPhysicsMaterial;

UCLASS(Blueprintable)
class SOCIALGOLF_API ASGBasketball : public AActor, public ISGInteractable
{
    GENERATED_BODY()

public:
    ASGBasketball();

    // Trajectory Prediction Properties - PUBLIC for external access
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    bool bShowTrajectoryPrediction = true; // Enable/disable trajectory lines

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    int32 TrajectorySteps = 30; // Number of prediction steps

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    float TrajectoryStepTime = 0.1f; // Time between prediction steps

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    float TrajectoryLineThickness = 3.0f; // Thickness of trajectory lines

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    float TrajectoryLineDuration = 3.0f; // How long trajectory lines stay visible

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    FColor TrajectoryLineColor = FColor::Yellow; // Color of trajectory lines

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    FColor ImpactPointColor = FColor::Red; // Color of predicted impact point

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
    float ImpactPointSize = 15.0f; // Size of impact point sphere

    // Pickup/Drop functions
    UFUNCTION(BlueprintCallable, Category = "Basketball")
    bool CanBePickedUp() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    void PickupBall(ASGCharacter* Player);

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    void DropBall();

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    void ThrowBall(const FVector& ThrowDirection, float ThrowPower);

    // NEW: Trajectory Prediction Functions
    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    void PredictAndShowTrajectory(const FVector& StartLocation, const FVector& InitialVelocity);

    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    FVector CalculateInitialVelocity(const FVector& ThrowDirection, float ThrowPower) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    FVector CalculateEnhancedInitialVelocity(const FVector& ThrowDirection, float ThrowPower) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    TArray<FVector> PredictTrajectoryPath(const FVector& StartLocation, const FVector& InitialVelocity) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    void DrawTrajectoryVisualization(const TArray<FVector>& TrajectoryPoints) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Telemetry")
    void ShowThrowPrediction(const FVector& ThrowDirection, float ThrowPower);

    // Interaction functions (for interaction system)
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void OnInteract(ASGCharacter* InteractingPlayer);

    UFUNCTION(BlueprintCallable, Category = "Interaction")
    bool CanInteract(ASGCharacter* Player) const;

    // ISGInteractable interface implementation
    virtual FText GetInteractionText_Implementation() const override;
    virtual void Interact_Implementation(APawn* InstigatorPawn) override;

    // Server RPCs
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball")
    void ServerPickupBall(ASGCharacter* Player);

    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball")
    void ServerDropBall();

    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball")
    void ServerThrowBall(const FVector& ThrowDirection, float ThrowPower);

    // Multicast RPCs for visual effects
    UFUNCTION(NetMulticast, Reliable, Category = "Basketball")
    void MulticastOnBasketballThrown(const FVector& Direction, float Power, const FVector& StartLocation);

    UFUNCTION(NetMulticast, Reliable, Category = "Basketball") 
    void MulticastOnBasketballPickedUp(ASGCharacter* Player);

    UFUNCTION(NetMulticast, Reliable, Category = "Basketball")
    void MulticastOnBasketballDropped(const FVector& DropLocation);

    // Shot tracking functions
    UFUNCTION(BlueprintCallable, Category = "Shot Tracking")
    void NotifyGameManagerOfThrow();

    UFUNCTION(BlueprintCallable, Category = "Shot Tracking")
    void NotifyGameManagerOfScore(ASGBasketballHoop* Hoop);

    UFUNCTION(BlueprintCallable, Category = "Shot Tracking")
    void RegisterMissedShot();

    // Audio functions
    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlayBounceSound(float ImpactForce);

    // Getters
    UFUNCTION(BlueprintCallable, Category = "Basketball")
    bool IsBeingHeld() const { return bIsBeingHeld; }

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    ASGCharacter* GetHoldingPlayer() const { return HoldingPlayer; }

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    ASGCharacter* GetLastThrower() const { return LastThrower; }

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    bool HasBeenThrown() const { return bHasBeenThrown; }

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    USphereComponent* GetCollisionComponent() const { return CollisionComponent; }

    UFUNCTION(BlueprintCallable, Category = "Basketball")
    UStaticMeshComponent* GetBallMesh() const { return BallMesh; }

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BallMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UAudioComponent* AudioComponent;

    // Interaction component for pickup
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USGFocusableComponent* FocusableComponent;

    // Basketball properties - INCREASED TO REALISTIC SIZE
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball")
    float BallMass = 0.6f; // kg, realistic basketball weight

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball", Replicated)
    float BallRadius = 24.0f; // cm, realistic basketball radius (was 18.0f, now proper basketball size)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball")
    float BounceRestitution = 0.8f; // How much it bounces

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball", Replicated)
    float PickupRange = 300.0f; // Range for pickup (increased from 200.0f)

    // Replicated throw properties for multiplayer
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Basketball")
    float LastThrowPower = 0.0f;

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Basketball")
    FVector LastThrowDirection = FVector::ZeroVector;

    // State
    UPROPERTY(ReplicatedUsing = OnRep_IsBeingHeld, BlueprintReadOnly, Category = "State")
    bool bIsBeingHeld = false;

    UPROPERTY(ReplicatedUsing = OnRep_HoldingPlayer, BlueprintReadOnly, Category = "State")
    ASGCharacter* HoldingPlayer = nullptr;

    // Shot tracking
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Shot Tracking")
    bool bHasBeenThrown = false;

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Shot Tracking")
    ASGCharacter* LastThrower = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "Shot Tracking")
    FVector ThrowStartLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadOnly, Category = "Shot Tracking")
    float ThrowStartTime = 0.0f;

    // Sound effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* BounceSoundCue = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* PickupSoundCue = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* ThrowSoundCue = nullptr;

    // Functions
    UFUNCTION()
    void OnRep_IsBeingHeld();

    UFUNCTION()
    void OnRep_HoldingPlayer();

    // Helper functions
    void SetupPhysics();
    void AttachToPlayer(ASGCharacter* Player);
    void DetachFromPlayer();
    void EnablePhysics();
    void DisablePhysics();

    // Collision events
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    // NEW: Enhanced Physics Functions
    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    void ApplyEnhancedBouncePhysics(const FHitResult& Hit, const FVector& CurrentVelocity, const FVector& CurrentAngularVelocity, USGBasketballPhysicsMaterial* Material);

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    void ApplySpinDecay(const FHitResult& Hit, const FVector& CurrentAngularVelocity);

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    void PlayEnhancedBounceSound(float ImpactForce, const FHitResult& Hit);

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    FVector CalculateRealisticSpin(const FVector& ThrowDirection, float ThrowPower) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    FVector CalculateRealisticBasketballSpin(const FVector& ThrowDirection, float ThrowPower) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    FVector PredictBounceVelocity(const FVector& IncomingVelocity, const FHitResult& Hit) const;

    // Enhanced Basketball Properties for Realistic Physics
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float AirResistanceMultiplier = 1.0f; // Multiplier for air resistance effects

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float MagnusEffectStrength = 0.25f; // Strength of Magnus effect from spin

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SpinDecayMultiplier = 0.85f; // How quickly spin decays on bounces

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    bool bEnableRealisticPhysics = true; // Toggle for enhanced physics

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float BounceRandomization = 20.0f; // Random variation in bounce direction (cm/s)

    // Surface Detection and Physics
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    bool bDetectSurfaceTypes = true; // Whether to detect and respond to different surfaces

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float MinimumBounceVelocity = 50.0f; // Minimum velocity for bounce calculations

    // NEW: Slope Rolling Physics
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    bool bEnableSlopeRolling = true; // Enable enhanced rolling on slopes

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SlopeRollingMultiplier = 4.5f; // How much faster to roll on slopes (increased from 3.5f for more dramatic effect)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float MinimumSlopeAngle = 2.0f; // Minimum slope angle (degrees) to apply slope rolling (reduced from 5.0f to detect slight slopes)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float FlatSurfaceDamping = 0.08f; // Linear damping on flat surfaces (reduced from 0.95f - higher = slower)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SlopeSurfaceDamping = 0.01f; // Linear damping on steep slopes (reduced from 0.98f - lower = rolls faster)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SlopeGravityBoost = 650.0f; // Additional gravity force on slopes (increased from 450.0f for more speed)

public:
    // NEW: Slope detection and rolling functions
    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    void ApplySlopeRollingPhysics(float DeltaTime);

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    float DetectSlopeAngle() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    FVector GetSlopeDirection() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    bool IsOnSlope() const;
};