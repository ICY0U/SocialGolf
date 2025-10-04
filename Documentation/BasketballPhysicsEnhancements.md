# Basketball Physics Enhancements

## Overview
I've significantly improved the basketball bounce physics to make them more realistic and responsive. The enhancements include advanced material properties, velocity-based physics, spin effects, and surface-dependent behavior.

## Key Improvements Made

### 1. Enhanced Physics Material System (`SGBasketballPhysicsMaterial`)

#### New Features:
- **Surface Type Detection**: Different surface types (Wood Court, Concrete, Grass, Sand, Metal, Generic)
- **Velocity-Based Restitution**: Bounce height varies based on impact velocity
- **Spin Effects**: Magnus effect implementation for realistic spinning ball behavior
- **Surface-Specific Properties**: Each surface has unique friction, bounce, and audio characteristics

#### Surface Properties:
- **Wood Court**: Optimal bounce (82% restitution), moderate friction
- **Concrete**: Slightly less bouncy (78% restitution), higher friction, louder sound
- **Grass**: Low bounce (40% restitution), high friction, muffled sound
- **Sand**: Very low bounce (20% restitution), very high friction, very muffled
- **Metal**: High bounce (90% restitution), low friction, very loud sound

### 2. Advanced Bounce Physics (`ASGBasketball`)

#### Enhanced Calculations:
- **Dynamic Restitution**: Bounce varies from 70-85% based on impact velocity
- **Spin Influence**: Ball spin affects bounce direction (Magnus effect)
- **Energy Loss Modeling**: Realistic energy dissipation on each bounce
- **Random Variation**: Small random elements for natural behavior

#### Velocity Thresholds:
- **Low Velocity**: < 5 m/s - Lower restitution for realistic low-speed bounces
- **High Velocity**: > 5 m/s - Higher restitution for energetic bounces
- **Transition**: Smooth interpolation between velocity ranges

### 3. Realistic Throwing Physics

#### Enhanced Throw Mechanics:
- **Realistic Spin Calculation**: Automatic backspin based on throw direction and power
- **Power Scaling**: Better force multiplication for realistic basketball throws
- **Spin Variations**: Random variations for natural throwing feel

#### Air Resistance & Magnus Effect:
- **Drag Force**: Realistic air resistance calculations
- **Magnus Force**: Spin affects ball trajectory in flight
- **Ball-Specific Parameters**: Uses actual basketball dimensions and mass

### 4. Enhanced Audio System

#### Dynamic Sound Properties:
- **Volume Based on Impact**: Harder impacts = louder sounds
- **Surface-Dependent Audio**: Different materials produce different sound characteristics
- **Pitch Variation**: Surface type affects sound pitch and tone
- **Volume Multipliers**: Each surface has unique audio properties

### 5. Advanced Trajectory Prediction

#### Improved Prediction System:
- **Multi-Physics Simulation**: Includes gravity, air resistance, and Magnus effect
- **Bounce Prediction**: Predicts realistic bounces with material properties
- **Enhanced Integration**: Verlet integration for better accuracy
- **Surface Detection**: Considers material properties in trajectory calculations

## Technical Implementation Details

### New Properties Added:
```cpp
// Enhanced Physics Properties
float AirResistanceMultiplier = 1.0f;
float MagnusEffectStrength = 0.25f;
float SpinDecayMultiplier = 0.85f;
bool bEnableRealisticPhysics = true;
float BounceRandomization = 20.0f;
bool bDetectSurfaceTypes = true;
float MinimumBounceVelocity = 50.0f;
```

### Key Functions:
- `GetVelocityBasedRestitution()`: Calculates dynamic bounce based on impact speed
- `CalculateSpinInfluencedBounce()`: Applies Magnus effect to bounce direction
- `ApplyEnhancedBouncePhysics()`: Main physics calculation function
- `CalculateRealisticSpin()`: Generates realistic basketball spin
- `PredictBounceVelocity()`: Enhanced bounce prediction for trajectory

## Physics Formulas Used

### Drag Force:
```
F_drag = 0.5 * ? * C_d * A * v²
```
Where:
- ? = air density (1.225 kg/m³)
- C_d = drag coefficient (0.47 for sphere)
- A = ball cross-sectional area
- v = velocity

### Magnus Force:
```
F_magnus = 0.5 * ? * C_m * A * v² * (? × v?)
```
Where:
- C_m = Magnus coefficient (0.25)
- ? = angular velocity
- v? = velocity unit vector

### Velocity-Based Restitution:
```
e(v) = lerp(e_low, e_high, clamp(|v|/v_threshold, 0, 1))
```

## Benefits of the Enhanced System

1. **More Realistic Bounces**: Ball now bounces differently on different surfaces
2. **Velocity-Dependent Physics**: Fast throws bounce differently than slow drops
3. **Spin Effects**: Spinning balls behave more realistically
4. **Better Audio Feedback**: Sounds match the surface and impact intensity
5. **Improved Trajectory Prediction**: More accurate flight path visualization
6. **Surface Awareness**: Basketball responds appropriately to court vs. grass vs. concrete

## Configuration Options

All physics parameters are exposed as Blueprint-editable properties:
- Surface-specific material creation
- Velocity thresholds for restitution changes
- Spin influence strength
- Air resistance multipliers
- Bounce randomization amounts
- Audio volume and pitch modifiers

## Performance Considerations

- Enhanced calculations are only performed during actual impacts
- Trajectory prediction uses optimized physics simulation
- Material properties are cached for performance
- Spin decay calculations are lightweight

The system maintains good performance while providing significantly more realistic basketball physics behavior.