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
#include "Misc/Optional.h"  // Add the correct include for TOptional in UE5.6
#include "../Interaction/SGInteractionComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Lighting/SGPickupCandle.h"
#include "../SaveSystem/SGSaveData.h"
#include "../Golf/SGGolfClubManager.h"
#include "../Basketball/SGBasketball.h"
#include "../Basketball/SGBasketballHoop.h"
#include "../Golf/SGGolfBall.h"
#include "../Darts/SGDart.h"
#include "../Darts/SGDartboard.h"

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

    // Initialize dart charging settings - NEW
    DartMinPower = 10.0f;   // Minimum power for dart throws
    DartMaxPower = 50.0f;   // Maximum power for dart throws

    // Initialize held candle
    HeldCandle = nullptr;

    // Initialize held basketball
    HeldBasketball = nullptr;

    // Initialize held dart
    HeldDart = nullptr; // NEW
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
        
        // Visual feedback for basketball charging (LMB)
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
        // Visual feedback for dart charging (MMB) - NEW
        else if (IsHoldingDart())
        {
            // Dart power calculation (lighter, more precise throws)
            float PowerPercentage = ShotChargeTime / MaxChargeTime;
            PowerPercentage = FMath::Clamp(PowerPercentage, 0.0f, 1.0f);
            
            // Apply power curve for dart throwing (more linear for precision)
            float CurvedPower = PowerPercentage * 0.7f + PowerPercentage * PowerPercentage * 0.3f;
            float ThrowPower = FMath::Lerp(DartMinPower, DartMaxPower, CurvedPower);
            
            // Show real-time trajectory prediction while charging
            if (HeldDart && HeldDart->bShowTrajectoryPrediction)
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
                
                // Darts fly straight (no arc like basketball)
                ThrowDirection.Normalize();
                
                // Show trajectory prediction continuously while charging
                HeldDart->ShowThrowPrediction(ThrowDirection, ThrowPower);
            }
            
            // Enhanced charging progress logging
            static float LastDartLogTime = 0.0f;
            if (GetWorld()->GetTimeSeconds() - LastDartLogTime > 0.2f)
            {
                UE_LOG(LogTemp, Warning, TEXT("?? MMB CHARGING: %d%% (Power: %.0f/%.0f) - DART THROW [Curve: %.2f]"), 
                       (int32)ChargePercentage, ThrowPower, DartMaxPower, CurvedPower);
                LastDartLogTime = GetWorld()->GetTimeSeconds();
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
    DOREPLIFETIME(ASGCharacter, HeldDart); // NEW
    
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
    
    // Dart system (Middle Mouse Button) - NEW
    PlayerInputComponent->BindAction("ChargeDart", IE_Pressed, this, &ASGCharacter::StartChargingDart);
    PlayerInputComponent->BindAction("ChargeDart", IE_Released, this, &ASGCharacter::ReleaseDart);

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

    // Dart input bindings - NEW
    PlayerInputComponent->BindAction("DropDart", IE_Pressed, this, &ASGCharacter::DropDartPressed);
    PlayerInputComponent->BindAction("SpawnDart", IE_Pressed, this, &ASGCharacter::SpawnDartPressed);
    PlayerInputComponent->BindAction("SpawnDartboard", IE_Pressed, this, &ASGCharacter::SpawnDartboardPressed);

    UE_LOG(LogTemp, Error, TEXT("?? SGCharacter: COMPLETE INPUT SYSTEM | Basketball: LMB | Golf: RMB | Dart: MMB | Drop Dart: J | Spawn Dart: N | Spawn Dartboard: M"));
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

// NEW: Dart replication handling
void ASGCharacter::OnRep_HeldDart()
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s held dart replicated - Dart: %s"), 
           *GetName(), HeldDart ? *HeldDart->GetName() : TEXT("None"));
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

// Dart System Implementation - NEW
void ASGCharacter::SetHeldDart(ASGDart* Dart)
{
    HeldDart = Dart;
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s now holding dart %s"), 
           *GetName(), Dart ? *Dart->GetName() : TEXT("None"));
}

void ASGCharacter::StartChargingDart()
{
    // Only charge if holding dart
    if (IsHoldingDart())
    {
        if (HasAuthority())
        {
            StartChargingDartShot();
        }
        else
        {
            // Client: charge locally for immediate feedback
            StartChargingDartShot();
        }
        
        UE_LOG(LogTemp, Error, TEXT("?? MMB: %s started charging DART"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? MMB: %s not holding dart - no charging"), *GetName());
    }
}

void ASGCharacter::ReleaseDart()
{
    // Only release if actually charging dart
    if (bIsChargingShot && IsHoldingDart())
    {
        if (HasAuthority())
        {
            ReleaseDartShot();
        }
        else
        {
            // Client: send to server with proper power calculation
            float PowerPercentage = ShotChargeTime / MaxChargeTime;
            float CurvedPower = PowerPercentage * 0.7f + PowerPercentage * PowerPercentage * 0.3f;
            float ThrowPower = FMath::Lerp(DartMinPower, DartMaxPower, CurvedPower);
            
            // Calculate direction on client where camera works properly
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
            
            ThrowDirection.Normalize();
            
            // Send the throw request to server
            ServerThrowDart(ThrowDirection, ThrowPower);
            
            // Stop charging locally for immediate feedback
            bIsChargingShot = false;
            ShotChargeTime = 0.0f;
        }
        UE_LOG(LogTemp, Error, TEXT("?? MMB: %s released DART throw"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? MMB: %s not charging dart - no release (Charging: %s, Holding: %s)"), 
               *GetName(), bIsChargingShot ? TEXT("YES") : TEXT("NO"), IsHoldingDart() ? TEXT("YES") : TEXT("NO"));
    }
}

void ASGCharacter::StartChargingDartShot()
{
    bIsChargingShot = true;
    ShotChargeTime = 0.0f;
    UE_LOG(LogTemp, Log, TEXT("?? SGCharacter: Started charging dart shot"));
}

void ASGCharacter::ReleaseDartShot()
{
    if (bIsChargingShot && IsHoldingDart())
    {
        float PowerPercentage = ShotChargeTime / MaxChargeTime;
        float CurvedPower = PowerPercentage * 0.7f + PowerPercentage * PowerPercentage * 0.3f;
        float ThrowPower = FMath::Lerp(DartMinPower, DartMaxPower, CurvedPower);
        
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Warning, TEXT("?? SGCharacter: Released dart shot with %f%% power"), ThrowPower);
        
        // Calculate hit direction based on camera
        FVector ThrowDirection;
        if (FollowCamera)
        {
            ThrowDirection = FollowCamera->GetForwardVector();
        }
        else
        {
            ThrowDirection = GetActorForwardVector();
        }
        
        // Throw the dart
        ThrowDart(ThrowPower);
    }
}

void ASGCharacter::ThrowDart(float ThrowPower)
{
    if (HasAuthority())
    {
        if (IsHoldingDart())
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s throwing dart with power %f"), *GetName(), ThrowPower);
            
            // Calculate throw direction
            FVector ThrowDirection;
            if (APlayerController* PC = Cast<APlayerController>(GetController()))
            {
                ThrowDirection = PC->GetControlRotation().Vector();
            }
            else if (FollowCamera)
            {
                ThrowDirection = FollowCamera->GetForwardVector();
            }
            else
            {
                ThrowDirection = GetActorForwardVector();
            }
            
            ThrowDirection.Normalize();
            
            // Add a slight upward angle for dart throws
            ThrowDirection.Z += 0.1f;
            ThrowDirection.Normalize();
            
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Throwing dart: Power %.0f, Direction %s"), 
                   ThrowPower, *ThrowDirection.ToString());
            
            // This will replicate to all clients through the dart's server RPC
            HeldDart->ThrowDart(ThrowDirection, ThrowPower);
            SetHeldDart(nullptr);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no dart to throw"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can throw darts directly"), *GetName());
    }
}

void ASGCharacter::DropDart()
{
    if (HasAuthority())
    {
        if (IsHoldingDart())
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s dropping dart"), *GetName());
            
            HeldDart->DropDart();
            SetHeldDart(nullptr);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no dart to drop"), *GetName());
        }
    }
    else
    {
        ServerDropDart();
    }
}

void ASGCharacter::SpawnDart()
{
    if (HasAuthority())
    {
        // Spawn dart in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f;
        SpawnLocation.Z += 50.0f;
        
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGDart* NewDart = GetWorld()->SpawnActor<ASGDart>(ASGDart::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewDart)
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s spawned dart %s"), *GetName(), *NewDart->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("?? SERVER: %s failed to spawn dart"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can spawn darts"), *GetName());
    }
}

void ASGCharacter::SpawnDartboard()
{
    if (HasAuthority())
    {
        // Spawn dartboard in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 500.0f;
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGDartboard* NewDartboard = GetWorld()->SpawnActor<ASGDartboard>(ASGDartboard::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewDartboard)
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s spawned dartboard %s"), *GetName(), *NewDartboard->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("?? SERVER: %s failed to spawn dartboard"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can spawn dartboards"), *GetName());
    }
}

// Missing basketball input functions
void ASGCharacter::DropBasketballPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed drop basketball key"), *GetName());
    DropBasketball();
}

void ASGCharacter::SpawnBasketballPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed spawn basketball key"), *GetName());
    SpawnBasketball();
}

void ASGCharacter::SpawnBasketballHoopPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed spawn basketball hoop key"), *GetName());
    SpawnBasketballHoop();
}

// Missing golf input functions
void ASGCharacter::SpawnGolfBallPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed spawn golf ball key"), *GetName());
    SpawnGolfBall();
}

// Missing dart input functions - NEW
void ASGCharacter::DropDartPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed drop dart key"), *GetName());
    DropDart();
}

void ASGCharacter::SpawnDartPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed spawn dart key"), *GetName());
    SpawnDart();
}

void ASGCharacter::SpawnDartboardPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed spawn dartboard key"), *GetName());
    SpawnDartboard();
}

// Missing basketball functions
void ASGCharacter::DropBasketball()
{
    if (IsHoldingBasketball())
    {
        if (HasAuthority())
        {
            HeldBasketball->DropBall();
        }
        else
        {
            ServerDropBasketball();
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s not holding basketball to drop"), *GetName());
    }
}

void ASGCharacter::SpawnBasketball()
{
    if (HasAuthority())
    {
        // Spawn basketball in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f;
        SpawnLocation.Z += 50.0f;
        
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGBasketball* NewBasketball = GetWorld()->SpawnActor<ASGBasketball>(ASGBasketball::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewBasketball)
        {
            UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s spawned basketball %s"), *GetName(), *NewBasketball->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s failed to spawn basketball"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: Only server can spawn basketballs"));
    }
}

void ASGCharacter::SpawnBasketballHoop()
{
    if (HasAuthority())
    {
        // Spawn basketball hoop in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 500.0f;
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGBasketballHoop* NewHoop = GetWorld()->SpawnActor<ASGBasketballHoop>(ASGBasketballHoop::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewHoop)
        {
            UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s spawned basketball hoop %s"), *GetName(), *NewHoop->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s failed to spawn basketball hoop"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: Only server can spawn basketball hoops"));
    }
}

void ASGCharacter::SpawnGolfBall()
{
    if (HasAuthority())
    {
        // Spawn golf ball in front of the player
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f;
        SpawnLocation.Z += 20.0f;
        
        FRotator SpawnRotation = GetActorRotation();
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = this;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        ASGGolfBall* NewGolfBall = GetWorld()->SpawnActor<ASGGolfBall>(ASGGolfBall::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);
        
        if (NewGolfBall)
        {
            UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s spawned golf ball %s"), *GetName(), *NewGolfBall->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s failed to spawn golf ball"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: Only server can spawn golf balls"));
    }
}

// Missing server RPC implementations
void ASGCharacter::ServerRandomizeAppearance_Implementation()
{
    // Implement randomize appearance on server
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s randomize appearance on server"), *GetName());
    // Add implementation for randomizing appearance
}

void ASGCharacter::ServerCycleTorsoMaterial_Implementation()
{
    // Implement cycle torso material on server
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s cycle torso material on server"), *GetName());
    // Add implementation for cycling torso material
}

void ASGCharacter::ServerCycleHeadMaterial_Implementation()
{
    // Implement cycle head material on server
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s cycle head material on server"), *GetName());
    // Add implementation for cycling head material
}

void ASGCharacter::ServerSetCustomColors_Implementation(FLinearColor NewPrimaryColor, FLinearColor NewSecondaryColor, FLinearColor NewAccentColor)
{
    // Implement set custom colors on server
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s set custom colors on server"), *GetName());
    // Add implementation for setting custom colors
}

void ASGCharacter::ServerThrowBasketball_Implementation(float ThrowPower)
{
    if (IsHoldingBasketball())
    {
        FVector ThrowDirection;
        if (FollowCamera)
        {
            ThrowDirection = FollowCamera->GetForwardVector();
        }
        else
        {
            ThrowDirection = GetActorForwardVector();
        }
        
        ThrowBasketball(ThrowPower);
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s server throw basketball with power %f"), *GetName(), ThrowPower);
    }
}

void ASGCharacter::ServerThrowBasketballWithDirection_Implementation(float ThrowPower, const FVector& ThrowDirection)
{
    if (IsHoldingBasketball())
    {
        ThrowBasketball(ThrowPower);
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s server throw basketball with direction %s and power %f"), *GetName(), *ThrowDirection.ToString(), ThrowPower);
    }
}

void ASGCharacter::ServerDropBasketball_Implementation()
{
    DropBasketball();
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s server drop basketball"), *GetName());
}

void ASGCharacter::ServerStartChargingBasketball_Implementation()
{
    StartChargingBasketballShot();
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s server start charging basketball"), *GetName());
}

void ASGCharacter::ServerStopChargingBasketball_Implementation()
{
    ReleaseBasketballShot();
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s server stop charging basketball"), *GetName());
}

void ASGCharacter::ServerThrowDart_Implementation(const FVector& ThrowDirection, float ThrowPower)
{
    if (IsHoldingDart())
    {
        UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s throwing dart with power %f and direction %s"), 
               *GetName(), ThrowPower, *ThrowDirection.ToString());
        
        // Call the dart's throw function which handles the physics
        HeldDart->ThrowDart(ThrowDirection, ThrowPower);
        
        // Clear the held dart reference
        SetHeldDart(nullptr);
        
        // Reset charging state
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no dart to throw"), *GetName());
    }
}

void ASGCharacter::ServerDropDart_Implementation()
{
    DropDart();
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s server drop dart"), *GetName());
}

// Missing golf system implementation
void ASGCharacter::HitNearbyGolfBall(const FVector& HitDirection, float Power)
{
    // Find nearby golf balls
    TArray<AActor*> FoundGolfBalls;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASGGolfBall::StaticClass(), FoundGolfBalls);
    
    ASGGolfBall* NearestBall = nullptr;
    float NearestDistance = 200.0f; // Maximum hitting distance
    
    for (AActor* Actor : FoundGolfBalls)
    {
        if (ASGGolfBall* GolfBall = Cast<ASGGolfBall>(Actor))
        {
            float Distance = FVector::Dist(GetActorLocation(), GolfBall->GetActorLocation());
            if (Distance < NearestDistance)
            {
                NearestDistance = Distance;
                NearestBall = GolfBall;
            }
        }
    }
    
    if (NearestBall)
    {
        NearestBall->HitBall(HitDirection, Power);
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s hit golf ball %s with power %f"), *GetName(), *NearestBall->GetName(), Power);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s found no golf ball to hit within range"), *GetName());
    }
}

// Basketball functions implementation
void ASGCharacter::StartChargingBasketballShot()
{
    bIsChargingShot = true;
    ShotChargeTime = 0.0f;
    UE_LOG(LogTemp, Log, TEXT("?? SGCharacter: Started charging basketball shot"));
}

void ASGCharacter::ReleaseBasketballShot()
{
    if (bIsChargingShot && IsHoldingBasketball())
    {
        float PowerPercentage = ShotChargeTime / MaxChargeTime;
        float CurvedPower = PowerPercentage * PowerPercentage * 0.7f + PowerPercentage * 0.3f;
        float ThrowPower = FMath::Lerp(BasketballMinPower, BasketballMaxPower, CurvedPower);
        
        bIsChargingShot = false;
        ShotChargeTime = 0.0f;
        
        UE_LOG(LogTemp, Warning, TEXT("?? SGCharacter: Released basketball shot with %f%% power"), ThrowPower);
        
        // Calculate hit direction based on camera
        FVector ThrowDirection;
        if (FollowCamera)
        {
            ThrowDirection = FollowCamera->GetForwardVector();
        }
        else
        {
            ThrowDirection = GetActorForwardVector();
        }
        
        // Add upward arc for basketball shots
        ThrowDirection.Z += 0.3f;
        ThrowDirection.Normalize();
        
        // Throw the basketball
        ThrowBasketball(ThrowPower);
    }
}

void ASGCharacter::ThrowBasketball(float ThrowPower)
{
    if (HasAuthority())
    {
        if (IsHoldingBasketball())
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s throwing basketball with power %f"), *GetName(), ThrowPower);
            
            // Calculate throw direction
            FVector ThrowDirection;
            if (APlayerController* PC = Cast<APlayerController>(GetController()))
            {
                ThrowDirection = PC->GetControlRotation().Vector();
            }
            else if (FollowCamera)
            {
                ThrowDirection = FollowCamera->GetForwardVector();
            }
            else
            {
                ThrowDirection = GetActorForwardVector();
            }
            
            // Add upward arc for basketball throws
            ThrowDirection.Z += 0.3f;
            ThrowDirection.Normalize();
            
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: Throwing basketball: Power %.0f, Direction %s"), 
                   ThrowPower, *ThrowDirection.ToString());
            
            // This will replicate to all clients through the basketball's server RPC
            HeldBasketball->ThrowBall(ThrowDirection, ThrowPower);
            SetHeldBasketball(nullptr);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("?? SERVER: %s has no basketball to throw"), *GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("?? CLIENT: Only server can throw basketballs directly"), *GetName());
    }
}

// Missing appearance functions
void ASGCharacter::RandomizePlayerAppearance(ASGCharacter* TargetPlayer)
{
    if (HasAuthority() && TargetPlayer)
    {
        UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s randomizing appearance of %s"), *GetName(), *TargetPlayer->GetName());
        // Add implementation for randomizing another player's appearance
    }
}

void ASGCharacter::RandomizeAllPlayersAppearance()
{
    if (HasAuthority())
    {
        UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s randomizing all players' appearances"), *GetName());
        // Add implementation for randomizing all players' appearances
    }
}

void ASGCharacter::MulticastNotifyAppearanceChanged_Implementation(const FString& PlayerName, const FString& ChangeType)
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Appearance changed notification - Player: %s, Change: %s"), *PlayerName, *ChangeType);
    // Add implementation for appearance change notifications
}

void ASGCharacter::InitializeDefaultMaterials()
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s initializing default materials"), *GetName());
    // Add implementation for initializing default materials
}

void ASGCharacter::ForceRefreshAppearance()
{
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s force refreshing appearance"), *GetName());
    // Add implementation for force refreshing appearance
}

// Missing CalculateOptimalThrowPower function implementation
float ASGCharacter::CalculateOptimalThrowPower(const FVector& ThrowDirection, float BasePower)
{
    // Calculate optimal throwing power based on direction and base power
    // Takes into account gravity and desired arc for basketball shots
    
    // If throwing upward, reduce power to compensate for gravity assistance
    float VerticalComponent = ThrowDirection.Z;
    float PowerAdjustment = 1.0f;
    
    // Adjust power based on throw angle
    if (VerticalComponent > 0.1f) // Throwing upward
    {
        PowerAdjustment = FMath::Lerp(1.0f, 0.7f, VerticalComponent); // Reduce power for upward throws
    }
    else if (VerticalComponent < -0.1f) // Throwing downward
    {
        PowerAdjustment = FMath::Lerp(1.0f, 1.3f, FMath::Abs(VerticalComponent)); // Increase power for downward throws
    }
    
    float OptimalPower = BasePower * PowerAdjustment;
    
    // Clamp to basketball power range
    OptimalPower = FMath::Clamp(OptimalPower, BasketballMinPower, BasketballMaxPower);
    
    UE_LOG(LogTemp, Log, TEXT("?? CalculateOptimalThrowPower: Direction=%s, BasePower=%f, Adjustment=%f, OptimalPower=%f"), 
           *ThrowDirection.ToString(), BasePower, PowerAdjustment, OptimalPower);
    
    return OptimalPower;
}
