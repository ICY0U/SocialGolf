# Quick Setup Checklist for Replay System

## ?? Step-by-Step Setup

### ? 1. **Launch Unreal Editor**
- Open your SocialGolf project
- The C++ code is already compiled and ready

### ? 2. **Create Replay Widget Blueprint** (5 minutes)
1. **Right-click** in Content Browser
2. **User Interface** ? **Widget Blueprint**
3. **Name it:** `WBP_ReplaySystem`
4. **Open the widget** and go to the **Graph** tab
5. **Class Settings** ? Set **Parent Class** to `SGReplayWidget`

### ? 3. **Design Basic UI Layout** (10 minutes)
In the Designer tab, add these widgets from the Palette:

#### **Recording Panel:**
- Add a **Horizontal Box** 
- Add these **Buttons**: `RecordButton`, `StopRecordButton`, `PauseRecordButton`
- Add **Text Blocks**: `RecordingStatusText`, `RecordingTimeText`

#### **Playback Panel:**
- Add another **Horizontal Box**
- Add **Buttons**: `PlayButton`, `StopPlayButton`, `PausePlayButton`
- Add **Sliders**: `PlaybackSlider`, `SpeedSlider`
- Add **Text Blocks**: `PlaybackTimeText`, `PlaybackSpeedText`
- Add **Progress Bar**: `PlaybackProgress`

#### **Camera Controls:**
- Add **Button**: `NextCameraButton`
- Add **Combo Box (String)**: `CameraModeCombo`
- Add **Text Block**: `CameraModeText`

#### **File Management:**
- Add **List View**: `ReplayListView`
- Add **Buttons**: `LoadReplayButton`, `DeleteReplayButton`, `SaveReplayButton`, `RefreshListButton`

#### **Info Panel:**
- Add **Text Blocks**: `ReplayInfoText`, `EventListText`

**?? IMPORTANT:** Widget names must match exactly (case-sensitive)!

### ? 4. **Setup Player Controller Blueprint** (3 minutes)
1. **Create** Blueprint Class ? **Player Controller** ? name it `BP_SGPlayerController`
2. **Set Parent Class** to `SGPlayerController`
3. **Class Defaults** ? Set **Replay Widget Class** to `WBP_ReplaySystem`
4. **Set** `Auto Record On Shot` to **true** for automatic recording

### ? 5. **Update Game Mode** (2 minutes)
1. **Open/Create** your Game Mode Blueprint
2. **Class Defaults** ? Set **Player Controller Class** to `BP_SGPlayerController`

### ? 6. **Test the System** (2 minutes)
1. **Play** the game
2. **Press Ctrl+R** to start recording
3. **Hit a golf ball** (should auto-record if enabled)
4. **Press Ctrl+S** to save the replay
5. **Press Ctrl+U** to open the replay UI
6. **Press Ctrl+P** to play the last recording

## ?? **Controls Summary (NO F-KEYS!)**
- **Ctrl+R** = Toggle Recording
- **Ctrl+S** = Quick Save Replay
- **Ctrl+U** = Open/Close Replay UI
- **Ctrl+P** = Play Last Replay
- **Ctrl+C** = Next Camera (during playback)

## ?? **Quick Testing**
```
1. Launch game
2. Press Ctrl+R (should see recording status in logs)
3. Spawn golf ball with G key
4. Hit ball with H key (auto-records shot)
5. Press Ctrl+S to save
6. Press Ctrl+P to watch replay with cinematic camera
```

## ?? **File Locations**
- **Replays saved to:** `[Project]/Saved/Replays/`
- **Widget:** `Content/UI/WBP_ReplaySystem`
- **Controller:** `Content/Blueprints/BP_SGPlayerController`

## ?? **Troubleshooting**
- **No recording:** Check ReplayManager exists in PlayerController
- **UI won't open:** Verify ReplayWidgetClass is set
- **Buttons don't work:** Check widget names match exactly
- **No auto-record:** Enable `Auto Record On Shot` in PlayerController

## ?? **Advanced Features** (Later)
- Style the UI with colors and fonts
- Add replay thumbnails
- Create highlight detection
- Add slow-motion effects
- Export to video files

## ? **You're Ready!**
The core replay system is fully functional. You can:
- Record golf shots automatically
- Save and load replays
- Watch with multiple camera angles
- Manage replay files
- All with safe Ctrl+Key combinations!

Start with the basic setup above, then customize the UI styling to match your game's theme!