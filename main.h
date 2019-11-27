#pragma once

#define MENU_TITLE 							"mod_s0beit_sa"

#define FUNC_SET_CHEATS_STATE 				0
#define FUNC_SET_TELEPORTS_STATE 			1
#define FUNC_SET_WEAPONS_STATE 				2
#define FUNC_SET_GTA_PATCHES_STATE  		3
#define FUNC_SET_SAMP_PATCHES_STATE 		4
#define FUNC_SET_CHEAT_INVINCIBLE_STATE 	5
#define FUNC_SET_CHEAT_WALLHACK_STATE 		6
#define FUNC_SET_CHEAT_NOFALL_STATE 		7
#define FUNC_SET_CHEAT_FREEZE_STATE 		8
#define FUNC_SET_CHEAT_INVISIBLE_STATE 		9
#define FUNC_SET_CHEAT_SURFIST_STATE 		10
#define FUNC_SET_CHEAT_NOCLIP_STATE 		11
#define FUNC_SET_CHEAT_FLASH_STATE 			12
#define FUNC_SET_CHEAT_HPPULSATOR_STATE 	13
#define FUNC_SET_CHEAT_ARMPULSATOR_STATE 	14
#define FUNC_SET_CHEAT_JUMPER_STATE 		15
#define FUNC_SET_CHEAT_BEHIND_STATE 		16
#define FUNC_SET_CHEAT_ANTISTUN_STATE 		17
#define FUNC_SET_CHEAT_PLUSCBUG_STATE 		18
#define FUNC_SET_CHEAT_RVANKA_STATE 		19
#define FUNC_SET_CHEAT_DAMAGER_STATE 		20
#define FUNC_SET_CHEAT_SLAPPER_STATE 		21
#define FUNC_SET_CHEAT_CRASHERA_STATE 		22
#define FUNC_SET_CHEAT_CRASHERB_STATE 		23
#define FUNC_SET_CHEAT_CRASHERC_STATE 		24
#define FUNC_SET_CHEAT_NORELOAD_STATE 		25
#define FUNC_SET_CHEAT_NOSPREAD_STATE 		26
#define FUNC_SET_CHEAT_NOBIKEFALL_STATE 	27
#define FUNC_SET_CHEAT_CARSHOT_STATE 		28

// ?!?!?!?!
#define CHEATS_DISABLED 		0
#define CHEATS_ENABLED 			1

#define MAIN_STATE 				0
#define CHEATS_STATE 			1
#define SAMP_PATCHES_STATE 		2
#define INCOMING_RPC_STATE 		3
#define OUTCOMING_RPC_STATE 	4
#define GTA_PATCHES_STATE 		5
#define SETTINGS_STATE 			6
#define TELEPORTS_STATE 		7
#define WEAPONS_STATE 			8

#define MAX_CHEATS 				100
#define MAX_RPCS 				100
#define MAX_PACKETS 			100
#define MAX_RAKBOTS 			120

#define ID_CHEAT_INVINCIBLE 	0
#define ID_CHEAT_WALLHACK 		1
#define ID_CHEAT_NOFALL 		2
#define ID_CHEAT_FREEZE 		3
#define ID_CHEAT_INVISIBLE 		4
#define ID_CHEAT_SURFIST 		5
#define ID_CHEAT_NOCLIP 		6
#define ID_CHEAT_FLASH 			7
#define ID_CHEAT_HPPULSATOR 	8
#define ID_CHEAT_ARMPULSATOR 	9
#define ID_CHEAT_JUMPER  		10
#define ID_CHEAT_BEHIND 		11
#define ID_CHEAT_ANTISTUN 		12
#define ID_CHEAT_PLUSCBUG 		13
#define ID_CHEAT_RVANKA 		14
#define ID_CHEAT_DAMAGER 		15
#define ID_CHEAT_SLAPPER 		16
#define ID_CHEAT_CRASHERA 		17
#define ID_CHEAT_CRASHERB 		18
#define ID_CHEAT_CRASHERC 		19
#define ID_CHEAT_NORELOAD 		20
#define ID_CHEAT_NOSPREAD 		21
#define ID_CHEAT_NOBIKEFALL 	22
#define ID_CHEAT_CARSHOT 		23

// api stuff
char* 	GetAPIVersion();
char* 	GetSMMVersion();
int 	GetCoreProtocol();
void 	InitProtocol();

uintptr_t getSMM();

// ccheat class :: funcs
void ccheat__menu_item_add(char* itemName, int funcId, int menuType);
bool ccheat__IsEnabled() 												{ return m_bEnabled; }
void ccheat__SetEnabled(bool state) 									{ m_bEnabled = state; }
void ccheat__SetMenuState(int stateId) 									{ menuState = stateId; }
bool ccheat__GetMenuState() 											{ return menuState; }
bool ccheat__GetCheatState(int cheatId) 								{ return cheatsState[cheatId]; }
bool ccheat__GetRPCState(int rpcId) 									{ return rpcsState[rpcId]; }
bool ccheat__GetPacketState(int pktId) 									{ return packetsState[pktId]; }
void ccheat__SetCheatState(int cheatId, bool state) 					{ cheatsState[cheatId] = state; }
void ccheat__SetRPCState(int rpcId, bool state)							{ rpcsState[rpcId] = state; }
void ccheat__SetPacketState(int pktId, bool state) 						{ packetsState[pktId] = state; }
void ccheat__makerakbot(const char* name, int id);
void ccheat__disablerakbot(int id);
void ccheat__rakbot_follow(int botId, unsigned short entityId);
void ccheat__rakbot_setcheatstate(int cheatId, bool state);
void ccheat__DrawCheatBox();
void ccheat__Draw();

// ccheat class :: vars
bool m_bEnabled;
bool cheatsState[MAX_CHEATS];
bool rpcsState[MAX_RPCS];
bool packetsState[MAX_PACKETS];
int	 menuState;