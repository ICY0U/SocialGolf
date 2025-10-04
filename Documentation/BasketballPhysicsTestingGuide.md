# Basketball Physics Testing Guide

## How to Test the Enhanced Basketball Physics

### 1. Basic Bounce Testing

1. **Pick up a basketball** in the game
2. **Drop it from different heights** to test velocity-based restitution
   - Low drops should bounce less (70-75% height)
   - High drops should bounce more (80-85% height)
3. **Try different surfaces** if available:
   - Wood courts: Best bounce
   - Concrete: Slightly less bouncy, louder
   - Grass: Much less bouncy, muffled sound
   - Sand: Very low bounce
   - Metal: Very bouncy, loud

### 2. Throwing Physics Testing

1. **Throw with different powers**:
   - Low power throws (< 30): Less spin, lower arc
   - Medium power throws (30-70): Balanced spin and trajectory
   - High power throws (> 70): More spin, higher velocity

2. **Notice the spin effects**:
   - Ball should have automatic backspin on throws
   - Spin affects bounce direction slightly
   - Spin decays after each bounce

### 3. Trajectory Prediction Testing

1. **Enable trajectory prediction** (if available in Blueprint settings)
2. **Hold a basketball** and aim
3. **Watch the trajectory line** - it should show:
   - Realistic arc with gravity
   - Air resistance effects (slight curve)
   - Predicted bounce points
   - Multiple bounces with decreasing height

### 4. Surface Material Testing

To test different surface materials, you can:

1. **Place different physics materials** in your level
2. **Create test areas** with:
   - `USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType::Court_Wood)`
   - `USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType::Court_Concrete)`
   - `USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType::Grass)`
   - etc.

### 5. Audio Testing

1. **Drop/throw basketballs** on different surfaces
2. **Listen for**:
   - Volume changes based on impact force
   - Pitch changes based on surface type
   - Muffled sounds on soft surfaces (grass, sand)
   - Sharp sounds on hard surfaces (concrete, metal)

## Configuration Parameters

### In Blueprint/Details Panel:

#### Basketball Physics Properties:
- **Air Resistance Multiplier**: 1.0 (default) - increase for more air drag
- **Magnus Effect Strength**: 0.25 (default) - spin influence on trajectory
- **Spin Decay Multiplier**: 0.85 (default) - how much spin is lost per bounce
- **Enable Realistic Physics**: true (default) - toggles enhanced physics
- **Bounce Randomization**: 20.0 (default) - random variation in bounces
- **Detect Surface Types**: true (default) - enables surface-specific physics

#### Material-Specific Properties:
- **Velocity Transition Threshold**: 500 cm/s - where low/high velocity physics transition
- **Low Velocity Restitution**: 0.7-0.75 - bounce at low speeds
- **High Velocity Restitution**: 0.8-0.85 - bounce at high speeds
- **Spin Influence on Bounce**: 0.15 - how much spin affects bounce direction

### Performance Tuning:

#### For Better Performance:
- Set `bEnableRealisticPhysics = false` to use simpler physics
- Reduce `TrajectorySteps` for trajectory prediction
- Set `bDetectSurfaceTypes = false` to disable surface detection

#### For More Realism:
- Increase `MagnusEffectStrength` for more spin effects
- Increase `AirResistanceMultiplier` for more drag
- Decrease `BounceRandomization` for more predictable bounces

## Expected Behavior

### Normal Basketball Court:
- **Bounce Height**: 75-85% of drop height
- **Sound**: Clear, sharp bounce sounds
- **Spin**: Visible backspin on throws, affects trajectory slightly
- **Trajectory**: Realistic arc with slight air resistance curve

### Grass Surface:
- **Bounce Height**: 30-50% of drop height
- **Sound**: Muffled, softer impacts
- **Spin**: Less spin retention after bounces
- **Trajectory**: More affected by air resistance

### Concrete Surface:
- **Bounce Height**: 70-80% of drop height
- **Sound**: Louder, sharper than wood
- **Spin**: Good spin retention
- **Trajectory**: Similar to wood but slightly less bouncy

## Troubleshooting

### Basketball Not Bouncing Realistically:
1. Check that `bEnableRealisticPhysics = true`
2. Verify the physics material is `SGBasketballPhysicsMaterial`
3. Ensure the surface has the correct material applied

### No Sound Differences:
1. Check audio components are properly set up
2. Verify sound cues are assigned
3. Check that surface materials have different audio multipliers

### Trajectory Prediction Issues:
1. Ensure `bShowTrajectoryPrediction = true`
2. Check that the player is holding the basketball
3. Verify trajectory parameters are reasonable (30 steps, 0.1s intervals)

### Performance Issues:
1. Reduce trajectory steps
2. Disable realistic physics for some basketballs
3. Lower the number of bounces predicted
4. Reduce air resistance calculations

## Advanced Testing

### Custom Surface Creation:
```cpp
// In Blueprint or C++
USGBasketballPhysicsMaterial* CustomMaterial = USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType::Custom);
CustomMaterial->Restitution = 0.9f; // Very bouncy
CustomMaterial->Friction = 0.3f; // Low friction
CustomMaterial->SoundVolumeMultiplier = 1.5f; // Loud
```

### Physics Parameter Testing:
- Modify restitution values in real-time
- Test different spin rates
- Adjust air resistance in different "weather" conditions
- Create trampolines or super-bouncy surfaces for fun

The enhanced basketball physics system should provide a much more realistic and engaging basketball experience!