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
 * @author          Codeesar
 * @link            https://vk.com/artemkodisarov
 * @community       https://vk.com/mobile.samp
 *
 *
*/

#include "main.h"
#include <math.h>

#define API_VERSION         "1.1.0"
#define SMM_VERSION         "0.0.0.6"

#define CORE_PROTOCOL       96
#define INVALID_CLASS       0xFFF
#define UNAVAILABLE_API     0xFFF
#define M_PI                3.14159265358979323846

// ------------------------------------------------------------------------------------------------------ //

char* GetAPIVersion()
{
    return API_VERSION;
}

char* GetSMMVersion()
{
    return SMM_VERSION;
}

int GetCoreProtocol()
{
    return CORE_PROTOCOL;
}

uint32_t m_bProtocolBack = 0;
uint32_t m_bProtocolBackMin = 0;
uint32_t m_bProtocolBackMax = 0;
uint32_t m_bProtocolBackFinal = 0;
void InitProtocol()
{
    m_bProtocolBack = ((atan(((uint32_t)GetCoreProtocol()) / M_PI * 4.25) + 256) / 0.005);
    m_bProtocolBackMin = m_bProtocolBack / ((uint32_t)GetCoreProtocol());
    m_bProtocolBackMax = m_bProtocolBack * ((uint32_t)GetCoreProtocol());
    m_bProtocolBackFinal = m_bProtocolBackMax - m_bProtocolBackMin;
}

// ------------------------------------------------------------------------------------------------------ //

/*
 * @return CCheat
*/
CCheat* CCheat::GetClass()
{
    InitProtocol();   

    if(GetAPIVersion() == UNAVAILABLE_API or m_bProtocolBackFinal <= 0) 
        return ((CCheat*) INVALID_CLASS);

    return ((CCheat*) this);
}

// Main loop of CCheat::class
void CCheat::Process()
{
    CCheat::GetClass()->Process();
}

/*
 * @return float
*/
float CCheat::GetNoClipSpeed()
{
    return ((float)CCheat::GetClass()->m_bNoClipSpeed);
}

/*
 * @param float speed
*/
void CCheat::SetNoClipSpeed(float speed)
{
    CCheat::GetClass()->m_bNoClipSpeed = speed;

    return;
}

void CCheat::TPLook()
{
    return CCheat::GetClass()->TPLook();
}

/*
 * @param float x
 * @param float y
 * @param float z
*/
void CCheat::UpdateMarkerCoords(float x, float y, float z)
{
    CCheat::GetClass()->marker_X = x;
    CCheat::GetClass()->marker_Y = y;
    CCheat::GetClass()->marker_Z = z;

    return;
}

/*
 * @param int stepId
*/
void CCheat::SetMenuStep(int stepId)
{
    CCheat::GetClass()->m_bMenuCurrentStepId = stepId;

    return;
}

/*
 * @return int
*/
int CCheat::GetMenuStep() 
{
    return ((int)CCheat::GetClass()->m_bMenuCurrentStepId);
}

/*
 * @param int 		renderId
 * @param uint8_t 	state
*/
void CCheat::ToggleRender(int renderId, uint8_t state)
{
    switch(renderId)
    {
        case ID_RENDER_CHEATBOX:
	    CCheat::GetClass()->m_bCheatBoxState = state;
        break;

        case ID_RENDER_CHEATMENU:
        CCheat::GetClass()->m_bMenuState = state;
        break;

        case ID_RENDER_CLICKSENDER:
        CCheat::GetClass()->m_bClickSenderState = state;
        break;

        case ID_RENDER_KEYS:
        CCheat::GetClass()->m_bKeysState = state;
        break;

        case ID_RENDER_SKINCHANGER:
        CCheat::GetClass()->m_bSkinChangerState = state;
        break;

        case ID_RENDER_NOCLIPTOOLS:
        CCheat::GetClass()->m_bNoClipState = state;
        break;

        case ID_RENDER_WARP:
        CCheat::GetClass()->m_bWarpState = state;
        break;
    }

    return;
}

/*
 * @param int patchId
*/
void CCheat::ToggleGTAPatch(int patchId)
{
    return CCheat::GetClass()->ToggleGTAPatch(patchId);
}

/*
 * @param int rpcId
*/
void CCheat::ToggleRPC(int rpcId)
{
    return CCheat::GetClass()->ToggleRPC(rpcId);
}

/*
 * @param int packetId
*/
void CCheat::TogglePacket(int packetId)
{
    return CCheat::GetClass()->TogglePacket(packetId);
}

/*
 * @param int posId
*/
#define MIN_POS     0
#define MAX_POS     55
#define MARKER_POS  69
void CCheat::ToggleTeleport(int posId)
{
    return CCheat::GetClass()->ToggleTeleport(posId);
}	

/*
 * @param int cheatId
*/
void CCheat::ToggleCheat(int cheatId)
{
    return CCheat::GetClass()->ToggleCheat(cheatId);
}

/*
 * @param int nopId
*/
void CCheat::ToggleNOP(int nopId)
{
    // not using

    return;
}

void CCheat::Render() 
{ 
    CCheat::GetClass()->RenderCheatBox();
    CCheat::GetClass()->RenderKeys();
    CCheat::GetClass()->RenderNoClipTools();
    CCheat::GetClass()->RenderClickSender();
    CCheat::GetClass()->RenderCheatMenu();
    CCheat::GetClass()->RenderSkinChanger();
    CCheat::GetClass()->RenderWarp();

    if(CCheat::GetClass()->pDialogWindow) 
        CCheat::GetClass()->pDialogWindow->Render();
    if(CCheat::GetClass()->pKeyBoard) 
        CCheat::GetClass()->pKeyBoard->Render();

    return;
}

// -------------------- EVENTS BEGIN -------------------- //

/*
 * @param int eventId
*/
void CCheat::PadEvent(int eventId)
{
    return CCheat::GetClass()->PadEvent(eventId);
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onSendTextDraw(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onSendMenuRow(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onSendSAMPKey(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onLegitSelected(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onRageSelected(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onVisualSelected(uint8_t action)
{
	return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onWeaponsSelected(uint8_t action)
{
    return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onTeleportsSelected(uint8_t action)
{
    return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onGTAPatchesSelected(uint8_t action)
{
    return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onSAMPPatchesSelected(uint8_t action)
{
    return true;
}

/*
 * @param uint8_t action
 *
 * @return bool
*/
bool onBackPressed(uint8_t action)
{
    return true;
}

// -------------------- EVENTS END -------------------- //

// -------------------- RENDER BEGIN -------------------- //

void CCheat::RenderCheatMenu() { return CCheat::GetClass()->RenderCheatMenu(); }
void CCheat::RenderCheatBox() { return CCheat::GetClass()->RenderCheatBox(); }
void CCheat::RenderClickSender() { return CCheat::GetClass()->RenderClickSender(); }
void CCheat::RenderKeys() { return CCheat::GetClass()->RenderKeys(); }
void CCheat::RenderNoClipTools() { return CCheat::GetClass()->RenderNoClipTools(); }
void CCheat::RenderSkinChanger() { return CCheat::GetClass()->RenderSkinChanger(); }
void CCheat::RenderWarp() { return CCheat::GetClass()->RenderWarp(); }

// -------------------- RENDER END -------------------- //

// -------------------- MENU GENERATOR BEGIN -------------------- //

void CCheat::GenerateBasic() { return CCheat::GetClass()->GenerateBasic(); }
void CCheat::GenerateLegit() { return CCheat::GetClass()->GenerateLegit(); }
void CCheat::GenerateRage() { return CCheat::GetClass()->GenerateRage(); }
void CCheat::GenerateVisual() { return CCheat::GetClass()->GenerateVisual(); }
void CCheat::GenerateGTAPatches() { return CCheat::GetClass()->GenerateGTAPatches(); }
void CCheat::GenerateSAMPPatches() { return CCheat::GetClass()->GenerateSAMPPatches(); }
void CCheat::GenerateTeleports() { return CCheat::GetClass()->GenerateTeleports(); }
void CCheat::GenerateWeapons() { return CCheat::GetClass()->GenerateWeapons(); }
void CCheat::GenerateIncomingRPC() { return CCheat::GetClass()->GenerateIncomingRPC(); }
void CCheat::GenerateOutcomingRPC() { return CCheat::GetClass()->GenerateOutcomingRPC(); }
void CCheat::GenerateIncomingPackets() { return CCheat::GetClass()->GenerateIncomingPackets(); }
void CCheat::GenerateOutcomingPackets() { return CCheat::GetClass()->GenerateOutcomingPackets(); }

// -------------------- MENU GENERATOR END -------------------- //