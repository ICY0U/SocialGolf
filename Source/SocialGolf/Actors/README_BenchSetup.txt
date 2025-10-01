// FULLY FIXED BENCH SYSTEM - Critical Issues Resolved
// ?? FIXED ISSUES:
// ? Extra bench spawning at (0,0,0) - Prevented class default object component creation
// ? Player falling under map - Added multiple safety checks and fallback positions
// ? Position calculation errors - Implemented proper world coordinate calculations
// ? Emergency recovery system - Added console commands and input bindings

// === SETUP INSTRUCTIONS ===

1. Create BP_Bench Blueprint:
   - Right-click in Content Browser ? Blueprint Class
   - Choose "SGBench" as parent
   - Name it "BP_Bench"

2. Configure BP_Bench:
   - Open BP_Bench Blueprint
   - Select "BenchMesh" component
   - Set your bench Static Mesh (replace default)
   - Position "SitPosition" component above the bench seat surface
   - Compile and save

3. Class Default Settings to adjust:
   - Sit Height: 80.0 (distance above bench surface)
   - Stand Distance: 150.0 (how far in front when standing)
   - Sit Text: "Press E to Sit"
   - Stand Up Text: "Press E to Stand Up"
   - Occupied Text: "Bench is Occupied"

// === USAGE ===

Sitting Down:
- Walk to bench and press E

Standing Up (Multiple Methods):
- Press E again
- Press SPACE (Jump key)
- Console: EmergencyTeleportToSafeLocation
- Console: ForceStandUpFromBench

// === SAFETY FEATURES ===

? Multiple fallback stand positions (front, back, left, right of bench)
? Emergency teleport if player falls below world (-1000 Z)
? Proper physics teleportation with ETeleportType::TeleportPhysics
? Extensive debug logging for troubleshooting
? No more auto-spawning at origin
? Safe position validation before movement

// === DEBUG COMMANDS (Console) ===

Press ` (backtick) to open console, then type:
- EmergencyTeleportToSafeLocation - Teleports to (0,0,200) and forces stand up
- ForceStandUpFromBench - Forces character to stand up from any bench
- showdebug input - Shows input debug info

// === TROUBLESHOOTING ===

If player still has issues:

1. Check Output Log for messages starting with "SGBench:" or "SGCharacter:"
2. Verify bench is properly placed (not at 0,0,0)
3. Ensure SitPosition component is positioned correctly
4. Try emergency commands if stuck
5. Check bench mesh has proper collision

// === INPUT BINDINGS (Optional) ===

You can add these to Project Settings > Input for emergency recovery:
- EmergencyTeleport ? F9 key
- ForceStandUp ? F10 key

// === KNOWN WORKING FLOW ===

1. Place BP_Bench in level (NOT at origin)
2. Set proper mesh and SitPosition
3. Walk to bench ? Press E ? Sits properly above bench
4. Press E or SPACE ? Stands in front of bench safely
5. Multiple sit/stand cycles work without falling under map

The system now has comprehensive safety measures and should work reliably!