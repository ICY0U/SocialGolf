# SocialGolf Replay System - Blueprint Setup Guide

## Overview
The replay system allows players to record, save, and replay their golf shots with multiple camera angles and cinematic effects.

## Core Components

### 1. SGReplayManager (Component)
- Handles recording and playback of replay data
- Manages different camera modes during playback
- Saves/loads replay files to disk

### 2. SGReplayWidget (UI)
- User interface for controlling replays
- Lists available replays
- Playback controls (play, pause, speed, camera switching)

### 3. SGReplayTypes
- Data structures for replay frame data and events
- Enums for camera modes and event types

## Blueprint Setup Instructions

### Step 1: Create Replay Widget Blueprint
1. Create a new Widget Blueprint based on `USGReplayWidget`
2. Add the following UI elements:
   - Record/Stop/Pause buttons
   - Play/Stop/Pause buttons
   - Playback slider for scrubbing
   - Speed slider
   - Camera mode dropdown
   - Replay list view
   - Time display labels

### Step 2: Setup Player Controller
1. In your Player Controller Blueprint:
   - Set the `ReplayWidgetClass` to your created widget
   - Configure `bAutoRecordOnShot` as desired
   - The ReplayManager component is automatically created

### Step 3: Configure Input Bindings
The following keys are pre-configured:
- **F8**: Toggle recording
- **F9**: Quick save replay
- **F10**: Open/close replay UI
- **F11**: Play last recorded replay
- **Ctrl+C**: Next camera mode during playback
- **Ctrl+Space**: Pause/resume playback

### Step 4: Golf Shot Integration
To enable auto-recording on golf shots, add this to your golf ball hit logic:

```cpp
// In your golf shot function
if (PlayerController)
{
    PlayerController->OnGolfShotEvent(ShotPower, ClubName);
}
```

## Camera Modes

### Available Camera Modes:
1. **First Person**: Player's view
2. **Third Person**: Behind player view  
3. **Cinematic**: Orbiting camera around action
4. **Ball Follow**: Camera follows ball trajectory
5. **Static Overview**: High overview of the hole
6. **Side View**: Side angle view
7. **Behind Shot**: Camera behind the shot direction

### Auto Camera Switching
- Enable `bAutoSwitchCameras` in ReplayManager
- Set `CameraSwitchInterval` for timing (default 5 seconds)

## Replay Data Structure

### Frame Data (recorded at 30fps):
- Player position and rotation
- Ball position and velocity  
- Camera position and rotation
- Timestamp

### Event Data:
- Golf shots with power and club info
- Hole completions with score
- Player interactions
- Custom events

## File System

### Replay Files:
- Saved to: `[ProjectSavedDir]/Replays/`
- Format: `.sgreplay` (JSON format)
- Naming: `Replay_PlayerName_YYYYMMDD_HHMMSS.sgreplay`

### File Operations:
- Auto-save on recording stop
- Manual save/load through UI
- Delete replays through UI
- Export functionality (future feature)

## Performance Considerations

### Recording Settings:
- **Frame Rate**: 30fps default (adjustable)
- **Max Duration**: 5 minutes default
- **Auto-stop**: On hole completion

### Playback Settings:
- **Interpolation**: Smooth frame interpolation
- **Speed Control**: 0.1x to 5.0x speed
- **Loop Mode**: Optional continuous playback

## Usage Examples

### Basic Recording:
```cpp
// Start recording
ReplayManager->StartRecording("My Great Shot");

// Record golf shot event
ReplayManager->RecordGolfShot(75.0f, "Driver", ShotLocation);

// Stop recording (auto-saves)
ReplayManager->StopRecording();
```

### Basic Playback:
```cpp
// Load replay data
FSGReplayData ReplayData;
ReplayManager->LoadReplay("ReplayFileName");
ReplayData = ReplayManager->GetCurrentReplayData();

// Start playback with cinematic camera
ReplayManager->StartPlayback(ReplayData, ECameraReplayMode::Cinematic);
```

### UI Integration:
```cpp
// In your widget's BeginPlay
ReplayWidget->Initialize(PlayerController->GetReplayManager());

// Handle replay selection
void OnReplaySelected(const FString& ReplayName)
{
    ReplayManager->LoadReplay(ReplayName);
    // Update UI with replay info
}
```

## Customization Options

### Recording Triggers:
- Manual start/stop
- Auto-start on golf shot
- Auto-stop on hole completion
- Time-based auto-stop

### Camera Customization:
- Orbital camera speed and radius
- Ball follow distance and height  
- Static camera positions
- Custom camera paths

### Event System:
- Custom event types
- Event-based camera switching
- Highlight moments
- Score tracking integration

## Troubleshooting

### Common Issues:
1. **No recording**: Check ReplayManager is valid
2. **No playback**: Verify replay data has frames
3. **Camera issues**: Ensure CinematicCameraActor spawns correctly
4. **Save/Load fails**: Check file permissions and directory access

### Debug Commands:
- Use the replay UI to monitor recording status
- Check logs for "Replay:" prefixed messages
- Verify frame count and duration in replay data

## Future Enhancements

### Planned Features:
- Video export to MP4
- Cloud replay sharing
- Replay thumbnails
- Advanced editing tools
- Slow-motion effects
- Multiple angle compilation
- Social sharing integration

This replay system provides a solid foundation for recording and sharing golf moments in your SocialGolf game!