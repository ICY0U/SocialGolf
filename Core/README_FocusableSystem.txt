# SGFocusable System - Implementation Guide

## Overview
The SGFocusable system provides visual feedback (scaling effects) when players look at interactable objects. This creates a "grow on hover" effect that helps players identify what they can interact with.

## System Components

### 1. SGFocusableInterface
- Interface that defines focus behavior
- Provides default implementations for focus events

### 2. SGFocusableComponent  
- Actor component that handles the actual scaling animation
- Uses timeline-based smooth scaling
- Configurable scale factor and animation duration

### 3. Enhanced SGInteractionComponent
- Now includes automatic focus detection
- Traces for focusable objects and triggers focus effects
- Only runs on local player for performance

## Already Implemented Objects

### ASGBench
- ? Added focusable component
- Scale factor: 1.05 (subtle for large objects)
- Animation duration: 0.3s (slower for larger objects)

### ASGMaterialShowcase  
- ? Added focusable component
- Scale factor: 1.15 (more pronounced for smaller objects)
- Animation duration: 0.2s (quick animation)

## How to Add Focus Effect to New Objects

### Method 1: C++ Implementation

1. **Add include in constructor file:**
```cpp
#include "../Core/SGFocusableComponent.h"
```

2. **Add component property to header:**
```cpp
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
USGFocusableComponent* FocusableComponent;
```

3. **Create component in constructor:**
```cpp
// Add focusable component for scaling effect
FocusableComponent = CreateDefaultSubobject<USGFocusableComponent>(TEXT("FocusableComponent"));
if (FocusableComponent)
{
    FocusableComponent->FocusScaleFactor = 1.1f; // Adjust as needed
    FocusableComponent->ScaleAnimationDuration = 0.2f; // Adjust as needed
}
```

### Method 2: Blueprint Implementation

1. **Open your Blueprint**
2. **Add Component ? SGFocusable Component**  
3. **Configure the settings:**
   - Focus Scale Factor: 1.1 (10% larger when focused)
   - Scale Animation Duration: 0.2s
   - Enable Focus Effect: true

## Configuration Options

### SGFocusableComponent Settings

- **FocusScaleFactor**: How much to scale when focused (1.1 = 10% larger)
- **ScaleAnimationDuration**: How long the scale animation takes
- **bEnableFocusEffect**: Toggle to disable the effect

### SGInteractionComponent Focus Settings

- **bEnableFocusDetection**: Enable/disable focus detection entirely
- **FocusUpdateRate**: How often to check for focus changes (0.1s recommended)

## Recommended Scale Factors

- **Small objects** (cubes, pickups): 1.15 - 1.2
- **Medium objects** (boxes, containers): 1.1 - 1.15  
- **Large objects** (benches, furniture): 1.05 - 1.1
- **Very large objects** (buildings): 1.02 - 1.05

## Performance Notes

- Focus detection only runs on local players
- Uses efficient sphere/line tracing
- Timeline animations are lightweight
- No network replication needed (client-side visual only)

## Testing

1. **Place any object with SGFocusableComponent in the world**
2. **Play the game** 
3. **Look at the object** - it should smoothly scale up
4. **Look away** - it should smoothly scale back down

## Troubleshooting

### Object doesn't scale when looked at:
- Check that SGFocusableComponent is added
- Verify bEnableFocusEffect is true
- Ensure object has collision for tracing
- Check SGInteractionComponent has bEnableFocusDetection = true

### Animation is too fast/slow:
- Adjust ScaleAnimationDuration in SGFocusableComponent

### Scale effect is too subtle/dramatic:
- Adjust FocusScaleFactor in SGFocusableComponent

### Debug Focus Detection:
- Enable bDebugInteraction in SGInteractionComponent to see trace lines
- Check output log for "SGInteractionComponent: Began/Ended focus" messages

## Future Enhancements

Possible additions to the system:
- Material color changes on focus
- Particle effects on focus
- Sound effects on focus begin/end
- Different scale curves (bounce, elastic, etc.)
- Per-component axis scaling (scale only on Z-axis, etc.)

The system is designed to be easily extensible for additional focus effects beyond just scaling!