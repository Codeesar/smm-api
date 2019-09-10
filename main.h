#pragma once

// Render
#define ID_RENDER_CHEATBOX 						0
#define ID_RENDER_CHEATMENU						1
#define ID_RENDER_CLICKSENDER 					2
#define ID_RENDER_KEYS							3
#define ID_RENDER_NOCLIPTOOLS 					4
#define ID_RENDER_SKINCHANGER 					5
#define ID_RENDER_WARP 							6

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
#define ID_PADEVENT_NONE 						0
#define ID_PADEVENT_JUMP						1
#define ID_PADEVENT_FIRE 						2

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
#define ID_MENU_STEP_INCOMINGRPC 			9
#define ID_MENU_STEP_OUTCOMINGRPC 			10
#define ID_MENU_STEP_INCOMINGPACKETS 		11
#define ID_MENU_STEP_OUTCOMINGPACKETS 		12

// Incoming RPC
#define ID_RPC_DISPLAYGAMETEXT 				0
#define ID_RPC_SETGRAVITY 					1
#define ID_RPC_FORCESPAWNSELECTION 			2
#define ID_RPC_SETPLAYERPOS 				3
#define ID_RPC_SETCAMERAPOS 				4
#define ID_RPC_SETCAMERALOOKAT 				5
#define ID_RPC_SETPLAYERFACINGANGLE 		6
#define ID_RPC_SETFIGHTINGSTYLE 			7
#define ID_RPC_SETPLAYERSKIN				8
#define ID_RPC_APPLYPLAYERANIMATION 		9
#define ID_RPC_CLEARPLAYERANIMATIONS 		10
#define ID_RPC_SETSPAWNINFO 				11
#define ID_RPC_CREATEEXPLOSION 				12
#define ID_RPC_SETPLAYERHEALTH 				13
#define ID_RPC_SETPLAYERARMOUR 				14
#define ID_RPC_SETPLAYERCOLOR 				15
#define ID_RPC_SETPLAYERNAME 				16
#define ID_RPC_SETPLAYERPOSFINDZ 			17
#define ID_RPC_SETPLAYERINTERIOR 			18
#define ID_RPC_SETMAPICON 					19
#define ID_RPC_DISABLEMAPICON 				20
#define ID_RPC_SETCAMERABEHINDPLAYER 		21
#define ID_RPC_SETPLAYERSPECIALACTION 		22
#define ID_RPC_TOGGLEPLAYERSPECTATING 		23
#define ID_RPC_SETPLAYERSPECTATING 			24
#define ID_RPC_PLAYERSPECTATEPLAYER 		25
#define ID_RPC_PLAYERSPECTATEVEHICLE 		26
#define ID_RPC_PUTPLAYERINVEHICLE 			27
#define ID_RPC_VEHICLEPARAMS 				28
#define ID_RPC_VEHICLEPARAMSEX 				29
#define ID_RPC_HAVESOMEMONEY 				30
#define ID_RPC_RESETMONEY 					31
#define ID_RPC_LINKVEHICLE 					32
#define ID_RPC_REMOVEPLAYERFROMVEHICLE 		33
#define ID_RPC_SETVEHICLEHEALTH 			34
#define ID_RPC_SETVEHICLEPOS 				35
#define ID_RPC_SETVEHICLEVELOCITY 			36
#define ID_RPC_INTERPOLATECAMERA 			37
#define ID_RPC_ADDGANGZONE 					38
#define ID_RPC_REMOVEGANGZONE 				39
#define ID_RPC_FLASHGANGZONE 				40
#define ID_RPC_STOPFLASHGANGZONE 			41
#define ID_RPC_CREATEOBJECT 				42
#define ID_RPC_DESTROYOBJECT 				43
#define ID_RPC_SETOBJECTPOS 				44
#define ID_RPC_PLAYSOUND 					45
#define ID_RPC_SETPLAYERWANTEDLEVEL 		46
#define ID_RPC_MOVEOBJECT 					47
#define ID_RPC_RESETPLAYERWEAPONS 			48
#define ID_RPC_GIVEPLAYERWEAPON 			49
#define ID_RPC_TOGGLEPLAYERCONTROLLABLE 	50
#define ID_RPC_SETARMEDWEAPON				51
#define ID_RPC_SHOWTEXTDRAW 				52
#define ID_RPC_SHOWMENU 					53
#define ID_RPC_INITGAME 					54
#define ID_RPC_SERVERJOIN  					55
#define ID_RPC_SERVERQUIT 					56
#define ID_RPC_CLIENTMESSAGE 				57
#define ID_RPC_CHAT 						58
#define ID_RPC_REQUESTCLASS 				59
#define ID_RPC_WEATHER 						60
#define ID_RPC_REQUESTSPAWN 				61
#define ID_RPC_WORLDTIME 					62
#define ID_RPC_SETTIMEEX 					63
#define ID_RPC_WORLDPLAYERADD 				64
#define ID_RPC_WORLDPLAYERREMOVE 			65
#define ID_RPC_SETCHECKPOINT 				66
#define ID_RPC_DISABLECHECKPOINT 			67
#define ID_RPC_SETRACECHECKPOINT 			68
#define ID_RPC_DISABLERACECHECKPOINT 		69
#define ID_RPC_WORLDVEHICLEADD 				70
#define ID_RPC_WORLDVEHICLEREMOVE 			71
#define ID_RPC_ENTERVEHICLE 				72
#define ID_RPC_EXITVEHICLE 					73
#define ID_RPC_SHOWDIALOG 					74
#define ID_RPC_GAMEMODERESTART 				75
#define ID_RPC_CONNECTIONREJECTED 			76
#define ID_RPC_CREATEPICKUP 				77
#define ID_RPC_DESTROYPICKUP 				78
#define ID_RPC_CREATETEXTLABEL 				79
#define ID_RPC_DELETETEXTLABEL 				80
#define ID_RPC_UPDATETEXTLABEL 				81
#define ID_RPC_UPDATESCORESPINGSIPS 		82

// -------------------- not using -------------------- //
#define ID_RPC_GETCURRENTWEAPON 			83
#define ID_RPC_GETPLAYERHEALTH				84
#define ID_RPC_GETPLAYERPOS 				85
// -------------------- not using -------------------- //

// Outcoming RPC
#define ID_RPC_OUTREQUESTSPAWN 				86
#define ID_RPC_OUTREQUESTCLASS 				87
#define ID_RPC_OUTDEATH 					88
#define ID_RPC_OUTENTERVEHICLE 				89
#define ID_RPC_OUTEXITVEHICLE 				90
#define ID_RPC_OUTSETINTERIORID 			91
#define ID_RPC_OUTSPAWN 					92
#define ID_RPC_OUTGIVETAKEDAMAGE 			93

// unknown RPC
#define ID_RPC_UNKNOWN 						255

// Packet's
#define ID_PACKET_AUTHKEY 						0
#define ID_PACKET_DISCONNECTIONNOTIFICATION 	1
#define ID_PACKET_CONNECTIONLOST 				2
#define ID_PACKET_CONNECTIONSUCCEEDED 			3
#define ID_PACKET_PLAYERSYNC 					4
#define ID_PACKET_VEHICLESYNC 					5
#define ID_PACKET_PASSENGERSYNC 				6
#define ID_PACKET_MARKERSSYNC 					7
#define ID_PACKET_AIMSYNC 						8
#define ID_PACKET_BULLETSYNC 					9
#define ID_PACKET_UNOCCUPPIEDSYNC 				10
#define ID_PACKET_TRAILERSYNC 					11
#define ID_PACKET_WEAPONDATA 					12
#define ID_PACKET_PLAYERDATA 					13
#define ID_PACKET_VEHICLEDATA 					14
#define ID_PACKET_UNKNOWN 						255

// NOP's (not using)
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
#define ID_CHEAT_HIGHJUMP 					10
#define ID_CHEAT_SURF 						11
#define ID_CHEAT_NOCLIP 					12

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
extern int GetCoreProtocol();
extern void InitProtocol();

class CCheat {

private:
	CCheat* GetClass();

public:
	void Process();

	float GetNoClipSpeed();
	void SetNoClipSpeed(float speed);

	void UpdateMarkerCoords(float x, float y, float z);

	void ToggleRender(int renderId, uint8_t state);
	void ToggleGTAPatch(int patchId);
	void ToggleRPC(int rpcId);
	void TogglePacket(int packetId);
	void ToggleTeleport(int posId);
	void ToggleCheat(int cheatId);
	void ToggleNOP(int nopId);

	void CoordMasterLoop(float x, float y);

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