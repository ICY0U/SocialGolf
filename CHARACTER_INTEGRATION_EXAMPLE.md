# Character Integration Example

Since I can't locate your specific character file, here's how to integrate the Camera Manager component into your character:

## Option 1: C++ Integration

### If you have a custom Character class (ASGCharacter):

```cpp
// In SGCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/SGCameraManager.h"
#include "SGCharacter.generated.h"

UCLASS()
class SOCIALGOLF_API ASGCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ASGCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Camera system
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USGCameraManager* CameraManager;

public:
    // Input actions
    UFUNCTION()
    void OnToggleCameraPressed();

    UFUNCTION()
    void OnDropCameraPressed();

    // Getter for camera manager
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera")
    USGCameraManager* GetCameraManager() const { return CameraManager; }
};
```

```cpp
// In SGCharacter.cpp
#include "SGCharacter.h"
#include "Components/InputComponent.h"

ASGCharacter::ASGCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create camera manager component
    CameraManager = CreateDefaultSubobject<USGCameraManager>(TEXT("CameraManager"));
}

void ASGCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ASGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind camera controls
    PlayerInputComponent->BindAction("ToggleCamera", IE_Pressed, this, &ASGCharacter::OnToggleCameraPressed);
    PlayerInputComponent->BindAction("DropCamera", IE_Pressed, this, &ASGCharacter::OnDropCameraPressed);
}

void ASGCharacter::OnToggleCameraPressed()
{
    if (CameraManager)
    {
        CameraManager->ToggleCameraView();
    }
}

void ASGCharacter::OnDropCameraPressed()
{
    if (CameraManager)
    {
        CameraManager->DropCamera();
    }
}
```

## Option 2: Blueprint Integration

### If you're using Blueprint-based characters:

1. **Open your Character Blueprint**
2. **Add Component**: Search for "SGCameraManager" and add it
3. **Setup Input Events**: In the Event Graph, add these events:
   - **InputAction ToggleCamera** ? **CameraManager** ? **Toggle Camera View**
   - **InputAction DropCamera** ? **CameraManager** ? **Drop Camera**

### Blueprint Event Graph Example:
```
Event BeginPlay
??? Get Camera Manager
??? [Setup any initialization]

InputAction ToggleCamera (Pressed)
??? Get Camera Manager
??? Is Valid?
??? Toggle Camera View

InputAction DropCamera (Pressed)
??? Get Camera Manager  
??? Is Valid?
??? Drop Camera
```

## Input Action Setup

### Required Input Actions in Project Settings:

1. **ToggleCamera**
   - Action Name: `ToggleCamera`
   - Key: `T`

2. **DropCamera**
   - Action Name: `DropCamera`
   - Key: `G`

### How to Add:
1. Edit ? Project Settings
2. Engine ? Input
3. Action Mappings ? + Add
4. Enter action name and assign key

## Alternative: Component Addition

### If you can't modify the character class directly:

You can add the Camera Manager component in Blueprint:

1. Open your Character Blueprint
2. Components Panel ? Add Component ? Search "Camera Manager"
3. Add the SGCameraManager component
4. Set up the input bindings in the Event Graph

## Testing the Integration

### Place Test Camera:
1. In your level, add an **SGPickupableCamera** actor
2. Position it where players can find it
3. Play the game and test:
   - Walk to camera and press **F** to pick up
   - Press **T** to toggle between player/camera view
   - Press **G** to drop the camera

### Verification Checklist:
- [ ] Camera manager component is added to character
- [ ] Input actions are configured (T for toggle, G for drop)
- [ ] F key interaction works with SGInteractionComponent
- [ ] View switching works properly
- [ ] Camera can be dropped and picked up again

This integration ensures the camera pickup system works seamlessly with your existing character and interaction systems!