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
	char* sLocal_18 = 0;
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
	int iLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_61 = 0;
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
	BOOL bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	BOOL bLocal_84 = 0;
	var uLocal_85 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

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

	while (true)
	{
		if (iLocal_80 == 0)
		{
			iLocal_80 = 1;
			iLocal_79 = 0;
			bLocal_81 = false;
		
			if (unk_0x55EEDBBFDC6E810F(114))
			{
				switch (unk_0xC62B624C267237C2())
				{
					case 16:
						iLocal_79 = 1;
						bLocal_81 = true;
						iLocal_80 = 0;
						break;
				
					case 64:
						iLocal_79 = 1;
						bLocal_81 = false;
						iLocal_80 = 0;
						break;
				
					case 2:
						func_811();
						break;
				
					case 32:
						func_811();
						break;
				
					default:
						break;
				}
			}
		}
	
		if (iLocal_79 == 1)
		{
			func_810(bLocal_81);
		}
		else
		{
			num = 1;
		
			if (num == 1)
			{
				switch (Global_100681)
				{
					case 12:
						Global_100681 = 13;
						break;
				
					case 0:
						func_808();
						break;
				
					case 1:
						func_807();
						break;
				
					case 2:
						func_806();
						break;
				
					case 3:
						func_805();
						break;
				
					case 4:
						func_804();
						break;
				
					case 5:
						func_768();
						break;
				
					case 6:
						func_280();
						break;
				
					case 7:
						break;
				
					case 8:
						break;
				
					case 9:
						func_19();
						break;
				
					case 10:
						if (func_9())
							if (Global_100676 != 6)
								if (func_2(&uLocal_85))
									unk_0xF1440897111F3111(1);
						break;
				
					case 11:
						break;
				
					case 13:
						if (!(func_1(0) || func_1(3) || func_1(2) || func_1(4) || func_1(9) || func_1(10)))
							func_811();
						break;
				
					default:
						break;
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1(int iParam0) // Position - 0x1FB
{
	return Global_43257 == iParam0;
}

BOOL func_2(var uParam0) // Position - 0x209
{
	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		return true;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		switch (Global_100676)
		{
			case 0:
				break;
		
			case 1:
				unk_0x577AE0048ADA90C8(0);
				unk_0xF82BC5193AF62796(Global_100677, 5f, 1, 0, 0, 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Global_100677, 1, 0, 0, 1);
						unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), Global_100680);
						unk_0xEAB390443C680F72(0f, 1065353216);
						unk_0xAABD7B0753C5C286(0f);
					}
				}
			
				unk_0x46D9CC780489C728(Global_100677, func_7(), 0);
				SYSTEM::WAIT(0);
				unk_0xF82BC5193AF62796(Global_100677, 5000f, 1, 0, 0, 0);
				unk_0x2117C3CCFF2D957A(Global_100677, 5000f, 0);
				func_6(5000f);
				func_5();
				func_4();
				SYSTEM::SETTIMERA(0);
				unk_0x577AE0048ADA90C8(1);
				Global_100676 = 2;
				break;
		
			case 2:
				if (unk_0x58A962BEF2DDE1DF())
				{
					SYSTEM::SETTIMERA(0);
					Global_100676 = 3;
				}
				else if (unk_0x46D9CC780489C728(Global_100677, func_7(), 0))
				{
					SYSTEM::SETTIMERA(0);
					Global_100676 = 3;
				}
				else if (SYSTEM::TIMERA() > 5000)
				{
					Global_100676 = 4;
				}
				break;
		
			case 3:
				if (unk_0x58A962BEF2DDE1DF())
					if (unk_0x16760C7780F48003())
						Global_100676 = 4;
			
				if (SYSTEM::TIMERA() > 20000)
					Global_100676 = 4;
				break;
		
			case 4:
				if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x58A962BEF2DDE1DF())
							unk_0xB942AB5E12BF630A();
					
						unk_0x577AE0048ADA90C8(0);
						unk_0x1CC025DD90CB1D9C();
					
						if (IS_BIT_SET(Global_100681.f_20, 14))
						{
							unk_0xF55B077AE7451D3C();
							*uParam0 = unk_0xA5E11AF0A2B928C1() + 1000;
						}
						else
						{
							*uParam0 = unk_0xA5E11AF0A2B928C1() + 10;
						}
					
						unk_0xC1AE78F8D627C659();
					}
				}
			
				Global_100676 = 5;
				break;
		
			case 5:
				if (unk_0x4CD3268F93CFCDC3() && func_3() && unk_0xA5E11AF0A2B928C1() > *uParam0 - 990 || unk_0xA5E11AF0A2B928C1() > *uParam0)
				{
					if (unk_0xA5E11AF0A2B928C1() > *uParam0)
					{
						if (IS_BIT_SET(Global_100681.f_20, 14))
						{
						}
					}
				
					unk_0xEAB390443C680F72(0f, 1065353216);
					unk_0xAABD7B0753C5C286(0f);
					unk_0x577AE0048ADA90C8(1);
					Global_100676 = 6;
					return true;
				}
				break;
		
			case 6:
				return true;
		}
	}

	return false;
}

BOOL func_3() // Position - 0x451
{
	return !Global_77348.f_553;
}

void func_4() // Position - 0x461
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
	return;
}

void func_5() // Position - 0x479
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_77348[i] = 0;
	}

	return;
}

void func_6(float fParam0) // Position - 0x49D
{
	var unk;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			unk_0xA172C350F431483A(unk, fParam0);
			unk_0x3056199EEBDE8CBB(unk, fParam0);
		}
	}

	return;
}

float func_7() // Position - 0x4DD
{
	if (IS_BIT_SET(Global_100681.f_20, 24))
		return 500f;

	return 4500f;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0x4FE
{
	if (Global_100681 == 10 || Global_100681 == 9)
		return true;

	return false;
}

BOOL func_9() // Position - 0x522
{
	int num;
	int num2;

	if (func_18())
	{
		num = func_16(&(Global_100681.f_3), false);
	
		switch (num)
		{
			case 53:
				return true;
		
			case 46:
				return true;
		
			case 84:
				return true;
		
			case 85:
				return true;
		
			case 90:
				return true;
		
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				return true;
		
			case 8:
				return true;
		
			case 9:
				return true;
		
			case 10:
				return true;
		
			case 11:
				return true;
		
			case 62:
				return true;
		
			case 63:
				return true;
		
			case 12:
				return true;
		
			case 13:
				return true;
		
			case 43:
				return true;
		
			case 44:
				return true;
		
			case 71:
				return true;
		
			case 74:
				return true;
		
			case 75:
				return true;
		
			case 31:
				return true;
		
			case 66:
				return true;
		
			case 67:
				return true;
		
			case 68:
				return true;
		
			case 70:
				return true;
		
			case 87:
				return true;
		
			case 88:
				return true;
		
			case 24:
				return true;
		
			case 25:
				return true;
		
			case 17:
				return true;
		
			case 18:
				return true;
		
			case 19:
				return true;
		
			case 21:
				return true;
		
			case 22:
				return true;
		
			case 41:
				return true;
		
			case 42:
				return true;
		
			case 59:
				return true;
		
			case 72:
				return true;
		
			case 91:
				return true;
		
			case 92:
				return true;
		
			case 93:
				return true;
		
			case 76:
				return true;
		
			case 89:
				return true;
		
			case 64:
				return true;
		
			case 65:
				return true;
		
			case 32:
				return true;
		
			case 33:
				return true;
		
			case 34:
				return true;
		
			case 36:
				return true;
		
			case 37:
				return true;
		
			case 78:
				return true;
		
			case 80:
				return true;
		
			case 81:
				return true;
		
			case 82:
				return true;
		
			case 60:
				return true;
		
			case 83:
				return true;
		
			case 40:
				return true;
		
			case 30:
				return true;
		
			case 14:
				return true;
		
			case 16:
				return true;
		
			case 26:
				return true;
		
			case 27:
				return true;
		
			case 47:
				return true;
		
			case 48:
				return true;
		
			case 49:
				return true;
		
			case 52:
				return true;
		
			case 73:
				return true;
		
			case 86:
				return true;
		
			case 45:
				return true;
		
			case 61:
				return true;
		
			case 79:
				return true;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			case 5:
				return true;
		
			case 6:
				return true;
		
			case 7:
				return true;
		
			case 20:
				return true;
		
			case 29:
				return true;
		
			case 38:
				return true;
		
			case 39:
				return true;
		
			case 15:
				return true;
		
			case 69:
				return true;
		}
	}
	else
	{
		switch (Global_100681.f_11)
		{
			case 6:
				num2 = func_10(&(Global_100681.f_3), 0);
			
				switch (num2)
				{
					case 1:
						return true;
				
					case 2:
						return true;
				
					case 3:
						return true;
				
					case 4:
						return true;
				
					case 5:
						return true;
				
					case 6:
						return true;
				
					case 7:
						return true;
				
					case 8:
						return true;
				
					case 11:
						return true;
				
					case 12:
						return true;
				
					case 14:
						return true;
				
					case 15:
						return true;
				
					case 16:
						return true;
				
					case 17:
						return true;
				
					case 18:
						return true;
				
					case 19:
						return true;
				
					case 20:
						return true;
				
					case 21:
						return true;
				
					case 22:
						return true;
				
					case 23:
						return true;
				
					case 25:
						return true;
				
					case 26:
						return true;
				
					case 24:
						return true;
				
					case 28:
						return true;
				
					case 29:
						return true;
				
					case 30:
						return true;
				
					case 31:
						return true;
				
					case 38:
						return true;
				
					case 39:
						return true;
				
					case 40:
						return true;
				
					case 41:
						return true;
				
					case 42:
						return true;
				
					case 43:
						return true;
				
					case 32:
						return true;
				
					case 33:
						return true;
				
					case 34:
						return true;
				
					case 36:
						return true;
				
					case 46:
						return true;
				
					case 47:
						return true;
				
					case 49:
						return true;
				
					case 50:
						return true;
				
					case 51:
						return true;
				
					case 52:
						return true;
				
					case 53:
						return true;
				
					case 54:
						return true;
				
					case 55:
						return true;
				
					case 56:
						return true;
				
					case 57:
						return true;
				
					case 58:
						return true;
				
					case 59:
						return true;
				
					case 60:
						return true;
				
					case 61:
						return true;
				
					case 62:
						return true;
				}
				break;
		
			case 5:
				if (unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "Traffick_Ground") || unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "Traffick_Air") || unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "BailBond1") || unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "BailBond2") || unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "BailBond3") || unk_0x4310A0DB886F9FED(&(Global_100681.f_3), "BailBond4"))
					return true;
				break;
		}
	}

	return false;
}

int func_10(char* sParam0, int iParam1) // Position - 0xCD4
{
	int num;
	var unk;
	var unk33;
	int i;

	unk33 = unk_0x14580F20CBCE4FA9(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_11(num, &unk);
	
		if (unk_0x14580F20CBCE4FA9(unk) == unk33)
			return num;
	}

	iParam1 == 0;
	return -1;
}

void func_11(int iParam0, var uParam1) // Position - 0xD1D
{
	switch (iParam0)
	{
		case 0:
			func_12(uParam1, "Abigail1", func_14(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 1:
			func_12(uParam1, "Abigail2", func_14(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 2:
			func_12(uParam1, "Barry1", func_14(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 3:
			func_12(uParam1, "Barry2", func_14(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 4:
			func_12(uParam1, "Barry3", func_14(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 5:
			func_12(uParam1, "Barry3A", func_14(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 6:
			func_12(uParam1, "Barry3C", func_14(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 7:
			func_12(uParam1, "Barry4", func_14(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_13(iParam0), 0, 0);
			break;
	
		case 8:
			func_12(uParam1, "Dreyfuss1", func_14(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 9:
			func_12(uParam1, "Epsilon1", func_14(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 10:
			func_12(uParam1, "Epsilon2", func_14(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 11:
			func_12(uParam1, "Epsilon3", func_14(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 12:
			func_12(uParam1, "Epsilon4", func_14(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 13:
			func_12(uParam1, "Epsilon5", func_14(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 14:
			func_12(uParam1, "Epsilon6", func_14(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 15:
			func_12(uParam1, "Epsilon7", func_14(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 16:
			func_12(uParam1, "Epsilon8", func_14(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 17:
			func_12(uParam1, "Extreme1", func_14(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 18:
			func_12(uParam1, "Extreme2", func_14(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 19:
			func_12(uParam1, "Extreme3", func_14(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 20:
			func_12(uParam1, "Extreme4", func_14(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 21:
			func_12(uParam1, "Fanatic1", func_14(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_13(iParam0), 1, 0);
			break;
	
		case 22:
			func_12(uParam1, "Fanatic2", func_14(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_13(iParam0), 1, 0);
			break;
	
		case 23:
			func_12(uParam1, "Fanatic3", func_14(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_13(iParam0), 0, 1);
			break;
	
		case 24:
			func_12(uParam1, "Hao1", func_14(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_13(iParam0), 0, 1);
			break;
	
		case 25:
			func_12(uParam1, "Hunting1", func_14(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 26:
			func_12(uParam1, "Hunting2", func_14(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 27:
			func_12(uParam1, "Josh1", func_14(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 28:
			func_12(uParam1, "Josh2", func_14(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 29:
			func_12(uParam1, "Josh3", func_14(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 30:
			func_12(uParam1, "Josh4", func_14(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 31:
			func_12(uParam1, "Maude1", func_14(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 32:
			func_12(uParam1, "Minute1", func_14(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 33:
			func_12(uParam1, "Minute2", func_14(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 34:
			func_12(uParam1, "Minute3", func_14(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 35:
			func_12(uParam1, "MrsPhilips1", func_14(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 36:
			func_12(uParam1, "MrsPhilips2", func_14(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 37:
			func_12(uParam1, "Nigel1", func_14(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 38:
			func_12(uParam1, "Nigel1A", func_14(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 39:
			func_12(uParam1, "Nigel1B", func_14(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_13(iParam0), 1, 1);
			break;
	
		case 40:
			func_12(uParam1, "Nigel1C", func_14(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_13(iParam0), 1, 1);
			break;
	
		case 41:
			func_12(uParam1, "Nigel1D", func_14(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_13(iParam0), 1, 1);
			break;
	
		case 42:
			func_12(uParam1, "Nigel2", func_14(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 43:
			func_12(uParam1, "Nigel3", func_14(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_13(iParam0), 1, 1);
			break;
	
		case 44:
			func_12(uParam1, "Omega1", func_14(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 45:
			func_12(uParam1, "Omega2", func_14(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 46:
			func_12(uParam1, "Paparazzo1", func_14(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 47:
			func_12(uParam1, "Paparazzo2", func_14(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 48:
			func_12(uParam1, "Paparazzo3", func_14(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 49:
			func_12(uParam1, "Paparazzo3A", func_14(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 50:
			func_12(uParam1, "Paparazzo3B", func_14(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 51:
			func_12(uParam1, "Paparazzo4", func_14(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 52:
			func_12(uParam1, "Rampage1", func_14(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 54:
			func_12(uParam1, "Rampage3", func_14(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 55:
			func_12(uParam1, "Rampage4", func_14(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 56:
			func_12(uParam1, "Rampage5", func_14(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_13(iParam0), 0, 0);
			break;
	
		case 53:
			func_12(uParam1, "Rampage2", func_14(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_13(iParam0), 1, 0);
			break;
	
		case 57:
			func_12(uParam1, "TheLastOne", func_14(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 58:
			func_12(uParam1, "Tonya1", func_14(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 59:
			func_12(uParam1, "Tonya2", func_14(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 60:
			func_12(uParam1, "Tonya3", func_14(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 61:
			func_12(uParam1, "Tonya4", func_14(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		case 62:
			func_12(uParam1, "Tonya5", func_14(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_13(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_12(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x1EBC
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_13(int iParam0) // Position - 0x1F4D
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_14(int iParam0) // Position - 0x2293
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_15(iParam0) };

	if (unk_0x2AC37494BBF1DB16(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_15(int iParam0) // Position - 0x22CA
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_16(char* sParam0, BOOL bParam1) // Position - 0x2716
{
	var unk;
	int num;

	unk = unk_0x14580F20CBCE4FA9(sParam0);
	num = func_17(unk, true);
	num == -1 && !bParam1;
	return num;
}

int func_17(Hash hParam0, BOOL bParam1) // Position - 0x2740
{
	int i;

	for (i = 0; i < 94; i = i + 1)
	{
		if (Global_91469[i /*34*/].f_6 == hParam0)
			return i;
	}

	!bParam1;
	return -1;
}

BOOL func_18() // Position - 0x2776
{
	if (Global_100681.f_11 == 0 || Global_100681.f_11 == 1 || Global_100681.f_11 == 2 || Global_100681.f_11 == 3 || Global_100681.f_11 == 4)
		return true;

	return false;
}

void func_19() // Position - 0x27C6
{
	int num;
	int num2;

	num = 1;

	if (func_9())
	{
		if (func_279() == false)
		{
			unk_0xF1440897111F3111(0);
			Global_100676 = 0;
		}
	}

	if (num == 1 && !unk_0x72474BA05A104E1E() && !unk_0x984CA71F26DF483C())
		unk_0x6D5ACBBD4CE34249(0);

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		num2 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD());
	
		if (num2 < 150)
			unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), 150, 0);
	}

	if (func_18())
	{
		func_252();
	}
	else
	{
		switch (Global_100681.f_11)
		{
			case 5:
				func_251();
				break;
		
			case 6:
				func_66();
				break;
		
			default:
				break;
		}
	}

	if (func_279() == false)
	{
		if (func_65() != 0)
			func_64();
	
		func_63();
		func_62();
	}

	func_20();
	SYSTEM::WAIT(0);

	if (func_279() == false)
	{
		Global_100681 = 10;
	}
	else
	{
		SYSTEM::WAIT(500);
		unk_0x78DD793477D04C42(800);
	}

	return;
}

void func_20() // Position - 0x28AC
{
	func_55(false);
	func_45(false, true, true, 0, false, false, false);
	unk_0x3210A569BAF257BB(0, 59, 1);
	unk_0x3210A569BAF257BB(0, 60, 1);
	func_44(0);
	unk_0xCD3C8E1022864F65(1);
	unk_0x8581263F2F024518();
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 7);
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 22);
	func_43(1);
	func_42(0);
	func_41(0);
	func_40(0);
	func_39(0);
	func_36(1);
	func_35();
	func_28(0);
	func_27(0);
	func_26(0, 1);
	func_25(0);
	func_23(0);
	func_22(0);
	func_21(0);

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x0002182D625AEFEA(unk_0xC1A5EC5C986B98AD(), 0, 0);
		unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 0, -1, 0);
	}

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);

	return;
}

void func_21(int iParam0) // Position - 0x2975
{
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 23))
		{
			unk_0xD111D6644D1D5BD5(1);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 23);
		}
	}
	else if (IS_BIT_SET(Global_100681.f_20, 23))
	{
		unk_0xD111D6644D1D5BD5(0);
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 23);
	}

	return;
}

void func_22(int iParam0) // Position - 0x29C1
{
	BOOL flag;
	var unk;

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (iParam0 == 1)
		{
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 15);
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x2718E9CC165A99F6(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1);
			}
			else
			{
				if (!unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()))
					if (unk_0xDC116D955A63BDBE(unk_0xC1A5EC5C986B98AD()))
						unk_0xA81AA70A4D25E140(unk_0xC1A5EC5C986B98AD(), 1, 1);
			
				if (!unk_0xDC116D955A63BDBE(unk_0xC1A5EC5C986B98AD()))
					unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 1);
			}
		}
		else if (IS_BIT_SET(Global_100681.f_20, 15))
		{
			flag = false;
		
			if (unk_0xDC116D955A63BDBE(unk_0xC1A5EC5C986B98AD()))
			{
				unk = unk_0x280DD27CB1FE0E80(unk_0xC1A5EC5C986B98AD());
			
				if (unk_0x7DE17ACDD8BA2642(unk))
				{
					if (!unk_0x6123E78FD4B274FB(unk_0x504B9BB48D41C264(unk)))
					{
						unk_0x2718E9CC165A99F6(unk, 0);
						flag = true;
					}
				}
			}
		
			if (!flag)
				unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
		
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 15);
		}
	}

	return;
}

void func_23(int iParam0) // Position - 0x2AA5
{
	var unk;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 19))
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 1);
		
			if (!unk_0xA26A9A07F761D8F8())
				unk_0xAC00C05D6FA71495(unk_0xC1A5EC5C986B98AD(), 0);
		
			unk_0x49389483B4ABCAC3(unk_0xC1A5EC5C986B98AD(), 0);
			unk_0x52B0DD24AA97ABDB(unk_0xC1A5EC5C986B98AD(), 1);
			unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 1, 1, 1, 1, 1, 0, 0, 0);
		
			if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				unk_0xDDE449983CE7572E(unk_0xC1A5EC5C986B98AD(), 0, 0);
		
			unk_0x5CE354E3C73D2002(unk_0xC1A5EC5C986B98AD());
			unk_0x8C05C3A73F9BBCB9(unk_0xC1A5EC5C986B98AD());
			unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			unk_0xF82BC5193AF62796(unk, 100f, 1, 0, 0, 0);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 19);
		}
	}
	else if (IS_BIT_SET(Global_100681.f_20, 19))
	{
		func_24();
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 19);
	}

	return;
}

void func_24() // Position - 0x2B6C
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			unk_0xDDE449983CE7572E(unk_0xC1A5EC5C986B98AD(), 1, 0);
	
		if (!unk_0xA26A9A07F761D8F8())
		{
			unk_0xAC00C05D6FA71495(unk_0xC1A5EC5C986B98AD(), 1);
			unk_0xF4546FA8F4A61176(unk_0xC1A5EC5C986B98AD(), 1);
		}
	
		unk_0x49389483B4ABCAC3(unk_0xC1A5EC5C986B98AD(), 1);
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		unk_0x52B0DD24AA97ABDB(unk_0xC1A5EC5C986B98AD(), 0);
		unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x52B0DD24AA97ABDB(unk_0xC1A5EC5C986B98AD(), 0);
		unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 1, 0);
	}

	return;
}

void func_25(int iParam0) // Position - 0x2BF0
{
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 18))
		{
			unk_0xBE2344E719A5D5F7(0);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 18);
		}
	}
	else if (IS_BIT_SET(Global_100681.f_20, 18))
	{
		unk_0xBE2344E719A5D5F7(1);
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 18);
	}

	return;
}

void func_26(int iParam0, int iParam1) // Position - 0x2C3C
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 16);
	
		if (iParam1 == 1)
			unk_0x6F5281F7042DC893(0.2f);
		else
			unk_0x6F5281F7042DC893(0.075f);
	}
	else
	{
		if (IS_BIT_SET(Global_100681.f_20, 16))
			unk_0x6F5281F7042DC893(1f);
	
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 16);
	}

	return;
}

void func_27(int iParam0) // Position - 0x2C91
{
	if (iParam0 == 1)
	{
		if (!Global_95940)
		{
			func_28(0);
			unk_0x451128B7D435FBF2("DeathFailOut", 0, 0);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 1);
			unk_0x01B9DC5A18DE29B3(2);
			func_26(1, 2);
		}
	}
	else
	{
		if (IS_BIT_SET(Global_100681.f_20, 1))
		{
			if (unk_0x7B498529E87A3591("DeathFailOut"))
				unk_0x29978E5D6F8BB77E("DeathFailOut");
		
			unk_0x01B9DC5A18DE29B3(0);
		}
	
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 1);
	}

	return;
}

void func_28(int iParam0) // Position - 0x2CFD
{
	char* str;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			str = "DeathFailMichaelIn";
			break;
	
		case CHAR_FRANKLIN:
			str = "DeathFailFranklinIn";
			break;
	
		case CHAR_TREVOR:
			str = "DeathFailTrevorIn";
			break;
	}

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 0))
		{
			unk_0x451128B7D435FBF2(str, 0, 0);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 0);
			unk_0x01B9DC5A18DE29B3(1);
			func_26(1, 1);
		}
	}
	else
	{
		if (IS_BIT_SET(Global_100681.f_20, 0))
		{
			if (unk_0x7B498529E87A3591(str))
				unk_0x29978E5D6F8BB77E(str);
		
			unk_0x01B9DC5A18DE29B3(0);
		}
	
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 0);
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2D98
{
	func_30();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_30() // Position - 0x2DB1
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_31(character) && !func_1(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_31(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_31(eCharacter echParam0) // Position - 0x2EAE
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(int iParam0) // Position - 0x2EBA
{
	eCharacter i;
	int num;

	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		num = unk_0x504B9BB48D41C264(iParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2EF7
{
	if (func_31(character))
		return func_34(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_34(eCharacter echParam0) // Position - 0x2F1C
{
	return Global_2028[echParam0 /*29*/];
}

void func_35() // Position - 0x2F2B
{
	if (Global_100681.f_18 != -1)
	{
		if (!unk_0x209C5E3492025E4B(Global_100681.f_18))
			unk_0xA13B5B0EF7402391(Global_100681.f_18);
	
		Global_100681.f_18 = -1;
	}

	if (Global_100681.f_19 != -1)
	{
		if (!unk_0x209C5E3492025E4B(Global_100681.f_19))
			unk_0xA13B5B0EF7402391(Global_100681.f_19);
	
		Global_100681.f_19 = -1;
	}

	if (IS_BIT_SET(Global_100681.f_20, 6))
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 6);

	if (unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == joaat("replay_controller"))
		unk_0x214F8822B61C46FE();

	return;
}

void func_36(int iParam0) // Position - 0x2FAF
{
	if (iParam0 == 1)
	{
		if (IS_BIT_SET(Global_100681.f_20, 4))
		{
			func_38();
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 4);
		}
	}
	else
	{
		func_37();
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 4);
	}

	return;
}

void func_37() // Position - 0x2FE9
{
	Global_23131.f_5 = 1;
	return;
}

void func_38() // Position - 0x2FF7
{
	Global_23131.f_5 = 0;
	return;
}

void func_39(int iParam0) // Position - 0x3005
{
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 11))
		{
			unk_0x063A354D884F1DFA(1);
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 11);
		}
	}
	else if (IS_BIT_SET(Global_100681.f_20, 11))
	{
		unk_0x063A354D884F1DFA(0);
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 11);
	}

	return;
}

void func_40(int iParam0) // Position - 0x3051
{
	if (iParam0 == 1)
	{
		unk_0x3096CB6635EB839E();
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 3);
	}
	else if (IS_BIT_SET(Global_100681.f_20, 3))
	{
		unk_0x5862CC4FD19EB752();
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 3);
	}

	return;
}

void func_41(int iParam0) // Position - 0x308B
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_100681.f_20, 2))
			{
				unk_0x577AE0048ADA90C8(1);
				unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_100681.f_20, 2))
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 2);
		}
	}

	return;
}

void func_42(int iParam0) // Position - 0x30DC
{
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_100681.f_20, 12))
		{
			unk_0xAEA29937C5240DA0("REPLAY_SCREEN_SCENE");
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 12);
		}
	}
	else if (IS_BIT_SET(Global_100681.f_20, 12))
	{
		unk_0x3FA8C73B5856A3E4("REPLAY_SCREEN_SCENE");
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 12);
	}

	return;
}

void func_43(int iParam0) // Position - 0x312F
{
	unk_0xB1A691274215E4CE(iParam0);
	unk_0x61F7D56FFAFBF706(iParam0);
	return;
}

void func_44(int iParam0) // Position - 0x3143
{
	if (iParam0 == 1)
	{
		unk_0x8B438725D591ED78(0, 37, 1);
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 10);
	}
	else if (IS_BIT_SET(Global_100681.f_20, 10))
	{
		unk_0x3210A569BAF257BB(0, 37, 1);
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 10);
	}

	return;
}

void func_45(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3188
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_54(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
				unk_0xD6625E11483B2324(0);
		
			if (!func_53())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_52(1, iParam3, bParam2, 0);
		Global_63368 = true;
		Global_75696 = true;
		Global_78556 = true;
	}
	else
	{
		func_54(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = false;
	
		if (bParam1)
			unk_0xDB4D82037BD5A339();
	
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_52(0, iParam3, bParam2, 0);
	
		if (unk_0xA26A9A07F761D8F8())
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_50(unk_0x93E99A2DBCBA9CFA()) && !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x93E99A2DBCBA9CFA(), 0) && !func_46() && !bParam4 && !bParam5 && !unk_0x8253CEEA17ED481B())
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_50(unk_0x93E99A2DBCBA9CFA()) && !bParam4 && !bParam5)
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	
		Global_78556 = false;
	}

	return;
}

BOOL func_46() // Position - 0x32D5
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x32EF
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_48(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

eCharacter func_48(Hash hParam0, BOOL bParam1) // Position - 0x333A
{
	eCharacter character;
	Hash hash;

	hash = hParam0;

	if (hash == -1)
		hash = func_49();

	if (Global_1575040[hash] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574912[hash];
		bParam1;
	}

	return character;
}

Hash func_49() // Position - 0x337B
{
	return Global_1574918;
}

BOOL func_50(int iParam0) // Position - 0x3387
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return true;

	if (func_51())
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			return true;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_51() // Position - 0x33C6
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_52(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x33D4
{
	int num;

	num = 0;

	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && bParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, iParam1, 1, iParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_53() // Position - 0x3407
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_54(int iParam0) // Position - 0x342E
{
	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	else
		unk_0x061B1200C95204CB(&Global_8253, 13);

	return;
}

void func_55(BOOL bParam0) // Position - 0x3451
{
	if (bParam0)
	{
		func_61();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_60(0))
			func_56(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_56(int iParam0) // Position - 0x34B4
{
	if (func_59())
		return;

	if (Global_20584)
		if (func_58())
			func_57(true, true);
		else
			func_57(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_53())
		Global_20383.f_1 = 3;

	return;
}

void func_57(BOOL bParam0, BOOL bParam1) // Position - 0x353E
{
	if (bParam0)
	{
		if (func_60(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0xF756EDB27C588BED(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B2D55EA37C443D5(Global_20320);
		else
			unk_0x6B2D55EA37C443D5(Global_20311);
	}

	return;
}

BOOL func_58() // Position - 0x35B2
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_59() // Position - 0x35C0
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_60(int iParam0) // Position - 0x35CF
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

void func_61() // Position - 0x3626
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = false;
		Global_21774 = 1;
	}

	return;
}

void func_62() // Position - 0x364F
{
	TEXT_LABEL_ASSIGN_STRING(&Global_78791, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
	return;
}

void func_63() // Position - 0x3669
{
	Global_78799 = { 0f, 0f, 0f };
	Global_78802 = 0f;
	Global_100681.f_21 = 145;
	return;
}

void func_64() // Position - 0x3687
{
	Global_63359 = true;
	Global_63370;
	Global_63370 = false;
	return;
}

int func_65() // Position - 0x369D
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
		return 0;

	return Global_100681.f_2;
}

void func_66() // Position - 0x36C7
{
	int num;
	var unk;
	int num2;

	num = func_10(&(Global_100681.f_3), 0);
	func_11(num, &unk);
	func_41(0);
	num2.f_17 = 2;
	num2.f_28 = 6;
	num2.f_35 = 5;
	num2.f_41 = 6;
	func_250(&num2);
	num2.f_1 = { Global_100681.f_3 };
	num2 = num;
	func_64();

	while (!func_68(&num2))
	{
		SYSTEM::WAIT(0);
	}

	func_67(num);
	return;
}

void func_67(int iParam0) // Position - 0x373A
{
	Global_112735[iParam0 /*10*/].f_4 = 1;
	Global_112735[iParam0 /*10*/].f_5 = 0;
	Global_112735[iParam0 /*10*/].f_6 = 0;
	Global_112735[iParam0 /*10*/] = false;
	return;
}

BOOL func_68(Any* panParam0) // Position - 0x376C
{
	var unk;
	var unk33;

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		while (!func_246(*panParam0))
		{
			if (func_245(*panParam0))
				func_239();
		
			if (!IS_RC_FINE_AND_IN_RANGE(panParam0, *panParam0 != 2))
			{
				func_196("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		func_193();

	if (!func_171(panParam0))
	{
		func_196("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}

	func_11(*panParam0, &unk);
	TEXT_LABEL_COPY(&unk33, { func_15(*panParam0) }, 4);
	func_169(&unk33, unk.f_3, 0);
	func_166(*panParam0);

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		if (panParam0->f_16 == 2)
			func_87(&(panParam0->f_1), 0);
		else
			func_87(&(panParam0->f_1), 1);

	func_69(*panParam0, unk);
	return true;
}

void func_69(int iParam0, var uParam1) // Position - 0x382F
{
	func_86(uParam1);
	unk_0x061B1200C95204CB(&Global_113648.f_18576[iParam0 /*6*/], 5);

	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
		{
			func_84();
			SYSTEM::WAIT(0);
		}
	}

	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) < 1)
	{
		Global_63363 = false;
		unk_0x3EC562D93709C894("mission_stat_watcher");
	
		while (!unk_0x6CAF14BE58B4BFF8("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", SPECIAL_ABILITY);
		unk_0x037A80676B8FF0F5("mission_stat_watcher");
	}

	while (!IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 5))
	{
		if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
			unk_0xECDAB41968FF21A8(&Global_113648.f_18576[iParam0 /*6*/], 5);
	}

	func_70(iParam0);
	return;
}

void func_70(eCharacter echParam0) // Position - 0x38EB
{
	BOOL flag;
	eCharacter character;

	if (Global_63360 == 1)
	{
		func_83();
		Global_63360 = 0;
	
		if (Global_63355)
			return;
	}

	if (Global_3)
	{
		Global_63363 = true;
		func_75();
		return;
	}

	TEXT_LABEL_COPY(&Global_63377, { func_14(echParam0) }, 4);
	Global_63365 = false;
	Global_63364 = false;

	switch (echParam0)
	{
		case 1:
		case 9:
			Global_63352 = true;
			Global_63355 = true;
			Global_63358 = true;
			break;
	
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_63363 = true;
			Global_63364 = true;
			func_75();
			func_84();
			return;
	}

	flag = Global_75607;
	Global_75607 = true;
	character = Global_75608;
	Global_75608 = echParam0;

	if (!Global_63352)
	{
		if (Global_75608 != character || Global_75457 == 0 || flag != Global_75607)
		{
			Global_32417 = false;
			func_75();
			func_72(echParam0);
		}
		else
		{
			Global_63355 = true;
		}
	}

	Global_63390 = unk_0xA5E11AF0A2B928C1();
	func_71();
	Global_63362 = false;
	return;
}

void func_71() // Position - 0x3A45
{
	int i;

	if (!Global_63359)
		return;

	if (Global_75457 == 0)
		return;

	i = 0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		switch (Global_63587[Global_75458[i /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75458[i /*9*/].f_3 = 1;
				break;
		
			case 4:
				if (Global_63370)
					Global_75458[i /*9*/].f_3 = 1;
				break;
		
			case 6:
				if (Global_63587[Global_75458[i /*9*/] /*13*/].f_3)
					if (Global_75458[i /*9*/].f_1 != 0)
						Global_75458[i /*9*/].f_3 = 1;
				break;
		}
	}

	Global_63359 = false;
	return;
}

void func_72(eCharacter echParam0) // Position - 0x3AF8
{
	switch (echParam0)
	{
		case CHAR_TREVOR:
			func_73(741);
			func_73(742);
			return;
	
		case CHAR_MULTIPLAYER:
			func_73(743);
			func_73(744);
			return;
	
		case CHAR_FRANK_TREV_CONF:
			func_73(745);
			func_73(746);
			return;
	
		case CHAR_LEST_FRANK_CONF:
			func_73(747);
			func_73(748);
			return;
	
		case CHAR_MIKE_FRANK_CONF:
			func_73(749);
			return;
	
		case CHAR_LESTER:
			func_73(750);
			return;
	
		case CHAR_JIMMY:
			func_73(751);
			func_73(752);
			return;
	
		case CHAR_ABIGAIL:
			func_73(753);
			func_73(754);
			return;
	
		case CHAR_AMANDA:
			func_73(755);
			func_73(756);
			func_73(757);
			return;
	
		case CHAR_SIMEON:
			func_73(758);
			func_73(759);
			return;
	
		case CHAR_LAMAR:
			func_73(760);
			func_73(761);
			return;
	
		case CHAR_RON:
			func_73(762);
			return;
	
		case CHAR_CHENG:
			func_73(763);
			return;
	
		case CHAR_GANGAPP:
			func_73(764);
			func_73(765);
			return;
	
		case CHAR_STEVE:
			func_73(766);
			return;
	
		case CHAR_TENNIS_COACH:
			func_73(767);
			func_73(768);
			func_73(769);
			return;
	
		case CHAR_SOLOMON:
			func_73(770);
			func_73(771);
			return;
	
		case CHAR_ESTATE_AGENT:
			func_73(772);
			func_73(773);
			return;
	
		case CHAR_DEVIN:
			func_73(774);
			func_73(775);
			return;
	
		case CHAR_DAVE:
			func_73(776);
			func_73(777);
			return;
	
		case CHAR_FLOYD:
			func_73(778);
			func_73(779);
			return;
	
		case CHAR_GAYMILITARY:
			func_73(780);
			func_73(781);
			func_73(782);
			return;
	
		case CHAR_OSCAR:
			func_73(783);
			func_73(784);
			return;
	
		case CHAR_ORTEGA:
			func_73(785);
			func_73(786);
			return;
	
		case CHAR_ONEIL:
			func_73(787);
			func_73(788);
			return;
	
		case CHAR_PATRICIA:
			func_73(789);
			return;
	
		case CHAR_PEGASUS_DELIVERY:
			func_73(790);
			func_73(791);
			func_73(792);
			return;
	
		case CHAR_LIFEINVADER:
			func_73(793);
			func_73(794);
			func_73(795);
			return;
	
		case CHAR_TANISHA:
			func_73(796);
			func_73(797);
			return;
	
		case CHAR_RICKIE:
			func_73(798);
			func_73(799);
			return;
	
		default:
		
	}

	switch (echParam0)
	{
		case CHAR_CHEF:
			func_73(800);
			func_73(801);
			return;
	
		case CHAR_BARRY:
			func_73(802);
			func_73(803);
			return;
	
		case CHAR_BEVERLY:
			func_73(804);
			func_73(805);
			return;
	
		case CHAR_CRIS:
			func_73(806);
			return;
	
		case CHAR_JOSEF:
			func_73(807);
			func_73(808);
			func_73(809);
			return;
	
		case CHAR_JOSH:
			func_73(828);
			func_73(829);
			func_73(830);
			return;
	
		case CHAR_MANUEL:
			func_73(831);
			func_73(832);
			func_73(833);
			return;
	
		case CHAR_MARNIE:
			func_73(834);
			func_73(835);
			func_73(836);
			return;
	
		case CHAR_MARY_ANN:
			func_73(837);
			func_73(838);
			func_73(839);
			return;
	
		case CHAR_MAUDE:
			func_73(840);
			func_73(841);
			func_73(842);
			return;
	
		case CHAR_WADE:
			func_73(843);
			func_73(844);
			func_73(845);
			return;
	
		default:
			return;
	}

	return;
}

void func_73(int iParam0) // Position - 0x3EE0
{
	Global_63355 = true;
	Global_63358 = true;

	if (Global_75457 > 15)
		return;

	func_74(Global_75457);
	Global_75458[Global_75457 /*9*/] = iParam0;
	Global_75457 = Global_75457 + 1;

	if (Global_63587[iParam0 /*13*/] == 16)
		Global_75609 = true;

	return;
}

void func_74(int iParam0) // Position - 0x3F2B
{
	Global_75458[iParam0 /*9*/].f_1 = 0;
	Global_75458[iParam0 /*9*/].f_2 = 0f;
	Global_75458[iParam0 /*9*/].f_3 = 0;
	Global_75458[iParam0 /*9*/].f_4 = 0;
	return;
}

void func_75() // Position - 0x3F5F
{
	if (Global_63362)
		return;

	Global_63371 = 0;
	Global_75457 = 0;
	Global_63373 = 0;
	Global_63370;
	Global_63370 = false;
	func_82(0);
	func_81();
	Global_75609 = false;
	Global_63361 = true;
	func_79();
	func_78();
	func_77();
	func_76();
	Global_63352 = false;
	Global_63382 = false;
	Global_63390 = -1;
	return;
}

void func_76() // Position - 0x3FB5
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_75644[i /*2*/].f_1 = -1;
	}

	Global_75653 = 0;
	return;
}

void func_77() // Position - 0x3FE2
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_75610[i /*2*/] = 0;
		Global_75610[i /*2*/].f_1 = -1;
	}

	Global_75643 = 0;
	return;
}

void func_78() // Position - 0x401B
{
	Global_63521 = 0;
	return;
}

void func_79() // Position - 0x4027
{
	Global_63381 = false;
	Global_63385 = func_80(joaat("SP0_SHOTS"));
	Global_63384 = func_80(joaat("SP0_HITS"));
	Global_63387 = func_80(joaat("SP1_SHOTS"));
	Global_63386 = func_80(joaat("SP1_HITS"));
	Global_63389 = func_80(joaat("SP2_SHOTS"));
	Global_63388 = func_80(joaat("SP2_HITS"));
	return;
}

int func_80(int iParam0) // Position - 0x407B
{
	var unk;

	unk_0xDD7756E2742E0F6D(iParam0, &unk, -1);
	return unk;
}

void func_81() // Position - 0x408F
{
	int i;

	Global_63391 = 0;
	i = 0;

	for (i = 0; i < 64; i = i + 1)
	{
		Global_63392[i /*2*/] = 0;
	}

	return;
}

void func_82(BOOL bParam0) // Position - 0x40B9
{
	Global_78819 = bParam0;
	Global_78820 = bParam0;
	return;
}

void func_83() // Position - 0x40CD
{
	int i;

	Global_63360 = 1;
	i = 0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		Global_75458[i /*9*/].f_3 = 2;
	}

	Global_63370;
	Global_63370 = false;
	return;
}

void func_84() // Position - 0x4106
{
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
	{
		if (func_85())
		{
			if (Global_63357 && !Global_63356)
			{
				Global_63357 = false;
				unk_0x031879EF9A711F74("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x031879EF9A711F74("mission_stat_watcher");
		}
	}

	return;
}

BOOL func_85() // Position - 0x4148
{
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) < 1)
		return false;

	if (!Global_63355)
		return false;

	return Global_63367;
}

void func_86(var uParam0) // Position - 0x4172
{
	unk_0x4310A0DB886F9FED(uParam0, uParam0);
	return;
}

void func_87(char* sParam0, int iParam1) // Position - 0x4185
{
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 17);
	func_88(sParam0, iParam1, 0);
	return;
}

void func_88(char* sParam0, int iParam1, int iParam2) // Position - 0x41A2
{
	if (Global_100681 != 10 && Global_100681 != 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_104204, sParam0, 32);
		func_90(&Global_104212, sParam0, 0, "Start", iParam1, iParam2);
		func_89();
		Global_94859 = 0;
	}

	return;
}

void func_89() // Position - 0x41E7
{
	int i;
	int j;

	Global_107196 = Global_104212;
	Global_107196.f_1 = Global_104212.f_1;
	Global_107196.f_6 = Global_104212.f_6;
	Global_107196.f_7 = Global_104212.f_7;
	Global_107196.f_8 = Global_104212.f_8;
	Global_107196.f_2 = Global_104212.f_2;
	Global_107196.f_3 = Global_104212.f_3;
	Global_107196.f_4 = Global_104212.f_4;
	Global_107196.f_5 = Global_104212.f_5;

	for (j = 0; j < 3; j = j + 1)
	{
		Global_107196.f_9[j] = Global_104212.f_9[j];
		Global_107196.f_13[j] = Global_104212.f_13[j];
		Global_107196.f_17[j] = Global_104212.f_17[j];
		Global_107196.f_21[j] = Global_104212.f_21[j];
		Global_107196.f_25[0 /*295*/][j /*98*/] = { Global_104212.f_25[0 /*295*/][j /*98*/] };
		Global_107196.f_25[1 /*295*/][j /*98*/] = { Global_104212.f_25[1 /*295*/][j /*98*/] };
	
		for (i = 0; i < 12; i = i + 1)
		{
			Global_107196.f_616[j /*65*/][i] = Global_104212.f_616[j /*65*/][i];
			Global_107196.f_616[j /*65*/].f_13[i] = Global_104212.f_616[j /*65*/].f_13[i];
			Global_107196.f_616[j /*65*/].f_26[i] = Global_104212.f_616[j /*65*/].f_26[i];
		}
	
		Global_107196.f_616[j /*65*/].f_59 = Global_104212.f_616[j /*65*/].f_59;
		Global_107196.f_616[j /*65*/].f_60 = Global_104212.f_616[j /*65*/].f_60;
		Global_107196.f_616[j /*65*/].f_61 = Global_104212.f_616[j /*65*/].f_61;
		Global_107196.f_616[j /*65*/].f_62 = Global_104212.f_616[j /*65*/].f_62;
		Global_107196.f_616[j /*65*/].f_63 = Global_104212.f_616[j /*65*/].f_63;
		Global_107196.f_616[j /*65*/].f_64 = Global_104212.f_616[j /*65*/].f_64;
	
		for (i = 0; i < 9; i = i + 1)
		{
			Global_107196.f_616[j /*65*/].f_39[i] = Global_104212.f_616[j /*65*/].f_39[i];
			Global_107196.f_616[j /*65*/].f_49[i] = Global_104212.f_616[j /*65*/].f_49[i];
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			Global_107196.f_812[j /*477*/][i /*5*/] = { Global_104212.f_812[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			Global_107196.f_812[j /*477*/].f_221[i /*5*/] = { Global_104212.f_812[j /*477*/].f_221[i /*5*/] };
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/][i] = Global_104212.f_2244[j /*32*/][i];
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/].f_5[i] = Global_104212.f_2244[j /*32*/].f_5[i];
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/].f_16[i] = Global_104212.f_2244[j /*32*/].f_16[i];
		}
	
		Global_107196.f_2341[j] = Global_104212.f_2341[j];
	
		for (i = 0; i <= 3; i = i + 1)
		{
			Global_107196.f_2838[j /*15*/][i] = Global_104212.f_2838[j /*15*/][i];
			Global_107196.f_2838[j /*15*/].f_5[i] = Global_104212.f_2838[j /*15*/].f_5[i];
			Global_107196.f_2838[j /*15*/].f_10[i] = Global_104212.f_2838[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			Global_107196.f_2345[j /*164*/][i] = Global_104212.f_2345[j /*164*/][i];
			Global_107196.f_2345[j /*164*/].f_4[i] = Global_104212.f_2345[j /*164*/].f_4[i];
			Global_107196.f_2345[j /*164*/].f_8[i] = Global_104212.f_2345[j /*164*/].f_8[i];
			Global_107196.f_2345[j /*164*/].f_12[i] = Global_104212.f_2345[j /*164*/].f_12[i];
			Global_107196.f_2345[j /*164*/].f_16[i] = Global_104212.f_2345[j /*164*/].f_16[i];
			Global_107196.f_2345[j /*164*/].f_20[i] = Global_104212.f_2345[j /*164*/].f_20[i];
			Global_107196.f_2345[j /*164*/].f_24[i] = Global_104212.f_2345[j /*164*/].f_24[i];
			Global_107196.f_2345[j /*164*/].f_28[i] = Global_104212.f_2345[j /*164*/].f_28[i];
			Global_107196.f_2345[j /*164*/].f_32[i] = Global_104212.f_2345[j /*164*/].f_32[i];
			Global_107196.f_2345[j /*164*/].f_36[i] = Global_104212.f_2345[j /*164*/].f_36[i];
			Global_107196.f_2345[j /*164*/].f_40[i] = Global_104212.f_2345[j /*164*/].f_40[i];
			Global_107196.f_2345[j /*164*/].f_44[i] = Global_104212.f_2345[j /*164*/].f_44[i];
			Global_107196.f_2345[j /*164*/].f_48[i] = Global_104212.f_2345[j /*164*/].f_48[i];
			Global_107196.f_2345[j /*164*/].f_52[i] = Global_104212.f_2345[j /*164*/].f_52[i];
			Global_107196.f_2345[j /*164*/].f_56[i] = Global_104212.f_2345[j /*164*/].f_56[i];
			Global_107196.f_2345[j /*164*/].f_60[i] = Global_104212.f_2345[j /*164*/].f_60[i];
			Global_107196.f_2345[j /*164*/].f_64[i] = Global_104212.f_2345[j /*164*/].f_64[i];
			Global_107196.f_2345[j /*164*/].f_68[i] = Global_104212.f_2345[j /*164*/].f_68[i];
			Global_107196.f_2345[j /*164*/].f_72[i] = Global_104212.f_2345[j /*164*/].f_72[i];
			Global_107196.f_2345[j /*164*/].f_76[i] = Global_104212.f_2345[j /*164*/].f_76[i];
			Global_107196.f_2345[j /*164*/].f_80[i] = Global_104212.f_2345[j /*164*/].f_80[i];
			Global_107196.f_2345[j /*164*/].f_84[i] = Global_104212.f_2345[j /*164*/].f_84[i];
			Global_107196.f_2345[j /*164*/].f_88[i] = Global_104212.f_2345[j /*164*/].f_88[i];
			Global_107196.f_2345[j /*164*/].f_92[i] = Global_104212.f_2345[j /*164*/].f_92[i];
			Global_107196.f_2345[j /*164*/].f_96[i] = Global_104212.f_2345[j /*164*/].f_96[i];
			Global_107196.f_2345[j /*164*/].f_100[i] = Global_104212.f_2345[j /*164*/].f_100[i];
			Global_107196.f_2345[j /*164*/].f_104[i] = Global_104212.f_2345[j /*164*/].f_104[i];
			Global_107196.f_2345[j /*164*/].f_108[i] = Global_104212.f_2345[j /*164*/].f_108[i];
			Global_107196.f_2345[j /*164*/].f_112[i] = Global_104212.f_2345[j /*164*/].f_112[i];
			Global_107196.f_2345[j /*164*/].f_116[i] = Global_104212.f_2345[j /*164*/].f_116[i];
			Global_107196.f_2345[j /*164*/].f_120[i] = Global_104212.f_2345[j /*164*/].f_120[i];
			Global_107196.f_2345[j /*164*/].f_124[i] = Global_104212.f_2345[j /*164*/].f_124[i];
			Global_107196.f_2345[j /*164*/].f_128[i] = Global_104212.f_2345[j /*164*/].f_128[i];
			Global_107196.f_2345[j /*164*/].f_132[i] = Global_104212.f_2345[j /*164*/].f_132[i];
			Global_107196.f_2345[j /*164*/].f_136[i] = Global_104212.f_2345[j /*164*/].f_136[i];
			Global_107196.f_2345[j /*164*/].f_140[i] = Global_104212.f_2345[j /*164*/].f_140[i];
			Global_107196.f_2345[j /*164*/].f_144[i] = Global_104212.f_2345[j /*164*/].f_144[i];
			Global_107196.f_2345[j /*164*/].f_148[i] = Global_104212.f_2345[j /*164*/].f_148[i];
			Global_107196.f_2345[j /*164*/].f_152[i] = Global_104212.f_2345[j /*164*/].f_152[i];
			Global_107196.f_2345[j /*164*/].f_156[i] = Global_104212.f_2345[j /*164*/].f_156[i];
			Global_107196.f_2345[j /*164*/].f_160[i] = Global_104212.f_2345[j /*164*/].f_160[i];
		}
	}

	Global_107196.f_2884 = { Global_104212.f_2884 };
	Global_107196.f_2884.f_3 = Global_104212.f_2884.f_3;
	Global_107196.f_2890 = { Global_104212.f_2890 };
	Global_107196.f_2890.f_3 = { Global_104212.f_2890.f_3 };
	Global_107196.f_2890.f_6 = Global_104212.f_2890.f_6;
	Global_107196.f_2890.f_8 = Global_107196.f_2890.f_8;
	Global_107196.f_2890.f_7 = Global_104212.f_2890.f_7;
	Global_107196.f_2890.f_9 = Global_104212.f_2890.f_9;
	Global_107196.f_2890.f_11 = Global_104212.f_2890.f_11;
	Global_107196.f_2890.f_10 = Global_104212.f_2890.f_10;
	Global_107196.f_2890.f_12 = Global_104212.f_2890.f_12;
	Global_107196.f_2890.f_12.f_1 = { Global_104212.f_2890.f_12.f_1 };
	Global_107196.f_2890.f_12.f_5 = Global_104212.f_2890.f_12.f_5;
	Global_107196.f_2890.f_12.f_6 = Global_104212.f_2890.f_12.f_6;
	Global_107196.f_2890.f_12.f_7 = Global_104212.f_2890.f_12.f_7;
	Global_107196.f_2890.f_12.f_8 = Global_104212.f_2890.f_12.f_8;
	Global_107196.f_2890.f_12.f_9 = { Global_104212.f_2890.f_12.f_9 };
	Global_107196.f_2890.f_12.f_59 = { Global_104212.f_2890.f_12.f_59 };
	Global_107196.f_2890.f_12.f_62 = Global_104212.f_2890.f_12.f_62;
	Global_107196.f_2890.f_12.f_63 = Global_104212.f_2890.f_12.f_63;
	Global_107196.f_2890.f_12.f_64 = Global_104212.f_2890.f_12.f_64;
	Global_107196.f_2890.f_12.f_65 = Global_104212.f_2890.f_12.f_65;
	Global_107196.f_2890.f_12.f_77 = Global_104212.f_2890.f_12.f_77;
	Global_107196.f_2890.f_12.f_66 = Global_104212.f_2890.f_12.f_66;
	Global_107196.f_2890.f_12.f_67 = Global_104212.f_2890.f_12.f_67;
	Global_107196.f_2890.f_12.f_68 = Global_104212.f_2890.f_12.f_68;
	Global_107196.f_2890.f_12.f_69 = Global_104212.f_2890.f_12.f_69;
	Global_107196.f_2890.f_12.f_71 = Global_104212.f_2890.f_12.f_71;
	Global_107196.f_2890.f_12.f_72 = Global_104212.f_2890.f_12.f_72;
	Global_107196.f_2890.f_12.f_73 = Global_104212.f_2890.f_12.f_73;
	Global_107196.f_2890.f_12.f_74 = Global_104212.f_2890.f_12.f_74;
	Global_107196.f_2890.f_12.f_75 = Global_104212.f_2890.f_12.f_75;
	Global_107196.f_2890.f_12.f_76 = Global_104212.f_2890.f_12.f_76;
	Global_107196.f_2980 = Global_104212.f_2980;
	Global_107196.f_2980.f_1 = Global_104212.f_2980.f_1;
	Global_107196.f_2980.f_2 = Global_104212.f_2980.f_2;
	Global_107196.f_2980.f_3 = Global_104212.f_2980.f_3;
	return;
}

void func_90(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x4E7B
{
	int i;
	eCharacter j;

	*iParam0 = _GET_CURRENT_PLAYER_CHARACTER();
	iParam0->f_1 = func_155();
	unk_0x4AE338C69F2C7E27(&(iParam0->f_6), &(iParam0->f_7), &(iParam0->f_8));

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		func_124(&(iParam0->f_2884), 0);
		func_123(unk_0xC1A5EC5C986B98AD());
		func_116(unk_0xC1A5EC5C986B98AD(), false);
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &(iParam0->f_2), 1);
	
		if (iParam0->f_2 == 0 || iParam0->f_2 == joaat("OBJECT"))
			iParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = CHAR_MICHAEL; j < CHAR_MULTIPLAYER; j = j + 1)
	{
		iParam0->f_17[j] = Global_113648.f_2365.f_539.f_294[j];
	
		if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
		{
			func_109(unk_0xC1A5EC5C986B98AD(), &iParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				iParam0->f_616[j /*65*/][i] = Global_100406[j /*65*/][i];
				iParam0->f_616[j /*65*/].f_13[i] = Global_100406[j /*65*/].f_13[i];
			}
		
			iParam0->f_616[j /*65*/].f_59 = Global_100406[j /*65*/].f_59;
			iParam0->f_616[j /*65*/].f_60 = Global_100406[j /*65*/].f_60;
			iParam0->f_616[j /*65*/].f_61 = Global_100406[j /*65*/].f_61;
			iParam0->f_616[j /*65*/].f_62 = Global_100406[j /*65*/].f_62;
			iParam0->f_616[j /*65*/].f_63 = Global_100406[j /*65*/].f_63;
			iParam0->f_616[j /*65*/].f_64 = Global_100406[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				iParam0->f_616[j /*65*/].f_39[i] = Global_100406[j /*65*/].f_39[i];
				iParam0->f_616[j /*65*/].f_49[i] = Global_100406[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			iParam0->f_812[j /*477*/][i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			iParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case CHAR_MICHAEL:
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_PURCH_0"), &iParam0->f_2244[j /*32*/][0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_PURCH_1"), &iParam0->f_2244[j /*32*/][1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_ADDON_PURCH_0"), &iParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_ADDON_PURCH_1"), &iParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_ADDON_PURCH_2"), &iParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_ADDON_PURCH_3"), &iParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_ADDON_PURCH_4"), &iParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_0"), &iParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_1"), &iParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_2"), &iParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_3"), &iParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_4"), &iParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_5"), &iParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_6"), &iParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_7"), &iParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_8"), &iParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_9"), &iParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_10"), &iParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_TINT_PURCH_11"), &iParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_FRANKLIN:
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_PURCH_0"), &iParam0->f_2244[j /*32*/][0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_PURCH_1"), &iParam0->f_2244[j /*32*/][1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_ADDON_PURCH_0"), &iParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_ADDON_PURCH_1"), &iParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_ADDON_PURCH_2"), &iParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_ADDON_PURCH_3"), &iParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_ADDON_PURCH_4"), &iParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_0"), &iParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_1"), &iParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_2"), &iParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_3"), &iParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_4"), &iParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_5"), &iParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_6"), &iParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_7"), &iParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_8"), &iParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_9"), &iParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_10"), &iParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_TINT_PURCH_11"), &iParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_TREVOR:
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_PURCH_0"), &iParam0->f_2244[j /*32*/][0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_PURCH_1"), &iParam0->f_2244[j /*32*/][1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_ADDON_PURCH_0"), &iParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_ADDON_PURCH_1"), &iParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_ADDON_PURCH_2"), &iParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_ADDON_PURCH_3"), &iParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_ADDON_PURCH_4"), &iParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_0"), &iParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_1"), &iParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_2"), &iParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_3"), &iParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_4"), &iParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_5"), &iParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_6"), &iParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_7"), &iParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_8"), &iParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_9"), &iParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_10"), &iParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_TINT_PURCH_11"), &iParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		iParam0->f_9[j] = Global_113648.f_20566.f_233[j /*69*/].f_1;
		iParam0->f_13[j] = Global_60536[j];
		iParam0->f_25[0 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][j /*98*/] };
		iParam0->f_25[1 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			iParam0->f_2838[j /*15*/][i] = Global_113648.f_2365.f_493[j /*15*/][i];
			iParam0->f_2838[j /*15*/].f_5[i] = Global_113648.f_2365.f_493[j /*15*/].f_5[i];
			iParam0->f_2838[j /*15*/].f_10[i] = Global_113648.f_2365.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			iParam0->f_2345[j /*164*/][i] = Global_113648.f_2365[j /*164*/][i];
			iParam0->f_2345[j /*164*/].f_4[i] = Global_113648.f_2365[j /*164*/].f_4[i];
			iParam0->f_2345[j /*164*/].f_8[i] = Global_113648.f_2365[j /*164*/].f_8[i];
			iParam0->f_2345[j /*164*/].f_12[i] = Global_113648.f_2365[j /*164*/].f_12[i];
			iParam0->f_2345[j /*164*/].f_16[i] = Global_113648.f_2365[j /*164*/].f_16[i];
			iParam0->f_2345[j /*164*/].f_20[i] = Global_113648.f_2365[j /*164*/].f_20[i];
			iParam0->f_2345[j /*164*/].f_24[i] = Global_113648.f_2365[j /*164*/].f_24[i];
			iParam0->f_2345[j /*164*/].f_28[i] = Global_113648.f_2365[j /*164*/].f_28[i];
			iParam0->f_2345[j /*164*/].f_32[i] = Global_113648.f_2365[j /*164*/].f_32[i];
			iParam0->f_2345[j /*164*/].f_36[i] = Global_113648.f_2365[j /*164*/].f_36[i];
			iParam0->f_2345[j /*164*/].f_40[i] = Global_113648.f_2365[j /*164*/].f_40[i];
			iParam0->f_2345[j /*164*/].f_44[i] = Global_113648.f_2365[j /*164*/].f_44[i];
			iParam0->f_2345[j /*164*/].f_48[i] = Global_113648.f_2365[j /*164*/].f_48[i];
			iParam0->f_2345[j /*164*/].f_52[i] = Global_113648.f_2365[j /*164*/].f_52[i];
			iParam0->f_2345[j /*164*/].f_56[i] = Global_113648.f_2365[j /*164*/].f_56[i];
			iParam0->f_2345[j /*164*/].f_60[i] = Global_113648.f_2365[j /*164*/].f_60[i];
			iParam0->f_2345[j /*164*/].f_64[i] = Global_113648.f_2365[j /*164*/].f_64[i];
			iParam0->f_2345[j /*164*/].f_68[i] = Global_113648.f_2365[j /*164*/].f_68[i];
			iParam0->f_2345[j /*164*/].f_72[i] = Global_113648.f_2365[j /*164*/].f_72[i];
			iParam0->f_2345[j /*164*/].f_76[i] = Global_113648.f_2365[j /*164*/].f_76[i];
			iParam0->f_2345[j /*164*/].f_80[i] = Global_113648.f_2365[j /*164*/].f_80[i];
			iParam0->f_2345[j /*164*/].f_84[i] = Global_113648.f_2365[j /*164*/].f_84[i];
			iParam0->f_2345[j /*164*/].f_88[i] = Global_113648.f_2365[j /*164*/].f_88[i];
			iParam0->f_2345[j /*164*/].f_92[i] = Global_113648.f_2365[j /*164*/].f_92[i];
			iParam0->f_2345[j /*164*/].f_96[i] = Global_113648.f_2365[j /*164*/].f_96[i];
			iParam0->f_2345[j /*164*/].f_100[i] = Global_113648.f_2365[j /*164*/].f_100[i];
			iParam0->f_2345[j /*164*/].f_104[i] = Global_113648.f_2365[j /*164*/].f_104[i];
			iParam0->f_2345[j /*164*/].f_108[i] = Global_113648.f_2365[j /*164*/].f_108[i];
			iParam0->f_2345[j /*164*/].f_112[i] = Global_113648.f_2365[j /*164*/].f_112[i];
			iParam0->f_2345[j /*164*/].f_116[i] = Global_113648.f_2365[j /*164*/].f_116[i];
			iParam0->f_2345[j /*164*/].f_120[i] = Global_113648.f_2365[j /*164*/].f_120[i];
			iParam0->f_2345[j /*164*/].f_124[i] = Global_113648.f_2365[j /*164*/].f_124[i];
			iParam0->f_2345[j /*164*/].f_128[i] = Global_113648.f_2365[j /*164*/].f_128[i];
			iParam0->f_2345[j /*164*/].f_132[i] = Global_113648.f_2365[j /*164*/].f_132[i];
			iParam0->f_2345[j /*164*/].f_136[i] = Global_113648.f_2365[j /*164*/].f_136[i];
			iParam0->f_2345[j /*164*/].f_140[i] = Global_113648.f_2365[j /*164*/].f_140[i];
			iParam0->f_2345[j /*164*/].f_144[i] = Global_113648.f_2365[j /*164*/].f_144[i];
			iParam0->f_2345[j /*164*/].f_148[i] = Global_113648.f_2365[j /*164*/].f_148[i];
			iParam0->f_2345[j /*164*/].f_152[i] = Global_113648.f_2365[j /*164*/].f_152[i];
			iParam0->f_2345[j /*164*/].f_156[i] = Global_113648.f_2365[j /*164*/].f_156[i];
			iParam0->f_2345[j /*164*/].f_160[i] = Global_113648.f_2365[j /*164*/].f_160[i];
		}
	}

	unk_0xDD7756E2742E0F6D(joaat("SP0_SPECIAL_ABILITY"), &iParam0->f_2341[0], -1);
	unk_0xDD7756E2742E0F6D(joaat("SP1_SPECIAL_ABILITY"), &iParam0->f_2341[1], -1);
	unk_0xDD7756E2742E0F6D(joaat("SP2_SPECIAL_ABILITY"), &iParam0->f_2341[2], -1);
	iParam0->f_5 = 145;

	if (iParam4 == 1)
		func_92(&(iParam0->f_2890), iParam0, iParam5, 1, 1, 0);

	func_91(&(iParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_91(var uParam0) // Position - 0x5D04
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_92(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x5D26
{
	int num;

	if (iParam2 == 0)
		iParam2 = unk_0xC1A5EC5C986B98AD();

	if (unk_0x7DE17ACDD8BA2642(iParam2))
		iParam1->f_5 = _GET_PLAYER_CHARACTER_FROM_PED(iParam2);

	if (func_106(iParam2, &num, iParam3, iParam5))
		func_93(uParam0, iParam1, num, iParam4);
	else if (unk_0x7DE17ACDD8BA2642(num))
		if (!unk_0x055111B11E6624FD(num, 0))
			if (unk_0x091E6E360116B927(num, joaat("skylift")) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), num, 0))
				func_93(uParam0, iParam1, num, iParam4);

	return;
}

int func_93(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5DAE
{
	if (unk_0xFBD273FDBCF0C5BD(iParam2, 0))
	{
		func_95(uParam0, iParam2, iParam3);
		iParam1->f_4 = iParam2;
	
		if (func_94(iParam2))
			iParam1->f_3 = 1;
		else
			iParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_94(int iParam0) // Position - 0x5DEE
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_100681.f_22[i] == iParam0)
			return true;
	}

	return false;
}

void func_95(var uParam0, int iParam1, int iParam2) // Position - 0x5E1C
{
	func_101(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_98(iParam1, _CHAR_NULL, 0);
	uParam0->f_11 = func_97(iParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_96(iParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x30BE8A934C020461(iParam1, 1) };
		uParam0->f_6 = unk_0xD850DD08D5434072(iParam1);
		uParam0->f_3 = { unk_0x7A2C98D06C9C1956(iParam1) };
	
		if (unk_0x9DC9E896F189AAA5(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78253 == iParam1)
			uParam0->f_9 = 1;
	}

	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_96(int iParam0) // Position - 0x5EF8
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[i]))
			if (iParam0 == Global_77348.f_484[i])
				return 1;
	}

	return 0;
}

eCharacter func_97(int iParam0) // Position - 0x5F3A
{
	int i;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return _CHAR_NULL;

	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[i]))
			if (Global_98012[i] == iParam0)
				return Global_98022[i];
	}

	return _CHAR_NULL;
}

int func_98(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x5F9D
{
	int i;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return 0;

	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[i]))
			if (Global_98012[i] == iParam0)
				if (echParam1 == _CHAR_NULL || echParam1 == Global_98022[i])
					if (iParam2 == 0 || unk_0x504B9BB48D41C264(iParam0) == func_99(echParam1, iParam2))
						return 1;
	}

	return 0;
}

int func_99(eCharacter echParam0, int iParam1) // Position - 0x602B
{
	int num;

	if (func_31(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_100(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_100(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x606D
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113648.f_9087.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_113648.f_9087.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_101(int iParam0, var uParam1) // Position - 0x62C9
{
	int i;

	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		func_105(uParam1);
		uParam1->f_66 = unk_0x504B9BB48D41C264(iParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), unk_0xC51D12209D0B7FCF(iParam0), 16);
		*uParam1 = unk_0x46177D0BA2953EC5(iParam0);
		unk_0xD761D19F6F097C53(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5A07E8D54892E711(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x89E530D113AF6EFC(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xD1EEB010323A3956(iParam0);
		uParam1->f_67 = unk_0xCCAF06B65CCC0B97(iParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(iParam0);
		uParam1->f_70 = unk_0x1FA433B724B7085B(iParam0);
		unk_0x7C834DB7F2B3DFB2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x5CF17DD27B31C6B3(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (unk_0x0308AFE769A720D3(iParam0, 2))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 28);
	
		if (unk_0x0308AFE769A720D3(iParam0, 3))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 29);
	
		if (unk_0x0308AFE769A720D3(iParam0, 0))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 30);
	
		if (unk_0x0308AFE769A720D3(iParam0, 1))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_104(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (unk_0x05575C8395F0AAF3(iParam0, 0))
			uParam1->f_68 = unk_0x3869EA643010CD0B(iParam0);
	
		if (unk_0xAF4434A9F7368F35(uParam1->f_66))
		{
			if (unk_0xDF81E1E21E4E09BF(iParam0))
			{
				switch (unk_0x21880480C580A55F(iParam0))
				{
					case 3:
					case 0:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0x061B1200C95204CB(&(uParam1->f_77), 22);
						break;
				
					case 5:
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
			}
		}
	
		if (!unk_0x8785B34FCA0F7282(iParam0))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 9);
	
		if (unk_0x41D114B661987866(iParam0))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 10);
	
		if (unk_0x7A1F64336CB51721(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 13);
			unk_0xA24DFB72308D1D0F(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (unk_0xF0AADDC5F10AF90C(iParam0))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 12);
	
		func_103(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk_0x175FDAC9EB940479(iParam0, i + 1))
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(i + 1));
		}
	
		if (unk_0x521A50EC08B4CCFF(iParam0, 0))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 11);
		else
			unk_0x061B1200C95204CB(&(uParam1->f_77), 11);
	
		if (unk_0x2B6E67EB7FF3FD10(iParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(iParam0, "IgnoredByQuickSave"))
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 27);
		else
			unk_0x061B1200C95204CB(&(uParam1->f_77), 27);
	}

	return;
}

int func_102(int iParam0) // Position - 0x6574
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_103(var uParam0, var uParam1, var uParam2) // Position - 0x6624
{
	int i;
	int num;

	if (!unk_0xFBD273FDBCF0C5BD(*uParam0, 0))
		return 0;

	if (unk_0x6BDF27AD591C4E31(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		num = i;
	
		if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21)
		{
			uParam1->[i] = 0;
		
			if (unk_0x4B7C35CD6132E59C(*uParam0, num))
				uParam1->[i] = 1;
		}
		else if (num == 22)
		{
			if (unk_0x4B7C35CD6132E59C(*uParam0, num))
			{
				switch (unk_0xD09F72755B50666C(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = unk_0xCA36A30E79A35222(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = unk_0x222AA75EE0288312(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = unk_0x222AA75EE0288312(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_104(int iParam0) // Position - 0x6817
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_105(var uParam0) // Position - 0x6837
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_106(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x68E7
{
	var unk;

	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
				*uParam1 = unk_0xE475C458F52F1781();
			else
				*uParam1 = unk_0x95DC39736F6748E3(iParam0, 1);
		
			if (unk_0x7DE17ACDD8BA2642(*uParam1))
			{
				if (unk_0xFBD273FDBCF0C5BD(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(*uParam1, 1), unk_0x30BE8A934C020461(iParam0, 1), 1) < 100f)
					{
						if (unk_0x091E6E360116B927(*uParam1, joaat("taxi")))
							if (unk_0xA66E176E5772E965(*uParam1, -1, 0) != iParam0 && unk_0xA66E176E5772E965(*uParam1, -1, 0) != 0)
								return false;
					
						if (func_107(*uParam1, _GET_CURRENT_PLAYER_CHARACTER(), true))
						{
							unk = unk_0x688846D56810779A();
						
							if (!unk_0x4310A0DB886F9FED(unk, "save_anywhere"))
								return false;
							else if (!unk_0x3C3D6D026CF7F51B(iParam0, 1))
								return false;
						}
					
						if (iParam3 == 1)
							if (unk_0x2B6E67EB7FF3FD10(*uParam1, "IgnoredByQuickSave"))
								if (unk_0x8FA309E9ECEE409A(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (unk_0x091E6E360116B927(*uParam1, joaat("blimp")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_107(int iParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x6A16
{
	int i;
	var unk;
	int num;

	if (!unk_0x7DE17ACDD8BA2642(iParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		return false;

	for (i = 0; func_108(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (unk_0x7B0F3D01B676C014(&unk, iParam0))
				return true;
	}

	return false;
}

BOOL func_108(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x6A84
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_109(int iParam0, var uParam1, int iParam2, Hash hParam3) // Position - 0x6B5C
{
	eCharacter character;
	int i;

	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);
	
		for (i = 0; i < 12; i = i + 1)
		{
			func_114(iParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = 0; i < 9; i = i + 1)
		{
			func_113(iParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_31(character))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[character /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[character /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[character /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[character /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[character /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[character /*65*/].f_64;
		}
		else if (unk_0xA26A9A07F761D8F8() && unk_0x504B9BB48D41C264(iParam0) == unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			if (func_112(161, hParam3))
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, hParam3, 0);
			else
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, hParam3, 0);
		
			uParam1->f_60 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_ITEM, hParam3, 0);
			uParam1->f_61 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_TYPE, hParam3, 0);
		}
	
		if (unk_0xA26A9A07F761D8F8() && iParam0 == unk_0xC1A5EC5C986B98AD())
			if (func_112(161, hParam3))
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, hParam3, 0);
			else
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, hParam3, 0);
	}

	return;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, Hash hParam1, int iParam2) // Position - 0x6CFC
{
	int num;
	int num2;

	if (empsParam0 != 14192)
	{
		iParam2 == 0;
		num = Global_2805027[empsParam0 /*3*/][func_111(hParam1)];
	
		if (unk_0xDD7756E2742E0F6D(num, &num2, -1))
			return num2;
	}

	return 0;
}

Hash func_111(Hash hParam0) // Position - 0x6D39
{
	Hash hash;
	Hash hash2;

	hash = hParam0;

	if (hash == -1)
	{
		hash2 = func_49();
	
		if (hash2 > -1)
		{
			Global_2804739 = 0;
			hash = hash2;
		}
		else
		{
			hash = 0;
			Global_2804739 = 1;
		}
	}

	return hash;
}

BOOL func_112(int iParam0, Hash hParam1) // Position - 0x6D6D
{
	int num;
	BOOL num2;

	num = Global_2848280[iParam0 /*3*/][func_111(hParam1)];

	if (unk_0x494B367FE0CBD765(num, &num2, -1))
		return num2;

	return false;
}

void func_113(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x6D99
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0x6BC6C26115124DFE(iParam0, iParam1, 1);
		*uParam3 = unk_0xC5753F88DDA773E0(iParam0, iParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (iParam1 == 0)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x2394F256C5B1D879(iParam0) && unk_0xAF4BC693CE971839(iParam0) != -1)
				{
					*uParam2 = unk_0xAF4BC693CE971839(iParam0);
					*uParam3 = unk_0x32B63A52BB0B3075(iParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x72E2
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0xAC464F61BE9FD50D(iParam0, iParam1);
		*uParam3 = unk_0xEDEBC30DEBDF84C8(iParam0, iParam1);
		*uParam4 = unk_0x41CBA4CCBAA79DEF(iParam0, iParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x7523
{
	func_30();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_116(int iParam0, BOOL bParam1) // Position - 0x753C
{
	eCharacter character;
	int num;
	int i;
	var unk;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
	{
		if (iParam0 == unk_0xC1A5EC5C986B98AD())
		{
			func_117(iParam0, &Global_113648.f_2365.f_539.f_298[character /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_113648.f_2365.f_539.f_1730[i /*4*/][character] = unk_0x1949000DD3673BC9(i);
			
				if (bParam1)
				{
					num = unk_0xE926D28F18AE6F76();
				
					if (Global_113648.f_2365.f_539.f_1730[i /*4*/][character] == num)
						Global_113648.f_2365.f_539.f_1763 = i;
				}
			}
		
			unk_0xDA6E0C7F9D5A4EC1(unk_0x93E99A2DBCBA9CFA(), &unk);
		
			if (character == CHAR_MICHAEL)
				unk_0x3CC35ACFFC9C730E(joaat("SP0_PARACHUTE_CURRENT_TINT"), unk, 1);
			else if (character == CHAR_FRANKLIN)
				unk_0x3CC35ACFFC9C730E(joaat("SP1_PARACHUTE_CURRENT_TINT"), unk, 1);
			else if (character == CHAR_TREVOR)
				unk_0x3CC35ACFFC9C730E(joaat("SP2_PARACHUTE_CURRENT_TINT"), unk, 1);
		}
	}

	return;
}

void func_117(int iParam0, var uParam1) // Position - 0x762F
{
	int i;
	int j;
	int k;
	int num;
	int num2;
	int l;
	int num3;
	var unk5;
	var unk44;
	int num4;
	int num5;

	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			num = func_122(i);
		
			if (num != 0)
			{
				num2 = unk_0x91BEC56C475EB62C(iParam0, func_122(i));
				num2.f_1 = 0;
				num2.f_2 = 0;
				num2.f_3 = 0;
				num2.f_4 = 0;
			
				if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
				{
					num2.f_1 = unk_0x18974B8F28F70FE4(iParam0, num2);
				
					if (num2 == joaat("GADGET_PARACHUTE"))
						num2.f_1 = 1;
				
					num2.f_3 = unk_0x60B2BAFA7F1A9CDF(iParam0, num2);
					num2.f_4 = unk_0xBE5DF33289584192(iParam0, num2);
				
					if (num2.f_1 == -1)
						if (!unk_0xB2BC9E9923E2546A(iParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = num2.f_1;
					j = 0;
				
					for (k = func_120(num2, j); k != 0; k = func_120(num2, j))
					{
						if (unk_0x1A7C88BD7ADA98BE(iParam0, num2, k))
							unk_0xECDAB41968FF21A8(&(num2.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { num2 };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		num3 = unk_0x022B5D696E908BAE();
	
		for (l = 0; l < num3; l = l + 1)
		{
			if (unk_0xA44505E95028BA80(l, &unk5) && !func_119(unk5.f_1) && num4 < 51)
			{
				if (!unk_0xEF068EDE5319404F(unk5))
				{
					num2 = unk5.f_1;
					num2.f_1 = 0;
					num2.f_2 = 0;
					num2.f_3 = 0;
					num2.f_4 = 0;
					num2.f_1 = unk_0x18974B8F28F70FE4(iParam0, num2);
				
					if (unk_0xED31EFCAA05B93ED(iParam0, num2, 0))
					{
						num2.f_3 = unk_0x60B2BAFA7F1A9CDF(iParam0, num2);
						num2.f_4 = unk_0xBE5DF33289584192(iParam0, num2);
					}
				
					if (num2.f_1 == -1)
						if (!unk_0xB2BC9E9923E2546A(iParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->f_221[num4 /*5*/].f_1 = num2.f_1;
					num5 = 0;
				
					for (j = 0; j < unk_0x66C9E88F514EFC8C(l); j = j + 1)
					{
						if (unk_0x4DEA25423FB9A358(l, j, &unk44))
						{
							if (!func_118(unk44.f_3))
							{
								if (unk_0x1A7C88BD7ADA98BE(iParam0, num2, unk44.f_3))
									unk_0xECDAB41968FF21A8(&(num2.f_2), num5);
							
								num5 = num5 + 1;
							}
						}
					}
				}
			
				if (num2 != 0)
				{
					if (!unk_0xED31EFCAA05B93ED(iParam0, num2, 0))
					{
						num2 = 0;
						num2.f_1 = 0;
					}
				}
			
				uParam1->f_221[num4 /*5*/] = { num2 };
				num4 = num4 + 1;
			}
		}
	}

	return;
}

BOOL func_118(int iParam0) // Position - 0x78B7
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_119(int iParam0) // Position - 0x7958
{
	if (unk_0xA26A9A07F761D8F8())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
				return true;
		}
	}

	return false;
}

int func_120(int iParam0, int iParam1) // Position - 0x7B32
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk40;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		default:
			if (iParam0 != 0)
			{
				num2 = func_121(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x99844FCFECAC01A5(num2); i = i + 1)
					{
						if (unk_0xDDBECC1D7EC5DB2B(num2, i, &unk40))
						{
							if (!func_118(unk40.f_3))
							{
								if (num3 == iParam1)
									return unk40.f_3;
							
								num3 = num3 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_121(int iParam0, var uParam1) // Position - 0x87AC
{
	int i;
	int num;

	num = unk_0xDF411E9128FAD473();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk_0xF65F6F7A093E58A1(i, uParam1))
			if (uParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

int func_122(int iParam0) // Position - 0x87E7
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_123(int iParam0) // Position - 0x8A5B
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
		Global_113648.f_2365.f_539.f_294[character] = unk_0x9E499A04DE5FC62A(iParam0);

	return;
}

void func_124(var uParam0, int iParam1) // Position - 0x8A97
{
	int num;
	var unk;
	var unk4;
	eCharacter character;

	*uParam0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	uParam0->f_3 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
	uParam0->f_5 = unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD());

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		uParam0->f_4 = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x24B651D85CCE5EB4(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_78807, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_78807, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0xAF0CB15312D8B8E3(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_128(&num))
		{
			if (func_126(num, &unk, &unk4))
			{
				unk.f_2 = unk.f_2 + 1f;
				*uParam0 = { unk };
				uParam0->f_3 = unk4;
			}
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			character = _GET_CURRENT_PLAYER_CHARACTER();
		
			if (character == CHAR_MICHAEL)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (character == CHAR_FRANKLIN)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (character == CHAR_TREVOR)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_125(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_125(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x8FE6
{
	var unk;
	var unk2;

	if (!unk_0x5B1AFB012FBCA44D(uParam0))
	{
		unk = unk_0xAF0CB15312D8B8E3(fParam4, sParam3);
	
		if (!unk_0x4D3D95146FD3490D(unk))
			return false;
	
		unk2 = unk_0x534ACC29D082254F(uParam0);
	
		if (unk2 == unk)
			return true;
	}

	return false;
}

BOOL func_126(int iParam0, var uParam1, var uParam2) // Position - 0x902A
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_127(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_127(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x97A9
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_128(var uParam0) // Position - 0x97F0
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_154())
		{
			*uParam0 = func_134(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 6, -1, false, true, -1);
		
			if (func_133(*uParam0) && !func_129(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_129(int iParam0) // Position - 0x984B
{
	return func_130(iParam0, 0, true);
}

BOOL func_130(int iParam0, int iParam1, BOOL bParam2) // Position - 0x985B
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (unk_0xA26A9A07F761D8F8())
		if (func_132() == 0)
			return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_131(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

eMPStat func_131(int iParam0) // Position - 0x98BC
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_SHOPFM_HAIRDO_01_BH;
	
		case 1:
			return MP_STAT_SHOPFM_HAIRDO_02_SC;
	
		case 2:
			return MP_STAT_SHOPFM_HAIRDO_03_V;
	
		case 3:
			return MP_STAT_SHOPFM_HAIRDO_04_SS;
	
		case 4:
			return MP_STAT_SHOPFM_HAIRDO_05_MP;
	
		case 5:
			return MP_STAT_SHOPFM_HAIRDO_06_HW;
	
		case 6:
			return MP_STAT_SHOPFM_HAIRDO_07_PB;
	
		case 7:
			return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
	
		case 8:
			return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
	
		case 9:
			return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
	
		case 10:
			return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
	
		case 11:
			return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
	
		case 12:
			return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
	
		case 13:
			return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
	
		case 14:
			return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
	
		case 15:
			return MP_STAT_SHOPFM_CLOTHES_M_03_H;
	
		case 16:
			return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
	
		case 17:
			return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
	
		case 18:
			return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
	
		case 19:
			return MP_STAT_SHOPFM_CLOTHES_H_02_B;
	
		case 20:
			return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
	
		case 21:
			return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
	
		case 22:
			return MP_STAT_SHOPFM_TATTOO_01_HW;
	
		case 23:
			return MP_STAT_SHOPFM_TATTOO_02_SS;
	
		case 24:
			return MP_STAT_SHOPFM_TATTOO_03_PB;
	
		case 25:
			return MP_STAT_SHOPFM_TATTOO_04_VC;
	
		case 26:
			return MP_STAT_SHOPFM_TATTOO_05_ELS;
	
		case 27:
			return MP_STAT_SHOPFM_TATTOO_06_GOH;
	
		case 28:
			return MP_STAT_SHOPFM_GUN_01_DT;
	
		case 29:
			return MP_STAT_SHOPFM_GUN_02_SS;
	
		case 30:
			return MP_STAT_SHOPFM_GUN_03_HW;
	
		case 31:
			return MP_STAT_SHOPFM_GUN_04_ELS;
	
		case 32:
			return MP_STAT_SHOPFM_GUN_05_PB;
	
		case 33:
			return MP_STAT_SHOPFM_GUN_06_LS;
	
		case 34:
			return MP_STAT_SHOPFM_GUN_07_MW;
	
		case 35:
			return MP_STAT_SHOPFM_GUN_08_CS;
	
		case 36:
			return MP_STAT_SHOPFM_GUN_09_GOH;
	
		case 37:
			return MP_STAT_SHOPFM_GUN_10_VWH;
	
		case 38:
			return MP_STAT_SHOPFM_GUN_11_ID1;
	
		case 39:
			return MP_STAT_SHOPFM_CARMOD_01_AP;
	
		case 40:
			return MP_STAT_SHOPFM_CARMOD_05_ID2;
	
		case 41:
			return MP_STAT_SHOPFM_CARMOD_06_BT1;
	
		case 42:
			return MP_STAT_SHOPFM_CARMOD_07_CS1;
	
		case 43:
			return MP_STAT_SHOPFM_CARMOD_08_CS6;
	
		case 44:
			return MP_STAT_RAYPISTOL_FM_AMMO_CURRENT;
	
		case 45:
			return MP_STAT_SHOPFM_PERS_GAR;
	
		case 46:
			return MP_STAT_SHOPFM_PERS_GUN;
	
		case 47:
			return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
	
		case 48:
			return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
	
		case 49:
			return MP_STAT_SHOPFM_PERS_GUN_ARENA;
	
		case 52:
			return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
	
		case 50:
			return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
	
		case 51:
			return MP_STAT_SHOPFM_CLOTHES_CASINO;
	
		case 53:
			return MP_STAT_SHOPFM_PERS_GUN_SUB;
	
		case 54:
			return MP_STAT_SHOPFM_TATTOO_07_CCT;
	
		case 55:
			return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
	
		case 56:
			return MP_STAT_SHOPFM_PERS_GUN_FIXER;
	
		case 57:
			return MP_STAT_SHOPFM_CLOTHES_STUDIO;
	
		case 58:
			return MP_STAT_GBTELTIMESPLAYEDGOONPREV;
	
		case 59:
			return MP_STAT_TAMPA3_FMINI_HELDTIME;
	
		default:
			break;
	}

	return 14192;
}

int func_132() // Position - 0x9C55
{
	return Global_32163;
}

BOOL func_133(int iParam0) // Position - 0x9C60
{
	return func_130(iParam0, 5, true);
}

int func_134(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x9C70
{
	int i;
	float num;
	float num2;
	int num3;

	num2 = 1000000f;
	num3 = -1;

	for (i = 0; i <= 59; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_153(i))
		{
			if (!bParam5 || func_152(i))
			{
				num = unk_0x2E496FE654DA4166(uParam0, func_135(i, false), 1);
			
				if (num < num2 && num <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num2 = num;
					num3 = i;
				}
			}
		}
	}

	return num3;
}

Vector3 func_135(int iParam0, BOOL bParam1) // Position - 0x9D12
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_149(Global_102825);
	
		case 46:
			if (Global_1853747 != _INVALID_PLAYER_INDEX())
				if (func_147(Global_1853747))
					return func_140(2, 2);
				else if (func_139(Global_1853747))
					return func_140(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return 510.1f, 4749.5f, -69f;
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1970473;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_136();
	
		case 59:
			return 560f, -405f, -69.6591f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_136() // Position - 0xA462
{
	if (!_IS_NULL_VECTOR(Global_1956117))
		return Global_1956117;

	switch (func_137())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_137() // Position - 0xA75D
{
	return Global_2652258.f_2650;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xA76C
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_139(Player plParam0) // Position - 0xA796
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 0) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 1) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 2))
			return true;

	return false;
}

Vector3 func_140(int iParam0, int iParam1) // Position - 0xA7EE
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1853747 != _INVALID_PLAYER_INDEX())
		if (iParam1 == 3)
			if (func_141(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
				if (func_141(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
				if (func_141(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_141(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0xA898
{
	var unk;
	var unk7;
	var unk13;
	var unk19;

	if (!func_146(iParam3, &unk))
		return false;

	if (!func_146(iParam1, &unk7))
		return false;

	if (!bParam4)
		unk13 = { func_144(iParam0) };
	else
		unk13 = { func_143(iParam0) };

	unk19 = { unk13 - unk };
	unk19 = { func_142(unk19, -unk.f_3.f_2) };
	unk19 = { func_142(unk19, unk7.f_3.f_2) };
	*uParam2 = { unk_0xF2A6E8EA57F9D501(unk7, 0f, unk19) };
	uParam2->f_3 = { unk13.f_3 };
	return true;
}

Vector3 func_142(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0xA92D
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_143(int iParam0) // Position - 0xA971
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_144(int iParam0) // Position - 0xAAF5
{
	return func_145(iParam0);
}

struct<6> func_145(int iParam0) // Position - 0xAB03
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_146(int iParam0, var uParam1) // Position - 0xB5CA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_147(Player plParam0) // Position - 0xB64C
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 3) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 4) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 5))
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xB6A4
{
	return -1;
}

Vector3 func_149(int iParam0) // Position - 0xB6AD
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return 520.0001f, 4750f, -70f;
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_150() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_150() // Position - 0xB924
{
	return func_151(unk_0x93E99A2DBCBA9CFA());
}

int func_151(int iParam0) // Position - 0xB934
{
	return unk_0x4186606EC622CA48(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

BOOL func_152(int iParam0) // Position - 0xB951
{
	return func_130(iParam0, 0, false);
}

int func_153(int iParam0) // Position - 0xB961
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_154() // Position - 0xBC8A
{
	return Global_100733.f_387 > 0;
}

int func_155() // Position - 0xBC9B
{
	var unk;

	func_165(&unk, unk_0x731F95B6458DCF80());
	func_164(&unk, unk_0x77BBAAED3E25322C());
	func_163(&unk, unk_0x30DFE1FFD2CC7420());
	func_158(&unk, unk_0x8C0F17CAC308A14B());
	func_157(&unk, unk_0x61117764C67882B7());
	func_156(&unk, unk_0x367F557725B53815());
	return unk;
}

void func_156(var uParam0, int iParam1) // Position - 0xBCE1
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_157(var uParam0, int iParam1) // Position - 0xBD67
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_158(var uParam0, int iParam1) // Position - 0xBD9A
{
	int num;
	int num2;

	num = func_162(*uParam0);
	num2 = func_160(*uParam0);

	if (iParam1 < 1 || iParam1 > func_159(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_159(int iParam0, int iParam1) // Position - 0xBDEB
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_160(int iParam0) // Position - 0xBE8D
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_161(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBEAF
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_162(int iParam0) // Position - 0xBEC6
{
	return iParam0 & 15;
}

void func_163(var uParam0, int iParam1) // Position - 0xBED3
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_164(var uParam0, int iParam1) // Position - 0xBF0D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_165(var uParam0, int iParam1) // Position - 0xBF48
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_166(int iParam0) // Position - 0xBF84
{
	int num;
	var unk;

	if (unk_0xCCE9BCDAB8B7FAED() || func_168())
	{
		num = iParam0;
		unk_0x989939160154E37F(9, &num, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_167())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "SPRC_", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "_STR", 24);
		unk_0x98F31DBBB3410994(9, &unk);
	}

	return;
}

BOOL func_167() // Position - 0xBFDD
{
	return unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A();
}

BOOL func_168() // Position - 0xBFF3
{
	return unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33();
}

void func_169(char* sParam0, var uParam1, int iParam2) // Position - 0xC00B
{
	if (!unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		unk_0x83332E38D6284FF5(&Global_97751, 0, 0, 0, 1, 0);
		TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
	unk_0x363D7D2154F0040D(sParam0, uParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xC04C
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

BOOL func_171(Any* panParam0) // Position - 0xC074
{
	int num;

	if (func_192(&(panParam0->f_1)))
	{
		if (!unk_0x2AC37494BBF1DB16(&(panParam0->f_9)))
		{
			func_191(true);
			func_189(panParam0, 1, func_190(*panParam0));
		}
	
		if (panParam0->f_27)
		{
			if (func_188(*panParam0))
			{
				while (!unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					func_239();
					SYSTEM::WAIT(0);
				}
			}
		}
	
		func_172(*panParam0);
		num = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(panParam0->f_1), panParam0, 61, 54000);
		unk_0x037A80676B8FF0F5(&(panParam0->f_1));
	
		if (unk_0xFD017BA8C1B2996F())
		{
			func_196("Initial cutscene loaded and passing to RC mission.");
			unk_0x43B07F0C6524441F(num);
		}
		else
		{
			func_196("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x423A98584B1756BF();
		}
	
		return true;
	}

	return false;
}

void func_172(int iParam0) // Position - 0xC119
{
	var unk;

	func_187();

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 250, 0);
	}

	if (func_186(iParam0))
		unk_0x4AD381723E4E35A2(unk_0xC1A5EC5C986B98AD(), 0);

	unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
	unk_0x32FF0B09752F532B(0, 1);
	unk_0x32FF0B09752F532B(3, 1);
	unk_0x32FF0B09752F532B(2, 1);

	if (Global_44446 == true)
		if (func_184(unk_0xC1A5EC5C986B98AD()))
			func_175(unk_0xC1A5EC5C986B98AD());

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (iParam0 < 63)
		{
			func_173(iParam0);
			unk = { func_14(iParam0) };
			unk_0x97DBA2AA6C70AFC7(1, &unk);
		}
	}

	return;
}

void func_173(eCharacter echParam0) // Position - 0xC1B4
{
	if (echParam0 < 63)
	{
		func_174();
		Global_78814 = echParam0;
		Global_78813 = 0;
		Global_78816 = 7;
	}

	return;
}

void func_174() // Position - 0xC1DA
{
	Global_78813 != 6;

	if (Global_78818)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_78818 = false;
		Global_23270.f_8892 = 0;
	}

	Global_78813 = 6;
	Global_78815 = -1;
	Global_78814 = -1;
	return;
}

void func_175(int iParam0) // Position - 0xC212
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return;

	num = func_183(iParam0);

	if (!num == -1)
	{
		num2 = Global_44232[num /*5*/];
		func_178(1, num2, 1);
		return;
	}

	num3 = func_177(iParam0);

	if (num3 == -1)
		return;

	func_176(num3);
	return;
}

void func_176(int iParam0) // Position - 0xC26B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_177(int iParam0) // Position - 0xC2EE
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_178(int iParam0, int iParam1, int iParam2) // Position - 0xC31F
{
	func_179(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xC334
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_181(iParam0, iParam1, iParam2))
		return;

	num = func_180();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_180() // Position - 0xC3B6
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_181(int iParam0, int iParam1, int iParam2) // Position - 0xC3E7
{
	if (func_182(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_182(int iParam0, int iParam1, int iParam2) // Position - 0xC402
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_183(int iParam0) // Position - 0xC44E
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!Global_44232[i /*5*/] == -1)
			if (iParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_184(var uParam0) // Position - 0xC497
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (!unk_0x66599E73DBA5A850(uParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(int iParam0) // Position - 0xC4B7
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
		if (!unk_0x055111B11E6624FD(iParam0, 0))
			return true;

	return false;
}

BOOL func_186(int iParam0) // Position - 0xC4D8
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}

	return true;
}

void func_187() // Position - 0xC52B
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;

	unk_0x061B1200C95204CB(&Global_8253, 25);
	unk_0xECDAB41968FF21A8(&Global_8254, 11);
	return;
}

BOOL func_188(int iParam0) // Position - 0xC5A8
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
	}

	return true;
}

void func_189(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xC5FB
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_28[i]))
			unk_0x03879CC8EF9E3635(panParam0->f_28[i], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[i]))
			unk_0x03879CC8EF9E3635(panParam0->f_35[i], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
	}

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_41[i]))
			unk_0x03879CC8EF9E3635(panParam0->f_41[i], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
	}

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), iParam1);
	
		if (bParam2)
			unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_UNARMED"), 1);
	}

	return;
}

BOOL func_190(int iParam0) // Position - 0xC6F0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
	}

	return true;
}

void func_191(BOOL bParam0) // Position - 0xC75B
{
	var unk;

	unk = unk_0x5DC3DCA82C806319();

	if (!unk_0x8C1810CF0182E949(unk))
	{
		if (bParam0)
		{
		}
	
		unk_0xE333240A90F2FF3C(unk, bParam0, 16);
		unk_0xE333240A90F2FF3C(unk, bParam0, 32);
	}

	func_45(true, true, false, 0, false, false, false);
	return;
}

BOOL func_192(var uParam0) // Position - 0xC79A
{
	if (!unk_0x2AC37494BBF1DB16(uParam0))
	{
		unk_0x3EC562D93709C894(uParam0);
	
		while (!unk_0x6CAF14BE58B4BFF8(uParam0))
		{
			unk_0x3EC562D93709C894(uParam0);
			SYSTEM::WAIT(0);
		}
	
		return true;
	}

	func_196("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_193() // Position - 0xC7D7
{
	Global_20591 = 0;
	func_194();
	return;
}

void func_194() // Position - 0xC7E7
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;

	if (unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}

	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xC83E
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
		return true;

	return false;
}

void func_196(char* sParam0) // Position - 0xC860
{
	!unk_0x2AC37494BBF1DB16(sParam0);
	return;
}

BOOL IS_RC_FINE_AND_IN_RANGE(Any* panParam0, BOOL bParam1) // Position - 0xC872
{
	var unk;

	if (Global_78558)
	{
		func_196("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}

	func_11(*panParam0, &unk);

	if (func_238(*panParam0) || func_236(*panParam0) || Global_78804 == true)
		return true;

	if (!unk_0xCBE2EC2868A6C438())
	{
		func_196("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}

	if (func_229(*panParam0))
	{
		if (*panParam0 == 19)
			func_228(panParam0->f_28[0]);
	
		func_196("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}

	if (panParam0->f_25 == 1)
		if (!func_208(panParam0, true, 0))
			return false;
	else if (panParam0->f_16 == 0)
		if (!func_208(panParam0, false, 0))
			return false;

	if (*panParam0 == 16 || *panParam0 == 9 || *panParam0 == 18 || *panParam0 == 22 || *panParam0 == 32 || *panParam0 == 51)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, true))
		{
			if (*panParam0 == 16)
				func_204(panParam0);
			else
				func_202(panParam0);
		
			return false;
		}
	}
	else if (*panParam0 == 24)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
		{
			func_202(panParam0);
			return false;
		}
	}
	else if (*panParam0 == 6)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
			return false;
	}
	else if (panParam0->f_26 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, false))
		{
			func_202(panParam0);
			return false;
		}
	}
	else if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, false))
		{
			func_202(panParam0);
			return false;
		}
	}

	if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[0]))
			if (!unk_0x1C4E4DC1EFE24DF1(panParam0->f_35[0], unk.f_6, 8f, 8f, 8f, 0, 1, 0))
				return false;

	if (*panParam0 == 10)
	{
		if (unk_0xD612176B6DC58EF7(-1, panParam0->f_17[0 /*3*/], 8f))
		{
			func_196("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}

	if (unk.f_4 != 17)
	{
		if (!IS_BIT_SET(unk.f_26, _GET_CURRENT_PLAYER_CHARACTER()))
		{
			func_196("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}

	if (func_201(&(panParam0->f_48)) && bParam1)
		func_198(panParam0->f_28[0], &(panParam0->f_48), *panParam0);

	return true;
}

void func_198(int iParam0, var uParam1, int iParam2) // Position - 0xCAE2
{
	var unk;
	var unk2;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_201(uParam1))
				{
					if (unk_0x2BBF749E555360DC(*uParam1))
					{
						unk_0x35DD50D05C962B6A(iParam0);
					
						if (iParam2 != 21)
						{
							if (func_127(uParam1->f_5, 0f, 0f, 0f, false))
							{
								unk_0x3EE48ADC8C7F5CC4(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xDBC7406226B5540E(&unk);
							
								if (func_200(uParam1))
									unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								else
									unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
							
								unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0xF2CFC6EC8C85FA78(unk);
								unk_0x3D7110D966B0CEA2(iParam0, unk);
								unk_0x63EF69C6969A3D26(&unk);
							}
						}
						else
						{
							unk_0xC4F7B29AE0A7D629(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
					
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
		
			case 2:
				if (!func_200(uParam1) || !unk_0x7BB3D8F4F6310EB8(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_199(iParam2) && !unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 25f))
					{
						unk_0x06A2A5F6A6959BE7(iParam0, unk_0xC1A5EC5C986B98AD(), 0);
						uParam1->f_3 = 5;
					}
					else if (func_200(uParam1) && uParam1->f_4 == 0 && unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
		
			case 3:
				unk_0xDBC7406226B5540E(&unk2);
			
				if (func_127(uParam1->f_5, 0f, 0f, 0f, false))
				{
					unk_0x3EE48ADC8C7F5CC4(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
			
				unk_0xF2CFC6EC8C85FA78(unk2);
				unk_0x3D7110D966B0CEA2(iParam0, unk2);
				unk_0x63EF69C6969A3D26(&unk2);
				uParam1->f_4 = 1;
			
				if (func_199(iParam2))
					uParam1->f_3 = 2;
				else
					uParam1->f_3 = 0;
				break;
		
			case 5:
				if (!func_199(iParam2) || unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 10f))
				{
					if (func_127(uParam1->f_5, 0f, 0f, 0f, false))
						unk_0x3EE48ADC8C7F5CC4(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					else
						unk_0xC4F7B29AE0A7D629(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				
					uParam1->f_3 = 2;
				}
				break;
		}
	}

	return;
}

BOOL func_199(int iParam0) // Position - 0xCE3A
{
	if (iParam0 == 17 || iParam0 == 20)
		return true;

	return false;
}

BOOL func_200(var uParam0) // Position - 0xCE5A
{
	if (unk_0x2AC37494BBF1DB16(uParam0->f_2))
		return false;

	return true;
}

BOOL func_201(var uParam0) // Position - 0xCE72
{
	if (unk_0x2AC37494BBF1DB16(*uParam0) || unk_0x2AC37494BBF1DB16(uParam0->f_1))
		return false;

	return true;
}

void func_202(Any* panParam0) // Position - 0xCE97
{
	int i;
	var unk;

	if (*panParam0 == 52)
	{
		func_203(&panParam0->f_41[1]);
		func_203(&panParam0->f_41[2]);
	}

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
	{
		for (i = 0; i <= panParam0->f_28 - 1; i = i + 1)
		{
			if (func_184(panParam0->f_28[i]))
			{
				if (!unk_0x3C3D6D026CF7F51B(panParam0->f_28[i], 0))
				{
					unk_0xDDE449983CE7572E(panParam0->f_28[i], 1, 0);
					unk_0x2718E9CC165A99F6(panParam0->f_28[0], 0);
				}
			
				unk_0x71A535529C1CA5DF(panParam0->f_28[i], 1);
			
				if (*panParam0 == 34)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_41[0]))
					{
						unk_0xDDE449983CE7572E(panParam0->f_41[0], 1, 0);
						unk_0x2718E9CC165A99F6(panParam0->f_41[0], 0);
					}
				}
			
				switch (*panParam0)
				{
					case 19:
						func_228(panParam0->f_28[i]);
						break;
				
					case 8:
						unk_0x28818732C8F0F80E("rcmcollect_paperleadinout@");
					
						while (!unk_0x2BBF749E555360DC("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
					
						unk_0xDBC7406226B5540E(&unk);
						unk_0x3EE48ADC8C7F5CC4(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(unk);
						unk_0x3D7110D966B0CEA2(panParam0->f_28[i], unk);
						unk_0x63EF69C6969A3D26(&unk);
						break;
				
					case 0:
					case 1:
						unk_0x28818732C8F0F80E("rcmabigail");
					
						while (!unk_0x2BBF749E555360DC("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
					
						unk_0xDBC7406226B5540E(&unk);
						unk_0x3EE48ADC8C7F5CC4(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(unk);
						unk_0x3D7110D966B0CEA2(panParam0->f_28[i], unk);
						unk_0x63EF69C6969A3D26(&unk);
						break;
				
					case 32:
						unk_0x28818732C8F0F80E("rcmminute1");
					
						while (!unk_0x2BBF749E555360DC("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
					
						unk_0xDBC7406226B5540E(&unk);
					
						if (i == 0)
							unk_0x3EE48ADC8C7F5CC4(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						else
							unk_0x3EE48ADC8C7F5CC4(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
					
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(unk);
						unk_0x3D7110D966B0CEA2(panParam0->f_28[i], unk);
						unk_0x63EF69C6969A3D26(&unk);
						break;
				
					case 24:
						unk_0x28818732C8F0F80E("special_ped@hao@base");
					
						while (!unk_0x2BBF749E555360DC("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
					
						unk_0xDBC7406226B5540E(&unk);
						unk_0x3EE48ADC8C7F5CC4(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(unk);
						unk_0x3D7110D966B0CEA2(panParam0->f_28[i], unk);
						unk_0x63EF69C6969A3D26(&unk);
						break;
				
					default:
						unk_0xA0E06A3361300416(panParam0->f_28[i]);
						unk_0xC6C9BF71106ABCAC(panParam0->f_28[i], unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						break;
				}
			}
		}
	}

	return;
}

void func_203(var uParam0) // Position - 0xD19B
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
	
		unk_0xEF078F1FEE785D3E(uParam0);
	}

	return;
}

void func_204(Any* panParam0) // Position - 0xD1C6
{
	int i;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
	{
		for (i = 0; i <= panParam0->f_28 - 1; i = i + 1)
		{
			if (func_184(panParam0->f_28[i]))
			{
				unk_0x7FE5E05BE63F6CB8(panParam0->f_28[i], 1, 0);
				unk_0xC5B2830898581862(panParam0->f_28[i], 0);
				unk_0x71A535529C1CA5DF(panParam0->f_28[i], 1);
				unk_0xCAC2B0C65B18E755(panParam0->f_28[i], unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0x1EEF71E3CDD868D3(&panParam0->f_28[i]);
			}
		}
	}

	return;
}

BOOL CHECK_VEHICLES_OK(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD246
{
	int i;
	int num;
	int num2;
	int num3;

	if (bParam1)
		num = panParam0->f_35 - 1;
	else
		num = 0;

	if (func_184(unk_0xC1A5EC5C986B98AD()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (unk_0x7DE17ACDD8BA2642(panParam0->f_35[i]))
			{
				if (unk_0x055111B11E6624FD(panParam0->f_35[i], 0))
				{
					func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
			
				if (!unk_0xFBD273FDBCF0C5BD(panParam0->f_35[i], 0))
				{
					func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
			
				if (unk_0x7559C38E6535AB89(panParam0->f_35[i], unk_0xC1A5EC5C986B98AD(), 0))
				{
					func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
			
				if (unk_0x2935B4D6CE81318D(panParam0->f_35[i]) < 850)
				{
					func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
			
				if (bParam2)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (unk_0x110B96B5C67CC73B(panParam0->f_35[i], unk_0xC1A5EC5C986B98AD()) && unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 5f)
						{
							func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
					
						num2 = unk_0xE475C458F52F1781();
					
						if (func_207(num2))
						{
							if (unk_0x504B9BB48D41C264(num2) == joaat("towtruck") || unk_0x504B9BB48D41C264(num2) == joaat("towtruck2"))
							{
								if (func_207(panParam0->f_35[i]))
								{
									if (unk_0xF1A395BE96006DEF(num2, panParam0->f_35[i]))
									{
										func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						num3 = unk_0xE475C458F52F1781();
					
						if (func_207(num3))
						{
							if (unk_0x110B96B5C67CC73B(panParam0->f_35[i], num3) && unk_0xDC58AE028CB223BA(num3) > 6f)
							{
								func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
					
						if (*panParam0 == 16)
						{
							if (func_206(unk_0xC1A5EC5C986B98AD(), panParam0->f_35[i]))
							{
								func_196("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
		}
	}

	return true;
}

BOOL func_206(var uParam0, var uParam1) // Position - 0xD404
{
	var unk;

	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam1, 0))
		{
			unk = unk_0xB3011BC7288F3091(uParam0);
		
			if (unk == uParam1)
				return true;
		}
	}

	return false;
}

BOOL func_207(int iParam0) // Position - 0xD434
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(iParam0))
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
			if (!unk_0x584CD220C093B0B4(iParam0))
				return true;

	return false;
}

BOOL func_208(Any* panParam0, BOOL bParam1, int iParam2) // Position - 0xD45E
{
	int i;
	int num;

	if (bParam1)
		num = panParam0->f_28 - 1;
	else
		num = 0;

	if (*panParam0 == 16)
		iParam2 = 1;

	if (*panParam0 == 30)
		iParam2 = 1;

	if (func_184(unk_0xC1A5EC5C986B98AD()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (unk_0x7DE17ACDD8BA2642(panParam0->f_28[i]))
			{
				if (!unk_0x66599E73DBA5A850(panParam0->f_28[i]))
				{
					if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), panParam0->f_28[i]))
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								func_193();
						
							func_196("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
				
					if (unk_0x603C398B47455767(panParam0->f_28[i]) || unk_0x07960491F4346AF3(panParam0->f_28[i]) || unk_0x02EC000DE597469F(panParam0->f_28[i]))
					{
						if (iParam2 == 0)
							func_202(panParam0);
						else
							func_204(panParam0);
					
						func_196("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
				
					if (unk_0x48A4D45B3B4CEFFD(panParam0->f_28[i]))
					{
						if (unk_0xEAEF747543427AC5(panParam0->f_28[i], unk_0xC1A5EC5C986B98AD(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							func_196("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
				
					if (func_227(*panParam0))
					{
						if (!func_245(*panParam0))
						{
							if (func_222(panParam0->f_28[i], true, false, false, false))
							{
								if (iParam2 == 0)
									func_202(panParam0);
								else
									func_204(panParam0);
							
								func_196("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
					
						if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(panParam0->f_28[i], 1), 15f))
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							func_196("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (func_210(panParam0->f_28[i], 1126825984))
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							func_196("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
				
					if (!func_209(*panParam0))
					{
						if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(panParam0->f_28[i], 1), 5f))
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							func_196("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
						{
							if (iParam2 == 0)
								func_202(panParam0);
							else
								func_204(panParam0);
						
							func_196("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_196("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
				
					if (*panParam0 == 34)
					{
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_41[0]))
						{
							unk_0xDDE449983CE7572E(panParam0->f_41[0], 1, 0);
							unk_0x2718E9CC165A99F6(panParam0->f_41[0], 0);
						}
					}
				
					return false;
				}
			}
		}
	}

	return true;
}

BOOL func_209(int iParam0) // Position - 0xD71A
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 52 || iParam0 == 53)
		return true;

	return false;
}

BOOL func_210(var uParam0, int iParam1) // Position - 0xD74E
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		if (func_221(uParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), uParam0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
				num = 40f;
			else
				num = 3f;
		
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), uParam0, num, num, num, 0, 1, 0))
				if (func_211(uParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_211(var uParam0, int iParam1) // Position - 0xD7C4
{
	return func_212(uParam0, unk_0xC1A5EC5C986B98AD(), iParam1, 1, 250, 7);
}

BOOL func_212(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xD7DC
{
	BOOL flag;
	var unk;
	int num;

	num = func_220(uParam0, uParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam1))
	{
		if (num != -1)
			func_219(&iLocal_37[num /*4*/]);
	
		return false;
	}

	if (!func_216(uParam0, uParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_215();
	
		if (num == -1)
			return false;
	
		iLocal_37[num /*4*/].f_1 = uParam0;
		iLocal_37[num /*4*/].f_2 = uParam1;
	}

	unk = { unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f) };
	flag = func_213(&iLocal_37[num /*4*/], unk, uParam1, &(iLocal_37[num /*4*/].f_3), uParam0, iParam5);
	return flag || unk_0xA5E11AF0A2B928C1() - iLocal_37[num /*4*/].f_3 < iParam4;
}

BOOL func_213(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xD89D
{
	var unk;
	var unk2;
	var unk5;
	int num;
	int num2;

	num = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		unk2 = { func_214(uParam4, iParam7) };
		*uParam0 = unk_0xB4C9A1D39D0533BF(uParam1, unk2 + ((unk2 - uParam1) * { 0.1f, 0.1f, 0.1f }), 511, uParam6, 7);
		return 0;
	}

	num2 = unk_0x5A2817B89A8ECCD2(*uParam0, &unk, &unk2, &unk5, &num);

	if (num2 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (num2 == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (unk_0x71904BD37B848CAF(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0x9C8D7679C15E75FF(num) == uParam4)
		{
			if (bLocal_78)
				unk_0x69151260CB07DF0E(uParam1, unk_0x30BE8A934C020461(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = unk_0xA5E11AF0A2B928C1();
			return 1;
		}
	
		return 0;
	}

	if (unk_0xA6B591D40DE982B5(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0x3C3D6D026CF7F51B(uParam4, 0))
		{
			if (unk_0x4DFB7A1A6909D574(num) == unk_0x95DC39736F6748E3(uParam4, 0))
			{
				if (bLocal_78)
					unk_0x69151260CB07DF0E(uParam1, unk_0x30BE8A934C020461(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_214(var uParam0, int iParam1) // Position - 0xD9C9
{
	int num;

	if (iParam1 == 7)
	{
		num = unk_0x15A88CFAAFFC6C4B(0, 7);
		iParam1 = num;
	}

	if (iParam1 == 0)
		return unk_0x30BE8A934C020461(uParam0, 1);
	else if (iParam1 == 1)
		return unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return unk_0x985D9D5ED4D5145A(uParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return unk_0x985D9D5ED4D5145A(uParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return unk_0x985D9D5ED4D5145A(uParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return unk_0x985D9D5ED4D5145A(uParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return unk_0x985D9D5ED4D5145A(uParam0, 36864, 0f, 0f, 0f);

	return unk_0x30BE8A934C020461(uParam0, 1);
}

int func_215() // Position - 0xDA8E
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/] == 0 && iLocal_37[i /*4*/].f_1 == 0 && iLocal_37[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_216(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0xDAD8
{
	var unk;
	var unk4;
	float num;

	unk = { func_218(unk_0x30BE8A934C020461(uParam1, 1) - unk_0x30BE8A934C020461(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		unk4 = { unk_0x26A9C8234C71B669(uParam0) };
	else
		unk4 = { func_218(unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f)) };

	num = func_217(unk4, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_217(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xDB69
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_218(float fParam0, var uParam1, var uParam2) // Position - 0xDB8A
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_219(var uParam0) // Position - 0xDBC9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_220(var uParam0, var uParam1) // Position - 0xDBE4
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/].f_1 == uParam0 && iLocal_37[i /*4*/].f_2 == uParam1)
			return i;
	}

	return -1;
}

int func_221(var uParam0) // Position - 0xDC23
{
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), uParam0) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		return 1;

	return 0;
}

BOOL func_222(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDC4B
{
	float num;
	float num2;
	int num3;

	num = 8f;
	num2 = 15f;

	if (bParam1 == false)
	{
		num = 1.86f;
		num2 = 1.86f;
	}

	if (bParam2)
		num = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &num3, 1);
	
		if (num3 == joaat("WEAPON_PETROLCAN"))
		{
			num = 3f;
			num2 = 3f;
		}
	
		if (!bParam2)
		{
			if (func_226(uParam0, bParam1, num, num2))
				return true;
		
			if (func_223(uParam0, num2, bParam3, bParam4))
				return true;
		}
		else
		{
			if (unk_0x7B783B62D5123CC7(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
					if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(uParam0, 1), num, 1))
						return true;
			}
			else
			{
				if (bParam1)
				{
					num = 1.86f;
					num2 = 1.86f;
				}
			
				if (func_226(uParam0, bParam1, num, num2))
					return true;
			}
		
			if (func_223(uParam0, num2, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_223(var uParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDD46
{
	float num;
	float num2;

	num = { unk_0x30BE8A934C020461(uParam0, 1) };
	num2 = { num };
	num = num - fParam1;
	num.f_1 = num.f_1 - fParam1;
	num.f_2 = num.f_2 - fParam1;
	num2 = num2 + fParam1;
	num2.f_1 = num2.f_1 + fParam1;
	num2.f_2 = num2.f_2 + fParam1;

	if (bParam2)
	{
		if (unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(uParam0, 1), joaat("WEAPON_GRENADE"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(uParam0, 1), joaat("WEAPON_MOLOTOV"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(uParam0, 1), joaat("WEAPON_SMOKEGRENADE"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(uParam0, 1), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
				if (func_224(uParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_224(uParam0, fParam1))
				return true;
			else
				return false;
	
		if (unk_0x332F7E85F9805351(num, num2, 1))
			return true;
	}

	return false;
}

BOOL func_224(var uParam0, float fParam1) // Position - 0xDE52
{
	var unk;
	var unk2;

	if (unk_0x96E845EE39BF3453(uParam0, joaat("WEAPON_GRENADE"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(uParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(uParam0, joaat("WEAPON_BZGAS"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(uParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(uParam0, joaat("WEAPON_MOLOTOV"), fParam1, &unk2, &unk, 0))
		if (func_225(uParam0, unk2, 90f, 0))
			return true;

	return false;
}

BOOL func_225(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xDEE7
{
	var unk;
	var unk4;
	float num;

	unk = { func_218(uParam1 - unk_0x30BE8A934C020461(uParam0, 1)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		unk4 = { unk_0x26A9C8234C71B669(uParam0) };
	else
		unk4 = { func_218(unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f)) };

	num = func_217(unk4, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

BOOL func_226(var uParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xDF75
{
	if (bParam1)
		if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
				return true;

	if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(uParam0, 1), fParam2, 1))
		return true;

	return false;
}

BOOL func_227(int iParam0) // Position - 0xDFBD
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 34 || iParam0 == 11 || iParam0 == 52 || iParam0 == 53)
		return false;

	return true;
}

void func_228(var uParam0) // Position - 0xE007
{
	var unk;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		unk_0x28818732C8F0F80E("rcmextreme3");
	
		while (!unk_0x2BBF749E555360DC("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0xDBC7406226B5540E(&unk);
		unk_0x3EE48ADC8C7F5CC4(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x82C6DD5E8460E2C0(0, 1);
		unk_0xF24926C6435B3653(0, 64.6f, -737.8f, 44.2f);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(unk);
		unk_0x3D7110D966B0CEA2(uParam0, unk);
		unk_0x63EF69C6969A3D26(&unk);
	}

	return;
}

BOOL func_229(eCharacter echParam0) // Position - 0xE0A4
{
	if (echParam0 == -1)
		echParam0 = func_235();

	if (echParam0 == -1)
		return true;

	if (func_238(echParam0))
		return false;

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_236(echParam0))
		{
		}
		else
		{
			return true;
		}
	}

	if (func_232() && !func_231())
		return true;

	if (!func_230(echParam0))
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
				return true;

	if (!IS_BIT_SET(Global_113648.f_18576[echParam0 /*6*/], 2))
		return true;

	return false;
}

BOOL func_230(eCharacter echParam0) // Position - 0xE139
{
	if (echParam0 == CHAR_FRANK_TREV_CONF || echParam0 == CHAR_LEST_FRANK_CONF || echParam0 == CHAR_PEGASUS_DELIVERY || echParam0 == CHAR_MARNIE || echParam0 == CHAR_MARY_ANN)
		return true;

	return false;
}

BOOL func_231() // Position - 0xE178
{
	if (unk_0xCC17806DB0C41C19())
		if (unk_0x27654E358E874F45() == 1f)
			return true;

	return false;
}

BOOL func_232() // Position - 0xE195
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xE1B8
{
	return func_234(iParam0, Global_43257);
}

BOOL func_234(int iParam0, int iParam1) // Position - 0xE1C9
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

eCharacter func_235() // Position - 0xE3AA
{
	return func_10(unk_0x688846D56810779A(), 0);
}

BOOL func_236(eCharacter echParam0) // Position - 0xE3BB
{
	if (func_237() && Global_100681.f_11 == 6 && echParam0 == func_10(&(Global_100681.f_3), 0))
		return 1;

	return 0;
}

BOOL func_237() // Position - 0xE3EF
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

BOOL func_238(eCharacter echParam0) // Position - 0xE42D
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		if (Global_78805.f_1 == 7)
			if (Global_78805 == echParam0)
				return true;

	return false;
}

void func_239() // Position - 0xE455
{
	func_244(0);
	func_243();
	func_240();
	return;
}

void func_240() // Position - 0xE46A
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			if (func_241(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 10.5f, 1, 1056964608, 0, true, false))
				if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
					unk_0x6FE9A0C01D25F413(unk_0xC1A5EC5C986B98AD(), 0, 0);

	return;
}

BOOL func_241(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE4C2
{
	unk_0x8B438725D591ED78(0, 71, 1);
	unk_0x8B438725D591ED78(0, 72, 1);
	unk_0x8B438725D591ED78(0, 76, 1);
	unk_0x8B438725D591ED78(0, 73, 1);
	unk_0x8B438725D591ED78(0, 59, 1);
	unk_0x8B438725D591ED78(0, 60, 1);

	if (bParam5)
		unk_0x8B438725D591ED78(0, 75, 1);

	unk_0x8B438725D591ED78(0, 80, 1);

	if (!bParam6)
	{
		unk_0x8B438725D591ED78(0, 69, 1);
		unk_0x8B438725D591ED78(0, 70, 1);
		unk_0x8B438725D591ED78(0, 68, 1);
	}

	unk_0x8B438725D591ED78(0, 74, 1);
	unk_0x8B438725D591ED78(0, 86, 1);
	unk_0x8B438725D591ED78(0, 81, 1);
	unk_0x8B438725D591ED78(0, 82, 1);
	unk_0x8B438725D591ED78(0, 138, 1);
	unk_0x8B438725D591ED78(0, 136, 1);
	unk_0x8B438725D591ED78(0, 114, 1);
	unk_0x8B438725D591ED78(0, 107, 1);
	unk_0x8B438725D591ED78(0, 110, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 87, 1);
	unk_0x8B438725D591ED78(0, 88, 1);
	unk_0x8B438725D591ED78(0, 113, 1);
	unk_0x8B438725D591ED78(0, 115, 1);
	unk_0x8B438725D591ED78(0, 116, 1);
	unk_0x8B438725D591ED78(0, 117, 1);
	unk_0x8B438725D591ED78(0, 118, 1);
	unk_0x8B438725D591ED78(0, 119, 1);
	unk_0x8B438725D591ED78(0, 352, 1);
	unk_0x8B438725D591ED78(0, 131, 1);
	unk_0x8B438725D591ED78(0, 132, 1);
	unk_0x8B438725D591ED78(0, 123, 1);
	unk_0x8B438725D591ED78(0, 126, 1);
	unk_0x8B438725D591ED78(0, 129, 1);
	unk_0x8B438725D591ED78(0, 130, 1);
	unk_0x8B438725D591ED78(0, 133, 1);
	unk_0x8B438725D591ED78(0, 134, 1);
	unk_0x6DDC89A03EBEF23F();
	func_242(uParam0);

	if (unk_0xA5E11AF0A2B928C1() - Global_29 > 500)
		unk_0xC8927C3AD7C5D2E1(uParam0, fParam1, iParam2, iParam4);

	Global_29 = unk_0xA5E11AF0A2B928C1();

	if (!unk_0x055111B11E6624FD(uParam0, 0))
		if (unk_0x2655A8EC638E4FD1(unk_0xDC58AE028CB223BA(uParam0)) <= iParam3)
			return true;

	return false;
}

void func_242(var uParam0) // Position - 0xE65A
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
		if (unk_0xB9F391F7A44CA06F(uParam0))
			if (unk_0xB91CBB2DE81AA576(uParam0))
				unk_0x17F94CF179685573(uParam0, 0);

	return;
}

void func_243() // Position - 0xE686
{
	unk_0x8B438725D591ED78(0, 21, 1);
	unk_0x8B438725D591ED78(0, 37, 1);
	unk_0x8B438725D591ED78(0, 25, 1);
	unk_0x8B438725D591ED78(0, 141, 1);
	unk_0x8B438725D591ED78(0, 140, 1);
	unk_0x8B438725D591ED78(0, 24, 1);
	unk_0x8B438725D591ED78(0, 257, 1);
	unk_0x8B438725D591ED78(0, 22, 1);
	unk_0x8B438725D591ED78(0, 23, 1);
	return;
}

void func_244(int iParam0) // Position - 0xE6D7
{
	if (func_59())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_60(0))
			func_56(iParam0);
	
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}

	return;
}

BOOL func_245(int iParam0) // Position - 0xE70A
{
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56)
		return true;

	return false;
}

BOOL func_246(int iParam0) // Position - 0xE74B
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_235();

	if (iParam0 == -1)
		return false;

	num = func_247(&(Global_112735[iParam0 /*10*/].f_9), 1, 4, false, 0);

	if (!num == 1)
		return false;

	func_67(iParam0);
	return true;
}

int func_247(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xE790
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_249(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*iParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			unk_0xDAD6345C5D317E79(8);
	
		Global_43257 = iParam2;
		Global_43219 = *iParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*iParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *iParam0)
					return 2;
			}
		}
		else if (Global_43219 == *iParam0)
		{
			return 1;
		}
	
		*iParam0 = -1;
	}

	if (*iParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*iParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_248(iParam0, iParam4);
	}

	return 2;
}

void func_248(int iParam0, int iParam1) // Position - 0xE8C7
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*iParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *iParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*iParam0 = -1;
	return;
}

BOOL func_249(int iParam0) // Position - 0xE916
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_250(var uParam0) // Position - 0xE938
{
	*uParam0 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	return;
}

void func_251() // Position - 0xE96A
{
	Global_100715 = true;
	return;
}

void func_252() // Position - 0xE977
{
	Global_78563 = -1;
	Global_78561 = false;
	Global_78576 = false;
	Global_78575 = true;
	Global_78577 = false;

	if (func_279())
		func_254();
	else
		unk_0xECDAB41968FF21A8(&(Global_91433[func_253(Global_100681.f_1) /*5*/].f_1), 3);

	return;
}

int func_253(int iParam0) // Position - 0xE9BD
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_91433[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

void func_254() // Position - 0xE9ED
{
	int num;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());

	if (func_18())
	{
		Global_100681 = 11;
	}
	else
	{
		switch (Global_100681.f_11)
		{
			case 6:
				num = Global_100681.f_1;
				func_278(&(Global_112735[num /*10*/].f_9));
				func_270(num, 0, 0, 0);
				break;
		
			case 5:
				break;
		
			case 0:
				break;
		}
	
		func_255();
	}

	return;
}

void func_255() // Position - 0xEA7A
{
	func_269();
	func_262();
	func_258();
	func_257();
	func_62();
	func_63();
	Global_100718 = 0;
	Global_94856 = -1;
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 17);
	Global_100716 = 0;
	unk_0x989D8D7F85192C52(0);
	unk_0x89851798C163AECE(0);
	unk_0x0135E51BAD56ED58(1);
	unk_0x07FC0CE34A7B2CAB(1);
	unk_0x6E218C4AE00BB45A(1);
	func_256(0);
	return;
}

void func_256(int iParam0) // Position - 0xEAD3
{
	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 13);
	else
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 13);

	return;
}

void func_257() // Position - 0xEAFC
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		Global_100681.f_22[i] = 0;
	}

	return;
}

void func_258() // Position - 0xEB21
{
	Global_100681 = 13;
	Global_100681.f_1 = -1;
	Global_100681.f_2 = 0;
	Global_100681.f_30 = 0f;
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 25);
	Global_100715 = false;
	func_261(0);
	func_260();
	func_259();
	Global_100681.f_18 = -1;
	Global_100681.f_19 = -1;
	return;
}

void func_259() // Position - 0xEB70
{
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 22);
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 8);
	return;
}

void func_260() // Position - 0xEB90
{
	if (Global_100681.f_16 != 0)
	{
		unk_0xD0AE101DBAA43C98(&(Global_100681.f_16));
		Global_100681.f_16 = 0;
	}

	if (Global_100681.f_17 != 0)
	{
		unk_0xD0AE101DBAA43C98(&(Global_100681.f_17));
		Global_100681.f_17 = 0;
	}

	return;
}

void func_261(int iParam0) // Position - 0xEBCE
{
	if (iParam0 == 1)
		Global_43806 = 1;
	else
		Global_43806 = 0;

	return;
}

void func_262() // Position - 0xEBE7
{
	func_263(&Global_107196);
	return;
}

void func_263(int iParam0) // Position - 0xEBF7
{
	int i;
	int j;

	*iParam0 = 145;
	func_268(&(iParam0->f_1));
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_8 = 0f;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 145;

	for (j = 0; j < 3; j = j + 1)
	{
		iParam0->f_9[j] = -1;
		iParam0->f_13[j] = 0;
		iParam0->f_17[j] = 0;
		iParam0->f_21[j] = 0;
		func_267(&iParam0->f_25[0 /*295*/][j /*98*/]);
		func_267(&iParam0->f_25[1 /*295*/][j /*98*/]);
	
		for (i = 0; i < 12; i = i + 1)
		{
			iParam0->f_616[j /*65*/][i] = -1;
			iParam0->f_616[j /*65*/].f_13[i] = -1;
			iParam0->f_616[j /*65*/].f_26[i] = -1;
		}
	
		iParam0->f_616[j /*65*/].f_59 = 0;
		iParam0->f_616[j /*65*/].f_60 = -99;
		iParam0->f_616[j /*65*/].f_61 = 2;
		iParam0->f_616[j /*65*/].f_62 = 0;
		iParam0->f_616[j /*65*/].f_63 = -99;
		iParam0->f_616[j /*65*/].f_64 = 1;
	
		for (i = 0; i < 9; i = i + 1)
		{
			iParam0->f_616[j /*65*/].f_39[i] = -1;
			iParam0->f_616[j /*65*/].f_49[i] = -1;
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			iParam0->f_812[j /*477*/][i /*5*/].f_1 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_2 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_3 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_4 = 0;
			iParam0->f_812[j /*477*/][i /*5*/] = 0;
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_1 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_2 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_3 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_4 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/] = 0;
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			iParam0->f_2244[j /*32*/][i] = 0;
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			iParam0->f_2244[j /*32*/].f_5[i] = 0;
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			iParam0->f_2244[j /*32*/].f_16[i] = 0;
		}
	
		iParam0->f_2341[j] = 0;
	
		for (i = 0; i <= 3; i = i + 1)
		{
			iParam0->f_2838[j /*15*/][i] = 0;
			iParam0->f_2838[j /*15*/].f_5[i] = 0;
			iParam0->f_2838[j /*15*/].f_10[i] = 0;
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			iParam0->f_2345[j /*164*/][i] = 0;
			iParam0->f_2345[j /*164*/].f_4[i] = 0;
			iParam0->f_2345[j /*164*/].f_8[i] = 0;
			iParam0->f_2345[j /*164*/].f_12[i] = 0;
			iParam0->f_2345[j /*164*/].f_16[i] = 0;
			iParam0->f_2345[j /*164*/].f_20[i] = 0;
			iParam0->f_2345[j /*164*/].f_24[i] = 0;
			iParam0->f_2345[j /*164*/].f_28[i] = 0;
			iParam0->f_2345[j /*164*/].f_32[i] = 0;
			iParam0->f_2345[j /*164*/].f_36[i] = 0;
			iParam0->f_2345[j /*164*/].f_40[i] = 0;
			iParam0->f_2345[j /*164*/].f_44[i] = 0;
			iParam0->f_2345[j /*164*/].f_48[i] = 0;
			iParam0->f_2345[j /*164*/].f_52[i] = 0;
			iParam0->f_2345[j /*164*/].f_56[i] = 0;
			iParam0->f_2345[j /*164*/].f_60[i] = 0;
			iParam0->f_2345[j /*164*/].f_64[i] = 0;
			iParam0->f_2345[j /*164*/].f_68[i] = 0;
			iParam0->f_2345[j /*164*/].f_72[i] = 0;
			iParam0->f_2345[j /*164*/].f_76[i] = 0;
			iParam0->f_2345[j /*164*/].f_80[i] = 0;
			iParam0->f_2345[j /*164*/].f_84[i] = 0;
			iParam0->f_2345[j /*164*/].f_88[i] = 0;
			iParam0->f_2345[j /*164*/].f_92[i] = 0;
			iParam0->f_2345[j /*164*/].f_96[i] = 0;
			iParam0->f_2345[j /*164*/].f_100[i] = 0;
			iParam0->f_2345[j /*164*/].f_104[i] = 0;
			iParam0->f_2345[j /*164*/].f_108[i] = 0;
			iParam0->f_2345[j /*164*/].f_112[i] = 0;
			iParam0->f_2345[j /*164*/].f_116[i] = 0;
			iParam0->f_2345[j /*164*/].f_120[i] = 0;
			iParam0->f_2345[j /*164*/].f_124[i] = 0;
			iParam0->f_2345[j /*164*/].f_128[i] = 0;
			iParam0->f_2345[j /*164*/].f_132[i] = 0;
			iParam0->f_2345[j /*164*/].f_136[i] = 0;
			iParam0->f_2345[j /*164*/].f_140[i] = 0;
			iParam0->f_2345[j /*164*/].f_144[i] = 0;
			iParam0->f_2345[j /*164*/].f_148[i] = 0;
			iParam0->f_2345[j /*164*/].f_152[i] = 0;
			iParam0->f_2345[j /*164*/].f_156[i] = 0;
			iParam0->f_2345[j /*164*/].f_160[i] = 0;
		}
	}

	func_266(&(iParam0->f_2884));
	func_265(&(iParam0->f_2890));
	func_264(&(iParam0->f_2980));
	return;
}

void func_264(var uParam0) // Position - 0xF187
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

void func_265(var uParam0) // Position - 0xF1A2
{
	func_105(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	return;
}

void func_266(var uParam0) // Position - 0xF1D1
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	return;
}

void func_267(var uParam0) // Position - 0xF1EF
{
	int i;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;

	for (i = 0; i <= 11; i = i + 1)
	{
		uParam0->f_11[i] = 0;
	}

	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_27), "", 16);

	for (i = 0; i <= 48; i = i + 1)
	{
		uParam0->f_31[i] = 0;
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		uParam0->f_81[i] = 0;
	}

	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
	return;
}

void func_268(var uParam0) // Position - 0xF2CF
{
	*uParam0 = -15;
	return;
}

void func_269() // Position - 0xF2DD
{
	TEXT_LABEL_ASSIGN_STRING(&Global_104204, "", 32);
	func_263(&Global_104212);
	return;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xF2F6
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 1);
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 250, 1);
	}

	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	unk_0xFF2AF80F9EC7704C(1f);
	unk_0x508B7A54DEE39001(5);
	unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
	unk_0x0AC355F45E074D43(unk_0x93E99A2DBCBA9CFA(), 1f);
	unk_0x1B2BE912944D92B7(unk_0x93E99A2DBCBA9CFA(), 1f);
	unk_0xB1A691274215E4CE(1);
	unk_0x61F7D56FFAFBF706(1);
	unk_0xE927736B0094B990(0, 0);
	unk_0x6F5281F7042DC893(1f);
	func_174();
	func_277(1, 1);
	func_276();
	func_274();
	func_273(30000);

	if (iParam1 == 1)
		func_271(iParam0, iParam2, iParam3);

	unk_0x97DBA2AA6C70AFC7(0, 0);
	return;
}

void func_271(int iParam0, int iParam1, int iParam2) // Position - 0xF393
{
	var unk;
	var unk33;

	if (iParam0 != -1)
	{
		func_11(iParam0, &unk);
		TEXT_LABEL_COPY(&unk33, { func_15(iParam0) }, 4);
		unk_0x427014D38567361E(&unk33, 0, Global_100718, 0);
		func_272(&unk33, unk.f_3, Global_100718, iParam1, iParam2);
	}

	return;
}

void func_272(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0xF3D2
{
	if (unk_0x2AC37494BBF1DB16(&Global_97751))
		return;

	if (unk_0xBE3B8FE3E8A8E9B8(uParam0, &Global_97751, 0, -1) != 0)
		return;

	unk_0x83332E38D6284FF5(uParam0, uParam1, iParam2, iParam3, iParam4, Global_94858);
	TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
	return;
}

void func_273(int iParam0) // Position - 0xF416
{
	Global_43808 = unk_0xA5E11AF0A2B928C1() + iParam0;
	return;
}

void func_274() // Position - 0xF428
{
	if (Global_97993)
	{
		func_30();
		unk_0xCE1ACB11398F4598(func_275(Global_113648.f_2365.f_539.f_4321));
	}
	else
	{
		unk_0xCE1ACB11398F4598("");
	}

	return;
}

char* func_275(eCharacter echParam0) // Position - 0xF45A
{
	echParam0 = echParam0;
	return "";
}

void func_276() // Position - 0xF469
{
	var unk;

	if (unk_0xCCE9BCDAB8B7FAED() || func_168())
	{
		unk_0x989939160154E37F(StackVal, 0, 0, 0);
	}
	else if (unk_0x674D69D3896862C7() || func_167())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "PRESENCE_0_STR" /*Playing story*/, 24);
		unk_0x98F31DBBB3410994(0, &unk);
	}

	return;
}

void func_277(BOOL bParam0, BOOL bParam1) // Position - 0xF4AC
{
	Global_97988 = bParam0;
	Global_97989 = bParam1;
	return;
}

void func_278(int iParam0) // Position - 0xF4C0
{
	if (*iParam0 == -1)
		return;

	if (!*iParam0 == Global_43219)
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = false;
	Global_63360 = 0;
	return;
}

BOOL func_279() // Position - 0xF4FD
{
	int num;

	if (!_IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (func_18() == true)
		{
			num = func_16(&(Global_100681.f_3), false);
		
			switch (num)
			{
				case 88:
				case 89:
				case 33:
				case 68:
				case 92:
					return true;
			
				default:
					break;
			}
		}
	}

	return false;
}

void func_280() // Position - 0xF553
{
	func_767();
	func_762(1, 0, 0);
	func_755(" ", 1, 0);

	if (unk_0x87644B1F984197FE(2, 201))
	{
		unk_0x531D638530A8DB97(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_281();
	}

	return;
}

void func_281() // Position - 0xF58C
{
	var unk;
	var unk2;
	int num;
	var unk3;
	var unk6;
	eCharacter character;
	int i;
	int num2;

	num = 0;
	func_75();

	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
		func_84();

	func_35();
	func_26(0, 1);
	func_43(0);
	func_754();
	func_260();
	func_41(0);
	func_753();
	func_752(&unk);
	func_750(&unk2);
	Global_100681 = 8;
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 25);
	func_749();
	unk_0xA2EC5ACB2B5D92A4();

	if (_IS_MISSION_REPEAT_ACTIVE(false))
	{
		unk_0x989D8D7F85192C52(1);
		unk_0x89851798C163AECE(1);
		Global_100681 = 11;
		func_41(0);
		func_28(0);
		return;
	}

	if (Global_100681.f_11 == 0 || Global_100681.f_11 == 3)
	{
		character = func_748();
		Global_113648.f_9087.f_330[character /*6*/].f_1 = 0;
	}

	func_744(0, unk3, unk6);

	if (!func_743(_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD())))
		Global_100681.f_21 = Global_104212;

	if (Global_100681.f_21 != 145)
	{
		if (func_742(Global_100681.f_21))
		{
			func_498(Global_100681.f_21);
		
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xC66F895ED6F95A88(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_SNIPERRIFLE"));
					Global_100681.f_21 = 145;
				}
			}
		
			Global_100716 = 0;
		}
		else
		{
			unk_0x89851798C163AECE(1);
			Global_100716 = 1;
		}
	}

	SYSTEM::WAIT(0);
	func_21(0);

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		func_41(1);

	func_496(&unk2);
	func_494(true);
	func_23(1);
	func_22(1);

	if (Global_100681.f_21 != 145)
		func_498(Global_100681.f_21);
	else
		func_92(&(Global_107196.f_2890), &Global_107196, 0, 0, 0, 0);

	if (Global_100716 == 0)
	{
	}
	else
	{
		num = func_493();
	}

	func_489(&num);
	func_488();
	func_486(&unk, 1, num, 1, 0);

	if (num == 1)
	{
		func_410(_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()), 1);
		func_409();
		unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_UNARMED"), 1);
	}

	func_400();
	func_284();

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());

	unk_0x4F06D02C5C1F10A2();

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_32224[i /*11*/].f_2)
			Global_32224[i /*11*/].f_4 = 1;
	}

	Global_94859 = 0;
	num2 = 800;

	if (func_283())
		num2 = 1600;

	func_254();
	func_20();
	unk_0x5FA7FCB1C42CF295();
	SYSTEM::WAIT(500);

	if (num == 0)
	{
		func_282(unk);
		func_486(&unk, 1, num, 0, 1);
	}

	SYSTEM::WAIT(0);
	unk_0x78DD793477D04C42(num2);
	return;
}

void func_282(var uParam0) // Position - 0xF807
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		{
			unk_0x2718E9CC165A99F6(uParam0, 0);
			unk_0x38B05AC704C5FCB8(uParam0, Global_100681.f_31);
		}
	}

	return;
}

BOOL func_283() // Position - 0xF837
{
	int num;

	if (Global_100681.f_11 == 6)
	{
		num = Global_100681.f_1;
	
		if (num == 52 || num == 53 || num == 54 || num == 55 || num == 56)
			return true;
	}

	return false;
}

void func_284() // Position - 0xF88A
{
	int i;
	int num;
	Hash hash;
	eCharacter character;

	for (i = 0; i <= 8; i = i + 1)
	{
		num = Global_98050[i];
	
		if (unk_0x7DE17ACDD8BA2642(num) && !unk_0x66599E73DBA5A850(num))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(num);
			hash = -99;
		
			switch (character)
			{
				case CHAR_MICHAEL:
					hash = 112;
					break;
			
				case CHAR_FRANKLIN:
					hash = 158;
					break;
			
				case CHAR_TREVOR:
					hash = 154;
					break;
			}
		
			if (hash != -99)
			{
				if (func_399(num, 14, hash))
					func_285(num, 14, hash);
			
				if (Global_113648.f_2365.f_539[character /*65*/].f_39[2] == hash)
					Global_113648.f_2365.f_539[character /*65*/].f_39[2] = -1;
			}
		}
	}

	return;
}

BOOL func_285(int iParam0, int iParam1, Hash hParam2) // Position - 0xF94B
{
	int num;
	int i;
	var unk;
	int j;
	BOOL flag;
	var unk18;
	var unk28;
	Hash hash;

	if (unk_0x66599E73DBA5A850(iParam0) || hParam2 == -99)
		return false;

	num = unk_0x504B9BB48D41C264(iParam0);
	Global_78341[1 /*14*/] = { func_335(num, iParam1, hParam2, -1) };

	if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0))
		return false;

	if (!func_399(iParam0, iParam1, hParam2))
		return false;

	if (iParam1 == 12)
	{
		unk = { func_331(num, hParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
				func_285(iParam0, i, unk[i]);
		}
	}
	else if (iParam1 == 13)
	{
		unk18 = { func_328(num, hParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			if (!func_285(iParam0, 14, unk18[j]))
				flag = 0;
		}
	
		return flag;
	}
	else if (iParam1 == 14)
	{
		unk_0x7E4E6DFA37692889(iParam0, Global_78341[1 /*14*/].f_12, 1);
	}
	else
	{
		unk28 = { func_331(num, 0) };
		Global_78341[1 /*14*/] = { func_335(num, iParam1, unk28[iParam1], -1) };
	
		if (unk_0x39CBCB88BA546BDF(iParam0, func_327(iParam1)) > 0 && unk_0x2F05A8F9724E2992(iParam0, func_327(iParam1), Global_78341[1 /*14*/].f_3) > 0)
			unk_0xFECAE061D8C80757(iParam0, func_327(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, 0);
	}

	if (func_326(iParam0, num, &hash, 0))
		func_288(iParam0, 2, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);

	if (func_286(iParam0, num, &hash))
		func_288(iParam0, 1, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);

	return true;
}

BOOL func_286(int iParam0, int iParam1, var uParam2) // Position - 0xFB08
{
	int num;

	num = func_287(iParam1);

	if (Global_113648.f_2365.f_539[num /*65*/].f_63 != -99)
	{
		if (!func_399(iParam0, Global_113648.f_2365.f_539[num /*65*/].f_64, Global_113648.f_2365.f_539[num /*65*/].f_63))
		{
			*uParam2 = Global_113648.f_2365.f_539[num /*65*/].f_62;
			Global_113648.f_2365.f_539[num /*65*/].f_63 = -99;
			Global_113648.f_2365.f_539[num /*65*/].f_64 = 1;
			return true;
		}
	}

	return false;
}

int func_287(int iParam0) // Position - 0xFB94
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 0;
	
		case joaat("Player_One"):
			return 1;
	
		case joaat("Player_Two"):
			return 2;
	
		default:
			break;
	}

	return 145;
}

int func_288(int iParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xFBCF
{
	int i;
	int j;
	int k;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;
	Hash hash6;
	Hash hash7;
	int num;
	var unk;
	var unk18;
	var unk28;
	var unk45;
	var unk59;

	if (unk_0x66599E73DBA5A850(iParam0) || hParam2 == -99)
		return 0;

	Global_78339 = Global_78339 + 1;
	hash3 = -99;
	hash4 = -99;
	hash5 = -99;
	hash6 = -99;
	hash7 = -99;
	num = unk_0x504B9BB48D41C264(iParam0);

	if (iParam5 == 0)
	{
		Global_78341[1 /*14*/] = { func_335(num, iParam1, hParam2, -1) };
	
		if (!func_325(iParam3))
		{
			Global_78339 = Global_78339 - 1;
			return 0;
		}
	
		func_320(iParam1);
	}

	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (num == joaat("Player_One"))
			{
				hash3 = func_318(iParam0, 8);
			
				if (hash3 != 9)
					hash3 = -99;
			}
		
			hash4 = func_318(iParam0, 9);
		
			if (num == joaat("Player_Zero"))
			{
				if (hash4 >= 9 && hash4 <= 14)
				{
				}
				else
				{
					hash4 = -99;
				}
			}
			else if (num == joaat("Player_One"))
			{
				if (hash4 >= 5 && hash4 <= 10)
				{
				}
				else
				{
					hash4 = -99;
				}
			}
			else if (num == joaat("Player_Two"))
			{
				if (hash4 >= 9 && hash4 <= 14 || hash4 >= 15 && hash4 <= 16)
				{
				}
				else
				{
					hash4 = -99;
				}
			}
		
			hash5 = func_317(iParam0, 1);
		
			if (!func_316(num, 14, hash5, -1))
				hash5 = -99;
		
			hash6 = func_317(iParam0, 0);
		
			if (!func_315(num, 14, hash6, -1) && !func_314(num, 14, hash6, -1))
				hash6 = -99;
		
			if (num == joaat("Player_One"))
				hash7 = func_317(iParam0, 2);
		}
	
		unk_0x729DD9A19A6484F7(iParam0, 1);
		unk = 15;
	
		if (iParam5 == 1)
			unk = { Global_78384 };
		else
			unk = { func_331(num, hParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
			{
				Global_78341[1 /*14*/] = { func_335(num, i, unk[i], -1) };
			
				if (IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0))
				{
					if (i == 13)
					{
						unk18 = 9;
					
						if (iParam5 == 1)
							unk18 = { Global_78401 };
						else
							unk18 = { func_328(num, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							Global_78341[1 /*14*/] = { func_335(num, 14, unk18[j], -1) };
							func_304(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
							func_320(14);
						
							if (Global_78339 == 1)
							{
								for (k = 0; k < 15; k = k + 1)
								{
									hash = func_296(iParam0, num, 14, unk18[j], k, 0);
								
									if (hash != -99)
										func_288(iParam0, k, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
							}
						}
					}
					else if (i != 14 && i != 12)
					{
						if (num == joaat("Player_One") && i == 2 && unk[i] == 20)
							func_295(num, 2, 20, &hash2);
					
						if (iParam4 == -1)
							unk_0xFECAE061D8C80757(iParam0, func_327(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0x41CBA4CCBAA79DEF(iParam0, func_327(i)));
						else
							unk_0xFECAE061D8C80757(iParam0, func_327(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
					
						func_320(i);
					
						if (Global_78339 == 1)
						{
							for (k = 0; k < 15; k = k + 1)
							{
								hash = func_296(iParam0, num, i, unk[i], k, 0);
							
								if (hash != -99)
									func_288(iParam0, k, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
				}
			}
			else if (i != 12 && i != 14)
			{
				Global_78341[1 /*14*/] = { func_335(num, i, func_294(iParam0, i, -1), -1) };
			
				if (IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3))
				{
					if (i == 2)
					{
						if (num == joaat("Player_One"))
							if (func_326(iParam0, num, &hash2, 1))
								func_288(iParam0, 2, hash2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						unk28 = { func_331(num, 0) };
						func_288(iParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	
		if (iParam7 == 1)
		{
			unk45 = { func_335(num, 8, hash3, -1) };
		
			if (hash3 != -99)
				if (func_292(num, hParam2, 8, hash3, &unk, &unk45))
					func_288(iParam0, 8, hash3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_335(num, 9, hash4, -1) };
		
			if (hash4 != -99)
				if (func_292(num, hParam2, 9, hash4, &unk, &unk45))
					func_288(iParam0, 9, hash4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_335(num, 14, hash5, -1) };
		
			if (hash5 != -99)
				if (func_292(num, hParam2, 14, hash5, &unk, &unk45))
					func_288(iParam0, 14, hash5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_335(num, 14, hash6, -1) };
		
			if (hash6 != -99)
				if (func_292(num, hParam2, 14, hash6, &unk, &unk45))
					func_288(iParam0, 14, hash6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_335(num, 14, hash7, -1) };
		
			if (hash7 != -99)
				if (func_292(num, hParam2, 14, hash7, &unk, &unk45))
					func_288(iParam0, 14, hash7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		}
	}
	else if (iParam1 == 13)
	{
		unk59 = { func_328(num, hParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			Global_78341[1 /*14*/] = { func_335(num, 14, unk59[j], -1) };
			func_304(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
			func_320(14);
		
			if (Global_78339 == 1)
			{
				for (k = 0; k < 15; k = k + 1)
				{
					hash = func_296(iParam0, num, 14, unk59[j], k, 0);
				
					if (hash != -99)
						func_288(iParam0, k, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 14)
	{
		func_304(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
		func_320(iParam1);
	
		if (Global_78339 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				hash = func_296(iParam0, num, iParam1, hParam2, k, 0);
			
				if (hash != -99)
					func_288(iParam0, k, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (iParam4 == -1)
			unk_0xFECAE061D8C80757(iParam0, func_327(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0x41CBA4CCBAA79DEF(iParam0, func_327(iParam1)));
		else
			unk_0xFECAE061D8C80757(iParam0, func_327(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
	
		if (Global_78339 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				hash = func_296(iParam0, num, iParam1, hParam2, k, 0);
			
				if (hash != -99)
					func_288(iParam0, k, hash, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	
		if (iParam6 == 0)
			func_289(num, iParam1, hParam2);
	}

	if (Global_78339 == 1)
	{
		if (func_326(iParam0, num, &hash2, 0))
			func_288(iParam0, 2, hash2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	
		if (func_286(iParam0, num, &hash2))
			func_288(iParam0, 1, hash2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}

	Global_78339 = Global_78339 - 1;
	return 1;
}

void func_289(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x103E1
{
	Hash hash;
	int num;

	if (iParam0 == joaat("Player_Zero"))
		hash = 5;
	else if (iParam0 == joaat("Player_One"))
		hash = 2;
	else if (iParam0 == joaat("Player_Two"))
		hash = 4;

	if (func_291(iParam0, 12, hash))
	{
		if (func_290(iParam0, iParam1, echParam2))
		{
			num = func_287(iParam0);
		
			if (iParam1 == 3)
				Global_113648.f_2365.f_539.f_196[num] = echParam2;
			else if (iParam1 == 4)
				Global_113648.f_2365.f_539.f_200[num] = echParam2;
		}
	}

	return;
}

BOOL func_290(int iParam0, int iParam1, Hash hParam2) // Position - 0x1046B
{
	if (iParam0 == joaat("Player_Zero"))
		if (iParam1 == 4)
			if (hParam2 >= 47 && hParam2 <= 54)
				return true;
		else if (iParam1 == 3)
			if (hParam2 >= 77 && hParam2 <= 84)
				return true;
	else if (iParam0 == joaat("Player_One"))
		if (iParam1 == 4)
			if (hParam2 >= 14 && hParam2 <= 21)
				return true;
		else if (iParam1 == 3)
			if (hParam2 >= 41 && hParam2 <= 56)
				return true;
	else if (iParam0 == joaat("Player_Two"))
		if (iParam1 == 4)
			if (hParam2 >= 18 && hParam2 <= 29)
				return true;
		else if (iParam1 == 3)
			if (hParam2 >= 54 && hParam2 <= 69)
				return true;

	return false;
}

BOOL func_291(int iParam0, int iParam1, Hash hParam2) // Position - 0x10549
{
	Global_78341[1 /*14*/] = { func_335(iParam0, iParam1, hParam2, -1) };
	return IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}

BOOL func_292(int iParam0, Hash hParam1, int iParam2, Hash hParam3, var uParam4, int iParam5) // Position - 0x10571
{
	var unk;
	int i;

	if (uParam4->[iParam2] == hParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (hParam3 == 0 || hParam3 == 1 || hParam3 == 2 || hParam3 == 3 || hParam3 == 4 || hParam3 == 5 || hParam3 == 6 || hParam3 == 7 || hParam3 == 8)
			return true;

	if (hParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_328(iParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == hParam3)
				return true;
		}
	}

	if (func_293(iParam0, iParam2, hParam3))
		return true;

	if (iParam0 == joaat("Player_Zero"))
	{
		if (func_316(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 10 || hParam1 == 11 || hParam1 == 12 || hParam1 == 18 || hParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_315(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 4 || hParam1 == 5 || hParam1 == 10 || hParam1 == 11 || hParam1 == 12 || hParam1 == 14 || hParam1 == 18 || hParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_314(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 4 || hParam1 == 5 || hParam1 == 10 || hParam1 == 11 || hParam1 == 12 || hParam1 == 14 || hParam1 == 18 || hParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (func_316(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 3 || hParam1 == 5 || hParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_315(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 3 || hParam1 == 5 || hParam1 == 7 || hParam1 == 8 || hParam1 == 21)
				if (iParam2 == 8)
					if (hParam3 == 9)
						if (hParam1 == 8 || hParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (hParam1 == 43 || hParam1 == 44 || hParam1 == 45 || hParam1 == 46)
					if (hParam3 >= 5 && hParam3 <= 10)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (hParam1 == 43 || hParam1 == 44 || hParam1 == 45 || hParam1 == 46)
					if (hParam3 >= 26 && hParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_314(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 3 || hParam1 == 3 || hParam1 == 5 || hParam1 == 7 || hParam1 == 8 || hParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (hParam3 >= 159 && hParam3 <= 174)
				return true;
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (hParam1 == 2)
			if (iParam2 == 14 && hParam3 == 0)
				return true;
	
		if (func_316(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 6 || hParam1 == 8 || hParam1 == 45 || hParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_315(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 3 || hParam1 == 6 || hParam1 == 8 || hParam1 == 11 || hParam1 == 45 || hParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_314(iParam0, iParam2, hParam3, -1))
		{
			if (hParam1 == 1 || hParam1 == 2 || hParam1 == 3 || hParam1 == 6 || hParam1 == 8 || hParam1 == 11 || hParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_293(int iParam0, int iParam1, Hash hParam2) // Position - 0x10B75
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (hParam2 == 15)
						return true;
					break;
			
				case 9:
					if (hParam2 == 6)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (hParam2 == 1 || hParam2 == 10)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (hParam2 == 4)
						return true;
					break;
			}
			break;
	}

	return false;
}

Hash func_294(int iParam0, int iParam1, int iParam2) // Position - 0x10C0E
{
	Hash i;
	Hash j;

	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_399(iParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_399(iParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_317(iParam0, iParam2);
			}
		}
		else
		{
			return func_318(iParam0, iParam1);
		}
	}

	return -99;
}

int func_295(int iParam0, int iParam1, Hash hParam2, var uParam3) // Position - 0x10CAF
{
	int num;

	*uParam3 = -99;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (hParam2 == 7 || hParam2 == 23)
						*uParam3 = 1;
					break;
			
				case 9:
					if (hParam2 == 8 || hParam2 >= 9 && hParam2 <= 14)
						*uParam3 = 1;
					break;
			
				case 10:
					if (hParam2 >= 44 && hParam2 <= 47)
						*uParam3 = 1;
					break;
			
				case 14:
					if (hParam2 >= 31 && hParam2 <= 32 || hParam2 >= 33 && hParam2 <= 34 || hParam2 >= 35 && hParam2 <= 36 || hParam2 == 37 || hParam2 >= 40 && hParam2 <= 41 || hParam2 == 46)
						*uParam3 = 1;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (hParam2 == 20)
						*uParam3 = 20;
					break;
			
				case 8:
					if (hParam2 == 4)
						*uParam3 = 19;
					break;
			
				case 9:
					if (hParam2 >= 5 && hParam2 <= 10)
						*uParam3 = 19;
					break;
			
				case 10:
					if (hParam2 >= 47 && hParam2 <= 50)
						*uParam3 = 19;
					break;
			
				case 14:
					if (hParam2 >= 26 && hParam2 <= 27 || hParam2 >= 28 && hParam2 <= 29 || hParam2 >= 30 && hParam2 <= 31 || hParam2 == 32 || hParam2 >= 35 && hParam2 <= 36)
						*uParam3 = 19;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (hParam2 == 7)
						*uParam3 = 2;
					break;
			
				case 9:
					if (hParam2 >= 9 && hParam2 <= 14 || hParam2 >= 15 && hParam2 <= 16)
						*uParam3 = 2;
					break;
			
				case 10:
					if (hParam2 >= 29 && hParam2 <= 32)
						*uParam3 = 2;
					break;
			
				case 14:
					if (hParam2 >= 47 && hParam2 <= 48 || hParam2 >= 49 && hParam2 <= 50 || hParam2 >= 51 && hParam2 <= 52 || hParam2 == 53 || hParam2 >= 56 && hParam2 <= 57 || hParam2 == 62)
						*uParam3 = 2;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_287(iParam0);
		Global_113648.f_2365.f_539[num /*65*/].f_60 = hParam2;
		Global_113648.f_2365.f_539[num /*65*/].f_61 = iParam1;
		return 1;
	}

	return 0;
}

Hash func_296(int iParam0, int iParam1, int iParam2, Hash hParam3, int iParam4, int iParam5) // Position - 0x10FB6
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;
	Hash hash6;
	Hash hash7;
	Hash hash8;
	Hash hash9;
	Hash hash10;

	hash = -99;

	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				hash2 = func_318(iParam0, 1);
				hash = func_303(iParam1, hParam3, hash2);
				break;
		
			case 1:
				hash3 = func_318(iParam0, 2);
				hash = func_303(iParam1, hash3, hParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_295(iParam1, iParam2, hParam3, &hash);
	}
	else if (iParam4 == 1)
	{
		func_302(iParam1, iParam2, hParam3, &hash);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
			func_301(iParam1, hParam3, &hash);
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (hParam3)
								{
									case 36:
										hash = 17;
										break;
								
									case 37:
										hash = 17;
										break;
								
									case 38:
										hash = 18;
										break;
								
									case 39:
										hash = 18;
										break;
								
									case 40:
										hash = 19;
										break;
								
									case 41:
										hash = 19;
										break;
								
									case 42:
										hash = 20;
										break;
								
									case 43:
										hash = 20;
										break;
								}
								break;
						
							case 11:
								if (hParam3 >= 2 && hParam3 <= 7)
									if (!func_300(iParam0, 3, 44, 59))
										hash = 44;
								else if (hParam3 >= 8 && hParam3 <= 17 || hParam3 >= 18 && hParam3 <= 27 || hParam3 >= 28 && hParam3 <= 43)
									if (!func_300(iParam0, 3, 135, 150))
										hash = func_299(iParam1, 3, 135, 150);
								break;
						}
						break;
				
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (hParam3)
								{
									case 63:
										hash = 4;
										break;
								
									case 61:
										hash = 3;
										break;
								
									case 16:
										hash = 1;
										break;
								
									case 114:
										hash = 15;
										break;
								
									case 115:
										hash = 17;
										break;
								
									case 116:
										hash = 16;
										break;
								
									case 117:
										hash = 18;
										break;
								
									case 118:
										hash = 20;
										break;
								
									case 119:
										hash = 19;
										break;
								
									case 125:
										hash = 21;
										break;
								
									case 120:
										hash = 22;
										break;
								
									case 124:
										hash = 23;
										break;
								
									case 126:
										hash = 24;
										break;
								
									case 121:
										hash = 25;
										break;
								
									case 127:
										hash = 26;
										break;
								
									case 128:
										hash = 27;
										break;
								
									case 85:
										hash = 6;
										break;
								
									case 77:
										hash = 7;
										break;
								
									case 78:
										hash = 8;
										break;
								
									case 79:
										hash = 9;
										break;
								
									case 80:
										hash = 10;
										break;
								
									case 81:
										hash = 11;
										break;
								
									case 82:
										hash = 12;
										break;
								
									case 83:
										hash = 13;
										break;
								
									case 84:
										hash = 14;
										break;
								
									case 21:
										hash = 31;
										break;
								
									case 22:
										hash = 30;
										break;
								
									case 23:
										hash = 29;
										break;
								
									case 24:
										hash = 28;
										break;
								
									case 25:
										hash = 33;
										break;
								
									case 26:
										hash = 35;
										break;
								
									case 27:
										hash = 34;
										break;
								
									case 28:
										hash = 32;
										break;
								
									default:
										if (hParam3 >= 17 && hParam3 <= 20)
										{
										}
										else
										{
											hash = 0;
										}
										break;
								}
								break;
						
							case 11:
								if (hParam3 != 0)
									hash = 0;
								break;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (hParam3 >= 44 && hParam3 <= 59 || hParam3 >= 135 && hParam3 <= 150)
							{
							}
							else
							{
								hash = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (hParam3 >= 36 && hParam3 <= 43)
								hash = 0;
						}
						break;
				}
				break;
		
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (hParam3)
								{
									case 17:
										hash = 2;
										break;
								
									case 90:
										hash = 1;
										break;
								
									case 268:
										hash = 3;
										break;
								
									case 269:
										hash = 5;
										break;
								
									case 270:
										hash = 4;
										break;
								
									case 271:
										hash = 6;
										break;
								
									case 272:
										hash = 8;
										break;
								
									case 273:
										hash = 7;
										break;
								
									case 279:
										hash = 9;
										break;
								
									case 274:
										hash = 10;
										break;
								
									case 278:
										hash = 11;
										break;
								
									case 280:
										hash = 12;
										break;
								
									case 275:
										hash = 13;
										break;
								
									case 281:
										hash = 14;
										break;
								
									case 282:
										hash = 15;
										break;
								
									case 107:
										hash = 16;
										break;
								
									case 108:
										hash = 17;
										break;
								
									case 109:
										hash = 18;
										break;
								
									case 110:
										hash = 19;
										break;
								
									case 111:
										hash = 20;
										break;
								
									case 112:
										hash = 21;
										break;
								
									case 113:
										hash = 22;
										break;
								
									case 114:
										hash = 23;
										break;
								
									case 115:
										hash = 24;
										break;
								
									case 116:
										hash = 25;
										break;
								
									case 117:
										hash = 52;
										break;
								
									case 118:
										hash = 27;
										break;
								
									case 119:
										hash = 28;
										break;
								
									case 120:
										hash = 29;
										break;
								
									case 121:
										hash = 30;
										break;
								
									case 122:
										hash = 31;
										break;
								
									case 296:
										hash = 32;
										break;
								
									case 297:
										hash = 33;
										break;
								
									case 298:
										hash = 34;
										break;
								
									case 299:
										hash = 35;
										break;
								
									case 300:
										hash = 36;
										break;
								
									case 301:
										hash = 37;
										break;
								
									case 302:
										hash = 38;
										break;
								
									case 309:
										hash = 39;
										break;
								
									case 310:
										hash = 40;
										break;
								
									case 311:
										hash = 41;
										break;
								
									case 312:
										hash = 42;
										break;
								
									case 313:
										hash = 43;
										break;
								
									case 314:
										hash = 44;
										break;
								
									case 315:
										hash = 45;
										break;
								
									case 316:
										hash = 46;
										break;
								
									case 317:
										hash = 51;
										break;
								
									default:
										hash = 0;
										break;
								}
								break;
						
							case 11:
								if (hParam3 != 0)
									hash = 0;
								break;
						}
						break;
				
					case 3:
						switch (iParam2)
						{
							case 11:
								if (hParam3 >= 47 && hParam3 <= 62)
									if (!func_300(iParam0, 3, 209, 222))
										hash = func_299(iParam1, 3, 209, 222);
								else if (hParam3 >= 1 && hParam3 <= 4 || hParam3 >= 5 && hParam3 <= 8)
									if (!func_300(iParam0, 3, 243, 258))
										if (hParam3 == 1 || hParam3 == 5)
											hash = func_299(iParam1, 3, 243, 246);
										else if (hParam3 == 2 || hParam3 == 6)
											hash = func_299(iParam1, 3, 247, 250);
										else if (hParam3 == 3 || hParam3 == 7)
											hash = func_299(iParam1, 3, 251, 254);
										else if (hParam3 == 4 || hParam3 == 8)
											hash = func_299(iParam1, 3, 255, 258);
								else if (hParam3 == 41 || hParam3 == 42)
									if (!func_300(iParam0, 3, 176, 191) && !func_300(iParam0, 3, 227, 242))
										hash = func_299(iParam1, 3, 176, 191);
								break;
						}
						break;
				
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								hash6 = hParam3;
								hash5 = func_318(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								hash5 = hParam3;
								hash6 = func_318(iParam0, 11);
								hash6 = func_298(iParam1, hash5, hash6, 0);
							}
						
							hash4 = func_318(iParam0, 8);
						
							if (hash6 >= 5 && hash6 <= 8 || hash6 >= 25 && hash6 <= 40 || hash6 >= 42 && hash6 <= 43)
								if (!func_297(joaat("Player_One"), hash4, hash6, hash5, &hash7))
									if (hash7 != -99)
										hash = hash7;
							else if (hash4 >= 27 && hash4 <= 42 || hash4 >= 43 && hash4 <= 58 || hash4 >= 59 && hash4 <= 74)
								hash = 26;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (hParam3 >= 209 && hParam3 <= 222)
							{
							}
							else if (hParam3 >= 176 && hParam3 <= 191 || hParam3 >= 227 && hParam3 <= 242 || hParam3 >= 243 && hParam3 <= 258)
							{
								hash8 = func_318(iParam0, 8);
								hash9 = func_318(iParam0, 11);
							
								if (hash8 >= 27 && hash8 <= 42 || hash8 >= 43 && hash8 <= 58 || hash8 >= 59 && hash8 <= 74)
									hash = func_298(iParam1, hParam3, hash9, 0);
								else
									hash = func_298(iParam1, hParam3, hash9, 1);
							}
							else if (hParam3 >= 41 && hParam3 <= 56)
							{
								hash = 45;
							}
							else if (hParam3 >= 223 && hParam3 <= 226)
							{
								hash = 44;
							}
							else
							{
								hash = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (hParam3 >= 27 && hParam3 <= 42 || hParam3 >= 43 && hParam3 <= 58 || hParam3 >= 59 && hParam3 <= 74)
							{
								hash10 = func_318(iParam0, 11);
								hash = func_298(iParam1, -99, hash10, 0);
							}
						}
						break;
				}
				break;
		
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (hParam3)
								{
									case 50:
										hash = 3;
										break;
								
									case 81:
										hash = 5;
										break;
								
									case 82:
										hash = 6;
										break;
								
									case 83:
										hash = 7;
										break;
								
									case 84:
										hash = 10;
										break;
								
									case 85:
										hash = 9;
										break;
								
									case 86:
										hash = 8;
										break;
								
									case 92:
										hash = 22;
										break;
								
									case 87:
										hash = 23;
										break;
								
									case 91:
										hash = 24;
										break;
								
									case 93:
										hash = 25;
										break;
								
									case 88:
										hash = 26;
										break;
								
									case 94:
										hash = 27;
										break;
								
									case 120:
										hash = 11;
										break;
								
									case 121:
										hash = 13;
										break;
								
									case 122:
										hash = 14;
										break;
								
									case 124:
										hash = 12;
										break;
								
									case 126:
										hash = 18;
										break;
								
									case 128:
										hash = 17;
										break;
								
									case 130:
										hash = 19;
										break;
								
									case 131:
										hash = 16;
										break;
								
									case 134:
										hash = 15;
										break;
								
									case 135:
										hash = 20;
										break;
								
									default:
										hash = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}

	return hash;
}

BOOL func_297(int iParam0, Hash hParam1, Hash hParam2, Hash hParam3, var uParam4) // Position - 0x11B69
{
	int num;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			break;
	
		case joaat("Player_One"):
			*uParam4 = 0;
		
			if (hParam1 >= 27 && hParam1 <= 42)
			{
				if (hParam2 != -99)
				{
					if (hParam2 >= 5 && hParam2 <= 8 || hParam2 >= 25 && hParam2 <= 40)
					{
					}
					else
					{
						if (hParam2 >= 42 && hParam2 <= 43)
						{
							if (hParam3 >= 176 && hParam3 <= 191)
							{
								num = hParam1 - 27;
								*uParam4 = 59 + num;
							}
							else if (hParam3 >= 227 && hParam3 <= 242)
							{
								num = hParam1 - 27;
								*uParam4 = 43 + num;
							}
						}
					
						return false;
					}
				}
			
				if (hParam3 != -99)
				{
					if (hParam3 >= 227 && hParam3 <= 242 || hParam3 >= 176 && hParam3 <= 191 || hParam3 >= 243 && hParam3 <= 258)
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (hParam1 >= 43 && hParam1 <= 58)
			{
				if (hParam2 != -99)
				{
					if (hParam2 >= 42 && hParam2 <= 43)
					{
					}
					else
					{
						if (hParam2 >= 5 && hParam2 <= 8 || hParam2 >= 25 && hParam2 <= 40)
						{
							num = hParam1 - 43;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (hParam3 != -99)
				{
					if (hParam3 >= 227 && hParam3 <= 242)
					{
					}
					else
					{
						if (hParam3 >= 176 && hParam3 <= 191)
						{
							if (hParam2 >= 42 && hParam2 <= 43)
							{
								num = hParam1 - 43;
								*uParam4 = 59 + num;
							}
						}
					
						return false;
					}
				}
			}
			else if (hParam1 >= 59 && hParam1 <= 74)
			{
				if (hParam2 != -99)
				{
					if (hParam2 >= 42 && hParam2 <= 43)
					{
					}
					else
					{
						if (hParam2 >= 5 && hParam2 <= 8 || hParam2 >= 25 && hParam2 <= 40)
						{
							num = hParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (hParam3 != -99)
				{
					if (hParam3 >= 176 && hParam3 <= 191)
					{
					}
					else
					{
						if (hParam3 >= 227 && hParam3 <= 242)
						{
							if (hParam2 >= 42 && hParam2 <= 43)
							{
								num = hParam1 - 59;
								*uParam4 = 43 + num;
							}
						}
						else if (hParam2 >= 5 && hParam2 <= 8 || hParam2 >= 25 && hParam2 <= 40)
						{
							num = hParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			}
			break;
	
		case joaat("Player_Two"):
			if (hParam1 == 12)
				if (hParam3 != 241)
					return false;
			break;
	}

	return true;
}

Hash func_298(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x11E4D
{
	int num;

	if (hParam1 >= 243 && hParam1 <= 246)
	{
		if (iParam3 == 1)
			return 1;
		else
			return 5;
	}
	else if (hParam1 >= 247 && hParam1 <= 250)
	{
		if (iParam3 == 1)
			return 2;
		else
			return 6;
	}
	else if (hParam1 >= 251 && hParam1 <= 254)
	{
		if (iParam3 == 1)
			return 3;
		else
			return 7;
	}
	else if (hParam1 >= 255 && hParam1 <= 258)
	{
		if (iParam3 == 1)
			return 4;
		else
			return 8;
	}
	else if (hParam1 >= 255 && hParam1 <= 258)
	{
		if (iParam3 == 1)
			return 4;
		else
			return 8;
	}
	else if (hParam1 >= 176 && hParam1 <= 191 || hParam1 >= 227 && hParam1 <= 242)
	{
		if (hParam2 >= 9 && hParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return hParam2;
			}
			else
			{
				num = hParam2 - 9;
				hParam2 = 25 + num;
				return hParam2;
			}
		}
		else if (hParam2 >= 25 && hParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				num = hParam2 - 25;
				hParam2 = 9 + num;
				return hParam2;
			}
			else
			{
				return hParam2;
			}
		}
		else if (hParam2 == 41 || hParam2 == 42)
		{
			if (iParam3 == 1)
				return 41;
			else
				return 42;
		}
		else
		{
			if (iParam3 == 1)
				hParam2 = func_299(iParam0, 11, 9, 24);
			else
				hParam2 = func_299(iParam0, 11, 25, 40);
		
			if (hParam2 == -99)
				if (iParam3 == 1)
					return 41;
				else
					return 42;
			else
				return hParam2;
		}
	}
	else if (hParam2 >= 1 && hParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return hParam2;
		}
		else
		{
			num = hParam2 - 1;
			hParam2 = 5 + num;
			return hParam2;
		}
	}
	else if (hParam2 >= 5 && hParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			num = hParam2 - 5;
			hParam2 = 1 + num;
			return hParam2;
		}
		else
		{
			return hParam2;
		}
	}
	else if (hParam2 >= 9 && hParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return hParam2;
		}
		else
		{
			num = hParam2 - 9;
			hParam2 = 25 + num;
			return hParam2;
		}
	}
	else if (hParam2 >= 25 && hParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			num = hParam2 - 25;
			hParam2 = 9 + num;
			return hParam2;
		}
		else
		{
			return hParam2;
		}
	}
	else if (hParam2 == 41 || hParam2 == 42)
	{
		if (iParam3 == 1)
			return 41;
		else
			return 42;
	}

	return -99;
}

Hash func_299(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x12114
{
	Hash i;
	Hash hash;

	for (i = iParam2; i <= iParam3 - 1; i = i + 1)
	{
		hash = i;
	
		if (func_291(iParam0, iParam1, hash))
			return hash;
	}

	return -99;
}

BOOL func_300(int iParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x1214B
{
	Hash hash;

	hash = func_318(iParam0, iParam1);

	if (hash >= hParam2 && hash <= hParam3)
		return true;

	return false;
}

BOOL func_301(int iParam0, Hash hParam1, var uParam2) // Position - 0x12174
{
	*uParam2 = -99;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (hParam1 == 16 || hParam1 == 17 || hParam1 == 21 || hParam1 == 22 || hParam1 == 32 || hParam1 >= 34 && hParam1 <= 39 || hParam1 >= 41 && hParam1 <= 45 || hParam1 == 46 || hParam1 >= 47 && hParam1 <= 54 || hParam1 >= 55 && hParam1 <= 70 || hParam1 >= 72 && hParam1 <= 79 || hParam1 == 80 || hParam1 >= 81 && hParam1 <= 83 || hParam1 >= 84 && hParam1 <= 87 || hParam1 == 88 || hParam1 >= 89 && hParam1 <= 91 || hParam1 == 95 || hParam1 >= 96 && hParam1 <= 111 || hParam1 == 112)
			{
				*uParam2 = 6;
				return true;
			}
			break;
	
		case joaat("Player_One"):
			if (hParam1 == 12 || hParam1 >= 14 && hParam1 <= 21 || hParam1 == 32 || hParam1 == 52 || hParam1 >= 69 && hParam1 <= 70 || hParam1 == 71 || hParam1 >= 72 && hParam1 <= 77)
			{
				*uParam2 = 17;
				return true;
			}
			break;
	
		case joaat("Player_Two"):
			if (hParam1 == 4 || hParam1 == 5 || hParam1 == 6 || hParam1 == 7 || hParam1 == 14 || hParam1 >= 18 && hParam1 <= 29 || hParam1 == 31 || hParam1 == 32 || hParam1 == 33 || hParam1 == 34 || hParam1 >= 35 && hParam1 <= 42 || hParam1 >= 43 && hParam1 <= 53 || hParam1 >= 54 && hParam1 <= 61 || hParam1 >= 71 && hParam1 <= 80 || hParam1 >= 81 && hParam1 <= 90 || hParam1 >= 94 && hParam1 <= 103)
			{
				*uParam2 = 8;
				return true;
			}
			break;
	}

	return false;
}

int func_302(int iParam0, int iParam1, Hash hParam2, var uParam3) // Position - 0x1243E
{
	int num;

	*uParam3 = -99;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (hParam2 >= 44 && hParam2 <= 47)
						*uParam3 = 0;
					break;
			
				case 14:
					if (hParam2 >= 31 && hParam2 <= 32 || hParam2 >= 33 && hParam2 <= 34 || hParam2 >= 35 && hParam2 <= 36 || hParam2 == 37 || hParam2 >= 38 && hParam2 <= 39 || hParam2 >= 40 && hParam2 <= 41 || hParam2 >= 42 && hParam2 <= 44)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (hParam2 >= 47 && hParam2 <= 50)
						*uParam3 = 0;
					break;
			
				case 14:
					if (hParam2 >= 26 && hParam2 <= 27 || hParam2 >= 28 && hParam2 <= 29 || hParam2 >= 30 && hParam2 <= 31 || hParam2 == 32 || hParam2 >= 35 && hParam2 <= 36)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (hParam2 >= 15 && hParam2 <= 16)
						*uParam3 = 0;
					break;
			
				case 10:
					if (hParam2 >= 29 && hParam2 <= 32)
						*uParam3 = 0;
					break;
			
				case 14:
					if (hParam2 >= 47 && hParam2 <= 48 || hParam2 >= 49 && hParam2 <= 50 || hParam2 >= 51 && hParam2 <= 52 || hParam2 == 53 || hParam2 >= 54 && hParam2 <= 55 || hParam2 >= 56 && hParam2 <= 57 || hParam2 >= 58 && hParam2 <= 60)
						*uParam3 = 0;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_287(iParam0);
		Global_113648.f_2365.f_539[num /*65*/].f_63 = hParam2;
		Global_113648.f_2365.f_539[num /*65*/].f_64 = iParam1;
		return 1;
	}

	return 0;
}

Hash func_303(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x126C8
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (hParam1 == 1)
				if (hParam2 == 0)
					return 1;
				else if (hParam2 == 4)
					return 5;
				else
					return 3;
			else if (hParam2 == 0)
				return 0;
			else if (hParam2 == 4)
				return 4;
			else
				return 2;
			break;
	
		case joaat("Player_One"):
			if (hParam1 >= 0 && hParam1 <= 15)
				if (hParam2 == 0)
					return 0;
				else
					return 3;
			else if (hParam1 >= 16 && hParam1 <= 17)
				if (hParam2 == 0)
					return 2;
				else
					return 5;
			else if (hParam1 == 18)
				if (hParam2 == 0)
					return 6;
				else
					return 7;
			else if (hParam1 == 19)
				if (hParam2 == 0)
					return 1;
				else
					return 4;
			else if (hParam2 == 0)
				return 1;
			else
				return 4;
			break;
	
		case joaat("Player_Two"):
			if (hParam1 == 2)
				if (hParam2 == 0)
					return 2;
				else
					return 3;
			else if (hParam1 == 3)
				if (hParam2 == 0)
					return 4;
				else
					return 6;
			else if (hParam1 == 8)
				return 5;
			else if (hParam2 == 0)
				return 0;
			else
				return 1;
			break;
	}

	return -99;
}

void func_304(int iParam0, int iParam1, eCharacter echParam2, eCharacter echParam3) // Position - 0x1281F
{
	Hash hash;

	if (echParam2 == -1)
	{
		unk_0x7E4E6DFA37692889(iParam0, iParam1, 1);
	
		if (iParam1 == 0)
		{
			unk_0x598D91BBD045C1F3(iParam0, 34, 0);
			unk_0x598D91BBD045C1F3(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0x0A3B6B850C2EC4FD(iParam0, iParam1, echParam2, echParam3, unk_0xA26A9A07F761D8F8(), 1);
	
		if (iParam1 == 0)
		{
			hash = func_309(iParam0, echParam2, echParam3, iParam1);
		
			if (func_305(unk_0x504B9BB48D41C264(iParam0), 14, hash, unk_0xBC87DFB594B23350(iParam0, 0, echParam2, echParam3)))
			{
				unk_0x598D91BBD045C1F3(iParam0, 34, 1);
				unk_0x598D91BBD045C1F3(iParam0, 36, 1);
			}
			else
			{
				unk_0x598D91BBD045C1F3(iParam0, 34, 0);
				unk_0x598D91BBD045C1F3(iParam0, 36, 0);
			}
		}
	}

	return;
}

BOOL func_305(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x128B9
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 14, 3);
				
					if (hParam2 >= 131 && hParam2 <= 154 || hParam2 >= 327 && unk_0x7FEA86016BC12607(iParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 14, 4);
				
					if (hParam2 >= 131 && hParam2 <= 154 || hParam2 >= 327 && unk_0x7FEA86016BC12607(iParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	}

	return false;
}

int func_306(int iParam0, eCharacter echParam1, int iParam2, int iParam3) // Position - 0x12987
{
	var unk;
	int num;
	int num2;
	var unk18;
	int num3;
	int num4;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x469012E2C56B87C8(&unk);
		num = echParam1 - func_308(iParam0);
	
		if (num < 0)
			return -1;
	
		num2 = unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 1, -1, -1);
	
		if (num2 <= num)
			return -1;
	
		unk_0x58801753BDEA41F4(num, &unk);
		return unk.f_1;
	}
	else
	{
		unk_0xF9105E199166E912(&unk18);
		num3 = echParam1 - func_307(iParam0, func_327(iParam2));
	
		if (num3 < 0)
			return -1;
	
		if (iParam0 == Global_78491.f_26[iParam2] && echParam1 == Global_78491[iParam2] && Global_78491.f_13[iParam2] != 0)
			return Global_78491.f_13[iParam2];
	
		num4 = unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 0, -1, func_327(iParam2));
	
		if (num4 <= num3)
			return -1;
	
		unk_0x6F70EC5F2F78997E(num3, &unk18);
		Global_78491.f_13[iParam2] = unk18.f_1;
		Global_78491[iParam2] = echParam1;
		Global_78491.f_26[iParam2] = iParam0;
		return unk18.f_1;
	}

	return -1;
}

Hash func_307(int iParam0, int iParam1) // Position - 0x12AA1
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_308(int iParam0) // Position - 0x12E48
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

eCharacter func_309(int iParam0, eCharacter echParam1, eCharacter echParam2, int iParam3) // Position - 0x12EA9
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int num5;

	if (echParam1 == -1)
		return func_313(iParam3);

	num = unk_0x504B9BB48D41C264(iParam0);
	num2 = unk_0xBC87DFB594B23350(iParam0, iParam3, echParam1, echParam2);

	if (num2 != -1 && num2 != 0)
		if (num == joaat("MP_M_Freemode_01"))
			return func_311(unk_0x504B9BB48D41C264(iParam0), num2, 14, 3);
		else if (num == joaat("MP_F_Freemode_01"))
			return func_311(unk_0x504B9BB48D41C264(iParam0), num2, 14, 4);

	num3 = unk_0x264D10830E27C58F(iParam0, iParam3);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num5 = unk_0x8FCF05C5AF1F1EDA(iParam0, iParam3, i);
	
		if (i != echParam1)
		{
			num4 = num4 + num5;
		}
		else
		{
			for (j = 0; j <= num5 - 1; j = j + 1)
			{
				if (i == echParam1 && j == echParam2)
				{
					num4 = num4 + func_310(iParam0, iParam3);
					return num4;
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		}
	}

	return func_313(iParam3);
}

int func_310(int iParam0, int iParam1) // Position - 0x12FA5
{
	int num;

	num = unk_0x504B9BB48D41C264(iParam0);

	switch (num)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 58;
			
				case 2:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 82;
			
				case 2:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 88;
			
				case 2:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	}

	return -99;
}

eCharacter func_311(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x130E3
{
	var unk;
	int i;
	int num;
	int num2;
	int num3;

	if (iParam2 == 12)
	{
		num = unk_0x3E0156DFC7F98195(iParam3, 0);
	
		for (i = 0; i < num; i = i + 1)
		{
			unk_0xDA7F09AF3E39DFB7(i, &unk);
		
			if (unk.f_1 == iParam1)
				return func_312(iParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 1, -1, -1);
		num2 = unk_0xE03C71FCC5BB2A83(iParam1);
	
		if (num2 != -1)
			return func_308(iParam0) + num2;
	}
	else
	{
		unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 0, -1, func_327(iParam2));
		num3 = unk_0xFECCBD3631733B22(iParam1);
	
		if (num3 != -1)
			return func_307(iParam0, func_327(iParam2)) + num3;
	}

	return -99;
}

int func_312(int iParam0) // Position - 0x1319E
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

eCharacter func_313(int iParam0) // Position - 0x131FD
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	}

	return 0;
}

BOOL func_314(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x13283
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (hParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (hParam2 == 40 || hParam2 >= 41 && hParam2 <= 56 || hParam2 >= 64 && hParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (hParam2 >= 17 && hParam2 <= 18 || hParam2 >= 71 && hParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam2 >= 18 && hParam2 <= 130)
					{
						return true;
					}
					else if (hParam2 >= 10 && hParam2 <= 17)
					{
						return true;
					}
					else if (hParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_306(iParam0, hParam2, 14, 3);
					
						return unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 1) || unk_0x7FEA86016BC12607(func_306(iParam0, hParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (hParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_306(iParam0, hParam2, 1, 3);
					
						return unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 0) || unk_0x7FEA86016BC12607(func_306(iParam0, hParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam2 >= 18 && hParam2 <= 130)
					{
						return true;
					}
					else if (hParam2 >= 10 && hParam2 <= 17)
					{
						return true;
					}
					else if (hParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_306(iParam0, hParam2, 14, 4);
					
						return unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 1) || unk_0x7FEA86016BC12607(func_306(iParam0, hParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (hParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_306(iParam0, hParam2, 1, 4);
					
						return unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 0) || unk_0x7FEA86016BC12607(func_306(iParam0, hParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_315(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x13500
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (hParam2 == 10)
				return true;
		else if (iParam1 == 8)
			if (hParam2 == 9 || hParam2 == 7 || hParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (hParam2 >= 9 && hParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (hParam2 == 12 || hParam2 == 59 || hParam2 == 60 || hParam2 == 31 || hParam2 == 32 || hParam2 == 33 || hParam2 == 34 || hParam2 == 35 || hParam2 == 36 || hParam2 == 37 || hParam2 == 38 || hParam2 == 39 || hParam2 == 40 || hParam2 == 41 || hParam2 >= 42 && hParam2 <= 44 || hParam2 == 54 || hParam2 == 55)
				return true;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (hParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (hParam2 == 3 || hParam2 == 5 || hParam2 == 9)
				return true;
		else if (iParam1 == 9)
			if (hParam2 >= 5 && hParam2 <= 10)
				return true;
		else if (iParam1 == 14)
			if (hParam2 == 82 || hParam2 == 10 || hParam2 == 26 || hParam2 == 27 || hParam2 == 28 || hParam2 == 29 || hParam2 == 30 || hParam2 == 31 || hParam2 == 32 || hParam2 == 33 || hParam2 == 34 || hParam2 == 35 || hParam2 == 36 || hParam2 >= 37 && hParam2 <= 39)
				return true;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (hParam2 == 14 || hParam2 == 7)
				return true;
		else if (iParam1 == 9)
			if (hParam2 == 8 || hParam2 >= 9 && hParam2 <= 14 || hParam2 == 15 || hParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (hParam2 == 88 || hParam2 == 12 || hParam2 == 47 || hParam2 == 48 || hParam2 == 49 || hParam2 == 50 || hParam2 == 51 || hParam2 == 52 || hParam2 == 53 || hParam2 == 54 || hParam2 == 55 || hParam2 == 56 || hParam2 == 57 || hParam2 >= 58 && hParam2 <= 60)
				return true;
	}
	else if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (hParam2 > 0)
			{
				if (hParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 1, 3);
				
					if (unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 0) || unk_0x7FEA86016BC12607(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (hParam2 > 0)
			{
				if (hParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 1, 4);
				
					if (unk_0x7FEA86016BC12607(iParam3, joaat("HAT"), 0) || unk_0x7FEA86016BC12607(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_316(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x13925
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (hParam2 == 58 || hParam2 == 61 || hParam2 >= 62 && hParam2 <= 69 || hParam2 >= 70 && hParam2 <= 79 || hParam2 >= 80 && hParam2 <= 89 || hParam2 == 90 || hParam2 >= 91 && hParam2 <= 102 || hParam2 >= 103 && hParam2 <= 110 || hParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (hParam2 >= 83 && hParam2 <= 92 || hParam2 == 93 || hParam2 == 94 || hParam2 >= 95 && hParam2 <= 101 || hParam2 >= 102 && hParam2 <= 111 || hParam2 >= 112 && hParam2 <= 121 || hParam2 >= 122 && hParam2 <= 131 || hParam2 >= 132 && hParam2 <= 139 || hParam2 >= 140 && hParam2 <= 149 || hParam2 >= 150 && hParam2 <= 156 || hParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (hParam2 == 89 || hParam2 >= 90 && hParam2 <= 99 || hParam2 >= 100 && hParam2 <= 109 || hParam2 == 111 || hParam2 == 112 || hParam2 >= 113 && hParam2 <= 122 || hParam2 >= 123 && hParam2 <= 132 || hParam2 >= 133 && hParam2 <= 142 || hParam2 >= 143 && hParam2 <= 152 || hParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (hParam2 >= 155 && hParam2 <= 318)
				{
					return true;
				}
				else if (hParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 14, 3);
				
					return unk_0x7FEA86016BC12607(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (hParam2 >= 155 && hParam2 <= 318)
				{
					return true;
				}
				else if (hParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_306(iParam0, hParam2, 14, 4);
				
					return unk_0x7FEA86016BC12607(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

Hash func_317(int iParam0, int iParam1) // Position - 0x13C18
{
	int num;
	var unk;

	if (unk_0x66599E73DBA5A850(iParam0))
		return -99;

	num = unk_0x6BC6C26115124DFE(iParam0, iParam1, 1);

	if (num == -1)
		return func_313(iParam1);

	unk = unk_0xC5753F88DDA773E0(iParam0, iParam1);
	return func_309(iParam0, num, unk, iParam1);
}

eCharacter func_318(int iParam0, int iParam1) // Position - 0x13C5F
{
	int num;
	var unk;
	var unk2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || unk_0x66599E73DBA5A850(iParam0))
		return -99;

	num = func_327(iParam1);
	unk = unk_0xAC464F61BE9FD50D(iParam0, num);
	unk2 = unk_0xEDEBC30DEBDF84C8(iParam0, num);
	return func_319(iParam0, unk, unk2, iParam1);
}

eCharacter func_319(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x13CBF
{
	int num;
	int num2;
	int num3;
	int i;

	num = func_327(iParam3);
	num2 = unk_0x39CBCB88BA546BDF(iParam0, num);

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num3 = num3 + unk_0x2F05A8F9724E2992(iParam0, num, i);
		}
		else
		{
			num3 = num3 + uParam2;
			return num3;
		}
	}

	return -99;
}

void func_320(int iParam0) // Position - 0x13D16
{
	if (IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6))
		func_324(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);

	if (IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_321(Global_2883588, 2, true, true, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_321(Global_2883588, 2, true, true, -1);
		}
		else
		{
			func_321(Global_2883588, 2, true, true, -1);
		}
	}

	return;
}

void func_321(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x13DC2
{
	Hash hash;
	var unk;
	eMPStat stat;
	int num;

	hash = Global_78338;

	if (hParam4 != -1)
		hash = hParam4;

	if (func_323(iParam0, iParam1, &stat, &unk, bParam2, bParam3))
	{
		num = _MPCHAR_STAT_GET_INT(stat, hash, 0);
		unk_0xECDAB41968FF21A8(&num, unk);
		_MPCHAR_STAT_SET_INT(stat, num, hash, 1, false);
	}

	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x13E0C
{
	int num;

	bParam4;
	num = Global_2805027[empsParam0 /*3*/][func_111(hParam2)];

	if (num != 0)
		unk_0x3CC35ACFFC9C730E(num, iParam1, iParam3);

	return;
}

BOOL func_323(int iParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13E3C
{
	int value;

	*uParam2 = 14192;

	if (bParam4 && Global_4539485 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	value = -1;

	if (bParam4)
		if (Global_4539485)
			value = unk_0x24AF50C5650AD665(iParam0);
		else
			value = unk_0xCD90B1EEBAC554AE(iParam0);
	else if (bParam5)
		value = unk_0x24AF50C5650AD665(iParam0);
	else
		value = unk_0xCD90B1EEBAC554AE(iParam0);

	if (value == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 231:
					*uParam2 = 10303;
					break;
			
				case 232:
					*uParam2 = 10304;
					break;
			
				case 233:
					*uParam2 = 10305;
					break;
			
				case 234:
					*uParam2 = 10306;
					break;
			
				case 235:
					*uParam2 = 10307;
					break;
			
				case 236:
					*uParam2 = 10308;
					break;
			
				case 237:
					*uParam2 = 10309;
					break;
			
				case 238:
					*uParam2 = 10310;
					break;
			
				case 239:
					*uParam2 = 10311;
					break;
			
				case 240:
					*uParam2 = 10312;
					break;
			
				case 241:
					*uParam2 = 10313;
					break;
			
				case 242:
					*uParam2 = 10314;
					break;
			
				case 243:
					*uParam2 = 10315;
					break;
			
				case 244:
					*uParam2 = 10316;
					break;
			
				case 245:
					*uParam2 = 10317;
					break;
			
				case 246:
					*uParam2 = 10318;
					break;
			
				case 247:
					*uParam2 = 10319;
					break;
			
				case 248:
					*uParam2 = 10320;
					break;
			
				case 249:
					*uParam2 = 10321;
					break;
			
				case 250:
					*uParam2 = 10322;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 251:
					*uParam2 = 10419;
					break;
			
				case 252:
					*uParam2 = 10420;
					break;
			
				case 253:
					*uParam2 = 10421;
					break;
			
				case 254:
					*uParam2 = 10422;
					break;
			
				case 255:
					*uParam2 = 10423;
					break;
			
				case 256:
					*uParam2 = 10424;
					break;
			
				case 257:
					*uParam2 = 10425;
					break;
			
				case 258:
					*uParam2 = 10426;
					break;
			
				case 259:
					*uParam2 = 10427;
					break;
			
				case 260:
					*uParam2 = 10428;
					break;
			
				case 261:
					*uParam2 = 11845;
					break;
			
				case 262:
					*uParam2 = 11846;
					break;
			
				case 263:
					*uParam2 = 11847;
					break;
			
				case 264:
					*uParam2 = 11848;
					break;
			
				case 265:
					*uParam2 = 11849;
					break;
			
				case 266:
					*uParam2 = 11850;
					break;
			
				case 267:
					*uParam2 = 11851;
					break;
			
				case 268:
					*uParam2 = 11852;
					break;
			
				case 269:
					*uParam2 = 11853;
					break;
			
				case 270:
					*uParam2 = 11854;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 271:
					*uParam2 = 11876;
					break;
			
				case 272:
					*uParam2 = 11877;
					break;
			
				case 273:
					*uParam2 = 11878;
					break;
			
				case 274:
					*uParam2 = 11879;
					break;
			
				case 275:
					*uParam2 = 11880;
					break;
			
				case 276:
					*uParam2 = 11881;
					break;
			
				case 277:
					*uParam2 = 11882;
					break;
			
				case 278:
					*uParam2 = 11883;
					break;
			
				case 279:
					*uParam2 = 11884;
					break;
			
				case 280:
					*uParam2 = 11885;
					break;
			
				case 281:
					*uParam2 = 11886;
					break;
			
				case 282:
					*uParam2 = 11887;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 231:
					*uParam2 = 10323;
					break;
			
				case 232:
					*uParam2 = 10324;
					break;
			
				case 233:
					*uParam2 = 10325;
					break;
			
				case 234:
					*uParam2 = 10326;
					break;
			
				case 235:
					*uParam2 = 10327;
					break;
			
				case 236:
					*uParam2 = 10328;
					break;
			
				case 237:
					*uParam2 = 10329;
					break;
			
				case 238:
					*uParam2 = 10330;
					break;
			
				case 239:
					*uParam2 = 10331;
					break;
			
				case 240:
					*uParam2 = 10332;
					break;
			
				case 241:
					*uParam2 = 10333;
					break;
			
				case 242:
					*uParam2 = 10334;
					break;
			
				case 243:
					*uParam2 = 10335;
					break;
			
				case 244:
					*uParam2 = 10336;
					break;
			
				case 245:
					*uParam2 = 10337;
					break;
			
				case 246:
					*uParam2 = 10338;
					break;
			
				case 247:
					*uParam2 = 10339;
					break;
			
				case 248:
					*uParam2 = 10340;
					break;
			
				case 249:
					*uParam2 = 10341;
					break;
			
				case 250:
					*uParam2 = 10342;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 251:
					*uParam2 = 10429;
					break;
			
				case 252:
					*uParam2 = 10430;
					break;
			
				case 253:
					*uParam2 = 10431;
					break;
			
				case 254:
					*uParam2 = 10432;
					break;
			
				case 255:
					*uParam2 = 10433;
					break;
			
				case 256:
					*uParam2 = 10434;
					break;
			
				case 257:
					*uParam2 = 10435;
					break;
			
				case 258:
					*uParam2 = 10436;
					break;
			
				case 259:
					*uParam2 = 10437;
					break;
			
				case 260:
					*uParam2 = 10438;
					break;
			
				case 261:
					*uParam2 = 11855;
					break;
			
				case 262:
					*uParam2 = 11856;
					break;
			
				case 263:
					*uParam2 = 11857;
					break;
			
				case 264:
					*uParam2 = 11858;
					break;
			
				case 265:
					*uParam2 = 11859;
					break;
			
				case 266:
					*uParam2 = 11860;
					break;
			
				case 267:
					*uParam2 = 11861;
					break;
			
				case 268:
					*uParam2 = 11862;
					break;
			
				case 269:
					*uParam2 = 11863;
					break;
			
				case 270:
					*uParam2 = 11864;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 271:
					*uParam2 = 11888;
					break;
			
				case 272:
					*uParam2 = 11889;
					break;
			
				case 273:
					*uParam2 = 11890;
					break;
			
				case 274:
					*uParam2 = 11891;
					break;
			
				case 275:
					*uParam2 = 11892;
					break;
			
				case 276:
					*uParam2 = 11893;
					break;
			
				case 277:
					*uParam2 = 11894;
					break;
			
				case 278:
					*uParam2 = 11895;
					break;
			
				case 279:
					*uParam2 = 11896;
					break;
			
				case 280:
					*uParam2 = 11897;
					break;
			
				case 281:
					*uParam2 = 11898;
					break;
			
				case 282:
					*uParam2 = 11899;
					break;
			}
			break;
	}

	*uParam3 = value % 32;
	return *uParam2 != 14192;
}

BOOL func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1664C
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				unk_0xECDAB41968FF21A8(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x061B1200C95204CB(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_325(int iParam0) // Position - 0x174EF
{
	if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0))
		return false;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1))
			return false;
	
		if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2))
			return false;
	}

	return true;
}

BOOL func_326(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x17537
{
	int num;

	num = func_287(iParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_113648.f_2365.f_539[num /*65*/].f_60 != -99)
	{
		if (!func_399(iParam0, Global_113648.f_2365.f_539[num /*65*/].f_61, Global_113648.f_2365.f_539[num /*65*/].f_60) || iParam3 == 1)
		{
			*uParam2 = Global_113648.f_2365.f_539[num /*65*/].f_59;
			Global_113648.f_2365.f_539[num /*65*/].f_60 = -99;
			Global_113648.f_2365.f_539[num /*65*/].f_61 = 2;
			return true;
		}
	}

	return false;
}

int func_327(int iParam0) // Position - 0x175E2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

struct<10> func_328(int iParam0, Hash hParam1) // Position - 0x17692
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (hParam1)
			{
				case 31:
					func_330(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_330(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_330(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_330(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_330(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_330(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_330(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_330(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_330(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_330(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_330(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_329(&unk, iParam0, hParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (hParam1)
			{
				case 31:
					func_330(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_330(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_330(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_330(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_330(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_330(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_330(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_330(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_330(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_330(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_329(&unk, iParam0, hParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (hParam1)
			{
				case 31:
					func_330(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_330(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_330(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_330(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_330(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_330(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_330(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_330(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_330(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_330(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_329(&unk, iParam0, hParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (hParam1)
			{
				case 31:
					func_330(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_330(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_330(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_330(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_330(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_330(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_330(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_330(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_330(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_330(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_330(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_330(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_330(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_330(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_330(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_330(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_330(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_330(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_330(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_330(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_330(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_330(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_330(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_330(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_330(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_330(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_329(&unk, iParam0, hParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (hParam1)
			{
				case 31:
					func_330(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_330(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_330(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_330(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_330(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_330(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_330(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_330(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_330(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_330(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_330(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_330(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_330(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_330(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_330(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_330(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_330(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_330(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_330(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_330(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_330(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_330(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_330(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_330(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_330(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_329(&unk, iParam0, hParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17FC1
{
	int num;
	var unk;
	int num2;
	int i;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (iParam1 == joaat("Player_Zero"))
			num = 0;
		else if (iParam1 == joaat("Player_One"))
			num = 1;
		else if (iParam1 == joaat("Player_Two"))
			num = 2;
		else if (iParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (iParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		unk_0x26A75301DC1C273A(iParam2, &unk);
	
		if (!unk_0xEF068EDE5319404F(unk))
		{
			for (i = 0; i < unk.f_3; i = i + 1)
			{
				if (unk_0x16D45A5C95133115(unk.f_1, i, &num2) && num2.f_2 != -1)
					if (num2 != 0 && num2 != -1 && num2 != joaat("0"))
						uParam0->[num2.f_2] = func_311(iParam1, num2, 14, num);
					else if (num2.f_1 != -1)
						uParam0->[num2.f_2] = num2.f_1;
			}
		}
	}

	return;
}

void func_330(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x180ED
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_331(int iParam0, Hash hParam1) // Position - 0x18135
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (hParam1)
			{
				case 0:
					if (Global_113648.f_9087.f_99.f_58[120])
						func_334(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_334(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_334(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_334(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_334(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_334(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_334(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_334(&unk, -99, -99, CHAR_DOMESTIC_GIRL, CHAR_MP_MEX_BOSS, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_334(&unk, -99, -99, CHAR_MP_MERRYWEATHER, CHAR_ANTONIA, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_334(&unk, -99, -99, CHAR_STILL_SLIPPING, _CHAR_UNK, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_334(&unk, -99, -99, CHAR_ISLDJ4, CHAR_LS_CUSTOMS, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_334(&unk, -99, -99, CHAR_GAYMILITARY, CHAR_SIMEON, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_334(&unk, -99, -99, CHAR_GAYMILITARY, CHAR_SIMEON, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_334(&unk, -99, -99, CHAR_CHENGSR, CHAR_RON, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_334(&unk, -99, -99, CHAR_OMEGA, CHAR_PATRICIA, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_334(&unk, -99, -99, CHAR_MAUDE, CHAR_GAYMILITARY, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_334(&unk, -99, -99, CHAR_MRS_THORNHILL, CHAR_OSCAR, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_334(&unk, -99, -99, CHAR_LS_CAR_MEET, CHAR_HITCHER_GIRL, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_334(&unk, -99, -99, CHAR_AGENT14, CHAR_RICKIE, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_334(&unk, -99, -99, CHAR_CHENGSR, CHAR_RON, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_334(&unk, -99, -99, CHAR_NIGEL, CHAR_CHENGSR, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_334(&unk, -99, -99, CHAR_ASHLEY, CHAR_STRETCH, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_334(&unk, -99, -99, CHAR_ANDREAS, CHAR_ORTEGA, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_334(&unk, -99, -99, CHAR_DREYFUSS, CHAR_ONEIL, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_334(&unk, -99, -99, CHAR_FRANK_IMANI_CONF, CHAR_BROKEN_DOWN_GIRL, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_334(&unk, -99, -99, CHAR_CHENGSR, CHAR_RON, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_334(&unk, -99, -99, CHAR_AMMUNATION, CHAR_CARSITE3, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_334(&unk, -99, -99, CHAR_MULTIPLAYER, CHAR_MULTIPLAYER, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_334(&unk, -99, -99, _CHAR_DETONATEBOMB_JAY_NORRIS, CHAR_CARSITE3, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_334(&unk, -99, -99, CHAR_STILL_SLIPPING, _CHAR_UNK, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_334(&unk, -99, -99, CHAR_TREVOR, CHAR_TREVOR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_334(&unk, -99, -99, _CHAR_DUMMY_1, CHAR_MULTIPLAYER, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_334(&unk, -99, -99, CHAR_MULTIPLAYER, CHAR_MULTIPLAYER, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_334(&unk, -99, -99, CHAR_MP_MERRYWEATHER, CHAR_JIMMY_BOSTON, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_334(&unk, -99, -99, CHAR_MP_GERALD, CHAR_ALL_PLAYERS_CONF, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_334(&unk, -99, -99, CHAR_DENISE, CHAR_AMMUNATION, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_334(&unk, -99, -99, CHAR_MP_MERRYWEATHER, CHAR_CARSITE3, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_ALL_PLAYERS_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_FRANK_TREV_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_334(&unk, -99, -99, CHAR_LEST_FRANK_CONF, CHAR_LEST_FRANK_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_334(&unk, -99, -99, CHAR_LEST_MIKE_CONF, CHAR_LEST_MIKE_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_334(&unk, -99, -99, CHAR_MIKE_FRANK_CONF, CHAR_MIKE_FRANK_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_334(&unk, -99, -99, CHAR_MIKE_TREV_CONF, CHAR_MIKE_TREV_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_334(&unk, -99, -99, CHAR_STEVE_MIKE_CONF, CHAR_STEVE_MIKE_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_334(&unk, -99, -99, CHAR_STEVE_TREV_CONF, CHAR_STEVE_TREV_CONF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_334(&unk, -99, -99, CHAR_LESTER, CHAR_LESTER, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_334(&unk, -99, -99, CHAR_LESTER_DEATHWISH, CHAR_LESTER_DEATHWISH, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_334(&unk, -99, -99, CHAR_JIMMY, CHAR_JIMMY, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_334(&unk, -99, -99, CHAR_TRACEY, CHAR_TRACEY, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_334(&unk, -99, -99, CHAR_MP_MORS_MUTUAL, CHAR_MP_FAM_BOSS, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_334(&unk, -99, -99, CHAR_CHENGSR, CHAR_RON, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_334(&unk, -99, -99, CHAR_GAYMILITARY, CHAR_SIMEON, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_334(&unk, -99, -99, CHAR_PAVEL, CHAR_ANTONIA, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_334(&unk, -99, -99, CHAR_PAVEL, CHAR_MP_MEX_BOSS, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_332(&unk, iParam0, hParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (hParam1)
			{
				case 0:
					func_334(&unk, -99, -99, CHAR_MP_PROF_BOSS, CHAR_WADE, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_334(&unk, -99, -99, CHAR_GANGAPP, CHAR_STEVE_MIKE_CONF, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_334(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_334(&unk, -99, -99, CHAR_STEVE, CHAR_STEVE_TREV_CONF, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_334(&unk, -99, -99, CHAR_STEVE, CHAR_STEVE_TREV_CONF, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_334(&unk, -99, 20, CHAR_COMIC_STORE, CHAR_OMEGA, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_334(&unk, -99, -99, CHAR_PATRICIA, CHAR_LESTER_DEATHWISH, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_334(&unk, -99, -99, _CHAR_JULIO_FABRIZIO, CHAR_FLOYD, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_334(&unk, -99, -99, CHAR_AMANDA, CHAR_FRANK_TREV_CONF, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_334(&unk, -99, -99, CHAR_ABIGAIL, CHAR_ALL_PLAYERS_CONF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_334(&unk, -99, -99, 208, CHAR_MP_FAM_BOSS, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_334(&unk, -99, -99, 259, CHAR_STEVE_MIKE_CONF, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_334(&unk, -99, -99, CHAR_SIMEON, CHAR_LEST_FRANK_CONF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_334(&unk, -99, -99, CHAR_LAMAR, CHAR_LEST_MIKE_CONF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_334(&unk, -99, -99, CHAR_RON, CHAR_MIKE_FRANK_CONF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_334(&unk, -99, -99, CHAR_CHENG, CHAR_MIKE_TREV_CONF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_334(&unk, -99, -99, CHAR_CASTRO, CHAR_PATRICIA, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_334(&unk, -99, -99, CHAR_PA_FEMALE, CHAR_WADE, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_334(&unk, -99, -99, CHAR_IMANI, CHAR_HAO, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_334(&unk, -99, -99, CHAR_PROPERTY_TOWING_IMPOUND, CHAR_WADE, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_334(&unk, -99, -99, _CHAR_UNUSED, CHAR_WADE, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_334(&unk, -99, -99, CHAR_PA_MALE, CHAR_WADE, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_334(&unk, -99, -99, 227, CHAR_HAO, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_334(&unk, -99, -99, 228, CHAR_HUNTER, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_334(&unk, -99, -99, 229, CHAR_JIMMY_BOSTON, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_334(&unk, -99, -99, 230, CHAR_JOE, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_334(&unk, -99, -99, 231, CHAR_JOSEF, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_334(&unk, -99, -99, 232, CHAR_JOSH, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_334(&unk, -99, -99, 233, CHAR_MANUEL, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_334(&unk, -99, -99, 234, CHAR_MARNIE, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_334(&unk, -99, -99, 235, CHAR_MARY_ANN, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_334(&unk, -99, -99, 236, CHAR_MAUDE, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_334(&unk, -99, -99, 237, CHAR_MRS_THORNHILL, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_334(&unk, -99, -99, 238, CHAR_NIGEL, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_334(&unk, -99, -99, 239, CHAR_SASQUATCH, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_334(&unk, -99, -99, 240, CHAR_ASHLEY, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_334(&unk, -99, -99, 241, CHAR_ANDREAS, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_334(&unk, -99, -99, 242, CHAR_DREYFUSS, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_334(&unk, -99, -99, 260, CHAR_MP_MEX_BOSS, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_334(&unk, -99, -99, CHAR_PROPERTY_TOWING_IMPOUND, CHAR_WADE, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_334(&unk, -99, -99, CHAR_PROPERTY_GOLF_CLUB, CHAR_WADE, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_334(&unk, -99, -99, CHAR_COMIC_STORE, CHAR_OMEGA, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_334(&unk, -99, -99, CHAR_LS_CUSTOMS, CHAR_GANGAPP, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_334(&unk, -99, -99, 317, CHAR_OMEGA, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_334(&unk, -99, -99, CHAR_DAVE, CHAR_STEVE, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_334(&unk, -99, -99, CHAR_STRIPPER_CHASTITY, CHAR_MP_BIKER_BOSS, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_334(&unk, -99, -99, CHAR_PROPERTY_CAR_SCRAP_YARD, CHAR_WADE, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_332(&unk, iParam0, hParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (hParam1)
			{
				case 0:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_MP_MORS_MUTUAL, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_334(&unk, -99, -99, CHAR_AMANDA, CHAR_FRANK_TREV_CONF, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_334(&unk, -99, -99, CHAR_TANISHA, CHAR_MIKE_FRANK_CONF, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_334(&unk, -99, -99, CHAR_BEVERLY, CHAR_JIMMY, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_334(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_334(&unk, -99, -99, CHAR_ANTONIA, CHAR_GAYMILITARY, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_334(&unk, -99, -99, CHAR_BARRY, CHAR_LESTER_DEATHWISH, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_334(&unk, -99, -99, CHAR_BARRY, CHAR_LESTER_DEATHWISH, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_334(&unk, -99, -99, CHAR_BOATSITE2, CHAR_FLOYD, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_334(&unk, -99, -99, CHAR_HAO, CHAR_AMANDA, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_334(&unk, -99, -99, _CHAR_LS_CUSTOMS_2, CHAR_CARSITE3, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_334(&unk, -99, -99, CHAR_CRIS, CHAR_TRACEY, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_HITCHER_GIRL, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_334(&unk, -99, -99, CHAR_DOM, CHAR_ABIGAIL, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_334(&unk, -99, -99, 241, CHAR_DOMESTIC_GIRL, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_334(&unk, -99, -99, CHAR_AMMUNATION, CHAR_OSCAR, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_334(&unk, -99, -99, CHAR_DENISE, CHAR_MIKE_TREV_CONF, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_334(&unk, -99, -99, CHAR_MOLLY, CHAR_STEVE_MIKE_CONF, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_334(&unk, -99, -99, CHAR_RICKIE, CHAR_STEVE_TREV_CONF, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_334(&unk, -99, -99, CHAR_CHEF, CHAR_LESTER, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_334(&unk, -99, -99, _CHAR_DUMMY_1, CHAR_HAO, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_DENISE, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_334(&unk, -99, -99, CHAR_SOCIAL_CLUB, CHAR_MICHAEL, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_334(&unk, -99, -99, CHAR_LAZLOW, CHAR_MICHAEL, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_334(&unk, -99, -99, 190, CHAR_MP_FAM_BOSS, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_334(&unk, -99, -99, 191, CHAR_MP_MEX_BOSS, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_334(&unk, -99, -99, 192, CHAR_MP_PROF_BOSS, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_334(&unk, -99, -99, 193, CHAR_PA_FEMALE, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_334(&unk, -99, -99, 194, CHAR_PA_MALE, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_334(&unk, -99, -99, 195, CHAR_AGENT14, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_334(&unk, -99, -99, 196, CHAR_MP_STRETCH, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_334(&unk, -99, -99, 197, _CHAR_COREY_PARKER, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_334(&unk, -99, -99, 198, CHAR_BOATSITE2, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_334(&unk, -99, -99, 199, _CHAR_UNK, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_334(&unk, -99, -99, 200, CHAR_MAUDE, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_334(&unk, -99, -99, 201, CHAR_MRS_THORNHILL, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_334(&unk, -99, -99, 202, CHAR_NIGEL, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_334(&unk, -99, -99, 203, CHAR_SASQUATCH, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_334(&unk, -99, -99, 204, CHAR_ASHLEY, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_334(&unk, -99, -99, 205, CHAR_ANDREAS, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_334(&unk, -99, -99, 206, CHAR_DREYFUSS, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_334(&unk, -99, -99, CHAR_TREVOR, CHAR_TANISHA, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_334(&unk, -99, -99, CHAR_JIMMY_BOSTON, CHAR_MICHAEL, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_DOM, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_334(&unk, -99, -99, CHAR_MP_BIKER_BOSS, CHAR_DAVE, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_334(&unk, -99, -99, CHAR_LAMAR, CHAR_MP_MORS_MUTUAL, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_MICHAEL, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_334(&unk, -99, -99, CHAR_BOATSITE2, CHAR_FLOYD, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_332(&unk, iParam0, hParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (hParam1)
			{
				case 0:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_MICHAEL, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_PROPERTY_SONAR_COLLECTIONS, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_334(&unk, -99, -99, CHAR_MICHAEL, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_MARTIN, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_ASHLEY, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_HITCHER_GIRL, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_PROPERTY_CINEMA_MORNINGWOOD, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_MARY_ANN, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_TAXI_LIZ, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_CALL911, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, _CHAR_UNUSED, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_ALL_PLAYERS_CONF, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, _CHAR_DETONATEBOMB_2, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_ASHLEY, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_SASQUATCH, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_NIGEL, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_SOCIAL_CLUB, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_PROPERTY_CAR_MOD_SHOP, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_334(&unk, -99, -99, CHAR_MICHAEL, _CHAR_UNK, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_334(&unk, -99, -99, CHAR_LEST_FRANK_CONF, CHAR_TANISHA, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_PROPERTY_CINEMA_MORNINGWOOD, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_MRS_THORNHILL, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_334(&unk, -99, -99, CHAR_TREVOR, CHAR_NIGEL, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_332(&unk, iParam0, hParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (hParam1)
			{
				case 0:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_MICHAEL, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, _CHAR_UNK2, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_FRANKLIN, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_MP_PROF_BOSS, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_334(&unk, -99, -99, CHAR_TREVOR, CHAR_DETONATEBOMB, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_334(&unk, -99, -99, CHAR_MIKE_TREV_CONF, CHAR_LEST_MIKE_CONF, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, CHAR_MILSITE, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_BOATSITE, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_334(&unk, -99, -99, CHAR_FRANKLIN, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_PROPERTY_CINEMA_VINEWOOD, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_334(&unk, -99, -99, CHAR_MIKE_TREV_CONF, CHAR_FILMNOIR, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_LAZLOW2, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_334(&unk, -99, -99, CHAR_LEST_FRANK_CONF, _CHAR_DETONATEBOMB_JAY_NORRIS, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_MICHAEL, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_COMIC_STORE, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_334(&unk, -99, -99, CHAR_MIKE_TREV_CONF, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_334(&unk, -99, -99, CHAR_TREVOR, CHAR_MIKE_FRANK_CONF, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, _CHAR_TREASURE_HUNT, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_334(&unk, -99, -99, CHAR_LEST_FRANK_CONF, _CHAR_LS_CUSTOMS_2, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_BLIMP, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_MAUDE, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_BARRY, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_334(&unk, -99, -99, CHAR_MULTIPLAYER, CHAR_RON, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_334(&unk, -99, -99, CHAR_MICHAEL, CHAR_MP_PROF_BOSS, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_334(&unk, -99, -99, CHAR_FRANK_TREV_CONF, CHAR_CASTRO, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_334(&unk, -99, -99, CHAR_LEST_MIKE_CONF, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_334(&unk, -99, -99, CHAR_ALL_PLAYERS_CONF, CHAR_OSCAR, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_334(&unk, -99, -99, CHAR_TRACEY, CHAR_CALL911, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_332(&unk, iParam0, hParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_332(var uParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x19F7D
{
	int num;
	var unk;
	int num2;
	var unk18;
	int i;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (iParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (hParam2 - iParam3);
	}
	else if (iParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (hParam2 - iParam3);
	}
	else if (iParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (hParam2 - iParam3);
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	unk_0x3E0156DFC7F98195(num, 0);
	unk_0xDA7F09AF3E39DFB7(hParam2 - iParam3, &unk);

	if (!unk_0xEF068EDE5319404F(unk))
	{
		for (i = 0; i < unk.f_4; i = i + 1)
		{
			if (unk_0x2071249D32108490(unk.f_1, i, &num2))
			{
				if (num2 != 0 && num2 != -1 && num2 != joaat("0"))
				{
					if (num2.f_2 == 10)
					{
						unk_0xF9105E199166E912(&unk18);
						unk_0x3CD23E98A4BA2D16(num2, &unk18);
					
						if (num2 != unk18.f_1)
							uParam0->f_16 = 1;
					}
				
					if (num2.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_333(num2.f_2)] = num2;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_333(num2.f_2)] = func_311(iParam1, num2, func_333(num2.f_2), num);
					}
				}
				else if (num2.f_1 != -1)
				{
					uParam0->[func_333(num2.f_2)] = num2.f_1;
				}
			}
		}
	
		if (unk.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = unk.f_1;
	}

	return;
}

int func_333(int iParam0) // Position - 0x1A167
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_334(var uParam0, int iParam1, int iParam2, eCharacter echParam3, eCharacter echParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x1A217
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = echParam3;
	uParam0->[4] = echParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

struct<14> func_335(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x1A288
{
	func_398();

	if (iParam0 == joaat("Player_Zero"))
		func_380(iParam1, hParam2);
	else if (iParam0 == joaat("Player_One"))
		func_361(iParam1, hParam2);
	else if (iParam0 == joaat("Player_Two"))
		func_336(iParam1, hParam2);

	return Global_78341[0 /*14*/];
}

void func_336(int iParam0, Hash hParam1) // Position - 0x1A2DA
{
	switch (iParam0)
	{
		case 0:
			func_360(hParam1);
			break;
	
		case 2:
			func_359(hParam1);
			break;
	
		case 3:
			func_356(hParam1);
			break;
	
		case 4:
			func_355(hParam1);
			break;
	
		case 6:
			func_354(hParam1);
			break;
	
		case 5:
			func_353(hParam1);
			break;
	
		case 8:
			func_352(hParam1);
			break;
	
		case 9:
			func_351(hParam1);
			break;
	
		case 10:
			func_350(hParam1);
			break;
	
		case 1:
			func_349(hParam1);
			break;
	
		case 7:
			func_348(hParam1);
			break;
	
		case 11:
			func_347(hParam1);
			break;
	
		case 12:
			func_346(hParam1);
			break;
	
		case 13:
			func_345(hParam1);
			break;
	
		case 14:
			func_337(hParam1);
			break;
	}

	return;
}

void func_337(Hash hParam0) // Position - 0x1A3CA
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
			num2 = 2;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
			num2 = 2;
			num3 = 2;
			num = 55;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
			num2 = 2;
			num3 = 3;
			num = 52;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
			num2 = 2;
			num3 = 4;
			num = 54;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
			num2 = 2;
			num3 = 5;
			num = 54;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
			num2 = 2;
			num3 = 6;
			num = 55;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
			num2 = 2;
			num3 = 7;
			num = 55;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
			num2 = 2;
			num3 = 8;
			num = 58;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
			num2 = 2;
			num3 = 9;
			num = 58;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
			num2 = 3;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
			num2 = 3;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
			num2 = 3;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
			num2 = 3;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
			num2 = 3;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
			num2 = 3;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
			num2 = 3;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
			num2 = 3;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 3;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 60;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 50;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 59;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 55;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 55;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 59;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 79;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 79;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 150;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 170;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 175;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 195;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 210;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 215;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 165;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 169;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 169;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 175;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 175;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 189;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 195;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 195;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 49;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 52;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 55;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 58;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 60;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
			num2 = 10;
			num3 = 7;
			num = 63;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
			num2 = 10;
			num3 = 8;
			num = 65;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
			num2 = 10;
			num3 = 9;
			num = 68;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
			num2 = 7;
			num3 = 1;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 7;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 8;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 9;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 10;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 11;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 12;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 13;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 14;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 15;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
			num2 = 26;
			num3 = 0;
			num = 20;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
			num2 = 26;
			num3 = 1;
			num = 25;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
			num2 = 26;
			num3 = 2;
			num = 25;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
			num2 = 26;
			num3 = 3;
			num = 22;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
			num2 = 26;
			num3 = 4;
			num = 20;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
			num2 = 26;
			num3 = 5;
			num = 25;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
			num2 = 26;
			num3 = 6;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
			num2 = 26;
			num3 = 7;
			num = 24;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
			num2 = 26;
			num3 = 8;
			num = 25;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
			num2 = 26;
			num3 = 9;
			num = 22;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
			num2 = 26;
			num3 = 10;
			num = 18;
			num4 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
			num2 = 26;
			num3 = 11;
			num = 20;
			num4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
			num2 = 26;
			num3 = 12;
			num = 24;
			num4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
			num2 = 26;
			num3 = 13;
			num = 22;
			num4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
			num2 = 26;
			num3 = 14;
			num = 25;
			num4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
			num2 = 26;
			num3 = 15;
			num = 25;
			num4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 155, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_338(int iParam0, int iParam1, Hash hParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x1B641
{
	int num;
	eMPStat stat;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = hParam2 % 32;
	iParam0->f_2 = hParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_343(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	unk_0x14580F20CBCE4FA9(sParam3) != unk_0x14580F20CBCE4FA9("NO_LABEL");

	if (bParam7)
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 3);

	if (bParam10)
	{
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 5);
	
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 1);
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 2);
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 6);
	
		if (func_1(14))
			return;
	
		if (iParam1 == 1)
			if (unk_0x7FEA86016BC12607(Global_2883588, joaat("REBREATHER"), 0))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_342(Global_2883588, 1, true, true, -1))
				unk_0x061B1200C95204CB(&(iParam0->f_6), 2);
		
			if (!func_342(Global_2883588, 2, true, true, -1))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_342(Global_2883588, 1, true, true, -1))
				unk_0x061B1200C95204CB(&(iParam0->f_6), 2);
		
			if (!func_342(Global_2883588, 2, true, true, -1))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_342(Global_2883588, 1, true, true, -1))
				unk_0x061B1200C95204CB(&(iParam0->f_6), 2);
		
			if (!func_342(Global_2883588, 2, true, true, -1))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 4);
		}
	
		if (unk_0xEF068EDE5319404F(Global_2883589))
		{
			unk_0x061B1200C95204CB(&(iParam0->f_6), 1);
			unk_0x061B1200C95204CB(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 0);
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 5);
	
		if (func_324(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 1);
	
		if (func_324(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 2);
	
		if (!func_324(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 4);
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_1(14))
				return;
		
			num = _MPCHAR_STAT_GET_INT(func_341(iParam1, iParam0->f_2), Global_78338, 0);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 1);
		
			num = _MPCHAR_STAT_GET_INT(func_340(iParam1, iParam0->f_2), Global_78338, 0);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				unk_0xECDAB41968FF21A8(&(iParam0->f_6), 2);
		
			if (func_339(iParam1, iParam0->f_2, &stat))
			{
				num = _MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					unk_0xECDAB41968FF21A8(&(iParam0->f_6), 4);
			}
		}
		else
		{
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 1);
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 1);
			unk_0xECDAB41968FF21A8(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_339(int iParam0, int iParam1, var uParam2) // Position - 0x1B9E6
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

eMPStat func_340(int iParam0, int iParam1) // Position - 0x1BDEB
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_ACQUIRED_HAIR;
			
				case 3:
					return MP_STAT_CLTHS_ACQUIRED_TORSO;
			
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL;
			
				case 9:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL2;
			
				case 10:
					return MP_STAT_CLTHS_ACQUIRED_DECL;
			
				case 1:
					return MP_STAT_CLTHS_ACQUIRED_BERD;
			
				case 7:
					return MP_STAT_CLTHS_ACQUIRED_TEETH;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS;
			
				case 12:
					return MP_STAT_CLTHS_ACQUIRED_OUTFIT;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_ACQUIRED_HAIR_1;
			
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_1;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_1;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_1;
			
				case 9:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL2_1;
			
				case 7:
					return MP_STAT_CLTHS_ACQUIRED_TEETH_1;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_1;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_1;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_ACQUIRED_HAIR_2;
			
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_2;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_2;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_2;
			
				case 7:
					return MP_STAT_CLTHS_ACQUIRED_TEETH_2;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_2;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_2;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_3;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_3;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_3;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_3;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_3;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_4;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_4;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_4;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_4;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_4;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_5;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_5;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_5;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_5;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_5;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_6;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_6;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_6;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_6;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_6;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_ACQUIRED_LEGS_7;
			
				case 6:
					return MP_STAT_CLTHS_ACQUIRED_FEET_7;
			
				case 8:
					return MP_STAT_CLTHS_ACQUIRED_SPECIAL_7;
			
				case 11:
					return MP_STAT_CLTHS_ACQUIRED_JBIB_7;
			
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_7;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_8;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_9;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_ACQUIRED_PROPS_10;
			}
			break;
	}

	return MP_STAT_CLTHS_ACQUIRED_JBIB;
}

eMPStat func_341(int iParam0, int iParam1) // Position - 0x1C1F8
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_AVAILABLE_HAIR;
			
				case 3:
					return MP_STAT_CLTHS_AVAILABLE_TORSO;
			
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL;
			
				case 9:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL2;
			
				case 10:
					return MP_STAT_CLTHS_AVAILABLE_DECL;
			
				case 1:
					return MP_STAT_CLTHS_AVAILABLE_BERD;
			
				case 7:
					return MP_STAT_CLTHS_AVAILABLE_TEETH;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS;
			
				case 12:
					return MP_STAT_CLTHS_AVAILABLE_OUTFIT;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_AVAILABLE_HAIR_1;
			
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_1;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_1;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_1;
			
				case 9:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL2_1;
			
				case 7:
					return MP_STAT_CLTHS_AVAILABLE_TEETH_1;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_1;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_1;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return MP_STAT_CLTHS_AVAILABLE_HAIR_2;
			
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_2;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_2;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_2;
			
				case 7:
					return MP_STAT_CLTHS_AVAILABLE_TEETH_2;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_2;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_2;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_3;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_3;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_3;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_3;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_3;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_4;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_4;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_4;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_4;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_4;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_5;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_5;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_5;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_5;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_5;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_6;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_6;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_6;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_6;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_6;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return MP_STAT_CLTHS_AVAILABLE_LEGS_7;
			
				case 6:
					return MP_STAT_CLTHS_AVAILABLE_FEET_7;
			
				case 8:
					return MP_STAT_CLTHS_AVAILABLE_SPECIAL_7;
			
				case 11:
					return MP_STAT_CLTHS_AVAILABLE_JBIB_7;
			
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_7;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_8;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_9;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return MP_STAT_CLTHS_AVAILABLE_PROPS_10;
			}
			break;
	}

	return MP_STAT_CLTHS_AVAILABLE_JBIB;
}

BOOL func_342(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x1C5F3
{
	Hash hash;
	int num;
	eMPStat stat;
	int num2;

	hash = Global_78338;

	if (hParam4 != -1)
		hash = hParam4;

	if (func_323(iParam0, iParam1, &stat, &num, bParam2, bParam3))
	{
		num2 = _MPCHAR_STAT_GET_INT(stat, hash, 0);
		return IS_BIT_SET(num2, num);
	}

	return false;
}

int func_343(int iParam0) // Position - 0x1C632
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_344(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x1C706
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;

	num = hParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_78341[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		num4 = hParam1 - iParam2;
	
		if (num4 >= 0)
		{
			num5 = unk_0x3E0156DFC7F98195(num2, 0);
		
			if (num5 > num4)
			{
				unk_0xDA7F09AF3E39DFB7(num4, &num3);
				Global_2883588 = num3.f_1;
				Global_2883589 = num3;
				func_338(&Global_78341[0 /*14*/], iParam0, hParam1, &(num3.f_7), 0, 0, num3.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_338(&Global_78341[0 /*14*/], iParam0, hParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		unk_0x469012E2C56B87C8(&num6);
		num8 = hParam1 - iParam2;
	
		if (num8 >= 0)
		{
			num9 = unk_0xDAEB80C06A5C96B9(num2, 10, -1, 1, -1, -1);
		
			if (num9 > num8)
			{
				unk_0x58801753BDEA41F4(num8, &num6);
			
				if (num6.f_6 == 0)
					num7 = 9;
				else if (num6.f_6 == 1)
					num7 = 10;
				else if (num6.f_6 == 2)
					num7 = 2;
				else if (num6.f_6 == 3)
					num7 = 3;
				else if (num6.f_6 == 4)
					num7 = 4;
				else if (num6.f_6 == 5)
					num7 = 5;
				else if (num6.f_6 == 6)
					num7 = 6;
				else if (num6.f_6 == 7)
					num7 = 7;
				else if (num6.f_6 == 8)
					num7 = 8;
				else
					num7 = -1;
			
				Global_2883588 = num6.f_1;
				Global_2883589 = num6;
				func_338(&Global_78341[0 /*14*/], iParam0, hParam1, &(num6.f_9), num6.f_3, num6.f_4, num6.f_5, unk_0x7FEA86016BC12607(num6.f_1, joaat("OUTFIT_ONLY"), 0), num7, 2, num6.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xF9105E199166E912(&num10);
	
		if (iParam3 != -1 && Global_78539)
		{
			unk_0x3CD23E98A4BA2D16(iParam3, &num10);
			Global_2883588 = num10.f_1;
			Global_2883589 = num10;
			func_338(&Global_78341[0 /*14*/], iParam0, hParam1, &(num10.f_9), num10.f_3, num10.f_4, num10.f_5, unk_0x7FEA86016BC12607(num10.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, num10.f_1 != 0);
			return;
		}
	
		num11 = hParam1 - iParam2;
	
		if (num11 >= 0)
		{
			num12 = unk_0xDAEB80C06A5C96B9(num2, 10, -1, 0, -1, func_327(iParam0));
		
			if (num12 > num11)
			{
				unk_0x6F70EC5F2F78997E(num11, &num10);
				Global_2883588 = num10.f_1;
				Global_2883589 = num10;
				func_338(&Global_78341[0 /*14*/], iParam0, hParam1, &(num10.f_9), num10.f_3, num10.f_4, num10.f_5, unk_0x7FEA86016BC12607(num10.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, num10.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_345(Hash hParam0) // Position - 0x1C98D
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 9, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_346(Hash hParam0) // Position - 0x1CAE4
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 119;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 99;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 129;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 120;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 139;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 149;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 145;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 140;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 135;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 48, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_347(Hash hParam0) // Position - 0x1CFF2
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 1, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_348(Hash hParam0) // Position - 0x1D067
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 1, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_349(Hash hParam0) // Position - 0x1D0DB
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 6, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_350(Hash hParam0) // Position - 0x1D1C2
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 9;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 6;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		default:
			func_344(num6, hParam0, 33, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_351(Hash hParam0) // Position - 0x1D525
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 7;
			num3 = 0;
			num = 270;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 7;
			num3 = 1;
			num = 270;
			break;
	
		default:
			func_344(num6, hParam0, 17, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_352(Hash hParam0) // Position - 0x1D736
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 18, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_353(Hash hParam0) // Position - 0x1D966
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 7, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_354(Hash hParam0) // Position - 0x1DA76
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
			num2 = 0;
			num3 = 1;
			num = 22;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
			num2 = 0;
			num3 = 2;
			num = 45;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
			num2 = 0;
			num3 = 3;
			num = 65;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
			num2 = 0;
			num3 = 4;
			num = 58;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
			num2 = 0;
			num3 = 5;
			num = 72;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 6;
			num = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 7;
			num = 60;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
			num2 = 9;
			num3 = 1;
			num = 680;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
			num2 = 9;
			num3 = 2;
			num = 650;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
			num2 = 9;
			num3 = 3;
			num = 670;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
			num2 = 9;
			num3 = 4;
			num = 700;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
			num2 = 9;
			num3 = 5;
			num = 680;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 6;
			num = 720;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
			num2 = 9;
			num3 = 7;
			num = 740;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 8;
			num = 760;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 9;
			num3 = 9;
			num = 780;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
			num2 = 9;
			num3 = 10;
			num = 750;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
			num2 = 9;
			num3 = 11;
			num = 700;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_344(num6, hParam0, 84, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_355(Hash hParam0) // Position - 0x1E415
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
			num2 = 0;
			num3 = 1;
			num = 95;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
			num2 = 0;
			num3 = 2;
			num = 129;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
			num2 = 0;
			num3 = 3;
			num = 115;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 1;
			num = 750;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
			num2 = 11;
			num3 = 2;
			num = 650;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
			num2 = 11;
			num3 = 4;
			num = 850;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 5;
			num = 750;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 6;
			num = 690;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 7;
			num = 820;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 8;
			num = 650;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 9;
			num = 690;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 10;
			num = 690;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 11;
			num = 820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
			num2 = 17;
			num3 = 0;
			num = 58;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
			num2 = 17;
			num3 = 1;
			num = 68;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
			num2 = 17;
			num3 = 2;
			num = 65;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
			num2 = 17;
			num3 = 3;
			num = 60;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
			num2 = 17;
			num3 = 4;
			num = 65;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
			num2 = 17;
			num3 = 5;
			num = 63;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
			num2 = 17;
			num3 = 6;
			num = 60;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
			num2 = 17;
			num3 = 7;
			num = 58;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
			num2 = 18;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
			num2 = 18;
			num3 = 2;
			num = 99;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
			num2 = 18;
			num3 = 3;
			num = 105;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
			num2 = 18;
			num3 = 4;
			num = 110;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
			num2 = 18;
			num3 = 5;
			num = 110;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
			num2 = 18;
			num3 = 6;
			num = 99;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 7;
			num = 110;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 8;
			num = 110;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 9;
			num = 105;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 10;
			num = 105;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
			num2 = 19;
			num3 = 0;
			num = 15;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
			num2 = 19;
			num3 = 1;
			num = 15;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
			num2 = 19;
			num3 = 2;
			num = 15;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
			num2 = 19;
			num3 = 3;
			num = 15;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
			num2 = 19;
			num3 = 4;
			num = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
			num2 = 19;
			num3 = 5;
			num = 15;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
			num2 = 19;
			num3 = 6;
			num = 15;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
			num2 = 19;
			num3 = 7;
			num = 15;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
			num2 = 20;
			num3 = 0;
			num = 600;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
			num2 = 20;
			num3 = 1;
			num = 600;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
			num2 = 20;
			num3 = 2;
			num = 600;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
			num2 = 20;
			num3 = 3;
			num = 600;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
			num2 = 20;
			num3 = 4;
			num = 600;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
			num2 = 20;
			num3 = 5;
			num = 600;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
			num2 = 20;
			num3 = 6;
			num = 600;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
			num2 = 20;
			num3 = 7;
			num = 600;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
			num2 = 20;
			num3 = 8;
			num = 600;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 80;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 80;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 80;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 4;
			num = 80;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 6;
			num = 80;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
			num2 = 21;
			num3 = 7;
			num = 80;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
			num2 = 21;
			num3 = 8;
			num = 80;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
			num2 = 21;
			num3 = 9;
			num = 80;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
			num2 = 22;
			num3 = 1;
			num = 12;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
			num2 = 22;
			num3 = 2;
			num = 12;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 3;
			num = 22;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
			num2 = 22;
			num3 = 4;
			num = 18;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 5;
			num = 20;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
			num2 = 22;
			num3 = 6;
			num = 30;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
			num2 = 22;
			num3 = 7;
			num = 30;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
			num2 = 22;
			num3 = 8;
			num = 30;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
			num2 = 22;
			num3 = 9;
			num = 30;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
			num2 = 24;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 9;
			break;
	
		default:
			func_344(num6, hParam0, 104, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_356(Hash hParam0) // Position - 0x1EF88
{
	if (hParam0 < 136)
		func_358(hParam0);
	else
		func_357(hParam0);

	if (Global_78341[0 /*14*/].f_2 == -1)
		func_344(3, hParam0, 242, -1);

	return;
}

void func_357(Hash hParam0) // Position - 0x1EFBD
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
			num2 = 21;
			num3 = 0;
			num = 32;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
			num2 = 21;
			num3 = 1;
			num = 39;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
			num2 = 21;
			num3 = 2;
			num = 40;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
			num2 = 21;
			num3 = 3;
			num = 42;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
			num2 = 21;
			num3 = 4;
			num = 45;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
			num2 = 21;
			num3 = 5;
			num = 48;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
			num2 = 21;
			num3 = 6;
			num = 52;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
			num2 = 21;
			num3 = 7;
			num = 55;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			num = 390;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 390;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 560;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 390;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 390;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 390;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
			num2 = 22;
			num3 = 6;
			num = 560;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 7;
			num = 390;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 8;
			num = 390;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
			num2 = 22;
			num3 = 9;
			num = 390;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
			num2 = 22;
			num3 = 10;
			num = 390;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
			num2 = 22;
			num3 = 11;
			num = 3950;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
			num2 = 23;
			num3 = 0;
			num = 150;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
			num2 = 23;
			num3 = 1;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
			num2 = 23;
			num3 = 2;
			num = 150;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 23;
			num3 = 3;
			num = 150;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
			num2 = 23;
			num3 = 4;
			num = 160;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
			num2 = 23;
			num3 = 5;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
			num2 = 24;
			num3 = 0;
			num = 19;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
			num2 = 24;
			num3 = 1;
			num = 20;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 2;
			num = 19;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
			num2 = 24;
			num3 = 3;
			num = 22;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 4;
			num = 20;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
			num2 = 24;
			num3 = 5;
			num = 28;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
			num2 = 24;
			num3 = 6;
			num = 28;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
			num2 = 24;
			num3 = 7;
			num = 25;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 8;
			num = 22;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
			num2 = 24;
			num3 = 9;
			num = 19;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
			num2 = 24;
			num3 = 10;
			num = 22;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
			num2 = 24;
			num3 = 11;
			num = 19;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
			num2 = 24;
			num3 = 12;
			num = 20;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
			num2 = 24;
			num3 = 13;
			num = 25;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
			num2 = 24;
			num3 = 14;
			num = 20;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
			num2 = 24;
			num3 = 15;
			num = 28;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 35;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 40;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 45;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 45;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 49;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 820;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 790;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 820;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 8;
			num = 929;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
			num2 = 25;
			num3 = 9;
			num = 40;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
			num2 = 25;
			num3 = 10;
			num = 850;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
			num2 = 25;
			num3 = 11;
			num = 790;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
			num2 = 26;
			num3 = 9;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
			num2 = 27;
			num3 = 0;
			num = 2200;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
			num2 = 27;
			num3 = 1;
			num = 2500;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
			num2 = 27;
			num3 = 2;
			num = 2500;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
			num2 = 27;
			num3 = 3;
			num = 2200;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
			num2 = 27;
			num3 = 4;
			num = 2500;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
			num2 = 27;
			num3 = 5;
			num = 2500;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
			num2 = 27;
			num3 = 6;
			num = 2200;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
			num2 = 28;
			num3 = 0;
			num = 1100;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
			num2 = 28;
			num3 = 1;
			num = 1200;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
			num2 = 28;
			num3 = 2;
			num = 1220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
			num2 = 28;
			num3 = 3;
			num = 1250;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
			num2 = 28;
			num3 = 4;
			num = 1300;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
			num2 = 28;
			num3 = 5;
			num = 1360;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 6;
			num = 35;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 7;
			num = 38;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
			num2 = 28;
			num3 = 8;
			num = 40;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
			num2 = 28;
			num3 = 9;
			num = 42;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
			num2 = 28;
			num3 = 10;
			num = 50;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
			num2 = 28;
			num3 = 11;
			num = 45;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 12;
			num = 45;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 13;
			num = 44;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 14;
			num = 46;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 15;
			num = 52;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
			num2 = 29;
			num3 = 0;
			num = 3200;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
			num2 = 29;
			num3 = 1;
			num = 3200;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
			num2 = 29;
			num3 = 2;
			num = 2550;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
			num2 = 29;
			num3 = 3;
			num = 2750;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
			num2 = 29;
			num3 = 4;
			num = 2590;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
			num2 = 29;
			num3 = 5;
			num = 2750;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
			num2 = 29;
			num3 = 6;
			num = 2550;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
			num2 = 29;
			num3 = 7;
			num = 2590;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
			num2 = 29;
			num3 = 8;
			num = 2720;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
			num2 = 29;
			num3 = 9;
			num = 2750;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
			num2 = 30;
			num3 = 0;
			num = 3250;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
			num2 = 30;
			num3 = 1;
			num = 2950;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
			num2 = 30;
			num3 = 2;
			num = 3100;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
			num2 = 30;
			num3 = 3;
			num = 3150;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
			num2 = 30;
			num3 = 4;
			num = 3240;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 5;
			num = 3350;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 6;
			num = 3400;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 7;
			num = 3280;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
			num2 = 31;
			num3 = 0;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_358(Hash hParam0) // Position - 0x1FBC1
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
			num2 = 0;
			num3 = 1;
			num = 25;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
			num2 = 0;
			num3 = 3;
			num = 15;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
			num2 = 0;
			num3 = 4;
			num = 25;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
			num2 = 0;
			num3 = 5;
			num = 25;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
			num2 = 0;
			num3 = 6;
			num = 22;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
			num2 = 0;
			num3 = 9;
			num = 20;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
			num2 = 0;
			num3 = 10;
			num = 24;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
			num2 = 0;
			num3 = 11;
			num = 26;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
			num2 = 0;
			num3 = 12;
			num = 28;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
			num2 = 0;
			num3 = 13;
			num = 29;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
			num2 = 0;
			num3 = 14;
			num = 22;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
			num2 = 0;
			num3 = 15;
			num = 20;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
			num2 = 3;
			num3 = 0;
			num = 35;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
			num2 = 3;
			num3 = 1;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
			num2 = 3;
			num3 = 2;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
			num2 = 3;
			num3 = 3;
			num = 38;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
			num2 = 3;
			num3 = 4;
			num = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
			num2 = 3;
			num3 = 5;
			num = 40;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
			num2 = 3;
			num3 = 6;
			num = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
			num2 = 3;
			num3 = 7;
			num = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
			num2 = 3;
			num3 = 8;
			num = 40;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
			num2 = 4;
			num3 = 1;
			num = 500;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
			num2 = 4;
			num3 = 2;
			num = 560;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
			num2 = 4;
			num3 = 3;
			num = 600;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 4;
			num = 650;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 5;
			num = 500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 6;
			num = 560;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 7;
			num = 500;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 8;
			num = 650;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 9;
			num = 540;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 10;
			num = 690;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
			num2 = 4;
			num3 = 11;
			num = 560;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
			num2 = 4;
			num3 = 12;
			num = 590;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 13;
			num = 690;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 14;
			num = 540;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
			num2 = 4;
			num3 = 15;
			num = 500;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 2;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 3;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
			num2 = 11;
			num3 = 4;
			num = 22;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
			num2 = 11;
			num3 = 5;
			num = 350;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 6;
			num = 27;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
			num2 = 11;
			num3 = 7;
			num = 370;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 8;
			num = 25;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 9;
			num = 22;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
			num2 = 11;
			num3 = 10;
			num = 25;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
			num2 = 11;
			num3 = 11;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
			num2 = 11;
			num3 = 12;
			num = 22;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
			num2 = 11;
			num3 = 13;
			num = 27;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
			num2 = 11;
			num3 = 14;
			num = 25;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 15;
			num = 27;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
			num2 = 13;
			num3 = 1;
			num = 39;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
			num2 = 13;
			num3 = 2;
			num = 42;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
			num2 = 13;
			num3 = 3;
			num = 49;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
			num2 = 13;
			num3 = 4;
			num = 35;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
			num2 = 13;
			num3 = 5;
			num = 50;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
			num2 = 13;
			num3 = 6;
			num = 50;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
			num2 = 13;
			num3 = 7;
			num = 50;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
			num2 = 14;
			num3 = 1;
			num = 88;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 14;
			num3 = 2;
			num = 60;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 14;
			num3 = 3;
			num = 80;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
			num2 = 14;
			num3 = 4;
			num = 70;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 14;
			num3 = 5;
			num = 80;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
			num2 = 14;
			num3 = 6;
			num = 70;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
			num2 = 14;
			num3 = 7;
			num = 90;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
			num2 = 14;
			num3 = 8;
			num = 95;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 14;
			num3 = 9;
			num = 105;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
			num2 = 14;
			num3 = 10;
			num = 95;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
			num2 = 14;
			num3 = 11;
			num = 110;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
			num2 = 14;
			num3 = 12;
			num = 98;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
			num2 = 14;
			num3 = 13;
			num = 88;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
			num2 = 14;
			num3 = 14;
			num = 98;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
			num2 = 14;
			num3 = 15;
			num = 110;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num = 520;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num = 490;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num = 450;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num = 420;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num = 420;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 85;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 85;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 68;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 68;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 78;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 85;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 68;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 75;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 75;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 78;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 75;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 75;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 75;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 78;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 78;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			num = 40;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 32;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 32;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 32;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 38;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 35;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 38;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 29;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 32;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 29;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 35;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 32;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 35;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 32;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 40;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_359(Hash hParam0) // Position - 0x20AD0
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 9, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_360(Hash hParam0) // Position - 0x20BFD
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_78341[0 /*14*/].f_5 = 2;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_344(num6, hParam0, 7, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_361(int iParam0, Hash hParam1) // Position - 0x20CFB
{
	switch (iParam0)
	{
		case 0:
			func_379(hParam1);
			break;
	
		case 2:
			func_378(hParam1);
			break;
	
		case 3:
			func_374(hParam1);
			break;
	
		case 4:
			func_373(hParam1);
			break;
	
		case 6:
			func_372(hParam1);
			break;
	
		case 5:
			func_371(hParam1);
			break;
	
		case 8:
			func_370(hParam1);
			break;
	
		case 9:
			func_369(hParam1);
			break;
	
		case 10:
			func_368(hParam1);
			break;
	
		case 1:
			func_367(hParam1);
			break;
	
		case 7:
			func_366(hParam1);
			break;
	
		case 11:
			func_365(hParam1);
			break;
	
		case 12:
			func_364(hParam1);
			break;
	
		case 13:
			func_363(hParam1);
			break;
	
		case 14:
			func_362(hParam1);
			break;
	}

	return;
}

void func_362(Hash hParam0) // Position - 0x20DEB
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
			num2 = 1;
			num3 = 0;
			num = 4590;
			num4 = 2;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
			num2 = 1;
			num3 = 1;
			num = 4100;
			num4 = 2;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
			num2 = 1;
			num3 = 2;
			num = 3850;
			num4 = 2;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
			num2 = 1;
			num3 = 3;
			num = 1850;
			num4 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
			num2 = 1;
			num3 = 4;
			num = 5250;
			num4 = 2;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
			num2 = 1;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
			num2 = 1;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
			num2 = 1;
			num3 = 7;
			num = 5050;
			num4 = 2;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
			num2 = 2;
			num3 = 0;
			num = 2500;
			num4 = 2;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
			num2 = 2;
			num3 = 1;
			num = 1950;
			num4 = 2;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
			num2 = 2;
			num3 = 2;
			num = 3900;
			num4 = 2;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
			num2 = 2;
			num3 = 3;
			num = 3550;
			num4 = 2;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
			num2 = 2;
			num3 = 4;
			num = 4500;
			num4 = 2;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
			num2 = 2;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
			num2 = 2;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
			num2 = 2;
			num3 = 7;
			num = 2950;
			num4 = 2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
			num2 = 1;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
			num2 = 1;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
			num2 = 1;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
			num2 = 1;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
			num2 = 1;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
			num2 = 1;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
			num2 = 4;
			num3 = 0;
			num = 120;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
			num2 = 4;
			num3 = 1;
			num = 128;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
			num2 = 4;
			num3 = 2;
			num = 130;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
			num2 = 4;
			num3 = 3;
			num = 140;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
			num2 = 4;
			num3 = 4;
			num = 145;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
			num2 = 4;
			num3 = 5;
			num = 135;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
			num2 = 4;
			num3 = 6;
			num = 138;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
			num2 = 5;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
			num2 = 5;
			num3 = 1;
			num = 112;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
			num2 = 5;
			num3 = 2;
			num = 115;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
			num2 = 5;
			num3 = 3;
			num = 118;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 4;
			num = 120;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 5;
			num = 125;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
			num2 = 5;
			num3 = 6;
			num = 128;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
			num2 = 5;
			num3 = 7;
			num = 138;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
			num2 = 5;
			num3 = 8;
			num = 140;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
			num2 = 5;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 1;
			num = 55;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 2;
			num = 58;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 3;
			num = 58;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 5;
			num = 62;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 8;
			num = 68;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 9;
			num = 72;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 145;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 149;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 139;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 149;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 135;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 138;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 140;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 145;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 159;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 0;
			num = 198;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 1;
			num = 210;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 2;
			num = 185;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 3;
			num = 220;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 4;
			num = 190;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 5;
			num = 200;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 6;
			num = 208;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 7;
			num = 210;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 185;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 190;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 178;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 168;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 170;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 175;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 170;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 178;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 140;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 145;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 150;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 165;
			num4 = 10;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 168;
			num4 = 10;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 178;
			num4 = 10;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 160;
			num4 = 10;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
			num2 = 0;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
			num2 = 3;
			num3 = 0;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 9;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 9;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 10;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 10;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 11;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 12;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 12;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 13;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 13;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 14;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 16;
			num3 = 0;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 16;
			num3 = 1;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 16;
			num3 = 2;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 16;
			num3 = 3;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 16;
			num3 = 4;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 16;
			num3 = 5;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 16;
			num3 = 6;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 16;
			num3 = 7;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 16;
			num3 = 8;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 16;
			num3 = 9;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 10;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 11;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 16;
			num3 = 12;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 16;
			num3 = 13;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 16;
			num3 = 14;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 16;
			num3 = 15;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 1;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 2;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 3;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 4;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 5;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 19;
			num3 = 0;
			num = 30;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 19;
			num3 = 1;
			num = 30;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 19;
			num3 = 2;
			num = 32;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 19;
			num3 = 3;
			num = 35;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 19;
			num3 = 4;
			num = 38;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 19;
			num3 = 5;
			num = 42;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 19;
			num3 = 6;
			num = 42;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 19;
			num3 = 7;
			num = 40;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 19;
			num3 = 8;
			num = 45;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 19;
			num3 = 9;
			num = 48;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 10;
			num = 25;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 11;
			num = 25;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 19;
			num3 = 12;
			num = 28;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 19;
			num3 = 13;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 19;
			num3 = 14;
			num = 30;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 19;
			num3 = 15;
			num = 35;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 175, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_363(Hash hParam0) // Position - 0x222DC
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 9, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_364(Hash hParam0) // Position - 0x2242D
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4650;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5000;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 47, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_365(Hash hParam0) // Position - 0x22938
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 3;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 3;
			num3 = 7;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 3;
			num3 = 8;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 3;
			num3 = 9;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 3;
			num3 = 10;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 3;
			num3 = 11;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 3;
			num3 = 12;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 3;
			num3 = 13;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 3;
			num3 = 14;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 3;
			num3 = 15;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 4;
			num3 = 7;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 4;
			num3 = 8;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 4;
			num3 = 9;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 4;
			num3 = 10;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 4;
			num3 = 11;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 4;
			num3 = 12;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 4;
			num3 = 13;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 4;
			num3 = 14;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 4;
			num3 = 15;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
			num2 = 10;
			num3 = 1;
			num = 48;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
			num2 = 10;
			num3 = 2;
			num = 35;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
			num2 = 10;
			num3 = 3;
			num = 32;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
			num2 = 10;
			num3 = 4;
			num = 35;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
			num2 = 10;
			num3 = 5;
			num = 48;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
			num2 = 10;
			num3 = 6;
			num = 52;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 7;
			num = 38;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			num = 42;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			num = 38;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			num = 35;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			num = 48;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			num = 42;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			num = 45;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			num = 45;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			num = 49;
			break;
	
		default:
			func_344(num6, hParam0, 63, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_366(Hash hParam0) // Position - 0x22FA6
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 1, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_367(Hash hParam0) // Position - 0x2301A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 5, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_368(Hash hParam0) // Position - 0x230EA
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 6;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 7;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 8;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 9;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 10;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 11;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 12;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 13;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 14;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 15;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 53, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_369(Hash hParam0) // Position - 0x2361A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 0;
			num = 125;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 1;
			num = 150;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 2;
			num = 175;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 3;
			num = 85;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 4;
			num = 150;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 5;
			num = 175;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 12, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_370(Hash hParam0) // Position - 0x237B1
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
			num2 = 11;
			num3 = 0;
			num = 195;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
			num2 = 11;
			num3 = 1;
			num = 195;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
			num2 = 11;
			num3 = 2;
			num = 195;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
			num2 = 11;
			num3 = 3;
			num = 250;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
			num2 = 11;
			num3 = 4;
			num = 250;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
			num2 = 11;
			num3 = 5;
			num = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
			num2 = 11;
			num3 = 6;
			num = 195;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
			num2 = 11;
			num3 = 7;
			num = 250;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
			num2 = 11;
			num3 = 8;
			num = 250;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
			num2 = 11;
			num3 = 9;
			num = 250;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
			num2 = 11;
			num3 = 10;
			num = 250;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
			num2 = 11;
			num3 = 11;
			num = 195;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
			num2 = 11;
			num3 = 12;
			num = 250;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 16;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 16;
			num3 = 2;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 16;
			num3 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 16;
			num3 = 4;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 16;
			num3 = 5;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 16;
			num3 = 6;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 16;
			num3 = 7;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 16;
			num3 = 8;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 16;
			num3 = 9;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 16;
			num3 = 10;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 16;
			num3 = 11;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 16;
			num3 = 12;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 16;
			num3 = 13;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 16;
			num3 = 14;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 16;
			num3 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 17;
			num3 = 3;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 17;
			num3 = 4;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 17;
			num3 = 5;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 17;
			num3 = 6;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 17;
			num3 = 7;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 17;
			num3 = 8;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 17;
			num3 = 9;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 17;
			num3 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 17;
			num3 = 11;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 17;
			num3 = 12;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 17;
			num3 = 13;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 17;
			num3 = 14;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 17;
			num3 = 15;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 77, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_371(Hash hParam0) // Position - 0x23FAF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 7, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_372(Hash hParam0) // Position - 0x240E9
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 80;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 80;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 89;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 45;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 35;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 6;
			num = 89;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 7;
			num = 95;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 8;
			num = 115;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 9;
			num = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 10;
			num = 145;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 11;
			num = 145;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 1;
			num = 180;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 2;
			num = 80;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 3;
			num = 200;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 4;
			num = 220;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 5;
			num = 235;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			num = 870;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
			num2 = 8;
			num3 = 1;
			num = 870;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
			num2 = 8;
			num3 = 2;
			num = 870;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 3;
			num = 1275;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
			num2 = 8;
			num3 = 4;
			num = 1275;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 5;
			num = 1275;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
			num2 = 8;
			num3 = 6;
			num = 1275;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
			num2 = 8;
			num3 = 7;
			num = 1275;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 8;
			num = 1275;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
			num2 = 11;
			num3 = 1;
			num = 50;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
			num2 = 11;
			num3 = 2;
			num = 50;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
			num2 = 11;
			num3 = 3;
			num = 50;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
			num2 = 11;
			num3 = 4;
			num = 50;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
			num2 = 11;
			num3 = 5;
			num = 50;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
			num2 = 11;
			num3 = 6;
			num = 50;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
			num2 = 11;
			num3 = 7;
			num = 50;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
			num2 = 11;
			num3 = 8;
			num = 50;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
			num2 = 11;
			num3 = 9;
			num = 50;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
			num2 = 11;
			num3 = 10;
			num = 50;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
			num2 = 11;
			num3 = 11;
			num = 50;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 12;
			num = 50;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 13;
			num = 50;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
			num2 = 11;
			num3 = 14;
			num = 50;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
			num2 = 11;
			num3 = 15;
			num = 50;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 1;
			num = 25;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 2;
			num = 20;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 3;
			num = 24;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 4;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 5;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 6;
			num = 29;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 7;
			num = 27;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 8;
			num = 25;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 9;
			num = 30;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 10;
			num = 28;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 11;
			num = 30;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
			num2 = 14;
			num3 = 0;
			num = 155;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
			num2 = 14;
			num3 = 1;
			num = 155;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
			num2 = 14;
			num3 = 2;
			num = 165;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
			num2 = 14;
			num3 = 3;
			num = 170;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
			num2 = 14;
			num3 = 4;
			num = 160;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
			num2 = 14;
			num3 = 5;
			num = 165;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
			num2 = 14;
			num3 = 6;
			num = 170;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
			num2 = 14;
			num3 = 7;
			num = 160;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
			num2 = 16;
			num3 = 0;
			num = 720;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
			num2 = 16;
			num3 = 1;
			num = 680;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
			num2 = 16;
			num3 = 2;
			num = 650;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
			num2 = 16;
			num3 = 3;
			num = 670;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
			num2 = 16;
			num3 = 4;
			num = 700;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
			num2 = 16;
			num3 = 5;
			num = 680;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 6;
			num = 720;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
			num2 = 16;
			num3 = 7;
			num = 740;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 8;
			num = 760;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 16;
			num3 = 9;
			num = 780;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
			num2 = 16;
			num3 = 10;
			num = 750;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
			num2 = 16;
			num3 = 11;
			num = 700;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
			num2 = 17;
			num3 = 0;
			num = 790;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
			num2 = 17;
			num3 = 1;
			num = 750;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
			num2 = 17;
			num3 = 2;
			num = 860;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
			num2 = 17;
			num3 = 3;
			num = 750;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
			num2 = 17;
			num3 = 4;
			num = 790;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
			num2 = 17;
			num3 = 5;
			num = 840;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 17;
			num3 = 6;
			num = 820;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
			num2 = 17;
			num3 = 7;
			num = 800;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
			num2 = 17;
			num3 = 8;
			num = 850;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
			num2 = 17;
			num3 = 9;
			num = 870;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
			num2 = 17;
			num3 = 10;
			num = 720;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
			num2 = 17;
			num3 = 11;
			num = 740;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
			num2 = 17;
			num3 = 12;
			num = 800;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
			num2 = 17;
			num3 = 13;
			num = 750;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
			num2 = 17;
			num3 = 14;
			num = 770;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
			num2 = 17;
			num3 = 15;
			num = 860;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
			num2 = 18;
			num3 = 0;
			num = 850;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
			num2 = 18;
			num3 = 1;
			num = 800;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
			num2 = 18;
			num3 = 2;
			num = 780;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 18;
			num3 = 3;
			num = 890;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
			num2 = 18;
			num3 = 4;
			num = 820;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 6;
			num = 870;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
			num2 = 18;
			num3 = 7;
			num = 930;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
			num2 = 18;
			num3 = 8;
			num = 880;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
			num2 = 18;
			num3 = 9;
			num = 900;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
			num2 = 18;
			num3 = 10;
			num = 920;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
			num2 = 18;
			num3 = 11;
			num = 970;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 12;
			num = 990;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 13;
			num = 960;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 14;
			num = 980;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
			num2 = 18;
			num3 = 15;
			num = 950;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 0;
			num = 110;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
			num2 = 19;
			num3 = 1;
			num = 115;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
			num2 = 19;
			num3 = 2;
			num = 120;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
			num2 = 19;
			num3 = 3;
			num = 110;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
			num2 = 19;
			num3 = 4;
			num = 125;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 19;
			num3 = 5;
			num = 128;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
			num2 = 19;
			num3 = 6;
			num = 135;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
			num2 = 19;
			num3 = 7;
			num = 130;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
			num2 = 19;
			num3 = 8;
			num = 145;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 9;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
			num2 = 19;
			num3 = 10;
			num = 120;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
			num2 = 19;
			num3 = 11;
			num = 150;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
			num2 = 19;
			num3 = 12;
			num = 125;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
			num2 = 19;
			num3 = 13;
			num = 120;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
			num2 = 19;
			num3 = 14;
			num = 130;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
			num2 = 19;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_344(num6, hParam0, 134, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_373(Hash hParam0) // Position - 0x25014
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 1;
			num = 32;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 2;
			num = 38;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 3;
			num = 44;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
			num2 = 6;
			num3 = 1;
			num = 690;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 2;
			num = 720;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
			num2 = 6;
			num3 = 3;
			num = 850;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 4;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 5;
			num = 740;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 6;
			num = 750;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
			num2 = 6;
			num3 = 7;
			num = 790;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 1;
			num = 145;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 2;
			num = 140;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 3;
			num = 148;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 5;
			num = 154;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 6;
			num = 158;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
			num2 = 11;
			num3 = 0;
			num = 820;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
			num2 = 11;
			num3 = 1;
			num = 820;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
			num2 = 11;
			num3 = 2;
			num = 850;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
			num2 = 11;
			num3 = 4;
			num = 920;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
			num2 = 11;
			num3 = 5;
			num = 950;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
			num2 = 13;
			num3 = 1;
			num = 45;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
			num2 = 13;
			num3 = 2;
			num = 48;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
			num2 = 13;
			num3 = 3;
			num = 45;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
			num2 = 13;
			num3 = 4;
			num = 48;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
			num2 = 13;
			num3 = 5;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
			num2 = 13;
			num3 = 6;
			num = 55;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 7;
			num = 58;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
			num2 = 13;
			num3 = 8;
			num = 60;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
			num2 = 13;
			num3 = 9;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 10;
			num = 62;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
			num2 = 13;
			num3 = 11;
			num = 65;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 160;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 180;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 180;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			num = 118;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 120;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 128;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
			num2 = 20;
			num3 = 3;
			num = 128;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
			num2 = 20;
			num3 = 4;
			num = 130;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
			num2 = 20;
			num3 = 5;
			num = 145;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
			num2 = 20;
			num3 = 6;
			num = 138;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
			num2 = 20;
			num3 = 7;
			num = 132;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
			num2 = 20;
			num3 = 8;
			num = 148;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 0;
			num = 118;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 1;
			num = 118;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 2;
			num = 118;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 3;
			num = 129;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 4;
			num = 135;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 5;
			num = 135;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 6;
			num = 118;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 7;
			num = 118;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 8;
			num = 118;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
			num2 = 22;
			num3 = 0;
			num = 55;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
			num2 = 22;
			num3 = 1;
			num = 55;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
			num2 = 22;
			num3 = 2;
			num = 59;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
			num2 = 22;
			num3 = 3;
			num = 59;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
			num2 = 22;
			num3 = 4;
			num = 65;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
			num2 = 22;
			num3 = 5;
			num = 65;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
			num2 = 22;
			num3 = 6;
			num = 69;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
			num2 = 22;
			num3 = 7;
			num = 69;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
			num2 = 22;
			num3 = 8;
			num = 75;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
			num2 = 22;
			num3 = 9;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
			num2 = 22;
			num3 = 10;
			num = 65;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
			num2 = 22;
			num3 = 11;
			num = 65;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
			num2 = 22;
			num3 = 12;
			num = 65;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
			num2 = 22;
			num3 = 13;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			num = 38;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 38;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 28;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
			num2 = 23;
			num3 = 3;
			num = 34;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
			num2 = 23;
			num3 = 4;
			num = 36;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
			num2 = 23;
			num3 = 5;
			num = 32;
			break;
	
		default:
			func_344(num6, hParam0, 117, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_374(Hash hParam0) // Position - 0x25CD1
{
	if (hParam0 < 107)
		func_377(hParam0);
	else if (hParam0 < 227)
		func_376(hParam0);
	else
		func_375(hParam0);

	if (Global_78341[0 /*14*/].f_2 == -1)
		func_344(3, hParam0, 318, -1);

	return;
}

void func_375(Hash hParam0) // Position - 0x25D17
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 0;
			num5 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 1;
			num5 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 2;
			num5 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 3;
			num5 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 23;
			num3 = 4;
			num5 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 23;
			num3 = 5;
			num5 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 23;
			num3 = 6;
			num5 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 23;
			num3 = 7;
			num5 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 23;
			num3 = 8;
			num5 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 23;
			num3 = 9;
			num5 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 23;
			num3 = 10;
			num5 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 23;
			num3 = 11;
			num5 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 23;
			num3 = 12;
			num5 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 23;
			num3 = 13;
			num5 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 23;
			num3 = 14;
			num5 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 23;
			num3 = 15;
			num5 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
			num2 = 24;
			num3 = 0;
			num = 2200;
			num5 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
			num2 = 24;
			num3 = 1;
			num = 2200;
			num5 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
			num2 = 24;
			num3 = 2;
			num = 2200;
			num5 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
			num2 = 24;
			num3 = 3;
			num = 2200;
			num5 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
			num2 = 24;
			num3 = 4;
			num = 2200;
			num5 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
			num2 = 24;
			num3 = 5;
			num = 2200;
			num5 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
			num2 = 24;
			num3 = 6;
			num = 2200;
			num5 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
			num2 = 24;
			num3 = 7;
			num = 2200;
			num5 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
			num2 = 24;
			num3 = 8;
			num = 2200;
			num5 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
			num2 = 24;
			num3 = 9;
			num = 2200;
			num5 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
			num2 = 24;
			num3 = 10;
			num = 2200;
			num5 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
			num2 = 24;
			num3 = 11;
			num = 2200;
			num5 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
			num2 = 24;
			num3 = 12;
			num = 2200;
			num5 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
			num2 = 24;
			num3 = 13;
			num = 2200;
			num5 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
			num2 = 24;
			num3 = 14;
			num = 2200;
			num5 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
			num2 = 24;
			num3 = 15;
			num = 2200;
			num5 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num5 = 1;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
			num2 = 27;
			num3 = 0;
			num = 150;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
			num2 = 27;
			num3 = 1;
			num = 160;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
			num2 = 27;
			num3 = 2;
			num = 150;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 27;
			num3 = 3;
			num = 150;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
			num2 = 27;
			num3 = 4;
			num = 160;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
			num2 = 27;
			num3 = 5;
			num = 160;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
			num2 = 28;
			num3 = 0;
			num = 88;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 28;
			num3 = 1;
			num = 60;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 28;
			num3 = 2;
			num = 70;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 28;
			num3 = 3;
			num = 80;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 28;
			num3 = 4;
			num = 90;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 28;
			num3 = 5;
			num = 80;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
			num2 = 28;
			num3 = 6;
			num = 70;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 28;
			num3 = 7;
			num = 95;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 28;
			num3 = 8;
			num = 105;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
			num2 = 28;
			num3 = 9;
			num = 95;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
			num2 = 28;
			num3 = 10;
			num = 110;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 28;
			num3 = 11;
			num = 98;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
			num2 = 28;
			num3 = 12;
			num = 88;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 28;
			num3 = 13;
			num = 98;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 28;
			num3 = 14;
			num = 110;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
			num2 = 28;
			num3 = 15;
			num = 98;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 0;
			num = 250;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 1;
			num = 270;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 2;
			num = 280;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 3;
			num = 275;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 4;
			num = 290;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 5;
			num = 35;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 6;
			num = 35;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 7;
			num = 35;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 8;
			num = 295;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 9;
			num = 35;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 10;
			num = 35;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 11;
			num = 35;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 12;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
			num2 = 30;
			num3 = 0;
			num = 1750;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
			num2 = 30;
			num3 = 1;
			num = 1920;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
			num2 = 30;
			num3 = 2;
			num = 1890;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 3;
			num = 1850;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
			num2 = 30;
			num3 = 4;
			num = 1750;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
			num2 = 30;
			num3 = 5;
			num = 1990;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
			num2 = 30;
			num3 = 6;
			num = 1820;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
			num2 = 30;
			num3 = 7;
			num = 1990;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 8;
			num = 1920;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
			num2 = 30;
			num3 = 9;
			num = 1850;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
			num2 = 30;
			num3 = 10;
			num = 1990;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
			num2 = 30;
			num3 = 11;
			num = 1790;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
			num2 = 30;
			num3 = 12;
			num = 1790;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
			num2 = 31;
			num3 = 0;
			num = 69;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
			num2 = 31;
			num3 = 1;
			num = 75;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
			num2 = 31;
			num3 = 2;
			num = 75;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
			num2 = 31;
			num3 = 3;
			num = 79;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
			num2 = 31;
			num3 = 4;
			num = 79;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
			num2 = 31;
			num3 = 5;
			num = 89;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
			num2 = 31;
			num3 = 6;
			num = 85;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
			num2 = 31;
			num3 = 7;
			num = 85;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
			num2 = 31;
			num3 = 8;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_376(Hash hParam0) // Position - 0x267BC
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
			num2 = 12;
			num3 = 0;
			num = 195;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
			num2 = 12;
			num3 = 1;
			num = 420;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
			num2 = 12;
			num3 = 2;
			num = 390;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
			num2 = 12;
			num3 = 3;
			num = 450;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
			num2 = 12;
			num3 = 4;
			num = 400;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
			num2 = 12;
			num3 = 5;
			num = 390;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
			num2 = 12;
			num3 = 6;
			num = 570;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
			num2 = 12;
			num3 = 7;
			num = 390;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
			num2 = 12;
			num3 = 8;
			num = 470;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
			num2 = 12;
			num3 = 9;
			num = 390;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
			num2 = 12;
			num3 = 10;
			num = 520;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
			num2 = 12;
			num3 = 11;
			num = 490;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
			num2 = 12;
			num3 = 12;
			num = 490;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
			num2 = 12;
			num3 = 13;
			num = 590;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
			num2 = 12;
			num3 = 14;
			num = 560;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
			num2 = 12;
			num3 = 15;
			num = 520;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
			num2 = 13;
			num3 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
			num2 = 13;
			num3 = 2;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
			num2 = 13;
			num3 = 3;
			num = 90;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
			num2 = 13;
			num3 = 4;
			num = 85;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
			num2 = 13;
			num3 = 5;
			num = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
			num2 = 13;
			num3 = 6;
			num = 90;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
			num2 = 13;
			num3 = 7;
			num = 47;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
			num2 = 13;
			num3 = 8;
			num = 45;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
			num2 = 13;
			num3 = 9;
			num = 48;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
			num2 = 13;
			num3 = 10;
			num = 45;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 11;
			num = 85;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
			num2 = 13;
			num3 = 12;
			num = 45;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
			num2 = 13;
			num3 = 13;
			num = 47;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
			num2 = 13;
			num3 = 14;
			num = 45;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
			num2 = 13;
			num3 = 15;
			num = 48;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
			num2 = 14;
			num3 = 0;
			num = 290;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
			num2 = 14;
			num3 = 1;
			num = 290;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
			num2 = 14;
			num3 = 2;
			num = 290;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
			num2 = 14;
			num3 = 3;
			num = 290;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
			num2 = 14;
			num3 = 4;
			num = 290;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
			num2 = 14;
			num3 = 5;
			num = 290;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
			num2 = 14;
			num3 = 6;
			num = 65;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
			num2 = 14;
			num3 = 7;
			num = 65;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
			num2 = 15;
			num3 = 1;
			num = 220;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
			num2 = 15;
			num3 = 2;
			num = 220;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
			num2 = 15;
			num3 = 3;
			num = 240;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
			num2 = 15;
			num3 = 5;
			num = 250;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
			num2 = 15;
			num3 = 6;
			num = 260;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
			num2 = 15;
			num3 = 7;
			num = 40;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
			num2 = 15;
			num3 = 8;
			num = 50;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
			num2 = 15;
			num3 = 9;
			num = 45;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
			num2 = 15;
			num3 = 10;
			num = 40;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
			num2 = 15;
			num3 = 11;
			num = 55;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			num = 40;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
			num2 = 17;
			num3 = 1;
			num = 50;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
			num2 = 17;
			num3 = 3;
			num = 50;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
			num2 = 17;
			num3 = 4;
			num = 50;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
			num2 = 17;
			num3 = 5;
			num = 50;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
			num2 = 17;
			num3 = 6;
			num = 50;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
			num2 = 17;
			num3 = 7;
			num = 50;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 8;
			num = 50;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 9;
			num = 50;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
			num2 = 17;
			num3 = 10;
			num = 50;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
			num2 = 17;
			num3 = 11;
			num = 50;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
			num2 = 17;
			num3 = 12;
			num = 50;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
			num2 = 17;
			num3 = 13;
			num = 50;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
			num2 = 17;
			num3 = 14;
			num = 50;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
			num2 = 17;
			num3 = 15;
			num = 50;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			num5 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num5 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num5 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num5 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num5 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num5 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 18;
			num3 = 6;
			num5 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 18;
			num3 = 7;
			num5 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 18;
			num3 = 8;
			num5 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 18;
			num3 = 9;
			num5 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 18;
			num3 = 10;
			num5 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 18;
			num3 = 11;
			num5 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 18;
			num3 = 12;
			num5 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 18;
			num3 = 13;
			num5 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 18;
			num3 = 14;
			num5 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 18;
			num3 = 15;
			num5 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 480;
			num5 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 440;
			num5 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 440;
			num5 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 520;
			num5 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 440;
			num5 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 440;
			num5 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 480;
			num5 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 480;
			num5 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 480;
			num5 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 480;
			num5 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 480;
			num5 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 480;
			num5 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 520;
			num5 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 520;
			num5 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 520;
			num5 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 440;
			num5 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
			num2 = 21;
			num3 = 0;
			num = 220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
			num2 = 21;
			num3 = 1;
			num = 200;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
			num2 = 21;
			num3 = 2;
			num = 240;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
			num2 = 21;
			num3 = 3;
			num = 240;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 4;
			num = 260;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
			num2 = 21;
			num3 = 5;
			num = 275;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
			num2 = 21;
			num3 = 6;
			num = 275;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 7;
			num = 280;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
			num2 = 21;
			num3 = 8;
			num = 280;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 9;
			num = 280;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
			num2 = 21;
			num3 = 10;
			num = 280;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 11;
			num = 280;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 12;
			num = 280;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 13;
			num = 280;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
			num2 = 22;
			num3 = 0;
			num = 3100;
			num5 = 3;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
			num2 = 22;
			num3 = 1;
			num = 2800;
			num5 = 3;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
			num2 = 22;
			num3 = 2;
			num = 2500;
			num5 = 3;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3000;
			num5 = 3;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_377(Hash hParam0) // Position - 0x275AB
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 2;
			num = 180;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
			num2 = 0;
			num3 = 3;
			num = 22;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
			num2 = 0;
			num3 = 4;
			num = 20;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
			num2 = 0;
			num3 = 5;
			num = 18;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
			num2 = 0;
			num3 = 6;
			num = 19;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
			num2 = 0;
			num3 = 9;
			num = 19;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
			num2 = 0;
			num3 = 10;
			num = 19;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
			num2 = 0;
			num3 = 11;
			num = 18;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
			num2 = 0;
			num3 = 12;
			num = 20;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
			num2 = 0;
			num3 = 13;
			num = 22;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
			num2 = 0;
			num3 = 14;
			num = 19;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
			num2 = 0;
			num3 = 15;
			num = 22;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			num5 = 4;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			num5 = 4;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			num5 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			num5 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			num5 = 4;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 0;
			num = 20;
			num5 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 1;
			num = 22;
			num5 = 2;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 2;
			num = 20;
			num5 = 2;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 3;
			num = 25;
			num5 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 4;
			num = 23;
			num5 = 2;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 5;
			num = 25;
			num5 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 6;
			num = 28;
			num5 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 7;
			num = 26;
			num5 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 8;
			num = 24;
			num5 = 2;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 9;
			num = 27;
			num5 = 2;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 10;
			num = 29;
			num5 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 11;
			num = 28;
			num5 = 2;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 12;
			num = 25;
			num5 = 2;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 13;
			num = 22;
			num5 = 2;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 14;
			num = 27;
			num5 = 2;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 15;
			num = 29;
			num5 = 2;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
			num2 = 6;
			num3 = 0;
			num5 = 3;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
			num2 = 6;
			num3 = 1;
			num = 1270;
			num5 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
			num2 = 6;
			num3 = 2;
			num = 1270;
			num5 = 3;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
			num2 = 6;
			num3 = 3;
			num = 1270;
			num5 = 3;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
			num2 = 6;
			num3 = 4;
			num = 1090;
			num5 = 3;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
			num2 = 6;
			num3 = 5;
			num = 1090;
			num5 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 6;
			num = 1120;
			num5 = 3;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
			num2 = 6;
			num3 = 7;
			num = 1120;
			num5 = 3;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
			num2 = 6;
			num3 = 8;
			num = 1290;
			num5 = 3;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
			num2 = 6;
			num3 = 9;
			num = 1290;
			num5 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
			num2 = 6;
			num3 = 10;
			num = 1320;
			num5 = 3;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
			num2 = 6;
			num3 = 11;
			num = 1320;
			num5 = 3;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 12;
			num = 1590;
			num5 = 3;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
			num2 = 6;
			num3 = 13;
			num = 1590;
			num5 = 3;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 14;
			num = 1590;
			num5 = 3;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
			num2 = 6;
			num3 = 15;
			num = 1320;
			num5 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
			num2 = 7;
			num3 = 0;
			num = 98;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
			num2 = 7;
			num3 = 1;
			num = 98;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
			num2 = 7;
			num3 = 2;
			num = 110;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
			num2 = 7;
			num3 = 3;
			num = 110;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
			num2 = 7;
			num3 = 4;
			num = 118;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
			num2 = 7;
			num3 = 5;
			num = 120;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
			num2 = 7;
			num3 = 6;
			num = 120;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
			num2 = 7;
			num3 = 7;
			num = 129;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
			num2 = 7;
			num3 = 8;
			num = 125;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 9;
			num = 125;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 10;
			num = 129;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
			num2 = 7;
			num3 = 11;
			num = 129;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
			num2 = 7;
			num3 = 12;
			num = 135;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
			num2 = 7;
			num3 = 13;
			num = 139;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
			num2 = 7;
			num3 = 14;
			num = 145;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
			num2 = 7;
			num3 = 15;
			num = 145;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 30;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 38;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 32;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 30;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 33;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 35;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 35;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 38;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 33;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 35;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 38;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 32;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 1;
			num = 59;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
			num2 = 11;
			num3 = 3;
			num = 25;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
			num2 = 11;
			num3 = 4;
			num = 29;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
			num2 = 11;
			num3 = 5;
			num = 27;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
			num2 = 11;
			num3 = 6;
			num = 25;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
			num2 = 11;
			num3 = 7;
			num = 27;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
			num2 = 11;
			num3 = 8;
			num = 28;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
			num2 = 11;
			num3 = 9;
			num = 30;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 10;
			num = 29;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
			num2 = 11;
			num3 = 11;
			num = 27;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
			num2 = 11;
			num3 = 12;
			num = 29;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
			num2 = 11;
			num3 = 13;
			num = 32;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
			num2 = 11;
			num3 = 14;
			num = 30;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
			num2 = 11;
			num3 = 15;
			num = 28;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_378(Hash hParam0) // Position - 0x281F6
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
			num2 = 0;
			num3 = 3;
			num5 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
			num2 = 0;
			num3 = 4;
			num5 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
			num2 = 0;
			num3 = 5;
			num5 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
			num2 = 0;
			num3 = 6;
			num5 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
			num2 = 0;
			num3 = 7;
			num5 = 3;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
			num2 = 0;
			num3 = 8;
			num5 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
			num2 = 0;
			num3 = 9;
			num5 = 3;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
			num2 = 0;
			num3 = 10;
			num5 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
			num2 = 0;
			num3 = 11;
			num5 = 3;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
			num2 = 0;
			num3 = 12;
			num5 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
			num2 = 0;
			num3 = 14;
			num5 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
			num2 = 0;
			num3 = 15;
			num5 = 3;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
			num2 = 1;
			num3 = 0;
			num5 = 3;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
			num2 = 2;
			num3 = 0;
			num5 = 3;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
			num2 = 3;
			num3 = 0;
			num5 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 21, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_379(Hash hParam0) // Position - 0x2846F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_78341[0 /*14*/].f_5 = 1;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 9;
			break;
	
		default:
			func_344(num6, hParam0, 10, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_380(int iParam0, Hash hParam1) // Position - 0x285B5
{
	switch (iParam0)
	{
		case 0:
			func_397(hParam1);
			break;
	
		case 2:
			func_396(hParam1);
			break;
	
		case 3:
			func_393(hParam1);
			break;
	
		case 4:
			func_392(hParam1);
			break;
	
		case 6:
			func_391(hParam1);
			break;
	
		case 5:
			func_390(hParam1);
			break;
	
		case 8:
			func_389(hParam1);
			break;
	
		case 9:
			func_388(hParam1);
			break;
	
		case 10:
			func_387(hParam1);
			break;
	
		case 1:
			func_386(hParam1);
			break;
	
		case 7:
			func_385(hParam1);
			break;
	
		case 11:
			func_384(hParam1);
			break;
	
		case 12:
			func_383(hParam1);
			break;
	
		case 13:
			func_382(hParam1);
			break;
	
		case 14:
			func_381(hParam1);
			break;
	}

	return;
}

void func_381(Hash hParam0) // Position - 0x286A5
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
			num2 = 1;
			num3 = 0;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 11;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 28;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
			num2 = 0;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
			num2 = 4;
			num3 = 0;
			num = 58;
			num4 = 10;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
			num2 = 4;
			num3 = 1;
			num = 56;
			num4 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
			num2 = 4;
			num3 = 2;
			num = 60;
			num4 = 10;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
			num2 = 4;
			num3 = 3;
			num = 65;
			num4 = 10;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
			num2 = 4;
			num3 = 4;
			num = 62;
			num4 = 10;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
			num2 = 4;
			num3 = 5;
			num = 65;
			num4 = 10;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
			num2 = 4;
			num3 = 6;
			num = 68;
			num4 = 10;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
			num2 = 4;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
			num2 = 5;
			num3 = 0;
			num = 65;
			num4 = 10;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
			num2 = 5;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
			num2 = 5;
			num3 = 2;
			num = 72;
			num4 = 10;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
			num2 = 5;
			num3 = 3;
			num = 70;
			num4 = 10;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
			num2 = 5;
			num3 = 4;
			num = 74;
			num4 = 10;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
			num2 = 5;
			num3 = 5;
			num = 78;
			num4 = 10;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
			num2 = 5;
			num3 = 6;
			num = 82;
			num4 = 10;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
			num2 = 5;
			num3 = 7;
			num = 85;
			num4 = 10;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
			num2 = 5;
			num3 = 8;
			num = 85;
			num4 = 10;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
			num2 = 5;
			num3 = 9;
			num4 = 10;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
			num2 = 6;
			num3 = 0;
			num = 69;
			num4 = 10;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
			num2 = 6;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
			num2 = 6;
			num3 = 2;
			num = 69;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
			num2 = 6;
			num3 = 3;
			num = 69;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
			num2 = 6;
			num3 = 4;
			num = 69;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
			num2 = 6;
			num3 = 5;
			num = 69;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
			num2 = 6;
			num3 = 6;
			num = 69;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
			num2 = 6;
			num3 = 7;
			num = 69;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
			num2 = 6;
			num3 = 8;
			num = 69;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 6;
			num3 = 9;
			num = 69;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 170;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 175;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 180;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 185;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 189;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 195;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 235;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 245;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 250;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 275;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
			num2 = 8;
			num3 = 10;
			num = 280;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
			num2 = 8;
			num3 = 11;
			num = 295;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 179;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 159;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 165;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 155;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 225;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		default:
			func_344(num6, hParam0, 113, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_382(Hash hParam0) // Position - 0x2942F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 10, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_383(Hash hParam0) // Position - 0x295A9
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			num = 840;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4600;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 53, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_384(Hash hParam0) // Position - 0x29B20
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
			num2 = 3;
			num3 = 0;
			num = 390;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
			num2 = 3;
			num3 = 1;
			num = 390;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
			num2 = 3;
			num3 = 2;
			num = 420;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
			num2 = 3;
			num3 = 3;
			num = 420;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
			num2 = 3;
			num3 = 4;
			num = 490;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
			num2 = 3;
			num3 = 5;
			num = 490;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
			num2 = 3;
			num3 = 6;
			num = 540;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
			num2 = 3;
			num3 = 7;
			num = 540;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
			num2 = 3;
			num3 = 8;
			num = 550;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
			num2 = 3;
			num3 = 9;
			num = 540;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
			num2 = 4;
			num3 = 0;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
			num2 = 4;
			num3 = 1;
			num = 850;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
			num2 = 4;
			num3 = 2;
			num = 890;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
			num2 = 4;
			num3 = 3;
			num = 890;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
			num2 = 4;
			num3 = 4;
			num = 920;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
			num2 = 4;
			num3 = 5;
			num = 920;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
			num2 = 4;
			num3 = 6;
			num = 950;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 7;
			num = 980;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
			num2 = 4;
			num3 = 8;
			num = 1050;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 9;
			num = 1100;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			num = 1890;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 1;
			num = 1820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 2;
			num = 1820;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 3;
			num = 1850;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 4;
			num = 1850;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 5;
			num = 1900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 6;
			num = 1920;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 7;
			num = 1980;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 8;
			num = 2100;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 9;
			num = 2120;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 10;
			num = 2000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 11;
			num = 2200;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 12;
			num = 2280;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 13;
			num = 2300;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 14;
			num = 2350;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 15;
			num = 2280;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 45, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_385(Hash hParam0) // Position - 0x2A04A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 1, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_386(Hash hParam0) // Position - 0x2A0BE
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 5, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_387(Hash hParam0) // Position - 0x2A18E
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 3;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 4;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 5;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 6;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 7;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			break;
	
		default:
			func_344(num6, hParam0, 48, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_388(Hash hParam0) // Position - 0x2A666
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 20, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_389(Hash hParam0) // Position - 0x2A8CF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 24, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_390(Hash hParam0) // Position - 0x2ABA5
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_344(num6, hParam0, 14, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_391(Hash hParam0) // Position - 0x2AD6E
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 665;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 620;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 540;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 580;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 650;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
			num2 = 15;
			num3 = 1;
			num = 64;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
			num2 = 15;
			num3 = 2;
			num = 56;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
			num2 = 15;
			num3 = 3;
			num = 69;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
			num2 = 15;
			num3 = 4;
			num = 59;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
			num2 = 15;
			num3 = 5;
			num = 62;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
			num2 = 15;
			num3 = 6;
			num = 74;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
			num2 = 15;
			num3 = 7;
			num = 68;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
			num2 = 15;
			num3 = 8;
			num = 72;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
			num2 = 15;
			num3 = 9;
			num = 70;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 0;
			num = 48;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
			num2 = 16;
			num3 = 2;
			num = 55;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
			num2 = 16;
			num3 = 3;
			num = 75;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
			num2 = 16;
			num3 = 4;
			num = 65;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
			num2 = 16;
			num3 = 5;
			num = 68;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 7;
			num = 68;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
			num2 = 21;
			num3 = 0;
			num = 720;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
			num2 = 21;
			num3 = 1;
			num = 680;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
			num2 = 21;
			num3 = 2;
			num = 650;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
			num2 = 21;
			num3 = 3;
			num = 670;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
			num2 = 21;
			num3 = 4;
			num = 700;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
			num2 = 21;
			num3 = 5;
			num = 680;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 6;
			num = 720;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
			num2 = 21;
			num3 = 7;
			num = 740;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 8;
			num = 760;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 21;
			num3 = 9;
			num = 780;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
			num2 = 21;
			num3 = 10;
			num = 750;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
			num2 = 21;
			num3 = 11;
			num = 700;
			break;
	
		default:
			func_344(num6, hParam0, 99, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_392(Hash hParam0) // Position - 0x2B8C2
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
			num2 = 7;
			num3 = 0;
			num = 115;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
			num2 = 7;
			num3 = 1;
			num = 115;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
			num2 = 7;
			num3 = 2;
			num = 128;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
			num2 = 7;
			num3 = 3;
			num = 118;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
			num2 = 7;
			num3 = 4;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
			num2 = 7;
			num3 = 5;
			num = 128;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
			num2 = 7;
			num3 = 6;
			num = 128;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
			num2 = 7;
			num3 = 7;
			num = 125;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 0;
			num = 68;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 1;
			num = 68;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 2;
			num = 68;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 3;
			num = 68;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 4;
			num = 68;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
			num2 = 15;
			num3 = 1;
			num = 550;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
			num2 = 15;
			num3 = 2;
			num = 650;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
			num2 = 15;
			num3 = 3;
			num = 875;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 4;
			num = 820;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 5;
			num = 720;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 6;
			num = 750;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
			num2 = 15;
			num3 = 7;
			num = 850;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
			num2 = 16;
			num3 = 2;
			num = 48;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
			num2 = 16;
			num3 = 3;
			num = 38;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
			num2 = 16;
			num3 = 4;
			num = 38;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
			num2 = 16;
			num3 = 5;
			num = 42;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
			num2 = 16;
			num3 = 7;
			num = 46;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
			num2 = 16;
			num3 = 8;
			num = 46;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
			num2 = 16;
			num3 = 9;
			num = 46;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
			num2 = 16;
			num3 = 10;
			num = 68;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
			num2 = 16;
			num3 = 11;
			num = 58;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
			num2 = 16;
			num3 = 12;
			num = 50;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
			num2 = 16;
			num3 = 13;
			num = 68;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
			num2 = 16;
			num3 = 14;
			num = 68;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
			num2 = 16;
			num3 = 15;
			num = 42;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 250;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 250;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 290;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			num = 270;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			num = 270;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
			num2 = 18;
			num3 = 6;
			num = 15;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
			num2 = 18;
			num3 = 7;
			num = 12;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 118;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 110;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 95;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 95;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 98;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
			num2 = 22;
			num3 = 0;
			num = 140;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 150;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 130;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
			num2 = 27;
			num3 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 0;
			num = 45;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
			num2 = 28;
			num3 = 1;
			num = 48;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
			num2 = 28;
			num3 = 2;
			num = 48;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
			num2 = 28;
			num3 = 3;
			num = 52;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 4;
			num = 52;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
			num2 = 28;
			num3 = 5;
			num = 55;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
			num2 = 28;
			num3 = 6;
			num = 55;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
			num2 = 28;
			num3 = 7;
			num = 55;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
			num2 = 28;
			num3 = 8;
			num = 58;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 9;
			num = 58;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 10;
			num = 60;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 11;
			num = 60;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 12;
			num = 62;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
			num2 = 28;
			num3 = 13;
			num = 62;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 14;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
			num2 = 28;
			num3 = 15;
			num = 65;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 29;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 113, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_393(Hash hParam0) // Position - 0x2C50E
{
	if (hParam0 < 60)
		func_395(hParam0);
	else
		func_394(hParam0);

	if (Global_78341[0 /*14*/].f_2 == -1)
		func_344(3, hParam0, 181, -1);

	return;
}

void func_394(Hash hParam0) // Position - 0x2C543
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 1;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 2;
			flag = true;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 3;
			flag = true;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 4;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 5;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
			num2 = 14;
			num3 = 0;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
			num2 = 14;
			num3 = 1;
			num = 120;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
			num2 = 14;
			num3 = 2;
			num = 120;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
			num2 = 14;
			num3 = 3;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
			num2 = 14;
			num3 = 4;
			num = 120;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
			num2 = 14;
			num3 = 5;
			num = 120;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
			num2 = 16;
			num3 = 1;
			num = 20;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
			num2 = 16;
			num3 = 2;
			num = 24;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
			num2 = 16;
			num3 = 3;
			num = 22;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
			num2 = 16;
			num3 = 4;
			num = 25;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
			num2 = 16;
			num3 = 5;
			num = 25;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
			num2 = 16;
			num3 = 6;
			num = 22;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
			num2 = 16;
			num3 = 7;
			num = 27;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
			num2 = 17;
			num3 = 3;
			num = 48;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
			num2 = 17;
			num3 = 4;
			num = 40;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
			num2 = 17;
			num3 = 5;
			num = 45;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
			num2 = 19;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
			num2 = 19;
			num3 = 1;
			num = 190;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
			num2 = 19;
			num3 = 2;
			num = 190;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
			num2 = 19;
			num3 = 3;
			num = 190;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
			num2 = 19;
			num3 = 4;
			num = 210;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 55;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			num = 99;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 49;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 120;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 45;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 115;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 105;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 90;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 95;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 39;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 95;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 35;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 95;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 21;
			num3 = 1;
			num = 60;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 2;
			num = 70;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 21;
			num3 = 4;
			num = 90;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
			num2 = 21;
			num3 = 6;
			num = 70;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 21;
			num3 = 7;
			num = 95;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 21;
			num3 = 8;
			num = 105;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
			num2 = 21;
			num3 = 9;
			num = 95;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
			num2 = 21;
			num3 = 10;
			num = 110;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 21;
			num3 = 11;
			num = 98;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
			num2 = 21;
			num3 = 12;
			num = 88;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 21;
			num3 = 13;
			num = 98;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 21;
			num3 = 14;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
			num2 = 21;
			num3 = 15;
			num = 98;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 4950;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 4195;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3195;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 2950;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 3950;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
			num2 = 23;
			num3 = 0;
			num = 3200;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
			num2 = 23;
			num3 = 1;
			num = 3200;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
			num2 = 23;
			num3 = 2;
			num = 3200;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 3;
			num = 3200;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 4;
			num = 3200;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 5;
			num = 3200;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
			num2 = 23;
			num3 = 6;
			num = 3200;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 7;
			num = 3200;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
			num2 = 23;
			num3 = 8;
			num = 3200;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 9;
			num = 3200;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
			num2 = 23;
			num3 = 10;
			num = 3200;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
			num2 = 23;
			num3 = 11;
			num = 3200;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
			num2 = 23;
			num3 = 12;
			num = 3200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
			num2 = 23;
			num3 = 13;
			num = 3200;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
			num2 = 23;
			num3 = 14;
			num = 3200;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
			num2 = 23;
			num3 = 15;
			num = 3200;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
			num2 = 24;
			num3 = 0;
			num = 1350;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
			num2 = 24;
			num3 = 1;
			num = 1400;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
			num2 = 24;
			num3 = 2;
			num = 1200;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
			num2 = 24;
			num3 = 3;
			num = 1250;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
			num2 = 24;
			num3 = 4;
			num = 1350;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
			num2 = 24;
			num3 = 5;
			num = 1300;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
			num2 = 24;
			num3 = 6;
			num = 1380;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
			num2 = 24;
			num3 = 7;
			num = 1340;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
			num2 = 24;
			num3 = 8;
			num = 1380;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
			num2 = 24;
			num3 = 9;
			num = 1250;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 840;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 840;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 840;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 840;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 840;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 840;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 840;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 840;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
			num2 = 28;
			num3 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
			num2 = 28;
			num3 = 1;
			num = 130;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
			num2 = 28;
			num3 = 2;
			num = 110;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
			num2 = 29;
			num3 = 0;
			flag = true;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
			num2 = 30;
			num3 = 0;
			num = 290;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
			num2 = 30;
			num3 = 1;
			num = 320;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 0;
			num = 59;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 1;
			num = 55;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
			num2 = 31;
			num3 = 2;
			num = 59;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 3;
			num = 49;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_395(Hash hParam0) // Position - 0x2D2E3
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
			num2 = 0;
			num3 = 2;
			num = 3500;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			num = 20;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			num = 18;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 2;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 3;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			num = 19;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			num = 20;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 6;
			num = 22;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 7;
			num = 18;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
			num2 = 2;
			num3 = 8;
			num = 39;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
			num2 = 2;
			num3 = 9;
			num = 32;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
			num2 = 2;
			num3 = 10;
			num = 35;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 11;
			num = 35;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 12;
			num = 210;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 13;
			num = 250;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 14;
			num = 290;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 15;
			num = 310;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
			num2 = 7;
			num3 = 0;
			num = 150;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
			num2 = 7;
			num3 = 1;
			num = 160;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
			num2 = 7;
			num3 = 2;
			num = 150;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 7;
			num3 = 3;
			num = 150;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
			num2 = 7;
			num3 = 4;
			num = 160;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
			num2 = 7;
			num3 = 5;
			num = 160;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			num = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			num = 55;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 55;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 58;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 62;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 65;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 65;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 68;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 55;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 62;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 58;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 58;
			break;
	
		default:
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_396(Hash hParam0) // Position - 0x2D96F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_344(num6, hParam0, 6, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_397(Hash hParam0) // Position - 0x2DA56
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_78341[0 /*14*/].f_5 = 0;

	switch (hParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_344(num6, hParam0, 7, -1);
			return;
	}

	func_338(&Global_78341[0 /*14*/], num6, hParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_398() // Position - 0x2DB54
{
	Global_78341[0 /*14*/].f_1 = -1;
	Global_78341[0 /*14*/].f_2 = -1;
	Global_78341[0 /*14*/].f_5 = -1;
	Global_78341[0 /*14*/].f_3 = -1;
	Global_78341[0 /*14*/].f_4 = -1;
	Global_78341[0 /*14*/].f_7 = 0;
	Global_78341[0 /*14*/].f_6 = 0;
	Global_78341[0 /*14*/].f_13 = -1;
	Global_78341[0 /*14*/].f_12 = 0;
	Global_78341[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_399(int iParam0, int iParam1, Hash hParam2) // Position - 0x2DBCD
{
	int num;
	Hash hash;
	int i;
	int j;
	Hash k;
	var unk;
	var unk18;
	int l;
	var unk28;

	if (unk_0x66599E73DBA5A850(iParam0))
		return false;

	num = unk_0x504B9BB48D41C264(iParam0);
	Global_78341[1 /*14*/] = { func_335(num, iParam1, hParam2, -1) };

	if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0))
		return false;

	if (iParam1 == 12)
	{
		unk = { func_331(num, hParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99 && i != 12 && i != 14)
			{
				if (!func_399(iParam0, i, unk[i]))
				{
					if (i == 13)
					{
						unk18 = { func_328(num, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							if (!func_399(iParam0, 14, unk18[j]))
							{
								for (k = 0; k <= 19; k = k + 1)
								{
									Global_78341[2 /*14*/] = { func_335(num, 14, k, -1) };
								
									if (Global_78341[2 /*14*/].f_12 == j)
										if (func_399(iParam0, 14, k))
											if (!func_292(num, hParam2, 14, k, &unk, &Global_78341[2 /*14*/]))
												return false;
								}
							}
						}
					}
					else
					{
						hash = func_318(iParam0, i);
						Global_78341[2 /*14*/] = { func_335(num, i, hash, -1) };
					
						if (!func_292(num, hParam2, i, hash, &unk, &Global_78341[2 /*14*/]))
							return false;
					}
				}
			}
		}
	
		return true;
	}
	else if (iParam1 == 13)
	{
		unk28 = { func_328(num, hParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_399(iParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x6BC6C26115124DFE(iParam0, Global_78341[1 /*14*/].f_12, 1) == Global_78341[1 /*14*/].f_3 && unk_0xC5753F88DDA773E0(iParam0, Global_78341[1 /*14*/].f_12) == Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3 == -1)
			return true;
	}
	else if (Global_78341[1 /*14*/].f_3 == unk_0xAC464F61BE9FD50D(iParam0, func_327(iParam1)) && Global_78341[1 /*14*/].f_4 == unk_0xEDEBC30DEBDF84C8(iParam0, func_327(iParam1)))
	{
		return true;
	}

	return false;
}

void func_400() // Position - 0x2DE26
{
	int i;
	int num;
	int num2;
	eCharacter j;
	int num3;

	i = 0;
	num3 = 0;

	for (j = CHAR_MICHAEL; j <= CHAR_TREVOR; j = j + 1)
	{
		if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					j = j + 1;
					num3 = 1;
				}
			}
			else
			{
				j = j + 1;
				num3 = 1;
			}
		}
	
		if (num3 == 0)
		{
			for (i = 0; i <= 43; i = i + 1)
			{
				num = func_122(i);
			
				if (num != 0)
				{
					if (Global_2883694)
					{
						if (!func_402(j, Global_3407872.f_964.f_539.f_298[j /*477*/][i /*5*/]))
						{
							if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
							{
								num2 = unk_0x91BEC56C475EB62C(unk_0xC1A5EC5C986B98AD(), num);
							
								if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
								{
									unk_0xDAEDA058E6EAB035(unk_0xC1A5EC5C986B98AD(), num2, 0, 0);
									unk_0x45F3BA5B1F335A4F(unk_0xC1A5EC5C986B98AD(), num2);
								}
							}
							else if (Global_3407872.f_964.f_539.f_298[j /*477*/][i /*5*/].f_1 > 0)
							{
								Global_3407872.f_964.f_539.f_298[j /*477*/][func_401(num) /*5*/].f_1 = 0;
								Global_3407872.f_964.f_539.f_298[j /*477*/][func_401(num) /*5*/] = 0;
							}
						}
					}
					else if (Global_2883693)
					{
						if (!func_402(j, Global_3932160.f_964.f_539.f_298[j /*477*/][i /*5*/]))
						{
							if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
							{
								num2 = unk_0x91BEC56C475EB62C(unk_0xC1A5EC5C986B98AD(), num);
							
								if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
								{
									unk_0xDAEDA058E6EAB035(unk_0xC1A5EC5C986B98AD(), num2, 0, 0);
									unk_0x45F3BA5B1F335A4F(unk_0xC1A5EC5C986B98AD(), num2);
								}
							}
							else if (Global_3932160.f_964.f_539.f_298[j /*477*/][i /*5*/].f_1 > 0)
							{
								Global_3932160.f_964.f_539.f_298[j /*477*/][func_401(num) /*5*/].f_1 = 0;
								Global_3932160.f_964.f_539.f_298[j /*477*/][func_401(num) /*5*/] = 0;
							}
						}
					}
					else if (!func_402(j, Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/]))
					{
						if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
						{
							num2 = unk_0x91BEC56C475EB62C(unk_0xC1A5EC5C986B98AD(), num);
						
							if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
							{
								unk_0xDAEDA058E6EAB035(unk_0xC1A5EC5C986B98AD(), num2, 0, 0);
								unk_0x45F3BA5B1F335A4F(unk_0xC1A5EC5C986B98AD(), num2);
							}
						}
						else if (Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/].f_1 > 0)
						{
							Global_113648.f_2365.f_539.f_298[j /*477*/][func_401(num) /*5*/].f_1 = 0;
							Global_113648.f_2365.f_539.f_298[j /*477*/][func_401(num) /*5*/] = 0;
						}
					}
				}
			}
		}
	
		num3 = 0;
	}

	return;
}

int func_401(int iParam0) // Position - 0x2E0DA
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case joaat("SLOT_UNARMED"):
			num = 0;
			break;
	
		case joaat("SLOT_KNIFE"):
			num = 1;
			break;
	
		case joaat("SLOT_NIGHTSTICK"):
			num = 2;
			break;
	
		case joaat("SLOT_HAMMER"):
			num = 3;
			break;
	
		case joaat("SLOT_BAT"):
			num = 4;
			break;
	
		case joaat("SLOT_CROWBAR"):
			num = 5;
			break;
	
		case joaat("SLOT_GOLFCLUB"):
			num = 6;
			break;
	
		case joaat("SLOT_STUNGUN"):
			num = 7;
			break;
	
		case joaat("SLOT_PISTOL"):
			num = 8;
			break;
	
		case joaat("SLOT_COMBATPISTOL"):
			num = 9;
			break;
	
		case joaat("SLOT_APPISTOL"):
			num = 10;
			break;
	
		case joaat("SLOT_MICROSMG"):
			num = 11;
			break;
	
		case joaat("SLOT_SMG"):
			num = 12;
			break;
	
		case joaat("SLOT_ASSAULTRIFLE"):
			num = 13;
			break;
	
		case joaat("SLOT_CARBINERIFLE"):
			num = 14;
			break;
	
		case joaat("SLOT_ADVANCEDRIFLE"):
			num = 15;
			break;
	
		case joaat("SLOT_MG"):
			num = 16;
			break;
	
		case joaat("SLOT_COMBATMG"):
			num = 17;
			break;
	
		case joaat("SLOT_PUMPSHOTGUN"):
			num = 18;
			break;
	
		case joaat("SLOT_SAWNOFFSHOTGUN"):
			num = 19;
			break;
	
		case joaat("SLOT_ASSAULTSHOTGUN"):
			num = 20;
			break;
	
		case joaat("SLOT_SNIPERRIFLE"):
			num = 21;
			break;
	
		case joaat("SLOT_HEAVYSNIPER"):
			num = 22;
			break;
	
		case joaat("SLOT_GRENADELAUNCHER"):
			num = 23;
			break;
	
		case joaat("SLOT_RPG"):
			num = 24;
			break;
	
		case joaat("SLOT_MINIGUN"):
			num = 25;
			break;
	
		case joaat("SLOT_GRENADE"):
			num = 26;
			break;
	
		case joaat("SLOT_STICKYBOMB"):
			num = 27;
			break;
	
		case joaat("SLOT_SMOKEGRENADE"):
			num = 28;
			break;
	
		case joaat("SLOT_MOLOTOV"):
			num = 29;
			break;
	
		case joaat("SLOT_FIREEXTINGUISHER"):
			num = 30;
			break;
	
		case joaat("SLOT_PETROLCAN"):
			num = 31;
			break;
	
		case joaat("SLOT_PARACHUTE"):
			num = 33;
			break;
	
		case joaat("SLOT_DIGISCANNER"):
			num = 34;
			break;
	
		case joaat("SLOT_OBJECT"):
			num = 35;
			break;
	
		case joaat("SLOT_ASSAULTSMG"):
			num = 36;
			break;
	
		case joaat("SLOT_BULLPUPSHOTGUN"):
			num = 37;
			break;
	
		case joaat("SLOT_PISTOL50"):
			num = 38;
			break;
	}

	return num;
}

BOOL func_402(eCharacter echParam0, int iParam1) // Position - 0x2E2D4
{
	int num;
	int num2;
	int num3;

	if (func_31(echParam0))
	{
		if (func_408(iParam1))
			return true;
	
		num = func_406(echParam0, iParam1);
		num2 = func_404(iParam1);
		num3 = func_403(num2);
		return IS_BIT_SET(num, num3);
	}

	return false;
}

int func_403(int iParam0) // Position - 0x2E315
{
	return iParam0 % 32;
}

int func_404(int iParam0) // Position - 0x2E322
{
	return func_405(iParam0);
}

int func_405(int iParam0) // Position - 0x2E330
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
	
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		case joaat("WEAPON_APPISTOL"):
			return 3;
	
		case joaat("WEAPON_PISTOL50"):
			return 4;
	
		case joaat("WEAPON_SMG"):
			return 5;
	
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
	
		case joaat("WEAPON_MICROSMG"):
			return 7;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
	
		case joaat("WEAPON_MG"):
			return 12;
	
		case joaat("WEAPON_COMBATMG"):
			return 13;
	
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
	
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
	
		case joaat("WEAPON_GRENADE"):
			return 16;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
	
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
	
		case joaat("WEAPON_RPG"):
			return 27;
	
		case joaat("WEAPON_MINIGUN"):
			return 28;
	
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
	
		case joaat("WEAPON_STUNGUN"):
			return 31;
	
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
	
		case joaat("GADGET_PARACHUTE"):
			return 33;
	
		case joaat("WEAPON_KNIFE"):
			return 34;
	
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
	
		case joaat("WEAPON_HAMMER"):
			return 36;
	
		case joaat("WEAPON_BAT"):
			return 37;
	
		case joaat("WEAPON_CROWBAR"):
			return 38;
	
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
	
		case joaat("WEAPON_MOLOTOV"):
			return 41;
	
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
	
		case joaat("WEAPON_PETROLCAN"):
			return 43;
	
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
	
		case joaat("WEAPON_BOTTLE"):
			return 45;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
	
		case joaat("WEAPON_GUSENBERG"):
			return 50;
	
		case joaat("WEAPON_DAGGER"):
			return 51;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
	
		case joaat("WEAPON_FLAREGUN"):
			return 57;
	
		case joaat("WEAPON_MUSKET"):
			return 53;
	
		case joaat("WEAPON_FIREWORK"):
			return 54;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
	
		case joaat("WEAPON_PROXMINE"):
			return 60;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
	
		case joaat("WEAPON_HATCHET"):
			return 58;
	
		case joaat("WEAPON_RAILGUN"):
			return 59;
	
		case joaat("WEAPON_COMBATPDW"):
			return 64;
	
		case joaat("WEAPON_KNUCKLE"):
			return 62;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
	
		case joaat("WEAPON_MACHETE"):
			return 65;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
	
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
	
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
	
		case joaat("WEAPON_REVOLVER"):
			return 70;
	
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
	
		case joaat("WEAPON_MINISMG"):
			return 73;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
	
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
	
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
	
		case joaat("WEAPON_POOLCUE"):
			return 77;
	
		case joaat("WEAPON_WRENCH"):
			return 78;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
	
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
	
		case joaat("WEAPON_SMG_MK2"):
			return 5;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
	
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
	
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
	
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
	
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
	
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
	
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
	
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
	
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	}

	return 0;
}

int func_406(eCharacter echParam0, int iParam1) // Position - 0x2E93A
{
	var unk;
	int num;
	int num2;

	num = func_404(iParam1);
	num2 = func_407(num);

	switch (num2)
	{
		case 0:
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_UNLOCK_0"), &unk, -1);
					break;
			
				case CHAR_FRANKLIN:
					unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_UNLOCK_0"), &unk, -1);
					break;
			
				case CHAR_TREVOR:
					unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_UNLOCK_0"), &unk, -1);
					break;
			}
			break;
	
		case 1:
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_UNLOCK_1"), &unk, -1);
					break;
			
				case CHAR_FRANKLIN:
					unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_UNLOCK_1"), &unk, -1);
					break;
			
				case CHAR_TREVOR:
					unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_UNLOCK_1"), &unk, -1);
					break;
			}
			break;
	
		case 2:
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					unk_0xDD7756E2742E0F6D(joaat("SP0_WEAP_UNLOCK_2"), &unk, -1);
					break;
			
				case CHAR_FRANKLIN:
					unk_0xDD7756E2742E0F6D(joaat("SP1_WEAP_UNLOCK_2"), &unk, -1);
					break;
			
				case CHAR_TREVOR:
					unk_0xDD7756E2742E0F6D(joaat("SP2_WEAP_UNLOCK_2"), &unk, -1);
					break;
			}
			break;
	
		default:
			break;
	}

	return unk;
}

int func_407(int iParam0) // Position - 0x2EA54
{
	return iParam0 / 32;
}

BOOL func_408(int iParam0) // Position - 0x2EA61
{
	int i;
	var unk;

	switch (iParam0)
	{
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTSMG"):
			return true;
	}

	for (i = 0; i < unk_0xDF411E9128FAD473(); i = i + 1)
	{
		if (unk_0xF65F6F7A093E58A1(i, &unk))
			if (unk.f_1 == iParam0)
				if (!unk_0xEF068EDE5319404F(unk))
					return true;
	}

	return false;
}

void func_409() // Position - 0x2EAC7
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x2B2624627D450B2D(unk_0xC1A5EC5C986B98AD());
		unk_0x17A80687902ACB2C(unk_0xC1A5EC5C986B98AD());
		unk_0x7FAB7FBC516786C6(unk_0xC1A5EC5C986B98AD());
	}

	return;
}

int func_410(eCharacter echParam0, int iParam1) // Position - 0x2EAF3
{
	var unk;

	if (func_485(&Global_107196, echParam0))
	{
		if (func_411(&(Global_107196.f_2890), &unk, 0, 0, 0, iParam1, true, false))
		{
			if (unk_0x7DE17ACDD8BA2642(unk))
			{
				unk_0x38B05AC704C5FCB8(unk, 0f, 0f, 0f);
				unk_0x0E4B6CF706BE8AA4(&unk);
			}
		
			return 1;
		}
	}

	if (func_485(&Global_104212, echParam0))
	{
		Global_104212.f_2890 = { Global_107196.f_2890 };
		Global_104212.f_2890.f_6 = Global_107196.f_2890.f_6;
	
		if (func_411(&(Global_104212.f_2890), &unk, 0, 0, 0, iParam1, true, false))
		{
			if (unk_0x7DE17ACDD8BA2642(unk))
			{
				unk_0x38B05AC704C5FCB8(unk, 0f, 0f, 0f);
				unk_0x0E4B6CF706BE8AA4(&unk);
			}
		
			return 1;
		}
	}

	return 0;
}

BOOL func_411(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2EBA0
{
	int num;
	var unk;
	var unk4;
	var unk7;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	var unk12;
	BOOL flag;

	num = 0;

	if (func_484(uParam0))
	{
		if (iParam2 == 0)
		{
			if (unk_0x6123E78FD4B274FB(uParam0->f_12.f_66))
			{
				if (uParam0->f_9 == 1)
					func_479(&(uParam0->f_12), uParam0->f_11);
			
				return false;
			}
		}
	
		if (iParam4 == 0)
		{
			if (unk_0xAF4434A9F7368F35(uParam0->f_12.f_66))
			{
				if (uParam0->f_9 == 1)
					func_479(&(uParam0->f_12), uParam0->f_11);
			
				return false;
			}
		}
	
		if (iParam5 == 0)
		{
			if (func_478(uParam0->f_12.f_66))
			{
				if (uParam0->f_9 == 1)
					func_479(&(uParam0->f_12), uParam0->f_11);
			
				return false;
			}
		}
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x1C97A6E4D8DA4B2F(uParam0->f_12.f_66, &unk7, &num2);
				num3 = num2 - unk7;
				num4 = num2.f_1 - unk7.f_1;
				num5 = num2.f_2 - unk7.f_2;
				num6 = num3;
			
				if (num4 > num6)
					num6 = num4;
			
				if (num5 > num6)
					num6 = num5;
			
				unk = { *uParam0 };
				unk = { unk - unk7 };
				unk4 = { *uParam0 };
				unk4 = { unk4 + num2 };
			
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					unk12 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				else
					unk12 = unk_0xC1A5EC5C986B98AD();
			
				flag = true;
			
				if (bParam7)
					if (unk_0xAF4434A9F7368F35(uParam0->f_12.f_66) || unk_0x2D92D1084D213DC4(uParam0->f_12.f_66))
						flag = false;
			
				if (flag)
				{
					if (!func_477(*uParam0, unk12))
					{
						if (!func_474(uParam0, unk12))
						{
							if (uParam0->f_9 == 1)
								func_479(&(uParam0->f_12), uParam0->f_11);
						
							return false;
						}
					}
				}
			
				unk_0xF82BC5193AF62796(*uParam0, num6, 1, 0, 0, 0);
				unk_0x2117C3CCFF2D957A(*uParam0, num6, 2);
				func_473(uParam0);
			
				while (!func_472(uParam0))
				{
					SYSTEM::WAIT(0);
				}
			
				*uParam1 = func_412(uParam0, 0f, 0f, 0f, 0f, bParam6);
			
				if (unk_0x7DE17ACDD8BA2642(*uParam1))
				{
					if (unk_0xFBD273FDBCF0C5BD(*uParam1, 0))
					{
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						{
							if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
							{
								if (iParam3 == 1 && uParam0->f_8 == 1)
									num = 1;
								else if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(*uParam1, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1) < 3f || unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), *uParam1))
									num = 1;
							
								if (unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == joaat("startup_positioning"))
									if (unk_0x9DC9E896F189AAA5(*uParam1, 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0))
										num = 0;
									else if (unk_0x9DC9E896F189AAA5(*uParam1, 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, 0, 1, 0))
										num = 0;
									else if (unk_0x9DC9E896F189AAA5(*uParam1, 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, 0, 1, 0))
										num = 0;
							
								if (num == 1)
								{
									if (unk_0xDC116D955A63BDBE(unk_0xC1A5EC5C986B98AD()))
										unk_0x2718E9CC165A99F6(unk_0x280DD27CB1FE0E80(unk_0xC1A5EC5C986B98AD()), 0);
									else
										unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
								
									unk_0xDDE449983CE7572E(unk_0xC1A5EC5C986B98AD(), 1, 0);
									unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), *uParam1, -1);
								
									if (unk_0x2D92D1084D213DC4(uParam0->f_12.f_66))
										unk_0xD1AD77A7D621DF91(*uParam1);
								}
							}
						}
					}
				}
			
				return true;
			}
		}
	}

	return false;
}

int func_412(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x2EF00
{
	int num;
	Vector3 vector;
	BOOL flag;
	var unk3;
	int num2;

	if (func_484(uParam0))
	{
		if (func_127(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
	
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x9E76D45F14E2C578(fParam1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				fParam1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
	
		if (func_472(uParam0))
		{
			unk_0xF82BC5193AF62796(fParam1, 5f, 1, 0, 0, 0);
			func_471(fParam1, 5f, 0);
			num = unk_0xABEEDBEF2BBDF5B3(uParam0->f_12.f_66, fParam1, fParam4, 1, 1, 0);
		
			if (unk_0x7DE17ACDD8BA2642(num))
			{
				vector = { unk_0x30BE8A934C020461(num, 1) };
			
				if (SYSTEM::VDIST2(vector, -1151.15f, -1530.32f, 7.48925f) <= 3f)
					unk_0x2EDDA32F6EF3C8B7(num, fParam1, 0, 0, 1);
			
				func_443(num, &(uParam0->f_12), false, true);
				flag = true;
			
				if (unk_0x6123E78FD4B274FB(uParam0->f_12.f_66) || unk_0xA35091121A56CAD4(uParam0->f_12.f_66))
					if (!unk_0x8EE65DF2AE3D52BB(fParam1, fParam1.f_1, fParam1.f_2 + 30f, fParam1, fParam1.f_1, fParam1.f_2 - 30f, &unk3))
						flag = false;
			
				if (flag)
					unk_0xCB8DD5B44DBC2DEB(num, 1084227584);
			
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
						if (unk_0xF66D3BDEBE2E64B9(unk_0x504B9BB48D41C264(num)))
							func_442(uParam0->f_11, 1);
						else if (unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(num)))
							func_442(uParam0->f_11, 2);
				
					unk_0x306867EE104AD281(num, 0);
					unk_0x585BBFEF681F565C(num, 0);
					unk_0x5BC68FEFF4902C2B(num, 1);
					func_441(num, uParam0->f_11);
				}
				else if (!func_438(num, uParam0->f_3, uParam0->f_8) && uParam0->f_10 && unk_0x4310A0DB886F9FED(unk_0x688846D56810779A(), "startup_positioning"))
				{
					num2 = func_437(num);
				
					if (num2 == -1)
						uParam0->f_10 = 0;
					else
						func_432(num2);
				}
			
				if (Global_100681 != 13 && Global_100681 != 10 && Global_100681 != 11 && Global_100681 != 12)
				{
					if (unk_0x14580F20CBCE4FA9(&(Global_100681.f_3)) == Global_78336)
					{
						if (uParam0->f_12.f_66 == Global_113648.f_32751.f_69[21 /*78*/].f_66)
						{
							func_429(24, false);
							func_432(24);
						}
					}
				}
			
				if (uParam0->f_9 == 1)
					func_413(num, uParam0->f_11);
			
				unk_0xE0A291F406691F03(uParam0->f_12.f_66);
				vector = { unk_0x30BE8A934C020461(num, 1) };
			}
		
			return num;
		}
	}

	return num;
}

void func_413(int iParam0, eCharacter echParam1) // Position - 0x2F1B2
{
	var unk;
	int i;
	int j;

	if (!func_414(iParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		unk = unk_0xA66E176E5772E965(iParam0, -1, 0);
	
		if (!unk_0x7DE17ACDD8BA2642(unk))
			unk = unk_0x5E774735770A30F3(iParam0, -1);
	
		if (unk_0x7DE17ACDD8BA2642(unk) && !unk_0x66599E73DBA5A850(unk))
			if (unk_0x504B9BB48D41C264(unk) == joaat("Player_Zero"))
				echParam1 = CHAR_MICHAEL;
			else if (unk_0x504B9BB48D41C264(unk) == joaat("Player_One"))
				echParam1 = CHAR_FRANKLIN;
			else if (unk_0x504B9BB48D41C264(unk) == joaat("Player_Two"))
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = Global_113648.f_2365.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (unk_0x504B9BB48D41C264(iParam0) == Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!unk_0x2AC37494BBF1DB16(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (unk_0x4310A0DB886F9FED(unk_0xC51D12209D0B7FCF(iParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0x504B9BB48D41C264(iParam0) == Global_113648.f_32751.f_5600[i /*78*/].f_66)
			if (!unk_0x2AC37494BBF1DB16(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
				if (unk_0x4310A0DB886F9FED(unk_0xC51D12209D0B7FCF(iParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
					Global_113648.f_32751.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113648.f_32751.f_5590 = echParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_101(iParam0, &(Global_113648.f_32751.f_5510));
	return;
}

BOOL func_414(int iParam0) // Position - 0x2F3B4
{
	if (!unk_0x7DE17ACDD8BA2642(iParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0) || func_107(iParam0, CHAR_MICHAEL, false) || func_107(iParam0, CHAR_FRANKLIN, false) || func_107(iParam0, CHAR_TREVOR, false) || func_97(iParam0) != _CHAR_NULL || func_428(iParam0) || func_427(iParam0) || func_426(iParam0) || func_425(iParam0) || !func_415(unk_0x504B9BB48D41C264(iParam0)))
	{
		func_427(iParam0);
		func_427(iParam0);
		func_107(iParam0, CHAR_MICHAEL, false);
		func_107(iParam0, CHAR_FRANKLIN, false);
		func_107(iParam0, CHAR_TREVOR, false);
		func_97(iParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_415(Hash hParam0) // Position - 0x2F491
{
	if (hParam0 == 0)
		return false;

	if (!func_416(hParam0, false, -1))
		return false;

	if (unk_0x6123E78FD4B274FB(hParam0) || unk_0xAF4434A9F7368F35(hParam0) || unk_0x2D92D1084D213DC4(hParam0) || unk_0xF71BABB2940158F7(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_416(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2F643
{
	int i;
	var unk;

	if (hParam0 == 0)
		return 0;

	if (!unk_0x7E7D26DE9951D7A2(hParam0))
		return 0;

	if (hParam0 == joaat("dominator2") && !unk_0xA26A9A07F761D8F8() || hParam0 == joaat("buffalo3") && !unk_0xA26A9A07F761D8F8() || hParam0 == joaat("gauntlet2") && !unk_0xA26A9A07F761D8F8() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !unk_0xA26A9A07F761D8F8())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return 0;
	}
	else
	{
		for (i = 0; i < unk_0x646D134FE56B32E6(); i = i + 1)
		{
			if (unk_0xEFB5BC3053DCCCD1(i, &unk))
				if (hParam0 == unk.f_1)
					if (unk_0xEF068EDE5319404F(unk))
						return 0;
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_423() && !func_422() && !func_421() && !func_420() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return 0;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (func_168() || unk_0xCC17806DB0C41C19() || func_167())
		{
		}
		else if (!func_421())
		{
			return 0;
		}
	}

	if (bParam1)
		if (!func_419(hParam0, iParam2))
			return 0;

	if (!func_417(hParam0))
		return 0;

	return 1;
}

BOOL func_417(Hash hParam0) // Position - 0x2F7C5
{
	int num;
	var unk;
	var unk2;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	unk_0x7F2A1F8820F0DBE8(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0x0E4605546F88E7A3(&unk2))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x2F891
{
	if (unk_0xCC17806DB0C41C19())
		return unk_0xF6919DB2626A28C5();

	return false;
}

BOOL func_419(Hash hParam0, int iParam1) // Position - 0x2F8A8
{
	BOOL num;
	var unk;

	if (!Global_2764242 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2764241)
		return true;

	num = 1;
	unk = unk_0xD48CE560FB238316();

	if (hParam0 == joaat("btype3"))
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && unk < Global_262145.f_13398)
			num = 0;

	if (hParam0 == joaat("faction3"))
		if (!Global_262145.f_14737 && unk < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == joaat("virgo3") || hParam0 == joaat("virgo2"))
		if (!Global_262145.f_14733 && unk < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14734 && unk < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == joaat("tornado5"))
		if (!Global_262145.f_14735 && unk < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == joaat("minivan2"))
		if (!Global_262145.f_14736 && unk < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14738 && unk < Global_262145.f_14750)
			num = 0;

	if (hParam0 == joaat("prototipo"))
		if (!Global_262145.f_14739 && unk < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!Global_262145.f_14740 && unk < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == joaat("pfister811"))
		if (!Global_262145.f_14741 && unk < Global_262145.f_14744)
			num = 0;

	if (hParam0 == joaat("bf400"))
		if (!Global_262145.f_17313 && unk < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == joaat("brioso"))
		if (!Global_262145.f_17308 && unk < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17312 && unk < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == joaat("contender"))
		if (!Global_262145.f_17311 && unk < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == joaat("le7b"))
		if (!Global_262145.f_17305 && unk < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == joaat("omnis"))
		if (!Global_262145.f_17306 && unk < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17309 && unk < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17310 && unk < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == joaat("tropos"))
		if (!Global_262145.f_17307 && unk < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17315 && unk < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17316 && unk < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == joaat("tampa2"))
		if (!Global_262145.f_17304 && unk < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == joaat("tyrus"))
		if (!Global_262145.f_17303 && unk < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!Global_262145.f_17302 && unk < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == joaat("lynx"))
		if (!Global_262145.f_17314 && unk < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == joaat("stalion2"))
		if (!Global_262145.f_17317 && unk < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17318 && unk < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == joaat("dominator2"))
		if (!Global_262145.f_17319 && unk < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17320 && unk < Global_262145.f_17285)
			num = 0;

	if (hParam0 == joaat("defiler"))
		if (!Global_262145.f_17474 && unk < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == joaat("nightblade"))
		if (!Global_262145.f_17475 && unk < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == joaat("zombiea"))
		if (!Global_262145.f_17476 && unk < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == joaat("esskey"))
		if (!Global_262145.f_17477 && unk < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == joaat("avarus"))
		if (!Global_262145.f_17478 && unk < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == joaat("zombieb"))
		if (!Global_262145.f_17479 && unk < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17481 && unk < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == joaat("vortex"))
		if (!Global_262145.f_17482 && unk < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == joaat("shotaro"))
		if (!Global_262145.f_17483 && unk < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == joaat("chimera"))
		if (!Global_262145.f_17484 && unk < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == joaat("raptor"))
		if (!Global_262145.f_17485 && unk < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == joaat("daemon2"))
		if (!Global_262145.f_17486 && unk < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == joaat("blazer4"))
		if (!Global_262145.f_17487 && unk < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == joaat("tornado6"))
		if (!Global_262145.f_17493 && unk < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == joaat("youga2"))
		if (!Global_262145.f_17490 && unk < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17491 && unk < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == joaat("faggio3"))
		if (!Global_262145.f_17492 && unk < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == joaat("faggio"))
		if (!Global_262145.f_17480 && unk < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == joaat("bagger"))
		if (!Global_262145.f_17494 && unk < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == joaat("sanctus"))
		if (!Global_262145.f_17488 && unk < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == joaat("manchez"))
		if (!Global_262145.f_17489 && unk < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == joaat("ratbike"))
		if (!Global_262145.f_17495 && unk < Global_262145.f_17517)
			num = 0;

	if (hParam0 == joaat("voltic2"))
		if (!Global_262145.f_19131 && unk < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19132 && unk < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == joaat("dune4"))
		if (!Global_262145.f_19133 && unk < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == joaat("dune5"))
		if (!Global_262145.f_19134 && unk < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == joaat("phantom2"))
		if (!Global_262145.f_19135 && unk < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == joaat("technical2"))
		if (!Global_262145.f_19136 && unk < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == joaat("boxville5"))
		if (!Global_262145.f_19137 && unk < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == joaat("wastelander"))
		if (!Global_262145.f_19138 && unk < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == joaat("blazer5"))
		if (!Global_262145.f_19139 && unk < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == joaat("comet2"))
		if (!Global_262145.f_19140 && unk < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == joaat("comet3"))
		if (!Global_262145.f_19141 && unk < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == joaat("diablous"))
		if (!Global_262145.f_19142 && unk < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == joaat("diablous2"))
		if (!Global_262145.f_19143 && unk < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == joaat("elegy"))
		if (!Global_262145.f_19144 && unk < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == joaat("elegy2"))
		if (!Global_262145.f_19145 && unk < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == joaat("fcr"))
		if (!Global_262145.f_19146 && unk < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == joaat("fcr2"))
		if (!Global_262145.f_19147 && unk < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == joaat("italigtb"))
		if (!Global_262145.f_19148 && unk < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19149 && unk < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == joaat("nero"))
		if (!Global_262145.f_19150 && unk < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == joaat("nero2"))
		if (!Global_262145.f_19151 && unk < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == joaat("penetrator"))
		if (!Global_262145.f_19152 && unk < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == joaat("specter"))
		if (!Global_262145.f_19153 && unk < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == joaat("specter2"))
		if (!Global_262145.f_19154 && unk < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == joaat("tempesta"))
		if (!Global_262145.f_19155 && unk < Global_262145.f_19252)
			num = 0;

	if (hParam0 == joaat("gp1"))
		if (!Global_262145.f_20212 && unk < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == joaat("infernus2"))
		if (!Global_262145.f_20213 && unk < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == joaat("ruston"))
		if (!Global_262145.f_20214 && unk < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == joaat("turismo2"))
		if (!Global_262145.f_20215 && unk < Global_262145.f_20211)
			num = 0;

	if (hParam0 == joaat("xa21"))
		if (!Global_262145.f_21094 && unk < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21095 && unk < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == joaat("torero"))
		if (!Global_262145.f_21096 && unk < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == joaat("vagner"))
		if (!Global_262145.f_21097 && unk < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == joaat("ardent"))
		if (!Global_262145.f_21098 && unk < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == joaat("nightshark"))
		if (!Global_262145.f_21099 && unk < Global_262145.f_21107)
			num = 0;

	if (hParam0 == joaat("microlight"))
		if (!Global_262145.f_21893 && unk < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == joaat("mogul"))
		if (!Global_262145.f_21905 && unk < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == joaat("rogue"))
		if (!Global_262145.f_21896 && unk < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == joaat("starling"))
		if (!Global_262145.f_21906 && unk < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == joaat("seabreeze"))
		if (!Global_262145.f_21894 && unk < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == joaat("tula"))
		if (!Global_262145.f_21910 && unk < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == joaat("pyro"))
		if (!Global_262145.f_21908 && unk < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == joaat("molotok"))
		if (!Global_262145.f_21909 && unk < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == joaat("nokota"))
		if (!Global_262145.f_21904 && unk < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == joaat("bombushka"))
		if (!Global_262145.f_21911 && unk < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == joaat("hunter"))
		if (!Global_262145.f_21907 && unk < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == joaat("havok"))
		if (!Global_262145.f_21903 && unk < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == joaat("howard"))
		if (!Global_262145.f_21895 && unk < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == joaat("alphaz1"))
		if (!Global_262145.f_21897 && unk < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == joaat("cyclone"))
		if (!Global_262145.f_21898 && unk < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == joaat("visione"))
		if (!Global_262145.f_21899 && unk < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == joaat("vigilante"))
		if (!Global_262145.f_21900 && unk < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == joaat("retinue"))
		if (!Global_262145.f_21901 && unk < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_21902 && unk < Global_262145.f_21922)
			num = 0;

	if (hParam0 == joaat("deluxo"))
		if (!Global_262145.f_22861 && unk < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == joaat("stromberg"))
		if (!Global_262145.f_22862 && unk < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == joaat("riot2"))
		if (!Global_262145.f_22863 && unk < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == joaat("chernobog"))
		if (!Global_262145.f_22864 && unk < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == joaat("khanjali"))
		if (!Global_262145.f_22865 && unk < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == joaat("akula"))
		if (!Global_262145.f_22866 && unk < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == joaat("thruster"))
		if (!Global_262145.f_22867 && unk < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == joaat("barrage"))
		if (!Global_262145.f_22868 && unk < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == joaat("volatol"))
		if (!Global_262145.f_22869 && unk < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == joaat("comet4"))
		if (!Global_262145.f_22870 && unk < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == joaat("neon"))
		if (!Global_262145.f_22871 && unk < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == joaat("streiter"))
		if (!Global_262145.f_22872 && unk < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == joaat("sentinel3"))
		if (!Global_262145.f_22873 && unk < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == joaat("yosemite"))
		if (!Global_262145.f_22874 && unk < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == joaat("sc1"))
		if (!Global_262145.f_22875 && unk < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == joaat("autarch"))
		if (!Global_262145.f_22876 && unk < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == joaat("gt500"))
		if (!Global_262145.f_22877 && unk < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == joaat("hustler"))
		if (!Global_262145.f_22878 && unk < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == joaat("revolter"))
		if (!Global_262145.f_22879 && unk < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == joaat("pariah"))
		if (!Global_262145.f_22880 && unk < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == joaat("raiden"))
		if (!Global_262145.f_22881 && unk < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == joaat("savestra"))
		if (!Global_262145.f_22882 && unk < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == joaat("riata"))
		if (!Global_262145.f_22883 && unk < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == joaat("hermes"))
		if (!Global_262145.f_22884 && unk < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == joaat("comet5"))
		if (!Global_262145.f_22885 && unk < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == joaat("z190"))
		if (!Global_262145.f_22886 && unk < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == joaat("viseris"))
		if (!Global_262145.f_22887 && unk < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == joaat("kamacho"))
		if (!Global_262145.f_22888 && unk < Global_262145.f_22916)
			num = 0;

	if (hParam0 == joaat("gb200"))
		if (!Global_262145.f_24081 && unk < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24082 && unk < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == joaat("ellie"))
		if (!Global_262145.f_24086 && unk < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == joaat("issi3"))
		if (!Global_262145.f_24089 && unk < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == joaat("michelli"))
		if (!Global_262145.f_24094 && unk < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == joaat("flashgt"))
		if (!Global_262145.f_24088 && unk < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == joaat("hotring"))
		if (!Global_262145.f_24080 && unk < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == joaat("tezeract"))
		if (!Global_262145.f_24087 && unk < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == joaat("tyrant"))
		if (!Global_262145.f_24093 && unk < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == joaat("dominator3"))
		if (!Global_262145.f_24092 && unk < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == joaat("taipan"))
		if (!Global_262145.f_24083 && unk < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == joaat("entity2"))
		if (!Global_262145.f_24085 && unk < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == joaat("jester3"))
		if (!Global_262145.f_24095 && unk < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == joaat("cheburek"))
		if (!Global_262145.f_24091 && unk < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == joaat("caracara"))
		if (!Global_262145.f_24084 && unk < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24090 && unk < Global_262145.f_24106)
			num = 0;

	if (hParam0 == joaat("terbyte"))
		if (!Global_262145.f_24171 && unk < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == joaat("pbus2"))
		if (!Global_262145.f_24172 && unk < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == joaat("mule4"))
		if (!Global_262145.f_24177 && unk < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == joaat("pounder2"))
		if (!Global_262145.f_24176 && unk < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == joaat("swinger"))
		if (!Global_262145.f_24174 && unk < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == joaat("menacer"))
		if (!Global_262145.f_24180 && unk < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == joaat("scramjet"))
		if (!Global_262145.f_24182 && unk < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24183 && unk < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24181 && unk < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == joaat("patriot2"))
		if (!Global_262145.f_24173 && unk < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == joaat("stafford"))
		if (!Global_262145.f_24175 && unk < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24179 && unk < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == joaat("blimp3"))
		if (!Global_262145.f_24178 && unk < Global_262145.f_24165)
			num = 0;

	if (hParam0 == joaat("monster3"))
	{
	}
	else if (hParam0 == joaat("cerberus"))
	{
	}
	else if (hParam0 == joaat("cerberus2"))
	{
	}
	else if (hParam0 == joaat("cerberus3"))
	{
	}
	else if (hParam0 == joaat("brutus"))
	{
	}
	else if (hParam0 == joaat("brutus2"))
	{
	}
	else if (hParam0 == joaat("brutus3"))
	{
	}
	else if (hParam0 == joaat("scarab"))
	{
	}
	else if (hParam0 == joaat("scarab2"))
	{
	}
	else if (hParam0 == joaat("scarab3"))
	{
	}
	else if (hParam0 == joaat("imperator"))
	{
	}
	else if (hParam0 == joaat("imperator2"))
	{
	}
	else if (hParam0 == joaat("imperator3"))
	{
	}
	else if (hParam0 == joaat("zr380"))
	{
	}
	else if (hParam0 == joaat("zr3802"))
	{
	}
	else if (hParam0 == joaat("zr3803"))
	{
	}
	else if (hParam0 == joaat("impaler"))
	{
	}
	else if (hParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && unk < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && unk < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && unk < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && unk < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && unk < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && unk < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && unk < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && unk < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && unk < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && unk < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && unk < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && unk < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && unk < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && unk < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && unk < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && unk < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && unk < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && unk < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && unk < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && unk < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && unk < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && unk < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && unk < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && unk < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && unk < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && unk < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && unk < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && unk < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && unk < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && unk < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && unk < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && unk < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && unk < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && unk < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && unk < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && unk < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && unk < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && unk < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && unk < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && unk < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && unk < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && unk < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && unk < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && unk < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && unk < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && unk < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && unk < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && unk < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && unk < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && unk < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && unk < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28656 && unk < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28659 && unk < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && unk < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && unk < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && unk < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && unk < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && unk < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && unk < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && unk < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && unk < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && unk < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && unk < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && unk < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && unk < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && unk < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && unk < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && unk < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && unk < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && unk < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && unk < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && unk < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && unk < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && unk < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && unk < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && unk < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && unk < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && unk < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && unk < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && unk < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && unk < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && unk < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && unk < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && unk < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && unk < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && unk < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && unk < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && unk < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && unk < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && unk < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && unk < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && unk < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && unk < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && unk < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && unk < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && unk < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && unk < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && unk < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && unk < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && unk < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && unk < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && unk < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && unk < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && unk < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && unk < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && unk < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && unk < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && unk < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && unk < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && unk < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && unk < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && unk < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && unk < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && unk < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && unk < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && unk < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && unk < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && unk < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && unk < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && unk < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33131 && unk < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33125 && unk < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33129 && unk < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33123 && unk < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33134 && unk < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33126 && unk < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33135 && unk < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33137 && unk < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33128 && unk < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33136 && unk < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33139 && unk < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33124 && unk < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33132 && unk < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33138 && unk < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33130 && unk < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33140 && unk < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33127 && unk < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33122 && unk < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_33962 && unk < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_33962 && unk < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_33971 && unk < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_33965 && unk < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_33959 && unk < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_33960 && unk < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_33957 && unk < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_33968 && unk < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_33972 && unk < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_33969 && unk < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_33958 && unk < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_33961 && unk < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_33970 && unk < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_33966 && unk < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_33967 && unk < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_33964 && unk < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_33963 && unk < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_420() // Position - 0x32EDA
{
	return false;
}

BOOL func_421() // Position - 0x32EE3
{
	return true;
}

BOOL func_422() // Position - 0x32EEC
{
	return true;
}

BOOL func_423() // Position - 0x32EF5
{
	if (unk_0x7681F180D7938DA8(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x32F0E
{
	var unk;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0xECDAB41968FF21A8(&unk, 2);
				unk_0xECDAB41968FF21A8(&unk, 4);
				unk_0xECDAB41968FF21A8(&unk, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x7D33DF1E1089E1D1())
				{
					unk = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&unk, 0);
					unk_0x705949B096008718(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
		if (IS_BIT_SET(unk_0x516080EA609481E1(866), 0))
			return true;

	return false;
}

BOOL func_425(int iParam0) // Position - 0x32FC6
{
	Hash hash;
	var unk;

	hash = unk_0x504B9BB48D41C264(iParam0);
	unk = unk_0xC51D12209D0B7FCF(iParam0);

	if (hash == joaat("speedo") && unk_0x4310A0DB886F9FED(unk, "LAMAR G "))
		return true;

	if (!func_416(hash, false, -1))
		return true;

	return false;
}

BOOL func_426(int iParam0) // Position - 0x3300D
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98042[i]))
			if (Global_98042[i] == iParam0)
				return true;
	}

	return false;
}

BOOL func_427(int iParam0) // Position - 0x33048
{
	int i;

	if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (unk_0x7DE17ACDD8BA2642(Global_98012[i]) && unk_0xFBD273FDBCF0C5BD(Global_98012[i], 0))
				if (Global_98012[i] == iParam0 && unk_0x504B9BB48D41C264(Global_98012[i]) == unk_0x504B9BB48D41C264(iParam0))
					return true;
		}
	}

	return false;
}

BOOL func_428(int iParam0) // Position - 0x330C4
{
	int i;

	if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[24]))
		if (iParam0 == Global_77348.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (iParam0 == Global_77348.f_484[i])
					return true;
	}

	return false;
}

void func_429(int iParam0, BOOL bParam1) // Position - 0x331AC
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_431(iParam0, 0))
		{
			func_430(iParam0, 1, false);
			func_430(iParam0, 2, false);
			func_430(iParam0, 3, false);
			func_430(iParam0, 4, false);
			func_430(iParam0, 0, true);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_430(iParam0, 0, false);
	}

	return;
}

void func_430(int iParam0, int iParam1, BOOL bParam2) // Position - 0x33209
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		unk_0xECDAB41968FF21A8(&Global_113648.f_32751[iParam0], iParam1);
	else
		unk_0x061B1200C95204CB(&Global_113648.f_32751[iParam0], iParam1);

	return;
}

BOOL func_431(int iParam0, int iParam1) // Position - 0x33244
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

void func_432(int iParam0) // Position - 0x33264
{
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (func_436(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_139[iParam0]))
		{
			flag = true;
		
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				if (unk_0xFBD273FDBCF0C5BD(Global_77348.f_139[iParam0], 0))
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Global_77348.f_139[iParam0], 0))
						flag = false;
		
			if (flag)
			{
				unk_0x85BAE84748AD1A23(Global_77348.f_139[iParam0], 1, 1);
				unk_0x2728CF7242F08BD5(&Global_77348.f_139[iParam0]);
			}
		}
	
		Global_77348[iParam0] = 1;
	
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			if (iParam0 == 24 && func_431(iParam0, 0) && Global_78257.f_66 == 0 && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] != 0 && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3 && !func_434(0, Global_77348.f_555[0 /*21*/].f_12) || !func_434(1, Global_77348.f_555[0 /*21*/].f_12))
			{
				func_433(&Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/], &Global_78257);
				Global_78335 = Global_113648.f_32751.f_5591;
			}
		
			func_429(iParam0, false);
		}
	}

	return;
}

void func_433(var uParam0, var uParam1) // Position - 0x333D3
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

BOOL func_434(int iParam0, eCharacter echParam1) // Position - 0x3349F
{
	int num;

	switch (echParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (iParam0 < 0 || iParam0 >= func_435(&Global_113648.f_32751.f_5038[num /*157*/]))
		return false;

	return func_416(Global_113648.f_32751.f_5038[num /*157*/][iParam0 /*78*/].f_66, false, -1);
}

int func_435(var uParam0) // Position - 0x33512
{
	return *uParam0;
}

BOOL func_436(var uParam0, int iParam1) // Position - 0x3351D
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_99(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_99(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_99(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_99(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 19);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_99(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_99(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 19);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_99(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_99(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_99(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 11);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 11);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 9);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 9);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 1);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 1);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 0);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_127(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_127(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_127(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

int func_437(int iParam0) // Position - 0x34C0C
{
	int i;
	var unk;
	var unk2;
	var unk3;
	var unk4;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[i]) && !unk_0x055111B11E6624FD(Global_77348.f_484[i], 0) && unk_0xFBD273FDBCF0C5BD(Global_77348.f_484[i], 0))
		{
			unk_0xD761D19F6F097C53(iParam0, &unk, &unk2);
			unk_0xD761D19F6F097C53(Global_77348.f_484[i], &unk3, &unk4);
		
			if (unk_0x504B9BB48D41C264(iParam0) == unk_0x504B9BB48D41C264(Global_77348.f_484[i]) && unk_0xCCAF06B65CCC0B97(iParam0) == unk_0xCCAF06B65CCC0B97(Global_77348.f_484[i]) && unk == unk2 && unk3 == unk4)
				return i;
		}
	}

	return -1;
}

BOOL func_438(int iParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x34CCF
{
	int num;
	var unk;
	int num2;
	int i;

	num = unk_0x504B9BB48D41C264(iParam0);
	unk = 3;

	switch (num)
	{
		case joaat("cargobob"):
			if (func_440(iParam0, Global_77348.f_139[38], false))
			{
				func_432(38);
				return true;
			}
			break;
	
		case joaat("firetruk"):
			if (func_440(iParam0, Global_77348.f_139[43], true))
			{
				func_432(43);
				return true;
			}
			break;
	
		case joaat("cuban800"):
			num2 = unk_0xDB51CBA05A86326D(unk_0xC1A5EC5C986B98AD(), &unk);
		
			for (i = 0; i <= num2 - 1; i = i + 1)
			{
				if (func_440(iParam0, unk[i], true) && func_439(unk_0x30BE8A934C020461(unk[i], 1), 2136.133f, 4780.5635f, 39.9702f, 5f, false))
				{
					if (!bParam4 || func_127(uParam1, 0f, 0f, 0f, false) || unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam0, 1), unk_0x30BE8A934C020461(unk[i], 1), 1) < 10f)
					{
						unk_0x2728CF7242F08BD5(&iParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			break;
	
		case joaat("luxor2"):
			if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[14]) && unk_0xFBD273FDBCF0C5BD(iParam0, 0) && unk_0xFBD273FDBCF0C5BD(Global_77348.f_484[14], 0))
			{
				if (unk_0x504B9BB48D41C264(Global_77348.f_484[14]) == joaat("luxor2") && unk_0xCCAF06B65CCC0B97(iParam0) == unk_0xCCAF06B65CCC0B97(Global_77348.f_484[14]))
				{
					func_432(14);
					return true;
				}
			}
			break;
	
		case joaat("swift2"):
			if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[20]) && unk_0xFBD273FDBCF0C5BD(iParam0, 0) && unk_0xFBD273FDBCF0C5BD(Global_77348.f_484[20], 0))
			{
				if (unk_0x504B9BB48D41C264(Global_77348.f_484[20]) == joaat("swift2") && unk_0xCCAF06B65CCC0B97(iParam0) == unk_0xCCAF06B65CCC0B97(Global_77348.f_484[20]))
				{
					func_432(20);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_439(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x34ED7
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (unk_0x2655A8EC638E4FD1(fParam0 - fParam3) <= iParam6)
			if (unk_0x2655A8EC638E4FD1(fParam0.f_1 - fParam3.f_1) <= iParam6)
				if (unk_0x2655A8EC638E4FD1(fParam0.f_2 - fParam3.f_2) <= iParam6)
					return true;
	else if (unk_0x2655A8EC638E4FD1(fParam0 - fParam3) <= iParam6)
		if (unk_0x2655A8EC638E4FD1(fParam0.f_1 - fParam3.f_1) <= iParam6)
			return true;

	return false;
}

BOOL func_440(int iParam0, int iParam1, BOOL bParam2) // Position - 0x34F52
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (unk_0x7DE17ACDD8BA2642(iParam1) && !unk_0x055111B11E6624FD(iParam1, 0) && unk_0xFBD273FDBCF0C5BD(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xD761D19F6F097C53(iParam0, &unk, &unk2);
			unk_0xD761D19F6F097C53(iParam1, &unk3, &unk4);
		
			if (unk == unk3 && unk2 == unk4)
				return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_441(int iParam0, eCharacter echParam1) // Position - 0x34FB3
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!unk_0x7DE17ACDD8BA2642(Global_98012[i]))
		{
			Global_98012[i] = iParam0;
			Global_98022[i] = echParam1;
			Global_98032[i] = unk_0x504B9BB48D41C264(iParam0);
		
			if (unk_0xF66D3BDEBE2E64B9(Global_98032[i]))
				Global_98060[echParam1 /*3*/][0] = -1;
			else
				Global_98060[echParam1 /*3*/][1] = -1;
		
			i = 9;
		}
	
		i == 8;
	}

	return;
}

void func_442(eCharacter echParam0, int iParam1) // Position - 0x35035
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[i]))
		{
			if (echParam0 == 145 || Global_98022[i] == echParam0)
			{
				if (iParam1 == 0 || unk_0x504B9BB48D41C264(Global_98012[i]) == func_99(echParam0, iParam1))
				{
					if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Global_98012[i], 0))
					{
						unk_0x85BAE84748AD1A23(Global_98012[i], 0, 1);
						unk_0x2728CF7242F08BD5(&Global_98012[i]);
						Global_98022[i] = _CHAR_NULL;
					}
				}
			}
		}
	}

	return;
}

void func_443(int iParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x350D3
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		uParam1->f_66 != 0;
	
		if (!func_463(iParam0))
		{
			if (unk_0x14580F20CBCE4FA9(&(uParam1->f_1)) != 0)
				unk_0x33A7FF7A4EECCA59(iParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < unk_0x41279370E7C6EDD7())
				unk_0x9D66740241AFDC4C(iParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_102(num + 1)))
			{
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_102(num2 + 1)))
			{
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_102(i)))
				{
				}
				else
				{
					unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_102(j)))
				{
				}
				else
				{
					unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_102(k)))
					{
					}
					else
					{
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_102(l)))
				{
				}
				else
				{
					unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_102(4)))
			{
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0xCA36A30E79A35222(iParam0, 10) != 0)
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_102(m)))
				{
				}
				else
				{
					unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_102(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x68EE0947EACE7DC1(iParam0, 0);
		
			if (unk_0xCA36A30E79A35222(iParam0, 5) != -1)
				unk_0x68EE0947EACE7DC1(iParam0, 1);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			unk_0x4A32E3F7F82CDDCF(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			unk_0x260D9EC621DDB4AD(iParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			unk_0xA08F91229804964A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			unk_0x7F759D44DA707625(iParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_461(uParam1->f_5) || func_461(uParam1->f_6))
			{
			}
			else
			{
				unk_0xDED5B7E9594C5D3B(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		unk_0xDC951F1A74E9384D(iParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_460(iParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_459())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		unk_0xF6C96B6BB815B76F(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_104(uParam1->f_66))
		{
			unk_0x7DF55922C2CB51EC(iParam0, 0);
		}
		else
		{
			unk_0x7DF55922C2CB51EC(iParam0, 0);
			unk_0x7DF55922C2CB51EC(iParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			unk_0x10A3F931EEFE03E8(iParam0, 0);
			unk_0x37FAD86A12F039F1(iParam0, 0);
		}
	
		if (bParam2)
			unk_0x439314AD4FC79186(iParam0, uParam1->f_70);
	
		unk_0x77925396469B2D6D(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x0E732420DAF82F15(iParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		unk_0x0E732420DAF82F15(iParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		unk_0x0E732420DAF82F15(iParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		unk_0x0E732420DAF82F15(iParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		unk_0xC34E0415D83DCE33(iParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (unk_0x665CCACA7FE72F96(iParam0) > 1 && uParam1->f_67 >= 0)
			unk_0x0FB8086C2D3FF672(iParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(iParam0)))
				if (unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(iParam0)))
					if (uParam1->f_69 == 6)
						func_458(iParam0, uParam1->f_69);
				else
					func_458(iParam0, uParam1->f_69);
	
		if (unk_0x05575C8395F0AAF3(iParam0, 0))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				unk_0x664B8B0F1690467A(iParam0, 1);
			else
				unk_0x419B65DAF442A5D0(iParam0, 1);
	
		if (bParam3)
			func_450(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!unk_0x2D92D1084D213DC4(uParam1->f_66) && !unk_0x6123E78FD4B274FB(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_102(n + 1)))
					if (!unk_0x175FDAC9EB940479(iParam0, n + 1))
						unk_0x0D14FEE68F4897C9(iParam0, n + 1, 0);
				else if (unk_0x175FDAC9EB940479(iParam0, n + 1))
					unk_0x0D14FEE68F4897C9(iParam0, n + 1, 1);
			}
		}
	
		if (unk_0x504B9BB48D41C264(iParam0) == joaat("sheava") || unk_0x504B9BB48D41C264(iParam0) == joaat("omnis") || unk_0x504B9BB48D41C264(iParam0) == joaat("le7b"))
			if (unk_0xCA36A30E79A35222(iParam0, 0) == -1)
				unk_0x0D14FEE68F4897C9(iParam0, 1, 0);
	
		if (func_444() && unk_0xAF4434A9F7368F35(uParam1->f_66) && unk_0xDA1D0C30C85358D4(iParam0) && !unk_0x091E6E360116B927(iParam0, joaat("avenger")))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (IS_BIT_SET(uParam1->f_77, 22))
					unk_0xD1081E1D2877ED71(iParam0, 2);
				else
					unk_0xD1081E1D2877ED71(iParam0, 3);
			else
				unk_0xD1081E1D2877ED71(iParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			unk_0xEC687B9B4DF9224E(iParam0, "IgnoredByQuickSave", 1);
		else
			unk_0xEC687B9B4DF9224E(iParam0, "IgnoredByQuickSave", 0);
	}

	return;
}

int func_444() // Position - 0x357BA
{
	if (*Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 || *Global_4718592.f_104427 == 18 || *Global_4718592.f_104427 == 19 && Global_4718592.f_2 == 20)
		return 0;

	if (func_448(7))
		if (func_446(Global_2672505.f_4.f_16) || func_445(Global_2672505.f_4.f_16))
			return 0;

	return 1;
}

BOOL func_445(Player plParam0) // Position - 0x35849
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1890444[player /*129*/].f_77.f_51 != 0;

	return false;
}

BOOL func_446(Player plParam0) // Position - 0x3586D
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_447(plParam0, 9);

	return false;
}

BOOL func_447(Player plParam0, int iParam1) // Position - 0x3588B
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

BOOL func_448(int iParam0) // Position - 0x358A3
{
	return func_449(&(Global_2672505.f_183), iParam0);
}

BOOL func_449(var uParam0, int iParam1) // Position - 0x358B7
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_450(var uParam0, var uParam1, var uParam2) // Position - 0x358DA
{
	int i;
	int num;

	if (!unk_0xFBD273FDBCF0C5BD(*uParam0, 0))
		return 0;

	if (unk_0x6BDF27AD591C4E31(*uParam0) == 0)
		return 0;

	unk_0x7A49618D3F7CC735(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		num = i;
	
		if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21)
		{
			unk_0x3AE6D08FF755906B(*uParam0, num, uParam1->[i] > 0);
		}
		else if (num == 22)
		{
			if (uParam1->[i] > 0)
			{
				unk_0x3AE6D08FF755906B(*uParam0, num, 1);
			
				if (uParam1->[i] == 1)
					unk_0xABFCD086A60462D0(*uParam0, 255);
				else
					unk_0xABFCD086A60462D0(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				unk_0x3AE6D08FF755906B(*uParam0, num, 0);
			}
		}
		else if (unk_0xCA36A30E79A35222(*uParam0, num) != uParam1->[i] - 1)
		{
			unk_0xEB169AD5F48FFF85(*uParam0, num);
		
			if (uParam1->[i] > 0)
			{
				if (num == 23)
				{
					unk_0x886F6B56E2966139(*uParam0, num, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (num == 24)
				{
					unk_0x886F6B56E2966139(*uParam0, num, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_456(*uParam0, num, uParam1->[i] - 1))
				{
				}
				else
				{
					unk_0x886F6B56E2966139(*uParam0, num, uParam1->[i] - 1, 0);
				}
			}
		}
	}

	if (func_455(unk_0x504B9BB48D41C264(*uParam0), 1) && unk_0xCA36A30E79A35222(*uParam0, 24) != func_453(*uParam0, uParam1->[38] - 1))
		unk_0x886F6B56E2966139(*uParam0, 24, func_453(*uParam0, uParam1->[38] - 1), 0);

	func_452(uParam0);

	if (func_451(*uParam0))
	{
		unk_0xCCF0ADCE322CD93F(*uParam0, 1);
		unk_0x5BC68FEFF4902C2B(*uParam0, 1);
	}

	return 1;
}

BOOL func_451(var uParam0) // Position - 0x35AB4
{
	int i;
	int num;
	int num2;
	var unk;

	if (unk_0x7DE17ACDD8BA2642(uParam0) && unk_0xFBD273FDBCF0C5BD(uParam0, 0) && unk_0x6BDF27AD591C4E31(uParam0) > 0)
	{
		unk_0x7A49618D3F7CC735(uParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			num = i;
		
			if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21 || num == 22)
			{
			}
			else if (unk_0xCA36A30E79A35222(uParam0, num) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x37FCEA2DC5D0CAE5(uParam0, num, unk_0xCA36A30E79A35222(uParam0, num)), 32);
				num2 = unk_0x14580F20CBCE4FA9(&unk);
			
				if (num2 != 0)
					if (num2 == unk_0x14580F20CBCE4FA9("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || num2 == unk_0x14580F20CBCE4FA9("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_452(var uParam0) // Position - 0x35B90
{
	switch (unk_0x504B9BB48D41C264(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xCA36A30E79A35222(*uParam0, 4) == 0)
				unk_0x886F6B56E2966139(*uParam0, 13, 0, 0);
			else
				unk_0xEB169AD5F48FFF85(*uParam0, 13);
			break;
	
		case joaat("slamtruck"):
			unk_0x886F6B56E2966139(*uParam0, 24, 3, 0);
			break;
	
		default:
			break;
	}

	return;
}

int func_453(var uParam0, int iParam1) // Position - 0x35BE7
{
	int value;
	int value2;
	float num;
	int num2;

	if (unk_0x7DE17ACDD8BA2642(uParam0) && unk_0xFBD273FDBCF0C5BD(uParam0, 0))
	{
		switch (unk_0x504B9BB48D41C264(uParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case joaat("faction3"):
				return 3;
		}
	
		value = func_454(uParam0, 38) + 1;
		value2 = func_454(uParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

BOOL func_454(var uParam0, int iParam1) // Position - 0x35CD0
{
	BOOL i;

	if (unk_0x36A2218D87DEF488(Global_152535) && unk_0x091E6E360116B927(uParam0, Global_152535) && Global_152536 == iParam1)
		return Global_152537;

	for (i = unk_0xF66CFEE3C6DDCF4D(uParam0, iParam1) - 1; i >= 0 && func_456(uParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_455(int iParam0, int iParam1) // Position - 0x35D32
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
	
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("sabregt2"):
			if (!Global_262145.f_14734)
				return false;
			else
				return true;
			break;
	
		case joaat("tornado5"):
			if (!Global_262145.f_14735)
				return false;
			else
				return true;
			break;
	
		case joaat("virgo2"):
			if (!Global_262145.f_14733)
				return false;
			else
				return true;
			break;
	
		case joaat("minivan2"):
			if (!Global_262145.f_14736)
				return false;
			else
				return true;
			break;
	
		case joaat("slamvan3"):
			if (!Global_262145.f_14738)
				return false;
			else
				return true;
			break;
	
		case joaat("faction3"):
			if (!Global_262145.f_14737)
				return false;
			else
				return true;
			break;
	
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("comet3"):
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("diablous2"):
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("fcr2"):
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("elegy"):
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("nero2"):
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("italigtb2"):
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("specter2"):
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("technical3"):
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("insurgent3"):
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return true;
	}

	return false;
}

BOOL func_456(var uParam0, int iParam1, int iParam2) // Position - 0x36111
{
	if (!func_457() && unk_0x96AF6537AE293DDE(uParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_457() // Position - 0x36135
{
	return false;
}

void func_458(int iParam0, var uParam1) // Position - 0x3613E
{
	int num;
	int num2;

	if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
	{
		unk_0x7A49618D3F7CC735(iParam0, 0);
		num = unk_0xCA36A30E79A35222(iParam0, 24);
		num2 = unk_0x222AA75EE0288312(iParam0, 24);
		unk_0x575BBCB82C122DBA(iParam0, uParam1);
	
		if (unk_0x504B9BB48D41C264(iParam0) == joaat("tornado6") || unk_0x504B9BB48D41C264(iParam0) == joaat("peyote2"))
			return;
	
		if (num == -1)
			unk_0xEB169AD5F48FFF85(iParam0, 24);
		else
			unk_0x886F6B56E2966139(iParam0, 24, num, num2 == 1);
	}

	return;
}

BOOL func_459() // Position - 0x361B6
{
	return unk_0x7681F180D7938DA8(joaat("mpindependence"));
}

BOOL func_460(int iParam0) // Position - 0x361C7
{
	int num;

	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (unk_0x19D6457970A9D67E("MPBitset", 3))
			{
				if (unk_0x2B6E67EB7FF3FD10(iParam0, "MPBitset"))
					num = unk_0xC2DE378329C46B2E(iParam0, "MPBitset");
			
				return IS_BIT_SET(num, 4);
			}
		}
	}

	return false;
}

int func_461(var uParam0) // Position - 0x3620F
{
	if (!func_457() && func_462(uParam0))
		return 1;

	return 0;
}

BOOL func_462(int iParam0) // Position - 0x3622F
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

BOOL func_463(int iParam0) // Position - 0x36282
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(unk_0x93E99A2DBCBA9CFA(), -1))
			iParam0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return false;

	if (unk_0x055111B11E6624FD(iParam0, 0))
		return false;

	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		return false;

	if (func_465(unk_0x93E99A2DBCBA9CFA()) == 3)
		if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xFBD273FDBCF0C5BD(iParam0, 0))
			if (func_464(iParam0) != -1)
				return true;

	return false;
}

int func_464(int iParam0) // Position - 0x36309
{
	if (unk_0x19D6457970A9D67E("FMDeliverableID", 3))
		if (unk_0x2B6E67EB7FF3FD10(iParam0, "FMDeliverableID"))
			return unk_0xC2DE378329C46B2E(iParam0, "FMDeliverableID");

	return -1;
}

int func_465(int iParam0) // Position - 0x36338
{
	if (func_468(iParam0) == 233)
		return func_466(iParam0);

	return -1;
}

int func_466(int iParam0) // Position - 0x36355
{
	if (func_467(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_467(int iParam0, BOOL bParam1) // Position - 0x36378
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

BOOL func_468(int iParam0) // Position - 0x363B3
{
	if (func_467(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(var uParam0, int iParam1) // Position - 0x363D6
{
	var unk;

	if (_NETWORK_IS_PLAYER_VALID(uParam0, true, true))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(uParam0), 0))
		{
			unk = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(uParam0), 0);
		
			if (unk_0xFBD273FDBCF0C5BD(unk, 0))
				if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(unk, iParam1, 0))
					return true;
		}
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x36423
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(player))
		{
			if (bIsPlaying)
				if (!unk_0x48DC6A21D1CAD89C(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_471(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x36483
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (func_436(&Global_77348.f_555[0 /*21*/], i))
			if (unk_0x2E496FE654DA4166(uParam0, Global_77348.f_555[0 /*21*/], iParam4) <= fParam3)
				func_432(i);
	}

	return;
}

BOOL func_472(var uParam0) // Position - 0x364D3
{
	if (func_484(uParam0))
	{
		if (unk_0x0CBB7C273DED26E7(uParam0->f_12.f_66))
			return true;
		else
			return false;
	
		return true;
	}
	else
	{
		return false;
	}

	return true;
}

void func_473(var uParam0) // Position - 0x36508
{
	if (func_484(uParam0))
		unk_0x852EC2A7DE66202D(uParam0->f_12.f_66);

	return;
}

BOOL func_474(var uParam0, var uParam1) // Position - 0x36526
{
	int num;
	var unk;
	var unk2;
	var unk3;

	num = 1;
	unk_0x350F65B0612C7A16(*uParam0 - 150f, uParam0->f_1 - 150f, *uParam0 + 150f, uParam0->f_1 + 150f);

	while (!unk_0x9ADDEEB34545AD94(*uParam0 - 150f, uParam0->f_1 - 150f, *uParam0 + 150f, uParam0->f_1 + 150f))
	{
		SYSTEM::WAIT(0);
	}

	while (unk_0xF205ECAF6E47803C(*uParam0, num, &unk3, &unk2, &unk, 1, 1077936128, 0))
	{
		if (unk_0x2E496FE654DA4166(*uParam0, unk3, 0) <= 150f)
		{
			if (func_475(unk3, unk2, *uParam0, uParam1))
			{
				*uParam0 = { unk3 };
				uParam0->f_6 = unk2;
				uParam0->f_3 = { 0f, 0f, 0f };
				return true;
			}
			else
			{
				num = num + 1;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

BOOL func_475(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94) // Position - 0x36605
{
	int i;
	Vector3 vector;
	int num;
	int num2;
	var unk3;
	var unk4;
	var unk5;
	var unk8;
	var unk11;
	var unk14;
	int num3;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97614[i /*17*/])
		{
			num2 = Global_97614[i /*17*/].f_9;
			num = 263;
		
			if (num2 >= num)
				return false;
		
			if (IS_BIT_SET(Global_32543[num2 /*23*/].f_11, 19))
				vector = { func_476(num2, _GET_CURRENT_PLAYER_CHARACTER_0()) };
			else
				vector = { func_476(num2, CHAR_MICHAEL) };
		
			if (SYSTEM::VDIST2(vParam0, vector) < 9f)
				return false;
		}
	}

	num3 = -1;
	unk_0x1C97A6E4D8DA4B2F(uParam4.f_12.f_66, &unk5, &unk8);
	unk3 = unk_0x947A5F10899CB90E(vParam0, unk8 - unk5, 0f, 0f, uParam3, 2, 90, uParam94, 4);

	while (unk_0x5A2817B89A8ECCD2(unk3, &num3, &unk11, &unk14, &unk4) == 1)
	{
		SYSTEM::WAIT(0);
	}

	if (num3 == 0)
		return true;

	if (num3 == 1)
		return false;

	return false;
}

Vector3 func_476(int iParam0, eCharacter echParam1) // Position - 0x366EE
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_32543[num /*23*/][echParam1 /*3*/];
}

BOOL func_477(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90) // Position - 0x3672C
{
	int i;
	Vector3 vector;
	int num;
	int num2;
	var unk3;
	var unk4;
	var unk5;
	var unk8;
	var unk11;
	var unk14;
	int num3;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97614[i /*17*/])
		{
			num2 = Global_97614[i /*17*/].f_9;
			num = 263;
		
			if (num2 >= num)
				return false;
		
			if (IS_BIT_SET(Global_32543[num2 /*23*/].f_11, 19))
				vector = { func_476(num2, _GET_CURRENT_PLAYER_CHARACTER_0()) };
			else
				vector = { func_476(num2, CHAR_MICHAEL) };
		
			if (SYSTEM::VDIST2(vParam0, vector) < 3f)
				return false;
		}
	}

	num3 = -1;
	unk_0x1C97A6E4D8DA4B2F(vParam0.f_12.f_66, &unk5, &unk8);

	if (!unk_0x055111B11E6624FD(uParam90, 0))
		unk3 = unk_0x947A5F10899CB90E(vParam0, unk8 - unk5, 0f, 0f, vParam0.f_6, 2, 90, uParam90, 4);

	while (unk_0x5A2817B89A8ECCD2(unk3, &num3, &unk11, &unk14, &unk4) == 1)
	{
		SYSTEM::WAIT(0);
	}

	if (num3 == 0)
		return true;

	if (num3 == 1)
		return false;

	return false;
}

BOOL func_478(int iParam0) // Position - 0x3681E
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return true;
	}

	return false;
}

int func_479(var uParam0, eCharacter echParam1) // Position - 0x36877
{
	int i;

	if (!func_415(uParam0->f_66))
		return 0;

	if (unk_0x7DE17ACDD8BA2642(Global_78254))
		return 0;

	switch (echParam1)
	{
		case 0:
			i = 0;
			break;
	
		case 1:
			i = 1;
			break;
	
		case 2:
			i = 2;
			break;
	
		default:
			return 0;
	}

	if (!func_434(0, echParam1))
		Global_113648.f_32751.f_5592[i] = 0;
	else if (!func_434(1, echParam1))
		Global_113648.f_32751.f_5592[i] = 1;

	func_480(echParam1, unk_0x749766113BB6FF2D(uParam0->f_66));
	func_433(uParam0, &Global_113648.f_32751.f_5038[i /*157*/][Global_113648.f_32751.f_5592[i] /*78*/]);
	Global_113648.f_32751.f_5592[i] = Global_113648.f_32751.f_5592[i] + 1;

	if (Global_113648.f_32751.f_5592[i] >= func_435(&Global_113648.f_32751.f_5038[i /*157*/]))
		Global_113648.f_32751.f_5592[i] = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_100085[i /*98*/] == uParam0->f_66 && unk_0x4310A0DB886F9FED(&(Global_100085[i /*98*/].f_27), &(uParam0->f_1)))
			Global_100085[i /*98*/] = 0;
	}

	return 1;
}

void func_480(eCharacter echParam0, char* sParam1) // Position - 0x369CF
{
	if (!func_31(echParam0))
		return;

	if (!Global_113648.f_32751.f_5596[echParam0])
	{
		switch (echParam0)
		{
			case CHAR_MICHAEL:
				func_481("IMPOUND_HELPM" /*Michael's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee.*/, sParam1, 2, unk_0x15A88CFAAFFC6C4B(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
		
			case CHAR_FRANKLIN:
				func_481("IMPOUND_HELPF" /*Franklin's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee.*/, sParam1, 2, unk_0x15A88CFAAFFC6C4B(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
		
			case CHAR_TREVOR:
				func_481("IMPOUND_HELPT" /*Trevor's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee.*/, sParam1, 2, unk_0x15A88CFAAFFC6C4B(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
	
		Global_113648.f_32751.f_5596[echParam0] = true;
	}

	return;
}

void func_481(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x36A7E
{
	func_482(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
	return;
}

void func_482(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x36A9E
{
	int i;

	if (unk_0x4310A0DB886F9FED(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (unk_0x4310A0DB886F9FED(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = unk_0xA5E11AF0A2B928C1() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = unk_0xA5E11AF0A2B928C1() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_483();
	}

	return;
}

void func_483() // Position - 0x36C71
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

BOOL func_484(var uParam0) // Position - 0x36D88
{
	if (uParam0->f_12.f_66 == 0)
		return false;

	if (!func_416(uParam0->f_12.f_66, false, -1))
		return false;

	if (uParam0->f_12.f_66 == joaat("stunt") && func_439(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, false))
		return false;

	return true;
}

BOOL func_485(int iParam0, eCharacter echParam1) // Position - 0x36DE8
{
	eCharacter character;

	if (func_484(&(iParam0->f_2890)))
	{
		if (iParam0->f_3 == 0)
		{
			character = iParam0->f_2890.f_11;
		
			if (character == _CHAR_NULL || character == echParam1)
				return true;
		}
	}

	return false;
}

void func_486(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x36E2E
{
	var unk;
	int num;
	int num2;
	int num3;
	float num4;
	var unk4;

	num = 0;
	num2 = 0;

	if (iParam3 == 1)
		num4 = 5000f;
	else
		num4 = 10f;

	if (iParam2 == 1)
		func_487(uParam0, 1);

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk4 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk4))
				{
					if (!unk_0xFBD273FDBCF0C5BD(unk4, 0))
					{
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk, 1, 0, 0, 1);
						num = 1;
					
						if (*uParam0 == unk4)
							func_487(uParam0, 0);
					}
				}
			}
		
			if (iParam2 == 0)
			{
				unk_0xF82BC5193AF62796(unk, num4, 1, 0, 0, 0);
				unk_0x2117C3CCFF2D957A(unk, num4, 0);
			}
		
			if (num == 1)
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk, 1, 0, 0, 1);
		}
	}

	func_6(num4);

	if (iParam3 == 1 && iParam2 == 0)
	{
		if (IS_BIT_SET(Global_100681.f_20, 2))
		{
			num2 = 1;
			func_41(0);
		}
	
		unk_0x1CC025DD90CB1D9C();
		unk_0xF55B077AE7451D3C();
		unk_0xC1AE78F8D627C659();
		num3 = unk_0xA5E11AF0A2B928C1() + 1000;
	
		while (!unk_0x4CD3268F93CFCDC3() && unk_0xA5E11AF0A2B928C1() < num3)
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0xA5E11AF0A2B928C1() > num3;
	
		if (num2 == 1)
			func_41(1);
	}

	if (iParam4 == 1)
		func_487(uParam0, 0);

	if (iParam1 == 1)
	{
		unk_0xEAB390443C680F72(0f, 1065353216);
		unk_0xAABD7B0753C5C286(0f);
	}

	return;
}

void func_487(var uParam0, int iParam1) // Position - 0x36F96
{
	var unk;
	int i;

	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		for (i = -1; i <= 8 - 1; i = i + 1)
		{
			if (unk_0xFBD273FDBCF0C5BD(*uParam0, 0))
			{
				unk = unk_0xA66E176E5772E965(*uParam0, i, 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk))
				{
					if (unk != unk_0xC1A5EC5C986B98AD())
					{
						if (i != -1 || unk_0x504B9BB48D41C264(*uParam0) != joaat("taxi"))
						{
							unk_0x85BAE84748AD1A23(unk, 1, 1);
							unk_0xE9C250FA35A936C8(&unk);
						}
						else if (unk_0x24B651D85CCE5EB4(joaat("taxiservice")) > 0)
						{
							Global_112699 = 1;
						}
					}
				}
			}
		}
	
		unk_0x85BAE84748AD1A23(*uParam0, 1, 1);
	
		if (iParam1 == 1)
		{
			if (unk_0xFBD273FDBCF0C5BD(*uParam0, 0))
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
						unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
		
			unk_0x2728CF7242F08BD5(uParam0);
		}
		else
		{
			unk_0x0E4B6CF706BE8AA4(uParam0);
		}
	}

	return;
}

void func_488() // Position - 0x37072
{
	BOOL flag;
	var unk;

	flag = true;

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk = unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
		
			if (unk_0x6CEF99E452573979(unk))
				flag = false;
		}
	
		if (flag)
			unk_0xA198A00DB6F5FC07(unk_0x5DC3DCA82C806319(), 1);
	
		unk_0x45583CDA541E788E(unk_0xC1A5EC5C986B98AD(), 1);
	}

	return;
}

void func_489(var uParam0) // Position - 0x370C7
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 2, 0, false))
		{
			func_491(-1036.1206f, -2731.8335f, 12.7565f, 332.5734f, 0, 1);
			func_490(&(Global_107196.f_2890), -1023.8408f, -2728.1885f, 12.7005f, 238.436f);
			*uParam0 = 1;
		}
		else if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 0, false))
		{
			func_491(-1588.7277f, 2787.3594f, 15.8569f, 225.7622f, 0, 1);
			func_490(&(Global_107196.f_2890), -1549.093f, 2765.3672f, 16.7419f, 230.0104f);
			*uParam0 = 1;
		}
		else if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 4, 0, false))
		{
			func_491(1850.7642f, 2586.4238f, 44.6721f, 269.1614f, 0, 1);
			func_490(&(Global_107196.f_2890), 1870.1f, 2581.2407f, 44.6721f, 89.292f);
			*uParam0 = 1;
		}
		else if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 5, 0, false))
		{
			func_491(3413.7683f, 3764.5522f, 29.4592f, 172.4372f, 0, 1);
			func_490(&(Global_107196.f_2890), 3406.9092f, 3753.4368f, 29.6532f, 143.9102f);
			*uParam0 = 1;
		}
		else if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 6, 0, false))
		{
			func_491(512.847f, -3041.4504f, 5.0693f, 262.3306f, 0, 1);
			func_490(&(Global_107196.f_2890), 540.0468f, -3053.9167f, 5.0693f, 179.415f);
			*uParam0 = 1;
		}
		else if (func_492(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 7, 0, false))
		{
			func_491(-1068.5808f, -463.2691f, 35.6624f, 275.0622f, 0, 1);
			func_490(&(Global_107196.f_2890), -1068.0143f, -456.7559f, 35.5259f, 219.4607f);
			*uParam0 = 1;
		}
	}

	return;
}

void func_490(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x372D0
{
	*uParam0 = { fParam1 };
	uParam0->f_6 = fParam4;
	return;
}

int func_491(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x372E6
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		func_41(0);
		unk_0xF82BC5193AF62796(fParam0, 5f, 1, 0, 0, 0);
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), fParam0, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), fParam3);
				unk_0xEAB390443C680F72(0f, 1065353216);
				unk_0xAABD7B0753C5C286(0f);
			}
		}
	
		unk_0x46D9CC780489C728(fParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		unk_0xF82BC5193AF62796(fParam0, 5000f, 1, 0, 0, 0);
		unk_0x2117C3CCFF2D957A(fParam0, 5000f, 0);
		unk_0xA172C350F431483A(fParam0, 5000f);
		unk_0x3056199EEBDE8CBB(fParam0, 5000f);
		func_5();
		func_4();
		SYSTEM::SETTIMERA(0);
		func_41(1);
	
		if (!unk_0x58A962BEF2DDE1DF())
		{
			while (!unk_0x46D9CC780489C728(fParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					unk_0x577AE0048ADA90C8(0);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!unk_0x16760C7780F48003())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
			{
				unk_0x577AE0048ADA90C8(0);
			
				if (unk_0x58A962BEF2DDE1DF())
					unk_0xB942AB5E12BF630A();
			
				return 0;
			}
		}
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x58A962BEF2DDE1DF())
					unk_0xB942AB5E12BF630A();
			
				unk_0x577AE0048ADA90C8(0);
				SYSTEM::SETTIMERA(0);
				unk_0x1CC025DD90CB1D9C();
			
				if (iParam5 == 1)
					unk_0xF55B077AE7451D3C();
				else
					SYSTEM::SETTIMERA(5000);
			
				unk_0xC1AE78F8D627C659();
			}
		}
	
		while (!unk_0x4CD3268F93CFCDC3() && !func_3() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			unk_0xDE209AFE421606C6(fParam0, &(fParam0.f_2), 0, 0);
			unk_0xF82BC5193AF62796(fParam0, 5f, 1, 0, 0, 0);
		
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), fParam0, 1, 0, 0, 1);
					unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), fParam3);
				}
			}
		}
	
		unk_0xEAB390443C680F72(0f, 1065353216);
		unk_0xAABD7B0753C5C286(0f);
		func_41(0);
		return 1;
	}

	func_41(0);
	return 0;
}

BOOL func_492(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x37505
{
	var unk;
	var unk47;
	var unk93;
	int num;
	int i;
	int num2;
	int num3;

	unk = 15;
	unk47 = 15;
	unk93 = 15;
	num2 = 0;

	switch (iParam3)
	{
		case 1:
			unk[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			unk47[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			unk93[0] = 171.25f;
			unk[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			unk47[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			unk93[1] = 132f;
			unk[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			unk47[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			unk93[2] = 132f;
			num = 3;
			break;
	
		case 2:
			unk[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			unk47[0 /*3*/] = { -1816.9539f, -2768.8933f, (float)250 + iParam4 };
			unk93[0] = 247f;
			unk[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			unk47[1 /*3*/] = { -968.6236f, -3477.7476f, (float)250 + iParam4 };
			unk93[1] = 149f;
			unk[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			unk47[2 /*3*/] = { -1011.08105f, -3086.9038f, (float)250 + iParam4 };
			unk93[2] = 185.5f;
			unk[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			unk47[3 /*3*/] = { -1599.0082f, -2616.2705f, (float)250 + iParam4 };
			unk93[3] = 250f;
			unk[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			unk47[4 /*3*/] = { -1392.6105f, -2226.7634f, (float)250 + iParam4 };
			unk93[4] = 193.5f;
			unk[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			unk47[5 /*3*/] = { -1136.9174f, -2617.9546f, (float)250 + iParam4 };
			unk93[5] = 234.5f;
			unk[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			unk47[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			unk93[6] = 16f;
			unk[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			unk47[7 /*3*/] = { -1955.2982f, -3010.4314f, (float)250 + iParam4 };
			unk93[7] = 80f;
			unk[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			unk47[8 /*3*/] = { -1836.143f, -3105.2683f, (float)250 + iParam4 };
			unk93[8] = 142f;
			unk[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			unk47[9 /*3*/] = { -1259.6486f, -3463.4863f, (float)250 + iParam4 };
			unk93[9] = 30.75f;
			unk[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			unk47[10 /*3*/] = { -896.3734f, -3505.7148f, (float)250 + iParam4 };
			unk93[10] = 150f;
			unk[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			unk47[11 /*3*/] = { -1685.6256f, -2720.3635f, (float)250 + iParam4 };
			unk93[11] = 29.25f;
			unk[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			unk47[12 /*3*/] = { -1110.1978f, -3493.6172f, (float)250 + iParam4 };
			unk93[12] = 43f;
			num = 13;
			break;
	
		case 3:
			unk[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			unk47[0 /*3*/] = { -2029.7765f, 2845.0833f, (float)250 + iParam4 };
			unk93[0] = 255f;
			unk[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			unk47[1 /*3*/] = { -2009.1815f, 2879.8352f, (float)250 + iParam4 };
			unk93[1] = 180f;
			unk[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			unk47[2 /*3*/] = { -2033.9279f, 3089.0488f, (float)250 + iParam4 };
			unk93[2] = 205f;
			unk[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			unk47[3 /*3*/] = { -2016.7909f, 3195.058f, (float)250 + iParam4 };
			unk93[3] = 86.25f;
			unk[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			unk47[4 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[4] = 150.5f;
			unk[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			unk47[5 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[5] = 140.5f;
			unk[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			unk47[6 /*3*/] = { -2715.8708f, 3269.9155f, (float)250 + iParam4 };
			unk93[6] = 90f;
			unk[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			unk47[7 /*3*/] = { -1977.5688f, 3330.8882f, (float)250 + iParam4 };
			unk93[7] = 100f;
			unk[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			unk47[8 /*3*/] = { -1942.747f, 2947.4412f, (float)250 + iParam4 };
			unk93[8] = 248.75f;
			unk[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			unk47[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			unk93[9] = 128f;
			unk[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			unk47[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			unk93[10] = 140f;
			unk[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			unk47[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			unk93[11] = 16f;
			unk[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			unk47[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			unk93[12] = 214.25f;
			unk[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			unk47[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			unk93[13] = 65.75f;
		
			if (bParam5)
				num3 = iParam4;
			else
				num3 = 0;
		
			unk47[9 /*3*/].f_2 = unk47[9 /*3*/].f_2 + (float)num3;
			unk47[10 /*3*/].f_2 = unk47[10 /*3*/].f_2 + (float)num3;
			unk47[11 /*3*/].f_2 = unk47[11 /*3*/].f_2 + (float)num3;
			unk47[12 /*3*/].f_2 = unk47[12 /*3*/].f_2 + (float)num3;
			unk47[13 /*3*/].f_2 = unk47[13 /*3*/].f_2 + (float)num3;
			num = 14;
			break;
	
		case 4:
			unk[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			unk47[0 /*3*/] = { 1815.5753f, 2535.0596f, (float)150 + iParam4 };
			unk93[0] = 114f;
			unk[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			unk47[1 /*3*/] = { 1716.9603f, 2502.957f, (float)150 + iParam4 };
			unk93[1] = 88.5f;
			unk[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			unk47[2 /*3*/] = { 1650.0776f, 2515.9226f, (float)150 + iParam4 };
			unk93[2] = 133.25f;
			unk[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			unk47[3 /*3*/] = { 1698.5546f, 2460.2078f, (float)150 + iParam4 };
			unk93[3] = 104.5f;
			unk[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			unk47[4 /*3*/] = { 1718.8477f, 2589.1616f, (float)150 + iParam4 };
			unk93[4] = 121.75f;
			unk[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			unk47[5 /*3*/] = { 1774.8124f, 2679.4187f, (float)150 + iParam4 };
			unk93[5] = 84.5f;
			unk[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			unk47[6 /*3*/] = { 1657.2083f, 2595.4844f, (float)150 + iParam4 };
			unk93[6] = 103.75f;
			unk[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			unk47[7 /*3*/] = { 1657.1647f, 2669.721f, (float)150 + iParam4 };
			unk93[7] = 104.25f;
			unk[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			unk47[8 /*3*/] = { 1789.8551f, 2705.0369f, (float)150 + iParam4 };
			unk93[8] = 91f;
			unk[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			unk47[9 /*3*/] = { 1783.1143f, 2606.7832f, (float)150 + iParam4 };
			unk93[9] = 51.25f;
			num = 10;
			break;
	
		case 5:
			unk[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			unk47[0 /*3*/] = { 3615.583f, 3626.1936f, (float)40 + iParam4 };
			unk93[0] = 45.75f;
			unk[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			unk47[1 /*3*/] = { 3643.8008f, 3694.3618f, (float)40 + iParam4 };
			unk93[1] = 99f;
			unk[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			unk47[2 /*3*/] = { 3650.9143f, 3766.1516f, (float)40 + iParam4 };
			unk93[2] = 81.5f;
			num = 3;
			break;
	
		case 6:
			unk[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			unk47[0 /*3*/] = { 523.22894f, -3118.678f, (float)10 + iParam4 };
			unk93[0] = 120f;
			unk[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			unk47[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			unk93[1] = 170f;
			unk[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			unk47[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			unk93[2] = 12.5f;
			unk[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			unk47[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			unk93[3] = 9.75f;
			num = 4;
			break;
	
		case 7:
			unk[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			unk47[0 /*3*/] = { -1187.8108f, -477.50366f, (float)50 + iParam4 };
			unk93[0] = 162f;
			unk[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			unk47[1 /*3*/] = { -1215.7959f, -464.82806f, (float)50 + iParam4 };
			unk93[1] = 124f;
			unk[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			unk47[2 /*3*/] = { -1013.3932f, -475.20575f, (float)50 + iParam4 };
			unk93[2] = 55f;
			unk[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			unk47[3 /*3*/] = { -1073.3325f, -498.717f, (float)50 + iParam4 };
			unk93[3] = 142f;
			num = 4;
			break;
	
		case 8:
			unk[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			unk47[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			unk93[0] = 7.75f;
			unk[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			unk47[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			unk93[1] = 14.75f;
			unk[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			unk47[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			unk93[2] = 31.5f;
			unk[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			unk47[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			unk93[3] = 30.5f;
			unk[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			unk47[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			unk93[4] = 6.75f;
			num = 5;
			break;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk_0x9E76D45F14E2C578(uParam0, unk[i /*3*/], unk47[i /*3*/], unk93[i], num2, 1))
			return true;
	}

	return false;
}

int func_493() // Position - 0x3825B
{
	var unk;
	BOOL flag;
	var unk2;
	var unk5;
	float num;
	var unk6;

	if (func_127(Global_78799, 0f, 0f, 0f, false))
	{
		flag = true;
	
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk = unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
		
			if (unk_0xAF4434A9F7368F35(unk) || unk_0x2D92D1084D213DC4(unk) || unk_0x6123E78FD4B274FB(unk))
				flag = false;
		}
	
		if (flag)
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (!unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
				{
					unk2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
					unk5 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
					unk_0xDE209AFE421606C6(unk2, &num, 0, 0);
				
					if (unk_0x2655A8EC638E4FD1(num - unk2.f_2) > 1f)
					{
						unk6 = unk_0xF2DCD142B0FBD306();
					
						if (unk_0x7DE17ACDD8BA2642(unk6))
						{
							if (!unk_0x055111B11E6624FD(unk6, 0))
							{
								if (!unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), unk_0xF2DCD142B0FBD306()))
								{
									func_491(unk2, unk5, 1, 1);
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_491(Global_78799, Global_78802, 0, 1);
		return 1;
	}

	return 0;
}

void func_494(BOOL bParam0) // Position - 0x3835F
{
	if (func_18())
		func_495(func_748(), bParam0);
	else if (Global_100681.f_11 == 6)
		Global_112735[Global_100681.f_1 /*10*/].f_3 = bParam0;

	return;
}

void func_495(eCharacter echParam0, BOOL bParam1) // Position - 0x38395
{
	if (bParam1)
		if (echParam0 != CHAR_DETONATEBOMB && echParam0 != CHAR_LS_CUSTOMS && echParam0 != CHAR_DOMESTIC_GIRL)
			Global_94666[echParam0 /*2*/] = true;
	else
		Global_94666[echParam0 /*2*/] = false;

	return;
}

void func_496(var uParam0) // Position - 0x383D3
{
	unk_0x0135E51BAD56ED58(0);
	unk_0x989D8D7F85192C52(0);

	while (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		SYSTEM::WAIT(0);
	}

	unk_0x0135E51BAD56ED58(1);
	func_497(*uParam0);
	func_41(1);
	return;
}

void func_497(int iParam0) // Position - 0x3840A
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		unk_0x85BAE84748AD1A23(iParam0, 1, 1);
		unk_0x2728CF7242F08BD5(&iParam0);
	}

	return;
}

BOOL func_498(int iParam0) // Position - 0x3842C
{
	int num;
	var unk;
	float num2;
	int num3;
	eCharacter character;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	
		default:
			return false;
	}

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character != _CHAR_NULL)
	{
		unk = { Global_113648.f_2365.f_539.f_2300[character /*3*/] };
		num2 = Global_113648.f_2365.f_539.f_2310[character];
		num3 = Global_113648.f_2365.f_539.f_2314[character];
	}

	while (!func_499(num, true))
	{
		SYSTEM::WAIT(0);
	}

	if (character != _CHAR_NULL)
	{
		Global_113648.f_2365.f_539.f_2300[character /*3*/] = { unk };
		Global_113648.f_2365.f_539.f_2310[character] = num2;
		Global_113648.f_2365.f_539.f_2314[character] = num3;
	}

	return true;
}

BOOL func_499(int iParam0, BOOL bParam1) // Position - 0x38508
{
	eCharacter character;
	int num;
	int num2;
	int num3;
	var unk;

	Global_23131.f_13 = 0;

	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		return true;

	character = func_741(iParam0);
	num = _GET_CHARACTER_MODEL(character);

	if (num == 0)
		return true;

	if (unk_0x7EDC47E12B94AA72(unk_0xC1A5EC5C986B98AD(), num))
		return true;

	unk_0x852EC2A7DE66202D(num);

	if (!unk_0x0CBB7C273DED26E7(num))
		return false;

	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		num2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	
		if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(num2, -1, 0))
			num3 = -1;
		else if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(num2, 0, 0))
			num3 = 0;
		else if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(num2, 1, 0))
			num3 = 1;
		else if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(num2, 2, 0))
			num3 = 2;
		else
			num3 = -1;
	}
	else
	{
		num2 = 0;
	}

	if (unk_0x7DE17ACDD8BA2642(num2) && unk_0xFBD273FDBCF0C5BD(num2, 0))
	{
		unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
		func_740(&Global_23085[iParam0], character, num2, num3, bParam1, false, false);
	}
	else
	{
		unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		unk_0xDE209AFE421606C6(unk, &(unk.f_2), 0, 0);
		func_545(&Global_23085[iParam0], character, unk, unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()), bParam1, false, false);
	}

	Global_23085.f_7 = iParam0;
	Global_23085.f_39 = 1;
	func_502(&Global_23085, false, false, 0);
	func_500(iParam0);
	return true;
}

void func_500(int iParam0) // Position - 0x38667
{
	return;
}

int func_501(int iParam0) // Position - 0x3868C
{
	if (iParam0 == 0)
		return 3;
	else if (iParam0 == 1)
		return 0;
	else if (iParam0 == 2)
		return 1;
	else if (iParam0 == 3)
		return 2;

	return 0;
}

int func_502(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x386C6
{
	int num;
	eCharacter character;
	eCharacter character2;
	float num2;
	int i;
	int num3;
	var unk;
	int num4;
	var unk17;
	var unk18;

	if (!uParam0->f_39)
		if (uParam0->f_7 == 4)
			return 1;

	if (uParam0->[uParam0->f_7] != unk_0xC1A5EC5C986B98AD())
	{
	}

	if (!unk_0x66599E73DBA5A850(uParam0->[uParam0->f_7]) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && uParam0->[uParam0->f_7] != unk_0xC1A5EC5C986B98AD())
	{
		if (!bParam2)
		{
			if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) && !unk_0x584CD220C093B0B4(unk_0xC1A5EC5C986B98AD()) && !unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()))
				unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
			else
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		
			if (unk_0x48A4D45B3B4CEFFD(uParam0->[uParam0->f_7]) && !unk_0x584CD220C093B0B4(uParam0->[uParam0->f_7]) && !unk_0x5CD470B5BDDAC029(uParam0->[uParam0->f_7]))
				unk_0x35DD50D05C962B6A(uParam0->[uParam0->f_7]);
			else
				unk_0x909F139DC199D8E0(uParam0->[uParam0->f_7]);
		}
	
		num = unk_0xC1A5EC5C986B98AD();
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (!uParam0->f_23)
			func_539(num, false);
	
		func_537(character, &num);
		unk_0x598D91BBD045C1F3(num, 32, 1);
		unk_0x598D91BBD045C1F3(num, 250, 1);
		character2 = func_741(uParam0->f_7);
		func_539(uParam0->[uParam0->f_7], false);
		num2 = ((SYSTEM::TO_FLOAT(unk_0x2935B4D6CE81318D(uParam0->[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(unk_0xAC6860C864E313E3(uParam0->[uParam0->f_7])) - 100f)) * 100f;
	
		switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()))
		{
			case CHAR_MICHAEL:
				if (unk_0x7B498529E87A3591("BulletTime"))
					unk_0x29978E5D6F8BB77E("BulletTime");
			
				if (unk_0x7B498529E87A3591("BulletTimeOut"))
					unk_0x29978E5D6F8BB77E("BulletTimeOut");
				break;
		
			case CHAR_FRANKLIN:
				if (unk_0x7B498529E87A3591("DrivingFocus"))
					unk_0x29978E5D6F8BB77E("DrivingFocus");
			
				if (unk_0x7B498529E87A3591("DrivingFocusOut"))
					unk_0x29978E5D6F8BB77E("DrivingFocusOut");
				break;
		
			case CHAR_TREVOR:
				if (unk_0x7B498529E87A3591("REDMIST"))
					unk_0x29978E5D6F8BB77E("REDMIST");
			
				if (unk_0x7B498529E87A3591("REDMISTOut"))
					unk_0x29978E5D6F8BB77E("REDMISTOut");
				break;
		}
	
		if (func_31(_GET_CURRENT_PLAYER_CHARACTER()))
			if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
				unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
	
		unk_0x47C1647A63F43D76(unk_0x93E99A2DBCBA9CFA(), uParam0->[uParam0->f_7], bParam2, 0);
		unk_0xEDECDDE17C1E41F5(3);
		unk_0xEDECDDE17C1E41F5(13);
	
		if (iParam3 & 1 != 0)
			unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 210, 0);
	
		if (func_249(0) || func_249(3))
		{
			if (Global_23131.f_13)
			{
				for (i = 0; i < 7; i = i + 1)
				{
					if (IS_BIT_SET(Global_91433[i /*5*/].f_1, 2))
					{
						num3 = Global_91433[i /*5*/];
						TEXT_LABEL_ASSIGN_STRING(&unk, "MISS_SWITCH_", 64);
						TEXT_LABEL_APPEND_STRING(&unk, &Global_91469[Global_78828.f_109[num3 /*4*/] /*34*/], 64);
						unk_0xB27C3C2F7357CAA1(unk_0x14580F20CBCE4FA9(&unk), 1f);
					}
				}
			}
		}
	
		Global_23131.f_13 = 0;
		uParam0->f_5 = func_536(character);
	
		if (uParam0->f_5 == 4)
			uParam0->f_5 = 3;
	
		uParam0->[uParam0->f_5] = num;
		uParam0->[uParam0->f_7] = 0;
		uParam0->f_6 = func_536(character2);
		uParam0->f_7 = 4;
		num4 = unk_0xC1A5EC5C986B98AD();
		unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 1, 0);
		func_535(num4);
		unk_0x4215B9F7B46D70CF(num4, 0, 0);
	
		if (num2 < 25f && !unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()))
			unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), SYSTEM::ROUND(((25f / 100f) * (SYSTEM::TO_FLOAT(unk_0xAC6860C864E313E3(unk_0xC1A5EC5C986B98AD())) - 100f)) + 100f), 0);
	
		if (bParam1)
		{
			if (unk_0x7DE17ACDD8BA2642(num))
			{
				unk_0x724FFAED1C56CE2B(num, 1, 0);
				func_535(num);
				unk_0x4215B9F7B46D70CF(num, 0, 0);
				unk_0x0002182D625AEFEA(num, 0, 0);
			}
		}
		else if (unk_0x7DE17ACDD8BA2642(num))
		{
			unk18 = unk_0x3AE80C6F6AA5BDE9(num, &unk17);
		
			if (!unk_0xB71C73D0269747D5(unk18))
			{
				if (!unk_0x4310A0DB886F9FED(unk18, unk_0x688846D56810779A()))
					unk_0x85BAE84748AD1A23(num, 0, 1);
			
				unk_0xE9C250FA35A936C8(&num);
			}
		}
	
		Global_97963 = 1;
		func_534(unk_0xC1A5EC5C986B98AD());
		func_533();
		func_532(character2);
		func_527();
		func_524(character2);
		func_508(func_522(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 145, 0));
		unk_0xB6545ABC2D6721E3(unk_0x93E99A2DBCBA9CFA());
		unk_0x52B0DD24AA97ABDB(unk_0xC1A5EC5C986B98AD(), 0);
		unk_0x841E34BB01496B96(unk_0xC1A5EC5C986B98AD(), 1);
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			unk_0x8A33066DCD1050C9(unk_0x93E99A2DBCBA9CFA(), func_507(67));
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			unk_0x3D9899B36B9A774B(unk_0x93E99A2DBCBA9CFA(), func_507(68));
	
		func_504(character2, &num4);
	
		if (func_1(0) || func_1(3) || func_1(2) || func_1(4))
		{
			unk_0x598D91BBD045C1F3(num4, 32, 0);
			unk_0x598D91BBD045C1F3(num4, 250, 0);
		}
		else
		{
			unk_0x598D91BBD045C1F3(num4, 32, 1);
			unk_0x598D91BBD045C1F3(num4, 250, 1);
		}
	
		if (!func_503())
			func_274();
	
		Global_97600 = false;
		return 1;
	}
	else
	{
		unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD());
		unk_0x66599E73DBA5A850(uParam0->[uParam0->f_7]);
		unk_0xC1A5EC5C986B98AD() == uParam0->[uParam0->f_7];
	}

	return 0;
}

BOOL func_503() // Position - 0x38BB5
{
	return Global_23129;
}

void func_504(eCharacter echParam0, var uParam1) // Position - 0x38BC0
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			func_505(4, *uParam1);
			func_505(7, *uParam1);
			func_505(8, *uParam1);
			func_505(11, *uParam1);
			break;
	
		case CHAR_FRANKLIN:
			if (Global_113648.f_9087.f_330[2 /*6*/])
				func_505(4, *uParam1);
		
			func_505(7, *uParam1);
			func_505(8, *uParam1);
			func_505(11, *uParam1);
		
			if (Global_113648.f_9087.f_99.f_58[126])
				func_505(12, *uParam1);
			break;
	
		case CHAR_TREVOR:
			if (Global_113648.f_9087.f_330[20 /*6*/])
				func_505(4, *uParam1);
		
			func_505(7, *uParam1);
			func_505(8, *uParam1);
			func_505(11, *uParam1);
			break;
	}

	return;
}

void func_505(int iParam0, int iParam1) // Position - 0x38C8C
{
	int i;
	int num;
	BOOL flag;

	if (!unk_0x7DE17ACDD8BA2642(iParam1))
		return;

	if (func_506(iParam0, iParam1))
		return;

	if (Global_41953[iParam0 /*31*/].f_24 < 5)
	{
		Global_41953[iParam0 /*31*/].f_25[Global_41953[iParam0 /*31*/].f_24] = iParam1;
		Global_41953[iParam0 /*31*/].f_24 = Global_41953[iParam0 /*31*/].f_24 + 1;
	}
	else
	{
		flag = false;
	
		for (i = 0; i < 5; i = i + 1)
		{
			num = Global_41953[iParam0 /*31*/].f_25[i];
		
			if (!unk_0x7DE17ACDD8BA2642(num) || unk_0x66599E73DBA5A850(num))
			{
				Global_41953[iParam0 /*31*/].f_25[i] = iParam1;
				flag = true;
				i = 6;
			}
		}
	
		!flag;
	}

	return;
}

BOOL func_506(int iParam0, int iParam1) // Position - 0x38D3E
{
	int i;

	for (i = 0; i < Global_41953[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (iParam1 == Global_41953[iParam0 /*31*/].f_25[i])
			return true;
	}

	return false;
}

BOOL func_507(int iParam0) // Position - 0x38D77
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_508(int iParam0) // Position - 0x38DA4
{
	if (iParam0 == 10)
		return;

	switch (iParam0)
	{
		case 0:
			unk_0xECDAB41968FF21A8(&Global_38617[38 / 32], 38 % 32);
			func_509(CHAR_ORTEGA, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[41 / 32], 41 % 32);
			func_509(CHAR_PEGASUS_DELIVERY, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[43 / 32], 43 % 32);
			func_509(CHAR_TANISHA, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[42 / 32], 42 % 32);
			func_509(CHAR_LIFEINVADER, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[44 / 32], 44 % 32);
			func_509(CHAR_DENISE, 0);
			break;
	
		case 1:
			unk_0xECDAB41968FF21A8(&Global_38617[51 / 32], 51 % 32);
			func_509(CHAR_CRIS, 0);
			break;
	
		case 2:
			unk_0xECDAB41968FF21A8(&Global_38617[51 / 32], 51 % 32);
			func_509(CHAR_CRIS, 0);
			break;
	
		case 3:
			unk_0xECDAB41968FF21A8(&Global_38617[53 / 32], 53 % 32);
			func_509(CHAR_HAO, 0);
			break;
	
		case 4:
			unk_0xECDAB41968FF21A8(&Global_38617[81 / 32], 81 % 32);
			func_509(CHAR_CARSITE3, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[82 / 32], 82 % 32);
			func_509(_CHAR_GANGAPP_SECUROSERV, 0);
			break;
	
		case 5:
			unk_0xECDAB41968FF21A8(&Global_38617[47 / 32], 47 % 32);
			func_509(CHAR_CHEF, 0);
			unk_0xECDAB41968FF21A8(&Global_38617[50 / 32], 50 % 32);
			func_509(CHAR_BEVERLY, 0);
			break;
	
		case 6:
			unk_0xECDAB41968FF21A8(&Global_38617[50 / 32], 50 % 32);
			func_509(CHAR_BEVERLY, 0);
			break;
	}

	return;
}

void func_509(eCharacter echParam0, int iParam1) // Position - 0x38F34
{
	int num;

	if (echParam0 != 226)
	{
		if (Global_78558)
			num = Global_42791[echParam0];
		else
			num = Global_113648.f_7263[echParam0];
	
		if (num != iParam1 || IS_BIT_SET(Global_38617[echParam0 / 32], echParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				unk_0xECDAB41968FF21A8(&Global_38626[echParam0 / 32], echParam0 % 32);
				Global_39089[echParam0] = iParam1;
			}
			else if (Global_78558)
			{
				Global_42791[echParam0] = iParam1;
			}
			else
			{
				Global_113648.f_7263[echParam0] = iParam1;
			}
		
			unk_0xECDAB41968FF21A8(&Global_38617[echParam0 / 32], echParam0 % 32);
			func_511(echParam0);
		
			if (IS_BIT_SET(Global_38617[echParam0 / 32], echParam0 % 32))
				func_510(echParam0);
		}
	}

	return;
}

void func_510(eCharacter echParam0) // Position - 0x39021
{
	if (!IS_BIT_SET(Global_39560.f_228[echParam0 / 32], echParam0 % 23))
	{
		unk_0xECDAB41968FF21A8(&Global_39560.f_228[echParam0 / 32], echParam0 % 23);
		Global_39560[Global_39560.f_227] = echParam0;
		Global_39560.f_227 = Global_39560.f_227 + 1;
	}

	return;
}

void func_511(eCharacter echParam0) // Position - 0x3906C
{
	var unk;
	BOOL flag;
	BOOL flag2;
	int num;
	float num2;
	int num3;
	int num4;
	BOOL flag3;
	int num5;
	int num6;

	if (!func_520())
		return;

	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		return;

	unk = { func_519(echParam0) };

	if (IS_BIT_SET(unk.f_4, 2))
		func_516(echParam0, &unk);

	if (!unk_0xB2FB1E59B6F71D15(unk.f_5))
		if (unk_0x2FECE8D166B3056B())
			return;

	flag = false;
	flag2 = false;
	num2 = unk_0x2E496FE654DA4166(unk, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1);

	if (IS_BIT_SET(Global_38626[echParam0 / 32], echParam0 % 32) && Global_39089[echParam0] == 2 && num2 > 210f)
	{
		unk_0x061B1200C95204CB(&Global_38626[echParam0 / 32], echParam0 % 32);
		Global_38635[echParam0] = 0;
	}

	if (unk_0x24B651D85CCE5EB4(joaat("startup_positioning")) == 0)
	{
		if (IS_BIT_SET(Global_38862[echParam0 / 32], echParam0 % 32))
		{
			if (num2 < 25f)
			{
				if (Global_100733.f_385 == 0)
					if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
						Global_100733.f_385 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
			
				num3 = Global_100733.f_385;
				num4 = unk_0x9CE0235348AE4A4D(unk);
			
				if (num3 == num4 && num3 != 0)
				{
					unk_0xECDAB41968FF21A8(&Global_38626[echParam0 / 32], echParam0 % 32);
					Global_39089[echParam0] = 3;
					unk_0xECDAB41968FF21A8(&Global_38617[echParam0 / 32], echParam0 % 32);
				}
			}
		
			unk_0x061B1200C95204CB(&Global_38862[echParam0 / 32], echParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_38626[echParam0 / 32], echParam0 % 32))
	{
		num = Global_39089[echParam0];
	}
	else if (IS_BIT_SET(unk.f_4, 0))
	{
		if (Global_113648.f_9087)
			num = func_513(echParam0);
		else
			num = 0;
	
		if (func_1(14))
			num = 0;
	}
	else if (IS_BIT_SET(unk.f_4, 1) && unk_0x24B651D85CCE5EB4(joaat("ambient_solomon")) == 0)
	{
		if (func_512())
			num = 0;
		else
			num = 1;
	}
	else
	{
		num = Global_113648.f_7263[echParam0];
	}

	if (Global_39316[echParam0] != num)
		flag = true;

	if (IS_BIT_SET(Global_38617[echParam0 / 32], echParam0 % 32))
		if (!IS_BIT_SET(Global_38626[echParam0 / 32], echParam0 % 32) || Global_38635[echParam0] == 0 && Global_39089[echParam0] != 2)
			flag = true;

	if (flag)
	{
		if (!Global_38616)
		{
		}
		else
		{
			if (!unk_0xB2FB1E59B6F71D15(unk.f_5))
				unk_0xC6DABC9B8ADA3309(unk.f_5, unk.f_3, unk, 0, 0, 0);
		
			switch (num)
			{
				case 1:
					if (IS_BIT_SET(unk.f_4, 3))
					{
						flag3 = true;
					}
					else if (num2 > 3f || unk_0x2655A8EC638E4FD1(unk_0xB29CD3C1E93A99E2(unk.f_5)) <= 0.015f)
					{
						num5 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
						num6 = unk_0x9CE0235348AE4A4D(unk);
					
						if (num5 != num6 || num5 == 0)
							flag3 = true;
					}
				
					if (flag3)
					{
						if (unk.f_6 != 0f)
							unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
					
						unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
						flag2 = true;
					}
					break;
			
				case 4:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			
				case 2:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			
				case 0:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 1);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			
				case 3:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, 0, 0, 1);
					flag2 = true;
					break;
			
				case 5:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			
				case 6:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			
				default:
					if (unk.f_6 != 0f)
						unk_0x929A198EC7E33623(unk.f_5, unk.f_6, 0, 0);
				
					unk_0x289D605FFACC399B(unk.f_5, num, 0, 1);
					flag2 = true;
					break;
			}
		}
	
		if (flag2)
		{
			unk_0x061B1200C95204CB(&Global_38617[echParam0 / 32], echParam0 % 32);
			Global_39316[echParam0] = num;
		}
	}

	if (IS_BIT_SET(Global_38626[echParam0 / 32], echParam0 % 32) && Global_39089[echParam0] != 2)
	{
		unk_0xECDAB41968FF21A8(&Global_38617[echParam0 / 32], echParam0 % 32);
		func_510(echParam0);
	
		if (Global_38635[echParam0] < 2)
			Global_38635[echParam0] = Global_38635[echParam0] + 1;
	}

	return;
}

BOOL func_512() // Position - 0x39531
{
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
		return false;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (Global_113648.f_9087.f_99.f_58[65])
				return true;
			break;
	
		case CHAR_FRANKLIN:
			if (Global_113648.f_9087.f_99.f_58[66])
				return true;
			break;
	
		case CHAR_TREVOR:
			if (Global_113648.f_9087.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_513(int iParam0) // Position - 0x395B0
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_514(iParam0))
		return 1;

	if (iParam0 == CHAR_BARRY)
	{
		if (character == CHAR_FRANKLIN)
			if (IS_BIT_SET(Global_113648.f_7231[5], 0) || IS_BIT_SET(Global_113648.f_7231[6], 0))
				return 0;
	
		if (func_31(character))
			if (IS_BIT_SET(Global_95708[5], character))
				return 0;
	}

	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (character == CHAR_MICHAEL)
				if (IS_BIT_SET(Global_113648.f_7231[0], 0))
					return 0;
		
			if (func_31(character))
				if (IS_BIT_SET(Global_95708[0], character))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_113648.f_7231[5], 0))
					return 0;
		
			if (func_31(character))
				if (IS_BIT_SET(Global_95708[5], character))
					return 0;
			break;
	
		case 50:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_113648.f_7231[6], 0))
					return 0;
		
			if (func_31(character))
				if (IS_BIT_SET(Global_95708[6], character))
					return 0;
			break;
	
		case 51:
		case 52:
			if (character == CHAR_TREVOR)
			{
				if (IS_BIT_SET(Global_113648.f_7231[2], 0))
					return 0;
			
				if (func_31(character))
					if (IS_BIT_SET(Global_95708[2], character))
						return 0;
			}
			else if (character == CHAR_MICHAEL)
			{
				if (IS_BIT_SET(Global_113648.f_7231[1], 0))
					return 0;
			
				if (func_31(character))
					if (IS_BIT_SET(Global_95708[1], character))
						return 0;
			}
			break;
	
		case 53:
			if (character == CHAR_TREVOR)
				if (IS_BIT_SET(Global_113648.f_7231[3], 0))
					return 0;
		
			if (func_31(character))
				if (IS_BIT_SET(Global_95708[3], character))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_514(eCharacter echParam0) // Position - 0x397D8
{
	int num;

	if (echParam0 == CHAR_PATRICIA || echParam0 == CHAR_BARRY || echParam0 == CHAR_DOM)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				num = unk_0x504B9BB48D41C264(func_515(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1)));
			
				switch (num)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
				}
			}
		}
	}

	return false;
}

var func_515(var uParam0) // Position - 0x39844
{
	return uParam0;
}

void func_516(int iParam0, var uParam1) // Position - 0x3984E
{
	int num;
	int num2;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	num = func_155();
	num2 = func_518(num);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_517(iParam0))
			{
				if (num2 < 19)
				{
					if (num2 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 19)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_517(iParam0))
			{
				if (num2 < 18)
				{
					if (num2 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 18)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(joaat("jewelry_heist")) == 0 && unk_0x24B651D85CCE5EB4(joaat("jewelry_setup1")) == 0 && !Global_113648.f_9087.f_99.f_58[4])
				{
					if (num2 < 21)
					{
						if (num2 >= 7)
						{
							Global_113648.f_7263[iParam0] = 0;
							unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113648.f_9087.f_99.f_58[4])
				{
					Global_113648.f_7263[iParam0] = 0;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (Global_113648.f_9087.f_99.f_58[4])
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			else if (unk_0x24B651D85CCE5EB4(joaat("jewelry_heist")) == 0 && unk_0x24B651D85CCE5EB4(joaat("jewelry_setup1")) == 0)
			{
				if (num2 >= 21)
				{
					if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else if (num2 < 7)
				{
					if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_517(iParam0))
			{
				if (num2 < 20)
				{
					if (num2 >= 9)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 20)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (num2 < 9)
			{
				if (SYSTEM::VDIST(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(joaat("assassin_valet")) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (unk_0x24B651D85CCE5EB4(joaat("assassin_valet")) > 0)
			{
				Global_113648.f_7263[iParam0] = 0;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 158:
		case 159:
			if (unk_0x24B651D85CCE5EB4(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_517(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 160:
		case 161:
			if (unk_0x24B651D85CCE5EB4(joaat("omega2")) == 0)
			{
				if (!func_517(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_517(iParam0) && unk_0x24B651D85CCE5EB4(Global_91469[26 /*34*/].f_6) == 0)
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
	
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(Global_91469[43 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 193:
			if (!func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(Global_91469[93 /*34*/].f_6) > 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 80:
			if (!func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(Global_91469[8 /*34*/].f_6) == 0 && unk_0x24B651D85CCE5EB4(Global_91469[10 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_517(iParam0))
			{
				if (unk_0x24B651D85CCE5EB4(Global_91469[47 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (unk_0x24B651D85CCE5EB4(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_517(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x24B651D85CCE5EB4(Global_91469[48 /*34*/].f_6) == 0)
			{
				if (!func_517(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 99:
		case 100:
			if (unk_0x24B651D85CCE5EB4(Global_91469[39 /*34*/].f_6) == 0)
			{
				if (!func_517(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
	
		case 216:
			if (!func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 217:
		case 218:
			if (!func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_517(iParam0))
			{
				Global_113648.f_7263[iParam0] = 0;
				unk_0x289D605FFACC399B(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	}

	return;
}

BOOL func_517(int iParam0) // Position - 0x3A1E6
{
	var unk;
	int num;

	unk = { func_519(iParam0) };
	num = unk_0x27392A4A2ADE7016(unk.f_5);
	return num == 1 || num == 4 || num == 2;
}

int func_518(int iParam0) // Position - 0x3A21A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_519(int iParam0) // Position - 0x3A22D
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 133f, -1711f, 29f };
			unk.f_5 = 1804701345;
			break;
	
		case 1:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -1287.8568f, -1115.7416f, 7.1401f };
			unk.f_5 = 1403601067;
			break;
	
		case 2:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1932.9518f, 3725.1536f, 32.9944f };
			unk.f_5 = -2031139496;
			break;
	
		case 3:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1207.8732f, -470.063f, 66.358f };
			unk.f_5 = 1796834809;
			break;
	
		case 4:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -29.8692f, -148.1571f, 57.2265f };
			unk.f_5 = 96153298;
			break;
	
		case 5:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -280.7851f, 6232.7817f, 31.8455f };
			unk.f_5 = -281080954;
			break;
	
		case 6:
			unk.f_3 = joaat("v_ilev_hd_door_l");
			unk = { -824f, -187f, 38f };
			unk = { -823.2001f, -187.0831f, 37.819f };
			unk.f_5 = 183249434;
			break;
	
		case 7:
			unk.f_3 = joaat("v_ilev_hd_door_r");
			unk = { -823f, -188f, 38f };
			unk = { -822.4442f, -188.3924f, 37.819f };
			unk.f_5 = 758345384;
			break;
	
		case 8:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 82.3186f, -1392.7518f, 29.5261f };
			unk.f_5 = -1069262641;
			break;
	
		case 9:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 82.3186f, -1390.4758f, 29.5261f };
			unk.f_5 = 1968521986;
			break;
	
		case 10:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1686.9832f, 4821.7407f, 42.2131f };
			unk.f_5 = -2143706301;
			break;
	
		case 11:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1687.2817f, 4819.4844f, 42.2131f };
			unk.f_5 = -1403421822;
			break;
	
		case 12:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 418.637f, -806.457f, 29.6396f };
			unk.f_5 = -1950137670;
			break;
	
		case 13:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 418.637f, -808.733f, 29.6396f };
			unk.f_5 = 1226259807;
			break;
	
		case 14:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -1096.6613f, 2705.4458f, 19.2578f };
			unk.f_5 = 1090833557;
			break;
	
		case 15:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1094.9652f, 2706.9636f, 19.2578f };
			unk.f_5 = 897332612;
			break;
	
		case 16:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1196.825f, 2703.221f, 38.3726f };
			unk.f_5 = 1095946640;
			break;
	
		case 17:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1199.101f, 2703.221f, 38.3726f };
			unk.f_5 = 801975945;
			break;
	
		case 18:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -818.7642f, -1079.5444f, 11.4781f };
			unk.f_5 = -167996547;
			break;
	
		case 19:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -816.7932f, -1078.4065f, 11.4781f };
			unk.f_5 = -1935818563;
			break;
	
		case 20:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -0.0564f, 6517.461f, 32.0278f };
			unk.f_5 = 1891185217;
			break;
	
		case 21:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1.7253f, 6515.9136f, 32.0278f };
			unk.f_5 = 1236591681;
			break;
	
		case 22:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -1201.4349f, -776.8566f, 17.9918f };
			unk.f_5 = 1980808685;
			break;
	
		case 23:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 617.2458f, 2751.0222f, 42.7578f };
			unk.f_5 = 1352749757;
			break;
	
		case 24:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 127.8201f, -211.8274f, 55.2275f };
			unk.f_5 = -566554453;
			break;
	
		case 25:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -3167.75f, 1055.5358f, 21.5329f };
			unk.f_5 = 1284749450;
			break;
	
		case 26:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -716.6754f, -155.42f, 37.6749f };
			unk.f_5 = 261851994;
			break;
	
		case 27:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -715.6154f, -157.2561f, 37.6749f };
			unk.f_5 = 217646625;
			break;
	
		case 28:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -157.0924f, -306.4413f, 39.994f };
			unk.f_5 = 1801139578;
			break;
	
		case 29:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -156.4022f, -304.4366f, 39.994f };
			unk.f_5 = -2123275866;
			break;
	
		case 30:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1454.7819f, -231.7927f, 50.0565f };
			unk.f_5 = 1312689981;
			break;
	
		case 31:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1456.2007f, -233.3682f, 50.0565f };
			unk.f_5 = -595055661;
			break;
	
		case 32:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 321.81f, 178.36f, 103.68f };
			unk.f_5 = -265260897;
			break;
	
		case 33:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1859.89f, 3749.79f, 33.18f };
			unk.f_5 = -1284867488;
			break;
	
		case 34:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { -289.1752f, 6199.1123f, 31.637f };
			unk.f_5 = 302307081;
			break;
	
		case 35:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -1155.4541f, -1424.0079f, 5.0461f };
			unk.f_5 = -681886015;
			break;
	
		case 36:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 1321.2856f, -1650.5967f, 52.3663f };
			unk.f_5 = -2086556500;
			break;
	
		case 37:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -3167.7888f, 1074.7668f, 20.9209f };
			unk.f_5 = -1496386696;
			break;
	
		case 38:
			unk.f_3 = joaat("v_ilev_mm_doorm_l");
			unk = { -817f, 179f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -2097039789;
			break;
	
		case 39:
			unk.f_3 = joaat("v_ilev_mm_doorm_r");
			unk = { -816f, 178f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -2127416656;
			break;
	
		case 40:
			unk.f_3 = joaat("prop_ld_garaged_01");
			unk = { -815f, 186f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -1986583853;
			unk.f_6 = 6.5f;
			break;
	
		case 41:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -797f, 177f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 776026812;
			break;
	
		case 42:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -795f, 178f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 698422331;
			break;
	
		case 43:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -793f, 181f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 535076355;
			break;
	
		case 44:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -794f, 183f, 73f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 474675599;
			break;
	
		case 45:
			unk.f_3 = joaat("prop_bh1_48_gate_1");
			unk = { -849f, 179f, 70f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -1978427516;
			break;
	
		case 46:
			unk.f_3 = joaat("v_ilev_mm_windowwc");
			unk = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -1700375831;
			break;
	
		case 47:
			unk.f_3 = joaat("v_ilev_fa_frontdoor");
			unk = { -14f, -1441f, 31f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 613961892;
			break;
	
		case 48:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { -15f, -1427f, 31f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -272570634;
			break;
	
		case 49:
			unk.f_3 = joaat("prop_sc1_21_g_door_01");
			unk = { -25.28f, -1431.06f, 30.84f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -1040675994;
			break;
	
		case 50:
			unk.f_3 = joaat("v_ilev_fh_frontdoor");
			unk = { 7.52f, 539.53f, 176.18f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = 1201219326;
			break;
	
		case 51:
			unk.f_3 = joaat("v_ilev_trevtraildr");
			unk = { 1973f, 3815f, 34f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
	
		case 52:
			unk.f_3 = joaat("prop_cs4_10_tr_gd_01");
			unk = { 1972.7874f, 3824.5537f, 32.5831f };
			unk.f_5 = 1113956670;
			unk.f_6 = 12f;
			break;
	
		case 53:
			unk.f_3 = joaat("v_ilev_trev_doorfront");
			unk = { -1150f, -1521f, 11f };
			unk_0xECDAB41968FF21A8(&(unk.f_4), 0);
			unk.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -1145.9f, -1991.14f, 14.18f };
			unk.f_5 = -1871080926;
			unk.f_6 = 25f;
			break;
	
		case 55:
			unk.f_3 = joaat("prop_id2_11_gdoor");
			unk = { 723.12f, -1088.83f, 23.28f };
			unk.f_5 = 1168079979;
			unk.f_6 = 25f;
			break;
	
		case 56:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -356.09f, -134.77f, 40.01f };
			unk.f_5 = 1206354175;
			unk.f_6 = 25f;
			break;
	
		case 57:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 108.8502f, 6617.8765f, 32.673f };
			unk.f_5 = -1038180727;
			unk.f_6 = 25f;
			break;
	
		case 58:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 114.3206f, 6623.226f, 32.7161f };
			unk.f_5 = 1200466273;
			unk.f_6 = 25f;
			break;
	
		case 59:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1182.3054f, 2645.2422f, 38.807f };
			unk.f_5 = 1391004277;
			unk.f_6 = 25f;
			break;
	
		case 60:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1174.6542f, 2645.2422f, 38.6826f };
			unk.f_5 = -459199009;
			unk.f_6 = 25f;
			break;
	
		case 225:
			unk.f_3 = joaat("lr_prop_supermod_door_01");
			unk = { -205.7007f, -1310.6917f, 30.2957f };
			unk.f_5 = -288764223;
			unk.f_6 = 25f;
			break;
	
		case 61:
			unk.f_3 = joaat("v_ilev_janitor_frontdoor");
			unk = { -107.5401f, -9.0258f, 70.6696f };
			unk.f_5 = -252283844;
			break;
	
		case 62:
			unk.f_3 = joaat("v_ilev_ss_door8");
			unk = { 717f, -975f, 25f };
			unk.f_5 = -826072862;
			break;
	
		case 63:
			unk.f_3 = joaat("v_ilev_ss_door7");
			unk = { 719f, -975f, 25f };
			unk.f_5 = 763780711;
			break;
	
		case 64:
			unk.f_3 = joaat("v_ilev_ss_door02");
			unk = { 709.9813f, -963.5311f, 30.5453f };
			unk.f_5 = -874851305;
			break;
	
		case 65:
			unk.f_3 = joaat("v_ilev_ss_door03");
			unk = { 709.9894f, -960.6675f, 30.5453f };
			unk.f_5 = -1480820165;
			break;
	
		case 66:
			unk.f_3 = joaat("v_ilev_store_door");
			unk = { 707.8046f, -962.4564f, 30.5453f };
			unk.f_5 = 949391213;
			break;
	
		case 67:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1393f, 3599f, 35f };
			unk.f_5 = 212192855;
			break;
	
		case 68:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1395f, 3600f, 35f };
			unk.f_5 = -126474752;
			break;
	
		case 69:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1387f, 3614f, 39f };
			unk.f_5 = 1765671336;
			break;
	
		case 70:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1083.5471f, -1975.4354f, 31.6222f };
			unk.f_5 = 792295685;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 71:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1065.237f, -2006.0791f, 32.2329f };
			unk.f_5 = 563273144;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 72:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1085.3069f, -2018.5613f, 41.6289f };
			unk.f_5 = -726993043;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 73:
			unk.f_3 = joaat("v_ilev_bank4door02");
			unk = { -111f, 6464f, 32f };
			unk.f_5 = 178228075;
			break;
	
		case 74:
			unk.f_3 = joaat("v_ilev_bank4door01");
			unk = { -110f, 6462f, 32f };
			unk.f_5 = 1852297978;
			break;
	
		case 75:
			unk.f_3 = joaat("v_ilev_lester_doorfront");
			unk = { 1274f, -1721f, 55f };
			unk.f_5 = -565026078;
			break;
	
		case 76:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1271.89f, -1707.57f, 53.79f };
			unk.f_5 = 1646172266;
			break;
	
		case 77:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1270.77f, -1708.1f, 53.75f };
			unk.f_5 = 204467342;
			break;
	
		case 78:
			unk.f_3 = joaat("v_ilev_deviantfrontdoor");
			unk = { -127.5f, -1456.18f, 37.94f };
			unk.f_5 = 2047070410;
			break;
	
		case 79:
			unk.f_3 = joaat("prop_com_gar_door_01");
			unk = { 483.56f, -1316.08f, 32.18f };
			unk.f_5 = 1417775309;
			break;
	
		case 80:
			unk.f_3 = joaat("v_ilev_cs_door");
			unk = { 483f, -1312f, 29f };
			unk.f_5 = -106474626;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 81:
			unk.f_3 = joaat("prop_strip_door_01");
			unk = { 128f, -1299f, 29f };
			unk.f_5 = 1840510598;
			break;
	
		case 82:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 96f, -1285f, 29f };
			unk.f_5 = 1382825971;
			break;
	
		case 83:
			unk.f_3 = joaat("prop_motel_door_09");
			unk = { 549f, -1773f, 34f };
			unk.f_5 = 232536303;
			break;
	
		case 84:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 974f, -1839f, 36f };
			unk.f_5 = 1267246609;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 3);
			break;
	
		case 85:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 977f, -105f, 75f };
			unk.f_5 = -1900237971;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 3);
			break;
	
		case 86:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1391f, 1163f, 114f };
			unk.f_5 = 2077901353;
			break;
	
		case 87:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1391f, 1161f, 114f };
			unk.f_5 = -2102079126;
			break;
	
		case 88:
			unk.f_3 = joaat("prop_cs6_03_door_l");
			unk = { 1396f, 1143f, 115f };
			unk.f_5 = -1905793212;
			break;
	
		case 89:
			unk.f_3 = joaat("prop_cs6_03_door_r");
			unk = { 1396f, 1141f, 115f };
			unk.f_5 = -1797032505;
			break;
	
		case 90:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1409f, 1146f, 114f };
			unk.f_5 = -62235167;
			break;
	
		case 91:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1409f, 1148f, 114f };
			unk.f_5 = -1727188163;
			break;
	
		case 92:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1408f, 1159f, 114f };
			unk.f_5 = -562748873;
			break;
	
		case 93:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1408f, 1161f, 114f };
			unk.f_5 = 1976429759;
			break;
	
		case 94:
			unk.f_3 = joaat("prop_gar_door_01");
			unk = { -1067f, -1666f, 5f };
			unk.f_5 = 1341041543;
			break;
	
		case 95:
			unk.f_3 = joaat("prop_gar_door_02");
			unk = { -1065f, -1669f, 5f };
			unk.f_5 = -1631467220;
			break;
	
		case 96:
			unk.f_3 = joaat("prop_map_door_01");
			unk = { -1104.66f, -1638.48f, 4.68f };
			unk.f_5 = -1788473129;
			break;
	
		case 97:
			unk.f_3 = joaat("v_ilev_fib_door1");
			unk = { -31.72f, -1101.85f, 26.57f };
			unk.f_5 = -1831288286;
			break;
	
		case 98:
			unk.f_3 = joaat("v_ilev_tort_door");
			unk = { 134.4f, -2204.1f, 7.52f };
			unk.f_5 = 963876966;
			break;
	
		case 99:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3628f, 3747f, 28f };
			unk.f_5 = 1773088812;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 100:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3621f, 3752f, 28f };
			unk.f_5 = -1332101528;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 101:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -608.73f, -1610.32f, 27.16f };
			unk.f_5 = -1811763714;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 102:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -611.32f, -1610.09f, 27.16f };
			unk.f_5 = 1608500665;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 103:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -592.94f, -1631.58f, 27.16f };
			unk.f_5 = -1456048340;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 104:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -592.71f, -1628.99f, 27.16f };
			unk.f_5 = 943854909;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 105:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1991f, 3053f, 47f };
			unk.f_5 = -89065356;
			break;
	
		case 106:
			unk.f_3 = joaat("v_ilev_fh_door4");
			unk = { 1988.3529f, 3054.411f, 47.3204f };
			unk.f_5 = -925491840;
			break;
	
		case 107:
			unk.f_3 = joaat("prop_epsilon_door_l");
			unk = { -700.17f, 47.31f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 108:
			unk.f_3 = joaat("prop_epsilon_door_r");
			unk = { -697.94f, 48.35f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 109:
			unk.f_3 = joaat("v_ilev_epsstoredoor");
			unk = { 241.3574f, 361.0488f, 105.8963f };
			unk.f_5 = 1538555582;
			break;
	
		case 110:
			unk.f_3 = joaat("prop_ch2_09c_garage_door");
			unk = { -689.11f, 506.97f, 110.64f };
			unk.f_5 = -961994186;
			break;
	
		case 111:
			unk.f_3 = joaat("v_ilev_door_orangesolid");
			unk = { -1055.96f, -236.43f, 44.17f };
			unk.f_5 = -1772472848;
			break;
	
		case 112:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 29f, 3661f, 41f };
			unk.f_5 = -46374650;
			break;
	
		case 113:
			unk.f_3 = joaat("prop_cs4_05_tdoor");
			unk = { 32f, 3667f, 41f };
			unk.f_5 = -358302761;
			break;
	
		case 114:
			unk.f_3 = joaat("v_ilev_housedoor1");
			unk = { 87f, -1959f, 21f };
			unk.f_5 = -1237936041;
			break;
	
		case 115:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { 0f, -1823f, 30f };
			unk.f_5 = 1487374207;
			break;
	
		case 116:
			unk.f_3 = joaat("p_cut_door_03");
			unk = { 23.34f, -1897.6f, 23.05f };
			unk.f_5 = -199126299;
			break;
	
		case 117:
			unk.f_3 = joaat("p_cut_door_02");
			unk = { 524.2f, 3081.14f, 41.16f };
			unk.f_5 = -897071863;
			break;
	
		case 118:
			unk.f_3 = joaat("v_ilev_po_door");
			unk = { -1910.58f, -576.01f, 19.25f };
			unk.f_5 = -864465775;
			break;
	
		case 119:
			unk.f_3 = joaat("prop_ss1_10_door_l");
			unk = { -720.39f, 256.86f, 80.29f };
			unk.f_5 = -208439480;
			break;
	
		case 120:
			unk.f_3 = joaat("prop_ss1_10_door_r");
			unk = { -718.42f, 257.79f, 80.29f };
			unk.f_5 = -1001088805;
			break;
	
		case 121:
			unk.f_3 = joaat("v_ilev_fibl_door02");
			unk = { 106.38f, -742.7f, 46.18f };
			unk.f_5 = 756894459;
			break;
	
		case 122:
			unk.f_3 = joaat("v_ilev_fibl_door01");
			unk = { 105.76f, -746.65f, 46.18f };
			unk.f_5 = 476981677;
			break;
	
		case 123:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2343.53f, 3265.37f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 124:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2342.23f, 3267.62f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 125:
			unk.f_3 = joaat("ap1_02_door_l");
			unk = { -1041.9326f, -2748.1675f, 22.0308f };
			unk.f_5 = 169965357;
			break;
	
		case 126:
			unk.f_3 = joaat("ap1_02_door_r");
			unk = { -1044.8408f, -2746.4888f, 22.0308f };
			unk.f_5 = 311232516;
			break;
	
		case 128:
			unk.f_3 = joaat("v_ilev_fb_doorshortl");
			unk = { -1045.1199f, -232.004f, 39.4379f };
			unk.f_5 = -1563127729;
			break;
	
		case 129:
			unk.f_3 = joaat("v_ilev_fb_doorshortr");
			unk = { -1046.5161f, -229.3581f, 39.4379f };
			unk.f_5 = 759145763;
			break;
	
		case 130:
			unk.f_3 = joaat("v_ilev_fb_door01");
			unk = { -1083.6201f, -260.4167f, 38.1867f };
			unk.f_5 = -84399179;
			break;
	
		case 131:
			unk.f_3 = joaat("v_ilev_fb_door02");
			unk = { -1080.9744f, -259.0204f, 38.1867f };
			unk.f_5 = -461898059;
			break;
	
		case 127:
			unk.f_3 = joaat("v_ilev_gtdoor");
			unk = { -1042.57f, -240.6f, 38.11f };
			unk.f_5 = 1259065971;
			break;
	
		case 132:
			unk.f_3 = joaat("prop_damdoor_01");
			unk = { 1385.2578f, -2079.9495f, 52.7638f };
			unk.f_5 = -884051216;
			break;
	
		case 133:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 1656.57f, 4849.66f, 42.35f };
			unk.f_5 = 243782214;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 134:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 1656.25f, 4852.24f, 42.35f };
			unk.f_5 = 714115627;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 135:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1051.4019f, -474.6847f, 36.6199f };
			unk.f_5 = 1668106976;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 1);
			break;
	
		case 136:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1049.2853f, -476.6376f, 36.7584f };
			unk.f_5 = 1382347031;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 1);
			break;
	
		case 137:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1210.9567f, -580.8765f, 27.2373f };
			unk.f_5 = -966790948;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 1);
			break;
	
		case 138:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1212.4453f, -578.4401f, 27.2373f };
			unk.f_5 = -2068750132;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 1);
			break;
	
		case 139:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -565.1712f, 276.6259f, 83.2863f };
			unk.f_5 = -1716533184;
			break;
	
		case 140:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -561.2863f, 293.5043f, 87.7771f };
			unk.f_5 = 2146505927;
			break;
	
		case 141:
			unk.f_3 = joaat("p_jewel_door_l");
			unk = { -631.96f, -236.33f, 38.21f };
			unk.f_5 = 1874948872;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 142:
			unk.f_3 = joaat("p_jewel_door_r1");
			unk = { -630.43f, -238.44f, 38.21f };
			unk.f_5 = -1965020851;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 145:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 231.62f, 216.23f, 106.4f };
			unk.f_5 = 1951546856;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 146:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 232.72f, 213.88f, 106.4f };
			unk.f_5 = -431382051;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 143:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 258.32f, 203.84f, 106.43f };
			unk.f_5 = -293975210;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 144:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 260.76f, 202.95f, 106.43f };
			unk.f_5 = -785215289;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 148:
			unk.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			unk = { 256.31f, 220.66f, 106.43f };
			unk.f_5 = -366143778;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 147:
			unk.f_3 = joaat("v_ilev_bk_door");
			unk = { 266.36f, 217.57f, 110.43f };
			unk.f_5 = 440819155;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 149:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -442.66f, 6015.2217f, 31.8663f };
			unk.f_5 = -588495243;
			break;
	
		case 150:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -444.4985f, 6017.06f, 31.8663f };
			unk.f_5 = 1815504139;
			break;
	
		case 151:
			unk.f_3 = joaat("v_ilev_shrfdoor");
			unk = { 1855.6848f, 3683.9302f, 34.5928f };
			unk.f_5 = 1344911780;
			break;
	
		case 152:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1223.35f, -172.41f, 39.98f };
			unk.f_5 = -320891223;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 153:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1220.93f, -173.68f, 39.98f };
			unk.f_5 = 1511747875;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 154:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1211.99f, -190.57f, 39.98f };
			unk.f_5 = -1517722103;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 155:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1213.26f, -192.98f, 39.98f };
			unk.f_5 = -1093199712;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 156:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1217.77f, -201.54f, 39.98f };
			unk.f_5 = 1902048492;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 157:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1219.04f, -203.95f, 39.98f };
			unk.f_5 = -444768985;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 158:
			unk.f_3 = joaat("prop_ch3_04_door_01l");
			unk = { 2514.32f, -317.34f, 93.32f };
			unk.f_5 = 404057594;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 159:
			unk.f_3 = joaat("prop_ch3_04_door_01r");
			unk = { 2512.42f, -319.26f, 93.32f };
			unk.f_5 = -1417472813;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 160:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			unk = { 2333.23f, 2574.97f, 47.03f };
			unk.f_5 = -1376084479;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 161:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			unk = { 2329.65f, 2576.64f, 47.03f };
			unk.f_5 = 457472151;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 162:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 16.1279f, -1114.6055f, 29.9469f };
			unk.f_5 = 1071759151;
			break;
	
		case 163:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 18.572f, -1115.4951f, 29.9469f };
			unk.f_5 = -2119023917;
			break;
	
		case 165:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 1698.1763f, 3751.5056f, 34.8553f };
			unk.f_5 = -1488490473;
			break;
	
		case 166:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 1699.9371f, 3753.4202f, 34.8553f };
			unk.f_5 = -511187813;
			break;
	
		case 167:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 244.7274f, -44.0791f, 70.91f };
			unk.f_5 = -248569395;
			break;
	
		case 168:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 243.8379f, -46.5232f, 70.91f };
			unk.f_5 = 989443413;
			break;
	
		case 169:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 845.3624f, -1024.5391f, 28.3448f };
			unk.f_5 = 2022251829;
			break;
	
		case 170:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 842.7684f, -1024.5391f, 23.3448f };
			unk.f_5 = 649820567;
			break;
	
		case 171:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -326.1122f, 6075.2695f, 31.6047f };
			unk.f_5 = 537455378;
			break;
	
		case 172:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -324.273f, 6077.109f, 31.6047f };
			unk.f_5 = 1121431731;
			break;
	
		case 173:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -665.2424f, -944.3256f, 21.9792f };
			unk.f_5 = -1437380438;
			break;
	
		case 174:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -662.6414f, -944.3256f, 21.9792f };
			unk.f_5 = -946336965;
			break;
	
		case 175:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1313.8259f, -389.1259f, 36.8457f };
			unk.f_5 = 1893144650;
			break;
	
		case 176:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1314.465f, -391.6472f, 36.8457f };
			unk.f_5 = 435841678;
			break;
	
		case 177:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1114.0089f, 2689.77f, 18.7041f };
			unk.f_5 = 948508314;
			break;
	
		case 178:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1112.0708f, 2691.5046f, 18.7041f };
			unk.f_5 = -1796714665;
			break;
	
		case 179:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -3164.8452f, 1081.3917f, 20.9887f };
			unk.f_5 = -1155247245;
			break;
	
		case 180:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -3163.8115f, 1083.7784f, 20.9887f };
			unk.f_5 = 782482084;
			break;
	
		case 181:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 2570.9045f, 303.3556f, 108.8848f };
			unk.f_5 = -1194470801;
			break;
	
		case 182:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 2568.3037f, 303.3556f, 108.8848f };
			unk.f_5 = -2129698061;
			break;
	
		case 183:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 813.1779f, -2148.2695f, 29.7689f };
			unk.f_5 = 1071759151;
			break;
	
		case 184:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 810.5769f, -2148.2695f, 29.7689f };
			unk.f_5 = -2119023917;
			break;
	
		case 164:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 6.8179f, -1098.2095f, 29.9469f };
			unk.f_5 = 1487704245;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 3);
			break;
	
		case 185:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 827.5342f, -2160.4927f, 29.7688f };
			unk.f_5 = 1529812051;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 3);
			break;
	
		case 186:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1107.01f, 289.38f, 64.76f };
			unk.f_5 = 904342475;
			break;
	
		case 187:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1101.62f, 290.36f, 64.76f };
			unk.f_5 = -795418380;
			break;
	
		case 188:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1138.64f, 300.82f, 67.18f };
			unk.f_5 = -1502457334;
			break;
	
		case 189:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1137.05f, 295.59f, 67.18f };
			unk.f_5 = -1994188940;
			break;
	
		case 190:
			unk.f_3 = joaat("v_ilev_bl_doorel_l");
			unk = { -2053.16f, 3239.49f, 30.5f };
			unk.f_5 = -621770121;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 191:
			unk.f_3 = joaat("v_ilev_bl_doorel_r");
			unk = { -2054.39f, 3237.23f, 30.5f };
			unk.f_5 = 1018580481;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 192:
			unk.f_3 = joaat("v_ilev_cbankcountdoor01");
			unk = { -108.91f, 6469.11f, 31.91f };
			unk.f_5 = 421926217;
			break;
	
		case 193:
			unk.f_3 = joaat("prop_fnclink_03gate5");
			unk = { -182.91f, 6168.37f, 32.14f };
			unk.f_5 = -1331552374;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -59.89f, -1092.95f, 26.88f };
			unk.f_5 = -293141277;
			break;
	
		case 197:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -60.55f, -1094.75f, 26.89f };
			unk.f_5 = 506750037;
			break;
	
		case 194:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -39.13f, -1108.22f, 26.72f };
			unk.f_5 = 1496005418;
			break;
	
		case 195:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -37.33f, -1108.87f, 26.72f };
			unk.f_5 = -1863079210;
			break;
	
		case 198:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1943.73f, 3803.63f, 32.31f };
			unk.f_5 = -2018911784;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 199:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 316.39f, -276.49f, 54.52f };
			unk.f_5 = -93934272;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 200:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 313.96f, -275.6f, 54.52f };
			unk.f_5 = 667682830;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 201:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -2965.71f, 484.22f, 16.05f };
			unk.f_5 = 1876735830;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 202:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -2965.82f, 481.63f, 16.05f };
			unk.f_5 = -2112857171;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 205:
			unk.f_3 = joaat("v_ilev_abbmaindoor");
			unk = { 962.1f, -2183.83f, 31.06f };
			unk.f_5 = 2046930518;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 206:
			unk.f_3 = joaat("v_ilev_abbmaindoor2");
			unk = { 961.79f, -2187.08f, 31.06f };
			unk.f_5 = 1208502884;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 207:
			unk.f_3 = joaat("prop_ch3_04_door_02");
			unk = { 2508.43f, -336.63f, 115.76f };
			unk.f_5 = 1986432421;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 208:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2255.19f, 322.26f, 184.93f };
			unk.f_5 = -722798986;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 209:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2254.06f, 319.7f, 184.93f };
			unk.f_5 = 204301578;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 210:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2301.13f, 336.91f, 184.93f };
			unk.f_5 = -320140460;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 211:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2298.57f, 338.05f, 184.93f };
			unk.f_5 = 65222916;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 212:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2222.32f, 305.86f, 184.93f };
			unk.f_5 = -920027322;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 213:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2221.19f, 303.3f, 184.93f };
			unk.f_5 = -58432001;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 214:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2280.6f, 265.43f, 184.93f };
			unk.f_5 = -2007378629;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 215:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2278.04f, 266.57f, 184.93f };
			unk.f_5 = 418772613;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 216:
			unk.f_3 = joaat("prop_gar_door_04");
			unk = { 778.31f, -1867.49f, 30.66f };
			unk.f_5 = 1679064921;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 217:
			unk.f_3 = joaat("prop_gate_tep_01_l");
			unk = { -721.35f, 91.01f, 56.68f };
			unk.f_5 = 412198396;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 218:
			unk.f_3 = joaat("prop_gate_tep_01_r");
			unk = { -728.84f, 88.64f, 56.68f };
			unk.f_5 = -1053755588;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 219:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2287.62f, 363.9f, 174.93f };
			unk.f_5 = -53446139;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 220:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2289.78f, 362.91f, 174.93f };
			unk.f_5 = 1333960556;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 221:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2289.86f, 362.88f, 174.93f };
			unk.f_5 = -41786493;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 222:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2292.01f, 361.89f, 174.93f };
			unk.f_5 = 1750120734;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 223:
			unk.f_3 = joaat("prop_fnclink_07gate1");
			unk = { 1803.94f, 3929.01f, 33.72f };
			unk.f_5 = 1661506222;
			break;
	
		case 203:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -348.81f, -47.26f, 49.39f };
			unk.f_5 = -2116116146;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 204:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -351.26f, -46.41f, 49.39f };
			unk.f_5 = -74083138;
			unk_0xECDAB41968FF21A8(&(unk.f_4), 2);
			break;
	
		case 224:
			unk.f_3 = joaat("prop_abat_slide");
			unk = { 962.9084f, -2105.8137f, 34.6432f };
			unk.f_5 = -1670085357;
			break;
	}

	return unk;
}

BOOL func_520() // Position - 0x3CE38
{
	if (func_132() == -1 || func_132() == 999 && !func_521() == 0)
		return true;

	return false;
}

int func_521() // Position - 0x3CE68
{
	return Global_32164;
}

int func_522(var uParam0, var uParam1, var uParam2, eCharacter echParam3, int iParam4) // Position - 0x3CE73
{
	int i;
	float num;
	float num2;
	int num3;

	num2 = 1000000f;
	num3 = 10;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (Global_95719[i /*10*/].f_7 != 263)
		{
			if (Global_95719[i /*10*/].f_9 == echParam3 || echParam3 == _CHAR_NULL)
			{
				if (func_523(i) || iParam4 == 0)
				{
					num = unk_0x2E496FE654DA4166(uParam0, Global_95719[i /*10*/].f_3, 1);
				
					if (num < num2)
					{
						num2 = num;
						num3 = i;
					}
				}
			}
		}
	}

	return num3;
}

BOOL func_523(int iParam0) // Position - 0x3CF02
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

void func_524(eCharacter echParam0) // Position - 0x3CF17
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		func_525(echParam0, i);
	}

	return;
}

void func_525(eCharacter echParam0, int iParam1) // Position - 0x3CF3A
{
	int value;
	float num;
	var unk;
	eMPStat stat;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_526(echParam0, iParam1, &unk, &stat);

	if (unk_0xA26A9A07F761D8F8())
		value = _MPCHAR_STAT_GET_INT(stat, -1, 0);
	else
		unk_0xDD7756E2742E0F6D(unk, &value, -1);

	switch (iParam1)
	{
		case 2:
			num = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(value) / 100f));
			unk_0xA2F7F7E359BF6D39(unk_0x93E99A2DBCBA9CFA(), num, 1);
			break;
	
		case 7:
			if (unk_0x24B651D85CCE5EB4(joaat("armenian3")) != 0 || unk_0x24B651D85CCE5EB4(joaat("trevor3")) != 0)
			{
				Global_97964 = 1;
			}
			else
			{
				num = 1f - (SYSTEM::TO_FLOAT(value) / 100f);
				unk_0x9C9A8F1744F5B791(unk_0x93E99A2DBCBA9CFA(), num);
				unk_0x741A585D395A72D5(unk_0x93E99A2DBCBA9CFA(), num);
				unk_0xE1A1CAB4D62AF0B7(unk_0x93E99A2DBCBA9CFA(), num);
			}
			break;
	}

	return;
}

void func_526(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x3D027
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

void func_527() // Position - 0x3D27E
{
	var unk;

	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) || !func_31(_GET_CURRENT_PLAYER_CHARACTER()) || !func_529())
		return;

	unk = 12;
	unk.f_13 = 12;
	unk.f_26 = 12;
	unk.f_39 = 9;
	unk.f_49 = 9;
	func_109(unk_0xC1A5EC5C986B98AD(), &unk, 1, -1);
	func_528(1306, unk[0], -1);
	func_528(1307, unk[1], -1);
	func_528(1308, unk[2], -1);
	func_528(1309, unk[3], -1);
	func_528(1310, unk[4], -1);
	func_528(1311, unk[5], -1);
	func_528(1312, unk[6], -1);
	func_528(1313, unk[7], -1);
	func_528(1314, unk[8], -1);
	func_528(1315, unk[9], -1);
	func_528(1316, unk[10], -1);
	func_528(1317, unk[11], -1);
	func_528(1318, unk.f_13[0], -1);
	func_528(1319, unk.f_13[1], -1);
	func_528(1320, unk.f_13[2], -1);
	func_528(1321, unk.f_13[3], -1);
	func_528(1322, unk.f_13[4], -1);
	func_528(1323, unk.f_13[5], -1);
	func_528(1324, unk.f_13[6], -1);
	func_528(1325, unk.f_13[7], -1);
	func_528(1326, unk.f_13[8], -1);
	func_528(1327, unk.f_13[9], -1);
	func_528(1328, unk.f_13[10], -1);
	func_528(1329, unk.f_13[11], -1);
	func_528(1330, unk.f_26[0], -1);
	func_528(1331, unk.f_26[1], -1);
	func_528(1332, unk.f_26[2], -1);
	func_528(1333, unk.f_26[3], -1);
	func_528(1334, unk.f_26[4], -1);
	func_528(1335, unk.f_26[5], -1);
	func_528(1336, unk.f_26[6], -1);
	func_528(1337, unk.f_26[7], -1);
	func_528(1338, unk.f_26[8], -1);
	func_528(1339, unk.f_26[9], -1);
	func_528(1340, unk.f_26[10], -1);
	func_528(1341, unk.f_26[11], -1);
	func_528(1342, unk.f_39[0], -1);
	func_528(1343, unk.f_39[1], -1);
	func_528(1344, unk.f_39[2], -1);
	func_528(1345, unk.f_39[3], -1);
	func_528(1346, unk.f_39[4], -1);
	func_528(1347, unk.f_39[5], -1);
	func_528(1348, unk.f_39[6], -1);
	func_528(1349, unk.f_39[7], -1);
	func_528(1350, unk.f_39[8], -1);
	func_528(1351, unk.f_49[0], -1);
	func_528(1352, unk.f_49[1], -1);
	func_528(1353, unk.f_49[2], -1);
	func_528(1354, unk.f_49[3], -1);
	func_528(1355, unk.f_49[4], -1);
	func_528(1356, unk.f_49[5], -1);
	func_528(1357, unk.f_49[6], -1);
	func_528(1358, unk.f_49[7], -1);
	func_528(1359, unk.f_49[8], -1);
	func_528(1360, _GET_CURRENT_PLAYER_CHARACTER(), -1);
	unk_0xD19BD90E0B76FB05(joaat("CLO_STORED_INITIAL"), 1, 1);
	Global_113648.f_2365.f_539.f_4315 = 1;
	return;
}

void func_528(int iParam0, eCharacter echParam1, Hash hParam2) // Position - 0x3D624
{
	if (hParam2 == -1)
		hParam2 = func_49();

	if (echParam1 < 0)
		echParam1 = 255;

	unk_0x5B9D75B86493C415(iParam0, echParam1, hParam2);
	return;
}

BOOL func_529() // Position - 0x3D64C
{
	if (func_531() && func_530(0))
		return true;

	return false;
}

BOOL func_530(int iParam0) // Position - 0x3D66A
{
	return Global_1574538[iParam0];
}

BOOL func_531() // Position - 0x3D67A
{
	return func_530(func_49() + 1);
}

void func_532(eCharacter echParam0) // Position - 0x3D68C
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			unk_0x0133FF6E23A1DCA4(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			unk_0x0133FF6E23A1DCA4(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, Global_95684, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95684);
			unk_0x0133FF6E23A1DCA4(1, Global_95685, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95685);
			unk_0x0133FF6E23A1DCA4(1, Global_95686, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95686);
			break;
	
		case CHAR_FRANKLIN:
			unk_0x0133FF6E23A1DCA4(1, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			unk_0x0133FF6E23A1DCA4(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, Global_95684, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95684);
			unk_0x0133FF6E23A1DCA4(1, Global_95685, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95685);
			unk_0x0133FF6E23A1DCA4(1, Global_95686, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95686);
			break;
	
		case CHAR_TREVOR:
			unk_0x0133FF6E23A1DCA4(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(5, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			unk_0x0133FF6E23A1DCA4(5, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, Global_95684, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95684);
			unk_0x0133FF6E23A1DCA4(1, Global_95685, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95685);
			unk_0x0133FF6E23A1DCA4(1, Global_95686, joaat("PLAYER"));
			unk_0x0133FF6E23A1DCA4(1, joaat("PLAYER"), Global_95686);
			break;
	
		default:
			break;
	}

	return;
}

void func_533() // Position - 0x3D840
{
	var unk;
	eCharacter character;

	func_30();
	unk = unk_0xE9E936CE791EB484();

	if (unk_0xCE4AAA035282336C(unk))
	{
		character = Global_113648.f_2365.f_539.f_4321;
	
		if (func_1(14))
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
	
		if (character == CHAR_MICHAEL)
			unk_0x4049FDC177C92D4B(unk, "BLIP_MICHAEL" /*Michael*/);
		else if (character == CHAR_FRANKLIN)
			unk_0x4049FDC177C92D4B(unk, "BLIP_FRANKLIN" /*Franklin*/);
		else if (character == CHAR_TREVOR)
			unk_0x4049FDC177C92D4B(unk, "BLIP_TREV" /*Trevor*/);
		else
			unk_0x4049FDC177C92D4B(unk, "BLIP_PLAYER" /*Player*/);
	}

	return;
}

void func_534(var uParam0) // Position - 0x3D8C3
{
	int i;
	var unk;
	int num;
	int num2;
	int j;
	int num3;
	var unk2;

	for (i = 0; i < 44; i = i + 1)
	{
		num = func_122(i);
	
		if (num != 0)
		{
			num2 = unk_0x91BEC56C475EB62C(uParam0, num);
		
			if (num2 != 0 && num2 != joaat("WEAPON_UNARMED") && num2 != joaat("OBJECT"))
				if (unk_0x18974B8F28F70FE4(uParam0, num2) == -1)
					if (unk_0xB2BC9E9923E2546A(uParam0, num2, &unk))
						unk_0x49ED56E425110B21(uParam0, 0, num2);
		}
	}

	num3 = unk_0xDF411E9128FAD473();

	for (j = 0; j < num3; j = j + 1)
	{
		if (unk_0xF65F6F7A093E58A1(j, &unk2))
		{
			num2 = unk2.f_1;
		
			if (unk_0x18974B8F28F70FE4(uParam0, num2) == -1)
				if (unk_0xB2BC9E9923E2546A(uParam0, num2, &unk))
					unk_0x49ED56E425110B21(uParam0, 0, num2);
		}
	}

	return;
}

void func_535(int iParam0) // Position - 0x3D985
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
	{
		if (iParam0 == unk_0xC1A5EC5C986B98AD() && unk_0xAC6860C864E313E3(iParam0) == 200)
			unk_0x8A2F127F30303C49(iParam0, SYSTEM::ROUND((float)unk_0xAC6860C864E313E3(iParam0) * Global_262145.f_107));
	
		if (Global_113648.f_2365.f_539.f_290[character] <= 0f)
			Global_113648.f_2365.f_539.f_290[character] = 100f;
		else if (Global_113648.f_2365.f_539.f_290[character] <= 10f)
			Global_113648.f_2365.f_539.f_290[character] = 10f;
	
		unk_0xED2BD879E739E86B(iParam0, SYSTEM::ROUND(((Global_113648.f_2365.f_539.f_290[character] / 100f) * (SYSTEM::TO_FLOAT(unk_0xAC6860C864E313E3(iParam0)) - 100f)) + 100f), 0);
	}

	return;
}

int func_536(eCharacter echParam0) // Position - 0x3DA72
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

void func_537(eCharacter echParam0, var uParam1) // Position - 0x3DAAD
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			func_538(4, *uParam1, false);
			func_538(7, *uParam1, false);
			func_538(8, *uParam1, false);
			func_538(11, *uParam1, false);
			break;
	
		case CHAR_FRANKLIN:
			func_538(4, *uParam1, false);
			func_538(7, *uParam1, false);
			func_538(8, *uParam1, false);
			func_538(11, *uParam1, false);
		
			if (Global_113648.f_9087.f_99.f_58[126])
				func_538(12, *uParam1, false);
			break;
	
		case CHAR_TREVOR:
			func_538(4, *uParam1, false);
			func_538(7, *uParam1, false);
			func_538(8, *uParam1, false);
			func_538(11, *uParam1, false);
			break;
	}

	return;
}

void func_538(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3DB65
{
	int i;
	BOOL flag;

	if (!bParam2)
		if (!unk_0x7DE17ACDD8BA2642(iParam1))
			return;

	if (Global_41953[iParam0 /*31*/].f_24 == 0)
		return;

	flag = false;

	for (i = 0; i < Global_41953[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (flag)
		{
			Global_41953[iParam0 /*31*/].f_25[i - 1] = Global_41953[iParam0 /*31*/].f_25[i];
			Global_41953[iParam0 /*31*/].f_25[i] = 0;
		}
		else if (iParam1 == Global_41953[iParam0 /*31*/].f_25[i])
		{
			Global_41953[iParam0 /*31*/].f_25[i] = 0;
			flag = true;
		}
	}

	if (flag)
		Global_41953[iParam0 /*31*/].f_24 = Global_41953[iParam0 /*31*/].f_24 - 1;

	return;
}

void func_539(int iParam0, BOOL bParam1) // Position - 0x3DC21
{
	func_544(iParam0);
	func_116(iParam0, bParam1);
	func_543(iParam0);
	func_123(iParam0);
	func_542(iParam0);
	func_541(iParam0);
	func_540(iParam0);
	return;
}

void func_540(int iParam0) // Position - 0x3DC55
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
		if (iParam0 == unk_0xC1A5EC5C986B98AD())
			Global_113648.f_2365.f_539.f_2328[character] = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());

	return;
}

void func_541(int iParam0) // Position - 0x3DC9C
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
		Global_113648.f_2365.f_539.f_2318[character /*3*/] = { unk_0x7A2C98D06C9C1956(iParam0) };

	return;
}

void func_542(int iParam0) // Position - 0x3DCDA
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3)
			if (unk_0x19B3485E7C9D734D() == 8)
				return;
	
		Global_113648.f_2365.f_539.f_2300[character /*3*/] = { unk_0x30BE8A934C020461(iParam0, 1) };
		Global_113648.f_2365.f_539.f_2310[character] = unk_0xD850DD08D5434072(iParam0);
		Global_113648.f_2365.f_539.f_2314[character] = unk_0x846426CCFA47452B(iParam0);
	
		if (Global_113648.f_2365.f_539.f_2300[character /*3*/] >= 8000f)
			Global_113648.f_2365.f_539.f_2300[character /*3*/] = 7500f;
		else if (Global_113648.f_2365.f_539.f_2300[character /*3*/] <= -8000f)
			Global_113648.f_2365.f_539.f_2300[character /*3*/] = -7500f;
	
		if (Global_113648.f_2365.f_539.f_2300[character /*3*/].f_1 >= 8000f)
			Global_113648.f_2365.f_539.f_2300[character /*3*/].f_1 = 7500f;
		else if (Global_113648.f_2365.f_539.f_2300[character /*3*/].f_1 <= -8000f)
			Global_113648.f_2365.f_539.f_2300[character /*3*/].f_1 = -7500f;
	
		if (Global_113648.f_2365.f_539.f_2300[character /*3*/].f_2 >= 2500f)
			Global_113648.f_2365.f_539.f_2300[character /*3*/].f_2 = 2000f;
	}

	return;
}

void func_543(int iParam0) // Position - 0x3DE67
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
		Global_113648.f_2365.f_539.f_290[character] = ((SYSTEM::TO_FLOAT(unk_0x2935B4D6CE81318D(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(unk_0xAC6860C864E313E3(iParam0)) - 100f)) * 100f;

	return;
}

void func_544(int iParam0) // Position - 0x3DEC4
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_31(character) && !unk_0x66599E73DBA5A850(iParam0))
		Global_113648.f_2365.f_539.f_2296[character] = func_155();

	return;
}

int func_545(var uParam0, eCharacter echParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3DEFE
{
	int num;

	if (func_31(echParam1))
	{
		num = _GET_CHARACTER_MODEL(echParam1);
		unk_0x852EC2A7DE66202D(num);
	
		if (unk_0x0CBB7C273DED26E7(num))
		{
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
				unk_0xE9C250FA35A936C8(uParam0);
		
			*uParam0 = unk_0x69FDD9508259E5B5(26, num, uParam2, uParam5, 0, 0);
			func_739(*uParam0, echParam1, bParam7);
			unk_0x4215B9F7B46D70CF(*uParam0, 0, 0);
			func_732(*uParam0);
			func_722(*uParam0, true, false);
			func_721(*uParam0);
			func_718(*uParam0);
			func_547(*uParam0, bParam8);
			func_546(*uParam0);
		
			if (bParam6)
				unk_0xE0A291F406691F03(num);
		
			return 1;
		}
	}

	return 0;
}

void func_546(int iParam0) // Position - 0x3DF9D
{
	int i;

	if (unk_0x66599E73DBA5A850(iParam0))
		return;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98050[i]) && Global_98050[i] == iParam0)
			return;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		if (!unk_0x7DE17ACDD8BA2642(Global_98050[i]))
		{
			Global_98050[i] = iParam0;
			return;
		}
	}

	return;
}

int func_547(int iParam0, BOOL bParam1) // Position - 0x3E016
{
	eCharacter character;
	BOOL flag;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (func_717(character))
	{
		func_716(character, 0);
		func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_551(iParam0, true);
		return 1;
	}

	if (!bParam1)
	{
		if (func_549(iParam0))
		{
			func_716(character, false);
			func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_551(iParam0, true);
			return 1;
		}
	}

	flag = false;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (Global_113648.f_9087.f_99.f_58[120] && !Global_113648.f_9087.f_99.f_58[122])
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113648.f_9087.f_99.f_58[121] = true;
				return 1;
			}
		
			if (Global_113648.f_9087.f_99.f_58[123])
			{
				Global_113648.f_9087.f_99.f_58[123] = false;
			
				if (!unk_0x66599E73DBA5A850(iParam0))
				{
					if (func_399(iParam0, 3, 169))
					{
						func_288(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
		
			if (func_399(iParam0, 12, 6))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			if (func_399(iParam0, 12, 17))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 17))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 20))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 20))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 21))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 21))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 22))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 22))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 11))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			if (func_399(iParam0, 12, 10))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			if (func_399(iParam0, 12, 50))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			if (func_399(iParam0, 14, 59))
			{
				func_288(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				flag = true;
			}
		
			if (func_399(iParam0, 8, 22))
			{
				func_288(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				flag = true;
			}
		
			if (flag)
				return 1;
		
			if (func_399(iParam0, 12, 14))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (func_399(iParam0, 12, 13))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 13))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 14))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 14))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 15))
			{
				if (!func_548(unk_0x504B9BB48D41C264(iParam0), 12, 15))
				{
					func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
		
			if (func_399(iParam0, 12, 4))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			if (func_399(iParam0, 12, 3))
			{
				func_288(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		
			{