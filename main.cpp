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

#define API_VERSION         "2.0.0-BETA"
#define SMM_VERSION         "0.0.0.7"

#define CORE_PROTOCOL       207

#define INVALID_CLASS       0xFFF
#define UNAVAILABLE_API     0xFFF

#define M_PI                3.14159265358979323846

// ------------------------------------------------------------------------------------------------------ //

uint32_t m_bProtocolBack = 0;
uint32_t m_bProtocolBackMin = 0;
uint32_t m_bProtocolBackMax = 0;
uint32_t m_bProtocolBackFinal = 0;

uintptr_t lib_ptr = nullptr;

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

void InitProtocol()
{
    m_bProtocolBack 		= (GetCoreProtocol() + 0xF4) >> 64;
    m_bProtocolBackMin 		= (GetCoreProtocol() + 0xF8) >> 64;
    m_bProtocolBackMax 		= (GetCoreProtocol() + 0x12) >> 64;
    m_bProtocolBackFinal 	= (GetCoreProtocol() + 0x16) >> 64;
}

// ------------------------------------------------------------------------------------------------------ //

uintptr_t getSMM()
{
	return ((const uint32_t*)lib_ptr); // FindLibrary("libsamp_original.so") .. etc..
}

// ------------------------------------------------------------------------------------------------------ //

// todo

/* addresses */ 
#define ADDR_CCHEAT_CLASS 				0x156E24
#define ADDR_CCHEAT_ADDMENUITEM 		0x156E70
#define ADDR_CCHEAT_REMOVEMENUITEM 		0x156E7C
#define ADDR_CCHEAT_DRAWCHEATBOX 		0x156EC4
#define ADDR_CCHEAT_DRAW 				0x156EF6

// ccheat class funcs ::
void ccheat__cheat()
{
	return (( void (*)())(getSMM()+ADDR_CCHEAT_CLASS+1))();
}

void ccheat__menu_item_add(char* itemName, int funcId, int menuType)
{
	// ADDR_CCHEAT_ADDMENUITEM + 0x6; 	// color
	// ADDR_CCHEAT_ADDMENUITEM + 0x22; 	// function switcher

	// code is executed in the same function by calling SetMenuState() and SetCheatState()

	return (( void (*)(char*, int, int))(getSMM()+ADDR_CCHEAT_ADDMENUITEM+1))(itemName, fundId, menuType);
}

void ccheat__menu_item_remove(int itemId)
{
	return (( void (*)(int))(getSMM()+ADDR_CCHEAT_REMOVEMENUITEM+1))(itemId);
}

void ccheat__DrawCheatBox()
{
	return (( void (*)())(getSMM()+ADDR_CCHEAT_DRAWCHEATBOX+1))();
}

void ccheat__Draw()
{
	return (( void (*)())(getSMM()+ADDR_CCHEAT_DRAW+1))();
}