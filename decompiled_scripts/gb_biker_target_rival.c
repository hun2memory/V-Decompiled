#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	func_96();

	while (true)
	{
		func_95();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_89();
	
		if (Global_2738587.f_5234.f_756 == 0)
			func_89();
	
		switch (iLocal_33)
		{
			case 0:
				iLocal_33 = 1;
				break;
		
			case 1:
				if (func_12())
					iLocal_33 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_33 = 4;
				break;
		
			case 4:
				func_89();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3 Hash - 0xFC90FF14 ^0xFC90FF14
{
	ePedComponentType type;

	if (func_7(true))
	{
		type = Global_2738587.f_5234.f_755;
	
		if (type != _INVALID_PLAYER_INDEX())
		{
			if (func_4(type))
			{
				func_2(type);
				return false;
			}
		}
		else
		{
			func_2(type);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(ePedComponentType epctParam0) // Position - 0x120 Hash - 0xE43B1791 ^0xE43B1791
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		func_3(epctParam0);

	Global_2738587.f_5234.f_755 = _INVALID_PLAYER_INDEX();
	return;
}

void func_3(Player plParam0) // Position - 0x145 Hash - 0xDCA55D3A ^0xE9D93B03
{
	Player offset;

	offset = plParam0;
	MISC::CLEAR_BIT(&(Global_2647042.f_388), offset);
	MISC::CLEAR_BIT(&(Global_2647042.f_389), offset);
	MISC::CLEAR_BIT(&(Global_2647042.f_390), offset);
	MISC::CLEAR_BIT(&(Global_2647042.f_392), offset);
	MISC::CLEAR_BIT(&(Global_2647042.f_396), offset);
	MISC::CLEAR_BIT(&(Global_2647042.f_391), offset);
	return;
}

BOOL func_4(ePedComponentType epctParam0) // Position - 0x19F Hash - 0xBA02CCA1 ^0xBA02CCA1
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1B8 Hash - 0x3FF6E4CA ^0xE6B59972
{
	ePedComponentType type;

	type = player;

	if (type != PV_COMP_INVALID)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (type == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[type /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x218 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x233 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_9(plParam0, bParam1, 1);
}

int func_9(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x244 Hash - 0x1B60EF36 ^0x8C7444C0
{
	ePedComponentType type;

	if (!func_11(plParam0))
		return 0;

	if (!bParam1)
		if (func_10(plParam0, iParam2))
			return 0;

	type = Global_1886967[plParam0 /*609*/].f_10;

	if (type != _INVALID_PLAYER_INDEX() && Global_1886967[type /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(ePedComponentType epctParam0, int iParam1) // Position - 0x2A1 Hash - 0x97D24B3E ^0x1512F779
{
	if (func_11(epctParam0))
		if (Global_1886967[epctParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1886967[epctParam0 /*609*/].f_10 == epctParam0 && Global_1886967[epctParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_11(ePedComponentType epctParam0) // Position - 0x2F0 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_12() // Position - 0x312 Hash - 0x3039EBF5 ^0x3039EBF5
{
	Player player;

	if (func_7(true))
	{
		player = Global_2738587.f_5234.f_755;
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_13(player))
				return true;
	}

	return false;
}

BOOL func_13(Player plParam0) // Position - 0x345 Hash - 0x439256FB ^0xD53E93A8
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		func_87(plParam0, 432, true, false);
	
		if (func_86(plParam0))
			func_83(plParam0, func_84(func_85(PLAYER::PLAYER_ID())), true, false);
	
		if (func_81(plParam0))
			func_79(plParam0, true, true, false);
	
		func_73(plParam0, true, false);
		func_14(plParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x3A9 Hash - 0x587BC5A4 ^0x14DB3BC3
{
	ePedComponentType offset;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	offset = epctParam0;

	if (bParam1)
	{
		if (epctParam0 == Global_2672741)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2647042[offset]))
		{
			MISC::SET_BIT(&(Global_2647042.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2647042.f_375), offset);
			HUD::SET_BLIP_FLASHES(Global_2647042[offset], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2647042[offset], 250);
			func_15(epctParam0);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647042.f_375), offset);
			else
				Global_2647042.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			MISC::SET_BIT(&(Global_2647042.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2647042.f_375), offset);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647042.f_375), offset);
			else
				Global_2647042.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
	}

	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2647042.f_370), offset);
		MISC::CLEAR_BIT(&(Global_2647042.f_375), offset);
	
		if (HUD::DOES_BLIP_EXIST(Global_2647042[offset]))
		{
			func_15(epctParam0);
			HUD::SET_BLIP_FLASHES(Global_2647042[offset], false);
		}
	}

	return;
}

void func_15(ePedComponentType epctParam0) // Position - 0x4DE Hash - 0x9F4C4FD7 ^0xE785BC44
{
	ePedComponentType type;

	type = epctParam0;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647042[type]))
		{
			Global_2647042.f_1504[type] = func_16(epctParam0);
			HUD::SET_BLIP_PRIORITY(Global_2647042[type], Global_2647042.f_1504[type]);
		}
	}

	return;
}

int func_16(ePedComponentType epctParam0) // Position - 0x52C Hash - 0xCA5872DF ^0xDED482B9
{
	ePedComponentType type;
	eBlipSprite blipSprite;

	type = epctParam0;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647042[type]))
		{
			blipSprite = HUD::GET_BLIP_SPRITE(Global_2647042[type]);
		
			if (IS_BIT_SET(Global_2647042.f_386, type) || IS_BIT_SET(Global_2647042.f_385, type))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2647042.f_371, type) || IS_BIT_SET(Global_2647042.f_370, type) || IS_BIT_SET(Global_2647042.f_388, type))
			{
				return func_70(10);
			}
			else
			{
				switch (blipSprite)
				{
					case BLIP_PLAYERSTATE_CUSTODY:
					case BLIP_PLAYERSTATE_ARRESTED:
					case BLIP_PLAYERSTATE_KEYHOLDER:
						return func_70(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_70(11);
				
					case BLIP_PLAYERSTATE_DRIVING:
						if (PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672741))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_ON_MISSION:
						if (PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672741))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_PASSIVE:
					case BLIP_USINGMENU:
						if (func_69(Global_2672741, epctParam0, -2, 0))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_BOUNTY_HIT:
					case BLIP_BOUNTY_HIT_INSIDE:
						return func_70(10);
				
					case BLIP_INCAPACITATED:
						if (func_21(Global_2672741, epctParam0, true))
							return func_70(10);
						else
							return func_70(5);
						break;
				
					case BLIP_CONTRABAND:
					case BLIP_PACKAGE:
					case BLIP_SPORTS_CAR:
					case BLIP_SUPPLIES:
						return func_70(10);
				
					case BLIP_LEVEL_INSIDE:
						if (func_20(epctParam0) || func_19(epctParam0) || func_17(epctParam0))
							if (func_21(Global_2672741, epctParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2672741, epctParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_PLAYERSTATE_PARTNER:
					case BLIP_GANG_HIGHLIGHT:
					default:
						if (func_21(Global_2672741, epctParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_17(ePedComponentType epctParam0) // Position - 0x797 Hash - 0xAE0E4D65 ^0x935ABBE1
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657921[epctParam0 /*463*/].f_321.f_7 != PV_COMP_INVALID)
				return func_18(Global_2657921[epctParam0 /*463*/].f_321.f_7) == 16;

	return false;
}

int func_18(ePedComponentType epctParam0) // Position - 0x7DE Hash - 0xEE599357 ^0xEE599357
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
		case PV_COMP_ACCS:
		case PV_COMP_TASK:
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
		case PV_COMP_MAX:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	}

	return -1;
}

BOOL func_19(ePedComponentType epctParam0) // Position - 0xCB8 Hash - 0xDB07D527 ^0x9815AB86
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657921[epctParam0 /*463*/].f_321.f_7 != PV_COMP_INVALID)
				return func_18(Global_2657921[epctParam0 /*463*/].f_321.f_7) == 15;

	return false;
}

BOOL func_20(ePedComponentType epctParam0) // Position - 0xCFF Hash - 0xB5AF000F ^0x9424D0A9
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657921[epctParam0 /*463*/].f_321.f_7 != PV_COMP_INVALID)
				return func_18(Global_2657921[epctParam0 /*463*/].f_321.f_7) == 14;

	return false;
}

BOOL func_21(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0xD46 Hash - 0x220C3E49 ^0xB0D8533F
{
	if (func_24(epctParam0, -2, false, false, false) == func_24(epctParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(epctParam0, -2, false, false, false)) && func_22(func_24(epctParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(ePedComponentType epctParam0) // Position - 0xD9F Hash - 0xEECFBA41 ^0xEECFBA41
{
	if (epctParam0 == func_23(true) || epctParam0 == func_23(false))
		return 1;

	return 0;
}

ePedComponentType func_23(BOOL bParam0) // Position - 0xDC5 Hash - 0x40F793C7 ^0x40F793C7
{
	if (bParam0)
		return 118;

	return 116;
}

ePedComponentType func_24(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDDC Hash - 0x4D8BA35C ^0xC0F58F59
{
	int playerTeam;
	Ped ped;

	if (!func_11(epctParam0))
		return PV_COMP_BERD;

	if (func_67(epctParam0) && !bParam4)
		if (bParam2)
			return PV_COMP_HEAD;
		else
			return PV_COMP_BERD;

	if (iParam1 == -2)
	{
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	
		if (playerTeam > -1 && playerTeam < 4)
			if (Global_4718592.f_120437[playerTeam] != PV_COMP_INVALID)
				iParam1 = playerTeam;
	}

	if (func_67(PLAYER::PLAYER_ID()) || func_66() && func_65() && !IS_BIT_SET(Global_2738587.f_4697, 31) && !bParam4)
	{
		ped = func_64();
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			if (PED::IS_PED_A_PLAYER(ped))
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped) != -1)
					if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), false, true))
						if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
							if (Global_4718592.f_120437[iParam1] != PV_COMP_INVALID)
								return func_62(iParam1, epctParam0, false);
							else
								return func_41(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
						else
							return func_41(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
				if (Global_4718592.f_120437[iParam1] != PV_COMP_INVALID)
					return func_62(iParam1, epctParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
		if (Global_4718592.f_120437[iParam1] != PV_COMP_INVALID)
			return func_62(iParam1, epctParam0, false);
		else
			return func_41(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);

	return func_41(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

ePedComponentType func_25(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xFC7 Hash - 0x82D87D72 ^0x347F1E5B
{
	return func_26(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

ePedComponentType func_26(ePedComponentType epctParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xFDD Hash - 0xDEB35512 ^0x81DE0003
{
	int playerTeam;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
		return 3;

	playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);

	if (func_40() || func_39() && func_37() && Global_1679836.f_1)
		if (bParam1)
			return func_36(iParam2, playerTeam);
		else
			return func_36(playerTeam, playerTeam);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_30(playerTeam, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_15, 18))
				if (playerTeam == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(playerTeam, iParam2, true, 4);
			else
				return func_27(playerTeam, iParam2, false, 4);
	
		return 28;
	}

	if (playerTeam == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10DF Hash - 0x95C4482F ^0x8523EF25
{
	int num;

	num = func_29(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_126144, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x113;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_28(Hash hParam0, BOOL bParam1) // Position - 0x11F7 Hash - 0x50146D54 ^0xBED06FC5
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_183007 == 65)
			return true;

	if (hParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (hParam0 == Global_262145.f_9672[i])
			return true;
	}

	return false;
}

int func_29(int iParam0, int iParam1, int iParam2) // Position - 0x1248 Hash - 0x312DC906 ^0x312DC906
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_30(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1290 Hash - 0xB71E36C3 ^0xB71E36C3
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058104.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25548, num))
			{
				num2 = Global_1058104.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3267, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3267, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3267, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3267, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3267, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3267, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3267, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3267, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3267, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3267, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3267, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3267, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3267, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3267, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3267, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3267, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15DB Hash - 0x4A3D8974 ^0x4A3D8974
{
	BOOL num;
	ePedComponentType type;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	ePedComponentType i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_25549, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3318[iParam2 /*25763*/].f_25549, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		type = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(type, true, true) || func_33(type, 0) || IS_BIT_SET(Global_2657921[type /*463*/].f_199, 2) || func_32(type))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(type) != iParam2)
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(type);
		
			if (PED::IS_PED_INJURED(playerPed))
			{
			}
			else
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
			
				if (entityModel2 == joaat("MP_F_Freemode_01") || entityModel2 == joaat("MP_M_Freemode_01"))
					if (entityModel == joaat("MP_F_Freemode_01") || entityModel == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (entityModel2 != entityModel)
					return false;
			}
		}
	}

	return num;
}

BOOL func_32(ePedComponentType epctParam0) // Position - 0x1707 Hash - 0x5D66E846 ^0x96BDA51B
{
	return IS_BIT_SET(Global_1845263[epctParam0 /*877*/].f_36.f_18, 14);
}

BOOL func_33(ePedComponentType epctParam0, int iParam1) // Position - 0x171F Hash - 0x1A32E11A ^0x6AADE226
{
	BOOL flag;

	if (!func_11(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_34(-1, false) == 8;
	else
		flag = Global_1845263[epctParam0 /*877*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

int func_34(int iParam0, BOOL bParam1) // Position - 0x1778 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_35();

	if (Global_1575059[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574919[num2];
		bParam1;
	}

	return num;
}

int func_35() // Position - 0x17B9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574925;
}

int func_36(int iParam0, int iParam1) // Position - 0x17C5 Hash - 0x6C22E3A3 ^0x6C22E3A3
{
	if (iParam0 == -1)
		iParam0 = func_29(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_37() // Position - 0x1813 Hash - 0x6A169758 ^0x50CF02CD
{
	if (func_38())
		return true;

	return IS_BIT_SET(*Global_4718592.f_187226, 4);
}

BOOL func_38() // Position - 0x1832 Hash - 0x48B70C9A ^0xAE6239AF
{
	return IS_BIT_SET(*Global_4718592.f_176243, 12);
}

BOOL func_39() // Position - 0x1847 Hash - 0x89320B9B ^0x9F92C1F1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(*Global_4718592.f_187226, 0);

	return IS_BIT_SET(*Global_4718592.f_187226, 0) || Global_1919183 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_40() // Position - 0x188E Hash - 0x5FE2C075 ^0x4EC23B3E
{
	if (func_38() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	return false;
}

ePedComponentType func_41(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18AB Hash - 0xDD336EE ^0xFAF8F58B
{
	int playerTeam;
	BOOL flag;
	ePedComponentType type;
	int num;
	int num2;

	if (iParam2 == -2)
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	else
		playerTeam = iParam2;

	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148)
		flag = true;

	type = epctParam0;

	if (type > PV_COMP_INVALID)
		if (Global_1845263[type /*877*/] == 148)
			flag = true;

	if (!flag)
	{
		if (playerTeam != -1)
		{
			if (func_49())
			{
				num = func_45(epctParam0);
			
				if (!(num == -1))
					return func_43(num);
			}
		
			if (func_69(epctParam1, epctParam0, playerTeam, 0) && !IS_BIT_SET(Global_4718592.f_15, 18) || func_30(PLAYER::GET_PLAYER_TEAM(epctParam1), PLAYER::GET_PLAYER_TEAM(epctParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_15, 23) && !IS_BIT_SET(Global_4718592.f_15, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_15, 26))
				return func_42(true);
			else
				return func_26(epctParam1, true, playerTeam, bParam4);
		}
		else if (Global_1836669 || Global_1836659 || Global_1845263[epctParam0 /*877*/] == PV_COMP_HEAD)
		{
			if (epctParam0 == epctParam1 || Global_1836669 == true && Global_1836679 == false)
				return func_23(true);
			else
				return func_26(epctParam1, true, playerTeam, bParam4);
		}
	
		if (Global_1836663 && Global_1836147.f_14 == epctParam0)
			return 28;
	}

	num2 = func_45(epctParam0);

	if (!(num2 == -1))
		return func_43(num2);

	if (bParam3)
		return PV_COMP_HEAD;

	return PV_COMP_BERD;
}

ePedComponentType func_42(BOOL bParam0) // Position - 0x1A43 Hash - 0x7105E6CE ^0x7105E6CE
{
	if (bParam0)
		return 119;

	return 116;
}

ePedComponentType func_43(int iParam0) // Position - 0x1A5A Hash - 0xAD13E58 ^0xAD13E58
{
	int num;

	if (iParam0 > -1)
	{
		num = func_44(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

int func_44(int iParam0) // Position - 0x1B1D Hash - 0x249A63AE ^0x62068EF0
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_45(ePedComponentType epctParam0) // Position - 0x1B34 Hash - 0x3C3E5896 ^0xF1A341D7
{
	if (func_11(epctParam0))
		if (func_47(epctParam0, true))
			return Global_2648918.f_818.f_11[func_46(epctParam0)];

	return -1;
}

ePedComponentType func_46(Player plParam0) // Position - 0x1B64 Hash - 0xF661080E ^0xC5B0B69A
{
	if (func_11(plParam0))
		return Global_1886967[plParam0 /*609*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_47(Player plParam0, BOOL bParam1) // Position - 0x1B87 Hash - 0x457616A2 ^0x94603D69
{
	if (!func_11(plParam0))
		return false;

	if (!bParam1)
		if (func_48(plParam0))
			return false;

	return Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_48(ePedComponentType epctParam0) // Position - 0x1BC0 Hash - 0x9C5A1EA2 ^0x797F6215
{
	if (func_11(epctParam0))
		if (Global_1886967[epctParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[epctParam0 /*609*/].f_10 == epctParam0;

	return false;
}

BOOL func_49() // Position - 0x1BF5 Hash - 0xE9B4060F ^0x93C8E70F
{
	if (func_61() || func_60() || func_59() || func_58() || func_57() || func_55() || func_53() || func_50())
		return true;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_36, 1))
		return true;

	return false;
}

BOOL func_50() // Position - 0x1C67 Hash - 0x39484892 ^0x8568BD6D
{
	return func_51(*Global_4718592.f_126144);
}

BOOL func_51(int iParam0) // Position - 0x1C7D Hash - 0xA2399001 ^0xA2399001
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_52(i))
			return 1;
	}

	return 0;
}

int func_52(int iParam0) // Position - 0x1CB1 Hash - 0x62114499 ^0xEEBE7612
{
	if (iParam0 != -1)
		return Global_262145.f_34045[iParam0];

	return -1;
}

BOOL func_53() // Position - 0x1CD0 Hash - 0x39484892 ^0x8568BD6D
{
	return func_54(*Global_4718592.f_126144);
}

BOOL func_54(Hash hParam0) // Position - 0x1CE6 Hash - 0x47454778 ^0x47454778
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_32038[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_55() // Position - 0x1D1F Hash - 0x39484892 ^0x8568BD6D
{
	return func_56(*Global_4718592.f_126144);
}

BOOL func_56(Hash hParam0) // Position - 0x1D35 Hash - 0x9CB2DA77 ^0x9CB2DA77
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31332[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_57() // Position - 0x1D6F Hash - 0x4228A1C2 ^0x936D20CA
{
	return Global_2684312.f_24;
}

BOOL func_58() // Position - 0x1D7D Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_2684312.f_21;
}

BOOL func_59() // Position - 0x1D8B Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2684312.f_19;
}

BOOL func_60() // Position - 0x1D99 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2684312.f_18;
}

BOOL func_61() // Position - 0x1DA7 Hash - 0x4228A1C2 ^0x51912A9A
{
	return Global_2684312.f_17;
}

ePedComponentType func_62(int iParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x1DB5 Hash - 0x7A7139C7 ^0x6FB011B2
{
	ePedComponentType type;
	int num;
	int num2;

	num = Global_1058104.f_14[iParam0];

	if (func_49())
	{
		num2 = func_45(epctParam1);
	
		if (!(num2 == -1))
			return func_43(num2);
	}

	if (num > -1 && num < 17)
		if (IS_BIT_SET(Global_4718592.f_3318[iParam0 /*25763*/].f_8496[num], 24))
			return 18;

	if (iParam0 > -1 && epctParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_120437[iParam0] != PV_COMP_INVALID && Global_4718592.f_120437[iParam0] <= PV_COMP_LOWR)
			if (Global_4718592.f_120437[iParam0] == PV_COMP_HEAD)
				type = 15;
			else if (Global_4718592.f_120437[iParam0] == PV_COMP_BERD)
				type = 18;
			else if (Global_4718592.f_120437[iParam0] == PV_COMP_HAIR)
				type = 24;
			else if (Global_4718592.f_120437[iParam0] == PV_COMP_LOWR)
				if (IS_BIT_SET(Global_4718592.f_15, 29))
					type = 21;
				else
					type = PV_COMP_FEET;
			else
				type = Global_4718592.f_120437[iParam0];
		else
			type = func_26(epctParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_21, 13))
			type = func_63(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_24, 29))
			type = PV_COMP_HEAD;
	
		if (IS_BIT_SET(Global_4718592.f_15, 26) && !func_30(iParam0, PLAYER::GET_PLAYER_TEAM(epctParam1), 0, -1))
			type = func_42(true);
	}
	else
	{
		type = PV_COMP_BERD;
	}

	return type;
}

ePedComponentType func_63(int iParam0) // Position - 0x1F35 Hash - 0xD4A323B0 ^0xEF62924D
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_183183;
			break;
	
		case 1:
			num = *Global_4718592.f_183184;
			break;
	
		case 2:
			num = *Global_4718592.f_183185;
			break;
	
		case 3:
			num = *Global_4718592.f_183186;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

Ped func_64() // Position - 0x200A Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_2621446.f_2;
}

BOOL func_65() // Position - 0x2018 Hash - 0x63090B4B ^0x63090B4B
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_66() // Position - 0x2026 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

BOOL func_67(ePedComponentType epctParam0) // Position - 0x2040 Hash - 0x68897CDD ^0x62820466
{
	if (func_33(epctParam0, 0))
		return true;

	if (func_68())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657921[epctParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_68() // Position - 0x207F Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_69(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x208D Hash - 0xE351389E ^0xE4E4CA96
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && PLAYER::GET_PLAYER_TEAM(epctParam1) == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(epctParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && iParam2 == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
	}

	return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
}

int func_70(int iParam0) // Position - 0x2105 Hash - 0xEE57A83 ^0xEE57A83
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_72())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_71(iParam0);
}

int func_71(int iParam0) // Position - 0x213F Hash - 0x4803C157 ^0x4803C157
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_72() // Position - 0x21CA Hash - 0xEC3E159D ^0x743230FF
{
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_2672741);

	if (playerTeam > -1 && playerTeam < 4)
		return IS_BIT_SET(Global_4718592.f_3318[playerTeam /*25763*/].f_14182, 4);

	return false;
}

void func_73(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2201 Hash - 0xF8285D5F ^0xF8285D5F
{
	var unk;

	if (func_75(plParam0))
		return;

	func_74(&Global_2647042.f_723[plParam0], &Global_2647042.f_1086[plParam0], &(Global_2647042.f_393), bParam1, plParam0, bParam2, &unk);
	return;
}

BOOL func_74(int iParam0, var uParam1, int* piParam2, BOOL bParam3, Player plParam4, BOOL bParam5, var uParam6) // Position - 0x223F Hash - 0x92BE7E84 ^0x9DBC3FC7
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}

	if (!SCRIPT::IS_THREAD_ACTIVE(*iParam0) || *iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(piParam2, plParam4);
			}
		
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(piParam2, plParam4);
			}
		
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
				*uParam1 = -1;
		
			*iParam0 = -1;
		}
	
		return true;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !(*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
	}

	return false;
}

BOOL func_75(Player plParam0) // Position - 0x22FE Hash - 0x61696F05 ^0x8189946A
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return true;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())
		return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x2327 Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_78())
	{
		case 0:
			return func_77();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_77() // Position - 0x235A Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_78() // Position - 0x237E Hash - 0x21D64237 ^0x21D64237
{
	return Global_32828;
}

void func_79(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2389 Hash - 0xC63B4FAB ^0xC63B4FAB
{
	var unk;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2647042.f_822[plParam0], &Global_2647042.f_1185[plParam0], &(Global_2647042.f_367), bParam1, plParam0, bParam3, &unk))
		func_80(plParam0, bParam2);

	return;
}

void func_80(Player plParam0, BOOL bParam1) // Position - 0x23D1 Hash - 0x50FA4382 ^0x6FC377FC
{
	if (bParam1)
		MISC::SET_BIT(&(Global_2647042.f_368), plParam0);
	else
		MISC::CLEAR_BIT(&(Global_2647042.f_368), plParam0);

	if (HUD::DOES_BLIP_EXIST(Global_2647042[plParam0]))
		if (bParam1)
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647042[plParam0], false);
		else
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647042[plParam0], true);

	return;
}

BOOL func_81(Player plParam0) // Position - 0x242C Hash - 0x6CDFDF7D ^0x6CDFDF7D
{
	return func_82(&Global_2647042.f_822[plParam0]);
}

BOOL func_82(int iParam0) // Position - 0x2443 Hash - 0xC8D84D4E ^0x3F8F84D9
{
	if (SCRIPT::IS_THREAD_ACTIVE(*iParam0))
		if (!(*iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD()))
			return 0;

	return 1;
}

void func_83(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2466 Hash - 0xE038AB5B ^0xE038AB5B
{
	var unk;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2647042.f_624[plParam0], &Global_2647042.f_987[plParam0], &(Global_2647042.f_389), bParam2, plParam0, bParam3, &unk))
		if (bParam2)
			Global_2647042.f_459[plParam0] = iParam1;

	return;
}

int func_84(eHudColour ehcParam0) // Position - 0x24B8 Hash - 0x434C2D6E ^0x434C2D6E
{
	int r;
	int g;
	int b;
	var a;

	switch (ehcParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	HUD::GET_HUD_COLOUR(ehcParam0, &r, &g, &b, &a);
	return (r * 16777216) + (g * 65536) + (b * 256) + a;
}

int func_85(Player plParam0) // Position - 0x2720 Hash - 0xE0FEDB91 ^0xE0FEDB91
{
	int num;

	num = func_45(plParam0);

	if (num != -1)
		return func_43(num);

	return 1;
}

BOOL func_86(Player plParam0) // Position - 0x2740 Hash - 0x6CDFDF7D ^0x6CDFDF7D
{
	return func_82(&Global_2647042.f_624[plParam0]);
}

void func_87(Player plParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2757 Hash - 0xE038AB5B ^0xE038AB5B
{
	BOOL flag;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2647042.f_591[plParam0], &Global_2647042.f_954[plParam0], &(Global_2647042.f_388), bParam2, plParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2647042.f_426[plParam0] = ebsParam1;
	
		if (flag)
			func_88();
	}

	return;
}

void func_88() // Position - 0x27B2 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_2647042.f_1655 = 1;
	return;
}

void func_89() // Position - 0x27C2 Hash - 0x7A6AF6C7 ^0xF2F5E66F
{
	func_2(Global_2738587.f_5234.f_755);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x27DC Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575052 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_94())
		return true;

	if (Global_2698534)
		return true;

	if (func_93())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_91())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

BOOL func_91() // Position - 0x2860 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684312.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x286F Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_93() // Position - 0x2886 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2695951;
}

BOOL func_94() // Position - 0x2892 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684312.f_693;
}

void func_95() // Position - 0x28A1 Hash - 0x66E327B2 ^0x39BE3C9E
{
	SYSTEM::WAIT(0);
	return;
}

int func_96() // Position - 0x28AE Hash - 0x2982FD0F ^0xCE23D50
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

