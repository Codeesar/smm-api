/*
 *
 *
 *  █▀▀▀█  █▀▄▀█  █▀▄▀█ 　  █▀▀█  █▀▀█ ▀█▀ 
 *  ▀▀▀▄▄  █ █ █  █ █ █ 　  █▄▄█  █▄▄█  █  
 *  █▄▄▄█  █   █  █   █ 　  █  █  █    ▄█▄ 
 *
 *  SA-MP MOD Mobile the reciprocal interaction API
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * @author          cdS4R
 * @link            https://vk.com/artemkodisarov
 * @community       https://vk.com/mobile.samp
 *
 *
*/

#define ID_UNKNOWN_EVENT                                0
#define ID_EVENT_RESETALL                               1
#define ID_EVENT_INITSETTINGS                           2
#define ID_EVENT_EXECUTEFUNCTION                        3
#define ID_EVENT_PROCESS                                4
#define ID_EVENT_SETCAMERACOLLISION                     5
#define ID_EVENT_VEHICLEGRABBER                         6
#define ID_EVENT_CARSHOOTER                             7
#define ID_EVENT_CARSHOT                                8
#define ID_EVENT_PROCESSNOCLIP                          9
#define ID_EVENT_PROCESSJUMPER                          10
#define ID_EVENT_PROCESSNOCLIP_SPEED_OR_HEIGHTDOWN      11
#define ID_EVENT_PROCESSNOCLIP_SPEED_OR_HEIGHTUP        12
#define ID_EVENT_PROCESS_CARSHOOTER_TOGGLE              13
#define ID_EVENT_PROCESS_SURFIST_MOVE                   14
#define ID_EVENT_PROCESS_NOCLIP_INCAR                   15
#define ID_EVENT_PROCESS_PADEVENT                       16
#define ID_EVENT_PROCESS_PATCH_RADAR                    17
#define ID_EVENT_PROCESS_PATCH_FASTFIRE                 18
#define ID_EVENT_PROCESS_CHEAT_FLASH                    19
#define ID_EVENT_PROCESS_CHEAT_NOFALL                   20
#define ID_EVENT_DRAWCHEATBOX                           21

static char* infoAddr = "";

static bool CCheat__onResetAll()
{
    infoAddr = "CCheat::onResetAll";

    return true;
}

static bool CCheat__onInitSettings()
{
    infoAddr = "CCheat::onInitSettings";

    return true;
}

static bool CCheat__onExecuteFunction(uint8_t state)
{
    infoAddr = "CCheat::onExecuteFunction";

    return true;
}

static bool CCheat__onProcess()
{
    infoAddr = "CCheat::onProcess";

    return true;
}

static bool CCheat__onSetCameraCollision(uint8_t state)
{
    infoAddr = "CCheat::onSetCameraCollision";

    return true;
}

static bool CCheat__onVehicleGrabber()
{
    infoAddr = "CCheat::onVehicleGrabber";

    return true;
}

static bool CCheat__onCarShooter()
{
    infoAddr = "CCheat::onCarShooter";

    return true;
}

static bool CCheat__onCarShot()
{
    infoAddr = "CCheat::onCarShot";

    return true;
}

static bool CCheat__onProcessNoClip()
{
    infoAddr = "CCheat::onProcessNoClip";

    return true;
}

static bool CCheat__onProcessJumper()
{
    infoAddr = "CCheat::onProcessJumper";

    return true;
}

static bool CCheat__onProcessNoClipSpeedOrHeightDown()
{
    infoAddr = "CCheat::onProcessNoClipSpeedOrHeightDown";

    return true;
}

static bool CCheat__onProcessNoClipSpeedOrHeightUp()
{
    infoAddr = "CCheat::onProcessNoClipSpeedOrHeightUp";

    return true;
}

static bool CCheat__onProcessCarShooterToggle()
{
    infoAddr = "CCheat::onProcessCarShooterToggle";

    return true;
}

static bool CCheat__onProcessSurfistMove()
{
    infoAddr = "CCheat::onProcessSurfistMove";

    return true;
}

static bool CCheat__onProcessNoClipInCar()
{
    infoAddr = "CCheat::onProcessNoClipInCar";

    return true;
}

static bool CCheat__onProcessPadEvent(uint8_t state)
{
    infoAddr = "CCheat::onProcessPadEvent";

    return true;
}

static bool CCheat__onProcessPatchRadar()
{
    infoAddr = "CCheat::onProcessPatchRadar";

    return true;
}

static bool CCheat__onProcessPatchFastFire()
{
    infoAddr = "CCheat::onProcessPatchFastFire";

    return true;
}

static bool CCheat__onProcessCheatFlash()
{
    infoAddr = "CCheat::onProcessCheatFlash";

    return true;
}

static bool CCheat__onProcessCheatNoFall(uint8_t state)
{
    infoAddr = "CCheat::onProcessCheatNoFall";

    return true;
}

static bool CCheat__onDrawCheatBox()
{
    infoAddr = "CCheat::onDrawCheatBox";

    return true;
}

static bool CCheat__OnEvent(uint8_t event, uint8_t usingState)
{
    switch(event)
    {
        default: return false;
        case ID_UNKNOWN_EVENT: return false;

        case ID_EVENT_RESETALL: return onResetAll();
        case ID_EVENT_INITSETTINGS: return onInitSettings();
        case ID_EVENT_EXECUTEFUNCTION: return onExecuteFunction(usingState);
        case ID_EVENT_PROCESS: return onProcess();
        case ID_EVENT_SETCAMERACOLLISION: return onSetCameraCollision(usingState);
        case ID_EVENT_VEHICLEGRABBER: return onVehicleGrabber();
        case ID_EVENT_CARSHOOTER: return onCarShooter();
        case ID_EVENT_CARSHOT: return onCarShot();
        case ID_EVENT_PROCESSNOCLIP: return onProcessNoClip();
        case ID_EVENT_PROCESSJUMPER: return onProcessJumper();
        case ID_EVENT_PROCESSNOCLIP_SPEED_OR_HEIGHTDOWN: return onProcessNoClipSpeedOrHeightDown();
        case ID_EVENT_PROCESSNOCLIP_SPEED_OR_HEIGHTUP: return onProcessNoClipSpeedOrHeightUp();
        case ID_EVENT_PROCESS_CARSHOOTER_TOGGLE: return onProcessCarShooterToggle();
        case ID_EVENT_PROCESS_SURFIST_MOVE: return onProcessSurfistMove();
        case ID_EVENT_PROCESS_NOCLIP_INCAR: return onProcessNoClipInCar();
        case ID_EVENT_PROCESS_PADEVENT: return onProcessPadEvent(usingState);
        case ID_EVENT_PROCESS_PATCH_RADAR: return onProcessPatchRadar();
        case ID_EVENT_PROCESS_PATCH_FASTFIRE: return onProcessPatchFastFire();
        case ID_EVENT_PROCESS_CHEAT_FLASH: return onProcessCheatFlash();
        case ID_EVENT_PROCESS_CHEAT_NOFALL: return onProcessCheatNoFall(usingState);
        case ID_EVENT_DRAWCHEATBOX: return onDrawCheatBox();
    }
}