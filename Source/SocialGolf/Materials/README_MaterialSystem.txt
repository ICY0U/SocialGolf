// SOCIALGOLF MATERIAL SYSTEM - CustomizableGrid Integration
// Created to work with your existing CustomizableGrid UV preset materials
// ?? FIXED: FObjectFinder crash - now uses proper asset loading methods

=== OVERVIEW ===

This system allows you to easily integrate and use the CustomizableGrid UV preset materials
in your SocialGolf project. It provides:

? Material preset management (Data Assets)
? Component-based material switching 
? Multiplayer-synchronized material changes
? Interactive material showcase actors
? Easy integration with your CustomizableGrid materials
? Robust asset loading with fallback methods

=== SETUP INSTRUCTIONS ===

1. CREATE MATERIAL PRESET DATA ASSET:
   - In Content Browser ? Right-click ? Miscellaneous ? Data Asset
   - Choose "SGMaterialPreset" as parent class
   - Name it "DA_DefaultMaterialPresets" 
   - Save in: /Game/SocialGolf/Materials/

2. CONFIGURE THE PRESET DATA ASSET:
   - Open DA_DefaultMaterialPresets
   - In "UV Presets" array, add 15 entries (one for each M_Grid_UV_preset_xxx)
   - For each entry:
     * Preset Name: "UV Preset 001", "UV Preset 002", etc.
     * Material: Select corresponding M_Grid_UV_preset_xxx from CustomizableGrid/Materials/PresetsUV/
     * Description: Optional description
     * Is UV Preset: True

3. CREATE MATERIAL SHOWCASE ACTORS:
   - Create Blueprint from "SGMaterialShowcase" 
   - Name it "BP_MaterialShowcase"
   - IMPORTANT: Manually set the "Material Preset Asset" to your DA_DefaultMaterialPresets
   - Place in level for interactive material testing

=== IMPORTANT NOTES ===

?? MANUAL ASSET ASSIGNMENT REQUIRED:
- The system no longer auto-loads the DA_DefaultMaterialPresets asset
- You MUST manually assign the MaterialPresetAsset in each component
- This prevents crashes and gives you full control over which materials to use

? FLEXIBLE SETUP:
- Each SGMaterialManager can use different material preset assets
- You can create multiple data assets for different material sets
- No dependency on specific file paths

=== USAGE ===

?? INTERACTIVE SHOWCASE:
- Walk up to BP_MaterialShowcase
- Press E to cycle through UV preset materials
- Watch the mesh change materials in real-time

?? COMPONENT SYSTEM:
- Add "SGMaterialManager" component to any actor
- Set "Material Preset Asset" to your data asset (REQUIRED)
- Set "Target Mesh Component" to the mesh you want to change
- Use Blueprint functions to change materials:
  * Set UV Preset (Index)
  * Next UV Preset / Previous UV Preset
  * Toggle Preset Type (UV vs Standard)

=== BLUEPRINT FUNCTIONS ===

SGMaterialManager Component Functions:
- SetUVPreset(int32 Index) - Set specific UV preset
- NextUVPreset() - Cycle to next UV preset
- PreviousUVPreset() - Cycle to previous UV preset  
- GetCurrentPresetName() - Get name of current material
- ApplyCurrentMaterial() - Force reapply current material

Events:
- OnMaterialChanged (MaterialIndex, NewMaterial) - Fired when material changes

=== MULTIPLAYER SUPPORT ===

? All material changes are automatically replicated
? Multiple players can interact with showcases
? Material states sync across clients
? Server authority prevents conflicts

=== CUSTOMIZATION ===

ADDING MORE MATERIALS:
1. Open your DA_DefaultMaterialPresets data asset
2. Add entries to UV Presets or Standard Presets arrays
3. Reference your CustomizableGrid materials:
   - /Game/CustomizableGrid/Materials/PresetsUV/M_Grid_UV_preset_xxx
   - /Game/CustomizableGrid/Materials/Presets/M_Grid_preset_xxx

CREATING CUSTOM SHOWCASES:
- Inherit from SGMaterialShowcase
- Override interaction behavior
- Add custom UI elements
- Implement different cycling patterns

=== TROUBLESHOOTING ===

? "No material preset asset assigned":
   ? Set MaterialPresetAsset in component details

? "Invalid UV preset index":  
   ? Check that your data asset has materials assigned

? Materials not changing:
   ? Verify TargetMeshComponent is set
   ? Check Output Log for material system messages

? "Could not load default material presets":
   ? This is normal if you haven't created the data asset yet
   ? Manually assign your data asset in component details

? Multiplayer sync issues:
   ? Ensure replication is enabled on the actor

=== QUICK START CHECKLIST ===

? 1. Create SGMaterialPreset Data Asset
? 2. Add your CustomizableGrid materials to the arrays
? 3. Create BP_MaterialShowcase Blueprint
? 4. Set Material Preset Asset in the component details
? 5. Place showcase in level and test

=== FILE STRUCTURE ===

Source/SocialGolf/Materials/
??? SGMaterialPreset.h/.cpp      - Data asset for material collections
??? SGMaterialManager.h/.cpp     - Component for material management  
??? SGMaterialShowcase.h/.cpp    - Interactive demo actor
??? README_MaterialSystem.txt    - This file

Content/SocialGolf/Materials/
??? DA_DefaultMaterialPresets   - Your material preset data asset (you create this)

=== INTEGRATION WITH CUSTOMIZABLEGRID ===

Your CustomizableGrid folder contains:
- 15 UV preset materials (M_Grid_UV_preset_001 to 015)
- Base materials (M_Grid_Base, M_Grid_Base_UV)
- Standard preset materials in Presets folder

This system integrates with these existing materials, providing an easy way 
to use them throughout your SocialGolf project with proper error handling
and flexible asset management.