#include "SGCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "InputCoreTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Optional.h"  // Make sure this is included for TOptional
#include "../Interaction/SGInteractionComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Lighting/SGPickupCandle.h"
#include "../SaveSystem/SGSaveData.h"
#include "../Golf/SGGolfClubManager.h"
#include "../Basketball/SGBasketball.h"
#include "../Basketball/SGBasketballHoop.h"
#include "../Golf/SGGolfBall.h"

ASGCharacter::ASGCharacter()
{
    PrimaryActorTick.bCanEverTick = true; // Enable ticking for charging system
    bReplicates = true;
    
    // Set our turn rates for input
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;

    // Configure the collision capsule
    GetCapsuleComponent()->SetCapsuleHalfHeight(88.0f);
    GetCapsuleComponent()->SetCapsuleRadius(34.0f);

    // Don't rotate when the controller rotates. Let that just affect the camera.
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    // Configure character movement
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 600.f;
    GetCharacterMovement()->AirControl = 0.2f;

    // Create placeholder root for visual components
    PlaceholderRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PlaceholderRoot"));
    PlaceholderRoot->SetupAttachment(RootComponent);
    // Rotate the visual components to face forward correctly
    PlaceholderRoot->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f)); // Adjust character facing direction

    // Create placeholder torso
    PlaceholderTorso = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaceholderTorso"));
    PlaceholderTorso->SetupAttachment(PlaceholderRoot);
    PlaceholderTorso->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
    PlaceholderTorso->SetRelativeScale3D(FVector(0.8f, 0.4f, 1.2f));

    // Load default cube mesh for placeholder
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMeshAsset.Succeeded())
    {
        PlaceholderTorso->SetStaticMesh(CubeMeshAsset.Object);
    }

    // Create placeholder head
    PlaceholderHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaceholderHead"));
    PlaceholderHead->SetupAttachment(PlaceholderRoot);
    PlaceholderHead->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
    PlaceholderHead->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

    // Load default sphere mesh for head
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (SphereMeshAsset.Succeeded())
    {
        PlaceholderHead->SetStaticMesh(SphereMeshAsset.Object);
    }

    // Create a camera boom (pulls in towards the player if there is a collision)
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 400.0f;
    CameraBoom->bUsePawnControlRotation = true;

    // Create a follow camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

    // Initialize camera offset settings
    DefaultCameraOffset = FVector::ZeroVector;
    CurrentCameraOffset = DefaultCameraOffset;
    TargetCameraOffset = DefaultCameraOffset;
    BasketballCameraOffset = FVector(0.0f, 80.0f, 0.0f); // Offset to the right when holding basketball
    BasketballChargingCameraOffset = FVector(0.0f, 120.0f, 20.0f); // Additional offset when charging
    CameraTransitionSpeed = 5.0f;
    ChargingCameraTransitionSpeed = 8.0f;

    // Create interaction component
    InteractionComp = CreateDefaultSubobject<USGInteractionComponent>(TEXT("InteractionComp"));

    // Create golf club manager
    GolfClubManager = CreateDefaultSubobject<USGGolfClubManager>(TEXT("GolfClubManager"));

    // Debug collision visualization
    DebugCollisionCapsule = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugCollisionCapsule"));
    DebugCollisionCapsule->SetupAttachment(RootComponent);
    DebugCollisionCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    DebugCollisionCapsule->SetVisibility(bShowDebugCollision);
    
    // Load cylinder mesh for debug capsule
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
    if (CylinderMeshAsset.Succeeded())
    {
        DebugCollisionCapsule->SetStaticMesh(CylinderMeshAsset.Object);
        DebugCollisionCapsule->SetRelativeScale3D(FVector(0.68f, 0.68f, 1.76f)); // Match capsule dimensions
    }

    // Initialize golf charging system (increased power settings for better distance)
    bIsChargingShot = false;
    ShotChargeTime = 0.0f;
    MaxChargeTime = 3.0f;
    MinPower = 45.0f;   // Increased from 35.0f for even better minimum distance
    MaxPower = 150.0f;  // Increased from 120.0f for significantly better maximum distance

    // Initialize basketball charging settings - ENHANCED REALISTIC POWER FOR BASKETBALL THROWS
    BasketballMinPower = 600.0f;   // Reduced minimum for better control at low power
    BasketballMaxPower = 3200.0f;  // Optimized maximum for realistic long shots

    // Initialize held candle
    HeldCandle = nullptr;

    // Initialize held basketball
    HeldBasketball = nullptr;
}

void ASGCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    // Store the default camera offset from the CameraBoom
    if (CameraBoom)
    {
        DefaultCameraOffset = CameraBoom->SocketOffset;
        CurrentCameraOffset = DefaultCameraOffset;
        TargetCameraOffset = DefaultCameraOffset;
    }
    
    // Set initial debug collision visibility
    ToggleDebugCollision();

    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s BeginPlay complete (NetMode: %d, HasAuthority: %s)"), 
           *GetName(), (int32)GetWorld()->GetNetMode(), HasAuthority() ? TEXT("true") : TEXT("false"));
}

void ASGCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Update camera offset interpolation
    UpdateCameraOffset(DeltaTime);
    
    // Check if camera offset needs to be updated based on current state
    FVector DesiredOffset = GetDesiredCameraOffset();
    if (!FVector::Coincident(TargetCameraOffset, DesiredOffset, 1.0f))
    {
        SetCameraOffset(DesiredOffset);
    }

    // Update charging system with enhanced visual feedback
    if (bIsChargingShot)
    {
        ShotChargeTime += DeltaTime;
        ShotChargeTime = FMath::Clamp(ShotChargeTime, 0.0f, MaxChargeTime);
        
        // Calculate charge percentage for feedback
        float ChargePercentage = (ShotChargeTime / MaxChargeTime) * 100.0f;
        
        // Visual feedback for basketball charging (LMB) - ENHANCED RESPONSIVENESS
        if (IsHoldingBasketball())
        {
            // IMPROVED power calculation with exponential curve for better feel
            float PowerPercentage = ShotChargeTime / MaxChargeTime;
            PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
            
            // Apply power curve - more control at lower powers, exponential growth at higher powers
            float CurvedPower = PowerPercentage * PowerPercentage * 0.7f + PowerPercentage * 0.3f;
            float ThrowPower = FMath::Lerp(BasketballMinPower, BasketballMaxPower, CurvedPower);
            
            // Show real-time trajectory prediction while charging - MORE FREQUENT UPDATES
            if (HeldBasketball && HeldBasketball->bShowTrajectoryPrediction)
            {
                // Calculate throw direction
                FVector ThrowDirection;
                if (FollowCamera)
                {
                    ThrowDirection = FollowCamera->GetForwardVector();
                }
                else if (APlayerController* PC = Cast<APlayerController>(GetController()))
                {
                    ThrowDirection = PC->GetControlRotation().Vector();
                }
                else
                {
                    ThrowDirection = GetActorForwardVector();
                }
                
                // Add upward arc for basketball shots
                ThrowDirection.Z += 0.3f;
                ThrowDirection.Normalize();
                
                // Show trajectory prediction continuously while charging - UPDATE EVERY TICK for smooth feedback
                HeldBasketball->ShowThrowPrediction(ThrowDirection, ThrowPower);
            }
            
            // Enhanced charging progress logging - more detailed feedback
            static float LastBasketballLogTime = 0.0f;
            if (GetWorld()->GetTimeSeconds() - LastBasketballLogTime > 0.2f) // Log every 0.2 seconds for smoother feedback
            {
                UE_LOG(LogTemp, Warning, TEXT("?? LMB CHARGING: %d%% (Power: %.0f/%.0f) - BASKETBALL THROW [Curve: %.2f]"), 
                       (int32)ChargePercentage, ThrowPower, BasketballMaxPower, CurvedPower);
                LastBasketballLogTime = GetWorld()->GetTimeSeconds();
            }
        }
        // Visual feedback for golf charging (RMB)
        else
        {
            // Log charging progress for golf
            static float LastGolfLogTime = 0.0f;
            if (GetWorld()->GetTimeSeconds() - LastGolfLogTime > 0.5f) // Log every 0.5 seconds
            {
                UE_LOG(LogTemp, Warning, TEXT("? RMB CHARGING: %d%% - GOLF SHOT"), 
                       (int32)ChargePercentage);
                LastGolfLogTime = GetWorld()->GetTimeSeconds();
            }
        }
    }
}

void ASGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGCharacter, bIsSitting);
    DOREPLIFETIME(ASGCharacter, HeldCandle);
    DOREPLIFETIME(ASGCharacter, HeldBasketball);
    
    // Basketball system replication
    DOREPLIFETIME(ASGCharacter, BasketballMinPower);
    DOREPLIFETIME(ASGCharacter, BasketballMaxPower);
    DOREPLIFETIME(ASGCharacter, bIsChargingShot);
}

void ASGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    check(PlayerInputComponent);

    // Set up axis bindings for movement and camera
    PlayerInputComponent->BindAxis("MoveForward", this, &ASGCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASGCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &ASGCharacter::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &ASGCharacter::LookUp);

    // Set up gameplay key bindings
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASGCharacter::DoJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASGCharacter::StopJumpingLocal);
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASGCharacter::InteractPressed);
    
    // SEPARATED CHARGING SYSTEMS - NO MORE CONFLICTS!
    // Basketball system (Left Mouse Button)
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASGCharacter::StartChargingBasketball);
    PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASGCharacter::ReleaseBasketball);
    PlayerInputComponent->BindAction("ChargeBasketball", IE_Pressed, this, &ASGCharacter::StartChargingBasketball);
    PlayerInputComponent->BindAction("ChargeBasketball", IE_Released, this, &ASGCharacter::ReleaseBasketball);
    
    // Golf system (Right Mouse Button) 
    PlayerInputComponent->BindAction("ChargeGolf", IE_Pressed, this, &ASGCharacter::StartChargingGolf);
    PlayerInputComponent->BindAction("ChargeGolf", IE_Released, this, &ASGCharacter::ReleaseGolf);
    
    // Pickup candle input binding - try multiple potential key names
    PlayerInputComponent->BindAction("ToggleCandle", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);
    PlayerInputComponent->BindAction("ToggleLight", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);
    PlayerInputComponent->BindAction("LightCandle", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);

    // Basketball drop action
    PlayerInputComponent->BindAction("DropBasketball", IE_Pressed, this, &ASGCharacter::DropBasketballPressed);
    
    // Basketball spawning for testing (keep for now)
    PlayerInputComponent->BindAction("SpawnBasketball", IE_Pressed, this, &ASGCharacter::SpawnBasketballPressed);
    PlayerInputComponent->BindAction("SpawnBasketballHoop", IE_Pressed, this, &ASGCharacter::SpawnBasketballHoopPressed);

    // Golf ball spawning for testing
    PlayerInputComponent->BindAction("SpawnGolfBall", IE_Pressed, this, &ASGCharacter::SpawnGolfBallPressed);

    UE_LOG(LogTemp, Error, TEXT("?? SGCharacter: SEPARATED INPUT SYSTEM | Basketball: LMB | Golf: RMB | Interact: E | Drop: H | Spawn Golf: B | Spawn Basketball: 8,9"));
}

void ASGCharacter::MoveForward(float Value)
{
    if (Controller && (Value != 0.0f) && !bIsSitting)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void ASGCharacter::MoveRight(float Value)
{
    if (Controller && (Value != 0.0f) && !bIsSitting)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void ASGCharacter::Turn(float Value)
{
    AddControllerYawInput(Value);
}

void ASGCharacter::LookUp(float Value)
{
    AddControllerPitchInput(Value);
}

void ASGCharacter::AddControllerYawInputWithSensitivity(float Value)
{
    AddControllerYawInput(Value * MouseSensitivity);
}

void ASGCharacter::AddControllerPitchInputWithSensitivity(float Value)
{
    float PitchValue = bInvertMouseY ? -Value : Value;
    AddControllerPitchInput(PitchValue * MouseSensitivity);
}

void ASGCharacter::DoJump()
{
    if (bIsSitting)
    {
        ForceStandUp();
    }
    else
    {
        Jump();
    }
}

void ASGCharacter::StopJumpingLocal()
{
    StopJumping();
}

void ASGCharacter::InteractPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed interact key"), *GetName());
    
    if (InteractionComp)
    {
        InteractionComp->TryInteract();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s has no interaction component!"), *GetName());
    }
}

void ASGCharacter::ToggleHeldCandlePressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed toggle candle key"), *GetName());
    
    if (HeldCandle)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s has held candle: %s"), *GetName(), *HeldCandle->GetName());
        
        if (HeldCandle->GetCurrentHolder() == this)
        {
            HeldCandle->OnToggleCandlePressed();
            UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s toggled held candle"), *GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s held candle holder mismatch! Current holder: %s"), 
                   *GetName(), HeldCandle->GetCurrentHolder() ? *HeldCandle->GetCurrentHolder()->GetName() : TEXT("None"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s has no held candle to toggle"), *GetName());
    }
}

void ASGCharacter::ToggleDebugCollision()
{
    bShowDebugCollision = !bShowDebugCollision;
    if (DebugCollisionCapsule)
    {
        DebugCollisionCapsule->SetVisibility(bShowDebugCollision);
    }
}

void ASGCharacter::SetSittingState(bool bNewSitting)
{
    if (bIsSitting == bNewSitting)
    {
        return;
    }

    bIsSitting = bNewSitting;
    
    if (bIsSitting)
    {
        // Disable movement when sitting
        GetCharacterMovement()->DisableMovement();
        UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s is now sitting"), *GetName());
    }
    else
    {
        // Re-enable movement when standing
        GetCharacterMovement()->SetMovementMode(MOVE_Walking);
        UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s is now standing"), *GetName());
    }
}

void ASGCharacter::ForceStandUp()
{
    if (bIsSitting)
    {
        SetSittingState(false);
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s forced to stand up"), *GetName());
    }
}

void ASGCharacter::SetHeldCandle(ASGPickupCandle* Candle)
{
    HeldCandle = Candle;
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s now holding candle %s"), 
           *GetName(), Candle ? *Candle->GetName() : TEXT("None"));
}

void ASGCharacter::SetMouseSensitivity(float NewSensitivity)
{
    MouseSensitivity = FMath::Clamp(NewSensitivity, 0.1f, 5.0f);
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Mouse sensitivity set to %f"), MouseSensitivity);
}

void ASGCharacter::OnRep_IsSitting()
{
    if (bIsSitting)
    {
        GetCharacterMovement()->DisableMovement();
    }
    else
    {
        GetCharacterMovement()->SetMovementMode(MOVE_Walking);
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s sitting state replicated - Sitting: %s"), 
           *GetName(), bIsSitting ? TEXT("Yes") : TEXT("No"));
}

void ASGCharacter::OnRep_HeldCandle()
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s held candle replicated - Candle: %s"), 
           *GetName(), HeldCandle ? *HeldCandle->GetName() : TEXT("None"));
}

void ASGCharacter::OnRep_HeldBasketball()
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s held basketball replicated - Basketball: %s"), 
           *GetName(), HeldBasketball ? *HeldBasketball->GetName() : TEXT("None"));
    
    // Update camera offset when basketball state changes
    if (IsHoldingBasketball())
    {
        SetCameraOffset(BasketballCameraOffset);
        UE_LOG(LogTemp, Warning, TEXT("?? Camera offset applied for basketball holding: %s"), *BasketballCameraOffset.ToString());
    }
    else
    {
        SetCameraOffset(DefaultCameraOffset);
        UE_LOG(LogTemp, Warning, TEXT("?? Camera offset reset to default: %s"), *DefaultCameraOffset.ToString());
    }
}

// Camera offset functions
void ASGCharacter::UpdateCameraOffset(float DeltaTime)
{
    // Determine the appropriate transition speed based on state
    float TransitionSpeed = CameraTransitionSpeed;
    if (bIsChargingShot && IsHoldingBasketball())
    {
        TransitionSpeed = ChargingCameraTransitionSpeed;
    }

    if (!FVector::Coincident(CurrentCameraOffset, TargetCameraOffset, 1.0f))
    {
        CurrentCameraOffset = FMath::VInterpTo(CurrentCameraOffset, TargetCameraOffset, DeltaTime, TransitionSpeed);
        
        if (CameraBoom)
        {
            CameraBoom->SocketOffset = CurrentCameraOffset;
        }
        
        // Debug log for camera transitions
        UE_LOG(LogTemp, VeryVerbose, TEXT("SGCharacter: %s camera offset updating: Current=%s, Target=%s, Speed=%f"), 
               *GetName(), *CurrentCameraOffset.ToString(), *TargetCameraOffset.ToString(), TransitionSpeed);
    }
}

void ASGCharacter::SetCameraOffset(const FVector& NewOffset)
{
    TargetCameraOffset = NewOffset;
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s setting camera target offset to %s"), *GetName(), *NewOffset.ToString());
}

FVector ASGCharacter::GetDesiredCameraOffset() const
{
    if (IsHoldingBasketball())
    {
        if (bIsChargingShot)
        {
            return BasketballChargingCameraOffset;
        }
        else
        {
            return BasketballCameraOffset;
        }
    }
    
    return DefaultCameraOffset;
}

// Basketball System Implementation
void ASGCharacter::SetHeldBasketball(ASGBasketball* Basketball)
{
    HeldBasketball = Basketball;
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s now holding basketball %s"), 
           *GetName(), Basketball ? *Basketball->GetName() : TEXT("None"));
    
    // Update camera offset based on basketball holding state
    if (IsHoldingBasketball())
    {
        SetCameraOffset(BasketballCameraOffset);
        UE_LOG(LogTemp, Warning, TEXT("?? Camera offset applied for basketball shooting: %s"), *BasketballCameraOffset.ToString());
    }
    else
    {
        SetCameraOffset(DefaultCameraOffset);
        UE_LOG(LogTemp, Warning, TEXT("?? Camera offset reset to default: %s"), *DefaultCameraOffset.ToString());
    }
}

// ISGSaveableInterface implementation
bool ASGCharacter::SaveData_Implementation(FSGSaveData& SaveData) const
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Saved character data for %s"), *GetName());
    return true;
}

bool ASGCharacter::LoadData_Implementation(const FSGSaveData& SaveData)
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Loaded character data for %s"), *GetName());
    return true;
}

FString ASGCharacter::GetSaveID_Implementation() const
{
    return FString::Printf(TEXT("Character_%s"), *GetName());
}

int32 ASGCharacter::GetSavePriority_Implementation() const
{
    return 100; // High priority for main character
}

// SEPARATED BASKETBALL SYSTEM (LEFT MOUSE BUTTON)
void ASGCharacter::StartChargingBasketball()
{
    // Only charge if holding basketball
    if (IsHoldingBasketball())
    {
        if (HasAuthority())
        {
            StartChargingBasketballShot();
        }
        else
        {
            // Client: send to server
            ServerStartChargingBasketball();
        }
        
        // Update camera offset for charging state
        SetCameraOffset(BasketballChargingCameraOffset);
        
        UE_LOG(LogTemp, Error, TEXT("?? LMB: %s started charging BASKETBALL - Camera offset: %s"), 
               *GetName(), *BasketballChargingCameraOffset.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? LMB: %s not holding basketball - no charging"), *GetName());
    }
}

void ASGCharacter::ReleaseBasketball()
{
    // Only release if actually charging basketball
    if (bIsChargingShot && IsHoldingBasketball())
    {
        if (HasAuthority())
        {
            ReleaseBasketballShot();
        }
        else
        {
            // Client: send to server
            ServerStopChargingBasketball();
        }
        UE_LOG(LogTemp, Error, TEXT("?? LMB: %s released BASKETBALL throw"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? LMB: %s not charging basketball - no release (Charging: %s, Holding: %s)"), 
               *GetName(), bIsChargingShot ? TEXT("YES") : TEXT("NO"), IsHoldingBasketball() ? TEXT("YES") : TEXT("NO"));
    }
}

// SEPARATED GOLF SYSTEM (RIGHT MOUSE BUTTON)
void ASGCharacter::StartChargingGolf()
{
    // Only charge golf if NOT holding basketball
    if (!IsHoldingBasketball())
    {
        bIsChargingShot = true;
        ShotChargeTime = 0.0f;
        UE_LOG(LogTemp, Error, TEXT("? RMB: %s started charging GOLF shot"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("? RMB: %s holding basketball - cannot charge golf"), *GetName());
    }
}

void ASGCharacter::ReleaseGolf()
{
    // Only release golf if charging and NOT holding basketball
    if (bIsChargingShot && !IsHoldingBasketball())
    {
        float PowerPercentage = FMath::Lerp(MinPower, MaxPower, ShotChargeTime / MaxChargeTime);
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Error, TEXT("? RMB: %s released GOLF shot with %f%% power"), *GetName(), PowerPercentage);
        
        // Calculate hit direction based on camera
        FVector HitDirection;
        if (FollowCamera)
        {
            HitDirection = FollowCamera->GetForwardVector();
        }
        else
        {
            HitDirection = GetActorForwardVector();
        }
        
        // Hit nearby golf ball
        HitNearbyGolfBall(HitDirection, PowerPercentage);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("? RMB: %s not charging golf - no release (Charging: %s, Holding Basketball: %s)"), 
               *GetName(), bIsChargingShot ? TEXT("YES") : TEXT("NO"), IsHoldingBasketball() ? TEXT("YES") : TEXT("NO"));
    }
}

void ASGCharacter::HitNearbyGolfBall(const FVector& HitDirection, float Power)
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s hitting nearby golf ball with power %f"), *GetName(), Power);
    
    // Find nearby golf balls and try to hit them
    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    if (FoundGolfBalls.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s - No golf balls found in the world"), *GetName());
        return;
    }
    
    // Find the closest golf ball within hitting range
    ASGGolfBall* ClosestBall = nullptr;
    float ClosestDistance = FLT_MAX;
    FVector PlayerLocation = GetActorLocation();
    
    for (AActor* Actor : FoundGolfBalls)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(Actor))
        {
            float Distance = FVector::Dist(PlayerLocation, GolfBall->GetActorLocation());
            
            // Check if ball is within hitting range and is the closest
            if (Distance < ClosestDistance && GolfBall->CanHitBall(this))
            {
                ClosestBall = GolfBall;
                ClosestDistance = Distance;
            }
        }
    }
    
    if (ClosestBall)
    {
        UE_LOG(LogTemp, Warning, TEXT("? SGCharacter: %s hitting golf ball %s (Distance: %.1f)"), 
               *GetName(), *ClosestBall->GetName(), ClosestDistance);
        
        // Hit the golf ball using the golf ball's system
        bool bHitSuccess = ClosestBall->TryHitBallFromPlayer(this, Power);
        
        if (bHitSuccess)
        {
            UE_LOG(LogTemp, Warning, TEXT("? SGCharacter: Successfully hit golf ball with power %.1f"), Power);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("? SGCharacter: Failed to hit golf ball"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("? SGCharacter: %s - No golf balls within hitting range (%.1f units)"), 
               *GetName(), ClosestDistance);
    }
}

// Basketball input functions
void ASGCharacter::DropBasketballPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed H key (Drop Basketball)"), *GetName());
    DropBasketball();
}

void ASGCharacter::SpawnBasketballPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed 8 key (Spawn Basketball)"), *GetName());
    SpawnBasketball();
}

void ASGCharacter::SpawnBasketballHoopPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed 9 key (Spawn Basketball Hoop)"), *GetName());
    SpawnBasketballHoop();
}

void ASGCharacter::SpawnGolfBallPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed B key (Spawn Golf Ball)"), *GetName());
    SpawnGolfBall();
}

void ASGCharacter::ThrowBasketball(float ThrowPower)
{
    if (HasAuthority())
    {
        if (IsHoldingBasketball())
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s throwing basketball with power %f"), *GetName(), ThrowPower);
            
            // Calculate throw direction - IMPROVED for server compatibility
            FVector ThrowDirection;
            
            // Try multiple methods to get proper direction on server
            if (APlayerController* PC = Cast<APlayerController>(GetController()))
            {
                // Method 1: Use controller rotation (works on server)
                FRotator ControlRotation = PC->GetControlRotation();
                ThrowDirection = ControlRotation.Vector();
                UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Using controller rotation: %s"), *ControlRotation.ToString());
            }
            else if (FollowCamera)
            {
                // Method 2: Use camera direction (might not work on server)
                ThrowDirection = FollowCamera->GetForwardVector();
                UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Using camera direction"));
            }
            else
            {
                // Method 3: Fallback to actor forward direction
                ThrowDirection = GetActorForwardVector();
                UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Using actor forward direction"));
            }
            
            // Add realistic upward arc for basketball trajectory
            float UpwardArc = 0.3f; // Base upward component
            
            // Adjust arc based on throw power - more power = flatter trajectory
            float PowerRatio = ThrowPower / BasketballMaxPower;
            UpwardArc = FMath::Lerp(0.5f, 0.2f, PowerRatio); // Less arc for harder throws
            
            ThrowDirection.Z += UpwardArc;
            ThrowDirection.Normalize();
            
            // Adjust throw power based on distance to nearest hoop for smart aiming
            float AdjustedPower = CalculateOptimalThrowPower(ThrowDirection, ThrowPower);
            
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Throwing basketball: Power %.0f -> %.0f, Direction %s"), 
                   ThrowPower, AdjustedPower, *ThrowDirection.ToString());
            
            // This will replicate to all clients through the basketball's server RPC
            HeldBasketball->ThrowBall(ThrowDirection, AdjustedPower);
            SetHeldBasketball(nullptr);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no basketball to throw"), *GetName());
        }
    }
    else
    {
        // Client calling - send to server WITH direction calculated on client
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: %s requesting server throw basketball"), *GetName());
        
        // Calculate direction on client where camera works properly
        FVector ClientThrowDirection;
        if (FollowCamera)
        {
            ClientThrowDirection = FollowCamera->GetForwardVector();
        }
        else if (APlayerController* PC = Cast<APlayerController>(GetController()))
        {
            ClientThrowDirection = PC->GetControlRotation().Vector();
        }
        else
        {
            ClientThrowDirection = GetActorForwardVector();
        }
        
        // Add upward arc on client
        float UpwardArc = 0.3f;
        float PowerRatio = ThrowPower / BasketballMaxPower;
        UpwardArc = FMath::Lerp(0.5f, 0.2f, PowerRatio);
        ClientThrowDirection.Z += UpwardArc;
        ClientThrowDirection.Normalize();
        
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Calculated direction %s"), *ClientThrowDirection.ToString());
        
        // Send both power and direction to server
        ServerThrowBasketballWithDirection(ThrowPower, ClientThrowDirection);
    }
}

void ASGCharacter::DropBasketball()
{
    if (HasAuthority())
    {
        if (IsHoldingBasketball())
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s dropping basketball"), *GetName());
            
            HeldBasketball->DropBall();
            SetHeldBasketball(nullptr);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no basketball to drop"), *GetName());
        }
    }
    else
    {
        // Client calling - send to server
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: %s requesting server drop basketball"), *GetName());
        ServerDropBasketball();
    }
}

void ASGCharacter::SpawnBasketball()
{
    if (HasAuthority())
    {
        // Spawn basketball in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f; // 1.5 meters in front
        SpawnLocation.Z += 50.0f; // Slightly above ground
        
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGBasketball* NewBasketball = GetWorld()->SpawnActor<ASGBasketball>(ASGBasketball::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewBasketball)
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s spawned basketball %s"), *GetName(), *NewBasketball->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("?? SERVER: %s failed to spawn basketball"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can spawn basketballs"), *GetName());
    }
}

void ASGCharacter::SpawnBasketballHoop()
{
    if (HasAuthority())
    {
        // Spawn basketball hoop in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 500.0f; // 5 meters in front
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGBasketballHoop* NewHoop = GetWorld()->SpawnActor<ASGBasketballHoop>(ASGBasketballHoop::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewHoop)
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s spawned basketball hoop %s"), *GetName(), *NewHoop->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("?? SERVER: %s failed to spawn basketball hoop"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can spawn basketball hoops"), *GetName());
    }
}

void ASGCharacter::SpawnGolfBall()
{
    if (HasAuthority())
    {
        // Spawn golf ball in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f; // 1.5 meters in front
        SpawnLocation.Z += 20.0f; // Slightly above ground
        
        FRotator SpawnRotation = FRotator::ZeroRotator;
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGGolfBall* NewGolfBall = GetWorld()->SpawnActor<ASGGolfBall>(ASGGolfBall::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewGolfBall)
        {
            UE_LOG(LogTemp, Warning, TEXT("? SERVER: %s spawned golf ball %s"), *GetName(), *NewGolfBall->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("? SERVER: %s failed to spawn golf ball"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("? CLIENT: Only server can spawn golf balls"), *GetName());
    }
}

float ASGCharacter::CalculateOptimalThrowPower(const FVector& ThrowDirection, float BasePower)
{
    // Find nearest basketball hoop for smart power adjustment
    TArray<AActor*> FoundHoops;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGBasketballHoop::StaticClass(), FoundHoops);
    
    if (FoundHoops.Num() == 0)
    {
        // No hoops found, return base power
        return BasePower;
    }
    
    // Find closest hoop
    ASGBasketballHoop* ClosestHoop = nullptr;
    float ClosestDistance = FLT_MAX;
    FVector PlayerLocation = GetActorLocation();
    
    for (AActor* Actor : FoundHoops)
    {
        if (ASGBasketballHoop* Hoop = Cast<ASGBasketballHoop>(Actor))
        {
            float Distance = FVector::Dist(PlayerLocation, Hoop->GetActorLocation());
            if (Distance < ClosestDistance)
            {
                ClosestHoop = Hoop;
                ClosestDistance = Distance;
            }
        }
    }
    
    if (ClosestHoop)
    {
        // Adjust power based on distance to hoop
        float DistanceRatio = FMath::Clamp(ClosestDistance / 1000.0f, 0.5f, 2.0f); // Normalize to 10m range
        float AdjustedPower = BasePower * DistanceRatio;
        
        UE_LOG(LogTemp, Log, TEXT("SGCharacter: Adjusted basketball power from %.0f to %.0f (Distance: %.0f)"), 
               BasePower, AdjustedPower, ClosestDistance);
        
        return AdjustedPower;
    }
    
    return BasePower;
}

// Server RPC implementations
void ASGCharacter::ServerThrowBasketball_Implementation(float ThrowPower)
{
    ThrowBasketball(ThrowPower);
}

void ASGCharacter::ServerThrowBasketballWithDirection_Implementation(float ThrowPower, const FVector& ThrowDirection)
{
    // Server version that uses client-calculated direction
    if (IsHoldingBasketball())
    {
        UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s throwing basketball with CLIENT direction %s and power %f"), 
               *GetName(), *ThrowDirection.ToString(), ThrowPower);
        
        // Use the direction provided by client (where camera calculation works properly)
        FVector ServerThrowDirection = ThrowDirection;
        ServerThrowDirection.Normalize();
        
        // Adjust throw power based on distance to nearest hoop for smart aiming
        float AdjustedPower = CalculateOptimalThrowPower(ServerThrowDirection, ThrowPower);
        
        UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Using client direction - Power %.0f -> %.0f"), 
               ThrowPower, AdjustedPower);
        
        // This will replicate to all clients through the basketball's server RPC
        HeldBasketball->ThrowBall(ServerThrowDirection, AdjustedPower);
        SetHeldBasketball(nullptr);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no basketball to throw (with direction)"), *GetName());
    }
}

void ASGCharacter::ServerDropBasketball_Implementation()
{
    DropBasketball();
}

void ASGCharacter::ServerStartChargingBasketball_Implementation()
{
    UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s ServerStartChargingBasketball - HeldBasketball: %s"), 
           *GetName(), HeldBasketball ? *HeldBasketball->GetName() : TEXT("NULL"));
    
    if (IsHoldingBasketball())
    {
        bIsChargingShot = true;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s started charging basketball shot via RPC"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s not holding basketball when trying to charge via RPC"), *GetName());
    }
}

void ASGCharacter::ServerStopChargingBasketball_Implementation()
{
    UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s ServerStopChargingBasketball"), *GetName());
    
    if (bIsChargingShot && IsHoldingBasketball())
    {
        // Calculate throw power based on charge time using basketball power range
        float PowerPercentage = ShotChargeTime / MaxChargeTime;
        PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
        float ThrowPower = FMath::Lerp(BasketballMinPower, BasketballMaxPower, PowerPercentage);
        
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s released basketball shot via RPC with %f power"), 
               *GetName(), ThrowPower);
        
        // Calculate direction on server (use controller rotation)
        FVector ThrowDirection = GetActorForwardVector(); // Fallback
        if (APlayerController* PC = Cast<APlayerController>(GetController()))
        {
            ThrowDirection = PC->GetControlRotation().Vector();
        }
        
        // Add upward arc
        ThrowDirection.Z += 0.3f;
        ThrowDirection.Normalize();
        
        // Throw the basketball
        if (HeldBasketball)
        {
            HeldBasketball->ThrowBall(ThrowDirection, ThrowPower);
            SetHeldBasketball(nullptr);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("?? SERVER RPC: %s cannot release basketball shot via RPC - Charging: %s, Holding: %s"), 
               *GetName(), bIsChargingShot ? TEXT("YES") : TEXT("NO"), IsHoldingBasketball() ? TEXT("YES") : TEXT("NO"));
    }
}

// Basketball charging functions
void ASGCharacter::StartChargingBasketballShot()
{
    if (IsHoldingBasketball())
    {
        bIsChargingShot = true;
        ShotChargeTime = 0.0f;
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s started charging basketball shot"), *GetName());
    }
}

void ASGCharacter::ReleaseBasketballShot()
{
    if (bIsChargingShot && IsHoldingBasketball())
    {
        // Calculate throw power based on charge time using basketball power range
        float PowerPercentage = ShotChargeTime / MaxChargeTime;
        PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
        
        // Apply power curve for better feel
        float CurvedPower = PowerPercentage * PowerPercentage * 0.7f + PowerPercentage * 0.3f;
        float ThrowPower = FMath::Lerp(BasketballMinPower, BasketballMaxPower, CurvedPower);
        
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s released basketball shot with power %.0f"), 
               *GetName(), ThrowPower);
        
        // Throw the basketball
        ThrowBasketball(ThrowPower);
    }
}

// Customization server RPCs
void ASGCharacter::ServerRandomizeAppearance_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s ServerRandomizeAppearance_Implementation called"), *GetName());
    // Implementation for server randomize appearance
    RandomizePlayerAppearance(this);
}

void ASGCharacter::ServerCycleTorsoMaterial_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s ServerCycleTorsoMaterial_Implementation called"), *GetName());
    // Implementation for cycling torso material
    // This would cycle through available torso materials
}

void ASGCharacter::ServerCycleHeadMaterial_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s ServerCycleHeadMaterial_Implementation called"), *GetName());
    // Implementation for cycling head material
    // This would cycle through available head materials
}

void ASGCharacter::ServerSetCustomColors_Implementation(FLinearColor NewPrimaryColor, FLinearColor NewSecondaryColor, FLinearColor NewAccentColor)
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s ServerSetCustomColors_Implementation called"), *GetName());
    // Implementation for setting custom colors
    // This would apply the custom colors to the character materials
}

// Multicast RPC implementation
void ASGCharacter::MulticastNotifyAppearanceChanged_Implementation(const FString& PlayerName, const FString& ChangeType)
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s MulticastNotifyAppearanceChanged_Implementation - Player: %s, Change: %s"), 
           *GetName(), *PlayerName, *ChangeType);
    // Implementation for notifying all clients about appearance changes
}

// Customization functions
void ASGCharacter::RandomizePlayerAppearance(ASGCharacter* TargetPlayer)
{
    if (!TargetPlayer)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: RandomizePlayerAppearance called with null target"));
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s randomizing appearance for %s"), 
           *GetName(), *TargetPlayer->GetName());
    
    // Implementation for randomizing player appearance
    // This would randomize materials, colors, etc.
    
    // Notify all clients about the change
    MulticastNotifyAppearanceChanged(TargetPlayer->GetName(), TEXT("Randomized"));
}

void ASGCharacter::RandomizeAllPlayersAppearance()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s randomizing all players appearance"), *GetName());
    
    // Find all player characters and randomize their appearance
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGCharacter::StaticClass(), FoundCharacters);
    
    for (AActor* Actor : FoundCharacters)
    {
        if (ASGCharacter* Character = Cast<ASGCharacter>(Actor))
        {
            RandomizePlayerAppearance(Character);
        }
    }
}

void ASGCharacter::InitializeDefaultMaterials()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s initializing default materials"), *GetName());
    
    // Implementation for initializing default materials
    // This would set up the default materials for the character
}

void ASGCharacter::ForceRefreshAppearance()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s forcing appearance refresh"), *GetName());
    
    // Implementation for forcing appearance refresh
    // This would refresh all visual components
}
