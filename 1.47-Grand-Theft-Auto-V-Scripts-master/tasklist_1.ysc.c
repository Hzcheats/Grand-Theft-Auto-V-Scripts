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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	var uLocal_20[3] = { 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_11();
	}
	while (true)
	{
		wait(250);
		switch (iLocal_21)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_16985[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_16985[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_16985[1 /*42*/].f_8 = 0;
					Global_16985[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_16985[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_16985[1 /*42*/].f_37[1] = 0;
					Global_16985[1 /*42*/].f_32[1] = 3;
					Global_16985[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_16985[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_16985[1 /*42*/].f_37[2] = 0;
					Global_16985[1 /*42*/].f_32[2] = 3;
					Global_16985[1 /*42*/].f_27[2] = 0;
					iLocal_19 = 0;
					while (iLocal_19 < Global_16985[1 /*42*/].f_32[1])
					{
						Global_25819[iLocal_19] = 0;
						Global_25815[iLocal_19] = 0;
						iLocal_19++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_21 = 1;
				}
				break;
			
			case 1:
				iLocal_19 = 0;
				while (iLocal_19 < Global_16985[1 /*42*/].f_32[1])
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x765F6FEEFF39224F(uLocal_20[iLocal_19]))
						{
							if (unk_0xBC2FC12AD0FBF72E(uLocal_20[iLocal_19]))
							{
								if (unk_0x91BBD269506D61D2(uLocal_20[iLocal_19], unk_0x33CD235DF1E6A94E(), 1))
								{
									if (!Global_25815[iLocal_19])
									{
										Global_16985[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_16985[1 /*42*/].f_27[1], Global_16985[1 /*42*/].f_32[1], 2000, 1);
										Global_25815[iLocal_19] = 1;
									}
									if (unk_0xD62C4419A41F106A(uLocal_20[iLocal_19], 0))
									{
										if (!Global_25819[iLocal_19])
										{
											if (unk_0x25F356BEB062BEB7(uLocal_20[iLocal_19]) && func_1())
											{
												Global_16985[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_16985[1 /*42*/].f_27[2], Global_16985[1 /*42*/].f_32[2], 2000, 1);
												Global_25819[iLocal_19] = 1;
											}
										}
									}
									if (Global_16985[1 /*42*/].f_27[1] >= Global_16985[1 /*42*/].f_32[1] && Global_16985[1 /*42*/].f_27[2] >= Global_16985[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_16985[1 /*42*/].f_8 = 1;
										iLocal_21 = 2;
									}
								}
							}
						}
					}
					iLocal_19++;
				}
				break;
			
			case 2:
				break;
		}
		wait(250);
		switch (iLocal_22)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_16985[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_16985[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_16985[2 /*42*/].f_8 = 0;
					Global_16985[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_16985[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_16985[2 /*42*/].f_37[1] = 0;
					Global_16985[2 /*42*/].f_32[1] = -1;
					Global_16985[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_16985[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_16985[2 /*42*/].f_37[2] = 0;
					Global_16985[2 /*42*/].f_32[2] = -1;
					Global_16985[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_16985[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_16985[2 /*42*/].f_37[3] = 0;
					Global_16985[2 /*42*/].f_32[3] = -1;
					Global_16985[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_22 = 1;
				}
				break;
			
			case 1:
				if (!Global_16985[2 /*42*/].f_37[1])
				{
				}
				if (!Global_16985[2 /*42*/].f_37[2])
				{
				}
				if (!Global_16985[2 /*42*/].f_37[3])
				{
				}
				if ((Global_16985[2 /*42*/].f_37[1] == 1 && Global_16985[2 /*42*/].f_37[2] == 1) && Global_16985[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_16985[2 /*42*/].f_8 = 1;
					iLocal_22 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	if (Global_16902)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	unk_0xE800DC85FDF60F85(iParam2);
	unk_0x495407AC2D466930(iParam3, 0);
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x495407AC2D466930(iParam2, 0);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_10())
	{
		return 0;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_16984);
	Global_17154[Global_16984 /*9*/].f_1 = uParam1;
	Global_17154[Global_16984 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17154[Global_16984 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_17154[iParam0 /*9*/].f_2 = iVar0;
	Global_17154[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_17154[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_17154[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_17154[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17154[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_7()
{
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_17154[iVar0 /*9*/].f_8 == 0)
		{
			Global_16984 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16984 = 3;
	Global_17154[Global_16984 /*9*/].f_2 = -1;
	Global_17154[Global_16984 /*9*/].f_2.f_1 = 0;
	Global_17154[Global_16984 /*9*/].f_2.f_2 = 0;
	Global_17154[Global_16984 /*9*/].f_2.f_3 = 0;
	Global_17154[Global_16984 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17154[iVar0 /*9*/].f_8 == 0 || Global_17154[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_17154[iVar0 /*9*/].f_2, Global_17154[Global_16984 /*9*/].f_2))
			{
				Global_16984 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16984 == 3)
	{
		return 0;
	}
	return 1;
}

int func_9(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_10()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	unk_0x5894DC159447E10A();
}

