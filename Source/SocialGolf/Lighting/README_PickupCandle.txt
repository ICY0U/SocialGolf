# Pickup Candle System - Complete Guide

## ??? **Overview**
The pickup candle system allows players to pick up, carry, and interact with handheld candles. Players can walk around with lit candles, toggle them on/off while holding them, and drop them when needed.

## ?? **How It Works**

### **Basic Interaction:**
1. **Approach** a pickup candle on the ground
2. **Press E** to pick it up
3. **Press F** to toggle the light on/off while holding it
4. **Press E** again (while holding) to drop it

### **Visual Feedback:**
- Candles **grow slightly** when you look at them (focus effect)
- **Realistic flickering** when lit
- **Physics simulation** when dropped
- **Attachment to character** hand socket

## ?? **System Files**

### **Core Files:**
- `Source/SocialGolf/Lighting/SGPickupCandle.h/cpp` - Main pickup candle class
- Updated `Source/SocialGolf/Characters/SGCharacter.h/cpp` - Character integration
- Updated `Source/SocialGolf/Framework/SGPlayerController.h/cpp` - Debug commands

## ?? **Technical Features**

### **Physics & Attachment:**
- **Physics simulation** when dropped (bounces, rolls naturally)
- **Automatic attachment** to character hand socket
- **Collision detection** for interaction
- **Mass override** for realistic weight (0.5kg)

### **Networking:**
- **Fully replicated** pickup/drop state
- **Multiplayer synchronized** light state
- **Authority-based** interaction for security
- **Client-side** visual effects for performance

### **Integration:**
- **SGFocusableInterface** - Scaling when looked at
- **SGInteractable** - E key interaction
- **Character system** - Proper hand attachment
- **Input system** - F key to toggle light

## ?? **Configuration Options**

### **Pickup Behavior:**
```cpp
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
bool bDropOnExtinguish = false; // Auto-drop when extinguished

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")  
bool bExtinguishOnDrop = true; // Auto-extinguish when dropped

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
FName AttachSocketName = TEXT("hand_r"); // Socket to attach to

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup Settings")
FVector AttachOffset = FVector(10.0f, 0.0f, 0.0f); // Offset from socket
```

### **Candle Properties:**
```cpp
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
float BaseLightIntensity = 150.0f; // Dimmer for handheld

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
float LightRadius = 250.0f; // Smaller radius

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
float FlickerIntensity = 0.4f; // More flicker for handheld

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Candle Settings")
float FlickerSpeed = 3.0f; // Faster flicker
```

## ?? **Usage Examples**

### **In C++:**
```cpp
// Spawn a pickup candle
ASGPickupCandle* PickupCandle = GetWorld()->SpawnActor<ASGPickupCandle>();
PickupCandle->LightCandle();

// Check if character is holding a candle
if (ASGCharacter* MyChar = Cast<ASGCharacter>(GetPawn()))
{
    if (MyChar->IsHoldingCandle())
    {
        ASGPickupCandle* HeldCandle = MyChar->GetHeldCandle();
        // Do something with held candle
    }
}
```

### **In Blueprint:**
1. **Drag** `SGPickupCandle` into your level
2. **Configure** settings in Details panel:
   - Set `Start Lit = true` if you want it pre-lit
   - Adjust `Attach Socket Name` for different hand attachment
   - Configure drop/extinguish behavior
3. **Test** in-game with E/F keys

## ?? **Controls**

### **Default Input Bindings:**
- **E Key** - Pick up / Drop candle
- **F Key** - Toggle candle light (when holding)
- **Looking at candle** - Focus effect (automatic scaling)

### **Input Mapping:**
Make sure these actions exist in your Input settings:
- `Interact` ? E Key (for pickup/drop)
- `ToggleCandle` ? F Key (for light toggle)

## ?? **Console Commands**

Test the system with these console commands (press ` then type):

### **Pickup Candle Commands:**
```
SpawnPickupCandle        // Spawns a pickup candle in front of you
DropAllPickupCandles     // Forces all held candles to drop
LightAllCandles          // Lights all candles (includes pickup candles)
ExtinguishAllCandles     // Extinguishes all candles
ToggleAllCandles         // Toggles all candle states
```

## ?? **Visual Features**

### **Handheld Appearance:**
- **Smaller size** than stationary candles (15% scale)
- **Proportioned for hands** - looks natural when held
- **Realistic attachment** to hand socket with proper offset
- **Dynamic shadows** that move with the player

### **Lighting Effects:**
- **Warm candle color** (slightly more yellow than stationary)
- **Enhanced flickering** for movement realism
- **Smaller light radius** appropriate for handheld source
- **Temperature-based** lighting (2100K)

### **Physics Behavior:**
- **Natural dropping** with forward impulse
- **Realistic bouncing** and rolling when dropped
- **Proper collision** for pickup detection
- **Light mass** for believable physics

## ??? **Customization Ideas**

### **Gameplay Variations:**
```cpp
// Torch-style (longer, brighter)
PickupCandle->BaseLightIntensity = 200.0f;
PickupCandle->LightRadius = 300.0f;
PickupCandle->AttachOffset = FVector(15.0f, 0.0f, 0.0f);

// Lantern-style (steadier light)
PickupCandle->FlickerIntensity = 0.1f;
PickupCandle->FlickerSpeed = 1.0f;

// Emergency light (auto-extinguish on drop)
PickupCandle->bExtinguishOnDrop = true;
PickupCandle->bDropOnExtinguish = false;
```

### **Special Behaviors:**
- **Wind effects** - increase flicker outdoors
- **Rain extinguishing** - environmental interaction
- **Battery/oil system** - limited burn time
- **Different fuel types** - colored flames

## ?? **Integration Points**

### **Character System:**
- Tracks held candle in `ASGCharacter::HeldCandle`
- Input handling in `ASGCharacter::ToggleHeldCandlePressed()`
- Proper attachment to skeletal mesh sockets

### **Save System:**
- Pickup state can be saved/loaded
- Light state persists through saves
- Position and physics state restoration

### **Multiplayer:**
- Replicated pickup/drop across all clients
- Authority validation for security
- Smooth visual synchronization

## ?? **Troubleshooting**

### **Candle won't attach properly:**
- Check `AttachSocketName` matches your character's skeleton
- Verify `AttachOffset` and `AttachRotation` values
- Ensure character has a skeletal mesh component

### **Input not working:**
- Verify `ToggleCandle` action exists in Input settings
- Check F key is bound to `ToggleCandle` action
- Ensure character is actually holding the candle

### **Physics issues:**
- Check collision settings on candle mesh
- Verify mass is set appropriately (0.5kg default)
- Ensure physics simulation is enabled

### **Multiplayer sync problems:**
- Check network replication settings
- Verify authority is handling pickup/drop
- Test with multiple clients

## ?? **Example Scenarios**

### **Night Exploration:**
```cpp
// Setup for dark environment exploration
PickupCandle->BaseLightIntensity = 180.0f;
PickupCandle->LightRadius = 280.0f;
PickupCandle->bExtinguishOnDrop = false; // Keep lit when dropped
```

### **Puzzle Mechanics:**
```cpp
// Candle required for specific areas
if (PlayerHasLitCandle())
{
    // Allow access to dark area
    OpenSecretDoor();
}
```

### **Atmospheric Events:**
```cpp
// During thunderstorm
if (IsThunderstorm())
{
    // Randomly extinguish held candles
    if (FMath::RandRange(0.0f, 1.0f) < 0.1f)
    {
        HeldCandle->ExtinguishCandle();
    }
}
```

## ?? **Ready to Use!**

The pickup candle system is fully functional and ready for your game. Start by:

1. **Testing** with `SpawnPickupCandle` console command
2. **Placing** pickup candles in your levels
3. **Configuring** behavior for your game's needs
4. **Customizing** appearance and physics as desired

The system provides immersive handheld lighting that enhances exploration and creates atmospheric gameplay moments! ????