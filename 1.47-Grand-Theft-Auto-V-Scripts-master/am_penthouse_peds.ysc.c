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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vLocal_22 = { 0f, 0f, NaNf };
	struct<13> Local_23[50];
	int iLocal_24 = 0;
	var uLocal_25 = 0;
#endregion

void __EntryFunction__()
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	Global_1316809 = 1;
	func_54();
	if (unk_0xB331FCEB94EB05C8())
	{
		while (vLocal_22.x == 0)
		{
			if (unk_0x06C1EBC003C18F1F())
			{
				vLocal_22.y = func_53(iScriptParam_24);
				vLocal_22.z = 0;
				vLocal_22.x = 1;
			}
			else
			{
				wait(0);
			}
		}
	}
	func_48(1);
	while (true)
	{
		func_47();
		if ((!unk_0xB331FCEB94EB05C8() || func_35()) || Global_1316809 == 0)
		{
			func_32();
		}
		func_3();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	float fVar1;
	
	if (iLocal_21 == 0)
	{
		if (unk_0xEABEE41AE38D3281("Party_Walla_Stream", "DLC_Vinewood_Casino_Penthouse_Party_Sounds"))
		{
			iLocal_21++;
		}
	}
	if (iLocal_21 == 1)
	{
		iVar0 = func_2();
		if (iVar0 > -1)
		{
			if (unk_0x765F6FEEFF39224F(Local_23[iVar0 /*13*/]) && !unk_0xD62C4419A41F106A(Local_23[iVar0 /*13*/], 0))
			{
				unk_0xC119E2A4AFB3A74D(Local_23[iVar0 /*13*/]);
				iLocal_21++;
			}
		}
	}
	if (iLocal_21 == 2)
	{
		if (unk_0xAC9D53CBBA71E4BE())
		{
			fVar1 = (to_float(vLocal_22.y) / 5f);
			unk_0xF38179330F35ACB0("Crowd_Size", fVar1);
			iLocal_21++;
		}
	}
}

int func_2()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 50)
	{
		if (Local_23[iVar3 /*13*/].f_12 <= vLocal_22.y)
		{
			fVar1 = vdist(Local_23[iVar3 /*13*/].f_6, 945f, 15f, 117f);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_30(&(Local_23[iVar0 /*13*/])))
		{
			if (!unk_0x765F6FEEFF39224F(Local_23[iVar0 /*13*/]))
			{
				func_11(&(Local_23[iVar0 /*13*/]));
			}
			else if (unk_0xD62C4419A41F106A(Local_23[iVar0 /*13*/], 0))
			{
				func_10(&(Local_23[iVar0 /*13*/]));
			}
			func_4(&(Local_23[iVar0 /*13*/]));
		}
		iVar0++;
	}
	iLocal_20 = 0;
}

void func_4(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(*uParam0) && !unk_0xD62C4419A41F106A(*uParam0, 0))
	{
		func_5(uParam0);
	}
}

void func_5(var uParam0)
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5[4];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	sVar0 = func_9(uParam0);
	sVar1 = func_8(uParam0);
	fVar2 = unk_0x9562E33C057F7589(0f, 0.7f);
	iVar3 = unk_0xD76D6BCC14B95CE1(*uParam0, 242628503);
	if (iVar3 != 0 && iVar3 != 1)
	{
		if (unk_0xE9CCF312047EBEE0(sVar0))
		{
			unk_0x99414FB2D30425C1(&uVar4);
			if (!func_7(uParam0))
			{
				if (func_6(uParam0))
				{
					unk_0x548FEB9052C36FFD(0, sVar0, sVar1, uParam0->f_6, 0f, 0f, uParam0->f_9, 8f, -8f, -1, 790529, fVar2, 2, 3);
				}
				else
				{
					unk_0x108754262311D34F(0, sVar0, sVar1, 8f, -8f, -1, 1, fVar2, 0, 0, 0);
				}
			}
			else
			{
				iVar5[0] = 0;
				iVar5[1] = 1;
				iVar5[2] = 2;
				iVar5[3] = 3;
				iVar8 = 0;
				while (iVar8 < 10)
				{
					iVar6 = unk_0x9EC3B269A34A2BEE(0, 4);
					iVar7 = unk_0x9EC3B269A34A2BEE(0, 4);
					iVar9 = iVar5[iVar6];
					iVar5[iVar6] = iVar5[iVar7];
					iVar5[iVar7] = iVar9;
					iVar8++;
				}
				iVar8 = 0;
				while (iVar8 < 4)
				{
					switch (iVar5[iVar8])
					{
						case 0:
							unk_0x108754262311D34F(0, sVar0, "IDLE_A", 8f, -8f, -1, 0, 0f, 0, 0, 0);
							break;
						
						case 1:
							unk_0x108754262311D34F(0, sVar0, "IDLE_B", 8f, -8f, -1, 0, 0f, 0, 0, 0);
							break;
						
						case 2:
							unk_0x108754262311D34F(0, sVar0, "IDLE_C", 8f, -8f, -1, 0, 0f, 0, 0, 0);
							break;
						
						case 3:
							unk_0x108754262311D34F(0, sVar0, "IDLE_D", 8f, -8f, -1, 0, 0f, 0, 0, 0);
							break;
					}
					iVar8++;
				}
			}
			unk_0x656E3BB78935070E(uVar4, 1);
			unk_0xC734F59A13D39AEF(uVar4);
			unk_0x13A2D602CD10CBAC(*uParam0, uVar4);
			unk_0xA7A57E7757ED035E(&uVar4);
		}
	}
}

int func_6(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_7(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
		case 2:
			return 0;
		
		default:
	}
	return 1;
}

char* func_8(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (uParam0->f_10)
		{
			case 0:
				return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
			
			case 1:
				return "amb_world_human_partying_female_partying_beer_base";
			
			case 2:
				return "amb_prop_human_seat_chair_drink_beer_female_idle_a";
			
			default:
		}
	}
	else
	{
		switch (uParam0->f_10)
		{
			case 0:
				return "amb_world_human_hang_out_street_male_c_base";
			
			case 1:
				return "amb_world_human_partying_male_partying_beer_base";
			
			case 2:
				return "amb_prop_human_seat_chair_drink_beer_male_idle_a";
			}
		
		default:
	}
	return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
}

char* func_9(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 1:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 2:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 3:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@IDLES";
		
		case 4:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@IDLES";
		
		case 5:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@IDLES";
		
		case 6:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@IDLES";
		
		case 7:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@IDLES";
		
		case 8:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@IDLES";
		
		case 9:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@IDLES_CONVO";
		
		case 10:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@IDLES_CONVO";
		
		case 11:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@IDLES_CONVO";
		
		case 12:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@IDLES_CONVO";
		
		case 13:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@IDLES_CONVO";
		
		case 14:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@IDLES_CONVO";
		
		case 15:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@IDLES";
		
		case 16:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@IDLES";
		
		case 17:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@IDLES_CONVO";
		
		case 18:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@IDLES_CONVO";
		
		case 19:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@IDLES";
		
		case 20:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@IDLES";
		
		case 21:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@IDLES";
		
		case 22:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@IDLES";
		
		case 23:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@IDLES";
		
		case 24:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@IDLES";
		
		case 25:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@IDLES_CONVO";
		
		case 26:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@IDLES_CONVO";
		
		case 27:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@IDLES_CONVO";
		
		case 28:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@IDLES_CONVO";
		
		case 29:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@IDLES_CONVO";
		
		case 30:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@IDLES_CONVO";
		
		case 31:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@IDLES";
		
		case 32:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@IDLES";
		
		case 33:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@IDLES_CONVO";
		
		case 34:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@IDLES_CONVO";
		
		default:
	}
	return "ANIM@AMB@CASINO@PEDS@";
}

void func_10(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0x4B8B69DAE5BAC592(iParam0);
	}
	if (unk_0x765F6FEEFF39224F(iParam0->f_1))
	{
		unk_0xEC26F4BFC9942A0C(&(iParam0->f_1));
	}
}

void func_11(var uParam0)
{
	if (iLocal_20 < 2)
	{
		func_29(uParam0);
		if (func_28(uParam0))
		{
			*uParam0 = unk_0x9BA5CF280376EEA4(26, func_26(uParam0), uParam0->f_6, uParam0->f_9, 0, false);
			if (unk_0x765F6FEEFF39224F(*uParam0))
			{
				if (func_25(uParam0->f_4, uParam0->f_5))
				{
					func_21(*uParam0, uParam0->f_4, uParam0->f_5);
				}
				else
				{
					func_18(*uParam0, &(uParam0->f_4), &(uParam0->f_5));
				}
				func_17(uParam0);
				if (func_16(uParam0))
				{
					if (!unk_0x765F6FEEFF39224F(uParam0->f_1))
					{
						uParam0->f_1 = unk_0x7CA67831169E8AA6(func_15(uParam0), unk_0x61B226C460A8FCC2(*uParam0, func_14(uParam0), 0f, 0f, 0f), 0, false, 0);
						unk_0x2F0A6390D863D337(uParam0->f_1, *uParam0, unk_0xFCAF61876D23D31D(*uParam0, func_14(uParam0)), func_13(uParam0), 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
				}
				if (func_7(uParam0))
				{
					unk_0x32321D8034C7B162(*uParam0, 0, func_12(uParam0), "BASE", 1090519040, 1);
				}
				iLocal_20++;
			}
		}
	}
}

char* func_12(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 3:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@BASE";
		
		case 4:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@BASE";
		
		case 5:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@BASE";
		
		case 6:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@BASE";
		
		case 7:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@BASE";
		
		case 8:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@BASE";
		
		case 9:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@BASE";
		
		case 10:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@BASE";
		
		case 11:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@BASE";
		
		case 12:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@BASE";
		
		case 13:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@BASE";
		
		case 14:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@BASE";
		
		case 15:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@BASE";
		
		case 16:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@BASE";
		
		case 17:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@BASE";
		
		case 18:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@BASE";
		
		case 19:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@BASE";
		
		case 20:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@BASE";
		
		case 21:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@BASE";
		
		case 22:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@BASE";
		
		case 23:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@BASE";
		
		case 24:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@BASE";
		
		case 25:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@BASE";
		
		case 26:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@BASE";
		
		case 27:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@BASE";
		
		case 28:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@BASE";
		
		case 29:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@BASE";
		
		case 30:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@BASE";
		
		case 31:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@BASE";
		
		case 32:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@BASE";
		
		case 33:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@BASE";
		
		case 34:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@BASE";
		
		default:
	}
	return "ANIM@AMB@CASINO@PEDS@";
}

Vector3 func_13(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 1:
		case 2:
			return 0f, 0f, 0.01f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_14(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 1:
		case 16:
		case 18:
		case 32:
		case 34:
			return 28422;
			break;
		
		case 33:
		case 31:
		case 15:
		case 17:
			return 60309;
			break;
		
		case 2:
			return 28422;
			break;
	}
	return 28422;
}

int func_15(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 1:
		case 2:
		case 15:
		case 16:
		case 17:
		case 18:
		case 31:
		case 32:
		case 33:
		case 34:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_amb_beer_bottle");
}

int func_16(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 1:
		case 2:
		case 15:
		case 16:
		case 17:
		case 18:
		case 31:
		case 32:
		case 33:
		case 34:
			return 1;
		
		default:
	}
	return 0;
}

void func_17(var uParam0)
{
	unk_0x6B8FD1D1616EE677(*uParam0, 0);
	unk_0x083F9B3B112E951F(*uParam0, 0);
	unk_0x274C6068B660FFB4(*uParam0, joaat("weapon_unarmed"), true);
	unk_0x4A852F02088ECC9D(*uParam0, 1);
	unk_0x41E36A540F8F323F(*uParam0, 249, 1);
	unk_0x5FEE418CE11E6DDE(*uParam0, 185, true);
	unk_0x5FEE418CE11E6DDE(*uParam0, 108, true);
	unk_0x5FEE418CE11E6DDE(*uParam0, 106, true);
	unk_0x6EE33B67DCAC6DB1(*uParam0, 0);
	unk_0x969F80598F7FC7CF(*uParam0, 1);
	unk_0x1096811DB3A77EC1(*uParam0, 0);
	unk_0xC2A270E9C5578803(*uParam0, 0);
	unk_0x5FEE418CE11E6DDE(*uParam0, 208, true);
	unk_0xED68CDDDE25A144E(*uParam0);
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<21> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = 10;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2 = unk_0xA603FBA9F3C17D3A(iParam0, iVar0);
		iVar3 = unk_0xCEB55689C694866C(iParam0, iVar0);
		if (iVar0 < 10)
		{
			Var1[iVar0 /*2*/] = iVar2;
			Var1[iVar0 /*2*/].f_1 = iVar3;
		}
		iVar0++;
	}
	func_19(Var1, iParam1, iParam2);
}

void func_19(struct<2>[] Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0 * 3;
		func_20(iParam21, Param0[iVar0 /*2*/], iVar1);
		func_20(iParam22, Param0[iVar0 /*2*/].f_1, iVar1);
		iVar0++;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(iParam0, iParam2);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 1);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 2);
			break;
		
		case 1:
			unk_0x8950ED5730F62EE8(iParam0, iParam2);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 1);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 2);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(iParam0, iParam2);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 1);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 2);
			break;
		
		case 3:
			unk_0x8950ED5730F62EE8(iParam0, iParam2);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 1);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 2);
			break;
		
		case 4:
			unk_0xCE689A8E8C42ED78(iParam0, iParam2);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 1);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 2);
			break;
		
		case 5:
			unk_0x8950ED5730F62EE8(iParam0, iParam2);
			unk_0xCE689A8E8C42ED78(iParam0, iParam2 + 1);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 2);
			break;
		
		case 6:
			unk_0xCE689A8E8C42ED78(iParam0, iParam2);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 1);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 2);
			break;
		
		case 7:
			unk_0x8950ED5730F62EE8(iParam0, iParam2);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 1);
			unk_0x8950ED5730F62EE8(iParam0, iParam2 + 2);
			break;
	}
}

void func_21(int iParam0, var uParam1, var uParam2)
{
	struct<21> Var0;
	
	Var0 = 10;
	func_23(&Var0, uParam1, uParam2);
	func_22(iParam0, Var0);
}

void func_22(int iParam0, struct<2>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x93AA93DA1B137032(iParam0, iVar0, Param1[iVar0 /*2*/], Param1[iVar0 /*2*/].f_1, 0);
		iVar0++;
	}
}

void func_23(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0 * 3;
		(*uParam0)[iVar0 /*2*/] = func_24(&uParam1, iVar1);
		(uParam0[iVar0 /*2*/])->f_1 = func_24(&uParam2, iVar1);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0E4018692D92041D(*uParam0, iParam1))
	{
		iVar0++;
	}
	if (unk_0x0E4018692D92041D(*uParam0, iParam1 + 1))
	{
		iVar0 += 2;
	}
	if (unk_0x0E4018692D92041D(*uParam0, iParam1 + 2))
	{
		iVar0 += 4;
	}
	return iVar0;
}

bool func_25(int iParam0, int iParam1)
{
	return (iParam0 > 0 || iParam1 > 0);
}

int func_26(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 0:
			return func_27(uParam0->f_3);
		
		default:
	}
	return func_27(uParam0->f_3);
}

int func_27(bool bParam0)
{
	if (bParam0)
	{
		return 279228114;
	}
	return 553826858;
}

int func_28(var uParam0)
{
	if (func_30(uParam0))
	{
		if (unk_0x5D98D654CDC2165A(func_26(uParam0)) && unk_0xE9CCF312047EBEE0(func_9(uParam0)))
		{
			if (func_7(uParam0))
			{
				if (!unk_0xE9CCF312047EBEE0(func_12(uParam0)))
				{
					return 0;
				}
			}
			if (func_16(uParam0))
			{
				if (unk_0x5D98D654CDC2165A(func_15(uParam0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_29(var uParam0)
{
	if (func_30(uParam0))
	{
		unk_0xB815670C37E03CDE(func_26(uParam0));
		unk_0x0483D0035D6E46FD(func_9(uParam0));
		if (func_7(uParam0))
		{
			unk_0x0483D0035D6E46FD(func_12(uParam0));
		}
		if (func_16(uParam0))
		{
			unk_0xB815670C37E03CDE(func_15(uParam0));
		}
	}
}

int func_30(var uParam0)
{
	if (uParam0->f_12 <= func_31())
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	var uVar0;
	
	uVar0 = vLocal_22.y;
	return uVar0;
}

void func_32()
{
	if (unk_0xAC9D53CBBA71E4BE())
	{
		unk_0x151D1B83673FCE66();
	}
	func_34();
	func_33();
}

void func_33()
{
	unk_0x5894DC159447E10A();
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_10(&(Local_23[iVar0 /*13*/]));
		iVar0++;
	}
}

int func_35()
{
	var uVar0;
	
	func_43(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_42())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_41())
	{
		return 1;
	}
	if (func_40(157))
	{
		if (!func_39())
		{
			return 1;
		}
	}
	if (func_40(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_36() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_36()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_36()
{
	switch (func_38())
	{
		case 0:
			return func_37();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_37()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_38()
{
	return Global_25765;
}

bool func_39()
{
	return Global_2448756.f_586;
}

int func_40(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_41()
{
	return Global_2458613;
}

bool func_42()
{
	return Global_2448756.f_581;
}

void func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_44(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_44(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_46(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_45(iVar2, &bVar3))
						{
							unk_0xD4A76B5E6C175542(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_45(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_47()
{
	wait(0);
}

void func_48(bool bParam0)
{
	func_34();
	if (bParam0)
	{
		func_50();
	}
	func_49();
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_29(&(Local_23[iVar0 /*13*/]));
		iVar0++;
	}
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_51(&(Local_23[iVar0 /*13*/]), iVar0);
		iVar0++;
	}
}

void func_51(var uParam0, int iParam1)
{
	switch (func_52())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam0->f_6 = { 949.1602f, 0.9533f, 115.6748f };
					uParam0->f_9 = 33.9501f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1320709;
					uParam0->f_5 = 9216;
					uParam0->f_10 = 2;
					uParam0->f_12 = 3;
					break;
				
				case 1:
					uParam0->f_6 = { 948.5114f, 2.207f, 115.2448f };
					uParam0->f_9 = 203.6001f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 33555778;
					uParam0->f_5 = 4608;
					uParam0->f_10 = 32;
					uParam0->f_12 = 3;
					break;
				
				case 2:
					uParam0->f_6 = { 943.7761f, 2.3737f, 115.2597f };
					uParam0->f_9 = 287f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 50336512;
					uParam0->f_5 = 1;
					uParam0->f_10 = 1;
					uParam0->f_12 = 4;
					break;
				
				case 3:
					uParam0->f_6 = { 944.6894f, 2.5794f, 115.2448f };
					uParam0->f_9 = 105.1996f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 524929;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 4;
					break;
				
				case 4:
					uParam0->f_6 = { 946.3756f, 5.3382f, 115.2448f };
					uParam0->f_9 = 133.7994f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83900867;
					uParam0->f_5 = 1152;
					uParam0->f_10 = 1;
					uParam0->f_12 = 2;
					break;
				
				case 5:
					uParam0->f_6 = { 945.341f, 5.1376f, 115.2448f };
					uParam0->f_9 = 260.1493f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83900803;
					uParam0->f_5 = 8705;
					uParam0->f_10 = 1;
					uParam0->f_12 = 2;
					break;
				
				case 6:
					uParam0->f_6 = { 946.093f, 4.461f, 115.2448f };
					uParam0->f_9 = 1.199f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 67113089;
					uParam0->f_5 = 9218;
					uParam0->f_10 = 1;
					uParam0->f_12 = 2;
					break;
				
				case 7:
					uParam0->f_6 = { 941.0575f, 4.1073f, 115.2448f };
					uParam0->f_9 = 22.1992f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 16777216;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 3;
					break;
				
				case 8:
					uParam0->f_6 = { 940.3315f, 4.5308f, 115.2448f };
					uParam0->f_9 = 234.599f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 529027;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 3;
					break;
				
				case 9:
					uParam0->f_6 = { 945.2953f, 9.2744f, 115.2448f };
					uParam0->f_9 = 130.5238f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 50336512;
					uParam0->f_5 = 1;
					uParam0->f_10 = 1;
					uParam0->f_12 = 1;
					break;
				
				case 10:
					uParam0->f_6 = { 944.7067f, 8.6226f, 115.2448f };
					uParam0->f_9 = 328.325f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 524929;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 1;
					break;
				
				case 11:
					uParam0->f_6 = { 936.2474f, 7.5443f, 115.2448f };
					uParam0->f_9 = 314.1984f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 4098;
					uParam0->f_5 = 4674;
					uParam0->f_10 = 24;
					uParam0->f_12 = 2;
					break;
				
				case 12:
					uParam0->f_6 = { 936.5831f, 8.3338f, 115.2448f };
					uParam0->f_9 = 168.2732f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1588935;
					uParam0->f_5 = 513;
					uParam0->f_10 = 17;
					uParam0->f_12 = 2;
					break;
				
				case 13:
					uParam0->f_6 = { 940.6352f, 12.9253f, 115.2448f };
					uParam0->f_9 = 167.7982f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83900803;
					uParam0->f_5 = 8832;
					uParam0->f_10 = 1;
					uParam0->f_12 = 1;
					break;
				
				case 14:
					uParam0->f_6 = { 940.7306f, 11.9791f, 115.2448f };
					uParam0->f_9 = 79.7981f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 100682244;
					uParam0->f_5 = 2;
					uParam0->f_10 = 1;
					uParam0->f_12 = 5;
					break;
				
				case 15:
					uParam0->f_6 = { 939.7188f, 11.7404f, 115.2448f };
					uParam0->f_9 = 336.723f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 529027;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 1;
					break;
				
				case 16:
					uParam0->f_6 = { 939.5512f, 12.9063f, 115.2448f };
					uParam0->f_9 = 259.398f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1592518;
					uParam0->f_5 = 8705;
					uParam0->f_10 = 1;
					uParam0->f_12 = 5;
					break;
				
				case 17:
					uParam0->f_6 = { 942.5848f, 13.0726f, 115.2448f };
					uParam0->f_9 = 192.9481f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83896195;
					uParam0->f_5 = 8258;
					uParam0->f_10 = 21;
					uParam0->f_12 = 5;
					break;
				
				case 18:
					uParam0->f_6 = { 945.7389f, 18.4156f, 115.2448f };
					uParam0->f_9 = 333.72f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 33555266;
					uParam0->f_5 = 4673;
					uParam0->f_10 = 21;
					uParam0->f_12 = 3;
					break;
				
				case 19:
					uParam0->f_6 = { 941.1565f, 15.6501f, 115.6673f };
					uParam0->f_9 = 304.1979f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 262273;
					uParam0->f_5 = 2;
					uParam0->f_10 = 2;
					uParam0->f_12 = 4;
					break;
				
				case 20:
					uParam0->f_6 = { 940.9312f, 16.954f, 115.6373f };
					uParam0->f_9 = 233.9977f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1592518;
					uParam0->f_5 = 2;
					uParam0->f_10 = 2;
					uParam0->f_12 = 4;
					break;
				
				case 21:
					uParam0->f_6 = { 942.7503f, 18.7311f, 115.6673f };
					uParam0->f_9 = 221.2227f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1588422;
					uParam0->f_5 = 4609;
					uParam0->f_10 = 2;
					uParam0->f_12 = 1;
					break;
				
				case 22:
					uParam0->f_6 = { 943.7043f, 18.2618f, 115.2448f };
					uParam0->f_9 = 86.8474f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 16778433;
					uParam0->f_5 = 9217;
					uParam0->f_10 = 34;
					uParam0->f_12 = 2;
					break;
				
				case 23:
					uParam0->f_6 = { 944.0376f, 3.3225f, 115.2523f };
					uParam0->f_9 = 189.1973f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1588935;
					uParam0->f_5 = 8194;
					uParam0->f_10 = 1;
					uParam0->f_12 = 5;
					break;
				
				case 24:
					uParam0->f_6 = { 946.0226f, 24.4982f, 115.6473f };
					uParam0->f_9 = 318.997f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1588423;
					uParam0->f_5 = 1;
					uParam0->f_10 = 2;
					uParam0->f_12 = 1;
					break;
				
				case 25:
					uParam0->f_6 = { 946.7876f, 24.0731f, 115.6798f };
					uParam0->f_9 = 326.047f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1593030;
					uParam0->f_5 = 8706;
					uParam0->f_10 = 2;
					uParam0->f_12 = 1;
					break;
				
				case 26:
					uParam0->f_6 = { 949.3113f, 25.9423f, 115.3098f };
					uParam0->f_9 = 109.2968f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 100682244;
					uParam0->f_5 = 4673;
					uParam0->f_10 = 32;
					uParam0->f_12 = 3;
					break;
				
				case 27:
					uParam0->f_6 = { 949.0017f, 26.6102f, 115.6823f };
					uParam0->f_9 = 123.1967f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 5252;
					uParam0->f_5 = 1;
					uParam0->f_10 = 2;
					uParam0->f_12 = 3;
					break;
				
				case 28:
					uParam0->f_6 = { 947.7147f, 22.5621f, 115.2398f };
					uParam0->f_9 = 307.44f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 100686852;
					uParam0->f_5 = 4160;
					uParam0->f_10 = 33;
					uParam0->f_12 = 5;
					break;
				
				case 29:
					uParam0->f_6 = { 948.3247f, 23.0696f, 115.2448f };
					uParam0->f_9 = 135.9463f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 1152;
					uParam0->f_5 = 66;
					uParam0->f_10 = 1;
					uParam0->f_12 = 5;
					break;
				
				case 30:
					uParam0->f_6 = { 957.8384f, 22.234f, 115.2223f };
					uParam0->f_9 = 113.7962f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 262273;
					uParam0->f_5 = 1;
					uParam0->f_10 = 11;
					uParam0->f_12 = 4;
					break;
				
				case 31:
					uParam0->f_6 = { 957.2652f, 21.5127f, 115.2448f };
					uParam0->f_9 = 337.3962f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 67113537;
					uParam0->f_5 = 9216;
					uParam0->f_10 = 1;
					uParam0->f_12 = 4;
					break;
				
				case 32:
					uParam0->f_6 = { 957.1033f, 22.4842f, 115.2448f };
					uParam0->f_9 = 223.1959f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 50335744;
					uParam0->f_5 = 0;
					uParam0->f_10 = 1;
					uParam0->f_12 = 5;
					break;
				
				case 33:
					uParam0->f_6 = { 951.934f, 22.3747f, 115.2448f };
					uParam0->f_9 = 223.1959f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 16782402;
					uParam0->f_5 = 4672;
					uParam0->f_10 = 1;
					uParam0->f_12 = 3;
					break;
				
				case 34:
					uParam0->f_6 = { 952.5277f, 21.74f, 115.2448f };
					uParam0->f_9 = 63.3955f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 33554561;
					uParam0->f_5 = 9218;
					uParam0->f_10 = 1;
					uParam0->f_12 = 3;
					break;
				
				case 35:
					uParam0->f_6 = { 949.3122f, 19.3779f, 115.2448f };
					uParam0->f_9 = 37.3705f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83900803;
					uParam0->f_5 = 4161;
					uParam0->f_10 = 32;
					uParam0->f_12 = 1;
					break;
				
				case 36:
					uParam0->f_6 = { 949.5209f, 20.174f, 115.2448f };
					uParam0->f_9 = 129.0955f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1593031;
					uParam0->f_5 = 2;
					uParam0->f_10 = 10;
					uParam0->f_12 = 1;
					break;
				
				case 37:
					uParam0->f_6 = { 948.5744f, 19.8094f, 115.2448f };
					uParam0->f_9 = 261.7953f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 67113089;
					uParam0->f_5 = 9218;
					uParam0->f_10 = 24;
					uParam0->f_12 = 1;
					break;
				
				case 38:
					uParam0->f_6 = { 942.6625f, 12.3174f, 115.2448f };
					uParam0->f_9 = 0f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1156;
					uParam0->f_5 = 2;
					uParam0->f_10 = 15;
					uParam0->f_12 = 5;
					break;
				
				case 39:
					uParam0->f_6 = { 946.2049f, 19.0668f, 115.2448f };
					uParam0->f_9 = 156.095f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 529026;
					uParam0->f_5 = 0;
					uParam0->f_10 = 17;
					uParam0->f_12 = 3;
					break;
				
				case 40:
					uParam0->f_6 = { 935.8634f, 3.8235f, 115.2448f };
					uParam0->f_9 = 103.7946f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 577;
					uParam0->f_5 = 9216;
					uParam0->f_10 = 34;
					uParam0->f_12 = 3;
					break;
				
				case 41:
					uParam0->f_6 = { 935.442f, 4.6561f, 115.2448f };
					uParam0->f_9 = 129.794f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 262272;
					uParam0->f_5 = 2;
					uParam0->f_10 = 17;
					uParam0->f_12 = 4;
					break;
				
				case 42:
					uParam0->f_6 = { 954.5865f, 25.1964f, 115.2448f };
					uParam0->f_9 = 131.7939f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 529027;
					uParam0->f_5 = 2;
					uParam0->f_10 = 0;
					uParam0->f_12 = 2;
					break;
				
				case 43:
					uParam0->f_6 = { 954.5208f, 24.2893f, 115.2448f };
					uParam0->f_9 = 16.7939f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 2;
					uParam0->f_5 = 4674;
					uParam0->f_10 = 1;
					uParam0->f_12 = 2;
					break;
				
				case 44:
					uParam0->f_6 = { 953.5839f, 24.6154f, 115.2448f };
					uParam0->f_9 = 286.5938f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1593030;
					uParam0->f_5 = 5120;
					uParam0->f_10 = 1;
					uParam0->f_12 = 2;
					break;
				
				case 45:
					uParam0->f_6 = { 961.0172f, 28.1687f, 115.2448f };
					uParam0->f_9 = 121.2183f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 100682244;
					uParam0->f_5 = 9218;
					uParam0->f_10 = 26;
					uParam0->f_12 = 5;
					break;
				
				case 46:
					uParam0->f_6 = { 960.3821f, 27.442f, 115.2448f };
					uParam0->f_9 = 328.0932f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 83896259;
					uParam0->f_5 = 1088;
					uParam0->f_10 = 21;
					uParam0->f_12 = 5;
					break;
				
				case 47:
					uParam0->f_6 = { 956.9514f, 27.2328f, 115.2448f };
					uParam0->f_9 = 301.0679f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 1;
					uParam0->f_4 = 33555200;
					uParam0->f_5 = 1;
					uParam0->f_10 = 19;
					uParam0->f_12 = 4;
					break;
				
				case 48:
					uParam0->f_6 = { 957.5153f, 28.0321f, 115.2448f };
					uParam0->f_9 = 167.5676f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 1152;
					uParam0->f_5 = 0;
					uParam0->f_10 = 15;
					uParam0->f_12 = 4;
					break;
				
				case 49:
					uParam0->f_6 = { 960.1348f, 28.1884f, 115.2448f };
					uParam0->f_9 = 242.4169f;
					uParam0->f_2 = 0;
					uParam0->f_3 = 0;
					uParam0->f_4 = 812800;
					uParam0->f_5 = 8705;
					uParam0->f_10 = 17;
					uParam0->f_12 = 5;
					break;
			}
			break;
	}
}

int func_52()
{
	var uVar0;
	
	uVar0 = vLocal_22.z;
	return uVar0;
}

int func_53(int iParam0)
{
	if (iParam0 >= Global_262145.f_26025)
	{
		return 5;
	}
	else if (iParam0 >= Global_262145.f_26024)
	{
		return 4;
	}
	else if (iParam0 >= Global_262145.f_26023)
	{
		return 3;
	}
	else if (iParam0 >= Global_262145.f_26022)
	{
		return 2;
	}
	return 1;
}

void func_54()
{
	while (!unk_0x57448AA77832EA9D(32, 0, Global_1316818))
	{
		wait(0);
	}
	Global_1316818++;
	func_55(0, -1, 0);
	unk_0x7643BB59992A9E6E(&vLocal_22, 3);
}

int func_55(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_33();
			}
			else
			{
				return 0;
			}
		}
		if (!func_56())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_33();
					}
					else
					{
						return 0;
					}
				}
				if (func_42())
				{
					if (!bParam2)
					{
						func_33();
					}
					else
					{
						return 0;
					}
				}
				if (func_40(155))
				{
					if (!bParam2)
					{
						func_33();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_33();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_33();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_33();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_56()
{
	return Global_1312844;
}
