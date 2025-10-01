#include "SGCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "InputCoreTypes.h"
#include "../Interaction/SGInteractionComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Lighting/SGPickupCandle.h"
#include "../SaveSystem/SGSaveData.h"

ASGCharacter::ASGCharacter()
{
    PrimaryActorTick.bCanEverTick = false;
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

    // Create interaction component
    InteractionComp = CreateDefaultSubobject<USGInteractionComponent>(TEXT("InteractionComp"));

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

    // Initialize held candle
    HeldCandle = nullptr;
}

void ASGCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    // Set initial debug collision visibility
    ToggleDebugCollision();

    UE_LOG(LogTemp, Log, TEXT("SGCharacter: %s BeginPlay complete (NetMode: %d, HasAuthority: %s)"), 
           *GetName(), (int32)GetWorld()->GetNetMode(), HasAuthority() ? TEXT("true") : TEXT("false"));
}

void ASGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGCharacter, bIsSitting);
    DOREPLIFETIME(ASGCharacter, HeldCandle);
}

void ASGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    check(PlayerInputComponent);

    // Set up gameplay key bindings
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASGCharacter::DoJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASGCharacter::StopJumpingLocal);
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASGCharacter::InteractPressed);
    
    // Pickup candle input binding - try multiple potential key names
    PlayerInputComponent->BindAction("ToggleCandle", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);
    PlayerInputComponent->BindAction("ToggleLight", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);
    PlayerInputComponent->BindAction("LightCandle", IE_Pressed, this, &ASGCharacter::ToggleHeldCandlePressed);

    // Direct key bindings as backup for candle functionality
    PlayerInputComponent->BindKey(EKeys::F, IE_Pressed, this, &ASGCharacter::DirectToggleCandlePressed);
    PlayerInputComponent->BindKey(EKeys::G, IE_Pressed, this, &ASGCharacter::DirectDropCandlePressed);
    PlayerInputComponent->BindKey(EKeys::T, IE_Pressed, this, &ASGCharacter::DirectTestCandleSystem);
    
    // Debug key bindings
    PlayerInputComponent->BindKey(EKeys::U, IE_Pressed, this, &ASGCharacter::ToggleInteractionDebug);

    PlayerInputComponent->BindAxis("MoveForward", this, &ASGCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASGCharacter::MoveRight);

    // Mouse input bindings using our custom sensitivity functions
    PlayerInputComponent->BindAxis("Turn", this, &ASGCharacter::AddControllerYawInputWithSensitivity);
    PlayerInputComponent->BindAxis("LookUp", this, &ASGCharacter::AddControllerPitchInputWithSensitivity);

    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Input component setup complete for %s - Direct keys: F=Toggle, G=Drop, T=Test/Debug, U=Debug"), *GetName());
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

void ASGCharacter::DirectToggleCandlePressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed F key (Direct Toggle Candle)"), *GetName());
    
    if (HeldCandle)
    {
        UE_LOG(LogTemp, Warning, TEXT("Toggling candle light - Current state: %s"), HeldCandle->IsLit() ? TEXT("Lit") : TEXT("Unlit"));
        HeldCandle->ToggleCandle();
        UE_LOG(LogTemp, Warning, TEXT("Candle toggled - New state: %s"), HeldCandle->IsLit() ? TEXT("Lit") : TEXT("Unlit"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No candle held - F key pressed but nothing to toggle"));
    }
}

void ASGCharacter::DirectDropCandlePressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed G key (Direct Drop Candle)"), *GetName());
    
    if (HeldCandle)
    {
        UE_LOG(LogTemp, Warning, TEXT("Dropping held candle: %s"), *HeldCandle->GetName());
        HeldCandle->DropCandle();
        UE_LOG(LogTemp, Warning, TEXT("Candle dropped successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No candle held - G key pressed but nothing to drop"));
    }
}

void ASGCharacter::DirectTestCandleSystem()
{
    UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s pressed T key (Test Candle System)"), *GetName());
    
    // Enable interaction debug temporarily
    if (InteractionComp)
    {
        InteractionComp->bDebugInteraction = true;
        UE_LOG(LogTemp, Warning, TEXT("Enabled interaction debug - you should see debug lines when pressing E"));
    }
    
    // Test the candle system
    if (HeldCandle)
    {
        UE_LOG(LogTemp, Warning, TEXT("=== CANDLE TEST (Currently Holding) ==="));
        UE_LOG(LogTemp, Warning, TEXT("Held Candle: %s"), *HeldCandle->GetName());
        UE_LOG(LogTemp, Warning, TEXT("Candle Lit: %s"), HeldCandle->IsLit() ? TEXT("Yes") : TEXT("No"));
        UE_LOG(LogTemp, Warning, TEXT("Current Holder: %s"), HeldCandle->GetCurrentHolder() ? *HeldCandle->GetCurrentHolder()->GetName() : TEXT("None"));
        UE_LOG(LogTemp, Warning, TEXT("=== Press F to toggle light, G to drop ==="));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("=== CANDLE TEST (Not Holding) ==="));
        UE_LOG(LogTemp, Warning, TEXT("No candle held - Use console command 'SpawnPickupCandle' to spawn one"));
        UE_LOG(LogTemp, Warning, TEXT("=== Controls: E=Pickup/Drop, F=Toggle Light, G=Force Drop, T=Test/Debug ==="));
        UE_LOG(LogTemp, Warning, TEXT("=== Debug enabled - press E near objects to see interaction traces ==="));
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

void ASGCharacter::ToggleInteractionDebug()
{
    if (InteractionComp)
    {
        InteractionComp->bDebugInteraction = !InteractionComp->bDebugInteraction;
        UE_LOG(LogTemp, Warning, TEXT("SGCharacter: %s toggled interaction debug - Debug: %s"), 
               *GetName(), InteractionComp->bDebugInteraction ? TEXT("ON") : TEXT("OFF"));
        
        if (InteractionComp->bDebugInteraction)
        {
            UE_LOG(LogTemp, Warning, TEXT("Interaction debug ENABLED - you should see traces when pressing E"));
            UE_LOG(LogTemp, Warning, TEXT("Debug settings: Distance=%f, Radius=%f"), 
                   InteractionComp->TraceDistance, InteractionComp->TraceRadius);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Interaction debug DISABLED"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGCharacter: %s has no interaction component!"), *GetName());
    }
}

// ISGSaveableInterface implementation
bool ASGCharacter::SaveData_Implementation(FSGSaveData& SaveData) const
{
    // Basic save functionality - extend FSGSaveData if needed for character-specific data
    UE_LOG(LogTemp, Log, TEXT("SGCharacter: Saved character data for %s"), *GetName());
    return true;
}

bool ASGCharacter::LoadData_Implementation(const FSGSaveData& SaveData)
{
    // Basic load functionality - extend FSGSaveData if needed for character-specific data
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
