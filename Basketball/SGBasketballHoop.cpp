#include "SGBasketballHoop.h"
#include "SGBasketball.h"
#include "SGBasketballGameManager.h"
#include "../Characters/SGCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Materials/MaterialInstanceDynamic.h"

ASGBasketballHoop::ASGBasketballHoop()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = true;

    // Create root component (post/pole)
    PostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PostMesh"));
    RootComponent = PostMesh;
    PostMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    PostMesh->SetCollisionObjectType(ECC_WorldStatic);
    PostMesh->SetCollisionResponseToAllChannels(ECR_Block);

    // Load cylinder mesh for the main pole
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
    if (CylinderMeshAsset.Succeeded())
    {
        PostMesh->SetStaticMesh(CylinderMeshAsset.Object);
        PostMesh->SetRelativeScale3D(FVector(0.15f, 0.15f, 3.0f)); // Tall basketball pole
        
        // Create dark metallic material for the pole
        static ConstructorHelpers::FObjectFinder<UMaterialInterface> PostMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
        if (PostMaterial.Succeeded())
        {
            UMaterialInstanceDynamic* PostDynamicMaterial = UMaterialInstanceDynamic::Create(PostMaterial.Object, this);
            if (PostDynamicMaterial)
            {
                // Dark gray/black color for pole
                PostDynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor(0.15f, 0.15f, 0.15f, 1.0f));
                PostMesh->SetMaterial(0, PostDynamicMaterial);
            }
        }
    }

    // Create backboard - positioned at the top of the pole
    BackboardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackboardMesh"));
    BackboardMesh->SetupAttachment(RootComponent);
    BackboardMesh->SetRelativeLocation(FVector(0.0f, 0.0f, HoopHeight - 20.0f)); // At the top of pole
    BackboardMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    BackboardMesh->SetCollisionObjectType(ECC_WorldStatic);
    BackboardMesh->SetCollisionResponseToAllChannels(ECR_Block);

    // Load cube mesh for backboard
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMeshAsset.Succeeded())
    {
        BackboardMesh->SetStaticMesh(CubeMeshAsset.Object);
        BackboardMesh->SetRelativeScale3D(FVector(0.05f, 1.2f, 0.8f)); // Thin rectangular backboard
        
        // White/clear backboard material
        static ConstructorHelpers::FObjectFinder<UMaterialInterface> BackboardMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
        if (BackboardMaterial.Succeeded())
        {
            UMaterialInstanceDynamic* BackboardDynamicMaterial = UMaterialInstanceDynamic::Create(BackboardMaterial.Object, this);
            if (BackboardDynamicMaterial)
            {
                // Semi-transparent white
                BackboardDynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor(0.9f, 0.9f, 0.9f, 0.8f));
                BackboardMesh->SetMaterial(0, BackboardDynamicMaterial);
            }
        }
    }

    // Create rim - positioned in front of the backboard
    RimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RimMesh"));
    RimMesh->SetupAttachment(RootComponent);
    RimMesh->SetRelativeLocation(FVector(25.0f, 0.0f, HoopHeight - 50.0f)); // In front of backboard, lower
    RimMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    RimMesh->SetCollisionObjectType(ECC_WorldStatic);
    RimMesh->SetCollisionResponseToAllChannels(ECR_Block);

    // Use cylinder for rim (rotated to be horizontal)
    if (CylinderMeshAsset.Succeeded())
    {
        RimMesh->SetStaticMesh(CylinderMeshAsset.Object);
        RimMesh->SetRelativeScale3D(FVector(0.8f, 0.8f, 0.03f)); // Wide, thin rim
        RimMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f)); // Rotate to be horizontal
        
        // Orange color for basketball rim
        static ConstructorHelpers::FObjectFinder<UMaterialInterface> RimMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
        if (RimMaterial.Succeeded())
        {
            UMaterialInstanceDynamic* RimDynamicMaterial = UMaterialInstanceDynamic::Create(RimMaterial.Object, this);
            if (RimDynamicMaterial)
            {
                // Classic basketball rim orange
                RimDynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor(1.0f, 0.5f, 0.1f, 1.0f));
                RimMesh->SetMaterial(0, RimDynamicMaterial);
            }
        }
    }

    // Create simple net representation (hanging from rim)
    for (int32 i = 0; i < 8; i++)
    {
        FString NetStripName = FString::Printf(TEXT("NetStrip%d"), i);
        UStaticMeshComponent* NetStrip = CreateDefaultSubobject<UStaticMeshComponent>(*NetStripName);
        NetStrip->SetupAttachment(RimMesh);
        
        // Position net strips around the rim
        float Angle = (i * 45.0f) * PI / 180.0f; // 8 strips around rim
        float Radius = 35.0f;
        FVector StripPos = FVector(
            FMath::Cos(Angle) * Radius,
            FMath::Sin(Angle) * Radius,
            -30.0f // Hanging down from rim
        );
        NetStrip->SetRelativeLocation(StripPos);
        NetStrip->SetRelativeScale3D(FVector(0.01f, 0.01f, 1.0f)); // Thin hanging strips
        
        if (CylinderMeshAsset.Succeeded())
        {
            NetStrip->SetStaticMesh(CylinderMeshAsset.Object);
            // White net material
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> NetMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
            if (NetMaterial.Succeeded())
            {
                UMaterialInstanceDynamic* NetDynamicMaterial = UMaterialInstanceDynamic::Create(NetMaterial.Object, this);
                if (NetDynamicMaterial)
                {
                    NetDynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor(0.95f, 0.95f, 0.95f, 0.8f));
                    NetStrip->SetMaterial(0, NetDynamicMaterial);
                }
            }
        }
        
        NetStrip->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        NetStrips.Add(NetStrip);
    }

    // Setup enhanced detection zones
    SetupEnhancedDetectionZones();

    // Create audio component
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->SetupAttachment(RootComponent);
    AudioComponent->bAutoActivate = false;

    // Initialize stats
    TotalShots = 0;
    SuccessfulShots = 0;

    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: Basketball hoop created with clean design and enhanced detection"));
}

void ASGBasketballHoop::SetupEnhancedDetectionZones()
{
    // Create main scoring zone (below rim) - positioned for new rim location
    ScoringZone = CreateDefaultSubobject<UBoxComponent>(TEXT("ScoringZone"));
    ScoringZone->SetupAttachment(RootComponent);
    ScoringZone->SetRelativeLocation(FVector(25.0f, 0.0f, HoopHeight - 70.0f)); // Below rim
    ScoringZone->SetBoxExtent(FVector(ScoringZoneSize, ScoringZoneSize, 20.0f));
    ScoringZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ScoringZone->SetCollisionObjectType(ECC_WorldStatic);
    ScoringZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    ScoringZone->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
    ScoringZone->SetVisibility(bShowDebugInfo);

    // Create pre-scoring zone (above rim) for trajectory validation
    PreScoringZone = CreateDefaultSubobject<UBoxComponent>(TEXT("PreScoringZone"));
    PreScoringZone->SetupAttachment(RootComponent);
    PreScoringZone->SetRelativeLocation(FVector(25.0f, 0.0f, HoopHeight - 20.0f)); // Above rim
    PreScoringZone->SetBoxExtent(FVector(ScoringZoneSize * 1.2f, ScoringZoneSize * 1.2f, 30.0f));
    PreScoringZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    PreScoringZone->SetCollisionObjectType(ECC_WorldStatic);
    PreScoringZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    PreScoringZone->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
    PreScoringZone->SetVisibility(bShowDebugInfo);

    // Create rim collision zone for hit detection
    RimCollisionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("RimCollisionZone"));
    RimCollisionZone->SetupAttachment(RootComponent);
    RimCollisionZone->SetRelativeLocation(FVector(25.0f, 0.0f, HoopHeight - 50.0f)); // At rim level
    RimCollisionZone->SetBoxExtent(FVector(RimRadius + 10.0f, RimRadius + 10.0f, 15.0f));
    RimCollisionZone->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    RimCollisionZone->SetCollisionObjectType(ECC_WorldStatic);
    RimCollisionZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    RimCollisionZone->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
    RimCollisionZone->SetVisibility(bShowDebugInfo);

    // Create backboard collision zone for hit detection
    BackboardCollisionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("BackboardCollisionZone"));
    BackboardCollisionZone->SetupAttachment(RootComponent);
    BackboardCollisionZone->SetRelativeLocation(FVector(0.0f, 0.0f, HoopHeight - 20.0f)); // At backboard position
    BackboardCollisionZone->SetBoxExtent(FVector(8.0f, 60.0f, 40.0f));
    BackboardCollisionZone->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    BackboardCollisionZone->SetCollisionObjectType(ECC_WorldStatic);
    BackboardCollisionZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    BackboardCollisionZone->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
    BackboardCollisionZone->SetVisibility(bShowDebugInfo);

    // Bind collision events
    ScoringZone->OnComponentBeginOverlap.AddDynamic(this, &ASGBasketballHoop::OnScoringZoneBeginOverlap);
    PreScoringZone->OnComponentBeginOverlap.AddDynamic(this, &ASGBasketballHoop::OnPreScoringZoneBeginOverlap);
    PreScoringZone->OnComponentEndOverlap.AddDynamic(this, &ASGBasketballHoop::OnPreScoringZoneEndOverlap);
    RimCollisionZone->OnComponentHit.AddDynamic(this, &ASGBasketballHoop::OnRimCollisionHit);
    BackboardCollisionZone->OnComponentHit.AddDynamic(this, &ASGBasketballHoop::OnBackboardCollisionHit);
}

void ASGBasketballHoop::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s BeginPlay - HasAuthority: %s"), 
           *GetName(), HasAuthority() ? TEXT("true") : TEXT("false"));
    
    // Auto-register with game manager if available
    if (HasAuthority())
    {
        RegisterWithGameManager();
        
        // Setup timer to periodically clean up old scoring entries
        FTimerHandle CleanupTimer;
        GetWorld()->GetTimerManager().SetTimer(CleanupTimer, this, &ASGBasketballHoop::CleanupOldScoringEntries, 5.0f, true);
    }
}

void ASGBasketballHoop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGBasketballHoop, TotalShots);
    DOREPLIFETIME(ASGBasketballHoop, SuccessfulShots);
}

void ASGBasketballHoop::RegisterShot()
{
    if (HasAuthority())
    {
        TotalShots++;
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s shot registered. Total shots: %d"), 
               *GetName(), TotalShots);
    }
}

void ASGBasketballHoop::RegisterScore()
{
    if (HasAuthority())
    {
        SuccessfulShots++;
        
        // Call multicast for visual/audio feedback
        MulticastOnScore();
        
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s SCORE! Successful shots: %d/%d (%.1f%%)"), 
               *GetName(), SuccessfulShots, TotalShots, GetAccuracy());
    }
}

float ASGBasketballHoop::GetAccuracy() const
{
    if (TotalShots == 0)
        return 0.0f;
    
    return (float(SuccessfulShots) / float(TotalShots)) * 100.0f;
}

void ASGBasketballHoop::ResetStats()
{
    if (HasAuthority())
    {
        TotalShots = 0;
        SuccessfulShots = 0;
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s stats reset"), *GetName());
    }
}

void ASGBasketballHoop::OnScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                                                  bool bFromSweep, const FHitResult& SweepResult)
{
    // Only the server handles scoring logic
    if (!HasAuthority())
        return;

    // Check if it's a basketball
    if (ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor))
    {
        // Perform comprehensive validation
        if (!IsValidScoringBall(Basketball))
        {
            UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Basketball %s invalid for scoring"), 
                   *GetName(), *Basketball->GetName());
            return;
        }

        // Get velocity for validation
        FVector Velocity = Basketball->GetCollisionComponent()->GetPhysicsLinearVelocity();
        
        // Validate velocity and trajectory
        if (!IsValidScoringVelocity(Velocity) || !IsValidScoringTrajectory(Velocity))
        {
            UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Basketball %s invalid velocity/trajectory (Z: %f)"), 
                   *GetName(), *Basketball->GetName(), Velocity.Z);
            return;
        }

        // Check if ball can score (cooldown and pre-zone validation)
        if (!CanBallScore(Basketball))
        {
            UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Basketball %s cannot score (cooldown or missing pre-zone entry)"), 
                   *GetName(), *Basketball->GetName());
            return;
        }

        // All validations passed - register the score!
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s - SCORE! Basketball %s went through hoop! Thrown by %s"), 
               *GetName(), *Basketball->GetName(), 
               Basketball->GetLastThrower() ? *Basketball->GetLastThrower()->GetName() : TEXT("Unknown"));
        
        // Mark this ball as recently scored to prevent double scoring
        RecentScoringBalls.Add(Basketball, GetWorld()->GetTimeSeconds());
        
        RegisterScore();
        
        // Notify the basketball to update game manager
        Basketball->NotifyGameManagerOfScore(this);
        
        // Play score effects
        PlayScoreEffects();
        
        // Remove from pre-scoring zone tracking
        BallsInPreScoringZone.Remove(Basketball);
    }
}

void ASGBasketballHoop::OnPreScoringZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                                                     bool bFromSweep, const FHitResult& SweepResult)
{
    if (!HasAuthority())
        return;

    if (ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor))
    {
        // Only track balls that are moving downward with reasonable velocity
        FVector Velocity = Basketball->GetCollisionComponent()->GetPhysicsLinearVelocity();
        if (Velocity.Z < -50.0f) // Moving down with minimum speed
        {
            BallsInPreScoringZone.Add(Basketball);
            UE_LOG(LogTemp, Verbose, TEXT("SGBasketballHoop: %s - Basketball %s entered pre-scoring zone"), 
                   *GetName(), *Basketball->GetName());
        }
    }
}

void ASGBasketballHoop::OnPreScoringZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (!HasAuthority())
        return;

    if (ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor))
    {
        // Remove from tracking if ball leaves without scoring
        BallsInPreScoringZone.Remove(Basketball);
        UE_LOG(LogTemp, Verbose, TEXT("SGBasketballHoop: %s - Basketball %s left pre-scoring zone"), 
               *GetName(), *Basketball->GetName());
    }
}

void ASGBasketballHoop::OnRimCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
                                         UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (!HasAuthority())
        return;

    if (ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor))
    {
        UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Basketball %s hit the rim"), 
               *GetName(), *Basketball->GetName());
        
        // Play rim hit effects
        MulticastOnRimHit();
    }
}

void ASGBasketballHoop::OnBackboardCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
                                               UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (!HasAuthority())
        return;

    if (ASGBasketball* Basketball = Cast<ASGBasketball>(OtherActor))
    {
        UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Basketball %s hit the backboard"), 
               *GetName(), *Basketball->GetName());
        
        // Play backboard hit effects
        MulticastOnBackboardHit();
    }
}

// Enhanced validation methods
bool ASGBasketballHoop::IsValidScoringBall(ASGBasketball* Basketball) const
{
    if (!Basketball)
        return false;

    // Check if basketball was thrown by a player
    if (!Basketball->HasBeenThrown() || !IsValid(Basketball->GetLastThrower()))
    {
        return false;
    }

    return true;
}

bool ASGBasketballHoop::IsValidScoringVelocity(const FVector& Velocity) const
{
    // Ball must be moving downward within reasonable velocity range
    return Velocity.Z >= MaximumScoringVelocityZ && Velocity.Z <= MinimumScoringVelocityZ;
}

bool ASGBasketballHoop::IsValidScoringTrajectory(const FVector& Velocity) const
{
    // Calculate angle from vertical (downward is negative Z)
    float HorizontalSpeed = FVector2D(Velocity.X, Velocity.Y).Size();
    float VerticalSpeed = FMath::Abs(Velocity.Z);
    
    if (VerticalSpeed < 1.0f) // Avoid division by zero
        return false;

    float AngleFromVertical = FMath::RadiansToDegrees(FMath::Atan(HorizontalSpeed / VerticalSpeed));
    
    return AngleFromVertical <= TrajectoryValidationAngle;
}

bool ASGBasketballHoop::CanBallScore(ASGBasketball* Basketball) const
{
    if (!Basketball)
        return false;

    // Check scoring cooldown
    if (const float* LastScoringTime = RecentScoringBalls.Find(Basketball))
    {
        float TimeSinceLastScore = GetWorld()->GetTimeSeconds() - *LastScoringTime;
        if (TimeSinceLastScore < ScoringCooldownTime)
        {
            return false;
        }
    }

    // Check if ball entered pre-scoring zone (if required)
    if (bRequirePreScoringZoneEntry && !BallsInPreScoringZone.Contains(Basketball))
    {
        return false;
    }

    return true;
}

void ASGBasketballHoop::CleanupOldScoringEntries()
{
    if (!HasAuthority())
        return;

    float CurrentTime = GetWorld()->GetTimeSeconds();
    
    // Clean up old scoring entries
    for (auto It = RecentScoringBalls.CreateIterator(); It; ++It)
    {
        if (!It.Key().IsValid() || (CurrentTime - It.Value()) > (ScoringCooldownTime * 2.0f))
        {
            It.RemoveCurrent();
        }
    }

    // Clean up invalid balls from pre-scoring zone
    for (auto It = BallsInPreScoringZone.CreateIterator(); It; ++It)
    {
        if (!It->IsValid())
        {
            It.RemoveCurrent();
        }
    }
}

void ASGBasketballHoop::MulticastOnRimHit_Implementation()
{
    if (bPlaySoundOnScore)
    {
        PlayRimHitSound();
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Rim hit feedback triggered"), *GetName());
}

void ASGBasketballHoop::MulticastOnBackboardHit_Implementation()
{
    if (bPlaySoundOnScore)
    {
        PlayBackboardHitSound();
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s - Backboard hit feedback triggered"), *GetName());
}

void ASGBasketballHoop::MulticastOnScore_Implementation()
{
    // Play sound effect
    if (bPlaySoundOnScore)
    {
        PlayScoreSound();
    }
    
    // Play visual effects
    PlayScoreEffects();
    
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s - Score visual/audio feedback triggered"), *GetName());
}

void ASGBasketballHoop::PlayScoreSound()
{
    // Play score sound effect
    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s playing score sound"), *GetName());
    
    // Example of how to play a sound if you have one:
    if (AudioComponent && ScoreSoundCue)
    {
        AudioComponent->SetSound(ScoreSoundCue);
        AudioComponent->Play();
    }
    else
    {
        // Fallback: use a simple debug sound or log
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: *SWISH* Score sound would play here!"));
    }
}

void ASGBasketballHoop::PlayRimHitSound()
{
    if (AudioComponent && RimHitSoundCue)
    {
        AudioComponent->SetSound(RimHitSoundCue);
        AudioComponent->Play();
    }
}

void ASGBasketballHoop::PlayBackboardHitSound()
{
    UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: %s playing backboard hit sound"), *GetName());
    
    if (AudioComponent && BackboardHitSoundCue)
    {
        AudioComponent->SetSound(BackboardHitSoundCue);
        AudioComponent->Play();
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("SGBasketballHoop: *THUD* Backboard hit sound would play here!"));
    }
}

void ASGBasketballHoop::PlayScoreEffects()
{
    // Play visual and audio effects for scoring
    UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s playing score effects"), *GetName());
    
    // Animate the net
    AnimateNetOnScore();
    
    // Call Blueprint implementable event for additional effects
    PlayNetSwishAnimation();
    
    // Play the score sound
    PlayScoreSound();
}

void ASGBasketballHoop::AnimateNetOnScore()
{
    // Simple net animation - make net strips sway when ball scores
    for (UStaticMeshComponent* NetStrip : NetStrips)
    {
        if (NetStrip)
        {
            // Add a small swaying motion to simulate net movement
            FVector CurrentLocation = NetStrip->GetRelativeLocation();
            FVector SwayOffset = FVector(
                FMath::RandRange(-3.0f, 3.0f),
                FMath::RandRange(-3.0f, 3.0f),
                FMath::RandRange(-8.0f, 0.0f) // Slight downward motion
            );
            
            // Apply the swaying motion
            NetStrip->SetRelativeLocation(CurrentLocation + SwayOffset);
            
            // Reset to original position after animation
            FTimerHandle ResetTimer;
            FTimerDelegate ResetDelegate = FTimerDelegate::CreateLambda([NetStrip, CurrentLocation]()
            {
                if (NetStrip)
                {
                    NetStrip->SetRelativeLocation(CurrentLocation);
                }
            });
            
            GetWorld()->GetTimerManager().SetTimer(ResetTimer, ResetDelegate, 0.8f, false);
        }
    }
}

void ASGBasketballHoop::RegisterWithGameManager()
{
    // Find and register with the basketball game manager
    TArray<AActor*> FoundManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballGameManager::StaticClass(), FoundManagers);
    
    if (FoundManagers.Num() > 0)
    {
        if (ASGBasketballGameManager* GameManager = Cast<ASGBasketballGameManager>(FoundManagers[0]))
        {
            GameManager->RegisterHoop(this);
            UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s registered with game manager"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGBasketballHoop: %s could not find game manager to register with"), *GetName());
    }
}

// Server RPC implementations
void ASGBasketballHoop::ServerResetStats_Implementation()
{
    ResetStats();
}

void ASGBasketballHoop::UpdateHoopColors()
{
    // Update post color
    if (PostMesh && PostMesh->GetMaterial(0))
    {
        if (UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(PostMesh->GetMaterial(0)))
        {
            DynMat->SetVectorParameterValue(TEXT("Color"), PostColor);
        }
    }

    // Update backboard color
    if (BackboardMesh && BackboardMesh->GetMaterial(0))
    {
        if (UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(BackboardMesh->GetMaterial(0)))
        {
            DynMat->SetVectorParameterValue(TEXT("Color"), BackboardColor);
        }
    }

    // Update rim color
    if (RimMesh && RimMesh->GetMaterial(0))
    {
        if (UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(RimMesh->GetMaterial(0)))
        {
            DynMat->SetVectorParameterValue(TEXT("Color"), RimColor);
        }
    }

    // Update net color
    for (UStaticMeshComponent* NetStrip : NetStrips)
    {
        if (NetStrip && NetStrip->GetMaterial(0))
        {
            if (UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(NetStrip->GetMaterial(0)))
            {
                DynMat->SetVectorParameterValue(TEXT("Color"), NetColor);
            }
        }
    }
}

void ASGBasketballHoop::SetPostColor(const FLinearColor& NewColor)
{
    PostColor = NewColor;
    UpdateHoopColors();
}

void ASGBasketballHoop::SetBackboardColor(const FLinearColor& NewColor)
{
    BackboardColor = NewColor;
    UpdateHoopColors();
}

void ASGBasketballHoop::SetRimColor(const FLinearColor& NewColor)
{
    RimColor = NewColor;
    UpdateHoopColors();
}

void ASGBasketballHoop::SetNetColor(const FLinearColor& NewColor)
{
    NetColor = NewColor;
    UpdateHoopColors();
}