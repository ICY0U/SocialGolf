# Key Binding Reference - SocialGolf

## Overview
This document outlines the reorganized key binding system that resolves all conflicts between different game systems.

## Resolved Conflicts

### Previous Conflicts:
- **T Key**: Was used for both Golf Tee spawning and potential camera toggles
- **Number Keys (1,2,3)**: Conflicted between camera views and power testing
- **L Key**: Drop candle conflicted with other "drop" actions
- **Various physics toggles**: No modifier keys, causing accidental triggers

### Solutions Applied:
- Organized keys into logical groups with safety modifiers
- Separated camera and golf systems completely
- Added descriptive action names for clarity
- Used modifier keys (Alt, Shift) for testing functions

## Current Key Layout

### ?? Core Movement & Interaction
| Key | Action | Description |
|-----|--------|-------------|
| `WASD` | Move | Standard movement |
| `Mouse` | Look Around | Camera control |
| `E` | Interact | Universal interaction key |
| `Space` | Jump | Character jumping |
| `Tab` | Toggle Stats | Show/hide debug stats |

### ? Golf System
| Key | Action | Description |
|-----|--------|-------------|
| `G` | Spawn Golf Ball | Create a golf ball |
| `H` | Hit Golf Ball | Hit ball forward |
| `R` | Reset Golf Ball | Reset ball position |
| `J` | Spawn Golf Tee | Create a golf tee |
| `Q` | Previous Golf Club | Select previous club |
| `Z` | Next Golf Club | Select next club |
| `Left Mouse` | Charge Golf Shot | Hold to charge, release to hit |

### ?? Camera System
| Key | Action | Description |
|-----|--------|-------------|
| `F6` | Start Recording | Begin camera recording |
| `F7` | Stop Recording | End camera recording |
| `F8` | Play Recording | Playback recording |
| `F10` | Export Recording | Export to desktop |
| `1-4` | Camera Views | Quick switch to camera 1-4 |
| `Page Up` | Next Camera View | Cycle forward through cameras |
| `Page Down` | Previous Camera View | Cycle backward through cameras |

### ??? Candle System
| Key | Action | Description |
|-----|--------|-------------|
| `L` | Drop Candle | Drop held candle |

### ?? Debug & Testing
| Key | Action | Description |
|-----|--------|-------------|
| `F1` | Toggle FPS | Show/hide FPS counter |
| `F2` | Toggle Debug Collision | Show collision debug |
| `F5` | Quick Save | Save game state |
| `F9` | Quick Load | Load game state |

### ? Physics Testing (Alt + Key for Safety)
| Key | Action | Description |
|-----|--------|-------------|
| `Alt+P` | Toggle Golf Physics | Toggle realistic physics |
| `Alt+M` | Toggle Mini Golf Mode | Toggle mini golf mode |
| `Alt+B` | Check Golf Ball Status | Display ball information |
| `Alt+C` | Toggle Chaos Physics | Toggle Chaos physics |

### ?? Power Testing (Shift + Key for Safety)
| Key | Action | Description |
|-----|--------|-------------|
| `Shift+1` | Light Power Hit | Hit with 25% power |
| `Shift+2` | Medium Power Hit | Hit with 50% power |
| `Shift+3` | Hard Power Hit | Hit with 75% power |

### ?? Emergency Functions
| Key | Action | Description |
|-----|--------|-------------|
| `Insert` | Emergency Teleport | Teleport to safe location |
| `Home` | Force Stand Up | Force character to stand |

## Implementation Notes

### Safety Features:
- **Modifier Keys**: Testing functions require Alt or Shift to prevent accidental activation
- **Logical Grouping**: Related functions use similar keys (F6-F10 for camera)
- **Clear Separation**: Golf and camera systems use completely different key ranges

### Future Expansion:
- **F3-F4**: Available for additional debug functions
- **F11-F12**: Available for system functions
- **Ctrl Combinations**: Available for advanced functions
- **Number Keys 5-9**: Available for additional camera views

### Code Integration:
- All bindings are defined in `Config/DefaultInput.ini`
- Action mappings are handled in `SGPlayerController::SetupInputComponent()`
- Functions are implemented with proper logging and error handling

## Testing the New Layout

To verify the new key bindings work correctly:

1. **Test Golf System**: Use G, H, R, J, Q, Z keys
2. **Test Camera System**: Use F6-F10 and number keys 1-4
3. **Test Safety Modifiers**: Try Shift+1,2,3 and Alt+P,M,B,C
4. **Verify No Conflicts**: Ensure no key performs multiple actions

## Troubleshooting

If keys aren't working:
1. Check `DefaultInput.ini` for correct action mappings
2. Verify `SetupInputComponent()` binds all actions
3. Ensure action names match between INI and C++ code
4. Check for typos in action mapping names

## Summary

The reorganized key binding system provides:
- ? **Zero Conflicts**: Each key has one clear purpose
- ? **Logical Organization**: Related functions grouped together
- ? **Safety Features**: Dangerous functions require modifiers
- ? **Future-Proof**: Room for expansion
- ? **User-Friendly**: Intuitive key placement

This system supports both casual play and advanced testing while maintaining clear separation between different game systems.