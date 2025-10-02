#include "SGBasketballPhysicsMaterial.h"
#include "Engine/Engine.h"

USGBasketballPhysicsMaterial::USGBasketballPhysicsMaterial()
{
    // Default basketball physics properties for wooden court
    BasketballSurfaceType = EBasketballSurfaceType::Court_Wood;
    
    // Base physical material properties
    Friction = 0.7f;                    // Good grip for realistic movement
    StaticFriction = 0.8f;              // Prevents sliding when stationary
    Restitution = 0.82f;                // Realistic basketball bounce on wood
    Density = 0.6f;                     // Realistic basketball density (0.6 g/cm³)
    
    // Basketball-specific properties
    MinimumBounceHeight = 0.3f;         // 30% minimum bounce
    MaximumBounceHeight = 0.95f;        // 95% maximum bounce
    LowVelocityRestitution = 0.75f;     // Good bounce at low speeds
    HighVelocityRestitution = 0.85f;    // Slightly better at high speeds
    VelocityTransitionThreshold = 500.0f; // 5 m/s transition point
    
    // Spin and rotation effects
    SpinInfluenceOnBounce = 0.15f;      // Moderate spin influence
    SpinDecayRate = 0.92f;              // Some spin loss on bounce
    
    // Audio properties
    SoundVolumeMultiplier = 1.0f;
    SoundPitchVariation = 0.1f;
    
    // Surface type for sound effects
    SurfaceType = EPhysicalSurface::SurfaceType_Default;
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballPhysicsMaterial: Enhanced basketball physics material created for %s"), 
           *UEnum::GetValueAsString(BasketballSurfaceType));
}

float USGBasketballPhysicsMaterial::GetVelocityBasedRestitution(float ImpactVelocity) const
{
    // Convert velocity magnitude to absolute value
    float AbsVelocity = FMath::Abs(ImpactVelocity);
    
    // Calculate interpolation factor based on velocity
    float VelocityFactor = FMath::Clamp(AbsVelocity / VelocityTransitionThreshold, 0.0f, 1.0f);
    
    // Smooth transition between low and high velocity restitution
    float InterpolatedRestitution = FMath::Lerp(LowVelocityRestitution, HighVelocityRestitution, VelocityFactor);
    
    // Apply surface-specific modifiers
    float SurfaceModifier = 1.0f;
    switch (BasketballSurfaceType)
    {
        case EBasketballSurfaceType::Court_Wood:
            SurfaceModifier = 1.0f; // Ideal surface
            break;
        case EBasketballSurfaceType::Court_Concrete:
            SurfaceModifier = 0.95f; // Slightly less bouncy
            break;
        case EBasketballSurfaceType::Grass:
            SurfaceModifier = 0.6f; // Much less bouncy
            break;
        case EBasketballSurfaceType::Sand:
            SurfaceModifier = 0.3f; // Very low bounce
            break;
        case EBasketballSurfaceType::Metal:
            SurfaceModifier = 1.1f; // Higher bounce but cap it
            break;
        default:
            SurfaceModifier = 0.8f; // Generic surface
            break;
    }
    
    // Apply surface modifier and clamp to reasonable bounds
    float FinalRestitution = InterpolatedRestitution * SurfaceModifier;
    return FMath::Clamp(FinalRestitution, MinimumBounceHeight, MaximumBounceHeight);
}

FVector USGBasketballPhysicsMaterial::CalculateSpinInfluencedBounce(const FVector& IncomingVelocity, const FVector& SurfaceNormal, const FVector& AngularVelocity) const
{
    // Start with standard reflection
    FVector ReflectedVelocity = IncomingVelocity - 2.0f * FVector::DotProduct(IncomingVelocity, SurfaceNormal) * SurfaceNormal;
    
    // Calculate spin influence (Magnus effect)
    FVector SpinAxis = AngularVelocity.GetSafeNormal();
    float SpinMagnitude = AngularVelocity.Size();
    
    if (SpinMagnitude > 0.1f) // Only apply if there's significant spin
    {
        // Calculate the perpendicular component to the surface normal
        FVector SpinInfluence = FVector::CrossProduct(SpinAxis, SurfaceNormal);
        SpinInfluence = SpinInfluence.GetSafeNormal();
        
        // Apply spin influence based on spin magnitude and material properties
        float SpinEffect = SpinMagnitude * SpinInfluenceOnBounce * 0.01f; // Scale down
        SpinEffect = FMath::Clamp(SpinEffect, 0.0f, 100.0f); // Reasonable limits
        
        // Add spin influence to the reflected velocity
        ReflectedVelocity += SpinInfluence * SpinEffect;
    }
    
    return ReflectedVelocity;
}

USGBasketballPhysicsMaterial* USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType BasketballSurface)
{
    USGBasketballPhysicsMaterial* NewMaterial = NewObject<USGBasketballPhysicsMaterial>();
    if (!NewMaterial)
    {
        return nullptr;
    }
    
    NewMaterial->BasketballSurfaceType = BasketballSurface;
    
    // Configure properties based on surface type
    switch (BasketballSurface)
    {
        case EBasketballSurfaceType::Court_Wood:
            NewMaterial->Friction = 0.7f;
            NewMaterial->StaticFriction = 0.8f;
            NewMaterial->Restitution = 0.82f;
            NewMaterial->LowVelocityRestitution = 0.75f;
            NewMaterial->HighVelocityRestitution = 0.85f;
            NewMaterial->SoundVolumeMultiplier = 1.0f;
            break;
            
        case EBasketballSurfaceType::Court_Concrete:
            NewMaterial->Friction = 0.75f;
            NewMaterial->StaticFriction = 0.85f;
            NewMaterial->Restitution = 0.78f;
            NewMaterial->LowVelocityRestitution = 0.70f;
            NewMaterial->HighVelocityRestitution = 0.80f;
            NewMaterial->SoundVolumeMultiplier = 1.2f; // Louder on concrete
            break;
            
        case EBasketballSurfaceType::Grass:
            NewMaterial->Friction = 1.2f; // Higher friction on grass
            NewMaterial->StaticFriction = 1.4f;
            NewMaterial->Restitution = 0.4f;
            NewMaterial->LowVelocityRestitution = 0.3f;
            NewMaterial->HighVelocityRestitution = 0.5f;
            NewMaterial->SoundVolumeMultiplier = 0.6f; // Muffled on grass
            break;
            
        case EBasketballSurfaceType::Sand:
            NewMaterial->Friction = 1.8f; // Very high friction
            NewMaterial->StaticFriction = 2.0f;
            NewMaterial->Restitution = 0.2f;
            NewMaterial->LowVelocityRestitution = 0.15f;
            NewMaterial->HighVelocityRestitution = 0.25f;
            NewMaterial->SoundVolumeMultiplier = 0.3f; // Very muffled
            break;
            
        case EBasketballSurfaceType::Metal:
            NewMaterial->Friction = 0.4f; // Low friction on metal
            NewMaterial->StaticFriction = 0.5f;
            NewMaterial->Restitution = 0.9f;
            NewMaterial->LowVelocityRestitution = 0.85f;
            NewMaterial->HighVelocityRestitution = 0.95f;
            NewMaterial->SoundVolumeMultiplier = 1.5f; // Very loud on metal
            break;
            
        default: // Generic
            NewMaterial->Friction = 0.6f;
            NewMaterial->StaticFriction = 0.7f;
            NewMaterial->Restitution = 0.65f;
            NewMaterial->LowVelocityRestitution = 0.60f;
            NewMaterial->HighVelocityRestitution = 0.70f;
            NewMaterial->SoundVolumeMultiplier = 0.8f;
            break;
    }
    
    UE_LOG(LogTemp, Log, TEXT("SGBasketballPhysicsMaterial: Created material for surface type %s"), 
           *UEnum::GetValueAsString(BasketballSurface));
    
    return NewMaterial;
}