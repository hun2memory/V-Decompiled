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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	BOOL bLocal_96 = 0;
	BOOL bLocal_97 = 0;
	BOOL bLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	BOOL bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num5;
	BOOL flag4;

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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	iLocal_122 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	num = 0;
	num2 = num;
	SYSTEM::SETTIMERA(0);
	Global_44870 = false;
	func_42();
	TEXT_LABEL_ASSIGN_STRING(&Global_44871, "CC_SUBSTR" /*~INPUT_CONTEXT~*/, 16);
	num3 = -1;
	num4 = -1;
	flag = false;
	flag2 = false;
	flag3 = false;
	num5 = -1;
	flag4 = Global_79248;

	while (true)
	{
		if (Global_79248)
			func_36();
		else
			func_34();
	
		func_27();
	
		if (Global_79248 != flag4)
		{
			func_26();
			func_42();
			num3 = -1;
			flag4 = Global_79248;
		
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				SYSTEM::WAIT(2000);
			}
		}
	
		if (Global_44876)
			if (Global_44878 > -1)
				if (!Global_44676[Global_44878 /*32*/].f_6)
					if (!_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(Global_44878, 1))
						Global_44878 = -1;
	
		if (func_20())
		{
			num3 = -1;
			func_26();
		}
	
		if (num3 > -1)
		{
			if (!Global_44876)
			{
				if (Global_44878 != num3)
				{
					if (func_19(Global_44878))
					{
						func_26();
					
						if (!Global_44676[num3 /*32*/].f_5 && Global_44676[num3 /*32*/])
						{
							if (!func_20())
							{
								if (!Global_44676[num3 /*32*/].f_7)
								{
									if (!Global_44676[num3 /*32*/].f_6)
									{
										if (!Global_44676[num3 /*32*/].f_12)
											func_18(Global_44676[num3 /*32*/].f_8, Global_44676[num3 /*32*/].f_3);
										else
											func_17(Global_44676[num3 /*32*/].f_8, Global_44676[num3 /*32*/].f_13, Global_44676[num3 /*32*/].f_3, Global_44676[num3 /*32*/].f_30);
									
										Global_44878 = num3;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_26();
			}
		}
		else
		{
			func_26();
		}
	
		switch (num)
		{
			case 0:
				num3 = func_16();
			
				if (PAD::IS_CONTROL_RELEASED(FRONTEND_CONTROL, INPUT_CONTEXT))
					flag3 = true;
			
				if (!func_20())
				{
					if (num3 > -1 && flag3)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT))
						{
							Global_44676[num3 /*32*/].f_4 = 1;
							Global_44676[num3 /*32*/].f_29 = 0;
							num5 = Global_44676[num3 /*32*/].f_1;
							num = 1;
							Global_44869 = false;
						}
					}
				}
				else
				{
					num3 = -1;
				}
			
				if (num4 != num3)
				{
					if (num3 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
							{
								if (PAD::IS_CONTROL_ENABLED(PLAYER_CONTROL, INPUT_VEH_ROOF))
								{
									flag2 = true;
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
								}
							
								if (PAD::IS_CONTROL_ENABLED(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT))
								{
									flag = true;
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
								}
							}
						}
					}
					else
					{
						if (flag2)
						{
							PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
							flag2 = false;
						}
					
						if (flag)
						{
							PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
							flag = false;
						}
					}
				
					num4 = num3;
				}
				break;
		
			case 1:
				if (num3 < 0 || func_15() == 0)
				{
					num = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_44676[num3 /*32*/].f_7 = 1;
						num = 0;
					}
					else if (func_14(num3))
					{
						num = 2;
					}
				
					if (!(num5 == Global_44676[num3 /*32*/].f_1))
						num = 0;
				
					if (Global_44676[num3 /*32*/].f_7 || Global_44676[num3 /*32*/] == false)
						num = 0;
				}
				break;
		
			case 2:
				if (Global_44869)
					func_26();
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT))
					if (num3 > -1)
						Global_44676[num3 /*32*/].f_29 = 0;
			
				if (Global_44870)
				{
					Global_44870 = false;
					num = 0;
				}
				else if (num3 > -1)
				{
					if (!(Global_44676[num3 /*32*/].f_4 || Global_44676[num3 /*32*/].f_7))
					{
						Global_44870 = false;
						num3 = -1;
					}
				}
			
				if (num3 > -1)
					if (Global_44676[num3 /*32*/].f_7 || Global_44676[num3 /*32*/] == false)
						num3 = -1;
			
				if (num3 == -1)
				{
					num = 0;
					flag3 = false;
				}
				break;
		}
	
		if (num3 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_TALK, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_SPECIAL_TWO, true);
		}
	
		if (num != num2)
		{
			num2 = num;
			SYSTEM::SETTIMERA(0);
			flag3 = false;
		}
	
		func_13();
		func_11(&num3);
		Global_44875 = false;
		Global_44876 = false;
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x457 Hash - 0x3BDACDB5 ^0x3A6D3CF3
{
	BOOL beep;

	if (!bLocal_96)
		return;

	beep = true;

	if (iLocal_119 == 1)
		beep = false;

	if (bLocal_97)
	{
		if (bLocal_98)
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
	
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&uLocal_99);
	
		if (bLocal_98)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uLocal_103);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uLocal_103);
		}
	
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, beep, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&uLocal_99);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, beep, 50);
	}

	switch (iLocal_119)
	{
		case 0:
			break;
	
		case 1:
			func_10(false);
			break;
	
		case 2:
			func_2(false);
			break;
	}

	return;
}

void func_2(BOOL bParam0) // Position - 0x4F4 Hash - 0x56594116 ^0x212F2C9A
{
	char* audioRef;

	audioRef = "GTAO_Boss_Goons_FM_Soundset";

	if (func_4(true))
		audioRef = "GTAO_Biker_FM_Soundset";

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", audioRef, false);

	return;
}

BOOL func_3() // Position - 0x528 Hash - 0xD30DED2E ^0xF6A4A60A
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

BOOL func_4(BOOL bParam0) // Position - 0x53E Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_5(Player plParam0, BOOL bParam1) // Position - 0x550 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_6(plParam0, bParam1, 1);
}

int func_6(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x561 Hash - 0x1B60EF36 ^0x8C7444C0
{
	Player player;

	if (!func_9(plParam0))
		return 0;

	if (!bParam1)
		if (func_8(plParam0, iParam2))
			return 0;

	player = Global_1886967[plParam0 /*609*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1886967[player /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x5BE Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_8(Player plParam0, int iParam1) // Position - 0x5C7 Hash - 0x97D24B3E ^0x1512F779
{
	if (func_9(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1886967[plParam0 /*609*/].f_10 == plParam0 && Global_1886967[plParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_9(Player plParam0) // Position - 0x616 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_10(BOOL bParam0) // Position - 0x638 Hash - 0xA1578353 ^0x6C756CA2
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);

	return;
}

void func_11(var uParam0) // Position - 0x665 Hash - 0xCBAC1144 ^0x1D7C99A2
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44676[i /*32*/] && Global_44676[i /*32*/].f_4)
		{
			if (Global_44676[i /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_44676[i /*32*/].f_31))
				{
					if (*uParam0 > -1)
						func_12();
				
					Global_44676[i /*32*/] = false;
					Global_44676[i /*32*/].f_31 = 0;
					Global_44676[i /*32*/] = false;
					Global_44676[i /*32*/].f_4 = 0;
					Global_44676[i /*32*/].f_5 = 0;
					Global_44676[i /*32*/].f_2 = 0;
					Global_44676[i /*32*/].f_7 = 0;
					Global_44676[i /*32*/].f_6 = 0;
					Global_44676[i /*32*/].f_3 = 0;
					*uParam0 = -1;
				}
			}
		}
	}

	return;
}

void func_12() // Position - 0x71D Hash - 0x743CFC3B ^0x743CFC3B
{
	if (Global_44878 != -1 || bLocal_96)
	{
		bLocal_96 = false;
		Global_44878 = -1;
	}

	return;
}

void func_13() // Position - 0x73C Hash - 0x2A8B8764 ^0xE2DEB9C7
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44676[i /*32*/].f_7)
		{
			if (i == Global_44878)
				func_26();
		
			Global_44676[i /*32*/].f_31 = 0;
			Global_44676[i /*32*/] = false;
			Global_44676[i /*32*/].f_4 = 0;
			Global_44676[i /*32*/].f_5 = 0;
			Global_44676[i /*32*/].f_2 = 0;
			Global_44676[i /*32*/].f_7 = 0;
			Global_44676[i /*32*/].f_6 = 0;
			Global_44676[i /*32*/].f_1 = -1;
			Global_44676[i /*32*/].f_3 = 0;
		}
	}

	return;
}

BOOL func_14(int iParam0) // Position - 0x7C9 Hash - 0x99564475 ^0xD3D3E89B
{
	if (iParam0 < 0)
		return false;

	if (Global_44676[iParam0 /*32*/].f_5)
		return true;

	return false;
}

int func_15() // Position - 0x7EC Hash - 0x45F83579 ^0x5870F892
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44676[i /*32*/] == true)
			if (Global_44676[i /*32*/].f_4 == false)
				num = num + 1;
	}

	if (num == 0)
		func_26();

	return num;
}

int func_16() // Position - 0x836 Hash - 0x27D64532 ^0x8CF11D20
{
	int i;
	int num;
	int num2;

	i = 0;
	num = -1;
	num2 = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44676[i /*32*/])
		{
			if (Global_44676[i /*32*/].f_2 > num)
			{
				num2 = i;
				num = Global_44676[i /*32*/].f_2;
			}
		}
	}

	return num2;
}

void func_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, BOOL bParam21) // Position - 0x882 Hash - 0x2CD5E74E ^0x2CD5E74E
{
	uLocal_99 = { uParam0 };
	uLocal_103 = { uParam4 };
	bLocal_96 = true;
	bLocal_97 = true;
	iLocal_119 = iParam20;
	bLocal_98 = bParam21;
	return;
}

void func_18(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x8AA Hash - 0x99DCC224 ^0x99DCC224
{
	uLocal_99 = { uParam0 };
	bLocal_96 = true;
	bLocal_97 = false;
	iLocal_119 = iParam4;
	return;
}

BOOL func_19(int iParam0) // Position - 0x8C4 Hash - 0xA88904C0 ^0xE57ABA32
{
	int i;

	if (Global_98301 && Global_98300)
		return false;

	if (iParam0 > 0)
		if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(iParam0, 1) || bLocal_96)
			return true;

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME())
	{
		for (i = 0; i < 6; i = i + 1)
		{
			if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(i, 1))
				return true;
		}
	
		return false;
	}

	return true;
}

BOOL func_20() // Position - 0x932 Hash - 0xBA493EFF ^0x17E68CAD
{
	if (Global_76369)
		return true;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return true;

	if (func_23(0))
		return true;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return true;

	if (Global_44875)
		return true;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
		return true;

	if (func_22(true))
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return true;

	if (func_21(8, -1))
		return true;

	return false;
}

BOOL func_21(int iParam0, int iParam1) // Position - 0x9A9 Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668317.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668317.f_1048, iParam0);
}

BOOL func_22(BOOL bParam0) // Position - 0x9E1 Hash - 0x1F743529 ^0xDFDFCA73
{
	if (bParam0)
		return Global_23572.f_4 && Global_23572.f_104 == 4;

	return Global_23572.f_4;
}

BOOL func_23(int iParam0) // Position - 0xA0A Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20813.f_1 > 3)
			if (IS_BIT_SET(Global_8683, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20813.f_1 > 3)
		return true;

	return false;
}

BOOL _CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(int iParam0, int iParam1) // Position - 0xA61 Hash - 0xE0A68A62 ^0x97FB55A0
{
	int num;
	BOOL flag;

	num = func_25(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_44676[num /*32*/].f_6)
		return false;

	flag = false;

	if (!Global_44676[num /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
	
		if (Global_44676[num /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44676[num /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44676[num /*32*/].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

int func_25(int iParam0) // Position - 0xB16 Hash - 0x7F0E29AD ^0x84091235
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44676[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_26() // Position - 0xB51 Hash - 0x30B76EC2 ^0x30B76EC2
{
	func_12();
	Global_44878 = -1;
	return;
}

void func_27() // Position - 0xB61 Hash - 0x3A8383CF ^0x150571B6
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_33())
	{
		if (func_32(false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2684312.f_785.f_12)))
			{
				func_31();
				func_28(6, false, 0);
			}
		}
	}

	return;
}

int func_28(int iParam0, BOOL bParam1, int iParam2) // Position - 0xBA0 Hash - 0x31C42CF6 ^0x31C42CF6
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76482 = iParam0;
	flag = iParam2 == 1;
	flag2 = iParam2 == 2;
	flag3 = iParam2 == 3;

	switch (Global_76482)
	{
		case 3:
			Global_76480 = 0;
			break;
	
		case 4:
			Global_76480 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return 0;
	}

	if (Global_79248 && func_30())
		return 0;

	if (!Global_79248 && func_29())
		return 0;

	if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}

	if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}

	if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}

	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
	
		if (bParam1)
			return 0;
	}

	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}

	SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

BOOL func_29() // Position - 0xDA7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76370;
}

BOOL func_30() // Position - 0xDB3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1928228;
}

void func_31() // Position - 0xDBF Hash - 0x2100AD75 ^0xCDB47DD2
{
	Global_2684312.f_785.f_28 = 0;
	return;
}

BOOL func_32(BOOL bParam0) // Position - 0xDD1 Hash - 0x9F6065F5 ^0x8877B3CA
{
	if (bParam0)
		return Global_2684312.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684312.f_785.f_31;

	return Global_2684312.f_785.f_28;
}

BOOL func_33() // Position - 0xE0D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76369;
}

void func_34() // Position - 0xE19 Hash - 0x6D4E3E19 ^0x6D4E3E19
{
	BOOL flag;
	int i;

	flag = false;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_61212[i] < 0)
		{
			Global_61212[i] = 0;
			flag = true;
		}
	}

	if (flag)
	{
		func_35(0);
		func_35(1);
		func_35(2);
	}

	return;
}

void func_35(int iParam0) // Position - 0xE63 Hash - 0xD2EB197 ^0x9FF73396
{
	int value;

	value = Global_61212[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_36() // Position - 0xEBD Hash - 0x6753AD1E ^0x7563946C
{
	var unk;
	var unk15;
	int displaynamesFromHandles;

	if (Global_1835458 != -1)
	{
		unk = 1;
		unk[0 /*13*/] = Global_1835459[0];
		unk[0 /*13*/].f_1 = Global_1835459[1];
		unk[0 /*13*/].f_2 = Global_1835459[2];
		unk[0 /*13*/].f_3 = Global_1835459[3];
		unk[0 /*13*/].f_4 = Global_1835459[4];
		unk[0 /*13*/].f_5 = Global_1835459[5];
		unk[0 /*13*/].f_6 = Global_1835459[6];
		unk[0 /*13*/].f_7 = Global_1835459[7];
		unk[0 /*13*/].f_8 = Global_1835459[8];
		unk[0 /*13*/].f_9 = Global_1835459[9];
		unk[0 /*13*/].f_10 = Global_1835459[10];
		unk[0 /*13*/].f_11 = Global_1835459[11];
		unk[0 /*13*/].f_12 = Global_1835459[12];
	
		if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
		{
			if (!bLocal_120)
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&unk[0 /*13*/]))
					bLocal_120 = true;
		
			if (bLocal_120)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
						TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/], NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&unk[0 /*13*/]), 24);
				
					func_39();
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
			{
				unk15 = 1;
			
				switch (iLocal_121)
				{
					case 0:
						iLocal_122 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 1);
					
						if (iLocal_122 >= 0)
							iLocal_121 = iLocal_121 + 1;
						break;
				
					case 1:
						displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(iLocal_122, &unk15, 1);
					
						switch (displaynamesFromHandles)
						{
							case -1:
								func_39();
								break;
						
							case 0:
								TEXT_LABEL_COPY(&Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/], { unk15[0 /*16*/] }, 6);
								func_39();
								break;
						
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_39();
			}
		}
		else
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
				TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/], NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&unk[0 /*13*/]), 24);
		
			func_39();
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x10D7 Hash - 0x4709BB10 ^0xDD69BC9A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x10E7 Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_39() // Position - 0x10FD Hash - 0x2031203A ^0x2031203A
{
	Global_1835458 = -1;
	bLocal_120 = false;
	iLocal_122 = -1;
	iLocal_121 = 0;
	return;
}

int func_40() // Position - 0x1113 Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

BOOL IS_XBOX_PLATFORM() // Position - 0x1120 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_42() // Position - 0x1136 Hash - 0x876C8D90 ^0x876C8D90
{
	int i;

	Global_44869 = false;
	Global_44875 = false;
	Global_44876 = false;
	Global_44877 = 1;
	Global_44878 = -1;
	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		Global_44676[i /*32*/] = false;
	}

	return;
}

