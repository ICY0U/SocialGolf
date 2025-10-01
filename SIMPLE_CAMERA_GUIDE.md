# ?? Simple Camera System - No Input Actions Needed!

## ? **Fixed for UE 5.6 - Direct Key Bindings**

I've updated the system to work with **direct key bindings** instead of Input Actions, which is much simpler and compatible with UE 5.6.

## ?? **How to Use the Camera System**

### **Option 1: Use the Test Character (Recommended)**

1. **Create Blueprint from SGTestCharacter:**
   - Content Browser ? Right-click ? Blueprint Class
   - Choose **SGTestCharacter** as parent
   - Name it `BP_TestCharacter`

2. **Set as Default Pawn:**
   - Open your GameMode Blueprint
   - Set **Default Pawn Class** to `BP_TestCharacter`

3. **Ready to Test:**
   - **F Key** = Pick up camera
   - **T Key** = Toggle camera view  
   - **G Key** = Drop camera

### **Option 2: Add to Your Existing Character**

If you want to add the camera system to your existing character Blueprint:

1. **Open your Character Blueprint**
2. **Add Component**: `SGCameraManager`
3. **Add Component**: `SGInteractionComponent` (if not already there)
4. **In Event Graph**, add these key bindings:

```
Event BeginPlay
??? [Initialize character]

F Key Event (Pressed)
??? Get Interaction Component
??? Try Interact

T Key Event (Pressed)  
??? Get Camera Manager
??? Toggle Camera View

G Key Event (Pressed)
??? Get Camera Manager
??? Drop Camera
```

## ?? **Features Working:**

### ? **Camera Pickup:**
- Walk near camera
- Press **F** to pick up
- Camera becomes very small (realistic size)
- Camera attaches to character

### ? **Camera View Toggle:**
- Press **T** to switch to camera view
- See through the camera lens (first-person camera perspective)
- Press **T** again to return to player view

### ? **Camera Drop:**
- Press **G** to drop camera
- Camera appears in front of player
- Can be picked up again

### ? **Visual Feedback:**
- On-screen messages for all actions
- Clear indication of current view mode
- Error messages if something goes wrong

## ??? **Testing Steps:**

1. **Place SGPickupableCamera** in your level
2. **Use BP_TestCharacter** as your pawn
3. **Play the game**
4. **Test sequence:**
   - Walk to camera
   - **F** = Pick up (camera becomes small)
   - **T** = Switch to camera view
   - **T** = Switch back to player view
   - **G** = Drop camera

## ?? **Camera View Behavior:**

### **Player View (Normal):**
- Standard third-person or first-person view
- Camera visible in character's hands (small, realistic)

### **Camera View (Press T):**
- Switch to camera's perspective
- See exactly what the camera sees
- Like looking through a viewfinder
- Perfect for recording interesting angles

## ?? **If Issues:**

### **T/G Keys Not Working:**
- Make sure you're using **SGTestCharacter** or added the components to your character
- Check **Output Log** for error messages

### **Camera Too Big:**
- The new code makes cameras much smaller (realistic handheld size)
- If still too big, I can make them even smaller

### **View Not Switching:**
- Make sure camera is picked up first (F key)
- Press T to toggle between views
- Look for on-screen messages

## ?? **No Setup Required!**

- ? No Input Actions to configure
- ? No Project Settings changes needed
- ? Direct key bindings work immediately
- ? Compatible with UE 5.6

Just use the **SGTestCharacter** or add the components to your existing character and you're ready to go! ??