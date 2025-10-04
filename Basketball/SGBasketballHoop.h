#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "Engine/TimerHandle.h"
#include "SGBasketballHoop.generated.h"

class ASGBasketball;

UCLASS(Blueprintable)
class SOCIALGOLF_API ASGBasketballHoop : public AActor
{
    GENERATED_BODY()

public:
    ASGBasketballHoop();

protected:
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* PostMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BackboardMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* RimMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* ScoringZone;

    // Enhanced detection zones
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* RimCollisionZone;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* BackboardCollisionZone;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* PreScoringZone; // Zone above the rim to validate trajectory

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UAudioComponent* AudioComponent;

    // Visual components for net
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual Components")
    TArray<UStaticMeshComponent*> NetStrips;

    // Hoop properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Hoop")
    float HoopHeight = 305.0f; // 10 feet in cm

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Hoop")
    float RimRadius = 23.0f; // Basketball rim radius in cm

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Hoop")
    float ScoringZoneSize = 50.0f; // Size of the scoring detection zone

    // Enhanced detection settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection Settings")
    float MinimumScoringVelocityZ = -100.0f; // Minimum downward velocity to score

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection Settings")
    float MaximumScoringVelocityZ = -1000.0f; // Maximum reasonable downward velocity

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection Settings")
    float ScoringCooldownTime = 1.0f; // Prevent multiple scores from same ball

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection Settings")
    float TrajectoryValidationAngle = 45.0f; // Maximum angle from vertical for valid shots

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection Settings")
    bool bRequirePreScoringZoneEntry = true; // Ball must pass through pre-scoring zone first

    // Scoring system
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Scoring")
    int32 TotalShots = 0;

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Scoring")
    int32 SuccessfulShots = 0;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Hoop")
    bool bPlaySoundOnScore = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Hoop")
    bool bShowDebugInfo = true;

    // Visual customization settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    FLinearColor PostColor = FLinearColor(0.15f, 0.15f, 0.15f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    FLinearColor BackboardColor = FLinearColor(0.9f, 0.9f, 0.9f, 0.8f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    FLinearColor RimColor = FLinearColor(1.0f, 0.5f, 0.1f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    FLinearColor NetColor = FLinearColor(0.95f, 0.95f, 0.95f, 0.8f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    bool bShowNet = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Settings")
    int32 NetStripCount = 8;

    // Sound effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* ScoreSoundCue = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* RimHitSoundCue = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    class USoundCue* BackboardHitSoundCue = nullptr;

private:
    // Enhanced tracking for better detection
    TMap<TWeakObjectPtr<ASGBasketball>, float> RecentScoringBalls; // Track balls and last scoring time
    TSet<TWeakObjectPtr<ASGBasketball>> BallsInPreScoringZone; // Track balls that entered pre-scoring zone

public:
    // Scoring functions
    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    void RegisterShot();

    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    void RegisterScore();

    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    float GetAccuracy() const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    void ResetStats();

    // Game manager integration
    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    void RegisterWithGameManager();

    // Audio functions
    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlayScoreSound();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlayRimHitSound();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlayBackboardHitSound();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlayScoreEffects();

    // Server RPCs
    UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Basketball Hoop")
    void ServerResetStats();

    // Getters
    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    int32 GetTotalShots() const { return TotalShots; }

    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    int32 GetSuccessfulShots() const { return SuccessfulShots; }

    UFUNCTION(BlueprintCallable, Category = "Basketball Hoop")
    UBoxComponent* GetScoringZone() const { return ScoringZone; }

protected:
    // Enhanced collision events
    UFUNCTION()
    void OnScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                                  bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPreScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                                     bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPreScoringZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UFUNCTION()
    void OnRimCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
                          UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    UFUNCTION()
    void OnBackboardCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
                                UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    // Enhanced validation methods
    bool IsValidScoringBall(ASGBasketball* Basketball) const;
    bool IsValidScoringVelocity(const FVector& Velocity) const;
    bool IsValidScoringTrajectory(const FVector& Velocity) const;
    bool CanBallScore(ASGBasketball* Basketball) const;
    void CleanupOldScoringEntries();

    // Helper functions
    void SetupComponents();
    void SetupCollision();
    void SetupEnhancedDetectionZones();

    // Visual feedback
    UFUNCTION(NetMulticast, Reliable)
    void MulticastOnScore();

    UFUNCTION(NetMulticast, Reliable)
    void MulticastOnRimHit();

    UFUNCTION(NetMulticast, Reliable)
    void MulticastOnBackboardHit();

    // Net animation
    UFUNCTION(BlueprintCallable, Category = "Visual Effects")
    void AnimateNetOnScore();

    UFUNCTION(BlueprintImplementableEvent, Category = "Visual Effects")
    void PlayNetSwishAnimation();

    // Visual customization functions
    UFUNCTION(BlueprintCallable, Category = "Visual Settings")
    void UpdateHoopColors();

    UFUNCTION(BlueprintCallable, Category = "Visual Settings")
    void SetPostColor(const FLinearColor& NewColor);

    UFUNCTION(BlueprintCallable, Category = "Visual Settings")
    void SetBackboardColor(const FLinearColor& NewColor);

    UFUNCTION(BlueprintCallable, Category = "Visual Settings")
    void SetRimColor(const FLinearColor& NewColor);

    UFUNCTION(BlueprintCallable, Category = "Visual Settings")
    void SetNetColor(const FLinearColor& NewColor);
};