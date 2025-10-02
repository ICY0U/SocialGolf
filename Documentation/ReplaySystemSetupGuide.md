# Replay System Setup Instructions

## Step 1: Create Replay Widget Blueprint

1. **Open Unreal Editor**
2. **Create Widget Blueprint:**
   - Right-click in Content Browser
   - Go to User Interface ? Widget Blueprint
   - Name it `WBP_ReplaySystem`
   - Open the widget

3. **Set Parent Class:**
   - In the widget editor, go to Graph tab
   - In the Class Settings, set Parent Class to `SGReplayWidget`

4. **Design the UI Layout:**
   Add these components to your widget (drag from Palette):

### Recording Panel
- **Horizontal Box** named "RecordingPanel"
  - **Button** named "RecordButton" (Text: "Record")
  - **Button** named "StopRecordButton" (Text: "Stop")
  - **Button** named "PauseRecordButton" (Text: "Pause")
  - **Text Block** named "RecordingStatusText" (Text: "Not Recording")
  - **Text Block** named "RecordingTimeText" (Text: "00:00.00")

### Playback Panel
- **Horizontal Box** named "PlaybackPanel"
  - **Button** named "PlayButton" (Text: "Play")
  - **Button** named "StopPlayButton" (Text: "Stop")
  - **Button** named "PausePlayButton" (Text: "Pause")
  - **Slider** named "PlaybackSlider" (Value: 0.0, Min: 0.0, Max: 1.0)
  - **Slider** named "SpeedSlider" (Value: 1.0, Min: 0.1, Max: 5.0)
  - **Text Block** named "PlaybackTimeText" (Text: "00:00.00")
  - **Text Block** named "PlaybackSpeedText" (Text: "1.0x")
  - **Progress Bar** named "PlaybackProgress"

### Camera Controls
- **Horizontal Box** named "CameraPanel"
  - **Button** named "NextCameraButton" (Text: "Next Camera")
  - **Combo Box (String)** named "CameraModeCombo"
  - **Text Block** named "CameraModeText" (Text: "Cinematic")

### Replay Management
- **Vertical Box** named "ReplayListPanel"
  - **List View** named "ReplayListView"
  - **Horizontal Box** for buttons:
    - **Button** named "LoadReplayButton" (Text: "Load")
    - **Button** named "DeleteReplayButton" (Text: "Delete")
    - **Button** named "SaveReplayButton" (Text: "Save")
    - **Button** named "RefreshListButton" (Text: "Refresh")

### Info Panel
- **Vertical Box** named "InfoPanel"
  - **Text Block** named "ReplayInfoText" (Text: "No Replay Loaded")
  - **Text Block** named "EventListText" (Text: "Events will appear here")

## Step 2: Set up Player Controller Blueprint

1. **Open or Create Player Controller Blueprint:**
   - If you have a Blueprint version of SGPlayerController, open it
   - If not, create one: Blueprint Class ? Player Controller ? name it `BP_SGPlayerController`
   - Set Parent Class to `SGPlayerController`

2. **Set Replay Widget Class:**
   - In the BP_SGPlayerController, find the "Replay Widget Class" variable
   - Set it to your `WBP_ReplaySystem` widget

3. **Configure Auto Record Setting:**
   - Set "Auto Record On Shot" to true if you want automatic recording

## Step 3: Update Game Mode

1. **Open your Game Mode Blueprint** (or create one based on SGGameMode)
2. **Set Player Controller Class:**
   - In Class Defaults, set Player Controller Class to `BP_SGPlayerController`

## Step 4: Test the System

1. **Launch the Game**
2. **Test Input Bindings:**
   - Press `F8` to toggle recording
   - Press `F9` to quick save
   - Press `F10` to open replay UI
   - Press `F11` to play last replay

3. **Test Golf Shot Recording:**
   - Hit a golf ball (if auto-record is enabled, it should start recording)
   - The recording should capture your movement and ball physics

## Step 5: Styling and Polish

1. **Style the Widget:**
   - Add background panels
   - Style buttons with colors and fonts
   - Add icons for buttons
   - Organize layout with proper spacing

2. **Add Visual Feedback:**
   - Change button colors when recording/playing
   - Add progress animations
   - Include status indicators

## Step 6: Advanced Setup (Optional)

### Create Replay List Item Widget
1. Create another Widget Blueprint: `WBP_ReplayListItem`
2. Set Parent Class to `SGReplayListItem`
3. Add these components:
   - **Text Block** named "ReplayNameText"
   - **Text Block** named "PlayerNameText"
   - **Text Block** named "DateText"
   - **Text Block** named "DurationText"
   - **Text Block** named "ScoreText"
   - **Text Block** named "CourseText"
   - **Button** named "SelectButton"
   - **Button** named "DeleteButton"
   - **Image** named "ThumbnailImage" (optional)

### Configure List View
1. In your main replay widget, select the ReplayListView
2. Set Entry Widget Class to `WBP_ReplayListItem`

## Troubleshooting

### Common Issues:
1. **Widget not opening:** Check if ReplayWidgetClass is set in Player Controller
2. **Buttons not working:** Ensure button names match exactly (case-sensitive)
3. **No recording:** Verify ReplayManager is initialized in Player Controller
4. **Input not working:** Check DefaultInput.ini has the correct key bindings

### Debug Tips:
1. Add print statements in Button Click events
2. Check the Output Log for "Replay:" messages
3. Verify replay files are being created in `Saved/Replays/` folder
4. Test with simple recording first before advanced features

## File Structure After Setup
```
Content/
??? UI/
?   ??? WBP_ReplaySystem.uasset
?   ??? WBP_ReplayListItem.uasset
??? Blueprints/
?   ??? BP_SGPlayerController.uasset
?   ??? BP_SGGameMode.uasset
??? ...

Saved/
??? Replays/
    ??? Replay_Player_20241201_123456.sgreplay
    ??? ...
```

This setup will give you a fully functional replay system with recording, playback, and management capabilities!