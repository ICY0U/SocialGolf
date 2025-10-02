#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SGBasketballPhysicsMaterial.generated.h"

UENUM(BlueprintType)
enum class EBasketballSurfaceType : uint8
{
    Court_Wood      UMETA(DisplayName = "Basketball Court (Wood)"),
    Court_Concrete  UMETA(DisplayName = "Concrete Court"),
    Grass           UMETA(DisplayName = "Grass"),
    Sand            UMETA(DisplayName = "Sand"),
    Metal           UMETA(DisplayName = "Metal"),
    Generic         UMETA(DisplayName = "Generic Surface")
};

UCLASS(BlueprintType)
class SOCIALGOLF_API USGBasketballPhysicsMaterial : public UPhysicalMaterial
{
    GENERATED_BODY()

public:
    USGBasketballPhysicsMaterial();

    // Basketball-specific surface properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    EBasketballSurfaceType BasketballSurfaceType = EBasketballSurfaceType::Court_Wood;

    // Advanced bounce properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float MinimumBounceHeight = 0.3f; // Minimum bounce percentage

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float MaximumBounceHeight = 0.95f; // Maximum bounce percentage

    // Velocity-dependent restitution
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float LowVelocityRestitution = 0.7f; // Bounce at low speeds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float HighVelocityRestitution = 0.85f; // Bounce at high speeds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float VelocityTransitionThreshold = 500.0f; // cm/s where transition occurs

    // Spin effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SpinInfluenceOnBounce = 0.15f; // How much spin affects bounce direction

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Physics")
    float SpinDecayRate = 0.95f; // How much spin is retained after bounce

    // Surface-specific sound and effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Audio")
    float SoundVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Audio")
    float SoundPitchVariation = 0.1f;

    // Helper functions
    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    float GetVelocityBasedRestitution(float ImpactVelocity) const;

    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    FVector CalculateSpinInfluencedBounce(const FVector& IncomingVelocity, const FVector& SurfaceNormal, const FVector& AngularVelocity) const;

    // Static helper to create surface-specific materials
    UFUNCTION(BlueprintCallable, Category = "Basketball Physics")
    static USGBasketballPhysicsMaterial* CreateForSurface(EBasketballSurfaceType BasketballSurface);
};