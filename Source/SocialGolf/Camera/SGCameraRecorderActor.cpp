#include "SGCameraRecorderActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ASGCameraRecorderActor::ASGCameraRecorderActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create root component
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // Create camera recorder component
    CameraRecorderComponent = CreateDefaultSubobject<USGCameraRecorder>(TEXT("CameraRecorderComponent"));
    CameraRecorderComponent->SetupAttachment(RootComponent);

    // Create interaction box for easier interaction
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(CameraRecorderComponent);
    InteractionBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
    InteractionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // Set actor properties
    SetCanBeDamaged(false);
    SetActorEnableCollision(true);
}

void ASGCameraRecorderActor::BeginPlay()
{
    Super::BeginPlay();
    
    // Any additional initialization can go here
}

void ASGCameraRecorderActor::StartRecording(const FString& RecordingName)
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->StartRecording(RecordingName);
    }
}

void ASGCameraRecorderActor::StopRecording()
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->StopRecording();
    }
}

void ASGCameraRecorderActor::PlayLatestRecording()
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->PlayRecording(-1);
    }
}

void ASGCameraRecorderActor::StopPlayback()
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->StopPlayback();
    }
}

bool ASGCameraRecorderActor::IsRecording() const
{
    return CameraRecorderComponent ? CameraRecorderComponent->IsRecording() : false;
}

bool ASGCameraRecorderActor::IsPlaying() const
{
    return CameraRecorderComponent ? CameraRecorderComponent->IsPlaying() : false;
}

int32 ASGCameraRecorderActor::GetRecordingCount() const
{
    return CameraRecorderComponent ? CameraRecorderComponent->GetRecordingCount() : 0;
}

void ASGCameraRecorderActor::SaveRecordingToDesktop(int32 RecordingIndex)
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->SaveRecordingToDesktop(RecordingIndex);
    }
}

void ASGCameraRecorderActor::DeleteRecording(int32 RecordingIndex)
{
    if (CameraRecorderComponent)
    {
        CameraRecorderComponent->DeleteRecording(RecordingIndex);
    }
}