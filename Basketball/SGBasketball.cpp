#include "SGBasketball.h"
#include "../Characters/SGCharacter.h"
#include "SGBasketballGameManager.h"
#include "SGBasketballHoop.h"
#include "SGBasketballPhysicsMaterial.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

ASGBasketball::ASGBasketball()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    // UPDATED: Small ball radius - increased from 6cm to 10cm for better visibility
    float DesiredRadius = 10.0f; // cm - small basketball (increased from 6cm)
    BallRadius = DesiredRadius;

    // Create root collision component
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;
    CollisionComponent->SetSphereRadius(BallRadius);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionComponent->SetCollisionObjectType(ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
    // FIXED: Change to ECR_Overlap for better pickup detection
    CollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); 
    // ADDED: Ensure interaction channel allows overlaps
    CollisionComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // Create mesh component
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    BallMesh->SetupAttachment(RootComponent);
    BallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Collision handled by sphere component

    // Load basketball mesh (we'll use a sphere for now)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (SphereMeshAsset.Succeeded())
    {
        BallMesh->SetStaticMesh(SphereMeshAsset.Object);
        // UPDATED: Small scale to match 10cm radius (increased from 0.24)
        // 20cm diameter / 100cm diameter = 0.20, but mesh needs to be doubled = 0.40
        FVector DesiredScale = FVector(0.40f, 0.40f, 0.40f);
        BallMesh->SetRelativeScale3D(DesiredScale);
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketball: Mesh scale set to %s for radius %f cm (SMALL)"), 
               *DesiredScale.ToString(), BallRadius);
        
        // Apply basketball material if available
        static ConstructorHelpers::FObjectFinder<UMaterialInterface> BasketballMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
        if (BasketballMaterial.Succeeded())
        {
            BallMesh->SetMaterial(0, BasketballMaterial.Object);
        }
    }

    // Create audio component
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->SetupAttachment(RootComponent);
    AudioComponent->bAutoActivate = false;

    // Create focusable component for interaction system
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));

    // Initialize enhanced physics properties
    AirResistanceMultiplier = 1.0f;
    MagnusEffectStrength = 0.25f;
    SpinDecayMultiplier = 0.85f;
    bEnableRealisticPhysics = true;
    BounceRandomization = 20.0f;
    bDetectSurfaceTypes = true;
    MinimumBounceVelocity = 50.0f;

    // Setup enhanced physics
    SetupPhysics();

    // Bind collision events
    CollisionComponent->OnComponentHit.AddDynamic(this, &ASGBasketball::OnHit);

    // Initialize tracking variables
    bHasBeenThrown = false;
    LastThrower = nullptr;
    ThrowStartLocation = FVector::ZeroVector;
    ThrowStartTime = 0.0f;

    UE_LOG(LogTemp, Warning, TEXT("SGBasketball: Basketball created with VERY SMALL SIZE (radius: %f cm, scale: 0.24)"), BallRadius);
}

void ASGBasketball::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s BeginPlay - HasAuthority: %s"), 
           *GetName(), HasAuthority() ? TEXT("true") : TEXT("false"));
}

void ASGBasketball::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Update position if being held
    if (bIsBeingHeld && HoldingPlayer)
    {
        // Attach position logic will be handled in AttachToPlayer
    }
    
    // Track thrown ball for shot registration
    if (bHasBeenThrown && IsValid(LastThrower))
    {
        // Check if ball has been thrown for too long (shot missed)
        float TimeSinceThrow = GetWorld()->GetTimeSeconds() - ThrowStartTime;
        if (TimeSinceThrow > 10.0f) // 10 seconds timeout
        {
            RegisterMissedShot();
        }
        
        // IMPROVED: Reduced threshold from 50 to 20 cm/s - only register as missed when almost stopped
        if (CollisionComponent && CollisionComponent->GetPhysicsLinearVelocity().Size() < 20.0f)
        {
            RegisterMissedShot();
        }
    }

    // NEW: Slope rolling physics
    ApplySlopeRollingPhysics(DeltaTime);
}

void ASGBasketball::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGBasketball, bIsBeingHeld);
    DOREPLIFETIME(ASGBasketball, HoldingPlayer);
    DOREPLIFETIME(ASGBasketball, bHasBeenThrown);
    DOREPLIFETIME(ASGBasketball, LastThrower);
    
    // Replicate basketball properties for multiplayer
    DOREPLIFETIME(ASGBasketball, BallRadius);
    DOREPLIFETIME(ASGBasketball, PickupRange);
    DOREPLIFETIME(ASGBasketball, LastThrowPower);
    DOREPLIFETIME(ASGBasketball, LastThrowDirection);
}

void ASGBasketball::SetupPhysics()
{
    if (CollisionComponent)
    {
        CollisionComponent->SetSimulatePhysics(true);
        CollisionComponent->SetMassOverrideInKg(NAME_None, BallMass);
        
        // REDUCED damping for longer rolling behavior
        CollisionComponent->SetLinearDamping(0.01f); // Reduced from 0.02f - less resistance
        CollisionComponent->SetAngularDamping(0.05f); // Reduced from 0.08f - keeps spinning longer
        
        // Create and apply enhanced basketball physics material
        USGBasketballPhysicsMaterial* BasketballPhysMat = USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType::Court_Wood);
        if (BasketballPhysMat)
        {
            CollisionComponent->SetPhysMaterialOverride(BasketballPhysMat);
            UE_LOG(LogTemp, Log, TEXT("SGBasketball: Applied enhanced basketball physics material"));
        }
        
        // Enhanced physics settings for more realistic basketball behavior
        CollisionComponent->SetNotifyRigidBodyCollision(true); // Enable detailed collision detection
        CollisionComponent->SetUseCCD(true); // Continuous collision detection for fast-moving ball
        
        // Set collision object type and responses
        CollisionComponent->SetCollisionObjectType(ECC_WorldDynamic);
        CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
        CollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); // For pickup detection
        
        UE_LOG(LogTemp, Log, TEXT("SGBasketball: Enhanced physics setup complete"));
    }
}

void ASGBasketball::OnRep_IsBeingHeld()
{
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s OnRep_IsBeingHeld - Being held: %s"), 
           *GetName(), bIsBeingHeld ? TEXT("true") : TEXT("false"));
    
    if (bIsBeingHeld)
    {
        DisablePhysics();
    }
    else
    {
        EnablePhysics();
        DetachFromPlayer();
    }
}

void ASGBasketball::OnRep_HoldingPlayer()
{
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s OnRep_HoldingPlayer - Player: %s"), 
           *GetName(), HoldingPlayer ? *HoldingPlayer->GetName() : TEXT("None"));
    
    if (HoldingPlayer && bIsBeingHeld)
    {
        AttachToPlayer(HoldingPlayer);
    }
}

bool ASGBasketball::CanBePickedUp() const
{
    // Allow pickup if not being held and either never thrown or has settled after being thrown
    if (bIsBeingHeld)
    {
        return false;
    }
    
    // If the ball has been thrown, check if it has settled
    if (bHasBeenThrown)
    {
        // Allow pickup if the ball has settled (low velocity) or 3 seconds have passed
        if (CollisionComponent)
        {
            float CurrentVelocity = CollisionComponent->GetPhysicsLinearVelocity().Size();
            float TimeSinceThrow = GetWorld()->GetTimeSeconds() - ThrowStartTime;
            
            // IMPROVED: Reduced velocity threshold from 100 to 30 cm/s - ball must be almost stopped
            // Allow pickup if velocity is very low (ball has settled) or 3 seconds have passed
            bool bHasSettled = CurrentVelocity < 30.0f || TimeSinceThrow > 3.0f;
            
            if (bHasSettled)
            {
                // Reset throw state when ball has settled
                const_cast<ASGBasketball*>(this)->bHasBeenThrown = false;
                const_cast<ASGBasketball*>(this)->LastThrower = nullptr;
                return true;
            }
            
            return false; // Still in flight or rolling
        }
    }
    
    return true; // Never been thrown or has settled
}

void ASGBasketball::PickupBall(ASGCharacter* Player)
{
    if (HasAuthority())
    {
        if (Player && CanBePickedUp())
        {
            HoldingPlayer = Player;
            bIsBeingHeld = true;
            bHasBeenThrown = false; // Reset throw state when picked up
            LastThrower = nullptr;
            LastThrowPower = 0.0f; // Reset replicated throw data
            LastThrowDirection = FVector::ZeroVector;
            
            // Set the basketball on the character
            Player->SetHeldBasketball(this);
            
            // Apply changes locally on server
            OnRep_IsBeingHeld();
            OnRep_HoldingPlayer();
            
            // Notify all clients about pickup
            MulticastOnBasketballPickedUp(Player);
            
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s picked up by %s (REPLICATED)"), *GetName(), *Player->GetName());
        }
    }
    else
    {
        ServerPickupBall(Player);
    }
}

void ASGBasketball::DropBall()
{
    if (HasAuthority())
    {
        if (bIsBeingHeld)
        {
            ASGCharacter* PreviousHolder = HoldingPlayer;
            FVector DropLocation = GetActorLocation();
            
            HoldingPlayer = nullptr;
            bIsBeingHeld = false;
            
            // Clear the basketball from the character
            if (PreviousHolder)
            {
                PreviousHolder->SetHeldBasketball(nullptr);
            }
            
            // Apply changes locally on server
            OnRep_IsBeingHeld();
            OnRep_HoldingPlayer();
            
            // Notify all clients about drop
            MulticastOnBasketballDropped(DropLocation);
            
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s dropped by %s (REPLICATED)"), 
                   *GetName(), PreviousHolder ? *PreviousHolder->GetName() : TEXT("Unknown"));
        }
    }
    else
    {
        ServerDropBall();
    }
}

void ASGBasketball::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (!CollisionComponent)
    {
        return;
    }
    
    // Get impact velocity and material
    FVector CurrentVelocity = CollisionComponent->GetPhysicsLinearVelocity();
    FVector CurrentAngularVelocity = CollisionComponent->GetPhysicsAngularVelocityInRadians();
    float ImpactSpeed = CurrentVelocity.Size();
    
    // Enhanced bounce sound based on impact force and surface
    float ImpactForce = NormalImpulse.Size();
    if (ImpactForce > 50.0f) // Lower threshold for more responsive audio
    {
        PlayEnhancedBounceSound(ImpactForce, Hit);
        UE_LOG(LogTemp, Log, TEXT("SGBasketball: Enhanced bounce - Force: %f, Speed: %f"), ImpactForce, ImpactSpeed);
    }
    
    // Apply enhanced bounce physics if we have our custom material
    if (USGBasketballPhysicsMaterial* BasketballMat = Cast<USGBasketballPhysicsMaterial>(Hit.PhysMaterial.Get()))
    {
        ApplyEnhancedBouncePhysics(Hit, CurrentVelocity, CurrentAngularVelocity, BasketballMat);
    }
    
    // Apply spin decay based on surface interaction
    ApplySpinDecay(Hit, CurrentAngularVelocity);
    
    // Check if we hit a basketball hoop scoring zone
    if (bHasBeenThrown && IsValid(LastThrower))
    {
        if (ASGBasketballHoop* Hoop = Cast<ASGBasketballHoop>(OtherActor))
        {
            UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s hit hoop %s"), *GetName(), *Hoop->GetName());
        }
    }
}

void ASGBasketball::ApplyEnhancedBouncePhysics(const FHitResult& Hit, const FVector& CurrentVelocity, const FVector& CurrentAngularVelocity, USGBasketballPhysicsMaterial* Material)
{
    if (!CollisionComponent || !Material)
    {
        return;
    }
    
    // Calculate velocity-based restitution
    float ImpactSpeed = FVector::DotProduct(CurrentVelocity, -Hit.ImpactNormal);
    float DynamicRestitution = Material->GetVelocityBasedRestitution(ImpactSpeed);
    
    // Calculate spin-influenced bounce direction
    FVector SpinInfluencedVelocity = Material->CalculateSpinInfluencedBounce(CurrentVelocity, Hit.ImpactNormal, CurrentAngularVelocity);
    
    // Apply realistic energy loss
    float EnergyRetention = FMath::Clamp(DynamicRestitution, 0.1f, 0.95f);
    FVector NewVelocity = SpinInfluencedVelocity * EnergyRetention;
    
    // Add small random variation for more natural behavior
    FVector RandomVariation = FVector(
        FMath::RandRange(-10.0f, 10.0f),
        FMath::RandRange(-10.0f, 10.0f),
        FMath::RandRange(-5.0f, 5.0f)
    );
    NewVelocity += RandomVariation;
    
    // Apply enhanced velocity
    CollisionComponent->SetPhysicsLinearVelocity(NewVelocity);
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: Enhanced bounce applied - Restitution: %f, Speed: %f -> %f"), 
           DynamicRestitution, CurrentVelocity.Size(), NewVelocity.Size());
}

void ASGBasketball::ApplySpinDecay(const FHitResult& Hit, const FVector& CurrentAngularVelocity)
{
    if (!CollisionComponent)
    {
        return;
    }
    
    // Get spin decay rate from material or use default
    float SpinDecayRate = 0.85f; // Default decay
    if (USGBasketballPhysicsMaterial* BasketballMat = Cast<USGBasketballPhysicsMaterial>(Hit.PhysMaterial.Get()))
    {
        SpinDecayRate = BasketballMat->SpinDecayRate;
    }
    
    // Apply spin decay
    FVector NewAngularVelocity = CurrentAngularVelocity * SpinDecayRate;
    
    // Add some random spin variation based on surface interaction
    FVector SurfaceInfluencedSpin = FVector(
        FMath::RandRange(-1.0f, 1.0f),
        FMath::RandRange(-1.0f, 1.0f),
        FMath::RandRange(-1.0f, 1.0f)
    ) * (1.0f - SpinDecayRate); // More variation on rougher surfaces
    
    NewAngularVelocity += SurfaceInfluencedSpin;
    CollisionComponent->SetPhysicsAngularVelocityInRadians(NewAngularVelocity);
    
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Spin decay applied - Rate: %f"), SpinDecayRate);
}

void ASGBasketball::PlayEnhancedBounceSound(float ImpactForce, const FHitResult& Hit)
{
    // Calculate volume based on impact force
    float Volume = FMath::Clamp(ImpactForce / 2000.0f, 0.1f, 1.0f);
    
    // Calculate pitch variation based on ball size and material
    float Pitch = 1.0f;
    float PitchVariation = 0.1f;
    
    // Get material-specific sound properties
    if (USGBasketballPhysicsMaterial* BasketballMat = Cast<USGBasketballPhysicsMaterial>(Hit.PhysMaterial.Get()))
    {
        Volume *= BasketballMat->SoundVolumeMultiplier;
        PitchVariation = BasketballMat->SoundPitchVariation;
        
        // Adjust pitch based on surface type
        switch (BasketballMat->BasketballSurfaceType)
        {
            case EBasketballSurfaceType::Court_Wood:
                Pitch = FMath::RandRange(0.9f, 1.1f);
                break;
            case EBasketballSurfaceType::Court_Concrete:
                Pitch = FMath::RandRange(1.1f, 1.3f); // Higher pitch on concrete
                break;
            case EBasketballSurfaceType::Grass:
                Pitch = FMath::RandRange(0.6f, 0.8f); // Lower, muffled on grass
                break;
            case EBasketballSurfaceType::Sand:
                Pitch = FMath::RandRange(0.4f, 0.6f); // Very muffled
                break;
            case EBasketballSurfaceType::Metal:
                Pitch = FMath::RandRange(1.3f, 1.6f); // Very high pitch on metal
                break;
            default:
                Pitch = FMath::RandRange(0.9f, 1.1f);
                break;
        }
    }
    else
    {
        Pitch = FMath::RandRange(0.9f, 1.1f);
    }
    
    // Play the sound with calculated properties
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Enhanced bounce sound - Volume: %f, Pitch: %f"), Volume, Pitch);
    
    // TODO: Implement actual sound playback with calculated volume and pitch
    // if (AudioComponent && BounceSoundCue)
    // {
    //     AudioComponent->SetSound(BounceSoundCue);
    //     AudioComponent->SetVolumeMultiplier(Volume);
    //     AudioComponent->SetPitchMultiplier(Pitch);
    //     AudioComponent->Play();
    // }
}

void ASGBasketball::ThrowBall(const FVector& ThrowDirection, float ThrowPower)
{
    if (HasAuthority())
    {
        if (bIsBeingHeld && HoldingPlayer)
        {
            // Store throw information for tracking AND replication
            LastThrower = HoldingPlayer;
            LastThrowPower = ThrowPower;
            LastThrowDirection = ThrowDirection;
            ThrowStartLocation = GetActorLocation();
            ThrowStartTime = GetWorld()->GetTimeSeconds();
            bHasBeenThrown = true;
            
            // Notify game manager about the throw
            NotifyGameManagerOfThrow();
            
            // Drop the ball first
            DropBall();
            
            // SLIGHTLY INCREASED POWER FOR BETTER RANGE
            if (CollisionComponent)
            {
                FVector ClampedDirection = ThrowDirection.GetClampedToMaxSize(1.0f);
                
                // MODERATELY INCREASED POWER CALCULATION - Better balance of control and range
                float BasePower = FMath::Clamp(ThrowPower, 40.0f, 200.0f); // Increased from 25-150 to 40-200
                
                // Power curve for more natural feel - more aggressive curve for better low-power control
                float PowerPercentage = (ThrowPower - 40.0f) / 160.0f; // Adjusted for new range
                PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
                
                // Apply more aggressive curve for even better control at lower powers
                float CurvedPower = PowerPercentage * PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * 0.2f;
                float FinalPower = 40.0f + (CurvedPower * 160.0f);
                
                // Power multiplier moderately increased for better range
                float PowerMultiplier = 4.0f; // Increased from 3.0f to 4.0f for better range
                FVector ThrowForce = ClampedDirection * FinalPower * PowerMultiplier;
                
                // Validate the throw direction
                if (ClampedDirection.IsNearlyZero())
                {
                    UE_LOG(LogTemp, Error, TEXT("SGBasketball: Invalid throw direction, using fallback"));
                    ClampedDirection = FVector(1.0f, 0.0f, 0.3f);
                    ClampedDirection.Normalize();
                    ThrowForce = ClampedDirection * FinalPower * PowerMultiplier;
                }
                
                // ENHANCED BASKETBALL SPIN - More realistic backspin calculation (keeping enhanced spin)
                FVector EnhancedSpin = CalculateRealisticBasketballSpin(ClampedDirection, FinalPower);
                
                // Reset physics state
                CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
                CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
                
                // Apply the enhanced throw forces
                CollisionComponent->AddImpulse(ThrowForce, NAME_None, true);
                CollisionComponent->AddAngularImpulseInRadians(EnhancedSpin, NAME_None, true);
                
                // Multicast the throw for visual feedback
                MulticastOnBasketballThrown(ThrowDirection, FinalPower, GetActorLocation());
                
                UE_LOG(LogTemp, Warning, TEXT("SGBasketball: BALANCED POWER throw applied - Input Power: %.0f -> Final Power: %.0f, Force: %s, Spin: %s"), 
                       ThrowPower, FinalPower, *ThrowForce.ToString(), *EnhancedSpin.ToString());
                
                // Debug current velocity
                FVector PostThrowVelocity = CollisionComponent->GetPhysicsLinearVelocity();
                UE_LOG(LogTemp, Warning, TEXT("SGBasketball: Post-throw velocity: %s (Speed: %f)"), 
                       *PostThrowVelocity.ToString(), PostThrowVelocity.Size());
            }
        }
    }
    else
    {
        ServerThrowBall(ThrowDirection, ThrowPower);
    }
}

void ASGBasketball::ServerThrowBall_Implementation(const FVector& ThrowDirection, float ThrowPower)
{
    ThrowBall(ThrowDirection, ThrowPower);
}

void ASGBasketball::ServerDropBall_Implementation()
{
    DropBall();
}

void ASGBasketball::ServerPickupBall_Implementation(ASGCharacter* Player)
{
    PickupBall(Player);
}

FVector ASGBasketball::CalculateInitialVelocity(const FVector& ThrowDirection, float ThrowPower) const
{
    // Calculate initial velocity using the same reduced power settings as ThrowBall function
    // This ensures trajectory prediction matches actual throw behavior
    FVector ClampedDirection = ThrowDirection.GetClampedToMaxSize(1.0f);
    
    // MODERATELY INCREASED POWER CALCULATION - Matching the ThrowBall function exactly
    float BasePower = FMath::Clamp(ThrowPower, 40.0f, 200.0f); // Updated to match new balanced range
    
    // Power curve for more natural feel - more aggressive curve matching ThrowBall
    float PowerPercentage = (ThrowPower - 40.0f) / 160.0f; // Adjusted for new range
    PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
    
    // Apply same aggressive curve as actual throw
    float CurvedPower = PowerPercentage * PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * 0.2f;
    float FinalPower = 40.0f + (CurvedPower * 160.0f);
    
    // Power multiplier increased to match actual throw (updated)
    float PowerMultiplier = 4.0f; // Updated to match the new balanced multiplier
    FVector InitialVelocity = ClampedDirection * FinalPower * PowerMultiplier;
    
    // Validate the throw direction
    if (ClampedDirection.IsNearlyZero())
    {
        UE_LOG(LogTemp, Error, TEXT("SGBasketball: Invalid throw direction in CalculateInitialVelocity, using fallback"));
        ClampedDirection = FVector(1.0f, 0.0f, 0.3f);
        ClampedDirection.Normalize();
        InitialVelocity = ClampedDirection * FinalPower * PowerMultiplier;
    }
    
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: CalculateInitialVelocity - Input Power: %.0f -> Final Power: %.0f, Velocity: %s (Speed: %f)"), 
           ThrowPower, FinalPower, *InitialVelocity.ToString(), InitialVelocity.Size());
    
    return InitialVelocity;
}

FVector ASGBasketball::CalculateRealisticBasketballSpin(const FVector& ThrowDirection, float ThrowPower) const
{
    // ENHANCED REALISTIC BASKETBALL SPIN CALCULATION
    FVector Spin = FVector::ZeroVector;
    
    // Create backspin perpendicular to the throw direction (most important for basketball shots)
    FVector RightVector = FVector::CrossProduct(ThrowDirection, FVector::UpVector).GetSafeNormal();
    if (RightVector.IsNearlyZero())
    {
        RightVector = FVector::CrossProduct(ThrowDirection, FVector::ForwardVector).GetSafeNormal();
    }
    
    // IMPROVED SPIN CALCULATION - Power-dependent and more realistic
    float PowerRatio = ThrowPower / 3500.0f; // Normalize against max power
    
    // Backspin magnitude - stronger throws get more backspin for better accuracy
    float BackspinMagnitude = FMath::Lerp(8.0f, 20.0f, PowerRatio); // Realistic basketball backspin range
    
    // Shooting angle affects spin - higher angle shots get more backspin
    float ShootingAngle = FMath::Asin(FMath::Clamp(ThrowDirection.Z, -1.0f, 1.0f));
    float AngleFactor = FMath::Clamp(ShootingAngle / (PI/4), 0.5f, 1.5f); // Boost for higher angle shots
    
    BackspinMagnitude *= AngleFactor;
    
    // Apply realistic backspin
    Spin = RightVector * BackspinMagnitude;
    
    // Add slight side spin for natural variation (simulates hand release)
    float SideSpinVariation = FMath::RandRange(-2.0f, 2.0f);
    FVector ForwardVector = ThrowDirection.GetSafeNormal();
    Spin += ForwardVector * SideSpinVariation;
    
    // Add small random variations for realistic feel
    Spin += FVector(
        FMath::RandRange(-1.5f, 1.5f),
        FMath::RandRange(-1.5f, 1.5f),
        FMath::RandRange(-0.8f, 0.8f)
    );
    
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Enhanced spin calculated - Power: %.0f, Angle: %.1f degrees"), 
           ThrowPower, FMath::RadiansToDegrees(ShootingAngle));
    
    return Spin;
}

FVector ASGBasketball::CalculateRealisticSpin(const FVector& ThrowDirection, float ThrowPower) const
{
    // Use the enhanced calculation for all spin calculations
    return CalculateRealisticBasketballSpin(ThrowDirection, ThrowPower);
}

// Enhanced trajectory prediction with realistic basketball physics
TArray<FVector> ASGBasketball::PredictTrajectoryPath(const FVector& StartLocation, const FVector& InitialVelocity) const
{
    TArray<FVector> TrajectoryPoints;
    
    if (!GetWorld())
    {
        return TrajectoryPoints;
    }
    
    // Simplified physics simulation for better prediction accuracy
    FVector CurrentLocation = StartLocation;
    FVector CurrentVelocity = InitialVelocity;
    float TimeStep = 0.05f; // Reduced time step for better accuracy
    FVector Gravity = FVector(0.0f, 0.0f, GetWorld()->GetGravityZ());
    
    // Simplified air resistance for prediction (less complex but more stable)
    float AirResistance = 0.99f; // Simple velocity damping per step
    
    TrajectoryPoints.Add(CurrentLocation);
    
    // Increase trajectory steps for better visual
    int32 MaxSteps = 50; // Increased from 30 to 50 for longer prediction
    
    for (int32 Step = 0; Step < MaxSteps; Step++)
    {
        // Simple physics integration
        FVector Acceleration = Gravity;
        CurrentVelocity += Acceleration * TimeStep;
        CurrentVelocity *= AirResistance; // Apply simple air resistance
        
        FVector NextLocation = CurrentLocation + CurrentVelocity * TimeStep;
        
        // Simple collision detection
        FHitResult HitResult;
        FCollisionQueryParams QueryParams;
        QueryParams.AddIgnoredActor(const_cast<ASGBasketball*>(this));
        QueryParams.bTraceComplex = false;
        
        bool bHit = GetWorld()->LineTraceSingleByChannel(
            HitResult,
            CurrentLocation,
            NextLocation,
            ECC_WorldStatic,
            QueryParams
        );
        
        if (bHit)
        {
            // Add hit point and stop prediction
            TrajectoryPoints.Add(HitResult.Location);
            break;
        }
        
        // Check if ball goes too low
        if (NextLocation.Z < StartLocation.Z - 2000.0f) // 20 meters below start
        {
            TrajectoryPoints.Add(NextLocation);
            break;
        }
        
        // Update for next iteration
        CurrentLocation = NextLocation;
        TrajectoryPoints.Add(CurrentLocation);
        
        // Stop if velocity gets too low
        if (CurrentVelocity.Size() < 50.0f)
        {
            break;
        }
    }
    
    return TrajectoryPoints;
}

FVector ASGBasketball::PredictBounceVelocity(const FVector& IncomingVelocity, const FHitResult& Hit) const
{
    // Default bounce calculation
    float Restitution = 0.75f; // Default basketball restitution
    
    // Use enhanced material properties if available
    if (USGBasketballPhysicsMaterial* BasketballMat = Cast<USGBasketballPhysicsMaterial>(Hit.PhysMaterial.Get()))
    {
        float ImpactSpeed = FVector::DotProduct(IncomingVelocity, -Hit.ImpactNormal);
        Restitution = BasketballMat->GetVelocityBasedRestitution(ImpactSpeed);
    }
    
    // Calculate reflection
    FVector Reflection = IncomingVelocity - 2.0f * FVector::DotProduct(IncomingVelocity, Hit.ImpactNormal) * Hit.ImpactNormal;
    
    // Apply restitution and energy loss
    FVector BounceVelocity = Reflection * Restitution;
    
    // Add slight randomization for natural behavior
    BounceVelocity += FVector(
        FMath::RandRange(-20.0f, 20.0f),
        FMath::RandRange(-20.0f, 20.0f),
        FMath::RandRange(-10.0f, 10.0f)
    );
    
    return BounceVelocity;
}

void ASGBasketball::NotifyGameManagerOfThrow()
{
    if (!HasAuthority() || !IsValid(LastThrower))
        return;
    
    // Find the basketball game manager
    TArray<AActor*> FoundManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballGameManager::StaticClass(), FoundManagers);
    
    if (FoundManagers.Num() > 0)
    {
        if (ASGBasketballGameManager* GameManager = Cast<ASGBasketballGameManager>(FoundManagers[0]))
        {
            GameManager->OnBasketballThrown(LastThrower);
        }
    }
}

void ASGBasketball::NotifyGameManagerOfScore(ASGBasketballHoop* Hoop)
{
    if (!HasAuthority() || !IsValid(LastThrower) || !IsValid(Hoop))
        return;
    
    // Find the basketball game manager
    TArray<AActor*> FoundManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballGameManager::StaticClass(), FoundManagers);
    
    if (FoundManagers.Num() > 0)
    {
        if (ASGBasketballGameManager* GameManager = Cast<ASGBasketballGameManager>(FoundManagers[0]))
        {
            GameManager->OnBasketballScored(LastThrower, Hoop);
        }
    }
    
    // Reset tracking
    bHasBeenThrown = false;
    LastThrower = nullptr;
}

void ASGBasketball::RegisterMissedShot()
{
    if (!HasAuthority() || !bHasBeenThrown)
        return;
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: Shot by %s registered as missed"), 
           LastThrower ? *LastThrower->GetName() : TEXT("Unknown"));
    
    // Reset tracking
    bHasBeenThrown = false;
    LastThrower = nullptr;
}

void ASGBasketball::MulticastOnBasketballThrown_Implementation(const FVector& Direction, float Power, const FVector& StartLocation)
{
    // This runs on all clients for visual effects
    UE_LOG(LogTemp, Log, TEXT("?? CLIENT: Basketball thrown with power %f in direction %s"), Power, *Direction.ToString());
    
    // You can add visual effects here like:
    // - Particle effects at throw location
    // - Sound effects for throw
    // - UI feedback showing throw power
    // - Trail effects on the ball
    
    if (ThrowSoundCue && AudioComponent)
    {
        AudioComponent->SetSound(ThrowSoundCue);
        AudioComponent->Play();
    }
}

void ASGBasketball::MulticastOnBasketballPickedUp_Implementation(ASGCharacter* Player)
{
    // Visual/audio feedback for pickup on all clients
    UE_LOG(LogTemp, Log, TEXT("?? CLIENT: Basketball picked up by %s"), Player ? *Player->GetName() : TEXT("Unknown"));
    
    if (PickupSoundCue && AudioComponent)
    {
        AudioComponent->SetSound(PickupSoundCue);
        AudioComponent->Play();
    }
}

void ASGBasketball::MulticastOnBasketballDropped_Implementation(const FVector& DropLocation)
{
    // Visual/audio feedback for drop on all clients
    UE_LOG(LogTemp, Log, TEXT("?? CLIENT: Basketball dropped at location %s"), *DropLocation.ToString());
}

void ASGBasketball::PredictAndShowTrajectory(const FVector& StartLocation, const FVector& InitialVelocity)
{
    if (!bShowTrajectoryPrediction)
    {
        return;
    }
    
    // Calculate enhanced trajectory path
    TArray<FVector> TrajectoryPoints = PredictTrajectoryPath(StartLocation, InitialVelocity);
    
    // Draw the enhanced visualization
    DrawTrajectoryVisualization(TrajectoryPoints);
    
    // Enhanced trajectory info logging for debugging
    if (TrajectoryPoints.Num() > 0)
    {
        FVector StartPoint = TrajectoryPoints[0];
        FVector EndPoint = TrajectoryPoints.Last();
        float Distance = FVector::Dist(StartPoint, EndPoint);
        float MaxHeight = StartPoint.Z;
        
        for (const FVector& Point : TrajectoryPoints)
        {
            if (Point.Z > MaxHeight)
            {
                MaxHeight = Point.Z;
            }
        }
        
        // Calculate arc quality metrics for basketball shots
        float ArcHeight = MaxHeight - StartPoint.Z;
        float OptimalArcHeight = Distance * 0.3f; // Optimal basketball arc is ~30% of horizontal distance
        float ArcQuality = 1.0f - FMath::Abs(ArcHeight - OptimalArcHeight) / OptimalArcHeight;
        ArcQuality = FMath::Clamp(ArcQuality, 0.0f, 1.0f);
        
        UE_LOG(LogTemp, Log, TEXT("Enhanced Basketball Trajectory: Distance=%.1fcm, MaxHeight=%.1fcm, Arc=%.1fcm, Quality=%.0f%%, Points=%d"), 
               Distance, MaxHeight - StartPoint.Z, ArcHeight, ArcQuality * 100.0f, TrajectoryPoints.Num());
    }
}

void ASGBasketball::ShowThrowPrediction(const FVector& ThrowDirection, float ThrowPower)
{
    if (!bShowTrajectoryPrediction || !bIsBeingHeld)
    {
        return;
    }
    
    // Get current ball position
    FVector StartLocation = GetActorLocation();
    
    // Calculate enhanced initial velocity based on throw parameters
    FVector InitialVelocity = CalculateEnhancedInitialVelocity(ThrowDirection, ThrowPower);
    
    // Show the enhanced prediction
    PredictAndShowTrajectory(StartLocation, InitialVelocity);
}

FVector ASGBasketball::CalculateEnhancedInitialVelocity(const FVector& ThrowDirection, float ThrowPower) const
{
    FVector ClampedDirection = ThrowDirection.GetClampedToMaxSize(1.0f);
    
    // UPDATED power calculation matching the actual throw system with balanced power
    float BasePower = FMath::Clamp(ThrowPower, 40.0f, 200.0f); // Updated to match new balanced range
    
    // Apply same power curve as actual throw
    float PowerPercentage = (ThrowPower - 40.0f) / 160.0f; // Updated for new range
    PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
    
    // Apply same aggressive curve for consistency
    float CurvedPower = PowerPercentage * PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * PowerPercentage * 0.4f + PowerPercentage * 0.2f;
    float FinalPower = 40.0f + (CurvedPower * 160.0f); // Updated for new range
    
    // Same power multiplier as actual throw (updated)
    float PowerMultiplier = 4.0f; // Updated to match the new balanced multiplier
    FVector InitialVelocity = ClampedDirection * FinalPower * PowerMultiplier;
    
    // Validate the throw direction
    if (ClampedDirection.IsNearlyZero())
    {
        UE_LOG(LogTemp, Error, TEXT("SGBasketball: Invalid throw direction in prediction, using fallback"));
        ClampedDirection = FVector(1.0f, 0.0f, 0.3f);
        ClampedDirection.Normalize();
        InitialVelocity = ClampedDirection * FinalPower * PowerMultiplier;
    }
    
    return InitialVelocity;
}

void ASGBasketball::DrawTrajectoryVisualization(const TArray<FVector>& TrajectoryPoints) const
{
    if (!GetWorld() || TrajectoryPoints.Num() < 2)
    {
        return;
    }
    
    // IMPROVED trajectory visualization with consistent, visible lines
    
    // Use bright, consistent colors for better visibility
    FColor TrajectoryColor = FColor::Yellow; // Bright yellow for good visibility
    FColor ImpactColor = FColor::Red; // Red for impact point
    
    // Draw trajectory lines with consistent thickness
    for (int32 i = 0; i < TrajectoryPoints.Num() - 1; i++)
    {
        FVector CurrentPoint = TrajectoryPoints[i];
        FVector NextPoint = TrajectoryPoints[i + 1];
        
        // Draw thick, visible trajectory line
        DrawDebugLine(
            GetWorld(),
            CurrentPoint,
            NextPoint,
            TrajectoryColor,
            false,
            2.0f, // Reduced duration for real-time updates
            0,
            5.0f // Thicker line for better visibility
        );
        
        // Add markers every few points
        if (i % 3 == 0) // Every 3rd point
        {
            DrawDebugSphere(
                GetWorld(),
                CurrentPoint,
                3.0f,
                8,
                FColor::Orange,
                false,
                2.0f
            );
        }
    }
    
    // Impact point visualization
    if (TrajectoryPoints.Num() > 0)
    {
        FVector ImpactPoint = TrajectoryPoints.Last();
        
        // Large, visible impact sphere
        DrawDebugSphere(
            GetWorld(),
            ImpactPoint,
            20.0f, // Larger for better visibility
            12,
            ImpactColor,
            false,
            2.0f
        );
        
        // Impact ring for better visibility
        DrawDebugCircle(
            GetWorld(),
            ImpactPoint,
            30.0f, // Larger ring
            16,
            FColor::Orange,
            false,
            2.0f,
            0,
            4.0f
        );
        
        // Distance and height info
        if (TrajectoryPoints.Num() > 1)
        {
            float Distance = FVector::Dist(TrajectoryPoints[0], ImpactPoint);
            FString DistanceText = FString::Printf(TEXT("%.0f cm"), Distance);
            DrawDebugString(
                GetWorld(),
                ImpactPoint + FVector(0, 0, 100),
                DistanceText,
                nullptr,
                FColor::White,
                2.0f
            );
        }
    }
    
    // Start point marker
    if (TrajectoryPoints.Num() > 0)
    {
        DrawDebugSphere(
            GetWorld(),
            TrajectoryPoints[0],
            8.0f,
            12,
            FColor::Green,
            false,
            2.0f
        );
    }
}

FText ASGBasketball::GetInteractionText_Implementation() const
{
    if (bIsBeingHeld)
    {
        return FText::FromString(TEXT("Drop Basketball"));
    }
    else if (CanBePickedUp())
    {
        return FText::FromString(TEXT("Pick up Basketball"));
    }
    else
    {
        return FText::FromString(TEXT("Basketball"));
    }
}

void ASGBasketball::Interact_Implementation(APawn* InstigatorPawn)
{
    if (ASGCharacter* Character = Cast<ASGCharacter>(InstigatorPawn))
    {
        OnInteract(Character);
    }
}

void ASGBasketball::OnInteract(ASGCharacter* InteractingPlayer)
{
    if (!InteractingPlayer)
    {
        return;
    }
    
    if (bIsBeingHeld && HoldingPlayer == InteractingPlayer)
    {
        // Drop the ball
        DropBall();
    }
    else if (CanInteract(InteractingPlayer))
    {
        // Pick up the ball
        PickupBall(InteractingPlayer);
    }
}

bool ASGBasketball::CanInteract(ASGCharacter* Player) const
{
    if (!Player)
    {
        return false;
    }
    
    // Check if player already has a basketball
    if (Player->GetHeldBasketball() && Player->GetHeldBasketball() != this)
    {
        return false;
    }
    
    // Check if this ball can be picked up
    if (!CanBePickedUp())
    {
        return false;
    }
    
    // Check distance
    float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());
    return Distance <= PickupRange;
}

void ASGBasketball::AttachToPlayer(ASGCharacter* Player)
{
    if (!Player)
    {
        return;
    }
    
    // Disable physics while being held
    DisablePhysics();
    
    // Attach to player's hand or designated socket
    if (USkeletalMeshComponent* PlayerMesh = Player->GetMesh())
    {
        // Try to attach to a hand socket, or use a component attachment
        FName SocketName = TEXT("hand_rSocket"); // Right hand socket
        
        if (PlayerMesh->DoesSocketExist(SocketName))
        {
            AttachToComponent(PlayerMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);
        }
        else
        {
            // Fallback: attach to player with offset
            FVector Offset = FVector(50.0f, 0.0f, 0.0f); // In front of player
            SetActorRelativeLocation(Offset);
            AttachToActor(Player, FAttachmentTransformRules::KeepRelativeTransform);
        }
    }
    else
    {
        // Simple attachment to player
        FVector Offset = FVector(50.0f, 0.0f, 0.0f); // In front of player
        SetActorRelativeLocation(Offset);
        AttachToActor(Player, FAttachmentTransformRules::KeepRelativeTransform);
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s attached to player %s"), *GetName(), *Player->GetName());
}

void ASGBasketball::DetachFromPlayer()
{
    // Detach from any parent
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    
    // Re-enable physics
    EnablePhysics();
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketball: %s detached from player"), *GetName());
}

void ASGBasketball::EnablePhysics()
{
    if (CollisionComponent)
    {
        CollisionComponent->SetSimulatePhysics(true);
        CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        
        UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Physics enabled for %s"), *GetName());
    }
}

void ASGBasketball::DisablePhysics()
{
    if (CollisionComponent)
    {
        CollisionComponent->SetSimulatePhysics(false);
        CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
        
        // Clear any existing velocities
        CollisionComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
        CollisionComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
        
        UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Physics disabled for %s"), *GetName());
    }
}

void ASGBasketball::PlayBounceSound(float ImpactForce)
{
    // Calculate volume based on impact force
    float Volume = FMath::Clamp(ImpactForce / 2000.0f, 0.1f, 1.0f);
    
    // Calculate pitch variation
    float Pitch = FMath::RandRange(0.9f, 1.1f);
    
    // Play the sound
    AudioComponent->SetSound(BounceSoundCue);
    AudioComponent->SetVolumeMultiplier(Volume);
    AudioComponent->SetPitchMultiplier(Pitch);
    AudioComponent->Play();
    
    UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Bounce sound played - Volume: %f, Pitch: %f"), Volume, Pitch);
}

// NEW: Slope rolling physics implementation
void ASGBasketball::ApplySlopeRollingPhysics(float DeltaTime)
{
    if (!bEnableSlopeRolling || !CollisionComponent)
    {
        return;
    }

    // Get current velocity to check if ball is moving at all
    FVector CurrentVelocity = CollisionComponent->GetPhysicsLinearVelocity();
    float CurrentSpeed = CurrentVelocity.Size();
    
    // Check if ball is on a surface (even if moving slowly)
    if (!IsOnSlope())
    {
        // On flat surface or in air, apply minimal damping for longer rolling
        CollisionComponent->SetLinearDamping(0.08f); // Light damping on flat
        return;
    }

    // Get slope information
    float SlopeAngle = DetectSlopeAngle();
    FVector SlopeDirection = GetSlopeDirection();
    
    // IMPROVED: Work on even slight slopes (reduced from 5.0 to 2.0 degrees)
    if (SlopeAngle < 2.0f)
    {
        // Very slight slope, minimal effect
        CollisionComponent->SetLinearDamping(0.1f);
        return;
    }

    // IMPROVED: Progressive damping reduction based on slope - steeper = less resistance
    // On steep slopes, dramatically reduce damping so ball rolls faster
    float DampingReduction = FMath::Clamp(SlopeAngle / 45.0f, 0.0f, 1.0f);
    float SlopeDamping = FMath::Lerp(0.08f, 0.01f, DampingReduction); // From 0.08 on flat to 0.01 on steep
    CollisionComponent->SetLinearDamping(SlopeDamping);

    // IMPROVED: Progressive speed boost based on angle - more realistic acceleration
    // Use a curve that gives significant boost even at low angles
    float AngleFactor = FMath::Pow(SlopeAngle / 45.0f, 0.7f); // Power curve for smooth acceleration
    AngleFactor = FMath::Clamp(AngleFactor, 0.0f, 1.0f);
    
    // Scale gravity boost by angle - steeper slopes = faster rolling
    float ScaledGravityBoost = SlopeGravityBoost * SlopeRollingMultiplier * AngleFactor;
    
    // Apply force in downslope direction
    FVector GravityBoostForce = SlopeDirection * ScaledGravityBoost;
    CollisionComponent->AddForce(GravityBoostForce, NAME_None, false);
    
    // Debug logging (only when moving)
    if (CurrentSpeed > 10.0f)
    {
        UE_LOG(LogTemp, VeryVerbose, TEXT("SGBasketball: Slope rolling - Angle: %.1f°, Speed: %.0f cm/s, Boost: %.0f, Damping: %.3f"), 
               SlopeAngle, CurrentSpeed, ScaledGravityBoost, SlopeDamping);
    }
}

float ASGBasketball::DetectSlopeAngle() const
{
    if (!CollisionComponent)
    {
        return 0.0f;
    }

    FVector StartLocation = GetActorLocation();
    // IMPROVED: Longer trace to detect surfaces better
    FVector DownVector = FVector(0, 0, -150.0f); // Increased from -100 to -150
    FVector EndLocation = StartLocation + DownVector;

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    QueryParams.bTraceComplex = true; // More accurate collision detection

    if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_WorldStatic, QueryParams))
    {
        // Calculate angle between surface normal and vertical
        FVector SurfaceNormal = HitResult.ImpactNormal;
        FVector UpVector = FVector(0, 0, 1);
        
        float DotProduct = FVector::DotProduct(SurfaceNormal, UpVector);
        DotProduct = FMath::Clamp(DotProduct, -1.0f, 1.0f); // Ensure valid input for Acos
        float AngleRadians = FMath::Acos(DotProduct);
        float AngleDegrees = FMath::RadiansToDegrees(AngleRadians);
        
        return AngleDegrees;
    }

    return 0.0f;
}

FVector ASGBasketball::GetSlopeDirection() const
{
    if (!CollisionComponent)
    {
        return FVector::ZeroVector;
    }

    FVector StartLocation = GetActorLocation();
    FVector DownVector = FVector(0, 0, -150.0f); // Match DetectSlopeAngle trace distance
    FVector EndLocation = StartLocation + DownVector;

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    QueryParams.bTraceComplex = true;

    if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_WorldStatic, QueryParams))
    {
        FVector SurfaceNormal = HitResult.ImpactNormal;
        FVector UpVector = FVector(0, 0, 1);
        
        // Calculate the downslope direction by projecting gravity onto the surface
        FVector GravityDir = FVector(0, 0, -1);
        FVector ProjectedGravity = GravityDir - FVector::DotProduct(GravityDir, SurfaceNormal) * SurfaceNormal;
        FVector DownSlope = ProjectedGravity.GetSafeNormal();
        
        return DownSlope;
    }

    return FVector::ZeroVector;
}

bool ASGBasketball::IsOnSlope() const
{
    if (!CollisionComponent)
    {
        return false;
    }

    // IMPROVED: Allow slope detection even at very low speeds for better response
    FVector Velocity = CollisionComponent->GetPhysicsLinearVelocity();
    // Removed minimum speed check - detect slopes even when barely moving or stationary
    
    // Detect if we're on a surface
    FVector StartLocation = GetActorLocation();
    // IMPROVED: Better detection range based on ball size
    FVector DownVector = FVector(0, 0, -(BallRadius + 30.0f)); // Adaptive trace based on ball size
    FVector EndLocation = StartLocation + DownVector;

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    QueryParams.bTraceComplex = true;

    if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_WorldStatic, QueryParams))
    {
        // Check distance to surface - ball should be close to ground
        float DistanceToSurface = HitResult.Distance;
        
        // IMPROVED: More lenient distance check for better detection
        if (DistanceToSurface <= BallRadius + 20.0f)
        {
            // We're on a surface - check if it's sloped (even slightly)
            float Angle = DetectSlopeAngle();
            return Angle >= 2.0f; // Reduced from 5.0 to 2.0 degrees
        }
    }

    return false;
}