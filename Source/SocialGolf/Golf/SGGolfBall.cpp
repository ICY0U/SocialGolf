#include "SGGolfBall.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Physics/PhysicsFiltering.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMesh.h"
#include "DrawDebugHelpers.h"
#include "../Characters/SGCharacter.h"
#include "../Golf/SGGolfClubManager.h"

ASGGolfBall::ASGGolfBall()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
    
    // Create collision component
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;
    CollisionComponent->SetSphereRadius(BallRadius);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    CollisionComponent->SetNotifyRigidBodyCollision(true);
    
    // Enable physics
    CollisionComponent->SetSimulatePhysics(true);
    CollisionComponent->SetEnableGravity(true);
    
    // Create ball mesh
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    BallMesh->SetupAttachment(RootComponent);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    BallMesh->SetGenerateOverlapEvents(false);
    
    // Try to load a sphere mesh as default
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere"));
    if (SphereMeshAsset.Succeeded())
    {
        BallMesh->SetStaticMesh(SphereMeshAsset.Object);
        BallMesh->SetWorldScale3D(FVector(BallRadius / 50.0f)); // Scale based on ball radius
    }
    
    // Set default material to white
    BallMesh->SetVectorParameterValueOnMaterials(FName("BaseColor"), FVector(1.0f, 1.0f, 1.0f));
    
    // Initialize state
    CurrentState = EGolfBallState::Stationary;
    DistanceTraveled = 0.0f;
    StrokeCount = 0;
    bIsInitialized = false;
    
    // Bind collision event
    CollisionComponent->OnComponentHit.AddDynamic(this, &ASGGolfBall::OnHit);
}

void ASGGolfBall::BeginPlay()
{
    Super::BeginPlay();
    
    // Set up physics properties
    if (CollisionComponent)
    {
        CollisionComponent->SetMassOverrideInKg(NAME_None, BallMass / 1000.0f); // Convert grams to kg
        CollisionComponent->SetLinearDamping(AirResistance);
        CollisionComponent->SetAngularDamping(RollingFriction);
        
        // Enable gravity
        CollisionComponent->SetEnableGravity(true);
        
        // Set physical material properties
        CollisionComponent->SetPhysMaterialOverride(nullptr); // Use default for now
    }
    
    LastStationaryPosition = GetActorLocation();
    PreviousLocation = GetActorLocation();
    bIsInitialized = true;
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Initialized at location %s"), *GetActorLocation().ToString());
}

void ASGGolfBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (!bIsInitialized)
        return;
        
    UpdateBallState();
    UpdatePhysics(DeltaTime);
    
    // Update distance traveled
    FVector CurrentLocation = GetActorLocation();
    float FrameDistance = FVector::Dist(PreviousLocation, CurrentLocation);
    
    if (CurrentState == EGolfBallState::InFlight || CurrentState == EGolfBallState::Rolling)
    {
        DistanceTraveled += FrameDistance;
    }
    
    PreviousLocation = CurrentLocation;
}

void ASGGolfBall::HitBall(const FVector& HitDirection, float Power)
{
    // Call the new function with default club parameters
    HitBallWithClub(HitDirection, Power, 1.0f, 25.0f, 0.8f);
}

void ASGGolfBall::HitBallWithClub(const FVector& HitDirection, float Power, float ClubPowerMultiplier, float ClubLaunchAngle, float ClubAccuracy)
{
    if (!CollisionComponent)
        return;
        
    // Clamp power between 0 and 100
    Power = FMath::Clamp(Power, 0.0f, 100.0f);
    
    // Apply club power multiplier
    float EffectivePower = Power * ClubPowerMultiplier;
    
    // Convert power to actual force (adjust these values for game balance)
    float MaxForce = 50000.0f;
    float ForceToApply = (EffectivePower / 100.0f) * MaxForce;
    
    // Normalize hit direction
    FVector NormalizedDirection = HitDirection.GetSafeNormal();
    
    // Apply club launch angle - convert degrees to radians
    float LaunchAngleRad = FMath::DegreesToRadians(ClubLaunchAngle);
    
    // If hitting horizontally, apply the club's launch angle
    if (FMath::Abs(NormalizedDirection.Z) < 0.1f)
    {
        // Calculate new direction with launch angle
        FVector HorizontalDir = FVector(NormalizedDirection.X, NormalizedDirection.Y, 0.0f).GetSafeNormal();
        NormalizedDirection = FVector(
            HorizontalDir.X * FMath::Cos(LaunchAngleRad),
            HorizontalDir.Y * FMath::Cos(LaunchAngleRad),
            FMath::Sin(LaunchAngleRad)
        );
    }
    else
    {
        // Adjust existing Z component based on launch angle
        float CurrentAngle = FMath::Asin(FMath::Abs(NormalizedDirection.Z));
        float TargetAngle = FMath::DegreesToRadians(ClubLaunchAngle);
        float BlendedAngle = FMath::Lerp(CurrentAngle, TargetAngle, 0.7f); // Blend 70% towards club angle
        
        FVector HorizontalDir = FVector(NormalizedDirection.X, NormalizedDirection.Y, 0.0f).GetSafeNormal();
        NormalizedDirection = FVector(
            HorizontalDir.X * FMath::Cos(BlendedAngle),
            HorizontalDir.Y * FMath::Cos(BlendedAngle),
            FMath::Sin(BlendedAngle)
        );
    }
    
    // Apply accuracy - add some randomness based on club accuracy
    if (ClubAccuracy < 1.0f)
    {
        float AccuracyVariance = (1.0f - ClubAccuracy) * 0.2f; // Max 20% variance for worst accuracy
        FVector RandomOffset = FVector(
            FMath::RandRange(-AccuracyVariance, AccuracyVariance),
            FMath::RandRange(-AccuracyVariance, AccuracyVariance),
            FMath::RandRange(-AccuracyVariance * 0.5f, AccuracyVariance * 0.5f) // Less vertical variance
        );
        NormalizedDirection = (NormalizedDirection + RandomOffset).GetSafeNormal();
    }
    
    // Calculate final force vector
    FVector ForceVector = NormalizedDirection * ForceToApply;
    
    // Apply impulse to the ball
    CollisionComponent->AddImpulse(ForceVector, NAME_None, true);
    
    // Update state
    CurrentState = EGolfBallState::InFlight;
           Power, EffectivePower, *HitDirection.ToString(), ClubLaunchAngle, ClubAccuracy);
}

bool ASGGolfBall::CanHitBall(AActor* Player) const
{
    if (!Player || !IsBallStationary())
    {
        return false;
    }
    
    float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());
    return Distance <= HittingDistance;
}

bool ASGGolfBall::TryHitBallFromPlayer(AActor* Player, float Power)
{
    if (!CanHitBall(Player))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Player %s is too far from ball to hit it (Distance: %.1f, Required: %.1f)"), 
               Player ? *Player->GetName() : TEXT("None"), 
               Player ? FVector::Dist(GetActorLocation(), Player->GetActorLocation()) : 0.0f,
               HittingDistance);
        return false;
    }
    
    // Calculate hit direction from player to ball, then continue forward
    FVector PlayerToBall = (GetActorLocation() - Player->GetActorLocation()).GetSafeNormal();
    FVector HitDirection = PlayerToBall;
    
    // Use player's forward direction instead for more control
    if (APawn* PlayerPawn = Cast<APawn>(Player))
    {
        HitDirection = PlayerPawn->GetActorForwardVector();
    }
    
    // Draw debug line showing hit direction
    if (GetWorld())
    {
        FVector StartLocation = GetActorLocation();
        FVector EndLocation = StartLocation + (HitDirection * 500.0f); // Show 5 meter line
        DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 3.0f, 0, 5.0f);
        
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Showing hit direction debug line"));
    }
    
    // Hit the ball using club system
    if (ASGCharacter* SGChar = Cast<ASGCharacter>(Player))
    {
        if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
        {
            float ClubPowerMultiplier = ClubManager->GetPowerMultiplier();
            float ClubLaunchAngle = ClubManager->GetLaunchAngle();
            float ClubAccuracy = ClubManager->GetAccuracy();
            
            HitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy);
            return true;
        }
    }
    
    // Fallback to regular hit
    HitBall(HitDirection, Power);
    return true;
}

void ASGGolfBall::ResetBall()
{
    if (!CollisionComponent)
        return;
        
    // Stop all movement
    CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
    CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
    
    // Reset to last stationary position
    SetActorLocation(LastStationaryPosition);
    
    // Reset state
    CurrentState = EGolfBallState::Stationary;
    DistanceTraveled = 0.0f;
    // Don't reset stroke count - that's for the hole
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Reset to position %s"), *LastStationaryPosition.ToString());
}

void ASGGolfBall::PlaceBall(const FVector& NewLocation)
{
    if (!CollisionComponent)
        return;
        
    // Stop all movement
    CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
    CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
    
    // Set new position
    SetActorLocation(NewLocation);
    LastStationaryPosition = NewLocation;
    
    // Update state to stationary
    CurrentState = EGolfBallState::Stationary;
    
    // Small delay to ensure physics settle, then check if we need to drop to ground
    FTimerHandle SettleTimer;
    GetWorld()->GetTimerManager().SetTimer(SettleTimer, [this]()
    {
        // After a short delay, check if we're still in the air and let physics take over
        FVector CurrentVelocity = GetBallVelocity();
        if (CurrentVelocity.Size() < 10.0f) // If not moving much
        {
            // Trace down to see if we're floating
            FVector Start = GetActorLocation();
            FVector End = Start - FVector(0, 0, BallRadius + 50.0f);
            
            FHitResult HitResult;
            bool bHitGround = GetWorld()->LineTraceSingleByChannel(
                HitResult, Start, End, ECC_WorldStatic,
                FCollisionQueryParams::DefaultQueryParam
            );
            
            if (!bHitGround)
            {
                // We're floating, let gravity take over
                CurrentState = EGolfBallState::InFlight;
                UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Ball was floating, allowing it to fall"));
            }
        }
    }, 0.1f, false);
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Placed at new location %s"), *NewLocation.ToString());
}

bool ASGGolfBall::IsBallStationary() const
{
    return CurrentState == EGolfBallState::Stationary;
}

float ASGGolfBall::GetCurrentSpeed() const
{
    if (!CollisionComponent)
        return 0.0f;
        
    return CollisionComponent->GetPhysicsLinearVelocity().Size();
}

FVector ASGGolfBall::GetBallVelocity() const
{
    if (!CollisionComponent)
        return FVector::ZeroVector;
        
    return CollisionComponent->GetPhysicsLinearVelocity();
}

void ASGGolfBall::UpdateBallState()
{
    if (!CollisionComponent)
        return;
        
    float CurrentSpeed = GetCurrentSpeed();
    FVector CurrentVelocity = GetBallVelocity();
    
    // Determine ball state based on speed and movement
    switch (CurrentState)
    {
        case EGolfBallState::InFlight:
            // Check if ball has landed (low Z velocity and touching ground)
            if (FMath::Abs(CurrentVelocity.Z) < 100.0f && CurrentSpeed < 500.0f) // Increased threshold
            {
                // Perform a trace to check if we're on the ground
                FVector Start = GetActorLocation();
                FVector End = Start - FVector(0, 0, BallRadius + 20.0f); // Increased trace distance
                
                FHitResult HitResult;
                bool bHitGround = GetWorld()->LineTraceSingleByChannel(
                    HitResult, Start, End, ECC_WorldStatic,
                    FCollisionQueryParams::DefaultQueryParam
                );
                
                if (bHitGround && CurrentSpeed > StopVelocityThreshold)
                {
                    CurrentState = EGolfBallState::Rolling;
                }
                else if (bHitGround && CurrentSpeed <= StopVelocityThreshold)
                {
                    CurrentState = EGolfBallState::Stationary;
                }
            }
            break;
            
        case EGolfBallState::Rolling:
            if (CurrentSpeed <= StopVelocityThreshold)
            {
                CurrentState = EGolfBallState::Stationary;
                LastStationaryPosition = GetActorLocation();
            }
            else if (FMath::Abs(CurrentVelocity.Z) > 100.0f)
            {
                CurrentState = EGolfBallState::InFlight;
            }
            break;
            
        case EGolfBallState::Stationary:
            if (CurrentSpeed > StopVelocityThreshold)
            {
                if (FMath::Abs(CurrentVelocity.Z) > 100.0f)
                {
                    CurrentState = EGolfBallState::InFlight;
                }
                else
                {
                    CurrentState = EGolfBallState::Rolling;
                }
            }
            break;
            
        default:
            break;
    }
}

void ASGGolfBall::UpdatePhysics(float DeltaTime)
{
    if (!CollisionComponent)
        return;
        
    // Apply additional physics effects based on state
    FVector CurrentVelocity = GetBallVelocity();
    
    switch (CurrentState)
    {
        case EGolfBallState::InFlight:
            // Apply additional downward force to simulate heavier gravity
            if (CollisionComponent)
            {
                FVector AdditionalGravity = FVector(0, 0, -2000.0f); // Extra downward force
                CollisionComponent->AddForce(AdditionalGravity);
            }
            break;
            
        case EGolfBallState::Rolling:
            // Additional rolling friction
            if (CurrentVelocity.Size() > 0.1f)
            {
                FVector HorizontalVelocity = FVector(CurrentVelocity.X, CurrentVelocity.Y, 0);
                FVector FrictionForce = -HorizontalVelocity.GetSafeNormal() * RollingFriction * 300.0f; // Increased friction force
                CollisionComponent->AddForce(FrictionForce);
            }
            break;
            
        case EGolfBallState::Stationary:
            // Ensure ball stays put
            if (CurrentVelocity.Size() < StopVelocityThreshold)
            {
                CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
            }
            break;
            
        default:
            break;
    }
}

void ASGGolfBall::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // Log collision for debugging
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Hit %s at %s"), 
           OtherActor ? *OtherActor->GetName() : TEXT("Unknown"), 
           *Hit.Location.ToString());
    
    // Handle different collision types
    if (OtherActor)
    {
        // Check for water
        if (OtherActor->ActorHasTag(TEXT("Water")))
        {
            CurrentState = EGolfBallState::InWater;
            UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Ball went into water!"));
        }
        // Check for out of bounds
        else if (OtherActor->ActorHasTag(TEXT("OutOfBounds")))
        {
            CurrentState = EGolfBallState::OutOfBounds;
            UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Ball went out of bounds!"));
        }
        // Handle bounce damping
        else if (CurrentState == EGolfBallState::InFlight)
        {
            FVector NewVelocity = GetBallVelocity() * BounceDamping;
            CollisionComponent->SetPhysicsLinearVelocity(NewVelocity);
        }
    }
}

void ASGGolfBall::SetBallSize(float NewRadius)
{
    BallRadius = FMath::Max(1.0f, NewRadius); // Minimum size of 1cm
    
    if (CollisionComponent)
    {
        CollisionComponent->SetSphereRadius(BallRadius);
    }
    
    if (BallMesh)
    {
        BallMesh->SetWorldScale3D(FVector(BallRadius / 50.0f));
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Ball size changed to radius %f cm"), BallRadius);
}