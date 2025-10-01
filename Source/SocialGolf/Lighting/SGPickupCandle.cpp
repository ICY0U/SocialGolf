#include "SGPickupCandle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "../Characters/SGCharacter.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Curves/CurveFloat.h"
#include "Sound/SoundBase.h"
#include "Particles/ParticleSystem.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"

ASGPickupCandle::ASGPickupCandle()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    // Create candle base mesh
    CandleBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleBaseMesh"));
    RootComponent = CandleBaseMesh;
    CandleBaseMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    CandleBaseMesh->SetIsReplicated(true);
    CandleBaseMesh->SetSimulatePhysics(true); // Allow physics when dropped
    CandleBaseMesh->GetBodyInstance()->SetMassOverride(0.5f); // Light candle

    // Create wick mesh
    CandleWickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleWickMesh"));
    CandleWickMesh->SetupAttachment(RootComponent);
    CandleWickMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 12.0f)); // Smaller candle
    CandleWickMesh->SetRelativeScale3D(FVector(0.08f, 0.08f, 0.3f));
    CandleWickMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Create point light
    CandleLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("CandleLight"));
    CandleLight->SetupAttachment(RootComponent);
    CandleLight->SetRelativeLocation(FVector(0.0f, 0.0f, 15.0f));
    CandleLight->SetLightColor(CandleLightColor);
    CandleLight->SetIntensity(BaseLightIntensity);
    CandleLight->SetAttenuationRadius(LightRadius);
    CandleLight->SetSourceRadius(1.5f); // Smaller for handheld
    CandleLight->CastShadows = true;
    CandleLight->bUseTemperature = true;
    CandleLight->SetTemperature(2100.0f); // Warm handheld candle

    // Create flame particle system
    FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
    FlameParticles->SetupAttachment(RootComponent);
    FlameParticles->SetRelativeLocation(FVector(0.0f, 0.0f, 15.0f));
    FlameParticles->SetRelativeScale3D(FVector(0.7f, 0.7f, 0.7f)); // Smaller flame
    FlameParticles->SetAutoActivate(false);

    // Create audio component
    CandleAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("CandleAudioComponent"));
    CandleAudioComponent->SetupAttachment(RootComponent);
    CandleAudioComponent->SetAutoActivate(false);

    // Create focusable component
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    if (FocusableComponent)
    {
        FocusableComponent->FocusScaleFactor = 1.0f; // Disable scaling completely
        FocusableComponent->bEnableFocusEffect = false; // Disable focus effect entirely
        FocusableComponent->ScaleAnimationDuration = 0.0f;
    }

    // Create timeline for flickering
    FlickerTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FlickerTimeline"));

    // Create attachment point
    AttachmentPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachmentPoint"));
    AttachmentPoint->SetupAttachment(RootComponent);

    // Load default assets - smaller handheld candle
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
    if (CylinderMesh.Succeeded())
    {
        CandleBaseMesh->SetStaticMesh(CylinderMesh.Object);
        CandleBaseMesh->SetRelativeScale3D(FVector(0.15f, 0.15f, 0.8f)); // Handheld size
        
        CandleWickMesh->SetStaticMesh(CylinderMesh.Object);
    }

    // Initialize state
    bIsLit = bStartLit;
    bIsPickedUp = false;
    CurrentHolder = nullptr;
}

void ASGPickupCandle::BeginPlay()
{
    Super::BeginPlay();

    // Create flicker curve
    CreateFlickerCurve();

    // Set up flicker timeline
    if (FlickerTimeline && FlickerCurve)
    {
        FOnTimelineFloat TimelineCallback;
        TimelineCallback.BindUFunction(this, FName("OnFlickerTimelineUpdate"));
        FlickerTimeline->AddInterpFloat(FlickerCurve, TimelineCallback);
        FlickerTimeline->SetLooping(true);
        FlickerTimeline->SetTimelineLength(1.0f / FlickerSpeed);
    }

    // Initialize visuals
    UpdateCandleVisuals();

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s initialized - Lit: %s"), 
           *GetName(), bIsLit ? TEXT("Yes") : TEXT("No"));
}

void ASGPickupCandle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update attachment if picked up
    if (bIsPickedUp && CurrentHolder)
    {
        UpdateAttachment();
    }
}

void ASGPickupCandle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGPickupCandle, bIsPickedUp);
    DOREPLIFETIME(ASGPickupCandle, bIsLit);
    DOREPLIFETIME(ASGPickupCandle, CurrentHolder);
}

FText ASGPickupCandle::GetInteractionText_Implementation() const
{
    if (bIsPickedUp)
    {
        // If this player is holding it, show drop text
        if (CurrentHolder && CurrentHolder->IsLocallyControlled())
        {
            return DropText;
        }
        else
        {
            // Someone else is holding it
            return FText::FromString(TEXT("Someone else is carrying this"));
        }
    }
    else
    {
        // On the ground, can pick up
        return PickupText;
    }
}

void ASGPickupCandle::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!InstigatorPawn)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s interacted by %s"), 
           *GetName(), *InstigatorPawn->GetName());

    if (bIsPickedUp)
    {
        // If this player is holding it, drop it
        if (CurrentHolder == InstigatorPawn)
        {
            DropCandle();
        }
        // If someone else is holding it, can't interact
    }
    else
    {
        // Pick up the candle
        PickupCandle(InstigatorPawn);
    }
}

void ASGPickupCandle::BeginFocus_Implementation()
{
    bIsFocused = true;
    if (FocusableComponent)
    {
        FocusableComponent->BeginFocus();
    }
}

void ASGPickupCandle::EndFocus_Implementation()
{
    bIsFocused = false;
    if (FocusableComponent)
    {
        FocusableComponent->EndFocus();
    }
}

bool ASGPickupCandle::IsFocused_Implementation() const
{
    return bIsFocused;
}

void ASGPickupCandle::PickupCandle(APawn* Holder)
{
    if (!Holder || bIsPickedUp)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s picked up by %s"), 
           *GetName(), *Holder->GetName());

    bIsPickedUp = true;
    CurrentHolder = Holder;

    // Disable physics and collision
    SetPhysicsEnabled(false);

    // Set the candle reference on the character
    if (ASGCharacter* SGChar = Cast<ASGCharacter>(Holder))
    {
        SGChar->SetHeldCandle(this);
    }

    // Attach to character
    UpdateAttachment();

    // Play pickup sound
    PlaySound(PickupSound);

    // Set up input bindings for the holder
    SetupInputBindings(Holder);

    // Broadcast event
    OnPickupCandleStateChanged.Broadcast(true, bIsLit);
}

void ASGPickupCandle::DropCandle()
{
    if (!bIsPickedUp || !CurrentHolder)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s dropped by %s"), *GetName(), *CurrentHolder->GetName());

    APawn* PreviousHolder = CurrentHolder;

    // Clear the candle reference on the character
    if (ASGCharacter* SGChar = Cast<ASGCharacter>(PreviousHolder))
    {
        SGChar->SetHeldCandle(nullptr);
    }

    // Clear holder
    CurrentHolder = nullptr;
    bIsPickedUp = false;

    // Detach from character
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

    // Reset scale to normal size when dropped
    SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

    // Re-enable physics
    SetPhysicsEnabled(true);

    // Drop at character's location with a slight forward impulse
    if (PreviousHolder)
    {
        FVector DropLocation = PreviousHolder->GetActorLocation() + 
                              (PreviousHolder->GetActorForwardVector() * 50.0f) +
                              FVector(0.0f, 0.0f, 50.0f);
        SetActorLocation(DropLocation);

        // Add a small impulse
        if (CandleBaseMesh)
        {
            FVector DropImpulse = PreviousHolder->GetActorForwardVector() * 200.0f + FVector(0.0f, 0.0f, 100.0f);
            CandleBaseMesh->AddImpulse(DropImpulse);
        }

        // Remove input bindings
        RemoveInputBindings(PreviousHolder);
    }

    // Extinguish if configured to do so
    if (bExtinguishOnDrop && bIsLit)
    {
        ExtinguishCandle();
    }

    // Play drop sound
    PlaySound(DropSound);

    // Broadcast event
    OnPickupCandleStateChanged.Broadcast(false, bIsLit);
    
    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s dropped and scale reset to normal"), *GetName());
}

void ASGPickupCandle::ToggleCandle()
{
    if (bIsLit)
    {
        ExtinguishCandle();
    }
    else
    {
        LightCandle();
    }
}

void ASGPickupCandle::LightCandle()
{
    if (bIsLit)
    {
        return;
    }

    bIsLit = true;
    UpdateCandleVisuals();

    // Play light sound
    PlaySound(LightSound);

    // Start ambient flame sound
    if (AmbientFlameSound && CandleAudioComponent)
    {
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
        {
            if (bIsLit && CandleAudioComponent)
            {
                CandleAudioComponent->SetSound(AmbientFlameSound);
                CandleAudioComponent->SetVolumeMultiplier(0.2f); // Quieter for handheld
                CandleAudioComponent->Play();
            }
        }, 0.5f, false);
    }

    // Start flickering
    StartFlickering();

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s lit"), *GetName());
}

void ASGPickupCandle::ExtinguishCandle()
{
    if (!bIsLit)
    {
        return;
    }

    bIsLit = false;
    UpdateCandleVisuals();

    // Play extinguish sound
    PlaySound(ExtinguishSound);

    // Stop flickering
    StopFlickering();

    // Drop candle if configured to do so
    if (bDropOnExtinguish && bIsPickedUp)
    {
        DropCandle();
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s extinguished"), *GetName());
}

void ASGPickupCandle::OnRep_IsPickedUp()
{
    if (bIsPickedUp && CurrentHolder)
    {
        SetPhysicsEnabled(false);
        UpdateAttachment();
    }
    else
    {
        SetPhysicsEnabled(true);
        DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s pickup state replicated - PickedUp: %s"), 
           *GetName(), bIsPickedUp ? TEXT("Yes") : TEXT("No"));
}

void ASGPickupCandle::OnRep_IsLit()
{
    UpdateCandleVisuals();
    
    if (bIsLit)
    {
        StartFlickering();
    }
    else
    {
        StopFlickering();
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s light state replicated - Lit: %s"), 
           *GetName(), bIsLit ? TEXT("Yes") : TEXT("No"));
}

void ASGPickupCandle::OnRep_CurrentHolder()
{
    if (CurrentHolder && bIsPickedUp)
    {
        UpdateAttachment();
    }

    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s holder replicated - Holder: %s"), 
           *GetName(), CurrentHolder ? *CurrentHolder->GetName() : TEXT("None"));
}

void ASGPickupCandle::UpdateCandleVisuals()
{
    // Update light visibility
    if (CandleLight)
    {
        CandleLight->SetVisibility(bIsLit);
        CandleLight->SetLightColor(CandleLightColor);
    }

    // Update flame particles
    if (FlameParticles)
    {
        if (bIsLit)
        {
            FlameParticles->Activate();
        }
        else
        {
            FlameParticles->Deactivate();
        }
    }
}

void ASGPickupCandle::UpdateAttachment()
{
    if (!bIsPickedUp || !CurrentHolder)
    {
        return;
    }

    // Attach to the character's hand socket
    if (ACharacter* Character = Cast<ACharacter>(CurrentHolder))
    {
        if (USkeletalMeshComponent* CharacterMesh = Character->GetMesh())
        {
            FTransform AttachTransform;
            AttachTransform.SetLocation(AttachOffset);
            AttachTransform.SetRotation(AttachRotation.Quaternion());
            AttachTransform.SetScale3D(AttachScale); // Use the smaller scale when held

            AttachToComponent(CharacterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, AttachSocketName);
            SetActorRelativeTransform(AttachTransform);
            
            UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s attached with scale %s"), *GetName(), *AttachScale.ToString());
        }
    }
    else
    {
        // Fallback: attach to actor root
        AttachToActor(CurrentHolder, FAttachmentTransformRules::SnapToTargetIncludingScale);
        SetActorRelativeLocation(AttachOffset);
        SetActorRelativeRotation(AttachRotation);
        SetActorRelativeScale3D(AttachScale); // Apply smaller scale
        
        UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: %s attached to root with scale %s"), *GetName(), *AttachScale.ToString());
    }
}

void ASGPickupCandle::SetPhysicsEnabled(bool bEnabled)
{
    if (CandleBaseMesh)
    {
        CandleBaseMesh->SetSimulatePhysics(bEnabled);
        
        if (bEnabled)
        {
            CandleBaseMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
        }
        else
        {
            CandleBaseMesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
        }
    }
}

void ASGPickupCandle::PlaySound(USoundBase* Sound)
{
    if (Sound && CandleAudioComponent)
    {
        CandleAudioComponent->SetSound(Sound);
        CandleAudioComponent->Play();
    }
}

void ASGPickupCandle::SetupInputBindings(APawn* Holder)
{
    // Input bindings would typically be handled by the character or player controller
    // For now, we'll just log that we should set this up
    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: Setting up input bindings for %s"), 
           Holder ? *Holder->GetName() : TEXT("None"));
    
    // The character or player controller would bind the toggle action to this candle
    // This is framework-dependent, so we'll leave it for integration
}

void ASGPickupCandle::RemoveInputBindings(APawn* Holder)
{
    UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: Removing input bindings for %s"), 
           Holder ? *Holder->GetName() : TEXT("None"));
}

void ASGPickupCandle::OnToggleCandlePressed()
{
    if (bIsPickedUp && CurrentHolder)
    {
        ToggleCandle();
    }
}

void ASGPickupCandle::CreateFlickerCurve()
{
    FlickerCurve = NewObject<UCurveFloat>(this);
    
    if (FlickerCurve)
    {
        // More pronounced flickering for handheld candle
        FlickerCurve->FloatCurve.AddKey(0.0f, 1.0f);
        FlickerCurve->FloatCurve.AddKey(0.2f, 0.85f);
        FlickerCurve->FloatCurve.AddKey(0.4f, 1.15f);
        FlickerCurve->FloatCurve.AddKey(0.6f, 0.8f);
        FlickerCurve->FloatCurve.AddKey(0.8f, 1.2f);
        FlickerCurve->FloatCurve.AddKey(1.0f, 1.0f);
        
        // Set interpolation mode for smooth flickering
        for (auto& Key : FlickerCurve->FloatCurve.Keys)
        {
            Key.InterpMode = RCIM_Cubic;
            Key.TangentMode = RCTM_Auto;
        }
        
        UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: Created flicker curve"));
    }
}

void ASGPickupCandle::StartFlickering()
{
    if (FlickerTimeline && bIsLit)
    {
        FlickerTimeline->SetTimelineLength(1.0f / FlickerSpeed);
        FlickerTimeline->PlayFromStart();
        UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: Started flickering"));
    }
}

void ASGPickupCandle::StopFlickering()
{
    if (FlickerTimeline)
    {
        FlickerTimeline->Stop();
        
        // Reset light to base intensity
        if (CandleLight)
        {
            CandleLight->SetIntensity(BaseLightIntensity);
        }
        
        UE_LOG(LogTemp, Log, TEXT("SGPickupCandle: Stopped flickering"));
    }
}

void ASGPickupCandle::OnFlickerTimelineUpdate(float Value)
{
    if (!bIsLit || !CandleLight)
    {
        return;
    }

    // Apply flickering to light intensity with more movement for handheld
    float FlickerAmount = FlickerIntensity * (Value - 1.0f);
    float NewIntensity = BaseLightIntensity * (1.0f + FlickerAmount);
    
    // Clamp to reasonable values
    NewIntensity = FMath::Clamp(NewIntensity, BaseLightIntensity * 0.4f, BaseLightIntensity * 1.6f);
    
    CandleLight->SetIntensity(NewIntensity);
}