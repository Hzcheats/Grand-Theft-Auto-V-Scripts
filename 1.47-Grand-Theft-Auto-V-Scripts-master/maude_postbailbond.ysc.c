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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (unk_0x9EC5BDC006623C42(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(iLocal_42))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0xE3903F59E2F22150();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		func_48(1, &uLocal_48);
	}
	while (true)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (!func_51(iLocal_42))
			{
				func_55();
			}
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_42, true) };
			if (vdist2(vVar0, vVar1) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(vVar1, vVar0, 18000, 1101004800);
					if (func_25(&iLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar1, vVar0);
						unk_0x0483D0035D6E46FD(func_11());
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_42, &iLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_42, 1805844857) && !unk_0xD82CBCB7E04DDA8A(iLocal_42))
					{
						if (!unk_0x1CE8F0A08E65CA6A(iLocal_42, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		wait(0);
	}
}

void func_1()
{
	if (func_51(iLocal_42))
	{
		func_2(&iLocal_42);
		unk_0xECCD4FDA45197F97(iLocal_42, unk_0x33CD235DF1E6A94E(), 10000f, -1, 0, 0);
		unk_0x897EF720254BBEA3(iLocal_42, true);
	}
}

void func_2(int iParam0)
{
	if (func_51(*iParam0))
	{
		unk_0x33F6BE48E356DA27(*iParam0, 2, false);
		unk_0x33F6BE48E356DA27(*iParam0, 64, false);
		unk_0x33F6BE48E356DA27(*iParam0, 128, false);
		unk_0x33F6BE48E356DA27(*iParam0, 8, false);
		unk_0x33F6BE48E356DA27(*iParam0, 1, false);
		unk_0x33F6BE48E356DA27(*iParam0, 32, false);
		unk_0x28F648743D7DE312(*iParam0, 5, false);
		unk_0x28F648743D7DE312(*iParam0, 17, true);
		unk_0x5FEE418CE11E6DDE(*iParam0, 118, true);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)
{
	if (func_51(iParam0))
	{
		if (unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 1 || unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*iParam0))
	{
		if (unk_0x1CE8F0A08E65CA6A(*iParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x3AF2B3B68DD52355(*iParam0) || unk_0xF7C907E9E8E2BB22(*iParam0))
			{
				unk_0x0483D0035D6E46FD(func_11());
				if (unk_0xE9CCF312047EBEE0(func_11()))
				{
					*iParam2 = unk_0x38A6890195DD00D1(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x6359F1F7F5174D4A(*iParam2, false);
					unk_0x34C803C2BC1CAFB2(*iParam2, false);
					if (func_4(*iParam0, 1785177548))
					{
						unk_0x0C6BB9365C4A5F6E(*iParam0, -1000f, 1);
					}
					unk_0x08798CBF817BA887(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x880B00F3FAE4C022(*iParam0, 0, 0);
					if (func_8(*iParam1))
					{
						if (unk_0x1CE8F0A08E65CA6A(*iParam1, func_10(), func_7(), 3))
						{
							unk_0x0C6BB9365C4A5F6E(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xCF73ED7F74F29138(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam1)
{
	if (func_51(iLocal_42))
	{
		if (!unk_0x07292B2EDB334B14(iLocal_42))
		{
			if (vdist2(vParam1, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*iParam0))
	{
		bVar0 = unk_0x51EF94B008501DA8(*iParam0);
		if (bVar0)
		{
			unk_0x9FD099B0593CD91D(*iParam0, false);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x9FD099B0593CD91D(*iParam0, true);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_16(bool bParam0)
{
	struct<6> Var0;
	char* sVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		sVar1 = func_21();
		if (unk_0xCE3CFF625BEBAA04(&Var0, sVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_14732 = 0;
	func_18();
}

void func_18()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_19()
{
	Global_14732 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24980, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_23()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0x765F6FEEFF39224F(iLocal_41))
	{
		unk_0xF70578F5CD9822CB(iLocal_41, false);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_40))
	{
		unk_0xF70578F5CD9822CB(iLocal_40, false);
	}
}

int func_25(int iParam0, bool bParam1)
{
	if (func_51(*iParam0))
	{
		if ((unk_0x45AD2119A5B580CD(*iParam0) || unk_0x1235B764F6C5379B(*iParam0)) || unk_0x1145040FA5049E0E(*iParam0))
		{
			return 1;
		}
		if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), *iParam0))
			{
				return 1;
			}
			if (unk_0x765F6FEEFF39224F(iLocal_39))
			{
				if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_39))
				{
					return 1;
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_40))
			{
				if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_40))
				{
					return 1;
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_41))
			{
				if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_41))
				{
					return 1;
				}
			}
		}
		if (unk_0x5A55F54738BBF615(*iParam0, 60))
		{
			return 1;
		}
		if (unk_0x3AF2B3B68DD52355(*iParam0))
		{
			if (unk_0x335C0645074963FE(*iParam0, unk_0x33CD235DF1E6A94E(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x5A55F54738BBF615(*iParam0, 50))
		{
			return 1;
		}
		if (func_33(*iParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0xCA12322D8FBBDBEE(-1, unk_0xFBB1F99A825CAB09(*iParam0, true), 15f))
		{
			return 1;
		}
		if (unk_0x5A55F54738BBF615(*iParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0x33CD235DF1E6A94E()) && func_8(iParam0))
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x34DB0AC28A1FDE20(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x523F36AF20D6C821(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(vParam1 - unk_0xFBB1F99A825CAB09(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xB969B7304D29679F(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 5f, 0f) - unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_31(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x33CD235DF1E6A94E()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
		{
			if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x33CD235DF1E6A94E(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xE3903F59E2F22150() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_8(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0x36FB861F8CCF0EA4(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x819B6E76423AE494(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x068481DAF84B9654(iVar3))
	{
		func_8(iVar3);
		if (unk_0x22B02EC53152632C(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0x05968F4D606DF9DF(vParam1, unk_0xFBB1F99A825CAB09(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0xE3903F59E2F22150();
			return 1;
		}
		return 0;
	}
	if (unk_0x680558231C80291D(iVar3))
	{
		func_8(iVar3);
		if (unk_0xF0D230FB550CD6EB(iParam2, 0))
		{
			if (unk_0xEAE1362B9F5C7B18(iVar3) == unk_0xF2C96862595654B4(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0x05968F4D606DF9DF(vParam1, unk_0xFBB1F99A825CAB09(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xFBB1F99A825CAB09(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xFBB1F99A825CAB09(iParam0, true);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(unk_0xFBB1F99A825CAB09(iParam1, true) - unk_0xFBB1F99A825CAB09(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xB969B7304D29679F(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 5f, 0f) - unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(vector3 vParam0, vector3 vParam1, int iParam2, float fParam3)
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (vdist2(vParam1, vParam0) < (fParam3 * fParam3))
			{
				if (unk_0xE3903F59E2F22150() - iLocal_43) > (iParam2 + unk_0x9EC3B269A34A2BEE(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = unk_0xE3903F59E2F22150();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0xE3903F59E2F22150();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x8950ED5730F62EE8(&Global_14732, 0);
	Global_15869 = iParam3;
	StringCopy(&Global_15856, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

char* func_46()
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24980, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x990A34F9DA8E506D(iParam2, 0);
			}
			else
			{
				unk_0x990A34F9DA8E506D(iParam2, 1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC36B7971576CC42F(iParam2, 0);
			}
			else
			{
				unk_0xC36B7971576CC42F(iParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x0335D8135051EA56(vVar0, vVar1, 0, 1, 1, 1);
		unk_0x798B28A324675954(vVar0, vVar1);
		unk_0x5856B9BF2B4E98C4(vVar0, vVar1, false, 1);
		unk_0x7F327D8D184FAB7F(vVar0, vVar1, 0);
		unk_0x496BE3DBA113D228(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
		unk_0xCE04CE961AF41AB9(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		unk_0xF1CFA0046BB67893(*uParam1, 0);
		unk_0xBD881F1B7ECAD975();
		unk_0x5856B9BF2B4E98C4(vVar0, vVar1, true, 1);
		unk_0xF699E61158861D53(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, true);
	}
}

int func_49()
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24980, 3))
	{
		return 4;
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 2))
	{
		return 4;
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 1))
	{
		return 4;
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_24980, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	vector3 vVar0;
	
	if (func_51(iLocal_42))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iLocal_42))
		{
			unk_0x0D21E1FDE062ED99(iLocal_42, true, 0);
		}
		unk_0x4A852F02088ECC9D(iLocal_42, true);
		unk_0xF8E07C228A90E953(iLocal_42, 0);
		unk_0xF0BE7CB40DE62A2F(iLocal_42, false);
		unk_0x0648A75D3F60E864(iLocal_42, 1862763509);
		unk_0xDD2AFE9A8ECF5E35(iLocal_42, 0);
		unk_0x4280426804263490(iLocal_42, 0);
		unk_0x5FEE418CE11E6DDE(iLocal_42, 118, false);
		vVar0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x8FCF53827AC6136E(vVar0, 10f, -380698483, 0))
		{
			iLocal_40 = unk_0x68F833BFE3A28FEA(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_40))
			{
				unk_0xBEADAF07D2339505(iLocal_40, 2727.4f, 4145.56f, 43.68f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(iLocal_40, -92.17f);
				unk_0xF70578F5CD9822CB(iLocal_40, true);
			}
		}
		if (unk_0x8FCF53827AC6136E(vVar0, 10f, 1385417869, 0))
		{
			iLocal_41 = unk_0x68F833BFE3A28FEA(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_41))
			{
				if (!unk_0x5A04E3BD0B5E7E49(iLocal_41))
				{
					unk_0x0D21E1FDE062ED99(iLocal_41, true, 0);
				}
				unk_0xBEADAF07D2339505(iLocal_41, 2727.686f, 4145.715f, 44.08f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(iLocal_41, 71f);
				unk_0xF70578F5CD9822CB(iLocal_41, true);
			}
		}
		if (unk_0x8FCF53827AC6136E(vVar0, 10f, -741944541, 0))
		{
			iLocal_39 = unk_0x68F833BFE3A28FEA(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_39))
			{
				if (!unk_0x5A04E3BD0B5E7E49(iLocal_39))
				{
					unk_0x0D21E1FDE062ED99(iLocal_39, true, 0);
				}
				unk_0xBEADAF07D2339505(iLocal_39, 2728.35f, 4145.59f, 43.3f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(iLocal_39, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x541D5C57194E73C4(uVar2[iVar1]) == func_53(62))
				{
					iLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_54(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

void func_55()
{
	func_48(0, &uLocal_48);
	if (func_8(iLocal_41))
	{
		unk_0xF70578F5CD9822CB(iLocal_41, false);
	}
	func_57(&iLocal_41, 0);
	if (func_8(iLocal_40))
	{
		unk_0xF70578F5CD9822CB(iLocal_40, false);
	}
	func_57(&iLocal_40, 0);
	if (func_8(iLocal_39))
	{
		unk_0xF70578F5CD9822CB(iLocal_39, false);
		if (unk_0x1CE8F0A08E65CA6A(iLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0xF434F252DF55D532(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x0C6BB9365C4A5F6E(iLocal_39, -1000f, 1);
		}
		else if (unk_0x1CE8F0A08E65CA6A(iLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0xF434F252DF55D532(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x0C6BB9365C4A5F6E(iLocal_39, -1000f, 1);
		}
	}
	func_57(&iLocal_39, 0);
	if (func_51(iLocal_42))
	{
		unk_0x897EF720254BBEA3(iLocal_42, true);
		unk_0x5FEE418CE11E6DDE(iLocal_42, 118, true);
	}
	func_56(&iLocal_42, 1, 0, 1);
	unk_0xFF2DEA68E2D3602E(func_11());
	unk_0x5894DC159447E10A();
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x05AB47B112CF24AE(*iParam0);
			}
			unk_0x897EF720254BBEA3(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x4A852F02088ECC9D(*iParam0, false);
			}
		}
		unk_0x1F45B4626AC4A4C0(iParam0);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0x47904E0914F5B5C6(*iParam0))
		{
			unk_0x35F11A916FDFCF32(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x26ABAE1D971CEACD(iParam0);
		}
		else
		{
			unk_0x1FA33938BF46EAE3(*iParam0);
		}
	}
}

