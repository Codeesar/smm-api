#pragma once

// Render
#define ID_RENDER_CHEATBOX 						0
#define ID_RENDER_CHEATMENU						1
#define ID_RENDER_CLICKSENDER 					2
#define ID_RENDER_KEYS							3
#define ID_RENDER_NOCLIPTOOLS 					4
#define ID_RENDER_SKINCHANGER 					5

// Events
#define ID_EVENT_ONSENDTEXTDRAW 				0
#define ID_EVENT_ONSENDMENUROW 					1
#define ID_EVENT_ONSENDSAMPKEY 					2
#define ID_EVENT_ONLEGITSELECTED 				3
#define ID_EVENT_ONRAGESELECTED 				4
#define ID_EVENT_ONVISUALSELECTED 				5
#define ID_EVENT_ONWEAPONSSELECTED 				6
#define ID_EVENT_ONTELEPORTSSELECTED 			7
#define ID_EVENT_ONGTAPATCHESSELECTED 			8
#define ID_EVENT_ONSAMPPATCHESSELECTED 			9
#define ID_EVENT_ONBACKPRESSED 					10

// Pad events
#define PADEVENT_JUMP						0

// Cheat menu step's		
#define ID_MENU_STEP_TYPES					0
#define ID_MENU_STEP_LEGIT					1
#define ID_MENU_STEP_RAGE					2
#define ID_MENU_STEP_VISUAL					3
#define ID_MENU_STEP_GTAPATCHES				4
#define ID_MENU_STEP_SAMPPATCHES			5
#define ID_MENU_STEP_TELEPORTS				6
#define ID_MENU_STEP_WEAPONS 				7
#define ID_MENU_STEP_NOCLIPTOOLS 			8

#define ID_MENU_STEP_INCOMINGRPC 			8
#define ID_MENU_STEP_OUTCOMINGRPC 			9
#define ID_MENU_STEP_INCOMINGPACKETS 		10
#define ID_MENU_STEP_OUTCOMINGPACKETS 		11

// NOP's
#define ID_NOP_SETENGINESTATE 				0 

// Cheats
#define ID_CHEAT_INVINCIBLE 				0
#define ID_CHEAT_WALLHACK 					1
#define ID_CHEAT_FREEZE 					2
#define ID_CHEAT_BEHIND 					3
#define ID_CHEAT_NOFALL 					4
#define ID_CHEAT_INVISIBLE 					5
#define ID_CHEAT_FLASH 						6
#define ID_CHEAT_AIRBREAK 					7
#define ID_CHEAT_HPPULSATOR 				8
#define ID_CHEAT_ARMPULSATOR 				9
#define ID_CHEAT_NOCLIP 					10

// GTA Patches
#define ID_GTAPATCH_MONEY 					0
#define ID_GTAPATCH_NITRO 					1
#define ID_GTAPATCH_CLOCK 					2
#define ID_GTAPATCH_LOCKTIME 				3
#define ID_GTAPATCH_LOCKWEATHER 			4
#define ID_GTAPATCH_RADAR 					5
#define ID_GTAPATCH_FASTFIRE 				6
#define ID_GTAPATCH_CARINVISIBLE 			7
#define ID_GTAPATCH_DRIVEBY 				8
#define ID_GTAPATCH_SUICIDE 				9
#define ID_GTAPATCH_JETPACK 				10
#define ID_GTAPATCH_BLOWUPCARS 				11
#define ID_GTAPATCH_INFINITYSPRINT 			12
#define ID_GTAPATCH_CJWALK 					13

// PC keyboard buttons
#define	ID_KEY_ALT 							1024
#define	ID_KEY_TAB 							1
#define	ID_KEY_C 							2
#define	ID_KEY_LCTRL 						4
#define	ID_KEY_SPACE 						8
#define	ID_KEY_ENTER 						16
#define	ID_KEY_LSHIFT 						32
#define	ID_KEY_E 							64
#define	ID_KEY_RMB 							128
#define	ID_KEY_Q 							256
#define	ID_KEY_TWO 							320
#define	ID_KEY_TWOS 						512
#define	ID_KEY_Y 							65536
#define	ID_KEY_N 							131072

extern char* GetAPIVersion();
extern char* GetSMMVersion();

class CCheat {

public:
	void Process();

	void UpdateMarkerCoords(float x, float y, float z);

	void ToggleRender(int renderId, uint8_t state);
	void ToggleGTAPatch(int patchId);
	void ToggleTeleport(int posId);
	void ToggleCheat(int cheatId);
	void ToggleNOP(int nopId);

	void SetMenuStep(int stepId);
	int GetMenuStep();

	void GenerateBasic();
	void GenerateLegit();
	void GenerateRage();
	void GenerateVisual();
	void GenerateGTAPatches();
	void GenerateSAMPPatches();
	void GenerateTeleports();
	void GenerateWeapons();
	void GenerateIncomingRPC();
	void GenerateOutcomingRPC();
	void GenerateIncomingPackets();
	void GenerateOutcomingPackets();

	void Render();
	void RenderCheatMenu();
	void RenderCheatBox();
	void RenderClickSender();
	void RenderKeys();
	void RenderNoClipTools();
	void RenderSkinChanger();

	void PadEvent(int eventId);

};