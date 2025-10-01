#include "SGGolfTee.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "../Core/SGFocusableComponent.h"
#include "../Characters/SGCharacter.h"
#include "SGGolfBall.h"

ASGGolfTee::ASGGolfTee()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = true;
    
    // Create tee mesh component
    TeeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeeMesh"));
    RootComponent = TeeMesh;
    TeeMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    TeeMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    TeeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    
    // Load a simple cylinder mesh as the tee
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Engine/BasicShapes/Cylinder"));
    if (CylinderMeshAsset.Succeeded())
    {
        TeeMesh->SetStaticMesh(CylinderMeshAsset.Object);
        TeeMesh->SetWorldScale3D(FVector(0.05f, 0.05f, 0.1f)); // Small thin cylinder
    }
    
    // Create interaction sphere
    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->SetSphereRadius(InteractionDistance);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionSphere->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    InteractionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    InteractionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
    InteractionSphere->SetVisibility(false); // Hidden in game
    
    // Create focusable component
    FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
    FocusableComponent->bEnableFocusEffect = true;
    FocusableComponent->FocusScaleFactor = 1.1f;
    
    // Initialize state
    bHasBall = false;
    CurrentBall = nullptr;
}

void ASGGolfTee::BeginPlay()
{
    Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfTee: Initialized at location %s"), *GetActorLocation().ToString());
}

FText ASGGolfTee::GetInteractionText_Implementation() const
{
    if (!bHasBall || !CurrentBall)
    {
        return FText::FromString(TEXT("Press E to start golf"));
    }
    else
    {
        return FText::FromString(TEXT("Press E to reset ball"));
    }
}

void ASGGolfTee::Interact_Implementation(APawn* InstigatorPawn)
{
    ASGCharacter* Character = Cast<ASGCharacter>(InstigatorPawn);
    if (!Character)
    {
        return;
    }
    
    if (!bHasBall || !CurrentBall)
    {
        // Spawn a golf ball
        SpawnGolfBall();
        UE_LOG(LogTemp, Warning, TEXT("SGGolfTee: %s spawned a golf ball"), *Character->GetName());
    }
    else
    {
        // Ball already exists, reset it to tee position
        CurrentBall->PlaceBall(GetActorLocation() + FVector(0, 0, 25.0f));
        UE_LOG(LogTemp, Warning, TEXT("SGGolfTee: %s reset the golf ball"), *Character->GetName());
    }
}

void ASGGolfTee::SpawnGolfBall()
{
    if (bHasBall && CurrentBall)
    {
        UE_LOG(LogTemp, Warning, TEXT("SGGolfTee: Ball already exists, not spawning another"));
        return;
    }
    
    // Calculate spawn location (slightly above the tee)
    FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 25.0f);
    FRotator SpawnRotation = FRotator::ZeroRotator;
    
    // Spawn the golf ball
    CurrentBall = GetWorld()->SpawnActor<ASGGolfBall>(ASGGolfBall::StaticClass(), SpawnLocation, SpawnRotation);
    if (CurrentBall)
    {
        bHasBall = true;
        UE_LOG(LogTemp, Warning, TEXT("SGGolfTee: Spawned golf ball at %s"), *SpawnLocation.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SGGolfTee: Failed to spawn golf ball!"));
    }
}

void ASGGolfTee::RemoveBall()
{
    if (CurrentBall)
    {
        CurrentBall->Destroy();
        CurrentBall = nullptr;
    }
    bHasBall = false;
    
    UE_LOG(LogTemp, Log, TEXT("SGGolfTee: Removed golf ball"));
}