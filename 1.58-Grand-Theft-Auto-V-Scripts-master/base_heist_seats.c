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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_78())
	{
		while (!func_64())
		{
			func_11();
			wait(0);
		}
	}
	func_1();
}

void func_1()
{
	unk_0xB0550BC91B0159D6(&Global_1836142, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

var func_6(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_47);
	if (Global_1852971 == unk_0x9E2D6C50374FCFA9() && !unk_0xE2D0C323A1AE5D85(Global_1890187[unk_0xA52C4F51ECAB7E02() /*105*/].f_38.f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&Global_1836142, 1);
			if ((((((iLocal_64 == 0 && !unk_0xE2D0C323A1AE5D85(Global_1890187[unk_0xA52C4F51ECAB7E02() /*105*/].f_38.f_27, 3)) && !func_16()) && !unk_0xF1EC2C71FD1371B8()) && !func_15(0)) && !func_14()) && unk_0xF01464D7AF0B7347(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			unk_0xB0550BC91B0159D6(&Global_1836142, 1);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_1836142, 1);
	}
	iLocal_64 = 0;
	if (unk_0xE2D0C323A1AE5D85(Global_1890187[unk_0xA52C4F51ECAB7E02() /*105*/].f_38.f_27, 3))
	{
		unk_0xCED9E32812D6C7C7(&iLocal_64, 0);
	}
	if (func_16())
	{
		unk_0xCED9E32812D6C7C7(&iLocal_64, 1);
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		unk_0xCED9E32812D6C7C7(&iLocal_64, 2);
	}
	if (func_14())
	{
		unk_0xCED9E32812D6C7C7(&iLocal_64, 4);
	}
	if (func_15(0))
	{
		unk_0xCED9E32812D6C7C7(&iLocal_64, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(var uParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(uParam0, iParam1);
}

bool func_14()
{
	return Global_75021;
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
			return 0;
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	func_62(iParam0);
	func_60(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_59(&(iParam0->f_421), 11);
			func_58(iParam0, 1);
			break;
		
		case 1:
			if (func_57(iParam0))
			{
				iParam0->f_421.f_6 = unk_0x320D1840B6DAA1CC();
				func_58(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_56(unk_0xE2D3D51028F0428A(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 1);
					func_58(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_421.f_6) > 150)
					{
						func_51(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (unk_0xF09A4F413B0D30EB(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_48(iParam0);
					func_58(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 1);
			}
			break;
		
		case 3:
			func_47(iParam0, &sVar0);
			unk_0x8FB472886552D737(&sVar0);
			if (unk_0x6F940C2636C076AD(&sVar0))
			{
				func_58(iParam0, 4);
			}
			break;
		
		case 4:
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 != 3)
			{
				Var3 = { unk_0x3DBAB8E11699EAEE(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0, 2) };
				Var4 = { unk_0x34AEDCEA59226CCB(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0, 2) };
				uVar5 = Var4.f_2;
				unk_0x13C3030981EA7C3B(unk_0xE2D3D51028F0428A(), Var3, 1f, 500, uVar5, 0.15f);
			}
			func_58(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 == 3)
			{
				iVar6 = unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 1920390111);
			}
			else
			{
				iVar6 = unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073);
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_421.f_1 = unk_0x497E09037A63D346(func_45(iParam0), func_44(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), iParam0->f_421.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1.5f, 0);
				unk_0x60E9DD146055C13E(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = unk_0x320D1840B6DAA1CC();
				func_13(&(iParam0->f_421), 8);
				func_58(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_59(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			uVar7 = unk_0x57736A7B8965A88A(iParam0->f_421.f_1);
			if (unk_0xCE2C78E9FC0B01E3(uVar7))
			{
				if (unk_0x54DE1614490C2A83(uVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_47(iParam0, &sVar0);
					func_46(iParam0, &sVar1);
					iParam0->f_421.f_1 = unk_0x497E09037A63D346(func_45(iParam0), func_44(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), iParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					unk_0x60E9DD146055C13E(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_59(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_58(iParam0, 8);
			}
			break;
		
		case 7:
			unk_0x0B92578FB47DA084(iParam0->f_421.f_1);
			func_58(iParam0, 8);
			break;
		
		case 8:
			uVar8 = unk_0x57736A7B8965A88A(iParam0->f_421.f_1);
			if (unk_0xCE2C78E9FC0B01E3(uVar8))
			{
				if ((unk_0x54DE1614490C2A83(uVar8) >= 1f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 364629851)) || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 2116425869))
				{
					unk_0x0B92578FB47DA084(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_58(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0x5853B15F78E1A265(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = unk_0x320D1840B6DAA1CC();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((unk_0x320D1840B6DAA1CC() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(unk_0x9E2D6C50374FCFA9());
}

int func_25(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	
	if (uParam0->f_421.f_4 == 6)
	{
		Var0 = { unk_0x664C0A1BF5E133FA(0, 218), unk_0x664C0A1BF5E133FA(0, 219), 0f };
		fVar1 = vmag(Var0);
		if ((uParam0->f_421.f_4 == 6 && !unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar1 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			unk_0x7BC5E5A5FF7F278F(2);
			unk_0x7653D561C9574763(0, 24, 1);
			unk_0x7653D561C9574763(0, 257, 1);
			unk_0x7653D561C9574763(0, 142, 1);
			unk_0x7653D561C9574763(0, 141, 1);
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 263, 1);
			unk_0x7653D561C9574763(0, 264, 1);
			unk_0x7653D561C9574763(0, 143, 1);
			unk_0x7653D561C9574763(2, 200, 1);
			if (((((!unk_0xF1EC2C71FD1371B8() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_51(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (unk_0xF09A4F413B0D30EB(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_59(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_28(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			unk_0xA7E29842FA438ED6(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_47(uParam0, &sVar0);
		func_46(uParam0, &sVar1);
		uParam0->f_421.f_1 = unk_0x497E09037A63D346(func_45(uParam0), func_44(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
		unk_0x60E9DD146055C13E(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
	}
}

void func_32(var uParam0)
{
	char* sVar0;
	
	uParam0->f_421.f_1 = unk_0x497E09037A63D346(func_45(uParam0), func_44(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_47(uParam0, &sVar0);
	unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0x60E9DD146055C13E(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_58(uParam0, 8);
}

void func_33(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			unk_0x62EA3913642EDF8E();
			unk_0x1E672EB1F161AEEB(0);
			unk_0x3F5B55C881FE2E15(0);
			unk_0xAC765EF46E85A446(19);
			unk_0xAC765EF46E85A446(2);
			unk_0x6B3EC5908EA03C43();
			func_37();
			if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
			}
			unk_0x7653D561C9574763(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_22691.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2714627.f_41 = 1;
		}
	}
	else
	{
		Global_2714627.f_41 = 0;
	}
}

bool func_36()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

void func_37()
{
	unk_0xCED9E32812D6C7C7(&Global_7825, 4);
}

void func_38(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_42())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_40())
	{
		Global_19954.f_1 = 3;
	}
}

int func_40()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_42()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_43()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

Vector3 func_44(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

Vector3 func_45(var uParam0)
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_47(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(var uParam0)
{
	uParam0->f_421.f_8 = func_50((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_49(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_49(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = unk_0x5853B15F78E1A265(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x5853B15F78E1A265(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_50(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/] = 1;
			Global_43328[iVar0 /*32*/].f_1 = Global_43529;
			Global_43529++;
			Global_43328[iVar0 /*32*/].f_4 = 0;
			Global_43328[iVar0 /*32*/].f_29 = 0;
			Global_43328[iVar0 /*32*/].f_5 = 0;
			Global_43328[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43328[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43328[iVar0 /*32*/].f_6 = iParam3;
			Global_43328[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43328[iVar0 /*32*/].f_7 = 0;
			Global_43328[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43328[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43328[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43328[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43328[iVar0 /*32*/].f_12 = 0;
				Global_43328[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43328[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_52(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			if ((iVar1 != unk_0x9E2D6C50374FCFA9() && func_54(iVar1, 1, 1)) && func_56(unk_0x407E03586628E458(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_55(var uParam0)
{
	return uParam0->f_421 & 31 > 0;
}

bool func_56(var uParam0, var uParam1)
{
	return unk_0xD132EDDA78FF4A51(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(unk_0xE2D3D51028F0428A(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_421.f_4 = iParam1;
}

void func_59(var uParam0, int iParam1)
{
	unk_0xB0550BC91B0159D6(uParam0, iParam1);
}

void func_60(var uParam0)
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		unk_0xA457F1126998C0BA(unk_0xE2D3D51028F0428A());
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), func_61(uParam0));
		uParam0->f_421.f_7 = unk_0x8142A6539DDC180F();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), func_61(uParam0));
		uParam0->f_421.f_7 = unk_0x8142A6539DDC180F();
	}
	else if ((unk_0x8142A6539DDC180F() - uParam0->f_421.f_7) < 5)
	{
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), func_61(uParam0));
	}
}

float func_61(var uParam0)
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_62(var uParam0)
{
	func_63(&(uParam0->f_421), 4, func_14());
	func_63(&(uParam0->f_421), 1, unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0));
	func_63(&(uParam0->f_421), 3, unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1));
	func_63(&(uParam0->f_421), 0, func_15(0));
	func_63(&(uParam0->f_421), 2, unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A()));
}

void func_63(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(uParam0, uVar0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0, iVar0);
	}
}

int func_64()
{
	if (!func_77(unk_0xE2D3D51028F0428A()))
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (Global_1852971 == func_65())
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66()
{
	var uVar0;
	
	func_74(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_73())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71(159))
	{
		if (!func_70())
		{
			return 1;
		}
	}
	if (func_71(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_67() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_67()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	switch (func_69())
	{
		case 0:
			return func_68();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_68()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_69()
{
	return Global_31505;
}

bool func_70()
{
	return Global_2714627.f_698;
}

int func_71(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return Global_2725224;
}

bool func_73()
{
	return Global_2714627.f_693;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_75(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_54(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(uVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(uVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_76(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_76(var uParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(uParam0))
		{
			if (unk_0x58FDF0B505AA2260(uParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(uParam0)))
				{
					unk_0x2D58A6131679D82C(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(uParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_77(var uParam0)
{
	return unk_0xD132EDDA78FF4A51(uParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, 1, 0);
}

int func_78()
{
	if (Global_1852971 != func_65())
	{
		if (unk_0x7B0A672B0283F03E("base_heist_seats", Global_1852971, 1, 0))
		{
			return 0;
		}
		unk_0xD9B114A8D3A8319F(32, 0, Global_1852971);
		func_90(0, -1, 0);
		unk_0x2C07CBAFAC54A645(0);
		func_79();
		return 1;
	}
	return 0;
}

void func_79()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_89() };
	Var1 = { func_88() };
	func_85(0, func_87(343.93f, 4875.389f, -60.44f, -90f), -90f, Var0, Var1);
	func_85(1, func_87(344.08f, 4874.239f, -60.44f, -86f), -86f, Var0, Var1);
	func_85(2, func_87(344.33f, 4873.189f, -60.44f, -78f), -78f, Var0, Var1);
	func_85(3, func_87(344.7f, 4872.239f, -60.44f, -72f), -72f, Var0, Var1);
	func_85(4, func_87(345.06f, 4871.48f, -60.44f, -67f), -67f, Var0, Var1);
	func_85(5, func_87(345.86f, 4870.289f, -60.44f, -60f), -60f, Var0, Var1);
	func_85(6, func_87(350.41f, 4867.05f, -60.44f, -26f), -26f, Var0, Var1);
	func_85(7, func_87(351.51f, 4866.75f, -60.44f, -17f), -17f, Var0, Var1);
	func_85(8, func_87(352.66f, 4866.6f, -60.44f, -10f), -10f, Var0, Var1);
	func_85(9, func_87(353.6f, 4866.58f, -60.44f, -4f), -4f, Var0, Var1);
	func_85(10, func_87(354.7f, 4866.68f, -60.44f, 4f), 4f, Var0, Var1);
	func_85(11, func_87(355.85f, 4866.91f, -60.44f, 10f), 10f, Var0, Var1);
	func_85(12, func_87(346.02f, 4876.871f, -60.838f, -102f), -102f, Var0, Var1);
	func_85(13, func_87(345.97f, 4875.721f, -60.838f, -93f), -93f, Var0, Var1);
	func_85(14, func_87(346.19f, 4874.21f, -60.838f, -81f), -81f, Var0, Var1);
	func_85(15, func_87(346.62f, 4873.01f, -60.838f, -73f), -73f, Var0, Var1);
	func_85(16, func_87(347.27f, 4871.86f, -60.838f, -62f), -62f, Var0, Var1);
	func_85(17, func_87(351.57f, 4868.86f, -60.838f, -20f), -20f, Var0, Var1);
	func_85(18, func_87(352.89f, 4868.65f, -60.838f, -9f), -9f, Var0, Var1);
	func_85(19, func_87(354.17f, 4868.68f, -60.838f, 0f), 0f, Var0, Var1);
	func_85(20, func_87(355.12f, 4868.85f, -60.838f, 10f), 8f, Var0, Var1);
	func_85(21, func_87(356.58f, 4869.38f, -60.838f, 10f), 20f, Var0, Var1);
	func_85(22, func_87(348.2f, 4876.56f, -61.24f, -101f), -101f, Var0, Var1);
	func_85(23, func_87(348.2f, 4875.31f, -61.24f, -88f), -88f, Var0, Var1);
	func_85(24, func_87(348.47f, 4874.28f, -61.24f, -76f), -76f, Var0, Var1);
	func_85(25, func_87(349.17f, 4872.97f, -61.24f, -60f), -60f, Var0, Var1);
	func_85(26, func_87(352.12f, 4870.98f, -61.24f, -20f), -20f, Var0, Var1);
	func_85(27, func_87(353.42f, 4870.84f, -61.24f, -6f), -6f, Var0, Var1);
	func_85(28, func_87(354.67f, 4870.995f, -61.24f, 8f), 8f, Var0, Var1);
	func_85(29, func_87(356.02f, 4871.545f, -61.24f, 25f), 25f, Var0, Var1);
	func_80(&Local_47, 8410);
}

void func_80(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_81(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) || unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	if (func_84(unk_0x9E2D6C50374FCFA9()) || unk_0xE2D0C323A1AE5D85(iLocal_64, 0))
	{
		return 0;
	}
	Var0 = { uParam0->f_1 };
	Var1 = { uParam0->f_1.f_3 };
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	Var2 = { func_83(Var0 - Var1) };
	Var3 = { unk_0x63BEA94AB58D4E6D(unk_0xE2D3D51028F0428A()) };
	fVar4 = func_82(Var2, Var3);
	bVar5 = fVar4 > 0.36f;
	return bVar5;
}

float func_82(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_83(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_54(iParam0, 1, 1))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1890187[iParam0 /*105*/].f_38.f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { Param1 + func_86(Param3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { Param1 + func_86(Param4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { Param1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_86(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_87(struct<3> Param0, float fParam1)
{
	return Param0 + func_86(0f, 0.01f, 0.015f, fParam1);
}

Vector3 func_88()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_89()
{
	return 0f, 0.1f, 1f;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_91())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_91()
{
	return Global_1575022;
}

