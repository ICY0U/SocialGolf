# SocialGolf Basketball Trajectory Prediction System

## Overview
The Basketball Trajectory Prediction System provides real-time visualization of basketball throw trajectories, including realistic physics simulation with air resistance and gravity. This system helps players aim their shots and provides visual feedback during charging and throwing.

## Features Implemented

### ? Core Trajectory Prediction
- **Physics-accurate trajectory calculation** with realistic basketball physics
- **Air resistance simulation** using basketball drag coefficient (0.47 for sphere)
- **Realistic basketball mass and radius** (0.6kg, 24cm radius)
- **Variable upward arc** based on throw power (stronger throws = flatter trajectory)
- **Collision detection** to show where ball will land or hit obstacles

### ? Real-Time Visualization
- **Dynamic trajectory lines** that update while charging throw
- **Configurable visual settings** (color, thickness, duration, steps)
- **Impact point visualization** showing where the ball will hit
- **Surface normal indicators** at impact points
- **Trajectory prediction toggles** (can be enabled/disabled per basketball)

### ? Smart Power Adjustment
- **Distance-based power optimization** (automatically adjusts for optimal shots)
- **Hoop proximity calculation** for smart aiming assistance
- **Power scaling** based on realistic basketball throw speeds (800-2500 force units)
- **Charge-based power progression** (0-100% charging system)

## Basketball Properties (SGBasketball.h)

### Trajectory Prediction Settings
```cpp
// Enable/disable trajectory visualization
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
bool bShowTrajectoryPrediction = true;

// Number of prediction steps (more = smoother line)
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
int32 TrajectorySteps = 30;

// Time between prediction steps (affects accuracy)
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
float TrajectoryStepTime = 0.1f;

// Visual customization
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
float TrajectoryLineThickness = 3.0f;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
FColor TrajectoryLineColor = FColor::Yellow;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball Telemetry")
FColor ImpactPointColor = FColor::Red;
```

### Basketball Physics Properties
```cpp
// Realistic basketball specifications
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball")
float BallMass = 0.6f; // kg, realistic basketball weight

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball")
float BallRadius = 24.0f; // cm, realistic basketball radius

// Bounce and physics properties
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basketball")
float BounceRestitution = 0.8f; // How much it bounces
```

## Character Integration (SGCharacter.cpp)

### Real-Time Trajectory During Charging
The trajectory prediction system activates automatically when charging a basketball throw:

```cpp
void ASGCharacter::Tick(float DeltaTime)
{
    if (bIsChargingShot && IsHoldingBasketball())
    {
        // Calculate current throw power based on charge time
        float ThrowPower = FMath::Lerp(BasketballMinPower, BasketballMaxPower, ShotChargeTime / MaxChargeTime);
        
        // Show real-time trajectory prediction
        if (HeldBasketball && HeldBasketball->bShowTrajectoryPrediction)
        {
            // Calculate throw direction from camera/controller
            FVector ThrowDirection = FollowCamera->GetForwardVector();
            ThrowDirection.Z += 0.3f; // Add upward arc
            ThrowDirection.Normalize();
            
            // Update trajectory visualization in real-time
            HeldBasketball->ShowThrowPrediction(ThrowDirection, ThrowPower);
        }
    }
}
```

### Trajectory Preview on Release
When releasing the basketball throw, a final trajectory prediction is shown:

```cpp
void ASGCharacter::ReleaseBasketballShot()
{
    if (bIsChargingShot && IsHoldingBasketball())
    {
        // Show final trajectory prediction before throwing
        HeldBasketball->ShowThrowPrediction(ThrowDirection, ThrowPower);
        
        // Then execute the throw
        ThrowBasketball(ThrowPower);
    }
}
```

## Trajectory Calculation System

### Physics Simulation Method
The trajectory prediction uses accurate physics simulation:

```cpp
TArray<FVector> ASGBasketball::PredictTrajectoryPath(const FVector& StartLocation, const FVector& InitialVelocity) const
{
    TArray<FVector> TrajectoryPoints;
    
    FVector CurrentLocation = StartLocation;
    FVector CurrentVelocity = InitialVelocity;
    float TimeStep = TrajectoryStepTime;
    FVector Gravity = FVector(0.0f, 0.0f, GetWorld()->GetGravityZ());
    
    // Air resistance parameters for realistic basketball trajectory
    float AirDensity = 1.225f; // kg/m³ (air density at sea level)
    float DragCoefficient = 0.47f; // Sphere drag coefficient
    float BallArea = PI * FMath::Square(BallRadius / 100.0f); // Convert cm to m
    
    for (int32 Step = 0; Step < TrajectorySteps; Step++)
    {
        // Calculate air resistance (drag force)
        FVector DragForce = FVector::ZeroVector;
        if (!CurrentVelocity.IsNearlyZero())
        {
            float VelocitySquared = CurrentVelocity.SizeSquared() / 10000.0f; // Convert cm/s to m/s
            float DragMagnitude = 0.5f * AirDensity * DragCoefficient * BallArea * VelocitySquared;
            DragForce = -CurrentVelocity.GetSafeNormal() * DragMagnitude * 100.0f; // Convert back to cm
        }
        
        // Calculate total acceleration (gravity + drag)
        FVector Acceleration = Gravity + (DragForce / BallMass);
        
        // Update velocity and position using Verlet integration
        FVector NextVelocity = CurrentVelocity + Acceleration * TimeStep;
        FVector NextLocation = CurrentLocation + (CurrentVelocity + NextVelocity) * 0.5f * TimeStep;
        
        // Check for collision with world geometry
        FHitResult HitResult;
        if (GetWorld()->LineTraceSingleByChannel(HitResult, CurrentLocation, NextLocation, ECC_WorldStatic))
        {
            TrajectoryPoints.Add(HitResult.Location);
            break; // Stop at collision point
        }
        
        CurrentLocation = NextLocation;
        CurrentVelocity = NextVelocity;
        TrajectoryPoints.Add(CurrentLocation);
    }
    
    return TrajectoryPoints;
}
```

## Usage Instructions

### For Players
1. **Pick up a Basketball**: Use the interaction system to pick up any basketball
2. **Start Charging**: Hold Left Mouse Button (LMB) to begin charging your throw
3. **Aim with Trajectory**: The yellow trajectory line shows where your ball will go
4. **Adjust Power**: Longer charge time = more power = different trajectory arc
5. **Release to Throw**: Release LMB to throw the basketball

### For Developers
1. **Enable Trajectory Prediction**: Set `bShowTrajectoryPrediction = true` on basketball instances
2. **Customize Visuals**: Adjust colors, thickness, and duration in basketball properties
3. **Tune Physics**: Modify air resistance, ball mass, and drag coefficient for different feel
4. **Add Custom Logic**: Hook into trajectory prediction events for gameplay features

## Key Functions Reference

### Basketball Trajectory Functions
- `ShowThrowPrediction(ThrowDirection, ThrowPower)` - Display trajectory for given parameters
- `PredictTrajectoryPath(StartLocation, InitialVelocity)` - Calculate physics-accurate trajectory
- `CalculateInitialVelocity(ThrowDirection, ThrowPower)` - Convert direction/power to velocity
- `DrawTrajectoryVisualization(TrajectoryPoints)` - Render visual trajectory lines

### Character Basketball Functions
- `StartChargingBasketballShot()` - Begin charging throw (activates trajectory prediction)
- `ReleaseBasketballShot()` - Release throw (shows final trajectory and executes throw)
- `ThrowBasketball(ThrowPower)` - Execute basketball throw with given power
- `CalculateOptimalThrowPower(ThrowDirection, BasePower)` - Adjust power for optimal shots

## Performance Considerations

### Optimization Settings
- **TrajectorySteps**: 30 steps provides good accuracy without performance impact
- **TrajectoryStepTime**: 0.1 seconds between steps balances smoothness and performance
- **Update Frequency**: Trajectory updates every frame during charging (can be throttled if needed)
- **Collision Complexity**: Uses simple line traces for performance

### Memory Usage
- Trajectory points are recalculated each frame (no persistent storage)
- Debug drawing uses temporary primitives that auto-cleanup
- Minimal memory footprint with configurable visual complexity

## Debugging and Testing

### Console Commands (if implemented)
- Enable trajectory debugging with increased logging
- Toggle trajectory visualization on/off
- Adjust physics parameters in real-time

### Visual Debugging
- Trajectory lines show exact predicted path
- Impact points indicate collision locations
- Surface normals show impact angles
- Color coding for different trajectory states

## Future Enhancements

### Potential Improvements
1. **Wind Effects**: Add wind simulation affecting trajectory
2. **Spin Physics**: Include basketball spin effects on trajectory
3. **Multiple Trajectories**: Show multiple possible trajectories for different power levels
4. **Hoop Scoring Zones**: Highlight optimal trajectory zones for scoring
5. **Player Skill Modifiers**: Trajectory accuracy based on player stats
6. **Replay Integration**: Save trajectory data for replay analysis

### Performance Optimizations
1. **LOD System**: Reduce trajectory complexity at distance
2. **Prediction Caching**: Cache common trajectory calculations
3. **Async Calculation**: Move complex physics to background threads
4. **Adaptive Quality**: Adjust prediction quality based on performance

## Integration with Existing Systems

### Replay System Integration
The trajectory prediction data can be recorded and replayed:
- Store trajectory points as replay events
- Visualize predicted vs actual paths in replays
- Analyze shooting accuracy over time

### Multiplayer Considerations
- Trajectory prediction runs locally for responsiveness
- Only final throw data is networked
- Visual trajectories are client-side only
- No network overhead from prediction calculations

The Basketball Trajectory Prediction System provides a comprehensive, physics-accurate, and visually appealing way to help players aim their basketball shots while maintaining good performance and multiplayer compatibility.