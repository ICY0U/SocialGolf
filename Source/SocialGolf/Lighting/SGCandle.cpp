#include "SGCandle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "Components/TimelineComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "../Core/SGFocusableComponent.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Curves/CurveFloat.h"
#include "Sound/SoundBase.h"
#include "Particles/ParticleSystem.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

ASGCandle::ASGCandle()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    // Create candle base mesh
    CandleBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleBaseMesh"));
    RootComponent = CandleBaseMesh;
    CandleBaseMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    CandleBaseMesh->SetIsReplicated(true);

    // Create wick mesh (small cylinder at top)
    CandleWickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleWickMesh"));
    CandleWickMesh->SetupAttachment(RootComponent);
    CandleWickMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 15.0f)); // Slightly above candle base
    CandleWickMesh->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.5f)); // Small wick

    // Create point light
    CandleLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("CandleLight"));
    CandleLight->SetupAttachment(RootComponent);
    CandleLight->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f)); // Above the candle
    CandleLight->SetLightColor(CandleLightColor);
    CandleLight->SetIntensity(BaseLightIntensity);
    CandleLight->SetAttenuationRadius(LightRadius);
    CandleLight->SetSourceRadius(2.0f); // Small soft shadow
    CandleLight->CastShadows = true;
    CandleLight->bUseTemperature = true;
    CandleLight->SetTemperature(2000.0f); // Warm candle temperature

    // Create flame particle system
    FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
    FlameParticles->SetupAttachment(RootComponent);
    FlameParticles->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f)); // Above the candle
    FlameParticles->SetAutoActivate(false);

    // Create audio component
    CandleAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("CandleAudioComponent"));
    CandleAudioComponent->SetupAttachment(RootComponent);
    CandleAudioComponent->SetAutoActivate(false);

    // Create focusable component for scaling effect
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    if (FocusableComponent)
    {
        FocusableComponent->FocusScaleFactor = 1.05f; // Subtle scale for candles
        FocusableComponent->ScaleAnimationDuration = 0.25f;
    }

    // Create timeline for flickering
    FlickerTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FlickerTimeline"));

    // Load default assets
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
    if (CylinderMesh.Succeeded())
    {
        CandleBaseMesh->SetStaticMesh(CylinderMesh.Object);
        CandleBaseMesh->SetRelativeScale3D(FVector(0.3f, 0.3f, 1.0f)); // Candle proportions
        
        CandleWickMesh->SetStaticMesh(CylinderMesh.Object);
    }

    // Try to load a basic flame particle system (you'll want to replace this with a proper flame effect)
    static ConstructorHelpers::FObjectFinder<UParticleSystem> FlameEffect(TEXT("/Engine/Effects/P_Fire.P_Fire"));
    if (FlameEffect.Succeeded())
    {
        FlameParticleSystem = FlameEffect.Object;
        FlameParticles->SetTemplate(FlameParticleSystem);
    }

    // Initialize state
    bIsLit = bStartLit;
}

void ASGCandle::BeginPlay()
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

    // Initialize visuals based on state
    UpdateCandleVisuals();

    UE_LOG(LogTemp, Log, TEXT("SGCandle: %s initialized - Lit: %s"), 
           *GetName(), bIsLit ? TEXT("Yes") : TEXT("No"));
}

void ASGCandle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update flickering if lit (only on authority to prevent network spam)
    if (bIsLit && HasAuthority())
    {
        // Add some randomness to the flicker
        CurrentFlickerOffset += DeltaTime * FlickerSpeed;
        if (CurrentFlickerOffset >= 1.0f)
        {
            CurrentFlickerOffset = 0.0f;
        }
    }
}

void ASGCandle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGCandle, bIsLit);
}

FText ASGCandle::GetInteractionText_Implementation() const
{
    return bIsLit ? LitText : UnlitText;
}

void ASGCandle::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!InstigatorPawn)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGCandle: %s interacted by %s"), 
           *GetName(), *InstigatorPawn->GetName());

    ToggleCandle();
}

void ASGCandle::BeginFocus_Implementation()
{
    bIsFocused = true;
    if (FocusableComponent)
    {
        FocusableComponent->BeginFocus();
    }
}

void ASGCandle::EndFocus_Implementation()
{
    bIsFocused = false;
    if (FocusableComponent)
    {
        FocusableComponent->EndFocus();
    }
}

bool ASGCandle::IsFocused_Implementation() const
{
    return bIsFocused;
}

void ASGCandle::LightCandle()
{
    if (bIsLit)
    {
        return; // Already lit
    }

    bIsLit = true;
    UpdateCandleVisuals();

    // Play light sound
    if (LightSound && CandleAudioComponent)
    {
        CandleAudioComponent->SetSound(LightSound);
        CandleAudioComponent->Play();
    }

    // Start ambient flame sound
    if (AmbientFlameSound && CandleAudioComponent)
    {
        // Wait a moment then start ambient sound
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
        {
            if (bIsLit && CandleAudioComponent)
            {
                CandleAudioComponent->SetSound(AmbientFlameSound);
                CandleAudioComponent->SetVolumeMultiplier(0.3f); // Quiet ambient sound
                CandleAudioComponent->Play();
            }
        }, 1.0f, false);
    }

    // Start flickering
    StartFlickering();

    // Broadcast event
    OnCandleLightChanged.Broadcast(true);

    UE_LOG(LogTemp, Log, TEXT("SGCandle: %s lit"), *GetName());
}

void ASGCandle::ExtinguishCandle()
{
    if (!bIsLit)
    {
        return; // Already extinguished
    }

    bIsLit = false;
    UpdateCandleVisuals();

    // Play extinguish sound
    if (ExtinguishSound && CandleAudioComponent)
    {
        CandleAudioComponent->SetSound(ExtinguishSound);
        CandleAudioComponent->Play();
    }

    // Stop flickering
    StopFlickering();

    // Broadcast event
    OnCandleLightChanged.Broadcast(false);

    UE_LOG(LogTemp, Log, TEXT("SGCandle: %s extinguished"), *GetName());
}

void ASGCandle::ToggleCandle()
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

void ASGCandle::OnRep_IsLit()
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

    UE_LOG(LogTemp, Log, TEXT("SGCandle: %s state replicated - Lit: %s"), 
           *GetName(), bIsLit ? TEXT("Yes") : TEXT("No"));
}

void ASGCandle::UpdateCandleVisuals()
{
    UpdateLightVisibility();

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

void ASGCandle::UpdateLightVisibility()
{
    if (CandleLight)
    {
        CandleLight->SetVisibility(bIsLit);
        CandleLight->SetLightColor(CandleLightColor);
    }
}

void ASGCandle::CreateFlickerCurve()
{
    FlickerCurve = NewObject<UCurveFloat>(this);
    
    if (FlickerCurve)
    {
        // Create a wavy curve for realistic candle flickering
        FlickerCurve->FloatCurve.AddKey(0.0f, 1.0f);
        FlickerCurve->FloatCurve.AddKey(0.25f, 0.9f);
        FlickerCurve->FloatCurve.AddKey(0.5f, 1.1f);
        FlickerCurve->FloatCurve.AddKey(0.75f, 0.85f);
        FlickerCurve->FloatCurve.AddKey(1.0f, 1.0f);
        
        // Set interpolation mode for smooth flickering
        for (auto& Key : FlickerCurve->FloatCurve.Keys)
        {
            Key.InterpMode = RCIM_Cubic;
            Key.TangentMode = RCTM_Auto;
        }
        
        UE_LOG(LogTemp, Log, TEXT("SGCandle: Created flicker curve"));
    }
}

void ASGCandle::StartFlickering()
{
    if (FlickerTimeline && bIsLit)
    {
        FlickerTimeline->SetTimelineLength(1.0f / FlickerSpeed);
        FlickerTimeline->PlayFromStart();
        UE_LOG(LogTemp, Log, TEXT("SGCandle: Started flickering"));
    }
}

void ASGCandle::StopFlickering()
{
    if (FlickerTimeline)
    {
        FlickerTimeline->Stop();
        
        // Reset light to base intensity
        if (CandleLight)
        {
            CandleLight->SetIntensity(BaseLightIntensity);
        }
        
        UE_LOG(LogTemp, Log, TEXT("SGCandle: Stopped flickering"));
    }
}

void ASGCandle::OnFlickerTimelineUpdate(float Value)
{
    if (!bIsLit || !CandleLight)
    {
        return;
    }

    // Apply flickering to light intensity
    float FlickerValue = Value;
    float FlickerAmount = FlickerIntensity * FlickerValue;
    float NewIntensity = BaseLightIntensity * (1.0f + FlickerAmount - (FlickerIntensity * 0.5f));
    
    // Clamp to reasonable values
    NewIntensity = FMath::Clamp(NewIntensity, BaseLightIntensity * 0.3f, BaseLightIntensity * 1.5f);
    
    CandleLight->SetIntensity(NewIntensity);
}