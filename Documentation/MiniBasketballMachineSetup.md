# Mini Basketball Machine Setup Guide

## Overview
The Mini Basketball Machine is an arcade-style basketball game for your Social Golf project. It features:
- ?? Timed gameplay (default 30 seconds)
- ?? Score tracking with high score system
- ?? Automatic ball spawning and return
- ?? Real-time score and timer displays
- ?? Sound effects for game events
- ?? Full multiplayer support

## Files Created

### New C++ Classes:
1. `Source/SocialGolf/Basketball/SGMiniBasketballMachine.h` - Header file
2. `Source/SocialGolf/Basketball/SGMiniBasketballMachine.cpp` - Implementation file

## How to Build and Use

### Step 1: Compile the Code
1. Close Unreal Editor if it's open
2. Right-click on `SocialGolf.uproject` in Windows Explorer
3. Select "Generate Visual Studio project files"
4. Open `SocialGolf.sln` in Visual Studio
5. Build the solution (F7 or Build > Build Solution)
6. Once built, open the project in Unreal Editor

### Step 2: Create a Blueprint Based on the C++ Class

1. In Unreal Editor, go to Content Browser
2. Navigate to `/All/Game/Assets/BballMini` (create the folder if it doesn't exist)
3. Right-click > Blueprint Class
4. In "All Classes" section, search for "SGMiniBasketballMachine"
5. Select it and name the blueprint: `BP_MiniBasketballMachine`

### Step 3: Customize Your Machine (Optional)

Open `BP_MiniBasketballMachine` and adjust these settings in the Details panel:

#### Game Settings:
- **Game Duration**: How long each game lasts (default: 30 seconds)
- **Points Per Basket**: Score per successful shot (default: 2 points)
- **Number Of Balls**: How many basketballs spawn (default: 3)
- **Ball Return Delay**: Time before balls respawn after game ends
- **Minimum Scoring Velocity Z**: How fast ball must be moving down to score

#### Visual Settings:
- **Show Debug Info**: Shows collision zones for testing
- **Play Sounds**: Enable/disable sound effects

#### Audio Settings:
- **Game Start Sound**: Sound when game begins
- **Game End Sound**: Sound when time runs out
- **Score Sound**: Sound for successful basket
- **High Score Sound**: Special sound for beating high score

### Step 4: Place the Machine in Your Level

1. Drag `BP_MiniBasketballMachine` from Content Browser into your level
2. Position it where you want (e.g., in `/All/Game/Assets/BballMini` area)
3. Rotate it so the front (ball return area) faces the player
4. Test in Play mode!

## How It Works

### For Players:
1. **Approach the machine** - Walk up to the front of the machine
2. **Start the game** - Walk into the interaction zone (you'll see a prompt)
   - On screen message: "Press [E] to Start Basketball Game"
3. **Pick up a basketball** - 3 basketballs spawn at the front
4. **Shoot!** - Throw basketballs at the hoop to score
5. **Watch the timer** - You have 30 seconds to get the highest score
6. **Game ends** - When time runs out, your final score is displayed
7. **High score tracking** - Beat the high score to become the champion!

### Scoring System:
- Ball must pass through the hoop from above
- Ball must be moving downward
- 2 points per successful basket (configurable)
- High score is saved on the machine

### Display Panels:
- **Top Display**: Shows current score (or high score when idle)
- **Bottom Display**: Shows time remaining (or "PRESS TO START" when idle)

## Architecture Details

### Key Components:

1. **Machine Mesh**: Main body/frame
2. **Backboard Mesh**: The backboard behind the hoop
3. **Hoop Mesh**: The basketball rim
4. **Ball Return Mesh**: Front area where balls spawn
5. **Scoring Zone**: Trigger box below hoop (detects successful shots)
6. **Pre-Scoring Zone**: Trigger box above hoop (validates trajectory)
7. **Interaction Zone**: Large area in front for player detection
8. **Score Display**: Shows current/high score
9. **Timer Display**: Shows time remaining or status message

### Scoring Validation:

The machine validates shots using multiple checks:
1. ? Ball must be thrown (not just dropped)
2. ? Ball must enter pre-scoring zone first (from above)
3. ? Ball must be moving downward at minimum speed
4. ? Ball must pass through scoring zone
5. ? 1-second cooldown prevents double-counting

### Multiplayer Support:

- Fully replicated for networked games
- Server authoritative scoring
- All clients see score updates in real-time
- High score persists across games
- Only one player can use machine at a time

## Customization Ideas

### Easy Modifications:
1. **Change game duration**: Adjust `GameDuration` (e.g., 60 seconds, 15 seconds)
2. **Point values**: Change `PointsPerBasket` (e.g., 3-point shots)
3. **More balls**: Increase `NumberOfBalls` for more action
4. **Difficulty**: Adjust `MinimumScoringVelocityZ` for harder/easier scoring

### Advanced Modifications:
1. **Combo system**: Add multiplier for consecutive baskets
2. **Moving hoop**: Animate the hoop to move up/down or side-to-side
3. **Power-ups**: Special balls worth more points
4. **Leaderboard**: Connect to a persistent database
5. **Tickets/Rewards**: Award in-game currency based on score
6. **Different game modes**: 
   - Time attack (score as many as possible)
   - Target score (reach X points to win)
   - Accuracy mode (bonus for consecutive makes)

## Blueprint Implementation (Optional)

You can also add Blueprint logic to enhance the machine:

### In Event Graph:
```
Event OnGameStarted
  ? Play Particle Effect (confetti, lights)
  ? Start Music

Event OnScored
  ? Play Score Animation
  ? Flash Lights
  ? Spawn Score Popup Widget

Event OnGameEnded
  ? Show Final Score Widget
  ? Save High Score to Database
  ? Award Tickets/Currency
```

## Troubleshooting

### Problem: Machine doesn't detect scoring
**Solution**: 
- Check `bShowDebugInfo = true` to see collision zones
- Verify ScoringZone and PreScoringZone are positioned correctly
- Ensure basketball is being thrown with enough force

### Problem: Game doesn't start
**Solution**:
- Make sure player is walking into InteractionZone
- Check that `bIsGameActive` is false (machine not already in use)
- Verify player reference is valid

### Problem: Basketballs don't spawn
**Solution**:
- Check `NumberOfBalls` is greater than 0
- Verify `ASGBasketball` class exists and is accessible
- Check spawn location isn't blocked by collision

### Problem: Displays show wrong information
**Solution**:
- Verify TextRenderComponents are set up correctly
- Check replication is working (server/client sync)
- Ensure `UpdateScoreDisplay()` and `UpdateTimerDisplay()` are called

## Testing Checklist

- [ ] Machine spawns in level correctly
- [ ] Basketballs spawn when game starts
- [ ] Score increments when ball goes through hoop
- [ ] Timer counts down correctly
- [ ] Game ends when timer reaches zero
- [ ] Final score is displayed
- [ ] High score is saved and displayed
- [ ] Basketballs despawn/return after game ends
- [ ] Player can start a new game
- [ ] Works in multiplayer (if applicable)
- [ ] Sound effects play (if enabled)

## Future Enhancements

Here are some ideas for future updates:

1. **Visual Polish**:
   - Neon lights that pulse with the timer
   - LED score displays with glow effects
   - Particle effects for scoring

2. **Gameplay Features**:
   - Difficulty levels (easy, medium, hard)
   - Challenge modes (speed shots, accuracy)
   - Tournament mode for multiple players

3. **Integration**:
   - Connect to player profile system
   - Global leaderboards
   - Achievements and unlockables
   - In-game currency rewards

4. **Arcade Feel**:
   - Ticket printer that spits out rewards
   - Animated mascot/character
   - Retro arcade sounds and music
   - CRT screen effect on displays

## Code Structure

```
SGMiniBasketballMachine
??? Components
?   ??? MachineMesh (main body)
?   ??? BackboardMesh
?   ??? HoopMesh
?   ??? BallReturnMesh
?   ??? ScoringZone (trigger)
?   ??? PreScoringZone (trigger)
?   ??? InteractionZone (trigger)
?   ??? ScoreDisplay (text)
?   ??? TimerDisplay (text)
??? Game State (Replicated)
?   ??? bIsGameActive
?   ??? CurrentScore
?   ??? TimeRemaining
?   ??? CurrentPlayer
?   ??? HighScore
?   ??? HighScorePlayerName
??? Functions
?   ??? StartGame()
?   ??? EndGame()
?   ??? RegisterScore()
?   ??? SpawnBasketballs()
?   ??? ReturnBasketballs()
?   ??? Validation functions
??? Events
    ??? OnScoringZoneOverlap
    ??? OnPreScoringZoneOverlap
    ??? OnInteractionZoneOverlap
    ??? OnGameTimerTick
```

## Support

If you encounter issues or have questions:
1. Check the troubleshooting section above
2. Review the code comments in the .h and .cpp files
3. Enable `bShowDebugInfo` for visual debugging
4. Check the Output Log in Unreal Editor for errors

## Credits

Created for the Social Golf project
Compatible with UE 5.6
Part of the Basketball minigame system

---

**Ready to play!** ????
