# Camera Pickup System - Input Setup Guide

## Required Input Actions

You need to add these Action Mappings to your project's Input settings:

### In Project Settings > Engine > Input > Action Mappings:

1. **ToggleCamera**
   - Key: T
   - Description: Toggle between player view and camera view

2. **DropCamera** 
   - Key: G
   - Description: Drop the currently held camera

### How to Add Input Mappings:

1. Open **Project Settings** (Edit > Project Settings)
2. Navigate to **Engine > Input**
3. Under **Action Mappings**, click the **+** button to add new mappings
4. Add the action names and keys as specified above

### Alternative Setup in Blueprint:

If you prefer to set up input in Blueprint:

1. Open your Player Controller Blueprint
2. In the Event Graph, add these events:
   - **T Key Event** ? Call **Toggle Camera View** on Camera Manager
   - **G Key Event** ? Call **Drop Camera** on Camera Manager

## Integration with Character

### Add Camera Manager Component:

1. Open your Character Blueprint (or modify SGCharacter.cpp)
2. Add **SGCameraManager** component
3. The component will automatically handle camera pickup and view toggling

### Example C++ Integration:

```cpp
// In SGCharacter.h
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
class USGCameraManager* CameraManager;

// In SGCharacter.cpp constructor
CameraManager = CreateDefaultSubobject<USGCameraManager>(TEXT("CameraManager"));
```

## Usage Flow:

1. **Find Camera**: Walk up to a pickupable camera
2. **Pick Up**: Press **F** to pick up the camera (uses existing interaction)
3. **Toggle View**: Press **T** to switch between player and camera view
4. **Record**: While in camera view, use existing recording controls
5. **Drop**: Press **G** to drop the camera

## Recording Controls:

When in camera view, you can:
- Start/Stop recording (implementation depends on your existing system)
- The camera records from the first-person perspective
- Recordings are saved as usual through the camera system

## Visual Feedback:

The system provides on-screen messages for:
- Camera pickup confirmation
- View toggle notifications  
- Recording status updates
- Error messages (no camera equipped, etc.)

## Technical Notes:

- Camera view uses Unreal's built-in view target system
- Smooth switching between player and camera perspectives
- Camera position updates in real-time while held
- Network-ready architecture for multiplayer scenarios
- Integrates with existing save system for recording persistence