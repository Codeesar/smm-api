/*
 *
 *
 *  █▀▀▀█  █▀▄▀█  █▀▄▀█ 　  █▀▀█  █▀▀█ ▀█▀ 
 *  ▀▀▀▄▄  █ █ █  █ █ █ 　  █▄▄█  █▄▄█  █  
 *  █▄▄▄█  █   █  █   █ 　  █  █  █    ▄█▄ 
 *
 * SA-MP MOD Mobile the reciprocal interaction API
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * @author 		Codeesar
 * @link 		https://vk.com/artemkodisarov
 * @community 	https://vk.com/mobile.samp
 *
 *
*/

#include "main.h"

#define API_VERSION 	"1.0"
#define SMM_VERSION 	"0.0.0.6"

// ------------------------------------------------------ //

char* GetAPIVersion()
{
	return API_VERSION;
}

char* GetSMMVersion()
{
	return SMM_VERSION;
}

// ------------------------------------------------------ //


/**
	* @return CCheat
*/
CCheat* CCheat::GetClass()
{
	return ((CCheat*)this);
}

// Main loop of CCheat::class
void CCheat::Process()
{
	CCheat::GetClass()->Process();
}

/**
	* @var float x
	* @var float y
	* @var float z
*/
void CCheat::UpdateMarkerCoords(float x, float y, float z)
{
	CCheat::GetClass()->marker_X = x;
	CCheat::GetClass()->marker_Y = y;
	CCheat::GetClass()->marker_Z = z;

	return;
}

/**
	* @var int stepId
*/
void CCheat::SetMenuStep(int stepId)
{
    CCheat::GetClass()->m_bMenuCurrentStepId = stepId;

    return;
}

/**
	* @return int
*/
int CCheat::GetMenuStep() 
{
	return ((int)CCheat::GetClass()->m_bMenuCurrentStepId);
}

/**
	* @var int 		renderId
	* @var uint8_t 	state
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

        case ID_RENDER_NOCLIPTOOLS:
            CCheat::GetClass()->m_bNoClipState = state;
        break;

        case ID_RENDER_SKINCHANGER:
            CCheat::GetClass()->m_bSkinChangerState = state;
        break;
	}

	return;
}

/**
	* @var int patchId
*/
void CCheat::ToggleGTAPatch(int patchId)
{
	switch(patchId)
    {
        case ID_GTAPATCH_MONEY:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_MONEY);
        break;

        case ID_GTAPATCH_NITRO:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_NITRO);
        break;

        case ID_GTAPATCH_CLOCK:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_CLOCK);
        break;

        case ID_GTAPATCH_LOCKTIME:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_LOCKTIME);
        break;

        case ID_GTAPATCH_LOCKWEATHER:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_LOCKWEATHER);
        break;

        case ID_GTAPATCH_RADAR:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_RADAR);
        break;

        case ID_GTAPATCH_FASTFIRE:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_FASTFIRE);
        break;

        case ID_GTAPATCH_CARINVISIBLE:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_CARINVISIBLE);
        break;

        case ID_GTAPATCH_DRIVEBY:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_DRIVEBY);
        break;

        case ID_GTAPATCH_SUICIDE:
        pGame->FindPlayerPed()->SetHealth(-1);
        break;

        case ID_GTAPATCH_JETPACK:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_JETPACK);
        break;

        case ID_GTAPATCH_BLOWUPCARS:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_BLOWUPCARS);
        break;

        case ID_GTAPATCH_INFINITYSPRINT:
      	// not using
        break;

        case ID_GTAPATCH_CJWALK:
        CCheat::GetClass()->ToggleGTAPatch(ID_GTAPATCH_CJWALK);
        break;
    }

    return;
}

/**
	* @var int posId
*/
void CCheat::ToggleTeleport(int posId)
{
	switch(posId)
	{
		case 0: // City Hall
    	CCheat::GetClass()->ToggleTeleport(0);
    	break;

    	// ... from 0 to 55 ...
    	// too lazy to bear it all

		case 55: // Alhambra
    	CCheat::GetClass()->ToggleTeleport(55);
    	break;
	
		case 69: // Marker
    	CCheat::GetClass()->ToggleTeleport(69);
    	break;
	}

	return;
}	

/**
	* @var int cheatId
*/
void CCheat::ToggleCheat(int cheatId)
{
	switch(cheatId)
    { 
        case ID_CHEAT_INVINCIBLE:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_INVINCIBLE);
        break;

        case ID_CHEAT_WALLHACK:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_WALLHACK);
        break;

        case ID_CHEAT_FREEZE:
       	CCheat::GetClass()->ToggleCheat(ID_CHEAT_FREEZE);
        break;

        case ID_CHEAT_BEHIND:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_BEHIND);
        break;

        case ID_CHEAT_NOFALL:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_NOFALL);
        break;

        case ID_CHEAT_INVISIBLE:
       	CCheat::GetClass()->ToggleCheat(ID_CHEAT_INVISIBLE);
        break;

        case ID_CHEAT_FLASH:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_FLASH);
        break;

        case ID_CHEAT_AIRBREAK:
       	// not using
        break;

        case ID_CHEAT_HPPULSATOR:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_HPPULSATOR);
        break;

        case ID_CHEAT_ARMPULSATOR:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_ARMPULSATOR);
        break;

        case ID_CHEAT_NOCLIP:
        CCheat::GetClass()->ToggleCheat(ID_CHEAT_NOCLIP);
        break;
    }

    return;
}

/**
	* @var int nopId
*/
void CCheat::ToggleNOP(int nopId)
{
	switch(nopId)
    {
        case ID_NOP_SETENGINESTATE:
        CCheat::GetClass()->ToggleNOP(ID_NOP_SETENGINESTATE);
        break;
    }

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

    if(CCheat::GetClass()->pDialogWindow) CCheat::GetClass()->pDialogWindow->Render();
    if(CCheat::GetClass()->pKeyBoard) CCheat::GetClass()->pKeyBoard->Render();

    return;
}

void CCheat::RenderCheatMenu() { return CCheat::GetClass()->RenderCheatMenu(); }
void CCheat::RenderCheatBox() { return CCheat::GetClass()->RenderCheatBox(); }
void CCheat::RenderClickSender() { return CCheat::GetClass()->RenderClickSender(); }
void CCheat::RenderKeys() { return CCheat::GetClass()->RenderKeys(); }
void CCheat::RenderNoClipTools() { return CCheat::GetClass()->RenderNoClipTools(); }
void CCheat::RenderSkinChanger() { return CCheat::GetClass()->RenderSkinChanger(); }

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

// -------------------- EVENTS BEGIN -------------------- //

/**
	* @var int eventId
*/
void CCheat::PadEvent(int eventId)
{
    switch(eventId)
    {
        case PADEVENT_JUMP: // onPlayerJump
        CCheat::GetClass()->PadEvent(PADEVENT_JUMP);
        break;
    }

    return;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onSendTextDraw(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onSendMenuRow(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onSendSAMPKey(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onLegitSelected(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onRageSelected(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onVisualSelected(uint8_t action)
{
	return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onWeaponsSelected(uint8_t action)
{
    return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onTeleportsSelected(uint8_t action)
{
    return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onGTAPatchesSelected(uint8_t action)
{
    return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onSAMPPatchesSelected(uint8_t action)
{
    return true;
}

/**
	* @var uint8_t action
	*
	* @return bool
*/
bool onBackPressed(uint8_t action)
{
    return true;
}

// -------------------- EVENTS END -------------------- //