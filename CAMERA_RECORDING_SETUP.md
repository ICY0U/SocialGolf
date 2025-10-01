# SocialGolf Camera Recording System Setup Guide

## Overview
This camera recording system allows players to:
- Record in-game footage from placed cameras
- Play back recordings in real-time within the game
- Save recordings to desktop (planned feature)
- Integrate seamlessly with your existing interaction and save systems

## Installation Steps

### 1. Build System Integration
The modified `SocialGolf.Build.cs` file includes all necessary dependencies. Compile your project to ensure all modules are properly linked.

### 2. Material Setup
Create a material for the camera screen display:

1. Create a new Material in Content Browser called `M_CameraScreen`
2. Add a TextureParameter called `ScreenTexture`
3. Connect the TextureParameter to the Base Color
4. Set Material Domain to Surface
5. Set Blend Mode to Opaque
6. Save the material

### 3. Camera Mesh Setup (Optional)
The system will use basic shapes by default, but you can create custom meshes:
- Create or import a camera mesh
- Create or import a screen/monitor mesh
- Assign these in the camera recorder component

### 4. Blueprint Setup

#### 4.1 Create Camera Recorder Blueprint
1. Create a new Blueprint based on `ASGCameraRecorderActor`
2. Set up the visual appearance:
   - Assign your camera mesh to `CameraMesh`
   - Assign your screen material to `ScreenMaterial`
   - Adjust `ScreenScale` as needed

#### 4.2 Configure Recording Settings
- `RecordingResolutionX/Y`: Video resolution
- `RecordingFPS`: Frame rate for recording
- `MaxRecordingDuration`: Maximum length in seconds
- `FOV`: Camera field of view

### 5. Level Integration
1. Place `SGCameraRecorderActor` in your levels
2. Players can interact with cameras using your existing interaction system
3. Cameras will automatically integrate with your save system

## Usage

### Player Interaction
- Walk up to a camera and press your interact key (E by default)
- **First interaction**: Starts recording
- **While recording**: Stops recording and saves
- **When recordings exist**: Cycles between record/play modes

### Recording Controls
```cpp
// Start recording
CameraRecorder->StartRecording("MyRecording");

// Stop recording
CameraRecorder->StopRecording();

// Play latest recording
CameraRecorder->PlayRecording(-1);

// Save to desktop
CameraRecorder->SaveRecordingToDesktop(0);
```

### Save System Integration
The system automatically integrates with your save system through:
- `USGCameraSaveGame`: Handles camera recording persistence
- `USGCameraRecordingSubsystem`: Global management of all cameras
- Automatic save/load on recording events

## Advanced Features

### Multiple Cameras
The subsystem manages multiple cameras automatically:
```cpp
// Get total recordings across all cameras
int32 TotalRecordings = CameraSubsystem->GetTotalRecordingCount();

// Export all recordings to desktop
CameraSubsystem->ExportAllRecordingsToDesktop();
```

### Custom Save Integration
To integrate with your existing save system:

1. Modify `USGCameraRecorder::SaveRecordingsToSave()` to use your save manager
2. Modify `USGCameraRecorder::LoadRecordingsFromSave()` to load from your save data
3. Add camera recording data to your main save game class

### Event Handling
Subscribe to recording events:
```cpp
CameraRecorder->OnRecordingStateChanged.AddDynamic(this, &AMyActor::OnCameraStateChanged);
CameraRecorder->OnRecordingProgress.AddDynamic(this, &AMyActor::OnRecordingProgress);
```

## Current Limitations

### Frame Storage (Temporary)
Currently, the system stores frames in memory as `TArray<FColor>`. For production use:
1. Implement proper video compression (H.264, VP9, etc.)
2. Stream frames to disk during recording
3. Use platform-specific media encoding APIs

### Desktop Export (Placeholder)
The desktop export feature is currently a placeholder. To implement:
1. Add video encoding library (FFmpeg, platform APIs)
2. Convert frame data to standard video formats
3. Handle file I/O operations

### Audio Recording
Audio recording is not yet implemented. To add:
1. Use `FAudioCaptureDeviceInterface` for microphone capture
2. Use `FGameplayMediaEncoder` for audio encoding
3. Synchronize audio with video frames

## Integration with Your Existing Systems

### Interaction System
The camera recorder implements `ISGInteractable`, so it works with your existing `USGInteractionComponent`:
- Automatic detection and highlighting
- Context-sensitive interaction text
- Network-safe interaction calls

### Save System
The system is designed to work with your existing save patterns:
- Implements `SaveGame` properties for serialization
- Uses familiar save slot patterns
- Integrates with your save manager architecture

## Performance Considerations

1. **Recording Resolution**: Lower resolutions reduce memory usage
2. **Frame Rate**: 30fps is usually sufficient for playback
3. **Maximum Duration**: Limit recording time to prevent memory issues
4. **Compression**: Implement frame compression for longer recordings

## Debugging and Testing

### Console Commands
Enable debugging with:
```cpp
// Enable camera recording logs
UE_LOG(LogTemp, Warning, TEXT("Your debug message"));
```

### Common Issues
1. **Black screen recording**: Check SceneCaptureComponent setup
2. **No interaction detected**: Verify collision settings on camera mesh
3. **Save/Load not working**: Check save slot permissions and paths

## Future Enhancements

1. **Video Compression**: Implement real-time video encoding
2. **Audio Support**: Add microphone and game audio recording
3. **Streaming**: Add ability to stream recordings to external services
4. **Effects**: Add filters and post-processing effects
5. **Timeline Editing**: Simple in-game video editing tools
6. **Sharing**: Upload and share recordings with other players

## Example Blueprint Events

### Recording Started
```cpp
UFUNCTION(BlueprintImplementableEvent)
void OnRecordingStarted(const FString& RecordingName);
```

### Recording Progress
```cpp
UFUNCTION(BlueprintImplementableEvent)
void OnRecordingProgress(float CurrentTime, float TotalTime);
```

### Playback Controls
```cpp
UFUNCTION(BlueprintCallable)
void SeekToTime(float TimeInSeconds);

UFUNCTION(BlueprintCallable)
void TogglePlayPause();
```

This system provides a solid foundation for the Content Warning-style camera recording you requested, with room for expansion and customization based on your specific needs.