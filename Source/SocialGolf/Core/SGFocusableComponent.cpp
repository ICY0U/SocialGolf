#include "SGFocusableComponent.h"
#include "Components/TimelineComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"

USGFocusableComponent::USGFocusableComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(false); // Focus effects are usually client-side only

    // Create timeline component
    ScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleTimeline"));
}

void USGFocusableComponent::BeginPlay()
{
    Super::BeginPlay();

    // Store original scale
    if (AActor* Owner = GetOwner())
    {
        OriginalScale = Owner->GetActorScale3D();
    }

    // Create and set up the scale curve
    CreateScaleCurve();

    if (ScaleTimeline && ScaleCurve)
    {
        // Bind timeline events
        FOnTimelineFloat TimelineCallback;
        TimelineCallback.BindUFunction(this, FName("OnScaleTimelineUpdate"));
        ScaleTimeline->AddInterpFloat(ScaleCurve, TimelineCallback);

        FOnTimelineEvent TimelineFinishedCallback;
        TimelineFinishedCallback.BindUFunction(this, FName("OnScaleTimelineFinished"));
        ScaleTimeline->SetTimelineFinishedFunc(TimelineFinishedCallback);

        ScaleTimeline->SetLooping(false);
        ScaleTimeline->SetTimelineLength(ScaleAnimationDuration);
    }

    UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: Initialized on %s"), 
           GetOwner() ? *GetOwner()->GetName() : TEXT("Unknown"));
}

void USGFocusableComponent::BeginFocus()
{
    if (!bEnableFocusEffect || bIsFocused)
    {
        return;
    }

    bIsFocused = true;
    AActor* Owner = GetOwner();
    if (!Owner || !ScaleTimeline)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: %s began focus"), *Owner->GetName());

    // Calculate target scale
    TargetScale = OriginalScale * FocusScaleFactor;

    // Start scaling up animation
    ScaleTimeline->SetTimelineLength(ScaleAnimationDuration);
    ScaleTimeline->PlayFromStart();

    // Broadcast event
    OnBeginFocus.Broadcast();
}

void USGFocusableComponent::EndFocus()
{
    if (!bEnableFocusEffect || !bIsFocused)
    {
        return;
    }

    bIsFocused = false;
    AActor* Owner = GetOwner();
    if (!Owner || !ScaleTimeline)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: %s ended focus"), *Owner->GetName());

    // Reverse the animation to scale back down
    ScaleTimeline->Reverse();

    // Broadcast event
    OnEndFocus.Broadcast();
}

void USGFocusableComponent::OnScaleTimelineUpdate(float Value)
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    // Interpolate between original and target scale based on timeline value
    FVector CurrentScale = FMath::Lerp(OriginalScale, TargetScale, Value);
    Owner->SetActorScale3D(CurrentScale);
}

void USGFocusableComponent::OnScaleTimelineFinished()
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    // Ensure we're at the correct final scale
    if (bIsFocused)
    {
        Owner->SetActorScale3D(TargetScale);
        UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: %s scale animation finished (focused)"), *Owner->GetName());
    }
    else
    {
        Owner->SetActorScale3D(OriginalScale);
        UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: %s scale animation finished (unfocused)"), *Owner->GetName());
    }
}

void USGFocusableComponent::CreateScaleCurve()
{
    // Create a smooth curve for the scaling animation
    ScaleCurve = NewObject<UCurveFloat>(this);
    
    if (ScaleCurve)
    {
        // Create smooth ease-in-out curve
        ScaleCurve->FloatCurve.AddKey(0.0f, 0.0f);
        ScaleCurve->FloatCurve.AddKey(1.0f, 1.0f);
        
        // Set interpolation mode to cubic for smooth animation
        for (auto& Key : ScaleCurve->FloatCurve.Keys)
        {
            Key.InterpMode = RCIM_Cubic;
            Key.TangentMode = RCTM_Auto;
        }
        
        UE_LOG(LogTemp, Log, TEXT("SGFocusableComponent: Created scale curve"));
    }
}