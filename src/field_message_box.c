#include "global.h"
#include "menu.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "match_call.h"
#include "field_message_box.h"
#include "text_window.h"
#include "script.h"
#include "config/general.h"
#if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
#include "comfy_anim.h"
#include "bg.h"
#include "gpu_regs.h"
#endif

static EWRAM_DATA u8 sFieldMessageBoxMode = 0;
EWRAM_DATA u8 gWalkAwayFromSignpostTimer = 0;

#if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
static EWRAM_DATA u32 sMessageBoxSlideAnimId;
static EWRAM_DATA bool8 sMessageBoxSlideActive;
#endif

static void ExpandStringAndStartDrawFieldMessage(const u8 *, bool32);
static void StartDrawFieldMessage(void);

#if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
static void StartMessageBoxSlideInAnimation(void);
static void UpdateMessageBoxSlidePosition(void);
#endif

void InitFieldMessageBox(void)
{
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
    gTextFlags.canABSpeedUpPrint = FALSE;
    gTextFlags.useAlternateDownArrow = FALSE;
    gTextFlags.autoScroll = FALSE;
    gTextFlags.forceMidTextSpeed = FALSE;
    
#if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
    sMessageBoxSlideAnimId = INVALID_COMFY_ANIM;
    sMessageBoxSlideActive = FALSE;
#endif
}

#define tState data[0]

static void Task_DrawFieldMessage(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
        case 0:
            if (gMsgIsSignPost)
                LoadSignPostWindowFrameGfx();
            else
                LoadMessageBoxAndBorderGfx();
            task->tState++;
            break;
        case 1:
           DrawDialogueFrame(0, TRUE);
            #if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
             // Set initial position using GPU register directly
             SetGpuReg(REG_OFFSET_BG0VOFS, -60); // Start 60 pixels above
             StartMessageBoxSlideInAnimation();
             #endif
           task->tState++;
           break;
        case 2:
            #if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
                UpdateMessageBoxSlidePosition();
            #endif
            if (RunTextPrintersAndIsPrinter0Active() != TRUE)
            {
                sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
                DestroyTask(taskId);
            }
    }
}

#undef tState

static void CreateTask_DrawFieldMessage(void)
{
    CreateTask(Task_DrawFieldMessage, 0x50);
}

static void DestroyTask_DrawFieldMessage(void)
{
    u8 taskId = FindTaskIdByFunc(Task_DrawFieldMessage);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);
}

bool8 ShowFieldMessage(const u8 *str)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    ExpandStringAndStartDrawFieldMessage(str, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    return TRUE;
}

static void Task_HidePokenavMessageWhenDone(u8 taskId)
{
    if (!IsMatchCallTaskActive())
    {
        sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
        DestroyTask(taskId);
    }
}

bool8 ShowPokenavFieldMessage(const u8 *str)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    StringExpandPlaceholders(gStringVar4, str);
    CreateTask(Task_HidePokenavMessageWhenDone, 0);
    StartMatchCallFromScript(str);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    return TRUE;
}

bool8 ShowFieldAutoScrollMessage(const u8 *str)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_AUTO_SCROLL;
    ExpandStringAndStartDrawFieldMessage(str, FALSE);
    return TRUE;
}

static bool8 UNUSED ForceShowFieldAutoScrollMessage(const u8 *str)
{
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_AUTO_SCROLL;
    ExpandStringAndStartDrawFieldMessage(str, TRUE);
    return TRUE;
}

// Same as ShowFieldMessage, but instead of accepting a
// string arg it just prints whats already in gStringVar4
bool8 ShowFieldMessageFromBuffer(void)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    StartDrawFieldMessage();
    return TRUE;
}

static void ExpandStringAndStartDrawFieldMessage(const u8 *str, bool32 allowSkippingDelayWithButtonPress)
{
    StringExpandPlaceholders(gStringVar4, str);
    AddTextPrinterForMessage(allowSkippingDelayWithButtonPress);
    CreateTask_DrawFieldMessage();
}

static void StartDrawFieldMessage(void)
{
    AddTextPrinterForMessage(TRUE);
    CreateTask_DrawFieldMessage();
}

void HideFieldMessageBox(void)
{
    DestroyTask_DrawFieldMessage();
    ClearDialogWindowAndFrame(0, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

u8 GetFieldMessageBoxMode(void)
{
    return sFieldMessageBoxMode;
}

bool8 IsFieldMessageBoxHidden(void)
{
    if (sFieldMessageBoxMode == FIELD_MESSAGE_BOX_HIDDEN)
        return TRUE;
    return FALSE;
}

static void UNUSED ReplaceFieldMessageWithFrame(void)
{
    DestroyTask_DrawFieldMessage();
    DrawStdWindowFrame(0, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

void StopFieldMessage(void)
{
    DestroyTask_DrawFieldMessage();
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

#if MESSAGE_BOX_SLIDE_TRANSITION == TRUE
static void StartMessageBoxSlideInAnimation(void)
{
    struct ComfyAnimEasingConfig easingConfig;
    InitComfyAnimConfig_Easing(&easingConfig);
    easingConfig.from = Q_24_8(-60);        // Start 60 pixels above
    easingConfig.to = 0;                    // Target normal position
    easingConfig.durationFrames = 20;       // 20 frames duration like heat menu
    easingConfig.easingFunc = ComfyAnimEasing_EaseOutCubic;
    easingConfig.delayFrames = 0;           // No delay
    
    sMessageBoxSlideAnimId = CreateComfyAnim_Easing(&easingConfig);
    sMessageBoxSlideActive = TRUE;
}

static void UpdateMessageBoxSlidePosition(void)
{
    if (sMessageBoxSlideActive && sMessageBoxSlideAnimId != INVALID_COMFY_ANIM)
    {
        struct ComfyAnim *anim = &gComfyAnims[sMessageBoxSlideAnimId];
        
        // Manually advance the animation each frame
        TryAdvanceComfyAnim(anim);
        
        s32 yOffset = anim->position;
        
        // Convert Q_24_8 to pixels and set GPU register directly like map name popup
        SetGpuReg(REG_OFFSET_BG0VOFS, yOffset / 256);
        
        if (anim->completed)
        {
            ReleaseComfyAnim(sMessageBoxSlideAnimId);
            sMessageBoxSlideAnimId = INVALID_COMFY_ANIM;
            sMessageBoxSlideActive = FALSE;
            SetGpuReg(REG_OFFSET_BG0VOFS, 0); // Reset to normal position
        }
    }
}
#endif
