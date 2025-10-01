# Input Actions Setup - REQUIRED!

## ?? **Missing Input Actions**

You need to add these Input Actions in **Project Settings**:

### Steps to Add Input Actions:

1. **Open Project Settings**
   - Edit ? Project Settings
   - Or File ? Project Settings

2. **Navigate to Input**
   - Engine ? Input
   - Look for "Action Mappings" section

3. **Add These Action Mappings:**

| Action Name | Key | Description |
|-------------|-----|-------------|
| `Interact` | F | Pick up camera |
| `ToggleCamera` | T | Switch camera view |
| `DropCamera` | G | Drop held camera |

### How to Add Each Action:

1. Click **"+ Action Mappings"**
2. Type the action name (e.g., "ToggleCamera")
3. Click the **"+"** next to the action name
4. Click on **"None"** and select the key (e.g., "T")
5. Repeat for all three actions

### Visual Guide:
```
Action Mappings
??? Interact
?   ??? F
??? ToggleCamera  
?   ??? T
??? DropCamera
    ??? G
```

## ? **After Adding Input Actions:**

1. **Compile** your project
2. **Test the keys:**
   - F = Pick up camera ? (already working)
   - T = Toggle camera view
   - G = Drop camera

Without these input actions, the T and G keys won't work!