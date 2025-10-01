# SocialGolf Candle Lighting System

## Overview
A comprehensive candle-based lighting system for SocialGolf that provides realistic, interactive candles with various types, effects, and behaviors. The system includes both basic and advanced candle implementations with multiplayer support.

## System Components

### 1. SGCandle (Basic Candle)
- **File:** `Source/SocialGolf/Lighting/SGCandle.h/cpp`
- Simple candle with basic lighting and particle effects
- Interactable (press E to light/extinguish)
- Includes focus effects (scales when looked at)
- Flickering light simulation
- Sound effects for lighting/extinguishing
- Network replicated

### 2. SGAdvancedCandle (Advanced Candle System)
- **File:** `Source/SocialGolf/Lighting/SGAdvancedCandle.h/cpp`
- Multiple candle types (Small, Medium, Large, Torch, Lantern, Oil Lamp)
- Different lighting modes (Realistic, Steady, Dramatic, Magical)
- Dual-light system (main + fill light for realism)
- Magical color-changing effects
- Auto-relight functionality
- Preset system for different candle types
- Enhanced particle effects (flame + smoke)

## Features

### ??? **Candle Types**
- **Small Candle**: Intimate lighting, higher flicker, 200 unit radius
- **Medium Candle**: Standard room lighting, balanced flicker, 300 unit radius  
- **Large Candle**: Bright area lighting, stable flicker, 450 unit radius
- **Torch**: Dramatic flickering, 600 unit radius, outdoor style
- **Lantern**: Steady protected flame, 400 unit radius
- **Oil Lamp**: Classic lamp style, 350 unit radius

### ?? **Lighting Modes**
- **Realistic**: Natural candle flickering (default)
- **Steady**: No flickering, constant light
- **Dramatic**: Heavy flickering for atmospheric scenes
- **Magical**: Color-changing mystical effects

### ? **Visual Effects**
- Realistic flame particle systems
- Smoke effects when lit
- Dual-light setup (main + fill) for realistic illumination
- Temperature-based lighting (warm candle colors)
- Soft shadow casting
- Focus scaling when looked at

### ?? **Audio Features**
- Lighting sound effects
- Extinguishing sound effects  
- Ambient flame crackling sounds
- 3D positioned audio

### ?? **Interaction Features**
- Press E to light/extinguish
- Focus detection with visual feedback
- Multiplayer synchronized
- Auto-relight option
- Permanent magical candles option

## Configuration

### Basic Candle Settings
```cpp
// Light properties
UPROPERTY(EditAnywhere, BlueprintReadWrite)
FLinearColor CandleLightColor = FLinearColor(1.0f, 0.8f, 0.6f);

UPROPERTY(EditAnywhere, BlueprintReadWrite)
float BaseLightIntensity = 200.0f;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
float LightRadius = 300.0f;

// Flickering
UPROPERTY(EditAnywhere, BlueprintReadWrite)
float FlickerIntensity = 0.3f; // 0-1 range

UPROPERTY(EditAnywhere, BlueprintReadWrite)
float FlickerSpeed = 2.0f;
```

### Advanced Candle Settings
```cpp
// Type and behavior
UPROPERTY(EditAnywhere, BlueprintReadWrite)
ECandleType CandleType = ECandleType::MediumCandle;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
ECandleLightMode LightMode = ECandleLightMode::Realistic;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool bAutoRelight = false;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool bMagicalCandle = false;
```

## Usage

### In C++
```cpp
// Spawn a basic candle
ASGCandle* BasicCandle = GetWorld()->SpawnActor<ASGCandle>();
BasicCandle->LightCandle();

// Spawn an advanced candle
ASGAdvancedCandle* AdvancedCandle = GetWorld()->SpawnActor<ASGAdvancedCandle>();
AdvancedCandle->SetCandleType(ECandleType::Torch);
AdvancedCandle->SetLightMode(ECandleLightMode::Dramatic);
AdvancedCandle->LightCandle();
```

### In Blueprint
1. **Drag** `SGCandle` or `SGAdvancedCandle` into your level
2. **Configure** the settings in the Details panel
3. **Set** whether it starts lit (`bStartLit`)
4. **Choose** candle type and light mode (Advanced only)
5. **Test** in-game by pressing E to interact

## Console Commands

Use these debug commands in-game (press ` then type):

### Player Controller Commands
- `SpawnTestCandle` - Spawns a test candle in front of player
- `LightAllCandles` - Lights all candles in the level
- `ExtinguishAllCandles` - Extinguishes all candles in the level
- `ToggleAllCandles` - Toggles all candles in the level

### Example Usage
```
// Open console with ` key
SpawnTestCandle
LightAllCandles
```

## Events and Delegates

### Basic Candle Events
```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCandleLightChanged, bool, bIsLit);

// Bind to events
MyCandle->OnCandleLightChanged.AddDynamic(this, &AMyActor::OnCandleStateChanged);
```

### Advanced Candle Events
```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAdvancedCandleLightChanged, bool, bIsLit, ECandleType, CandleType);

// More detailed event information
MyAdvancedCandle->OnCandleLightChanged.AddDynamic(this, &AMyActor::OnAdvancedCandleStateChanged);
```

## Technical Implementation

### Network Replication
- Candle lit/extinguished state is replicated
- Candle type changes are replicated (Advanced)
- Visual effects sync automatically on all clients
- Authority-based interaction for security

### Performance Optimizations
- Flickering only runs on authority to prevent network spam
- Particle effects are client-side
- Timeline-based smooth animations
- Efficient curve-based flickering patterns

### Focus System Integration
- Automatic detection when players look at candles
- Smooth scaling animation when focused
- Works with existing SGFocusableComponent system
- Different scale factors per candle type

## Asset Requirements

### Meshes
- Candle base mesh (uses Engine cylinder by default)
- Wick mesh (small cylinder)
- Custom candle meshes can be assigned

### Particle Systems
- Flame particle system (`FlameParticleSystem`)
- Smoke particle system (`SmokeParticleSystem`)
- Defaults to Engine fire effect if available

### Audio
- Light sound effect (`LightSound`)
- Extinguish sound effect (`ExtinguishSound`)  
- Ambient flame sound (`AmbientFlameSound`)

### Materials
- Candle base material
- Wick material
- Optional emissive materials for magical effects

## Best Practices

### Performance
- Use **Basic Candles** for simple lighting needs
- Use **Advanced Candles** for hero lighting or special effects
- Limit magical candles in crowded scenes
- Consider LOD for distant candles

### Design
- **Small Candles**: Personal spaces, bedrooms, intimate areas
- **Medium Candles**: Standard room lighting, dining areas
- **Large Candles**: Churches, ceremonial spaces
- **Torches**: Outdoor areas, dungeons, medieval settings
- **Lanterns**: Protected outdoor lighting, camping
- **Oil Lamps**: Reading areas, study rooms

### Gameplay
- Use permanent candles for essential lighting
- Use auto-relight for puzzle mechanics
- Use magical candles for special locations
- Combine different types for lighting variety

## Example Setups

### Dining Room Scene
```cpp
// Central chandelier area
ASGAdvancedCandle* CenterCandle = SpawnCandle(CenterLocation);
CenterCandle->SetCandleType(ECandleType::LargeCandle);
CenterCandle->SetLightMode(ECandleLightMode::Steady);

// Table candles
for (FVector TablePos : TablePositions)
{
    ASGAdvancedCandle* TableCandle = SpawnCandle(TablePos);
    TableCandle->SetCandleType(ECandleType::SmallCandle);
    TableCandle->SetLightMode(ECandleLightMode::Realistic);
}
```

### Magical Shrine
```cpp
ASGAdvancedCandle* MagicalCandle = SpawnCandle(ShrineLocation);
MagicalCandle->SetCandleType(ECandleType::MediumCandle);
MagicalCandle->SetLightMode(ECandleLightMode::Magical);
MagicalCandle->bMagicalCandle = true;
MagicalCandle->bCanBeExtinguished = false; // Eternal flame
MagicalCandle->LightCandle();
```

## Troubleshooting

### Candle won't light
- Check `bCanBeExtinguished` if trying to extinguish
- Verify interaction range
- Check console for error messages
- Ensure proper collision setup

### No visual effects
- Verify particle systems are assigned
- Check if particles are activated/deactivated properly
- Ensure materials support the lighting setup

### Performance issues
- Reduce number of flickering candles
- Use Steady light mode for background candles
- Check particle system complexity
- Monitor draw calls in stat commands

## Integration with Existing Systems

The candle system integrates seamlessly with:
- **SGFocusableComponent**: Automatic scaling when looked at
- **SGInteractable**: Press E to interact
- **Save System**: Candle states can be saved/loaded
- **Network System**: Multiplayer synchronized
- **Audio System**: 3D positioned sound effects

This creates a rich, immersive lighting experience that enhances the atmosphere of your social golf game!