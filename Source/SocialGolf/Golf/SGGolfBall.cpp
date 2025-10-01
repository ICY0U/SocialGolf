#include "SGGolfBall.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Physics/PhysicsFiltering.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMesh.h"
#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Net/UnrealNetwork.h"
#include "../Characters/SGCharacter.h"
#include "../Golf/SGGolfClubManager.h"

ASGGolfBall::ASGGolfBall()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // CRITICAL: Multiplayer setup
    bReplicates = true;
    SetReplicateMovement(true); // Use proper API for UE5.6
    
    // Network optimization - use new API
    SetNetUpdateFrequency(20.0f); // Update rate for this actor
    SetMinNetUpdateFrequency(10.0f); // Minimum update rate
    SetNetCullDistanceSquared(10000.0f * 10000.0f); // Cull distance in cm squared
    
    // Create collision component
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;
    CollisionComponent->SetSphereRadius(BallRadius);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    CollisionComponent->SetNotifyRigidBodyCollision(true);
    
    // Enable physics - ONLY Chaos physics
    CollisionComponent->SetSimulatePhysics(true);
    CollisionComponent->SetEnableGravity(true);
    
    // Create ball mesh
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    BallMesh->SetupAttachment(RootComponent);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    BallMesh->SetGenerateOverlapEvents(false);
    
    // Ensure mesh is visible
    BallMesh->SetVisibility(true);
    BallMesh->SetHiddenInGame(false);
    
    // Try to load a sphere mesh as default
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere"));
    if (SphereMeshAsset.Succeeded())
    {
        BallMesh->SetStaticMesh(SphereMeshAsset.Object);
        BallMesh->SetWorldScale3D(FVector(BallRadius / 50.0f)); // Scale based on ball radius
        UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Sphere mesh loaded successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGGolfBall: Failed to load sphere mesh!"));
    }
    
    // Set default material to white (make it more visible)
    BallMesh->SetVectorParameterValueOnMaterials(FName("BaseColor"), FVector(1.0f, 1.0f, 1.0f));
    
    // Ensure actor is visible
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
    
    // Initialize state
    CurrentState = EGolfBallState::Stationary;
    DistanceTraveled = 0.0f;
    StrokeCount = 0;
    bIsInitialized = false;
    LastGroundLocation = FVector::ZeroVector;
    LastGroundNormal = FVector(0, 0, 1); // Default up vector
    CurrentBallOwner = nullptr;
    
    // Network optimization variables
    LastNetworkUpdateTime = 0.0f;
    LastNetworkLocation = FVector::ZeroVector;
    LastNetworkState = EGolfBallState::Stationary;
    
    // Bind collision event
    CollisionComponent->OnComponentHit.AddDynamic(this, &ASGGolfBall::OnHit);
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Constructor completed (Multiplayer Ready)"));
}

void ASGGolfBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    // Replicate critical state
    DOREPLIFETIME(ASGGolfBall, CurrentState);
    DOREPLIFETIME(ASGGolfBall, LastStationaryPosition);
    DOREPLIFETIME(ASGGolfBall, DistanceTraveled);
    DOREPLIFETIME(ASGGolfBall, StrokeCount);
    DOREPLIFETIME(ASGGolfBall, CurrentBallOwner);
}

void ASGGolfBall::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: %s BeginPlay started (Authority: %s, NetMode: %d)"), 
           *GetName(), HasAuthority() ? TEXT("Server") : TEXT("Client"), (int32)GetWorld()->GetNetMode());
    
    // Set up Chaos physics properties ONLY
    if (CollisionComponent)
    {
        CollisionComponent->SetMassOverrideInKg(NAME_None, BallMass / 1000.0f); // Convert grams to kg
        
        // Setup Chaos Physics for realistic ball behavior
        SetupChaosPhysics();
        
        // Enable gravity
        CollisionComponent->SetEnableGravity(true);
        
        // Ensure collision is enabled
        CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
        
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Chaos physics setup complete"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGGolfBall: No collision component found!"));
    }
    
    // Ensure mesh is visible
    if (BallMesh)
    {
        BallMesh->SetVisibility(true);
        BallMesh->SetHiddenInGame(false);
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Mesh visibility set"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGGolfBall: No ball mesh found!"));
    }
    
    // Force the actor to be visible
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
    
    LastStationaryPosition = GetActorLocation();
    PreviousLocation = GetActorLocation();
    LastNetworkLocation = GetActorLocation();
    bIsInitialized = true;
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Initialized at location %s"), *GetActorLocation().ToString());
}

void ASGGolfBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (!bIsInitialized)
        return;
        
    // ONLY use Chaos physics system
    UpdateChaosPhysics(DeltaTime);
    
    // Update distance traveled (only on server to avoid desync)
    if (HasAuthority())
    {
        FVector CurrentLocation = GetActorLocation();
        float FrameDistance = FVector::Dist(PreviousLocation, CurrentLocation);
        
        if (CurrentState == EGolfBallState::InFlight || CurrentState == EGolfBallState::Rolling)
        {
            DistanceTraveled += FrameDistance;
        }
        
        PreviousLocation = CurrentLocation;
        
        // Handle network updates
        UpdateNetworkState();
    }
    
    // Always draw debug info (clients can see debug too)
    DrawDebugInfo();
}

void ASGGolfBall::UpdateNetworkState()
{
    if (!HasAuthority())
        return;
        
    float CurrentTime = GetWorld()->GetTimeSeconds();
    
    // Check if we should send a network update
    if (ShouldSendNetworkUpdate() || (CurrentTime - LastNetworkUpdateTime) >= (1.0f / NetworkUpdateFrequency))
    {
        // Force a network update by marking the actor as dirty
        ForceNetUpdate();
        
        LastNetworkUpdateTime = CurrentTime;
        LastNetworkLocation = GetActorLocation();
        LastNetworkState = CurrentState;
    }
}

bool ASGGolfBall::ShouldSendNetworkUpdate() const
{
    if (!HasAuthority())
        return false;
        
    // Send update if state changed
    if (CurrentState != LastNetworkState)
        return true;
        
    // Send update if moved significantly
    float DistanceMoved = FVector::Dist(GetActorLocation(), LastNetworkLocation);
    if (DistanceMoved >= MovementThresholdForUpdate)
        return true;
        
    return false;
}

void ASGGolfBall::HitBall(const FVector& HitDirection, float Power)
{
    // Call the new function with default club parameters
    HitBallWithClub(HitDirection, Power, 1.0f, 25.0f, 0.8f);
}

void ASGGolfBall::ServerHitBall_Implementation(const FVector& HitDirection, float Power, AActor* HittingPlayer)
{
    // Validate the hit is allowed
    if (!CanPlayerHitBall(HittingPlayer))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server rejected hit from %s - not authorized"), 
               HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
        return;
    }
    
    // Set ball owner for this shot
    SetBallOwner(HittingPlayer);
    
    // Perform the hit on server
    HitBallWithClub(HitDirection, Power, 1.0f, 25.0f, 0.8f);
    
    // Notify all clients of the hit
    MulticastBallHit(HitDirection, Power, HittingPlayer);
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server processed hit from %s"), 
           HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
}

void ASGGolfBall::MulticastBallHit_Implementation(const FVector& HitDirection, float Power, AActor* HittingPlayer)
{
    // Play hit effects on all clients (sound, particles, etc.)
    // This is where you'd add visual/audio feedback for the hit
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Multicast hit effect - Player: %s, Power: %.1f"), 
           HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"), Power);
    
    // Example: Play hit sound, spawn particles, etc.
    // PlayHitSound();
    // SpawnHitParticles(GetActorLocation());
}

void ASGGolfBall::HitBallWithClub(const FVector& HitDirection, float Power, float ClubPowerMultiplier, float ClubLaunchAngle, float ClubAccuracy)
{
    // On clients, send to server
    if (!HasAuthority())
    {
        // Get the local player pawn to send as the hitting player
        APawn* LocalPawn = nullptr;
        if (UWorld* World = GetWorld())
        {
            if (APlayerController* PC = World->GetFirstPlayerController())
            {
                LocalPawn = PC->GetPawn();
            }
        }
        
        ServerHitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy, LocalPawn);
        return;
    }
    
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
    StrokeCount++;
    
    // Force immediate network update
    ForceNetUpdate();
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Hit with power %f (effective: %f) in direction %s (Launch Angle: %f°, Accuracy: %f)"), 
           Power, EffectivePower, *HitDirection.ToString(), ClubLaunchAngle, ClubAccuracy);
}

void ASGGolfBall::ServerHitBallWithClub_Implementation(const FVector& HitDirection, float Power, float ClubPowerMultiplier, float ClubLaunchAngle, float ClubAccuracy, AActor* HittingPlayer)
{
    // Validate the hit is allowed
    if (!CanPlayerHitBall(HittingPlayer))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server rejected club hit from %s - not authorized"), 
               HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
        return;
    }
    
    // Set ball owner for this shot
    SetBallOwner(HittingPlayer);
    
    // Perform the hit on server
    HitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy);
    
    // Notify all clients of the hit
    MulticastBallHit(HitDirection, Power, HittingPlayer);
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server processed club hit from %s"), 
           HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
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

bool ASGGolfBall::CanPlayerHitBall(AActor* Player) const
{
    // Basic proximity check
    if (!CanHitBall(Player))
        return false;
        
    // In multiplayer, you might want additional checks:
    // - Is it the player's turn?
    // - Are they in the right game state?
    // - Do they have permission to hit this ball?
    
    // For now, allow anyone close enough to hit
    return true;
}

bool ASGGolfBall::TryHitBallFromPlayer(AActor* Player, float Power)
{
    // On clients, validate locally first, then send to server
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
    
    // In mini golf mode, project hit direction onto ground plane
    if (bMiniGolfMode && IsOnGround())
    {
        FVector GroundNormal = GetGroundNormal();
        HitDirection = HitDirection - FVector::DotProduct(HitDirection, GroundNormal) * GroundNormal;
        HitDirection = HitDirection.GetSafeNormal();
    }
    
    // Hit the ball using appropriate system
    if (bMiniGolfMode)
    {
        // Use simpler hitting for mini golf - send to server
        if (HasAuthority())
        {
            HitBallMiniGolf(HitDirection, Power);
        }
        else
        {
            ServerHitBallMiniGolf(HitDirection, Power, Player);
        }
        return true;
    }
    else if (ASGCharacter* SGChar = Cast<ASGCharacter>(Player))
    {
        if (USGGolfClubManager* ClubManager = SGChar->GetGolfClubManager())
        {
            float ClubPowerMultiplier = ClubManager->GetPowerMultiplier();
            float ClubLaunchAngle = ClubManager->GetLaunchAngle();
            float ClubAccuracy = ClubManager->GetAccuracy();
            
            // Send to server
            if (HasAuthority())
            {
                HitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy);
            }
            else
            {
                ServerHitBallWithClub(HitDirection, Power, ClubPowerMultiplier, ClubLaunchAngle, ClubAccuracy, Player);
            }
            return true;
        }
    }
    
    // Fallback to regular hit - send to server
    if (HasAuthority())
    {
        HitBall(HitDirection, Power);
    }
    else
    {
        ServerHitBall(HitDirection, Power, Player);
    }
    return true;
}

void ASGGolfBall::HitBallMiniGolf(const FVector& HitDirection, float Power)
{
    if (!HasAuthority())
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: HitBallMiniGolf called on client - should use ServerHitBallMiniGolf"));
        return;
    }
    
    if (!CollisionComponent)
        return;
        
    // Clamp power between 0 and 100
    Power = FMath::Clamp(Power, 0.0f, 100.0f);
    
    // Convert power to rolling force with better scaling for more control
    // Use exponential scaling for more intuitive power control
    float PowerRatio = Power / 100.0f;
    float ScaledPower = FMath::Pow(PowerRatio, 1.5f); // Exponential scaling for better control
    float ForceToApply = ScaledPower * RollingForce;
    
    // Ensure direction is normalized and on ground plane
    FVector NormalizedDirection = HitDirection.GetSafeNormal();
    
    if (IsOnGround())
    {
        // Project onto ground plane for realistic rolling
        FVector GroundNormal = GetGroundNormal();
        NormalizedDirection = NormalizedDirection - FVector::DotProduct(NormalizedDirection, GroundNormal) * GroundNormal;
        NormalizedDirection = NormalizedDirection.GetSafeNormal();
    }
    
    // Calculate force vector (keep it horizontal for mini golf)
    FVector ForceVector = NormalizedDirection * ForceToApply;
    
    // Clear any existing velocity for clean hit
    CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
    CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
    
    // Apply impulse to the ball
    CollisionComponent->AddImpulse(ForceVector, NAME_None, true);
    
    // Add proper angular velocity for rolling motion
    if (IsOnGround())
    {
        FVector GroundNormal = GetGroundNormal();
        FVector InitialVelocity = CollisionComponent->GetPhysicsLinearVelocity();
        FVector AngularVelocity = FVector::CrossProduct(GroundNormal, InitialVelocity) / (BallRadius / 100.0f);
        CollisionComponent->SetPhysicsAngularVelocityInRadians(AngularVelocity);
    }
    
    // Update state to rolling (never flying in mini golf mode)
    CurrentState = EGolfBallState::Rolling;
    StrokeCount++;
    
    // Force immediate network update
    ForceNetUpdate();
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Mini golf hit - Power: %f%%, Scaled: %f, Force: %f"), 
           Power, ScaledPower, ForceToApply);
}

void ASGGolfBall::ServerHitBallMiniGolf_Implementation(const FVector& HitDirection, float Power, AActor* HittingPlayer)
{
    // Validate the hit is allowed
    if (!CanPlayerHitBall(HittingPlayer))
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server rejected mini golf hit from %s - not authorized"), 
               HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
        return;
    }
    
    // Set ball owner for this shot
    SetBallOwner(HittingPlayer);
    
    // Perform the hit on server
    HitBallMiniGolf(HitDirection, Power);
    
    // Notify all clients of the hit
    MulticastBallHit(HitDirection, Power, HittingPlayer);
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Server processed mini golf hit from %s"), 
           HittingPlayer ? *HittingPlayer->GetName() : TEXT("Unknown"));
}

void ASGGolfBall::ResetBall()
{
    if (!HasAuthority())
    {
        ServerResetBall();
        return;
    }
    
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
    
    // Clear ball owner
    SetBallOwner(nullptr);
    
    // Force immediate network update
    ForceNetUpdate();
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Reset to position %s"), *LastStationaryPosition.ToString());
}

void ASGGolfBall::ServerResetBall_Implementation()
{
    ResetBall();
}

void ASGGolfBall::PlaceBall(const FVector& NewLocation)
{
    if (!HasAuthority())
    {
        ServerPlaceBall(NewLocation);
        return;
    }
    
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
    
    // Clear ball owner
    SetBallOwner(nullptr);
    
    // Force immediate network update
    ForceNetUpdate();
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Placed at new location %s"), *NewLocation.ToString());
}

void ASGGolfBall::ServerPlaceBall_Implementation(const FVector& NewLocation)
{
    PlaceBall(NewLocation);
}

void ASGGolfBall::SetBallOwner(AActor* NewOwner)
{
    if (!HasAuthority())
        return;
        
    CurrentBallOwner = NewOwner;
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Ball owner set to %s"), 
           NewOwner ? *NewOwner->GetName() : TEXT("None"));
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
            if (FMath::Abs(CurrentVelocity.Z) < 100.0f && CurrentSpeed < 500.0f)
            {
                // Perform a trace to check if we're on the ground
                FVector Start = GetActorLocation();
                FVector End = Start - FVector(0, 0, BallRadius + 20.0f);
                
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
                
                // Clear ball owner when ball stops
                if (HasAuthority())
                {
                    SetBallOwner(nullptr);
                }
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

void ASGGolfBall::UpdateChaosPhysics(float DeltaTime)
{
    if (!CollisionComponent)
        return;
    
    FVector CurrentVelocity = GetBallVelocity();
    float CurrentSpeed = CurrentVelocity.Size();
    
    // Chaos physics handles most of the realistic behavior automatically
    // We just need to manage state transitions and add mini golf constraints
    
    if (bMiniGolfMode && IsOnGround())
    {
        // Keep ball on ground for mini golf
        KeepBallOnGround(DeltaTime);
        
        // Check if ball should stop
        if (CurrentSpeed <= MinimumRollingSpeed)
        {
            CurrentState = EGolfBallState::Stationary;
            // Completely stop the ball
            CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
            CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
            
            if (HasAuthority())
            {
                LastStationaryPosition = GetActorLocation();
                SetBallOwner(nullptr); // Clear owner when ball stops
            }
            return;
        }
        
        CurrentState = EGolfBallState::Rolling;
        
        // Project velocity onto ground plane for mini golf
        FVector GroundNormal = GetGroundNormal();
        FVector VelocityOnGround = CurrentVelocity - FVector::DotProduct(CurrentVelocity, GroundNormal) * GroundNormal;
        
        // Let Chaos physics handle the rolling, but keep it on ground
        if (FVector::DotProduct(CurrentVelocity, GroundNormal) > 0)
        {
            CollisionComponent->SetPhysicsLinearVelocity(VelocityOnGround);
        }
    }
    else
    {
        // Normal golf physics - let Chaos handle everything
        UpdateBallState();
    }
}

void ASGGolfBall::SetupChaosPhysics()
{
    if (!CollisionComponent)
        return;
    
    // Create a physical material for the golf ball
    GolfBallPhysMaterial = NewObject<UPhysicalMaterial>(this);
    if (GolfBallPhysMaterial)
    {
        // Set realistic golf ball material properties
        GolfBallPhysMaterial->Friction = PhysicalMaterialFriction;
        GolfBallPhysMaterial->Restitution = PhysicalMaterialRestitution;
        GolfBallPhysMaterial->Density = 1.14f; // Golf ball density (g/cm³)
        
        // Apply the physical material
        CollisionComponent->SetPhysMaterialOverride(GolfBallPhysMaterial);
        
        UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Chaos physics material applied"));
    }
    
    // Set Chaos-specific properties
    CollisionComponent->SetLinearDamping(LinearDamping);
    CollisionComponent->SetAngularDamping(AngularDamping);
    
    // Enable advanced physics features
    CollisionComponent->SetUseCCD(true); // Continuous collision detection for fast movement
    CollisionComponent->SetNotifyRigidBodyCollision(true);
    
    UE_LOG(LogTemp, Warning, TEXT("SGGolfBall: Chaos physics setup complete"));
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

void ASGGolfBall::KeepBallOnGround(float DeltaTime)
{
    if (!CollisionComponent)
        return;
    
    FVector BallLocation = GetActorLocation();
    FVector TraceStart = BallLocation + FVector(0, 0, 10.0f); // Start slightly above ball
    FVector TraceEnd = BallLocation - FVector(0, 0, GroundTraceDistance);
    
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    
    bool bHitGround = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        TraceStart,
        TraceEnd,
        ECC_WorldStatic,
        QueryParams
    );
    
    if (bHitGround)
    {
        LastGroundLocation = HitResult.Location;
        LastGroundNormal = HitResult.Normal;
        
        // Calculate desired position (ball radius above ground)
        FVector DesiredLocation = HitResult.Location + (HitResult.Normal * BallRadius);
        FVector CurrentLocation = GetActorLocation();
        
        // If ball is too far from ground, apply correction force (not teleport)
        float DistanceFromGround = FVector::Dist(CurrentLocation, DesiredLocation);
        if (DistanceFromGround > BallRadius * 0.8f) // Allow some tolerance
        {
            // Apply gradual correction force instead of teleporting
            FVector MoveDirection = (DesiredLocation - CurrentLocation).GetSafeNormal();
            FVector CorrectionForce = MoveDirection * GroundStickForce * DeltaTime;
            CollisionComponent->AddForce(CorrectionForce);
        }
    }
}

bool ASGGolfBall::IsOnGround() const
{
    if (!CollisionComponent)
        return false;
    
    FVector BallLocation = GetActorLocation();
    FVector TraceStart = BallLocation;
    FVector TraceEnd = BallLocation - FVector(0, 0, BallRadius + 20.0f);
    
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    
    bool bHitGround = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        TraceStart,
        TraceEnd,
        ECC_WorldStatic,
        QueryParams
    );
    
    return bHitGround && (HitResult.Distance <= BallRadius + 10.0f);
}

FVector ASGGolfBall::GetGroundNormal() const
{
    if (LastGroundNormal.IsZero())
    {
        return FVector(0, 0, 1); // Default to up vector
    }
    return LastGroundNormal;
}

void ASGGolfBall::OnRep_BallState()
{
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Ball state replicated - New state: %d"), (int32)CurrentState);
    
    // Handle client-side state changes
    switch (CurrentState)
    {
        case EGolfBallState::Stationary:
            // Ball stopped - could play stop sound/effect
            break;
        case EGolfBallState::InFlight:
            // Ball is flying - could play whoosh sound
            break;
        case EGolfBallState::Rolling:
            // Ball is rolling - could play rolling sound
            break;
        case EGolfBallState::InWater:
            // Ball in water - play splash sound/effect
            break;
        case EGolfBallState::OutOfBounds:
            // Ball out of bounds - play warning sound/effect
            break;
    }
}

void ASGGolfBall::OnRep_BallOwner()
{
    UE_LOG(LogTemp, Log, TEXT("SGGolfBall: Ball owner replicated - New owner: %s"), 
           CurrentBallOwner ? *CurrentBallOwner->GetName() : TEXT("None"));
    
    // Could update UI to show who owns the ball, change ball color, etc.
}

void ASGGolfBall::DrawDebugInfo()
{
    if (!bShowDebugInfo || !GetWorld())
        return;
    
    FVector BallLocation = GetActorLocation();
    FVector CurrentVelocity = GetBallVelocity();
    float CurrentSpeed = GetCurrentSpeed();
    
    // Always show debug info on right side of screen
    if (GEngine)
    {
        // Format state name
        FString StateName;
        switch (CurrentState)
        {
            case EGolfBallState::Stationary: StateName = TEXT("Stationary"); break;
            case EGolfBallState::InFlight: StateName = TEXT("In Flight"); break;
            case EGolfBallState::Rolling: StateName = TEXT("Rolling"); break;
            case EGolfBallState::InWater: StateName = TEXT("In Water"); break;
            case EGolfBallState::OutOfBounds: StateName = TEXT("Out of Bounds"); break;
            default: StateName = TEXT("Unknown"); break;
        }
        
        // Display debug information on screen (right side)
        FString DebugText = FString::Printf(TEXT(
            "=== GOLF BALL DEBUG (Chaos + Multiplayer) ===\n"
            "Network Mode: %s (Authority: %s)\n"
            "State: %s\n"
            "Speed: %.1f cm/s\n"
            "Velocity: X=%.1f Y=%.1f Z=%.1f\n"
            "Position: X=%.1f Y=%.1f Z=%.1f\n"
            "Strokes: %d\n"
            "Distance: %.1f cm\n"
            "On Ground: %s\n"
            "Mini Golf Mode: %s\n"
            "Current Owner: %s\n"
            "Mass: %.2f kg\n"
            "Damping: Lin=%.2f Ang=%.2f"
        ), 
            GetWorld()->GetNetMode() == NM_Standalone ? TEXT("Standalone") :
            GetWorld()->GetNetMode() == NM_DedicatedServer ? TEXT("Server") :
            GetWorld()->GetNetMode() == NM_ListenServer ? TEXT("Listen Server") : TEXT("Client"),
            HasAuthority() ? TEXT("Yes") : TEXT("No"),
            *StateName,
            CurrentSpeed,
            CurrentVelocity.X, CurrentVelocity.Y, CurrentVelocity.Z,
            BallLocation.X, BallLocation.Y, BallLocation.Z,
            StrokeCount,
            DistanceTraveled,
            IsOnGround() ? TEXT("Yes") : TEXT("No"),
            bMiniGolfMode ? TEXT("Yes") : TEXT("No"),
            CurrentBallOwner ? *CurrentBallOwner->GetName() : TEXT("None"),
            BallMass / 1000.0f,
            LinearDamping, AngularDamping
        );
        
        // Display on right side of screen with white text
        GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::White, DebugText);
    }
    
    // Show velocity vector
    if (bShowVelocityVector && CurrentSpeed > 10.0f)
    {
        FVector VelocityEnd = BallLocation + (CurrentVelocity.GetSafeNormal() * 200.0f);
        DrawDebugLine(GetWorld(), BallLocation, VelocityEnd, FColor::Red, false, 0.0f, 0, 3.0f);
        DrawDebugSphere(GetWorld(), VelocityEnd, 10.0f, 8, FColor::Red, false, 0.0f);
    }
    
    // Show ground trace
    if (bShowGroundTrace)
    {
        FVector TraceStart = BallLocation;
        FVector TraceEnd = BallLocation - FVector(0, 0, GroundTraceDistance);
        
        FHitResult HitResult;
        FCollisionQueryParams QueryParams;
        QueryParams.AddIgnoredActor(this);
        
        bool bHitGround = GetWorld()->LineTraceSingleByChannel(
            HitResult, TraceStart, TraceEnd, ECC_WorldStatic, QueryParams
        );
        
        FColor TraceColor = bHitGround ? FColor::Green : FColor::Yellow;
        DrawDebugLine(GetWorld(), TraceStart, TraceEnd, TraceColor, false, 0.0f, 0, 2.0f);
        
        if (bHitGround)
        {
            DrawDebugSphere(GetWorld(), HitResult.Location, 5.0f, 8, FColor::Green, false, 0.0f);
            DrawDebugLine(GetWorld(), HitResult.Location, HitResult.Location + (HitResult.Normal * 50.0f), FColor::Blue, false, 0.0f, 0, 2.0f);
        }
    }
    
    // Show ball collision sphere
    FColor SphereColor = CurrentBallOwner ? FColor::Orange : FColor::White;
    DrawDebugSphere(GetWorld(), BallLocation, BallRadius, 12, SphereColor, false, 0.0f, 0, 1.0f);
    
    // Show owner indicator
    if (CurrentBallOwner)
    {
        FVector OwnerLocation = CurrentBallOwner->GetActorLocation();
        DrawDebugLine(GetWorld(), BallLocation, OwnerLocation, FColor::Orange, false, 0.0f, 0, 2.0f);
    }
}