#include "SGAdvancedCandle.h"
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
#include "TimerManager.h"

ASGAdvancedCandle::ASGAdvancedCandle()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;

    // Create candle base mesh
    CandleBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleBaseMesh"));
    RootComponent = CandleBaseMesh;
    CandleBaseMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    CandleBaseMesh->SetIsReplicated(true);

    // Create wick mesh
    CandleWickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CandleWickMesh"));
    CandleWickMesh->SetupAttachment(RootComponent);
    CandleWickMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 15.0f));
    CandleWickMesh->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.5f));

    // Create main light (primary light source)
    MainLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MainLight"));
    MainLight->SetupAttachment(RootComponent);
    MainLight->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f));
    MainLight->SetLightColor(FLinearColor(1.0f, 0.8f, 0.6f));
    MainLight->SetIntensity(200.0f);
    MainLight->SetAttenuationRadius(300.0f);
    MainLight->SetSourceRadius(2.0f);
    MainLight->CastShadows = true;
    MainLight->bUseTemperature = true;
    MainLight->SetTemperature(2000.0f);

    // Create fill light (softer secondary light for realism)
    FillLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("FillLight"));
    FillLight->SetupAttachment(RootComponent);
    FillLight->SetRelativeLocation(FVector(0.0f, 0.0f, 18.0f));
    FillLight->SetLightColor(FLinearColor(1.0f, 0.7f, 0.4f));
    FillLight->SetIntensity(50.0f);
    FillLight->SetAttenuationRadius(150.0f);
    FillLight->SetSourceRadius(5.0f);
    FillLight->CastShadows = false;
    FillLight->bUseTemperature = true;
    FillLight->SetTemperature(1800.0f);

    // Create flame particle system
    FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
    FlameParticles->SetupAttachment(RootComponent);
    FlameParticles->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f));
    FlameParticles->SetAutoActivate(false);

    // Create smoke particle system
    SmokeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeParticles"));
    SmokeParticles->SetupAttachment(RootComponent);
    SmokeParticles->SetRelativeLocation(FVector(0.0f, 0.0f, 25.0f));
    SmokeParticles->SetAutoActivate(false);

    // Create audio component
    CandleAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("CandleAudioComponent"));
    CandleAudioComponent->SetupAttachment(RootComponent);
    CandleAudioComponent->SetAutoActivate(false);

    // Create focusable component
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    if (FocusableComponent)
    {
        FocusableComponent->FocusScaleFactor = 1.05f;
        FocusableComponent->ScaleAnimationDuration = 0.25f;
    }

    // Create timelines
    FlickerTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FlickerTimeline"));
    ColorTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ColorTimeline"));

    // Load default assets
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
    if (CylinderMesh.Succeeded())
    {
        CandleBaseMesh->SetStaticMesh(CylinderMesh.Object);
        CandleWickMesh->SetStaticMesh(CylinderMesh.Object);
    }

    // Initialize magical colors
    MagicalColors.Add(FLinearColor::Red);
    MagicalColors.Add(FLinearColor::Green);
    MagicalColors.Add(FLinearColor::Blue);
    MagicalColors.Add(FLinearColor::Yellow);
    MagicalColors.Add(FLinearColor(1.0f, 0.0f, 1.0f)); // Magenta
    MagicalColors.Add(FLinearColor(0.0f, 1.0f, 1.0f)); // Cyan

    // Initialize state
    bIsLit = bStartLit;
    ReplicatedCandleType = CandleType;
}

void ASGAdvancedCandle::BeginPlay()
{
    Super::BeginPlay();

    // Initialize candle presets
    InitializeCandlePresets();

    // Create flicker curves
    CreateFlickerCurves();

    // Set up timelines
    if (FlickerTimeline)
    {
        FOnTimelineFloat FlickerCallback;
        FlickerCallback.BindUFunction(this, FName("OnFlickerTimelineUpdate"));
        FlickerTimeline->SetLooping(true);
    }

    if (ColorTimeline)
    {
        FOnTimelineFloat ColorCallback;
        ColorCallback.BindUFunction(this, FName("OnColorTimelineUpdate"));
        ColorTimeline->SetLooping(true);
        ColorTimeline->SetTimelineLength(1.0f / ColorChangeSpeed);
    }

    // Apply current candle type
    ApplyCandlePreset();
    UpdateCandleVisuals();

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s initialized - Type: %d, Lit: %s"), 
           *GetName(), (int32)CandleType, bIsLit ? TEXT("Yes") : TEXT("No"));
}

void ASGAdvancedCandle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Additional tick logic for advanced effects could go here
}

void ASGAdvancedCandle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASGAdvancedCandle, bIsLit);
    DOREPLIFETIME(ASGAdvancedCandle, ReplicatedCandleType);
}

FText ASGAdvancedCandle::GetInteractionText_Implementation() const
{
    if (!bCanBeExtinguished && bIsLit)
    {
        return PermanentText;
    }
    
    return bIsLit ? LitText : UnlitText;
}

void ASGAdvancedCandle::Interact_Implementation(APawn* InstigatorPawn)
{
    if (!InstigatorPawn)
    {
        return;
    }

    // Can't extinguish permanent candles
    if (!bCanBeExtinguished && bIsLit)
    {
        UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s cannot be extinguished (permanent)"), *GetName());
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s interacted by %s"), 
           *GetName(), *InstigatorPawn->GetName());

    ToggleCandle();
}

void ASGAdvancedCandle::BeginFocus_Implementation()
{
    bIsFocused = true;
    if (FocusableComponent)
    {
        FocusableComponent->BeginFocus();
    }
}

void ASGAdvancedCandle::EndFocus_Implementation()
{
    bIsFocused = false;
    if (FocusableComponent)
    {
        FocusableComponent->EndFocus();
    }
}

bool ASGAdvancedCandle::IsFocused_Implementation() const
{
    return bIsFocused;
}

float ASGAdvancedCandle::GetFocusScaleFactor_Implementation() const
{
    // Different scale factors based on candle type
    switch (CandleType)
    {
        case ECandleType::SmallCandle: return 1.1f;
        case ECandleType::MediumCandle: return 1.05f;
        case ECandleType::LargeCandle: return 1.03f;
        case ECandleType::Torch: return 1.02f;
        case ECandleType::Lantern: return 1.08f;
        case ECandleType::OilLamp: return 1.07f;
        default: return 1.05f;
    }
}

void ASGAdvancedCandle::LightCandle()
{
    if (bIsLit)
    {
        return;
    }

    bIsLit = true;
    UpdateCandleVisuals();

    // Play light sound
    if (LightSound && CandleAudioComponent)
    {
        CandleAudioComponent->SetSound(LightSound);
        CandleAudioComponent->Play();
    }

    // Start ambient sound
    if (AmbientFlameSound && CandleAudioComponent)
    {
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
        {
            if (bIsLit && CandleAudioComponent)
            {
                CandleAudioComponent->SetSound(AmbientFlameSound);
                CandleAudioComponent->SetVolumeMultiplier(0.3f);
                CandleAudioComponent->Play();
            }
        }, 1.0f, false);
    }

    // Start visual effects
    StartFlickering();
    
    if (bMagicalCandle && ColorTimeline)
    {
        ColorTimeline->PlayFromStart();
    }

    // Broadcast event
    OnCandleLightChanged.Broadcast(true, CandleType);

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s lit"), *GetName());
}

void ASGAdvancedCandle::ExtinguishCandle()
{
    if (!bIsLit || !bCanBeExtinguished)
    {
        return;
    }

    bIsLit = false;
    UpdateCandleVisuals();

    // Play extinguish sound
    if (ExtinguishSound && CandleAudioComponent)
    {
        CandleAudioComponent->SetSound(ExtinguishSound);
        CandleAudioComponent->Play();
    }

    // Stop effects
    StopFlickering();
    
    if (ColorTimeline)
    {
        ColorTimeline->Stop();
    }

    // Set up auto-relight if enabled
    if (bAutoRelight)
    {
        GetWorld()->GetTimerManager().SetTimer(AutoRelightTimer, this, &ASGAdvancedCandle::AutoRelight, AutoRelightDelay, false);
    }

    // Broadcast event
    OnCandleLightChanged.Broadcast(false, CandleType);

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s extinguished"), *GetName());
}

void ASGAdvancedCandle::ToggleCandle()
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

void ASGAdvancedCandle::SetCandleType(ECandleType NewType)
{
    if (CandleType == NewType)
    {
        return;
    }

    CandleType = NewType;
    ReplicatedCandleType = NewType;
    
    ApplyCandlePreset();
    UpdateMeshScale();

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s type changed to %d"), *GetName(), (int32)NewType);
}

void ASGAdvancedCandle::SetLightMode(ECandleLightMode NewMode)
{
    if (LightMode == NewMode)
    {
        return;
    }

    LightMode = NewMode;
    UpdateFlickerMode();

    UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s light mode changed to %d"), *GetName(), (int32)NewMode);
}

void ASGAdvancedCandle::OnRep_IsLit()
{
    UpdateCandleVisuals();
    
    if (bIsLit)
    {
        StartFlickering();
        if (bMagicalCandle && ColorTimeline)
        {
            ColorTimeline->PlayFromStart();
        }
    }
    else
    {
        StopFlickering();
        if (ColorTimeline)
        {
            ColorTimeline->Stop();
        }
    }
}

void ASGAdvancedCandle::OnRep_CandleType()
{
    CandleType = ReplicatedCandleType;
    ApplyCandlePreset();
    UpdateMeshScale();
}

void ASGAdvancedCandle::InitializeCandlePresets()
{
    // Small Candle
    FCandlePreset SmallPreset;
    SmallPreset.LightColor = FLinearColor(1.0f, 0.85f, 0.7f);
    SmallPreset.BaseIntensity = 100.0f;
    SmallPreset.LightRadius = 200.0f;
    SmallPreset.FlickerIntensity = 0.4f;
    SmallPreset.FlickerSpeed = 3.0f;
    SmallPreset.Temperature = 2200.0f;
    SmallPreset.ParticleScale = FVector(0.7f);
    CandlePresets.Add(ECandleType::SmallCandle, SmallPreset);

    // Medium Candle
    FCandlePreset MediumPreset;
    MediumPreset.LightColor = FLinearColor(1.0f, 0.8f, 0.6f);
    MediumPreset.BaseIntensity = 200.0f;
    MediumPreset.LightRadius = 300.0f;
    MediumPreset.FlickerIntensity = 0.3f;
    MediumPreset.FlickerSpeed = 2.0f;
    MediumPreset.Temperature = 2000.0f;
    MediumPreset.ParticleScale = FVector(1.0f);
    CandlePresets.Add(ECandleType::MediumCandle, MediumPreset);

    // Large Candle
    FCandlePreset LargePreset;
    LargePreset.LightColor = FLinearColor(1.0f, 0.8f, 0.65f);
    LargePreset.BaseIntensity = 350.0f;
    LargePreset.LightRadius = 450.0f;
    LargePreset.FlickerIntensity = 0.2f;
    LargePreset.FlickerSpeed = 1.5f;
    LargePreset.Temperature = 1900.0f;
    LargePreset.ParticleScale = FVector(1.3f);
    CandlePresets.Add(ECandleType::LargeCandle, LargePreset);

    // Torch
    FCandlePreset TorchPreset;
    TorchPreset.LightColor = FLinearColor(1.0f, 0.7f, 0.4f);
    TorchPreset.BaseIntensity = 500.0f;
    TorchPreset.LightRadius = 600.0f;
    TorchPreset.FlickerIntensity = 0.5f;
    TorchPreset.FlickerSpeed = 4.0f;
    TorchPreset.Temperature = 1800.0f;
    TorchPreset.ParticleScale = FVector(1.5f);
    CandlePresets.Add(ECandleType::Torch, TorchPreset);

    // Lantern
    FCandlePreset LanternPreset;
    LanternPreset.LightColor = FLinearColor(1.0f, 0.9f, 0.8f);
    LanternPreset.BaseIntensity = 300.0f;
    LanternPreset.LightRadius = 400.0f;
    LanternPreset.FlickerIntensity = 0.15f;
    LanternPreset.FlickerSpeed = 1.0f;
    LanternPreset.Temperature = 2100.0f;
    LanternPreset.ParticleScale = FVector(0.8f);
    CandlePresets.Add(ECandleType::Lantern, LanternPreset);

    // Oil Lamp
    FCandlePreset OilLampPreset;
    OilLampPreset.LightColor = FLinearColor(1.0f, 0.85f, 0.6f);
    OilLampPreset.BaseIntensity = 250.0f;
    OilLampPreset.LightRadius = 350.0f;
    OilLampPreset.FlickerIntensity = 0.25f;
    OilLampPreset.FlickerSpeed = 2.5f;
    OilLampPreset.Temperature = 2000.0f;
    OilLampPreset.ParticleScale = FVector(0.9f);
    CandlePresets.Add(ECandleType::OilLamp, OilLampPreset);
}

void ASGAdvancedCandle::ApplyCandlePreset()
{
    FCandlePreset CurrentPreset = GetCurrentPreset();
    
    if (MainLight)
    {
        MainLight->SetLightColor(CurrentPreset.LightColor);
        MainLight->SetIntensity(CurrentPreset.BaseIntensity);
        MainLight->SetAttenuationRadius(CurrentPreset.LightRadius);
        MainLight->SetTemperature(CurrentPreset.Temperature);
    }

    if (FillLight)
    {
        FillLight->SetLightColor(CurrentPreset.LightColor * 0.8f);
        FillLight->SetIntensity(CurrentPreset.BaseIntensity * 0.3f);
        FillLight->SetAttenuationRadius(CurrentPreset.LightRadius * 0.6f);
        FillLight->SetTemperature(CurrentPreset.Temperature - 200.0f);
    }

    // Update particle scale
    if (FlameParticles)
    {
        FlameParticles->SetRelativeScale3D(CurrentPreset.ParticleScale);
    }

    if (SmokeParticles)
    {
        SmokeParticles->SetRelativeScale3D(CurrentPreset.ParticleScale * 0.8f);
    }

    UpdateFlickerMode();
}

FCandlePreset ASGAdvancedCandle::GetCurrentPreset() const
{
    if (const FCandlePreset* Preset = CandlePresets.Find(CandleType))
    {
        return *Preset;
    }
    
    // Return default preset if not found
    return FCandlePreset();
}

void ASGAdvancedCandle::UpdateCandleVisuals()
{
    UpdateLightVisibility();

    // Update particles
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

    if (SmokeParticles)
    {
        if (bIsLit)
        {
            SmokeParticles->Activate();
        }
        else
        {
            SmokeParticles->Deactivate();
        }
    }
}

void ASGAdvancedCandle::UpdateLightVisibility()
{
    if (MainLight)
    {
        MainLight->SetVisibility(bIsLit);
    }

    if (FillLight)
    {
        FillLight->SetVisibility(bIsLit);
    }
}

void ASGAdvancedCandle::UpdateMeshScale()
{
    if (!CandleBaseMesh)
    {
        return;
    }

    FVector NewScale = FVector(1.0f);
    
    switch (CandleType)
    {
        case ECandleType::SmallCandle:
            NewScale = FVector(0.2f, 0.2f, 0.7f);
            break;
        case ECandleType::MediumCandle:
            NewScale = FVector(0.3f, 0.3f, 1.0f);
            break;
        case ECandleType::LargeCandle:
            NewScale = FVector(0.5f, 0.5f, 1.5f);
            break;
        case ECandleType::Torch:
            NewScale = FVector(0.15f, 0.15f, 3.0f);
            break;
        case ECandleType::Lantern:
            NewScale = FVector(0.8f, 0.8f, 1.2f);
            break;
        case ECandleType::OilLamp:
            NewScale = FVector(0.6f, 0.6f, 0.8f);
            break;
    }

    CandleBaseMesh->SetRelativeScale3D(NewScale);
}

void ASGAdvancedCandle::CreateFlickerCurves()
{
    // Realistic flicker curve
    RealisticFlickerCurve = NewObject<UCurveFloat>(this);
    if (RealisticFlickerCurve)
    {
        RealisticFlickerCurve->FloatCurve.AddKey(0.0f, 1.0f);
        RealisticFlickerCurve->FloatCurve.AddKey(0.2f, 0.95f);
        RealisticFlickerCurve->FloatCurve.AddKey(0.4f, 1.05f);
        RealisticFlickerCurve->FloatCurve.AddKey(0.6f, 0.9f);
        RealisticFlickerCurve->FloatCurve.AddKey(0.8f, 1.02f);
        RealisticFlickerCurve->FloatCurve.AddKey(1.0f, 1.0f);
    }

    // Dramatic flicker curve
    DramaticFlickerCurve = NewObject<UCurveFloat>(this);
    if (DramaticFlickerCurve)
    {
        DramaticFlickerCurve->FloatCurve.AddKey(0.0f, 1.0f);
        DramaticFlickerCurve->FloatCurve.AddKey(0.1f, 0.7f);
        DramaticFlickerCurve->FloatCurve.AddKey(0.3f, 1.3f);
        DramaticFlickerCurve->FloatCurve.AddKey(0.5f, 0.6f);
        DramaticFlickerCurve->FloatCurve.AddKey(0.7f, 1.4f);
        DramaticFlickerCurve->FloatCurve.AddKey(0.9f, 0.8f);
        DramaticFlickerCurve->FloatCurve.AddKey(1.0f, 1.0f);
    }

    // Magical flicker curve
    MagicalFlickerCurve = NewObject<UCurveFloat>(this);
    if (MagicalFlickerCurve)
    {
        MagicalFlickerCurve->FloatCurve.AddKey(0.0f, 1.0f);
        MagicalFlickerCurve->FloatCurve.AddKey(0.25f, 1.2f);
        MagicalFlickerCurve->FloatCurve.AddKey(0.5f, 0.8f);
        MagicalFlickerCurve->FloatCurve.AddKey(0.75f, 1.3f);
        MagicalFlickerCurve->FloatCurve.AddKey(1.0f, 1.0f);
    }

    // Color change curve
    ColorChangeCurve = NewObject<UCurveFloat>(this);
    if (ColorChangeCurve)
    {
        ColorChangeCurve->FloatCurve.AddKey(0.0f, 0.0f);
        ColorChangeCurve->FloatCurve.AddKey(1.0f, 1.0f);
    }
}

void ASGAdvancedCandle::StartFlickering()
{
    if (!FlickerTimeline || !bIsLit)
    {
        return;
    }

    UpdateFlickerMode();
    FlickerTimeline->PlayFromStart();
}

void ASGAdvancedCandle::StopFlickering()
{
    if (FlickerTimeline)
    {
        FlickerTimeline->Stop();
        
        // Reset lights to base intensity
        FCandlePreset CurrentPreset = GetCurrentPreset();
        if (MainLight)
        {
            MainLight->SetIntensity(CurrentPreset.BaseIntensity);
        }
        if (FillLight)
        {
            FillLight->SetIntensity(CurrentPreset.BaseIntensity * 0.3f);
        }
    }
}

void ASGAdvancedCandle::UpdateFlickerMode()
{
    if (!FlickerTimeline)
    {
        return;
    }

    FCandlePreset CurrentPreset = GetCurrentPreset();
    FlickerTimeline->SetTimelineLength(1.0f / CurrentPreset.FlickerSpeed);

    // Clear existing curve
    FlickerTimeline->SetTimelineLength(1.0f / CurrentPreset.FlickerSpeed);

    // Set appropriate curve based on light mode
    UCurveFloat* SelectedCurve = nullptr;
    switch (LightMode)
    {
        case ECandleLightMode::Realistic:
            SelectedCurve = RealisticFlickerCurve;
            break;
        case ECandleLightMode::Steady:
            SelectedCurve = nullptr; // No flickering
            break;
        case ECandleLightMode::Dramatic:
            SelectedCurve = DramaticFlickerCurve;
            break;
        case ECandleLightMode::Magical:
            SelectedCurve = MagicalFlickerCurve;
            break;
    }

    if (SelectedCurve && LightMode != ECandleLightMode::Steady)
    {
        FOnTimelineFloat FlickerCallback;
        FlickerCallback.BindUFunction(this, FName("OnFlickerTimelineUpdate"));
        FlickerTimeline->AddInterpFloat(SelectedCurve, FlickerCallback);
    }
}

void ASGAdvancedCandle::OnFlickerTimelineUpdate(float Value)
{
    if (!bIsLit)
    {
        return;
    }

    FCandlePreset CurrentPreset = GetCurrentPreset();
    CurrentFlickerMultiplier = Value;
    
    if (MainLight)
    {
        float FlickerAmount = CurrentPreset.FlickerIntensity * (Value - 1.0f);
        float NewIntensity = CurrentPreset.BaseIntensity * (1.0f + FlickerAmount);
        NewIntensity = FMath::Clamp(NewIntensity, CurrentPreset.BaseIntensity * 0.3f, CurrentPreset.BaseIntensity * 1.7f);
        MainLight->SetIntensity(NewIntensity);
    }

    if (FillLight)
    {
        float FlickerAmount = CurrentPreset.FlickerIntensity * (Value - 1.0f) * 0.5f; // Less flickering for fill light
        float NewIntensity = (CurrentPreset.BaseIntensity * 0.3f) * (1.0f + FlickerAmount);
        FillLight->SetIntensity(NewIntensity);
    }
}

void ASGAdvancedCandle::OnColorTimelineUpdate(float Value)
{
    if (!bMagicalCandle || !bIsLit || MagicalColors.Num() == 0)
    {
        return;
    }

    // Cycle through magical colors
    int32 NextColorIndex = (CurrentMagicalColorIndex + 1) % MagicalColors.Num();
    FLinearColor CurrentColor = MagicalColors[CurrentMagicalColorIndex];
    FLinearColor NextColor = MagicalColors[NextColorIndex];
    
    FLinearColor InterpolatedColor = FMath::Lerp(CurrentColor, NextColor, Value);
    
    if (MainLight)
    {
        MainLight->SetLightColor(InterpolatedColor);
    }
    if (FillLight)
    {
        FillLight->SetLightColor(InterpolatedColor * 0.8f);
    }

    // When we complete a cycle, move to next color
    if (Value >= 1.0f)
    {
        CurrentMagicalColorIndex = NextColorIndex;
    }
}

void ASGAdvancedCandle::AutoRelight()
{
    if (!bIsLit && bAutoRelight)
    {
        LightCandle();
        UE_LOG(LogTemp, Log, TEXT("SGAdvancedCandle: %s auto-relit"), *GetName());
    }
}