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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
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
	struct<872> Local_88 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_89[32];
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105[4] = { 0, 0, 0, 0 };
	struct<8> Local_106[30];
	var uLocal_107[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<21> Local_115 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_97 = -1;
	if (unk_0x9315DBF7D972F07A() && func_1121(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		func_1067(ScriptParam_115);
	}
	else
	{
		func_1020();
	}
	while (true)
	{
		func_1019();
		if (func_1011())
		{
			func_1020();
		}
		Global_1944620.f_2 = Local_88.f_863;
		Global_1944620.f_3 = Local_88.f_864;
		switch (func_1010(unk_0xF1354995C6159A78()))
		{
			case 0:
				if (func_1009() == 1)
				{
					if (func_1008())
					{
						func_1007();
						if (func_1006())
						{
							func_991(166, 1, -1, 0);
							unk_0xC0F70A3CDEC87ECE(3);
							func_990(0f);
							iLocal_96 = unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A());
							unk_0xFF4BEB6CFF55A013(unk_0xE2D3D51028F0428A(), iLocal_95);
						}
						else
						{
							func_991(166, 0, -1, 0);
						}
						func_989();
						func_988();
						func_987();
						Local_89[unk_0xF1354995C6159A78() /*14*/] = 1;
					}
				}
				else if (func_1009() == 4)
				{
					Local_89[unk_0xF1354995C6159A78() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_981(1))
				{
					Local_89[unk_0xF1354995C6159A78() /*14*/] = 2;
				}
				if (func_1009() == 1)
				{
					func_980();
					func_960();
					func_937();
					func_316();
					func_307();
					if (func_1006() || func_305())
					{
						func_153(&(Global_1633702.f_534), &Global_1633702, 28, &(Global_1633702.f_1), &(Global_1633702.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_1009() == 4)
				{
					Local_89[unk_0xF1354995C6159A78() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_88.f_845));
				if (func_72(&(Local_88.f_845)))
				{
					Local_89[unk_0xF1354995C6159A78() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_89[unk_0xF1354995C6159A78() /*14*/] = 4;
			
			case 4:
				func_1020();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_1009())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						unk_0x034E89ED97681AC2(&(Local_88.f_863), &(Local_88.f_864));
						Local_88 = 1;
						Local_88.f_118 = unk_0xF1354995C6159A78();
						Local_88.f_119 = unk_0x9E2D6C50374FCFA9();
						func_991(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_88 = 4;
					}
					else if (func_1())
					{
						Local_88 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2810287.f_5193.f_42)
	{
		Global_2810287.f_5193.f_42 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_88.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 1))
			{
				Local_88.f_117 = 2;
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 3))
			{
				Local_88.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!unk_0xE2D0C323A1AE5D85(Local_88.f_1, 6))
	{
		if (!func_8(&(Local_88.f_849)))
		{
			func_7(&(Local_88.f_849), 0, 0);
		}
		else if (func_6(&(Local_88.f_849), 500, 0))
		{
			unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_88.f_847)))
	{
		func_7(&(Local_88.f_847), 0, 0);
	}
	else if (func_6(&(Local_88.f_847), func_10(), 0))
	{
		unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_15280;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x54E30A65F4FA4962())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_88.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_88.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_2))
							{
								Local_88.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_88.f_2[iVar0 /*26*/] == 1)
						{
							Local_88.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_88.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_88.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_88.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x87B449F4C26E764A(unk_0x8AF984152F749D80(Local_88.f_2[iVar0 /*26*/].f_1), unk_0xA5677134B9672173(Local_88.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xE2D0C323A1AE5D85(Local_88.f_109, iVar0))
										{
											unk_0xCED9E32812D6C7C7(&(Local_88.f_108), iVar0);
											Local_88.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xE2D0C323A1AE5D85(Local_88.f_110, iVar0))
										{
											unk_0xCED9E32812D6C7C7(&(Local_88.f_108), iVar0);
											Local_88.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xE2D0C323A1AE5D85(Local_88.f_111, iVar0))
										{
											unk_0xCED9E32812D6C7C7(&(Local_88.f_108), iVar0);
											Local_88.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xE2D0C323A1AE5D85(Local_88.f_112, iVar0))
										{
											Local_88.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_88.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_88.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_88.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x174B84F6B78D6CA7(unk_0x8AF984152F749D80(Local_88.f_2[iVar0 /*26*/].f_1)))
							{
								Local_88.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_88.f_2[iVar0 /*26*/].f_2))
								{
									Local_88.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xE2D0C323A1AE5D85(Local_88.f_112, iVar0))
								{
									Local_88.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_88.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(unk_0x8AF984152F749D80(Local_88.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_88.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_88.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xE2D0C323A1AE5D85(Local_88.f_110, iVar0))
							{
								Local_88.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xE2D0C323A1AE5D85(Local_88.f_111, iVar0))
							{
								Local_88.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_88.f_2[iVar0 /*26*/].f_24)
						{
							Local_88.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_88.f_2[iVar0 /*26*/].f_25)
						{
							Local_88.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_88.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_88.f_2[iVar0 /*26*/] == 0)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_88.f_2[iVar0 /*26*/] == 2)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_88.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_88.f_2[iVar0 /*26*/].f_17 == 3 || Local_88.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_88.f_2[iVar0 /*26*/].f_24)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_88.f_2[iVar0 /*26*/].f_17 == 3 || Local_88.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0xD5C6B5E3B93A5EDC(unk_0x8AF984152F749D80(Local_88.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_88.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_13(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_14(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_88.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_88.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xCED9E32812D6C7C7(&(Local_88.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xCEEFCE6C0D7566C9(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574907;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_88.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_88.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_88 != 4)
	{
		iLocal_92 = 0;
		while (iLocal_92 < unk_0x5D79167FED95F0B0())
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_92)))
			{
				iVar3 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_92));
				if (!func_17(iVar3, 0))
				{
					if (func_1121(iVar3, 1, 1))
					{
					}
					func_24(iLocal_92);
					func_23(iLocal_92);
					if (!unk_0xE2D0C323A1AE5D85(Local_88.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xE2D0C323A1AE5D85(Local_88.f_1, 1) || unk_0xE2D0C323A1AE5D85(Local_88.f_1, 3)) || unk_0xE2D0C323A1AE5D85(Local_88.f_1, 5))
							{
								if (!unk_0xE2D0C323A1AE5D85(Local_89[iLocal_92 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(Local_88.f_1, 5))
			{
				if (Local_88.f_118 > -1)
				{
					if (iLocal_92 == Local_88.f_118)
					{
						unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 5);
					}
				}
			}
			iLocal_92++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xE2D0C323A1AE5D85(Local_88.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_88.f_115 != iVar0)
		{
			Local_88.f_115 = iVar0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 1);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_88.f_113, iVar0))
			{
				if (!func_8(&(Local_88.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_88.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_88.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_88.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_109, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_109), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_110, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_110), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_112, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_112), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_111, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_111), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_88.f_113, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_113), iVar0);
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_113), iVar0);
			}
		}
		if (Local_88.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_88.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_12, iVar0))
				{
					Local_88.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_88.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_89[iParam0 /*14*/].f_13, iVar0))
				{
					Local_88.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_88.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_88.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_88.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xCEEFCE6C0D7566C9(unk_0xA5677134B9672173(Local_88.f_2[iVar0 /*26*/].f_2), unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam0)), 1);
							unk_0xCED9E32812D6C7C7(&(Local_88.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(Local_88.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Local_88.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_88.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = Local_88.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_88.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar4 = Local_88.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_88.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x993E56B8150C834F(1))
				{
					if (func_33(iVar2))
					{
						if (!unk_0xE2D0C323A1AE5D85(Local_88.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x7A997A0A971D305F(Var3, 10f, 1, 0, 0, 1);
							unk_0xCED9E32812D6C7C7(&(Local_88.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x484CCFB803FCFD80(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x28C1AA9789AB5554(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_95);
							unk_0x2EABFF5EFCB7E6CF(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0xD045D56D95A3D704(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam13)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam8);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam6)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam7);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam10)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_31(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam3 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2667222.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_32(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

bool func_34(int iParam0)
{
	int iVar0;
	
	if (Local_88.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_88.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_88.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_88.f_2[iParam0 /*26*/];
	iVar2 = Local_88.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_88.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	var uVar6;
	
	if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_88.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_88.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0xA777DF215CCFCC77(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), Local_88.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x0407CF7EFEE35240(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x06AF73D7E3DF7782(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837192);
											unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_95);
											unk_0xA5D600C274CC186F(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x9521FB98DB6DDF50(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0xA777DF215CCFCC77(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_88.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_88.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar6 = Local_88.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar6, 1, 1, 1))
									{
										unk_0x0407CF7EFEE35240(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x06AF73D7E3DF7782(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837192);
										unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_95);
										unk_0x9521FB98DB6DDF50(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x71B502FC2E129665(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x25D0F99524B26091(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x7DCB4594ACF18DA7(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x1EE49ABA6B11E9CF(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_40();
										unk_0x8FBB27C41710F120(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0xF160248D9083ED0C(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										uVar4 = func_39();
										unk_0x495F6EBD50BCB090(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0x348A212511C78DBF(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										unk_0x40A4FA5C4B5DA318(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()
{
	return round(Global_262145.f_15288);
}

int func_39()
{
	return 200;
}

var func_40()
{
	return Global_262145.f_15287;
}

int func_41(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	iVar0 = unk_0xA8D58C3AADA2C41C(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0xED28EE4BE581A032(iVar0);
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(iVar0, iParam7);
		if (unk_0xD64C90C3F536F963(iVar0))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (Local_88.f_2[iParam0 /*26*/] == 0 || Local_88.f_2[iParam0 /*26*/] == 2);
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)
{
	switch (Local_88.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	
	switch (Local_88.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_88.f_2[iParam0 /*26*/].f_11;
				if (unk_0x993E56B8150C834F(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_88.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_88.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_88.f_2[iParam0 /*26*/].f_2), iVar0, Local_88.f_2[iParam0 /*26*/].f_13, Local_88.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0x28C1AA9789AB5554(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x484CCFB803FCFD80(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x371D594409A68A18(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_2), 1, iLocal_95);
								unk_0xAFE1B52F0DE91595(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x2EABFF5EFCB7E6CF(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0x006574E87E6F1942(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1, 1);
								unk_0xFF74DEC3F62D3654(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xCDD48501873FF1BC(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xD045D56D95A3D704(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x1AF469C927341A18(unk_0xA5677134B9672173(Local_88.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0xA777DF215CCFCC77(1))
					{
						iVar1 = Local_88.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_88.f_2[iParam0 /*26*/].f_1), Local_88.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x0407CF7EFEE35240(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x06AF73D7E3DF7782(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), Global_1837192);
								unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, iLocal_95);
								unk_0xA5D600C274CC186F(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCED9E32812D6C7C7(&(Local_88.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xA777DF215CCFCC77(1))
				{
					iVar1 = Local_88.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_88.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_88.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_88.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_88.f_2[iParam0 /*26*/].f_13, Local_88.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x0407CF7EFEE35240(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x06AF73D7E3DF7782(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), Global_1837192);
								unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, iLocal_95);
								unk_0xA5D600C274CC186F(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCED9E32812D6C7C7(&(Local_88.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x90F6E2F6488B98BA(Local_88.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xA777DF215CCFCC77(1))
				{
					iVar1 = Local_88.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_88.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_88.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_88.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_53(Var2);
							}
						}
						if (!func_28(Local_88.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_88.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_88.f_2[iParam0 /*26*/].f_13, Local_88.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x0407CF7EFEE35240(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x06AF73D7E3DF7782(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), Global_1837192);
								unk_0x8A8909BADDFA93A6(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, iLocal_95);
								unk_0xA5D600C274CC186F(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x71B502FC2E129665(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x25D0F99524B26091(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x7DCB4594ACF18DA7(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x9521FB98DB6DDF50(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar7 = func_52(iParam0);
								unk_0x1EE49ABA6B11E9CF(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), Local_88.f_2[iParam0 /*26*/].f_13, uVar7, 0, 0);
								unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar5 = func_51();
								unk_0x8FBB27C41710F120(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), iVar5);
								unk_0xF160248D9083ED0C(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								uVar6 = func_50();
								unk_0x495F6EBD50BCB090(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), uVar6);
								unk_0x348A212511C78DBF(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), func_49());
								unk_0x006574E87E6F1942(unk_0x8AF984152F749D80(Local_88.f_2[iParam0 /*26*/].f_1), 1, 1);
								unk_0xCED9E32812D6C7C7(&(Local_88.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()
{
	return round(Global_262145.f_15286);
}

int func_50()
{
	return 100;
}

var func_51()
{
	return Global_262145.f_15285;
}

float func_52(int iParam0)
{
	if (func_28(Local_88.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_88.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_88.f_865[iVar0] = unk_0x2915D98110F23A29(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xCED9E32812D6C7C7(&(Local_88.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_88.f_865[iVar0] = unk_0x2915D98110F23A29(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xCED9E32812D6C7C7(&(Local_88.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_88.f_865[iVar0] = unk_0x2915D98110F23A29(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xCED9E32812D6C7C7(&(Local_88.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_88.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x5853B15F78E1A265(0, Local_88.f_122);
			if (!func_28(Local_88.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_88.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_88.f_123[iVar0 /*36*/] };
					*uParam2 = Local_88.f_123[iVar0 /*36*/].f_3;
					Local_88.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x5853B15F78E1A265(0, Local_88.f_122);
			if (!func_28(Local_88.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_88.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_88.f_123[iVar0 /*36*/] };
					*uParam2 = Local_88.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_88.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x5853B15F78E1A265(0, 10);
			if (!func_28(Local_88.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_88.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_88.f_484[iVar0 /*36*/] };
					*uParam2 = Local_88.f_484[iVar0 /*36*/].f_3;
					Local_88.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2667222.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0xAC48FF26FAAA8DD0(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam11)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1121(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x987A5F1E1A67E3C0(func_58(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1121(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2689156[iVar1 /*453*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam6 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1853128[iVar0 /*888*/].f_858) && !func_60(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2714627.f_19;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam6 == 0)
		{
			if (func_1121(iVar1, bParam2, bParam3))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam5 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_59(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_68(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_67(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2783300))
	{
		return 1;
	}
	if (func_64(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_67(iParam0) };
		Global_2783313 = { func_67(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2783300))
		{
			if (unk_0x8C992447292D600F(&Global_2783313))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300);
				unk_0x4FFBF2C0D8249E45(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()
{
	Local_88.f_2[0 /*26*/] = 2;
	Local_88.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_88.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_88.f_2[1 /*26*/] = 2;
	Local_88.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_88.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_88.f_2[2 /*26*/] = 0;
	Local_88.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_88.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_88.f_2[3 /*26*/] = 0;
	Local_88.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_88.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()
{
	func_71();
	if (Local_88.f_122 == 0)
	{
		if (Local_88.f_121 == 0)
		{
			Local_88.f_122 = 10;
		}
		else
		{
			Local_88.f_122 = 9;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 4))
	{
		return;
	}
	switch (Local_88.f_121)
	{
		case 0:
			Local_88.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_88.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_88.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_88.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_88.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_88.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_88.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_88.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_88.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_88.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_88.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_88.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_88.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_88.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_88.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_88.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_88.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_88.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_88.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_88.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_88.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_88.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_88.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_88.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_88.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_88.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_88.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_88.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_88.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_88.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_88.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_88.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_88.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_88.f_123[6 /*36*/].f_14[2] = 180f;
			Local_88.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_88.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_88.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_88.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_88.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_88.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_88.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_88.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_88.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_88.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_88.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_88.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_88.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_88.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_88.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_88.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_88.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_88.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_88.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_88.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_88.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_88.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_88.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_88.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_88.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_88.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_88.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_88.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_88.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_88.f_484[0 /*36*/].f_3 = 179.583f;
			Local_88.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_88.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_88.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_88.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_88.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_88.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_88.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_88.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_88.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_88.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_88.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_88.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_88.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_88.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_88.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_88.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_88.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_88.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_88.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_88.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_88.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_88.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_88.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_88.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_88.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_88.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_88.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_88.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_88.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_88.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_88.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_88.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_88.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_88.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_88.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_88.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_88.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_88.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_88.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_88.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_88.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_88.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_88.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_88.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_88.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_88.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_88.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_88.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_88.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_88.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_88.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_88.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_88.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_88.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_88.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_88.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_88.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_88.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_88.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_88.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_88.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_88.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_88.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_88.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_88.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_88.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_88.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_88.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_88.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_88.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_88.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_88.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_88.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_88.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_88.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_88.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_88.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_88.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_88.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_88.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_88.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_88.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_88.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_88.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_88.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_88.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_88.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_88.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_88.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xCED9E32812D6C7C7(&(Local_88.f_1), 4);
}

var func_71()
{
	if (Local_88.f_121 != -1)
	{
		return Local_88.f_121;
	}
	if (Local_88.f_121 == -1)
	{
		if (unk_0x5E43FCE03B0CD999(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)) == -289320599)
		{
			Local_88.f_121 = 0;
		}
		else
		{
			Local_88.f_121 = 1;
		}
	}
	return Local_88.f_121;
}

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x54E30A65F4FA4962())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()
{
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_88.f_119 != -1)
	{
		iVar0 = unk_0xA1087A6350CD9244(Local_88.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						unk_0x9972EFADA7A2A47D(5, Global_1837147[iVar1], Global_1837192);
						unk_0x9972EFADA7A2A47D(5, Global_1837192, Global_1837147[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_65())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_65())
			{
				if (Global_1893548[iParam0 /*600*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	
	if (func_1006())
	{
		return;
	}
	if (!func_305())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_152(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_151(unk_0x9E2D6C50374FCFA9()))
		{
			if (!func_145())
			{
				func_134(0);
				unk_0xAE3C2157FD741193(0);
				unk_0xCED9E32812D6C7C7(&iLocal_90, 18);
			}
		}
	}
	if (Local_88.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			Var0 = { unk_0x6B62510F212526DC(unk_0x8AF984152F749D80(Local_88.f_2[iVar1 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_79(166, Var0, &uLocal_109, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_133(unk_0x9E2D6C50374FCFA9()) && !func_132(unk_0x9E2D6C50374FCFA9())) && !unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 8)) && (func_131(unk_0x9E2D6C50374FCFA9()) || func_130(unk_0x9E2D6C50374FCFA9()))) || func_60(Param1))
	{
		return;
	}
	Global_1944611 = { Param1 };
	fVar0 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Param1);
	func_126(iParam0, fVar0);
	if (unk_0xF1EC2C71FD1371B8() && unk_0x1A76A9A82BD6228C() == 15)
	{
		if (func_125(unk_0x9E2D6C50374FCFA9()) || func_123(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xFE728873CE709085(1344549371))
			{
				unk_0x324093E167766493(1344549371);
			}
		}
		else if (unk_0xFE728873CE709085(1344549371))
		{
			unk_0x24DB748BF8E6BF86(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_122(unk_0x9E2D6C50374FCFA9(), 21) || func_122(unk_0x9E2D6C50374FCFA9(), 25)))
		{
			func_121(Param1, 1, 0);
		}
		if (!*uParam2 && func_1121(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			*uParam2 = 1;
			if (func_120(iParam0))
			{
				unk_0x8576657A629C4B0A(func_119(iParam0));
				if (func_118(iParam0, -1))
				{
					unk_0xC0F70A3CDEC87ECE(0);
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
					{
						unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 1);
						unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 1);
					}
					unk_0xCED9E32812D6C7C7(&(Global_1944611.f_3), 0);
				}
			}
			if (func_117(iParam0))
			{
				fVar1 = func_115(iParam0);
				if (fVar1 != 1f)
				{
					func_990(fVar1);
					unk_0xCED9E32812D6C7C7(&(Global_1944611.f_3), 1);
				}
			}
			if (!Global_2653189)
			{
				if (func_114(iParam0) && func_125(unk_0x9E2D6C50374FCFA9()))
				{
					func_112(1);
					func_111(2);
				}
			}
			func_110(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_109(unk_0x9E2D6C50374FCFA9(), 19))
			{
				func_108(19);
			}
		}
		if (*uParam2 && func_1121(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			*uParam2 = 0;
			if (func_120(iParam0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_1944611.f_3, 0))
				{
					unk_0x8576657A629C4B0A(1f);
					unk_0xC0F70A3CDEC87ECE(5);
					unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 0);
				}
			}
			if (func_117(iParam0))
			{
				func_107();
				unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 1);
			}
			if (iParam5 && !func_133(unk_0x9E2D6C50374FCFA9()))
			{
				if (func_105(unk_0x9E2D6C50374FCFA9()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_112(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_5193.f_47), iParam0);
}

bool func_81(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5193.f_47, iParam0);
}

void func_82()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_24), &Global_2671504, 2);
	unk_0x049557638ADE4DF8(&(Global_2667222.f_26), &Global_2671506, 19);
	func_103();
	func_85(1, 1, 0);
	func_83();
}

void func_83()
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)
{
	Global_2667222.f_22 = iParam0;
	Global_2667222.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_45), &Global_2671525, 322);
	}
	else
	{
		Global_2667222.f_45 = { Global_2671525 };
		Global_2667222.f_45.f_49 = { Global_2671525.f_49 };
		Global_2667222.f_45.f_52 = Global_2671525.f_52;
		Global_2667222.f_45.f_53 = Global_2671525.f_53;
	}
	if (bParam0)
	{
		func_102();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_87(0);
	func_86();
}

void func_86()
{
	struct<6> Var0;
	
	if (Global_2667222.f_489.f_1 == unk_0x69CE66B03B2184EB())
	{
		Global_2667222.f_489 = { Var0 };
	}
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		Global_2667222.f_712 = 0;
	}
	else
	{
		Global_2667222.f_712 = 1;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_101())
		{
			func_100();
		}
		Global_2667222.f_713.f_518 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_713.f_504 = iParam1;
		Global_2667222.f_713.f_505 = iParam2;
		Global_2667222.f_713.f_506 = iParam10;
		func_98();
		func_92(8, 0, 0, 0, 0);
		Global_2667222.f_713.f_507 = iParam11;
		Global_2667222.f_713.f_512 = iParam3;
		Global_2667222.f_713.f_513 = iParam4;
		Global_2667222.f_713.f_510 = iParam5;
		Global_2667222.f_713.f_511 = iParam6;
		Global_2667222.f_713.f_514 = iParam7;
		Global_2667222.f_713.f_515 = iParam8;
		Global_2667222.f_713.f_516 = iParam9;
		Global_2667222.f_713.f_517 = iParam14;
		Global_2667222.f_713.f_508 = iParam12;
		Global_2667222.f_713.f_509 = iParam13;
		Global_2667222.f_1752 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_98();
		func_92(0, 0, 0, 0, 0);
		Global_2667222.f_1752 = 0;
		Global_2667222.f_1751 = 0;
	}
}

void func_90()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_713), &(Global_2667222.f_1232), 519);
	Global_2667222.f_489 = { Global_2667222.f_495 };
	if (unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		Global_2667222.f_1751 = 0;
	}
}

int func_91()
{
	if ((Global_2667222.f_1751 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_1232.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703656.f_1585.f_703.f_16 != func_65())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_2703656.f_1585.f_703.f_16 /*453*/].f_417, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674884 = 0;
	}
	Global_2667222.f_489 = iParam0;
	Global_2667222.f_489.f_1 = unk_0x69CE66B03B2184EB();
	Global_2667222.f_489.f_2 = iParam1;
	Global_2667222.f_489.f_3 = iParam2;
	Global_2667222.f_489.f_4 = iParam3;
	Global_2667222.f_489.f_5 = iParam4;
}

int func_93()
{
	if ((((((func_105(unk_0x9E2D6C50374FCFA9()) == 229 || func_105(unk_0x9E2D6C50374FCFA9()) == 191) || func_97()) || func_96()) || func_95(unk_0x9E2D6C50374FCFA9())) || Global_2783990.f_227 == 1) || (Global_2667222.f_1752 && func_94(unk_0x9E2D6C50374FCFA9())))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	if (func_131(iParam0))
	{
		return 1;
	}
	if (func_151(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2783989;
	}
	else
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
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
	return 0;
}

var func_96()
{
	return Global_1836575;
}

int func_97()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	func_99();
	Global_2667222.f_713 = 0;
}

void func_99()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667222.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_100()
{
	if (func_91())
	{
		if (Global_2667222.f_713.f_518 == Global_2667222.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_1232), &(Global_2667222.f_713), 519);
		Global_2667222.f_495 = { Global_2667222.f_489 };
		Global_2667222.f_1751 = 1;
	}
}

int func_101()
{
	if ((Global_2667222.f_1752 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_367), &Global_2671847, 121);
}

void func_103()
{
	func_104();
}

void func_104()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667222.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_2261 = 0;
}

int func_105(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_106(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (unk_0x87C0DA419F19FF57(Global_2810287.f_5189))
	{
		if (!Global_2810287.f_5189 == unk_0x69CE66B03B2184EB() && Global_2810287.f_5188 < 1f)
		{
			return;
		}
	}
	Global_2810287.f_5189 = -1;
	Global_2810287.f_5188 = 1f;
}

void func_108(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

bool func_109(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

void func_110(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

void func_111(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_47), iParam0);
}

void func_112(int iParam0)
{
	if (func_113() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_113()
{
	if ((((Global_1057405 != -1 && Global_1057405 != 33) && Global_1057405 != 35) && Global_1057405 != 37) && Global_1057405 != 21)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	if (func_116(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_119(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_121(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2667222.f_45.f_49 = { Param0 };
	Global_2667222.f_45.f_52 = iParam1;
	Global_2667222.f_45.f_53 = iParam2;
}

bool func_122(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

int func_123(int iParam0)
{
	if (func_124(iParam0))
	{
		if (func_125(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_65())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_109(iParam0, 9);
	}
	return 0;
}

void func_126(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_129(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_127();
	}
}

void func_127()
{
	if (!func_128(unk_0x9E2D6C50374FCFA9()))
	{
		func_110(25);
	}
}

bool func_128(int iParam0)
{
	return func_109(iParam0, 25);
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12786;
		
		case 142:
			return Global_262145.f_12774;
		
		case 157:
			return Global_262145.f_12741;
		
		case 159:
			return Global_262145.f_12724;
		
		case 162:
			return Global_262145.f_12835;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 7);
	}
	return 0;
}

bool func_132(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 2);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

void func_134(int iParam0)
{
	if (!func_151(unk_0x9E2D6C50374FCFA9()))
	{
		if (iParam0 || func_142(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			func_110(20);
			func_135(func_137());
			if (func_133(unk_0x9E2D6C50374FCFA9()))
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 8))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 8);
				}
			}
		}
	}
}

void func_135(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_136() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574732.f_1[iVar0] == -1)
			{
				Global_1574732.f_1[iVar0] = iParam0;
				Global_1574732 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_136()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_137()
{
	int iVar0;
	
	iVar0 = func_105(unk_0x9E2D6C50374FCFA9());
	if (func_141(iVar0) == 0 || func_141(iVar0) == 3)
	{
		return -1;
	}
	if (func_140(iVar0))
	{
		return 65;
	}
	if (func_139(iVar0))
	{
		return 66;
	}
	if (func_138(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_142(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_133(iParam0) && !func_132(iParam0)) && !unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_151(iParam0);
	uVar3 = func_144();
	uVar4 = func_145();
	if ((bVar1 && (func_131(iParam0) || func_130(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_125(iParam0)) && !func_143(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810287.f_5193.f_220 != iVar0)
	{
		Global_2810287.f_5193.f_220 = iVar0;
	}
	return iVar0;
}

bool func_143(int iParam0)
{
	return func_109(iParam0, 19);
}

bool func_144()
{
	return Global_1574580;
}

int func_145()
{
	if ((func_109(unk_0x9E2D6C50374FCFA9(), 21) || func_109(unk_0x9E2D6C50374FCFA9(), 22)) || func_148())
	{
		return 1;
	}
	if (func_146())
	{
		func_110(22);
		return 1;
	}
	return 0;
}

int func_146()
{
	if (func_106(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (((func_144() && !func_147()) || func_122(unk_0x9E2D6C50374FCFA9(), 21)) || func_122(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		else
		{
			func_108(27);
		}
	}
	return 0;
}

bool func_147()
{
	return Global_1574580.f_1;
}

bool func_148()
{
	return func_149(424, -1);
}

int func_149(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_150(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

bool func_151(int iParam0)
{
	return func_109(iParam0, 20);
}

float func_152(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_88.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_88.f_2[iVar2 /*26*/].f_1))
				{
					Var4 = { unk_0x6B62510F212526DC(unk_0x8AF984152F749D80(Local_88.f_2[iVar2 /*26*/].f_1), 1) };
					fVar1 = vdist2(Var3, Var4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_153(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_304(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_302() || iParam2 == 28)
	{
		if (func_242(uParam1, iParam2, uParam3, Global_1836353, 0, func_300(), iParam7))
		{
			func_241(1);
			if ((!func_239() && !func_237()) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
			{
				if (func_236())
				{
					func_231();
				}
				else
				{
					unk_0xA5AAB00FA8C570A4(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_230(1);
						Global_1836353 = 0;
						iVar19 = -1;
						if (Global_1836576 != 1)
						{
							func_229(uParam1, 0, 0);
							if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
							{
								unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1121(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_225(iVar3) || Global_2689156[iVar3 /*453*/].f_245 != -1) || func_224(iVar3))
										{
											iVar9 = iVar3;
											if (func_124(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_223(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_220(unk_0x9E2D6C50374FCFA9(), 0) && func_105(unk_0x9E2D6C50374FCFA9()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_219())
							{
								if (func_1121(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
								}
								else
								{
									iVar3 = func_65();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_218(iVar3) && func_214(iVar3, iParam2)) && func_1121(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
								Var6 = { func_209(iVar3) };
								if (iVar3 == unk_0x9E2D6C50374FCFA9())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x61042CA2A97BBB69(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
								iVar5 = func_203(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
								}
								Global_1836353++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_219())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_198(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_197(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_192(iVar3, 0);
								if (bVar2)
								{
									if (func_191(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_190(iParam5))
								{
									func_189(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_189(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xCED9E32812D6C7C7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xA1087A6350CD9244(iVar17);
							if (func_1121(iVar3, 0, 1) && !unk_0xE2D0C323A1AE5D85(iVar14, iVar3))
							{
								iVar3 = unk_0xA1087A6350CD9244(iVar17);
							}
							else
							{
								iVar3 = func_65();
							}
							if (func_218(iVar3))
							{
								if (func_1121(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
									Var6 = { func_209(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
									iVar5 = func_203(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
									}
									Global_1836353++;
									iVar16 = func_192(iVar3, 1);
									if (bVar2)
									{
										if (func_191(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_167(iVar3, unk_0x61042CA2A97BBB69(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							func_164(uParam3, uParam1, iParam2);
						}
						func_163(&(uParam3->f_21));
						func_162();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
						{
							func_161(uParam3, uParam1);
							func_160(uParam1, 0, 1);
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 7);
						}
						func_161(uParam3, uParam1);
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 11);
						}
						if (func_156(uParam3))
						{
							Global_1836576 = 1;
						}
						func_154(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0347CCBD719C8ADC(*uParam1))
					{
						unk_0x2E04B7B46A3670E5(7);
						unk_0x694170BB080C08FF(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x2E04B7B46A3670E5(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_162();
			func_230(0);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
			}
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 10))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xB5A50A903B9AB61B();
}

void func_154(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_163(&(uParam0->f_21));
		func_155(0);
	}
}

void func_155(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xA1087A6350CD9244(uParam0->f_37);
	if (iVar3 != func_65() && func_1121(iVar3, 0, 1))
	{
		Var2 = { func_67(iVar3) };
		iVar1 = func_159(uParam0, uParam0->f_37);
		if (func_158(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_157(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_157(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_157(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_157(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x5AC8E3AF6B0E9458(&Var2))
						{
							iVar4 = 1;
							func_157(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_157(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

var func_159(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_160(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEA5DEA46C3EE64D3(*uParam0, "COLLAPSE"))
	{
		unk_0xD7D6BA6E36AEC182(iParam1);
		unk_0x6F06CF0E9AB02847();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_161(var uParam0, var uParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_33, 10))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam1, "SET_HIGHLIGHT");
		unk_0x4F47E317C74C543B(uParam0->f_35);
		unk_0x6F06CF0E9AB02847();
		unk_0xCED9E32812D6C7C7(&(uParam0->f_33), 10);
	}
}

void func_162()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_163(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar0);
		if (iVar2 != func_65())
		{
			if (func_1121(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_166(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_165(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853128[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_ICON"))
		{
			unk_0x4F47E317C74C543B(iParam1);
			unk_0x4F47E317C74C543B(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4F47E317C74C543B(iParam3);
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

int func_166(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_167(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_188() && iParam4 < func_187())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEA5DEA46C3EE64D3(*uParam2, sVar1))
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_186("");
			}
			else
			{
				unk_0x4F47E317C74C543B(iParam10);
			}
			func_186(sParam1);
			unk_0x4F47E317C74C543B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_186("");
			}
			else
			{
				unk_0x4F47E317C74C543B(65);
			}
			unk_0x4F47E317C74C543B(-1);
			func_186("");
			if (uParam3->f_108 == 6)
			{
				func_186("");
			}
			else
			{
				func_186(&sParam5);
			}
			func_172(uParam3, iParam0);
			unk_0x35395E05C7DB18D0(sParam9);
			unk_0x35395E05C7DB18D0(sParam9);
			if (func_171(uParam3))
			{
				func_170("DPAD_FRIEND");
			}
			else if (func_169(uParam3))
			{
				func_170("DPAD_FRIEND");
			}
			else if (func_168(uParam3))
			{
				func_170("DPAD_CREW");
			}
			else
			{
				func_170("");
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

bool func_168(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 6);
}

bool func_169(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 5);
}

void func_170(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

int func_171(var uParam0)
{
	if (func_169(uParam0) && func_168(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0, int iParam1)
{
	if (func_185(iParam1))
	{
		unk_0x4F47E317C74C543B(121);
	}
	else if (func_177(iParam1))
	{
		unk_0x4F47E317C74C543B(122);
	}
	else if (((unk_0xE2D0C323A1AE5D85(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam1 /*453*/].f_426, 0))
	{
		unk_0x4F47E317C74C543B(123);
	}
	else
	{
		if (func_173())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD7D6BA6E36AEC182(uParam0->f_36);
	}
}

int func_173()
{
	if (unk_0x44859561F653DD4E())
	{
		if (func_175() || func_174())
		{
			return 1;
		}
	}
	return 0;
}

var func_174()
{
	return Global_2714627.f_17;
}

int func_175()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_174();
	}
	return func_176(Global_4718592.f_86750);
}

int func_176(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_177(int iParam0)
{
	if ((func_1121(iParam0, 0, 1) && func_181()) && func_178(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_178(int iParam0, bool bParam1)
{
	return func_179(iParam0, bParam1, 1);
}

int func_179(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_180(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_65() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_65())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181()
{
	if (func_133(unk_0x9E2D6C50374FCFA9()) || func_184())
	{
		if (!func_182(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_182(int iParam0)
{
	if (func_183(iParam0) == 236 || func_183(iParam0) == 150)
	{
		return func_131(iParam0);
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/];
	}
	return -1;
}

int func_184()
{
	switch (func_105(unk_0x9E2D6C50374FCFA9()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)
{
	if (func_173())
	{
		if (func_1121(iParam0, 0, 1))
		{
			return func_124(iParam0);
		}
	}
	if ((func_1121(iParam0, 0, 1) && func_181()) && func_180(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_186(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

int func_187()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_188()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_189(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_188() && iParam3 < func_187())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0347CCBD719C8ADC(*uParam1))
		{
			if (unk_0xEA5DEA46C3EE64D3(*uParam1, sVar1))
			{
				unk_0x4F47E317C74C543B(iParam3);
				if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_186("");
				}
				else
				{
					unk_0x4F47E317C74C543B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					func_170(sParam16);
				}
				else
				{
					func_186(&(uParam2->f_1));
				}
				unk_0x4F47E317C74C543B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_186("");
				}
				else
				{
					unk_0x4F47E317C74C543B(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4F47E317C74C543B(iVar0);
				}
				else
				{
					unk_0x4F47E317C74C543B(-1);
				}
				if (func_219())
				{
					func_186("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 5 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 7 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_TWO_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 8 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
				{
					unk_0x4ADC8B166E139423("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x957E514A6E999374(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x2AE954BA77A66307(iParam10);
					}
					unk_0x26C23BE14F66F202(&(uParam2->f_104));
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x4ADC8B166E139423("FM_AE_CASH");
					unk_0x3788872A07BA04B3(iParam10, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x4ADC8B166E139423("FM_AE_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						unk_0x4ADC8B166E139423("FM_NG_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
					{
						func_170(&(uParam2->f_104));
					}
					else
					{
						func_186("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam14, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (fParam13 != -1f)
				{
					unk_0x4ADC8B166E139423("NUMBER");
					unk_0x957E514A6E999374(fParam13, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (iParam10 != -1)
				{
					unk_0x4F47E317C74C543B(iParam10);
				}
				else
				{
					func_186("");
				}
				if (uParam2->f_108 == 6)
				{
					func_186("");
				}
				else
				{
					func_186(&sParam4);
				}
				func_172(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xACC32B78196FBC2A(sParam8))
				{
					func_186("");
					func_186("");
				}
				else
				{
					unk_0x35395E05C7DB18D0(sParam8);
					unk_0x35395E05C7DB18D0(sParam8);
				}
				if (func_171(uParam2))
				{
					func_170("DPAD_FRIEND");
				}
				else if (func_169(uParam2))
				{
					func_170("DPAD_FRIEND");
				}
				else if (func_168(uParam2))
				{
					func_170("DPAD_CREW");
				}
				else
				{
					func_170("");
				}
				unk_0x6F06CF0E9AB02847();
			}
		}
	}
}

int func_190(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_191(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_65();
}

int func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_133(iParam0)) && !func_151(iParam0))
	{
		iVar0 = func_196();
	}
	iVar1 = func_195(iParam0);
	if (!iVar1 == -1)
	{
		return func_193(iVar1);
	}
	return iVar0;
}

int func_193(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_194(iParam0);
		switch (iVar0)
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
			}
		
		default:
	}
	return 1;
}

var func_194(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_195(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_191(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_196()
{
	return 21;
}

char* func_197(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_198(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_202(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_190(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_201(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_200(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_200(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_201(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		func_204(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_204(int iParam0, bool bParam1)
{
	if (!func_1121(iParam0, 0, 1))
	{
		return;
	}
	if (func_206(iParam0) != -1)
	{
		return;
	}
	if (Global_1656815)
	{
		if (iParam0 == Global_1656815.f_1)
		{
			return;
		}
	}
	if (func_205(iParam0))
	{
		return;
	}
	if (Global_1656853 >= 32)
	{
		return;
	}
	Global_1656820[Global_1656853] = iParam0;
	Global_1656853++;
	if (bParam1)
	{
	}
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656853)
	{
		if (Global_1656820[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (!func_1121(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656813 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656813)
	{
		if (Global_1656652[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1656652[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1656652[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_207(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_207(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1656813)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1656652[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656652[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xE1AFE5E1E834BBF0(Global_1656652[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1656652[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1656813)
	{
		Global_1656652[iVar2 /*5*/] = { Global_1656652[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_208(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_208(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

struct<4> func_209(int iParam0)
{
	struct<4> Var0;
	
	if (func_1121(iParam0, 0, 1))
	{
		Global_2783300 = { func_67(iParam0) };
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (func_158(Global_2783300))
			{
				if (!unk_0x3984FBEFE07835D4(&Global_2783300))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x818F829545200020(0))
		{
			return Var0;
		}
		if (func_213(&Global_2783300))
		{
			Global_2783230 = { func_211(iParam0) };
			func_210(&Global_2783230, &Var0);
		}
	}
	return Var0;
}

void func_210(var uParam0, var uParam1)
{
	unk_0xAF42AF0C81B996D0(uParam0, 35, uParam1);
}

struct<35> func_211(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_212(iParam0))
	{
		return Global_1575078[unk_0x9E2D6C50374FCFA9() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var0);
	return Var1;
}

int func_212(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return 1;
	}
	return 0;
}

int func_213(var uParam0)
{
	if (unk_0xC65B603E7942D0DB())
	{
		if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_132(iParam0) || func_217(iParam0)) || func_216(iParam0))
		{
			return 0;
		}
	}
	if (!func_215(iParam0))
	{
		return 0;
	}
	if ((!func_225(iParam0) && Global_2689156[iParam0 /*453*/].f_245 == -1) && !func_224(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_215(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

bool func_216(int iParam0)
{
	if (func_132(iParam0))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8);
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10) || unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9));
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_219()
{
	switch (func_105(unk_0x9E2D6C50374FCFA9()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_183(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_151(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_105(unk_0x9E2D6C50374FCFA9()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_182(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 && func_221(Global_1893548[iParam0 /*600*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1)
	{
		if (func_221(Global_1893548[iParam0 /*600*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_222(iParam0, 0);
	return 0;
}

int func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1121(unk_0xA1087A6350CD9244(iVar0), 0, 1))
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_225(iVar1) || Global_2689156[iVar1 /*453*/].f_245 != -1) || func_224(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_224(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192 != 0;
}

int func_225(int iParam0)
{
	if (!func_1121(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1121(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		return 0;
	}
	if (!func_226(iParam0))
	{
		return 0;
	}
	if ((unk_0xA9E699D3DC7C0B15(iParam0, unk_0x9E2D6C50374FCFA9()) || func_105(iParam0) == 233) || func_105(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_227(unk_0x9E2D6C50374FCFA9());
	bVar1 = func_227(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_227(int iParam0)
{
	return func_228(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_228(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

void func_229(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4F47E317C74C543B(iParam1);
		unk_0x4F47E317C74C543B(iParam2);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_230(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644206.f_2 == 0)
		{
			Global_1644206.f_2 = 1;
		}
	}
	else if (Global_1644206.f_2 == 1)
	{
		Global_1644206.f_2 = 0;
	}
}

void func_231()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
	{
		if (func_235())
		{
			func_232();
		}
	}
}

void func_232()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_233(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_233(var uParam0, int iParam1)
{
	func_234(uParam0, iParam1);
}

void func_234(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_235()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

int func_236()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0) && func_235())
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1) && func_235())
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	if (func_235())
	{
		if (func_238(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_239()
{
	if (func_235())
	{
		if (func_240(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_241(int iParam0)
{
	if (Global_1644206.f_1 != Global_1644206)
	{
		Global_1644206.f_1 = Global_1644206;
	}
	if (Global_1644206 != iParam0)
	{
		Global_1644206 = iParam0;
	}
}

int func_242(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_299(iParam1);
	fVar4 = func_298();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_297())
		{
			if (func_296() > 0 && Global_1836355)
			{
				unk_0xF43060DF31ACEA55();
				unk_0x7ED668FC4CB0F4C4(fVar4);
				unk_0xAC765EF46E85A446(18);
				if (unk_0xF847447D4467709D())
				{
					unk_0x19DD1C202B338DF3();
				}
				unk_0xAC765EF46E85A446(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_277())
		{
			func_276(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
	{
		func_276(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_296() == 1)
		{
			func_275(bVar3, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_276(uParam0, uParam2, 0);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4660), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF847447D4467709D())
		{
			unk_0x19DD1C202B338DF3();
		}
		unk_0xAC765EF46E85A446(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_296() == 0 && !bParam5))
		{
			func_276(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_274();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xF43060DF31ACEA55();
				}
				unk_0xAC765EF46E85A446(18);
			}
			if (!unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_274();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xF43060DF31ACEA55();
					}
					unk_0xAC765EF46E85A446(18);
				}
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (func_275(bVar3, uParam0, 0))
				{
					func_229(uParam0, 0, 0);
					uVar1 = func_272(iParam1, &(Global_4718592.f_86757), bParam4);
					Var0 = { func_270(iParam1) };
					if (bParam4)
					{
						func_267(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_260(uParam0, func_264(uParam2), func_261(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_253(uParam2);
						if (!unk_0xACC32B78196FBC2A(uParam6))
						{
							sVar6 = sParam6;
						}
						func_251(uParam0, sVar6, func_252(), -1);
					}
					else if (func_173())
					{
						uParam2->f_34 = Global_1836354;
						func_267(uParam0, uVar1, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_244(iParam1);
						uParam2->f_34 = Global_1836354;
						func_267(uParam0, uVar1, "", 0, iVar5, func_243(), 1);
					}
					else
					{
						iVar5 = func_244(iParam1);
						func_267(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xCED9E32812D6C7C7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						unk_0xB0550BC91B0159D6(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_243()
{
	return Global_1836354;
}

int func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_250())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_249(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 20;
			}
			if (func_248(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_247(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = 2;
	}
	if (func_245())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_245()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_61();
	}
	return func_246(Global_4718592.f_86750);
}

int func_246(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 4;
}

bool func_248(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

bool func_249(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_250()
{
	return Global_4718592.f_1 == 0;
}

void func_251(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(sParam2))
		{
			func_170(sParam1);
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_170("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_252()
{
	switch (func_105(unk_0x9E2D6C50374FCFA9()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_253(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_105(unk_0x9E2D6C50374FCFA9()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_256())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_255(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_255(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_254(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_255(bool bParam0)
{
	return func_178(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_256()
{
	return (func_259() && func_257(func_258()));
}

bool func_257(int iParam0)
{
	return func_180(iParam0, 1);
}

int func_258()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35;
}

bool func_259()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148;
}

void func_260(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(uParam2))
		{
			func_170(uParam1);
		}
		else if (func_183(unk_0x9E2D6C50374FCFA9()) == 133)
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT_C");
			unk_0x26C23BE14F66F202(uParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_170("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_261(var uParam0)
{
	int iVar0;
	
	iVar0 = func_183(unk_0x9E2D6C50374FCFA9());
	if (func_263())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_262())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_262()
{
	if (func_183(unk_0x9E2D6C50374FCFA9()) == 133)
	{
		return Global_2810287.f_5114;
	}
	return -1;
}

bool func_263()
{
	return Global_1853001;
}

char* func_264(var uParam0)
{
	int iVar0;
	
	iVar0 = func_183(unk_0x9E2D6C50374FCFA9());
	if (func_263())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_266() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_266() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_262())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_265() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_265()
{
	return Global_2810287.f_5117;
}

int func_266()
{
	if (func_183(unk_0x9E2D6C50374FCFA9()) == 132)
	{
		return Global_2810287.f_5112;
	}
	return -1;
}

void func_267(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_186(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x4ADC8B166E139423(uParam1);
			unk_0x2AE954BA77A66307(iParam5);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_170(sParam1);
		}
		if (func_297() && iParam6)
		{
			if (func_269())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x4ADC8B166E139423("LBD_DPD_CNT");
			unk_0x2AE954BA77A66307(iVar0);
			unk_0x2AE954BA77A66307(iVar1);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_170(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (func_268(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x4F47E317C74C543B(166);
			}
			else if (func_61())
			{
				unk_0x4F47E317C74C543B(166);
			}
		}
		unk_0x6F06CF0E9AB02847();
	}
}

int func_268(int iParam0)
{
	if (func_249(iParam0) || func_248(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_269()
{
	return Global_1836355;
}

struct<4> func_270(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_271(unk_0x9E2D6C50374FCFA9()) || func_247(unk_0x9E2D6C50374FCFA9()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_527, 16);
			break;
	}
	if (func_173() && unk_0x44859561F653DD4E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_527, 16);
	}
	return Var0;
}

bool func_271(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 5;
}

char* func_272(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_173() || unk_0xACC32B78196FBC2A(uParam1)))
	{
		uVar0 = func_273();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xACC32B78196FBC2A(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_273()
{
	if (unk_0x475BC8E76EB32BCF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x71BE58F878F44990())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x759D0DAF85D68E42())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xAE3D31B16CA16E36())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_274()
{
	Global_43528 = 1;
}

bool func_275(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x528279F3F1EEF869("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_matchmaking_card");
	}
	return unk_0x0347CCBD719C8ADC(*uParam1);
}

void func_276(var uParam0, var uParam1, bool bParam2)
{
	unk_0xB0550BC91B0159D6(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_162();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_163(&(uParam1->f_19));
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4660), 5);
		}
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
	}
	if (unk_0xE2D0C323A1AE5D85(uParam1->f_33, 0))
	{
		unk_0xB0550BC91B0159D6(&(uParam1->f_33), 0);
	}
	unk_0x7ED668FC4CB0F4C4(0f);
}

int func_277()
{
	if (func_295())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (!func_292())
	{
		return 0;
	}
	if (!func_290())
	{
		return 0;
	}
	if (func_289(8, -1))
	{
		return 0;
	}
	if (func_296() == 2)
	{
		return 0;
	}
	if (Global_2810287.f_4611)
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	else if (!func_285(unk_0x9E2D6C50374FCFA9(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_284(1) || func_282(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (func_281() && Global_1965714 == 2)
	{
		return 0;
	}
	if (func_279(unk_0x9E2D6C50374FCFA9()) && !func_281())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (Global_1932197)
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637027)
	{
		return 0;
	}
	if ((Global_1959929.f_718.f_5 || Global_1962755.f_718.f_5) || Global_1958957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966718.f_724.f_5 || Global_1966718.f_744.f_724.f_5) || Global_1966718.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973496.f_726.f_5)
	{
		return 0;
	}
	if (func_278(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((Global_1637063 || Global_1637064) || Global_1637065)
	{
		return 0;
	}
	return 1;
}

bool func_278(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6);
}

int func_279(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_280())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_280()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_281()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_282(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_283(unk_0xE2D3D51028F0428A()))
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

int func_283(int iParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_284(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

int func_285(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_286(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_286(int iParam0)
{
	return func_287(iParam0);
}

bool func_287(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_288()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

bool func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

int func_290()
{
	if (func_291() == 0)
	{
		return 1;
	}
	return 0;
}

int func_291()
{
	return Global_1574629.f_18;
}

int func_292()
{
	if (func_293())
	{
		return 1;
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB())
	{
		return 0;
	}
	if (unk_0x6304243969F5A11A())
	{
		return 0;
	}
	return 1;
}

bool func_293()
{
	return Global_1574602;
}

bool func_294()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

bool func_295()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_296()
{
	return Global_1644209.f_68;
}

int func_297()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_298()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x36E90400DA266164()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_300()
{
	if (func_301(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_1581327;
	}
	return 0;
}

int func_301(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x62360EE837E523DC(iParam0);
		}
	}
	return 0;
}

int func_302()
{
	if (func_300())
	{
		return 1;
	}
	if (func_216(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_263())
	{
		return 1;
	}
	if (func_133(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_183(unk_0x9E2D6C50374FCFA9()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_303(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_303(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_303(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_303(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 4);
}

int func_304(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_133(unk_0x9E2D6C50374FCFA9()) && !func_151(unk_0x9E2D6C50374FCFA9())) && !func_182(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_106(unk_0x9E2D6C50374FCFA9(), 0) && func_151(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
		if (func_142(unk_0x9E2D6C50374FCFA9()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = unk_0xF1354995C6159A78();
	}
	else
	{
		iVar0 = func_306();
	}
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Local_89[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_769;
	if (unk_0x0D01086B38EC256F(iVar1))
	{
		if (unk_0x976D40337FCB1481(iVar1))
		{
			iVar2 = unk_0x32F47FD509BB6D38(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_307()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_308(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_308(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 13))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_88.f_113, iVar7))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_6, iVar7))
				{
					if (unk_0xE5965CDF24F93A9F(Var0))
					{
						if (unk_0x04D9F44466CBF3CA(Var0))
						{
							if (!unk_0xE2D0C323A1AE5D85(Local_88.f_109, iVar7))
							{
								if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_5, iVar7))
								{
									if (unk_0x90F6E2F6488B98BA(Local_88.f_2[iVar7 /*26*/].f_2))
									{
										if (unk_0xE5965CDF24F93A9F(unk_0xA5677134B9672173(Local_88.f_2[iVar7 /*26*/].f_2)))
										{
											if (unk_0x31EB55FAEEE9C0F5(Var0) == unk_0xA5677134B9672173(Local_88.f_2[iVar7 /*26*/].f_2))
											{
												if (unk_0xE5965CDF24F93A9F(Var0.f_1))
												{
													if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
													{
														if (unk_0x28AA31872A651BC7(Var0.f_1) == unk_0xE2D3D51028F0428A())
														{
															if (func_1007() == Local_88.f_118)
															{
																unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_5), iVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (unk_0x9044EDB8A7BF67B4(Var0))
						{
							iVar2 = unk_0x28AA31872A651BC7(Var0);
							if (iVar2 == unk_0x8AF984152F749D80(Local_88.f_2[iVar7 /*26*/].f_1))
							{
								if (unk_0xE5965CDF24F93A9F(Var0.f_1))
								{
									if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
									{
										iVar1 = unk_0x28AA31872A651BC7(Var0.f_1);
										if (unk_0x65FAB09725E2FE75(iVar1))
										{
											iVar4 = unk_0xFF65CDB0EB7ACE71(iVar1);
											if (unk_0x976D40337FCB1481(iVar4))
											{
												if (Var0.f_5)
												{
													if (iVar4 == unk_0x9E2D6C50374FCFA9())
													{
														Local_89[unk_0xF1354995C6159A78() /*14*/].f_11++;
														unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_6), iVar7);
														Var6.f_2 = -1355397705;
														Var6.f_10 = unk_0x9E2D6C50374FCFA9();
														func_314(Var6, func_315(0));
														func_309("HUNT_TCKP", 0);
													}
												}
											}
											else if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7, iVar7))
											{
												if (Var0.f_5)
												{
													iVar4 = unk_0xFF65CDB0EB7ACE71(iVar1);
													unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7, iVar7))
										{
											if (Var0.f_5)
											{
												unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7, iVar7))
									{
										if (Var0.f_5)
										{
											unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7, iVar7))
								{
									if (Var0.f_5)
									{
										unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_305())
	{
		if (!func_109(unk_0x9E2D6C50374FCFA9(), 20))
		{
			if (unk_0xE5965CDF24F93A9F(Var0))
			{
				if (unk_0x9044EDB8A7BF67B4(Var0))
				{
					iVar2 = unk_0x28AA31872A651BC7(Var0);
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						iVar3 = unk_0xFF65CDB0EB7ACE71(iVar2);
						if (unk_0xE5965CDF24F93A9F(Var0.f_1))
						{
							if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
							{
								iVar1 = unk_0x28AA31872A651BC7(Var0.f_1);
								if (unk_0x65FAB09725E2FE75(iVar1))
								{
									iVar4 = unk_0xFF65CDB0EB7ACE71(iVar1);
									if (iVar4 == unk_0x9E2D6C50374FCFA9())
									{
										if (unk_0x976D40337FCB1481(iVar3))
										{
											if (func_191(iVar3, 1))
											{
												if (Local_88.f_118 > -1)
												{
													iVar5 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_88.f_118));
													if (func_76(iVar3, iVar5, 1))
													{
														if (!func_145())
														{
															func_134(0);
															func_127();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_309(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0x150D8F58B26E9F70(sParam0);
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	func_310(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_310(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_313() || !unk_0x44859561F653DD4E()) || !func_17(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_311(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_312(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_312(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_313()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_314(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 677240627;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam13 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam13);
	}
}

int func_315(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_1121(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_316()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0xE2D0C323A1AE5D85(iLocal_90, 14))
		{
			unk_0xB0550BC91B0159D6(&iLocal_90, 14);
		}
		return;
	}
	iVar0 = Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_769;
	if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 14))
	{
		if (Local_89[unk_0xF1354995C6159A78() /*14*/].f_1 != 0)
		{
			Local_89[unk_0xF1354995C6159A78() /*14*/].f_1 = 0;
		}
		unk_0xCED9E32812D6C7C7(&iLocal_90, 14);
	}
	if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 15))
	{
		unk_0xCED9E32812D6C7C7(&iLocal_90, 15);
		func_936();
	}
	if (unk_0x0D01086B38EC256F(iVar0))
	{
		if (unk_0x976D40337FCB1481(iVar0))
		{
			uVar1 = unk_0x32F47FD509BB6D38(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_89[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_873();
					func_855();
					func_840();
					break;
				
				case 2:
					func_317();
					break;
				
				case 3:
					func_1020();
					break;
				}
			}
	}
}

void func_317()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = unk_0xF1354995C6159A78();
	iVar2 = unk_0x9E2D6C50374FCFA9();
	if (func_17(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar1 = func_306();
		iVar2 = Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_769;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_89[iVar1 /*14*/].f_1, 4))
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 9))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 1))
			{
				if (iVar1 == Local_88.f_118 || func_1007() == Local_88.f_118)
				{
					if (func_142(iVar2) >= 2)
					{
						sVar3 = func_839(iVar2);
						iVar4 = func_838(iVar2);
						func_836(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0x9E2D6C50374FCFA9())
					{
						if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
						{
							func_705(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1);
							unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
						}
						Var0 = func_704();
						Var0.f_1 = func_703();
						func_460(166, 1, &Var0, 0);
						unk_0xBA5D7196EACB9282(iVar2);
						iLocal_110 = unk_0x847BA8D143D888D1();
						unk_0xC0F70A3CDEC87ECE(0);
						unk_0xCED9E32812D6C7C7(&iLocal_90, 17);
						func_7(&uLocal_111, 0, 0);
					}
				}
				else if (func_305())
				{
					if (func_191(iVar2, 1))
					{
						if (func_142(iVar2) >= 2)
						{
							sVar3 = func_839(unk_0xA1087A6350CD9244(Local_88.f_119));
							iVar4 = func_838(unk_0xA1087A6350CD9244(Local_88.f_119));
							func_836(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0x9E2D6C50374FCFA9())
						{
							if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
							{
								func_705(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1);
								unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
							}
							if (func_128(iVar2))
							{
								Var0 = func_459();
								Var0.f_1 = func_458();
							}
							func_460(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_142(iVar2) >= 2)
						{
							sVar3 = func_839(unk_0xA1087A6350CD9244(Local_88.f_119));
							iVar4 = func_838(unk_0xA1087A6350CD9244(Local_88.f_119));
							func_836(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0x9E2D6C50374FCFA9())
						{
							if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
							{
								func_705(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1);
								unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
							}
							if (func_128(iVar2))
							{
								Var0 = func_459();
								Var0.f_1 = func_458();
							}
							func_460(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_90, 9);
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 3))
			{
				iVar5 = (4 - Local_88.f_115);
				if (iVar1 == Local_88.f_118 || func_1007() == Local_88.f_118)
				{
					if (func_142(iVar2) >= 2)
					{
						sVar3 = func_452();
						iVar4 = func_838(iVar2);
						func_836(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0x9E2D6C50374FCFA9())
					{
						if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
						{
							func_705(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1);
							unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
						}
						Var0 = func_704();
						Var0.f_1 = func_703();
						func_460(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_142(iVar2) >= 2)
					{
						sVar3 = func_839(unk_0xA1087A6350CD9244(Local_88.f_119));
						iVar4 = func_838(unk_0xA1087A6350CD9244(Local_88.f_119));
						if (iVar5 == 1)
						{
							func_836(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_836(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == unk_0x9E2D6C50374FCFA9())
					{
						if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
						{
							func_705(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1);
							unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
						}
						if (func_128(iVar2))
						{
							Var0 = func_459();
							Var0.f_1 = func_458();
						}
						func_460(166, 1, &Var0, 0);
						unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_90, 9);
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_88.f_1, 5))
			{
				if (func_395())
				{
					if (func_1006())
					{
						if (func_142(iVar2) >= 2)
						{
						}
					}
					else if (func_142(iVar2) >= 2)
					{
						func_352(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 6))
					{
						func_705(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_90, 6);
					}
					func_460(166, 0, &Var0, 0);
				}
				unk_0xCED9E32812D6C7C7(&iLocal_90, 9);
			}
		}
		if (unk_0xE2D0C323A1AE5D85(iLocal_90, 9))
		{
			func_936();
			if (!unk_0xE2D0C323A1AE5D85(iLocal_91, 8))
			{
				func_337();
				func_75();
				unk_0xCED9E32812D6C7C7(&iLocal_91, 8);
			}
			if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 10))
			{
			}
			if (func_318(&uLocal_98, 0, 0))
			{
				if (iVar1 == unk_0xF1354995C6159A78())
				{
					unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(iLocal_90, 17))
			{
				if (func_6(&uLocal_111, 10000, 0))
				{
					unk_0xC0F70A3CDEC87ECE(iLocal_110);
					unk_0xB0550BC91B0159D6(&iLocal_90, 17);
				}
			}
		}
	}
}

int func_318(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_110(29);
	if ((*uParam0 > 0 && !func_235()) && func_142(unk_0x9E2D6C50374FCFA9()) != 0)
	{
		if (!func_334())
		{
			func_333();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1944611.f_3), 2);
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_332(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_325(iParam2);
				func_332(uParam0, 2);
			}
			break;
		
		case 2:
			func_325(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_319(func_320(0)))
				{
					unk_0x3410421C60BF7143(1);
				}
				func_332(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
				unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 2);
				func_332(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
			unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_319(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

char* func_320(int iParam0)
{
	if (((func_323(unk_0x9E2D6C50374FCFA9()) || func_322(unk_0x9E2D6C50374FCFA9())) || func_256()) || iParam0)
	{
		if (func_322(unk_0x9E2D6C50374FCFA9()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_221(func_321()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_321()
{
	return Global_1921036;
}

bool func_322(int iParam0)
{
	return func_222(func_105(iParam0), 0);
}

bool func_323(int iParam0)
{
	return func_324(func_105(iParam0));
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148 && func_180(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_325(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0))
	{
		if (((((((((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_1121(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xA829C9A2767AC8EF()) && !func_109(unk_0x9E2D6C50374FCFA9(), 22)) && func_142(unk_0x9E2D6C50374FCFA9()) != 0) && !func_330(func_331())) && !func_323(unk_0x9E2D6C50374FCFA9())) && !func_329(func_105(unk_0x9E2D6C50374FCFA9()))) && !func_328(func_105(unk_0x9E2D6C50374FCFA9())))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 1);
			func_327(func_320(iParam0), -1);
			func_326(1);
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 0);
		}
	}
}

void func_326(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_255(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_235())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_327(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_331()
{
	var uVar0;
	
	uVar0 = unk_0x05CBA41180F5D521();
	if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_332(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_333()
{
	Global_2726776 = 1;
}

int func_334()
{
	if (((((((func_105(unk_0x9E2D6C50374FCFA9()) == 170 || func_105(unk_0x9E2D6C50374FCFA9()) == 219) || func_105(unk_0x9E2D6C50374FCFA9()) == 221) || func_105(unk_0x9E2D6C50374FCFA9()) == 220) || func_105(unk_0x9E2D6C50374FCFA9()) == 216) || func_105(unk_0x9E2D6C50374FCFA9()) == 215) || func_105(unk_0x9E2D6C50374FCFA9()) == 214) || func_105(unk_0x9E2D6C50374FCFA9()) == 218)
	{
		return 1;
	}
	if (func_335(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
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
			break;
		
		case 101:
			return 10;
			break;
		
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
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_337()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_105[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_105[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xE2D0C323A1AE5D85(iLocal_90, 18))
	{
		func_351(1);
		unk_0xB0550BC91B0159D6(&iLocal_90, 18);
	}
	func_348();
	func_338();
}

void func_338()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE2D0C323A1AE5D85(iLocal_90, 7))
	{
		unk_0xCED9E32812D6C7C7(&iLocal_90, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (unk_0x0D01086B38EC256F(iVar1))
			{
				if (iVar1 != unk_0x9E2D6C50374FCFA9())
				{
					if (unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_8, iVar0))
					{
						func_346(iVar1, 432, 0, 0);
						func_339(iVar1, func_345(iLocal_108), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_339(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_341(iParam0))
	{
		return;
	}
	if (func_340(&(Global_2678323.f_624[iParam0]), &(Global_2678323.f_987[iParam0]), &(Global_2678323.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_459[iParam0] = uParam1;
		}
	}
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x87C0DA419F19FF57(*uParam1) || *uParam1 == unk_0x69CE66B03B2184EB())
		{
			*uParam1 = unk_0x69CE66B03B2184EB();
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
	}
	if (!unk_0x87C0DA419F19FF57(*uParam0) || *uParam0 == unk_0x69CE66B03B2184EB())
	{
		if (bParam3)
		{
			if (!unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xCED9E32812D6C7C7(uParam2, iParam4);
			}
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
		else
		{
			if (unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xB0550BC91B0159D6(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x69CE66B03B2184EB())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x87C0DA419F19FF57(*uParam1) && !*uParam1 == unk_0x69CE66B03B2184EB())
	{
	}
	return 0;
}

int func_341(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_342())
	{
		return 1;
	}
	return 0;
}

int func_342()
{
	switch (func_344())
	{
		case 0:
			return func_343();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_343()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_344()
{
	return Global_31505;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_346(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_341(iParam0))
	{
		return;
	}
	if (func_340(&(Global_2678323.f_591[iParam0]), &(Global_2678323.f_954[iParam0]), &(Global_2678323.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_347();
		}
	}
}

void func_347()
{
	Global_2678323.f_1651 = 1;
}

void func_348()
{
	if (unk_0xE2D0C323A1AE5D85(iLocal_90, 16))
	{
		func_86();
		func_349();
		unk_0xB0550BC91B0159D6(&iLocal_90, 16);
	}
}

void func_349()
{
	if (Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
	{
		func_350();
	}
}

void func_350()
{
	struct<28> Var0;
	
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676143 = { Var0 };
	Global_2676143.f_6 = -1;
}

void func_351(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_144())
		{
			if (func_1121(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_1121(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

int func_352(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_394(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_233(&(Var0.f_69), iParam7);
	}
	return func_353(&Var0);
}

int func_353(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_364(uParam0, uParam0->f_17);
	func_363(uParam0);
	if (func_61())
	{
		func_363(uParam0);
	}
	if (func_362(uParam0->f_1))
	{
		func_355();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_354(uParam0->f_69, 8192))
			{
				Global_1932198 = 1;
			}
			return 1;
		}
		if (((Global_2703656.f_2414[0 /*80*/].f_1 == 13 || Global_2703656.f_2414[0 /*80*/].f_1 == 53) || Global_2703656.f_2414[0 /*80*/].f_1 == 54) || Global_2703656.f_2414[0 /*80*/].f_1 == 58)
		{
			Global_2703656.f_2414[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703656.f_2414[iVar0 + 1 /*80*/] = { Global_2703656.f_2414[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703656.f_2414[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_355();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_233(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_354(uParam0->f_69, 128))
			{
				if (func_238(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_233(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_354(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_355()
{
	bool bVar0;
	
	if (Global_2703656.f_2737)
	{
		return;
	}
	if (!Global_78120)
	{
		Global_78120 = 1;
		bVar0 = true;
	}
	func_356();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_356()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_360(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_357(&(Global_2703656.f_2738.f_1), 1);
}

void func_357(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78121)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_359(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_358(0);
}

void func_358(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_359(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_360(var uParam0)
{
	func_361(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_361(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_362(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_363(var uParam0)
{
	if (func_240(uParam0->f_1))
	{
		uParam0->f_72 = func_196();
	}
}

void func_364(var uParam0, int iParam1)
{
	if (func_240(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_1121(iParam1, 0, 1))
	{
		return;
	}
	if (func_238(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_365(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_279(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_279(unk_0x9E2D6C50374FCFA9()) || (func_393() && func_392())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		uVar1 = func_391();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_1121(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_389(iParam1, iParam0, 0);
							}
							else
							{
								return func_378(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_378(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_389(iParam1, iParam0, 0);
				}
				else
				{
					return func_366(0, -1, 0);
				}
			}
			else
			{
				return func_366(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_389(iParam1, iParam0, 0);
		}
		else
		{
			return func_378(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_378(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_366(bool bParam0, int iParam1, bool bParam2)
{
	return func_367(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_367(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_377() || (func_376() && func_374())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_373(iParam2, iVar0);
		}
		else
		{
			return func_373(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_372(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_371(1);
				}
				else
				{
					return func_371(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_368(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_368(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_371(1);
	}
	return func_371(0);
}

int func_368(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_370(iParam0, iParam1, iParam3);
	if (func_369(Global_4718592.f_86750, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
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
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_369(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_372(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_371(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_370(iParam1, iParam0, 4);
	}
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

bool func_374()
{
	if (func_375())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_375()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_376()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_377()
{
	if (func_375() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_381())
			{
				iVar3 = func_195(iParam0);
				if (!iVar3 == -1)
				{
					return func_193(iVar3);
				}
			}
			if ((func_380(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_372(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_371(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_379(1);
			}
			else
			{
				return func_367(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_371(1);
			}
			else
			{
				return func_367(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_195(iParam0);
	if (!iVar4 == -1)
	{
		return func_193(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_379(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_380(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_381()
{
	if ((((((func_174() || func_388()) || func_61()) || func_387()) || func_386()) || func_384()) || func_382())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_382()
{
	return func_383(Global_4718592.f_86750);
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_384()
{
	return func_385(Global_4718592.f_86750);
}

int func_385(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_386()
{
	return Global_2714627.f_24;
}

var func_387()
{
	return Global_2714627.f_21;
}

var func_388()
{
	return Global_2714627.f_18;
}

int func_389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_381())
	{
		iVar2 = func_195(iParam1);
		if (!iVar2 == -1)
		{
			return func_193(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_367(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_390(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_372(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_379(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_390(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
			break;
	}
	switch (iVar0)
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

var func_391()
{
	return Global_2621446.f_2;
}

bool func_392()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_393()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

void func_394(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_395()
{
	int iVar0;
	
	if (!func_17(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (!func_396(1, 1, 1, 0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1, 6))
			{
				unk_0xB0550BC91B0159D6(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_145())
		{
			if (unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1, 6))
			{
				unk_0xB0550BC91B0159D6(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1, 6))
		{
			unk_0xCED9E32812D6C7C7(&(Local_89[unk_0xF1354995C6159A78() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_306();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_89[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_451(unk_0x9E2D6C50374FCFA9(), 29))
	{
		return 0;
	}
	if (func_122(unk_0x9E2D6C50374FCFA9(), 21))
	{
		return 0;
	}
	if (func_122(unk_0x9E2D6C50374FCFA9(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x0843570206F71F38())
		{
			return 0;
		}
	}
	if (!func_215(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xC96A605CF3E9295B())
		{
			return 0;
		}
	}
	if (func_450(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_286(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_290())
	{
		return 0;
	}
	if (func_122(unk_0x9E2D6C50374FCFA9(), 0) || func_122(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if ((func_122(unk_0x9E2D6C50374FCFA9(), 12) || func_122(unk_0x9E2D6C50374FCFA9(), 14)) || func_122(unk_0x9E2D6C50374FCFA9(), 13))
	{
		return 0;
	}
	if (func_445(unk_0x9E2D6C50374FCFA9(), 0, -1))
	{
		if (!func_408())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_407())
		{
			return 0;
		}
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_406(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_405())
	{
		return 0;
	}
	if (func_404(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((func_403(unk_0x9E2D6C50374FCFA9()) && func_402(unk_0x9E2D6C50374FCFA9()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_401())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (func_400(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_95(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_151(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_399(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_397())
	{
		return 0;
	}
	return 1;
}

bool func_397()
{
	return func_398() == 1;
}

int func_398()
{
	return Global_1973362;
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_400(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_401()
{
	return Global_1946934.f_4583 != -1;
}

int func_402(int iParam0)
{
	if (iParam0 != func_65() && func_1121(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_403(int iParam0)
{
	if (iParam0 != func_65() && func_1121(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_404(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_405()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_406(int iParam0)
{
	if (!func_1121(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2);
}

bool func_407()
{
	return Global_100026.f_376 > 0;
}

int func_408()
{
	int iVar0;
	
	iVar0 = func_105(unk_0x9E2D6C50374FCFA9());
	if (((func_444(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30) || func_443(unk_0x9E2D6C50374FCFA9())) || func_442(unk_0x9E2D6C50374FCFA9())) || func_437(unk_0x9E2D6C50374FCFA9()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_435(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_139(iVar0) || func_434(iVar0))
		{
			return 1;
		}
	}
	if (func_335(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_434(iVar0))
		{
			return 1;
		}
	}
	if (func_433(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_432(iVar0))
		{
			return 1;
		}
	}
	if (func_431(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_430(iVar0))
		{
			return 1;
		}
	}
	if (func_429(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_428(iVar0))
		{
			return 1;
		}
	}
	if (func_427(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_426(iVar0))
		{
			return 1;
		}
	}
	if (func_425(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_138(iVar0))
		{
			if (func_423(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
		}
	}
	if (func_422(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_421(iVar0))
		{
			return 1;
		}
		if (func_420(iVar0))
		{
			return 1;
		}
		if (func_419())
		{
			return 1;
		}
	}
	if (func_418(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_417())
		{
			return 1;
		}
	}
	if (func_416(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_420(iVar0))
		{
			return 1;
		}
	}
	if (func_415(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_414(iVar0))
		{
			return 1;
		}
	}
	if (func_413(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_411(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_410(iVar0) || func_409(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_65())
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_417()
{
	return Global_2810287.f_6720;
}

int func_418(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_419()
{
	return Global_2810287.f_6719;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (func_424(iParam0) != func_65())
	{
		return func_424(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_424(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_425(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_65())
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_429(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_431(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_435(int iParam0)
{
	if (func_436(Global_1853128[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_437(int iParam0)
{
	if (func_438(Global_1853128[iParam0 /*888*/].f_267.f_30, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_439(unk_0x9E2D6C50374FCFA9(), 0);
	}
	if (bParam1)
	{
		if (func_439(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_439(int iParam0, bool bParam1)
{
	if (Global_1852964 != func_65())
	{
		if (!func_441(Global_1852964))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9E2D6C50374FCFA9() != Global_1852964)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_1852964 /*453*/].f_199, 24) || func_440(Global_1852964))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 24);
}

int func_440(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 9);
	}
	return 0;
}

int func_441(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 2);
	}
	return 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_445(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_336(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_446(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return iParam0;
	}
	if (func_447(iParam0) != -1)
	{
		iVar0 = func_336(func_447(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_191(iParam0, 0))
			{
				return func_66(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_65();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_65();
}

int func_447(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1121(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_1121(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_448()
{
	return Global_1575046;
}

bool func_449()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

int func_450(int iParam0)
{
	if (func_285(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_451(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

char* func_452()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_66(unk_0x9E2D6C50374FCFA9());
	if (iVar0 != func_65())
	{
		if (iVar0 != unk_0x9E2D6C50374FCFA9())
		{
			if (((func_109(iVar0, 28) || func_109(unk_0x9E2D6C50374FCFA9(), 28)) || func_457(iVar0)) && !func_456(iVar0))
			{
				return func_454(iVar0, 0);
			}
			if (!unk_0x3EBD3AF4E5D7A08C() && !unk_0x3EE42535A14BA719(0, -1, 1))
			{
				return func_454(iVar0, 0);
			}
		}
		uVar1 = func_453(&(Global_1893548[iVar0 /*600*/].f_11.f_105));
		if (unk_0xACC32B78196FBC2A(uVar1))
		{
			return func_454(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_453(var uParam0)
{
	return uParam0;
}

var func_454(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_178(iParam0, 1))
		{
			return func_455();
		}
	}
	return unk_0xAEF70623D03F7B02("GB_REST_ACC");
}

var func_455()
{
	return unk_0xAEF70623D03F7B02("GB_REST_ACCM");
}

int func_456(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (unk_0x3EBD3AF4E5D7A08C())
	{
		if (unk_0x818F829545200020(0))
		{
			if (unk_0x3984FBEFE07835D4(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
		if (unk_0xA7384DAD7CF469DA() || unk_0x8FE9914D4872D601())
		{
			if (unk_0x818F829545200020(0))
			{
				return 0;
			}
		}
		else if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0x818F829545200020(0))
			{
				if (unk_0x3984FBEFE07835D4(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_458()
{
	return ((4 - Local_88.f_115) * Global_262145.f_15784);
}

int func_459()
{
	return ((4 - Local_88.f_115) * Global_262145.f_15783);
}

void func_460(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_701(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_700(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_699(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_697(iParam0))
	{
		if (bParam1)
		{
			if (func_696(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				func_695();
			}
			else
			{
				func_694();
			}
		}
		else
		{
			func_693();
		}
	}
	func_677(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_675(iParam0, uParam2, &iVar0, &iVar5);
	func_656(iParam0, uParam2, &iVar0, &iVar5);
	func_653(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_636(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2810287.f_5193.f_387 = uVar4;
	}
	else
	{
		Global_2810287.f_5193.f_387 = iVar5;
	}
	iVar8 = func_258();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_191(unk_0x9E2D6C50374FCFA9(), 0))
		{
			if (!func_76(unk_0x9E2D6C50374FCFA9(), iVar8, 1))
			{
				func_625(&iVar0, 1);
			}
		}
	}
	func_621(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1944620.f_10 = iVar1;
		func_620();
		func_577(0, unk_0xE2D3D51028F0428A(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1944620.f_9 = iVar0;
		func_551(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_550(iParam0, iVar0);
		if (func_549(iParam0))
		{
			if (func_548(iParam0) > -1)
			{
				func_547(func_548(iParam0), iVar0);
			}
		}
		Global_2727434 = iVar0;
		func_546(&Global_2725690, 0, 0);
	}
	if (func_125(unk_0x9E2D6C50374FCFA9()) || func_151(unk_0x9E2D6C50374FCFA9()))
	{
		func_538(iParam0);
	}
	if (func_324(iParam0))
	{
		Global_1944638.f_13 = iVar0;
		Global_1944638.f_14 = iVar1;
	}
	if (func_329(iParam0))
	{
		Global_1944692.f_13 = iVar0;
		Global_1944692.f_14 = iVar1;
	}
	if (func_432(iParam0))
	{
		Global_1944755.f_12 = iVar0;
		Global_1944755.f_13 = iVar1;
	}
	if (func_430(iParam0))
	{
		Global_1944799.f_12 = iVar0;
		Global_1944799.f_13 = iVar1;
	}
	if (func_428(iParam0))
	{
		Global_1944853.f_12 = iVar0;
		Global_1944853.f_13 = iVar1;
	}
	if (func_328(iParam0))
	{
		if (func_537(iParam0))
		{
			Global_1944935.f_12 = iVar0;
			Global_1944935.f_13 = iVar1;
		}
		else if (func_533(iParam0))
		{
			Global_1944989.f_12 = iVar0;
			Global_1944989.f_13 = iVar1;
		}
	}
	if (func_532(iParam0))
	{
		Global_1945073.f_12 = iVar0;
		Global_1945073.f_13 = iVar1;
	}
	if (func_421(iParam0))
	{
		Global_1945148.f_16 = iVar0;
		Global_1945148.f_17 = iVar1;
	}
	if (func_420(iParam0))
	{
		Global_1945235.f_16 = iVar0;
		Global_1945235.f_17 = iVar1;
	}
	if (func_414(iParam0) || func_410(iParam0))
	{
		Global_1945368.f_15 = iVar0;
		Global_1945368.f_16 = iVar1;
	}
	func_461(bParam1, iParam0);
}

void func_461(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (bParam0)
	{
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
		}
		if (bVar1)
		{
			if (func_531(iVar0) && !func_471(iVar0))
			{
				func_462(iVar0);
			}
			if (func_531(1) && !func_471(1))
			{
				func_462(1);
			}
		}
	}
}

void func_462(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		func_466(func_467(func_468(iParam0)), 1, -1);
		func_463(12, func_465(func_468(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_463(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_464(&Global_1652537);
	Global_1652537[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652537[iVar0 /*106*/].f_97 = iParam5;
	Global_1652537[iVar0 /*106*/].f_104 = iParam9;
	Global_1652537[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		StringCopy(&(Global_1652537[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_464(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_465(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return "CLO_FXM_U_10_2";
			break;
		
		case -1166011267:
		case -906547381:
			return "CLO_FXM_U_10_3";
			break;
		
		case -721794703:
		case 308133919:
			return "CLO_FXM_U_10_4";
			break;
		
		case 488495423:
		case 1072091359:
			return "CLO_FXM_U_10_0";
			break;
		
		case -523083487:
		case 508464559:
			return "CLO_FXM_U_10_1";
			break;
		
		case -1498989066:
		case 452715244:
			return "CLO_FXM_B_0_0";
			break;
		
		case 1281689967:
		case -112025702:
			return "CLO_FXM_B_0_1";
			break;
		
		case 841209069:
		case 128072761:
			return "CLO_FXM_B_0_2";
			break;
		
		case 1742192724:
		case -705996596:
			return "CLO_FXM_B_0_3";
			break;
		
		case -2022943269:
		case 733291825:
			return "CLO_FXM_B_1_0";
			break;
		
		case -804690608:
		case -101367374:
			return "CLO_FXM_B_1_1";
			break;
		
		case -1100955137:
		case 1328802862:
			return "CLO_FXM_B_1_2";
			break;
		
		case 2089631321:
		case 495519961:
			return "CLO_FXM_B_1_3";
			break;
		
		case 591101258:
		case -693204279:
			return "CLO_FXM_B_2_0";
			break;
		
		case -1278730655:
		case 150499164:
			return "CLO_FXM_B_2_1";
			break;
		
		case -1215879713:
		case -129905169:
			return "CLO_FXM_B_2_2";
			break;
		
		case -918271655:
		case 612902523:
			return "CLO_FXM_B_2_3";
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return "CLO_TRM_D_30_1";
			break;
		
		case 991513037:
		case -1634791241:
			return "CLO_TRM_DECL_8";
			break;
		
		case -675149090:
		case -1227437948:
			return "CLO_TRM_DECL_10";
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return "CLO_TRM_U_11_0";
			break;
		
		case -1686814509:
		case -1408179706:
			return "CLO_TRM_DECL_11";
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return "CLO_TRM_O_BS_1";
			break;
		
		case -126686984:
		case 2057911750:
			return "CLO_TRM_U_9_15";
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return "CLO_TRM_U_13_2";
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return "CLO_TRM_U_13_0";
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return "CLO_TRM_U_13_1";
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return "CLO_TRM_PH_1_0";
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return "CLO_TRM_PH_1_1";
			break;
		
		case -1174740608:
		case 1620783517:
			return "CLO_TRM_O_MS_0";
			break;
		
		case -1943796269:
		case -1699338794:
			return "CLO_TRM_O_MS_1";
			break;
		
		case -1372800957:
			return "PS_BAG_64";
			break;
		
		case -1125170035:
			return "PS_BAG_65";
			break;
		
		case 1276052663:
			return "PS_BAG_66";
			break;
		
		case 2138708412:
		case -1894139601:
			return "CLO_TRM_DECL_12";
			break;
		
		case 205793848:
		case -786254870:
			return "CLO_TRM_DECL_13";
			break;
		
		case 1325175663:
		case -773154515:
			return "CLO_TRM_DECL_14";
			break;
		
		case -368088972:
		case 1778247767:
			return "CLO_TRM_DECL_15";
			break;
		
		case -1771053026:
		case -648092145:
			return "CLO_TRM_DECL_16";
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return "CLO_TRM_O_BS_0";
			break;
	}
	switch (iParam0)
	{
		case 153754618:
		case -308681510:
			return "CLO_H4M_DECL_55";
			break;
		
		case 659374865:
		case -2032106950:
			return "CLO_H4M_DECL_57";
			break;
		
		case -13136248:
		case 921664999:
			return "CLO_H4M_DECL_59";
			break;
		
		case -1132960710:
		case 1700345329:
			return "CLO_H4M_DECL_61";
			break;
		
		case 1993003331:
		case -46539229:
			return "CLO_H4M_DECL_63";
			break;
		
		case -625419875:
		case 552527284:
			return "CLO_H4M_DECL_65";
			break;
	}
	switch (iParam0)
	{
		case 156407004:
		case 992344178:
			return "CLO_H4M_DECL_30";
			break;
		
		case 850137272:
		case 530639494:
			return "CLO_H4M_DECL_32";
			break;
		
		case -907859154:
		case 1472939772:
			return "CLO_H4M_DECL_28";
			break;
		
		case -475744483:
		case 1057844725:
			return "CLO_H4M_DECL_29";
			break;
		
		case -47667242:
		case 1810957693:
			return "CLO_H4M_DECL_31";
			break;
		
		case -409012879:
		case 1261157513:
			return "CLO_H4M_DECL_22";
			break;
		
		case 1327735228:
		case 1864065459:
			return "CLO_H4M_DECL_23";
			break;
		
		case -187858220:
		case -1644702422:
			return "CLO_H4M_DECL_20";
			break;
		
		case 1452108911:
		case -1603076035:
			return "CLO_H4M_DECL_21";
			break;
		
		case -1932584643:
		case -310682988:
			return "CLO_H4M_DECL_3";
			break;
		
		case -252057754:
		case 2103214089:
			return "CLO_H4M_DECL_4";
			break;
		
		case 116007471:
		case 2133791411:
			return "CLO_H4M_DECL_5";
			break;
		
		case -463212372:
		case 70168645:
			return "CLO_H4M_DECL_6";
			break;
		
		case -1171053658:
		case -669229192:
			return "CLO_H4M_DECL_27";
			break;
		
		case -990049180:
		case 620186715:
			return "CLO_H4M_DECL_26";
			break;
		
		case -1617127026:
		case 519116877:
			return "CLO_H4M_DECL_25";
			break;
		
		case 1770910373:
		case -1586273681:
			return "CLO_H4M_DECL_24";
			break;
		
		case -2143701887:
		case -72045715:
			return "CLO_H4M_DECL_2";
			break;
		
		case 1999836107:
		case 1105733954:
			return "CLO_H4M_DECL_1";
			break;
		
		case 417383307:
		case -1733868774:
			return "CLO_H4M_DECL_0";
			break;
		
		case -2136840722:
		case 75001248:
			return "CLO_H4M_DECL_7";
			break;
		
		case -83336071:
		case -351320953:
			return "CLO_H4M_DECL_8";
			break;
		
		case -1391222343:
		case -1824952815:
			return "CLO_H4M_DECL_9";
			break;
		
		case -1715443581:
		case -548539487:
			return "CLO_H4M_DECL_10";
			break;
		
		case 1673024230:
		case -925164242:
			return "CLO_H4M_DECL_11";
			break;
		
		case -1832442562:
		case 887187828:
			return "CLO_H4M_DECL_12";
			break;
		
		case 2086548996:
		case 249518856:
			return "CLO_H4M_DECL_13";
			break;
		
		case 1006203940:
		case -1491875241:
			return "CLO_H4M_DECL_14";
			break;
		
		case -1032809603:
		case 1114248050:
			return "CLO_H4M_DECL_15";
			break;
		
		case 1054867669:
		case 335686386:
			return "CLO_H4M_DECL_16";
			break;
		
		case -1911088924:
		case -773349244:
			return "CLO_H4M_DECL_17";
			break;
		
		case 983574619:
		case -1153521254:
			return "CLO_H4M_DECL_18";
			break;
		
		case 2119361460:
		case 449125530:
			return "CLO_H4M_DECL_19";
			break;
		
		case 596636884:
		case -1089524784:
			return "CLO_H4M_DECL_33";
			break;
	}
	switch (iParam0)
	{
		case 193032544:
		case -1747470682:
		case 1743653920:
		case 124145947:
			return "CLO_H4F_U_8_0";
			break;
		
		case -1068490820:
		case -906046046:
			return "CLO_H4F_U_10_0";
			break;
		
		case -843735811:
		case -179852662:
			return "CLO_H4F_U_5_0";
			break;
		
		case -1150093192:
		case -486242812:
			return "CLO_H4F_U_5_1";
			break;
		
		case -1804748036:
		case -1325807533:
			return "CLO_H4F_U_7_1";
			break;
		
		case 686668863:
		case -304462319:
			return "CLO_H4M_DECL_48";
			break;
		
		case 235066951:
		case 1884986113:
			return "CLO_H4M_DECL_47";
			break;
		
		case 1510632880:
		case -594316604:
			return "CLO_H4M_DECL_45";
			break;
		
		case 1912778271:
		case 1362488454:
			return "CLO_H4M_DECL_46";
			break;
		
		case 1883424478:
		case 1295264906:
			return "CLO_H4F_U_7_5";
			break;
		
		case 1585980265:
		case 455362671:
			return "CLO_H4F_U_7_4";
			break;
		
		case 1324675295:
		case 1138553164:
			return "CLO_H4F_D_0_0";
			break;
		
		case 1047498497:
		case 431167936:
			return "CLO_H4F_U_7_2";
			break;
		
		case 1894446071:
		case 733789651:
			return "CLO_H4F_U_7_3";
			break;
		
		case 781674592:
		case 597888060:
			return "CLO_H4F_U_4_0";
			break;
		
		case 1688044709:
		case -1048078133:
			return "CLO_H4F_U_6_4";
			break;
		
		case -1152863750:
		case 1966407715:
			return "CLO_H4F_U_6_3";
			break;
		
		case 217109849:
		case -2013616722:
			return "CLO_H4F_U_6_2";
			break;
		
		case -507609371:
		case -1710110244:
			return "CLO_H4F_U_6_1";
			break;
		
		case -1324049006:
		case -1412666031:
			return "CLO_H4F_U_6_0";
			break;
		
		case 491860090:
		case 1852149696:
			return "CLO_H4F_L_1_0";
			break;
		
		case -98964984:
		case 1346196336:
			return "CLO_H4F_L_1_1";
			break;
		
		case -373077669:
		case 2093788310:
			return "CLO_H4F_L_1_2";
			break;
		
		case -228620636:
		case 1058320393:
			return "CLO_H4F_L_0_0";
			break;
		
		case -135868800:
		case 637248244:
		case 2109360205:
		case 1275503017:
			return "CLO_H4F_PH_1_0";
			break;
		
		case -1340948775:
		case 949078048:
		case -1945344783:
		case -776164077:
			return "CLO_H4F_PH_1_1";
			break;
		
		case -1689217707:
		case 1259040019:
		case 2075837522:
		case -963537219:
			return "CLO_H4F_PH_1_2";
			break;
		
		case -846726717:
		case 1568838149:
		case -1978572545:
		case 878899806:
			return "CLO_H4F_PH_1_3";
			break;
		
		case -1093837746:
		case 1876768442:
		case 1726421675:
		case 724361202:
			return "CLO_H4F_PH_1_4";
			break;
	}
	switch (iParam0)
	{
		case -360715836:
		case -1624389651:
		case 243836943:
		case 1312139416:
			return "CLO_H4F_PLW_0_0";
			break;
		
		case -626734578:
		case -1939725738:
		case -39745983:
		case 1527824974:
			return "CLO_H4F_PLW_0_1";
			break;
		
		case -723370359:
		case -1277169323:
		case 739992372:
		case 1842046915:
			return "CLO_H4F_PLW_0_2";
			break;
		
		case -1214774283:
		case -1538633174:
		case 696212988:
		case 108960043:
			return "CLO_H4F_PLW_0_3";
			break;
		
		case 368984260:
		case 1329899548:
		case -712067560:
		case 414465430:
			return "CLO_H4F_PLW_0_4";
			break;
		
		case 875199772:
		case 1171821892:
		case -991030057:
		case 572608624:
			return "CLO_H4F_PLW_0_5";
			break;
		
		case 40409497:
		case 1824023299:
		case -214699678:
		case 878703853:
			return "CLO_H4F_PLW_0_6";
			break;
		
		case 279950887:
		case 1637174461:
		case 125146481:
		case 1058015837:
			return "CLO_H4F_PLW_0_7";
			break;
		
		case 1823960629:
		case 677993062:
		case 355152092:
		case 1366404896:
			return "CLO_H4F_PLW_0_8";
			break;
		
		case 990612190:
		case -15530054:
		case 700602890:
		case 1537524614:
			return "CLO_H4F_PLW_0_9";
			break;
		
		case -64425650:
		case 1762092216:
		case 152902057:
		case -1675566132:
			return "CLO_H4F_PLW_010";
			break;
		
		case -291875279:
		case 927564093:
		case 1409363824:
		case 1784152123:
			return "CLO_H4F_PLW_011";
			break;
	}
	switch (iParam0)
	{
		case -1364447384:
		case -2133234397:
			return "CLO_H4F_PEY_0_0";
			break;
		
		case 1480295044:
		case 1863698844:
			return "CLO_H4F_PEY_0_1";
			break;
		
		case -1977784761:
		case 330175182:
			return "CLO_H4F_PEY_0_2";
			break;
		
		case 1372550572:
		case 1229553156:
			return "CLO_H4F_PEY_0_3";
			break;
		
		case 1133140258:
		case 758400474:
			return "CLO_H4F_PEY_0_4";
			break;
		
		case 783527797:
		case -623173331:
			return "CLO_H4F_PEY_0_5";
			break;
		
		case 525570229:
		case -894664496:
			return "CLO_H4F_PEY_0_6";
			break;
		
		case 710420154:
		case 17690002:
			return "CLO_H4F_PEY_0_7";
			break;
		
		case 484248516:
		case -265532465:
			return "CLO_H4F_PEY_0_8";
			break;
		
		case -470279681:
		case -1779198113:
			return "CLO_H4F_PEY_0_9";
			break;
		
		case 624976017:
		case 357509846:
			return "CLO_H4F_PEY_010";
			break;
		
		case 393266418:
		case 636341267:
			return "CLO_H4F_PEY_011";
			break;
	}
	switch (iParam0)
	{
		case 944286754:
		case 1683790232:
		case -691678195:
		case 1249842995:
			return "CLO_H4F_T_13_0";
			break;
		
		case -2040870827:
		case 1218208280:
		case -1985267239:
		case 859302053:
			return "CLO_H4F_T_13_1";
			break;
		
		case 1424254297:
		case -2147200793:
		case 2068946214:
		case 621038654:
			return "CLO_H4F_T_13_2";
			break;
		
		case 583565602:
		case 1916319056:
		case -1642143040:
		case -320381947:
			return "CLO_H4F_T_13_3";
			break;
		
		case -288155336:
		case -1374540534:
		case -1869854821:
		case -5799547:
			return "CLO_H4F_T_13_4";
			break;
		
		case 1168361176:
		case -1143617391:
		case 1112910639:
		case -914123458:
			return "CLO_H4F_T_13_5";
			break;
		
		case 190370371:
		case -927735219:
		case 755400849:
		case -34144732:
			return "CLO_H4F_T_13_6";
			break;
		
		case 572784601:
		case -663060006:
		case 1666772277:
		case -1509306805:
			return "CLO_H4F_T_13_7";
			break;
		
		case -245293476:
		case -151011612:
		case 1312408311:
		case -657181729:
			return "CLO_H4F_T_13_8";
			break;
		
		case -5981469:
		case 79780455:
		case 410507132:
		case -2104752304:
			return "CLO_H4F_T_13_9";
			break;
		
		case -2056851459:
		case -321877893:
		case -1105452802:
		case -2102601008:
			return "CLO_H4F_T_13_10";
			break;
		
		case 41118228:
		case -613915217:
		case 258163595:
		case -2006391224:
			return "CLO_H4F_T_13_11";
			break;
		
		case -255965526:
		case -917847692:
		case -459280891:
		case 561715294:
			return "CLO_H4F_T_13_12";
			break;
		
		case -1646780193:
		case 908892982:
		case -1293088096:
		case 691873762:
			return "CLO_H4F_T_13_13";
			break;
		
		case -1677189825:
		case 601454224:
		case 138786128:
		case 1056887653:
			return "CLO_H4F_T_13_14";
			break;
		
		case 362614887:
		case -16110350:
		case 1462555445:
		case 1425538903:
			return "CLO_H4F_T_13_15";
			break;
	}
	switch (iParam0)
	{
		case 598488729:
		case 964509759:
			return "CLO_H4M_B_4_0";
			break;
		
		case 854447388:
		case 1806705832:
			return "CLO_H4M_B_4_1";
			break;
		
		case 2001034706:
		case 1728518998:
			return "CLO_H4M_B_4_2";
			break;
		
		case -2138345378:
		case -1724448843:
			return "CLO_H4M_B_4_3";
			break;
		
		case 1254196427:
		case -2106535383:
			return "CLO_H4M_B_4_4";
			break;
		
		case 1711192901:
		case -1261717794:
			return "CLO_H4M_B_4_5";
			break;
		
		case -1175362775:
		case -686556306:
			return "CLO_H4M_B_4_6";
			break;
		
		case -867891252:
		case -1067659776:
			return "CLO_H4M_B_4_7";
			break;
		
		case -1653233102:
		case -358800748:
			return "CLO_H4M_B_4_8";
			break;
		
		case -1392490169:
		case -605518549:
			return "CLO_H4M_B_4_9";
			break;
		
		case 625638735:
		case -734987935:
			return "CLO_H4M_B_4_10";
			break;
		
		case 268817094:
		case -503573257:
			return "CLO_H4M_B_4_11";
			break;
		
		case 1102231075:
		case -273305494:
			return "CLO_H4M_B_4_12";
			break;
		
		case 1551035299:
		case 259518446:
			return "CLO_H4M_B_4_13";
			break;
		
		case -639637893:
		case -1618604024:
			return "CLO_H4M_B_4_14";
			break;
		
		case -727983117:
		case -1085911160:
			return "CLO_H4M_B_4_15";
			break;
		
		case 106807158:
		case -854791403:
			return "CLO_H4M_B_4_16";
			break;
		
		case -283209480:
		case -623769953:
			return "CLO_H4M_B_4_17";
			break;
		
		case 1890849825:
		case 1718492629:
			return "CLO_H4M_B_4_18";
			break;
		
		case -1959114451:
		case 1951971754:
			return "CLO_H4M_B_4_19";
			break;
	}
	switch (iParam0)
	{
		case -36224791:
		case 327104734:
			return "CLO_H4M_PEY_1_0";
			break;
		
		case -1139163793:
		case 99196339:
			return "CLO_H4M_PEY_1_1";
			break;
		
		case -1842419302:
		case 804581833:
			return "CLO_H4M_PEY_1_2";
			break;
		
		case 2121581094:
		case 566908276:
			return "CLO_H4M_PEY_1_3";
			break;
		
		case 1957801632:
		case -1535223074:
			return "CLO_H4M_PEY_1_4";
			break;
		
		case 1660947261:
		case -1766539445:
			return "CLO_H4M_PEY_1_5";
			break;
		
		case 997276700:
		case -1107784238:
			return "CLO_H4M_PEY_1_6";
			break;
		
		case 724278161:
		case -1301711180:
			return "CLO_H4M_PEY_1_7";
			break;
		
		case -1880201963:
		case 1229923461:
			return "CLO_H4M_PEY_1_8";
			break;
		
		case 2108670104:
		case 999885081:
			return "CLO_H4M_PEY_1_9";
			break;
		
		case 1149517553:
		case -1409944646:
			return "CLO_H4M_PEY_110";
			break;
		
		case -1842521530:
		case -1678486601:
			return "CLO_H4M_PEY_111";
			break;
		
		case -1661989803:
		case -1630379289:
			return "CLO_H4M_PEY_2_0";
			break;
		
		case 315029509:
		case -442077042:
			return "CLO_H4M_PEY_2_1";
			break;
		
		case 76045192:
		case -2097370308:
			return "CLO_H4M_PEY_2_2";
			break;
		
		case -231524642:
		case -900220431:
			return "CLO_H4M_PEY_2_3";
			break;
		
		case -538078637:
		case -1147331460:
			return "CLO_H4M_PEY_2_4";
			break;
		
		case 1280600755:
		case 511435320:
			return "CLO_H4M_PEY_2_5";
			break;
		
		case 1050267454:
		case 280643253:
			return "CLO_H4M_PEY_2_6";
			break;
		
		case 686728168:
		case 52898703:
			return "CLO_H4M_PEY_2_7";
			break;
		
		case 388825189:
		case -182939790:
			return "CLO_H4M_PEY_2_8";
			break;
		
		case -1765539843:
		case -380995642:
			return "CLO_H4M_PEY_2_9";
			break;
		
		case -332552075:
		case -321839039:
			return "CLO_H4M_PEY_210";
			break;
		
		case -624917093:
		case 1940860411:
			return "CLO_H4M_PEY_211";
			break;
		
		case -1463507504:
		case 1073312767:
			return "CLO_H4M_PEY_3_0";
			break;
		
		case -744686720:
		case 315136414:
			return "CLO_H4M_PEY_3_1";
			break;
		
		case -982294739:
		case 590559859:
			return "CLO_H4M_PEY_3_2";
			break;
		
		case 1101354891:
		case 833640293:
			return "CLO_H4M_PEY_3_3";
			break;
		
		case -352998867:
		case 1113749705:
			return "CLO_H4M_PEY_3_4";
			break;
		
		case -629143230:
		case 349871546:
			return "CLO_H4M_PEY_3_5";
			break;
		
		case 214625751:
		case 1720729896:
			return "CLO_H4M_PEY_3_6";
			break;
		
		case 1809853456:
		case 2002248375:
			return "CLO_H4M_PEY_3_7";
			break;
		
		case 1473119212:
		case 1227163218:
			return "CLO_H4M_PEY_3_8";
			break;
		
		case -1988237493:
		case 1529621088:
			return "CLO_H4M_PEY_3_9";
			break;
		
		case -308780352:
		case -488766247:
			return "CLO_H4M_PEY_310";
			break;
		
		case -539048115:
		case 1676314352:
			return "CLO_H4M_PEY_311";
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
			return "CLO_SUM_DECL_0";
			break;
		
		case 676807987:
			return "CLO_SUF_DECL_0";
			break;
		
		case 1888753218:
			return "CLO_SUM_DECL_1";
			break;
		
		case 272160153:
			return "CLO_SUF_DECL_1";
			break;
		
		case -552467991:
			return "CLO_SUM_DECL_2";
			break;
		
		case 1593344440:
			return "CLO_SUF_DECL_2";
			break;
		
		case -1655919948:
			return "CLO_SUM_DECL_3";
			break;
		
		case 546222390:
			return "CLO_SUF_DECL_3";
			break;
		
		case -917106601:
			return "CLO_SUM_DECL_4";
			break;
		
		case 1983375900:
			return "CLO_SUF_DECL_4";
			break;
		
		case 1595446967:
			return "CLO_SUM_DECL_5";
			break;
		
		case -620589387:
			return "CLO_SUF_DECL_5";
			break;
		
		case -530593323:
			return "CLO_SUM_DECL_6";
			break;
		
		case 383923929:
			return "CLO_SUF_DECL_6";
			break;
		
		case 561619447:
			return "CLO_SUM_DECL_7";
			break;
		
		case -1703406594:
			return "CLO_SUF_DECL_7";
			break;
		
		case -1913656173:
			return "CLO_SUM_DECL_8";
			break;
		
		case -398286533:
			return "CLO_SUF_DECL_8";
			break;
		
		case -1766901922:
			return "CLO_SUM_DECL_9";
			break;
		
		case -80478106:
			return "CLO_SUF_DECL_9";
			break;
		
		case 2091781849:
			return "CLO_SUM_DECL_10";
			break;
		
		case 1835331655:
			return "CLO_SUF_DECL_10";
			break;
		
		case 1824588341:
			return "CLO_SUM_DECL_11";
			break;
		
		case -1650596870:
			return "CLO_SUF_DECL_11";
			break;
		
		case 242597641:
			return "CLO_SUM_DECL_12";
			break;
		
		case 1231926496:
			return "CLO_SUF_DECL_12";
			break;
		
		case 566785691:
			return "CLO_SUM_DECL_13";
			break;
		
		case -1506181253:
			return "CLO_SUF_DECL_13";
			break;
		
		case -2091312957:
			return "CLO_SUM_DECL_14";
			break;
		
		case -1737145605:
			return "CLO_SUF_DECL_14";
			break;
		
		case -2079214831:
			return "CLO_SUM_DECL_15";
			break;
		
		case 1673851512:
			return "CLO_SUF_DECL_15";
			break;
		
		case 1359156274:
			return "CLO_SUM_DECL_16";
			break;
		
		case 1023339598:
			return "CLO_SUF_DECL_16";
			break;
		
		case -1302300594:
			return "CLO_SUM_DECL_17";
			break;
		
		case -163738770:
			return "CLO_SUF_DECL_17";
			break;
		
		case -1351518396:
			return "CLO_SUM_DECL_18";
			break;
		
		case 1863218823:
			return "CLO_SUF_DECL_18";
			break;
		
		case -797874817:
			return "CLO_SUM_DECL_19";
			break;
		
		case 333966447:
			return "CLO_SUF_DECL_19";
			break;
		
		case -385507297:
			return "CLO_SUM_DECL_20";
			break;
		
		case 1412626052:
			return "CLO_SUF_DECL_20";
			break;
		
		case 2011910758:
			return "CLO_SUM_DECL_21";
			break;
		
		case -39100956:
			return "CLO_SUF_DECL_21";
			break;
		
		case -1953985443:
			return "CLO_SUM_DECL_22";
			break;
		
		case 1631533003:
			return "CLO_SUF_DECL_22";
			break;
		
		case -1124222352:
			return "CLO_SUM_DECL_23";
			break;
		
		case 1493430918:
			return "CLO_SUF_DECL_23";
			break;
		
		case -1806994767:
			return "CLO_SUM_DECL_24";
			break;
		
		case -196693334:
			return "CLO_SUF_DECL_24";
			break;
		
		case -1445761968:
			return "CLO_SUM_DECL_25";
			break;
		
		case 553507495:
			return "CLO_SUF_DECL_25";
			break;
		
		case -89186417:
			return "CLO_SUM_DECL_26";
			break;
		
		case 2003474700:
			return "CLO_SUF_DECL_26";
			break;
		
		case -308083083:
			return "CLO_SUM_DECL_27";
			break;
		
		case 1121792228:
			return "CLO_SUF_DECL_27";
			break;
		
		case 667714507:
			return "CLO_SUM_DECL_28";
			break;
		
		case -1424651669:
			return "CLO_SUF_DECL_28";
			break;
		
		case -1610210252:
			return "CLO_SUM_DECL_29";
			break;
		
		case -1454164346:
			return "CLO_SUF_DECL_29";
			break;
		
		case 1868506246:
			return "CLO_SUM_B_3_4";
			break;
		
		case -307572086:
			return "CLO_SUF_B_3_4";
			break;
		
		case 1686703834:
			return "CLO_SUM_B_3_5";
			break;
		
		case -1486436861:
			return "CLO_SUF_B_3_5";
			break;
		
		case -1811091999:
			return "CLO_SUM_B_3_6";
			break;
		
		case -1705464857:
			return "CLO_SUF_B_3_6";
			break;
		
		case 414381867:
			return "CLO_SUM_B_3_7";
			break;
		
		case -469188798:
			return "CLO_SUF_B_3_7";
			break;
		
		case -1206261789:
			return "CLO_SUM_L_1_25";
			break;
		
		case 692621401:
			return "CLO_SUF_L_2_25";
			break;
		
		case 1395785293:
			return "CLO_SUM_U_0_25";
			break;
		
		case 60231546:
			return "CLO_SUF_U_0_25";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
			return "CLO_VWM_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return "CLO_VWF_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
			return "CLO_VWM_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return "CLO_VWF_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
			return "CLO_VWM_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return "CLO_VWF_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
			return "CLO_VWM_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return "CLO_VWF_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
			return "CLO_VWM_U_23_5";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return "CLO_VWF_U_21_5";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
			return "CLO_VWM_U_23_8";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return "CLO_VWF_U_21_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
			return "CLO_VWM_U_23_9";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return "CLO_VWF_U_21_9";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
			return "CLO_VWM_U_23_10";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return "CLO_VWF_U_21_10";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
			return "CLO_VWM_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return "CLO_VWF_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
			return "CLO_VWM_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return "CLO_VMF_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
			return "CLO_VWM_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return "CLO_VWF_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
			return "CLO_VWM_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return "CLO_VWF_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
			return "CLO_VWM_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return "CLO_VWF_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
			return "CLO_VWM_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return "CLO_VWF_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
			return "CLO_VWM_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return "CLO_VWF_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
			return "CLO_VWM_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return "CLO_VWF_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
			return "CLO_VWM_U_23_0";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return "CLO_VMF_U_21_0";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
			return "CLO_VWM_U_23_2";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return "CLO_VMF_U_21_2";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
			return "CLO_VWM_U_23_4";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return "CLO_VMF_U_21_4";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
			return "CLO_VWM_U_23_7";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return "CLO_VMF_U_21_7";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
			return "CLO_AWM_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_000_F"):
			return "CLO_AWF_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_001_M"):
			return "CLO_AWM_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_001_F"):
			return "CLO_AWF_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_002_M"):
			return "CLO_AWM_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_002_F"):
			return "CLO_AWF_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_003_M"):
			return "CLO_AWM_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_003_F"):
			return "CLO_AWF_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_004_M"):
			return "CLO_AWM_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_004_F"):
			return "CLO_AWF_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_005_M"):
			return "CLO_AWM_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_005_F"):
			return "CLO_AWF_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_006_M"):
			return "CLO_AWM_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_006_F"):
			return "CLO_AWF_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_007_M"):
			return "CLO_AWM_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_007_F"):
			return "CLO_AWF_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_008_M"):
			return "CLO_AWM_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_008_F"):
			return "CLO_AWF_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_009_M"):
			return "CLO_AWM_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_009_F"):
			return "CLO_AWF_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_010_M"):
			return "CLO_AWM_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_010_F"):
			return "CLO_AWF_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_011_M"):
			return "CLO_AWM_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_011_F"):
			return "CLO_AWF_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_012_M"):
			return "CLO_AWM_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_012_F"):
			return "CLO_AWF_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_013_M"):
			return "CLO_AWM_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_013_F"):
			return "CLO_AWF_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_014_M"):
			return "CLO_AWM_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_014_F"):
			return "CLO_AWF_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_015_M"):
			return "CLO_AWM_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_015_F"):
			return "CLO_AWF_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_016_M"):
			return "CLO_AWM_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_016_F"):
			return "CLO_AWF_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_017_M"):
			return "CLO_AWM_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_017_F"):
			return "CLO_AWF_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_018_M"):
			return "CLO_AWM_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_018_F"):
			return "CLO_AWF_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_019_M"):
			return "CLO_AWM_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_019_F"):
			return "CLO_AWF_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_020_M"):
			return "CLO_AWM_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_020_F"):
			return "CLO_AWF_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_021_M"):
			return "CLO_AWM_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_021_F"):
			return "CLO_AWF_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_022_M"):
			return "CLO_AWM_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_022_F"):
			return "CLO_AWF_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_023_M"):
			return "CLO_AWM_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_023_F"):
			return "CLO_AWF_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_024_M"):
			return "CLO_AWM_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_024_F"):
			return "CLO_AWF_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_025_M"):
			return "CLO_AWM_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_025_F"):
			return "CLO_AWF_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_026_M"):
			return "CLO_AWM_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_026_F"):
			return "CLO_AWF_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_027_M"):
			return "CLO_AWM_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_027_F"):
			return "CLO_AWF_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_028_M"):
			return "CLO_AWM_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_028_F"):
			return "CLO_AWF_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_029_M"):
			return "CLO_AWM_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_029_F"):
			return "CLO_AWF_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_030_M"):
			return "CLO_AWM_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_030_F"):
			return "CLO_AWF_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_031_M"):
			return "CLO_AWM_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_031_F"):
			return "CLO_AWF_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_032_M"):
			return "CLO_AWM_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_032_F"):
			return "CLO_AWF_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_033_M"):
			return "CLO_AWM_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_033_F"):
			return "CLO_AWF_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_034_M"):
			return "CLO_AWM_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_034_F"):
			return "CLO_AWF_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_035_M"):
			return "CLO_AWM_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_035_F"):
			return "CLO_AWF_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_036_M"):
			return "CLO_AWM_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_036_F"):
			return "CLO_AWF_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_037_M"):
			return "CLO_AWM_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_037_F"):
			return "CLO_AWF_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_038_M"):
			return "CLO_AWM_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_038_F"):
			return "CLO_AWF_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_039_M"):
			return "CLO_AWM_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_039_F"):
			return "CLO_AWF_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_040_M"):
			return "CLO_AWM_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_040_F"):
			return "CLO_AWF_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_041_M"):
			return "CLO_AWM_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_041_F"):
			return "CLO_AWF_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_042_M"):
			return "CLO_AWM_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_042_F"):
			return "CLO_AWF_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_043_M"):
			return "CLO_AWM_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_043_F"):
			return "CLO_AWF_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_044_M"):
			return "CLO_AWM_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_044_F"):
			return "CLO_AWF_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_045_M"):
			return "CLO_AWM_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_045_F"):
			return "CLO_AWF_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_046_M"):
			return "CLO_AWM_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_046_F"):
			return "CLO_AWF_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_047_M"):
			return "CLO_AWM_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_047_F"):
			return "CLO_AWF_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_048_M"):
			return "CLO_AWM_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_048_F"):
			return "CLO_AWF_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_049_M"):
			return "CLO_AWM_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_049_F"):
			return "CLO_AWF_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_050_M"):
			return "CLO_AWM_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_050_F"):
			return "CLO_AWF_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_051_M"):
			return "CLO_AWM_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_051_F"):
			return "CLO_AWF_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_052_M"):
			return "CLO_AWM_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_052_F"):
			return "CLO_AWF_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_053_M"):
			return "CLO_AWM_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_053_F"):
			return "CLO_AWF_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_054_M"):
			return "CLO_AWM_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_054_F"):
			return "CLO_AWF_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_055_M"):
			return "CLO_AWM_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_055_F"):
			return "CLO_AWF_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_056_M"):
			return "CLO_AWM_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_056_F"):
			return "CLO_AWF_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_057_M"):
			return "CLO_AWM_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_057_F"):
			return "CLO_AWF_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_058_M"):
			return "CLO_AWM_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_058_F"):
			return "CLO_AWF_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_059_M"):
			return "CLO_AWM_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_059_F"):
			return "CLO_AWF_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_060_M"):
			return "CLO_AWM_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_060_F"):
			return "CLO_AWF_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_061_M"):
			return "CLO_AWMDECL_61";
		
		case joaat("MP_Christmas2018_Tee_061_F"):
			return "CLO_AWF_DECL_61";
		
		case joaat("MP_Christmas2018_Tee_062_M"):
			return "CLO_AWM_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_062_F"):
			return "CLO_AWF_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_063_M"):
			return "CLO_AWM_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_063_F"):
			return "CLO_AWF_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_064_M"):
			return "CLO_AWM_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_064_F"):
			return "CLO_AWF_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_065_M"):
			return "CLO_AWM_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_065_F"):
			return "CLO_AWF_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_066_M"):
			return "CLO_AWM_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_066_F"):
			return "CLO_AWF_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_067_M"):
			return "CLO_AWM_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_067_F"):
			return "CLO_AWF_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_068_M"):
			return "CLO_AWM_DECL_68";
		
		case joaat("MP_Christmas2018_Tee_068_F"):
			return "CLO_AWF_DECL_68";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
			return "CLO_X5F_U_16_0";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return "CLO_X5M_U_16_0";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
			return "CLO_X5F_U_16_1";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return "CLO_X5M_U_16_1";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
			return "CLO_X5F_U_16_2";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return "CLO_X5M_U_16_2";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
			return "CLO_X5F_U_16_3";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return "CLO_X5M_U_16_3";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
			return "CLO_X5F_U_16_4";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return "CLO_X5M_U_16_4";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
			return "CLO_X5F_U_16_5";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return "CLO_X5M_U_16_5";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
			return "CLO_X5F_U_16_6";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return "CLO_X5M_U_16_6";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
			return "CLO_X5F_U_16_7";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return "CLO_X5M_U_16_7";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
			return "CLO_X5F_U_16_8";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return "CLO_X5M_U_16_8";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
			return "CLO_X5F_U_16_9";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return "CLO_X5M_U_16_9";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
			return "CLO_X5F_U_16_10";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return "CLO_X5M_U_16_10";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
			return "CLO_X5F_U_16_11";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return "CLO_X5M_U_16_11";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
			return "CLO_X5F_U_16_12";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return "CLO_X5M_U_16_12";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
			return "CLO_X5F_U_16_13";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return "CLO_X5M_U_16_13";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return "CLO_BHM_DECL_0";
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return "CLO_BHM_DECL_1";
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return "CLO_BHM_DECL_2";
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return "CLO_BHM_DECL_3";
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return "CLO_BHM_DECL_4";
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return "CLO_BHM_DECL_5";
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return "CLO_BHM_DECL_6";
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return "CLO_BHM_DECL_7";
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return "CLO_BHM_DECL_8";
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return "CLO_BHM_DECL_9";
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return "CLO_BHM_DECL_10";
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return "CLO_BHM_DECL_11";
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return "CLO_BHM_DECL_12";
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return "CLO_BHM_DECL_13";
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return "CLO_BHM_DECL_14";
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return "CLO_BHM_DECL_15";
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return "CLO_BHM_DECL_16";
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return "CLO_BHM_DECL_17";
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return "CLO_BHM_DECL_18";
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return "CLO_BHM_DECL_19";
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return "CLO_BHM_DECL_20";
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return "BBNCSHIRT3";
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return "BBNCSHIRT4";
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return "BBNCSHIRT5";
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return "BBNCSHIRT1";
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return "BBNCSHIRT7";
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return "BBNCSHIRT2";
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return "BBNCSHIRT6";
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return "BBNCSHIRT8";
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return "BBNCSHIRT9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return "CLO_BHF_DECL_30";
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return "CLO_BHF_DECL_31";
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return "CLO_BHF_DECL_32";
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return "CLO_BHF_DECL_33";
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return "CLO_BHF_DECL_34";
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return "CLO_BHF_DECL_35";
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return "CLO_BHF_DECL_36";
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return "CLO_BHF_DECL_37";
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return "CLO_BHF_DECL_38";
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return "CLO_BHF_DECL_39";
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return "CLO_BHF_DECL_40";
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return "CLO_BHF_DECL_41";
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return "CLO_BHF_DECL_42";
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return "CLO_BHF_DECL_43";
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return "CLO_BHF_DECL_44";
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return "CLO_BHF_DECL_45";
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return "CLO_BHF_DECL_46";
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return "CLO_BHF_DECL_47";
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return "CLO_BHF_DECL_48";
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return "CLO_BHF_DECL_49";
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return "CLO_BHF_DECL_50";
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return "CLO_BHF_DECL_51";
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return "CLO_BHF_DECL_52";
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return "CLO_BHF_DECL_53";
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return "CLO_BHF_DECL_54";
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return "CLO_BHF_DECL_55";
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return "CLO_BHF_DECL_56";
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return "CLO_BHF_DECL_57";
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return "CLO_BHF_DECL_58";
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return "CLO_BHF_DECL_59";
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return "CLO_BHF_DECL_60";
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return "CLO_BHF_DECL_61";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
			return "CLO_X17M_O_M_0";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return "CLO_X17F_O_M_0";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
			return "CLO_X17M_O_M_1";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return "CLO_X17F_O_M_1";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
			return "CLO_X17M_O_M_2";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return "CLO_X17F_O_M_2";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
			return "CLO_X17M_O_M_3";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return "CLO_X17F_O_M_3";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
			return "CLO_X17M_O_M_4";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return "CLO_X17F_O_M_4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return "CLO_LTSM_O_14";
		
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return "UNLOCK_AWD_KRAMP1";
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return "UNLOCK_AWD_KRAMP2";
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return "UNLOCK_AWD_KRAMP3";
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return "UNLOCK_AWD_KRAMP4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
			return "CLO_GRM_PH_6_0";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return "CLO_GRF_PH_6_0";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
			return "CLO_GRM_PH_6_2";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return "CLO_GRF_PH_6_2";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
			return "CLO_GRM_PH_6_4";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return "CLO_GRF_PH_6_4";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
			return "CLO_GRM_PH_6_5";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return "CLO_GRF_PH_6_5";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
			return "CLO_GRM_PH_6_6";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return "CLO_GRF_PH_6_6";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
			return "CLO_GRM_PH_6_7";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return "CLO_GRF_PH_6_7";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
			return "CLO_GRM_PH_6_8";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return "CLO_GRF_PH_6_8";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
			return "CLO_GRM_PH_6_10";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return "CLO_GRF_PH_6_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return "CLO_GRF_U_25_0";
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return "CLO_GRF_U_25_1";
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return "CLO_GRM_U_20_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return "CLO_GRF_DECL_19";
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return "CLO_GRM_DECL_20";
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return "CLO_GRM_DECL_21";
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return "CLO_GRF_DECL_22";
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return "CLO_GRM_DECL_23";
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return "CLO_GRM_DECL_25";
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return "CLO_GRM_DECL_27";
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return "CLO_GRM_DECL_29";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return "CLO_GRF_DECL_0";
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return "CLO_GRM_DECL_2";
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return "CLO_GRF_DECL_3";
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return "CLO_GRF_DECL_5";
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return "CLO_GRF_DECL_6";
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return "CLO_GRM_DECL_9";
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return "CLO_GRM_DECL_10";
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return "CLO_GRF_DECL_11";
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return "CLO_GRF_DECL_12";
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return "CLO_GRM_DECL_14";
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return "CLO_GRM_DECL_15";
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return "CLO_GRM_DECL_16";
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return "CLO_GRM_DECL_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
			return "CLO_X4M_B_7_0";
		
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return "CLO_X4F_B_7_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Award_000_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_000_F"):
			return "CLO_BIF_DECL_56";
		
		case joaat("MP_Biker_Award_001_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_001_F"):
			return "CLO_BIF_DECL_57";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return "bikshirt4";
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return "bikshirt5";
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return "bikshirt7";
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return "bikshirt6";
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return "bikshirt3";
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return "bikshirt2";
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return "bikshirt1";
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return "bikshirt0";
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return "bikshirt8";
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return "bikshirt9";
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return "bikshirt10";
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return "bikshirt11";
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return "bikshirt12";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return "bikshirt13";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return "bikshirt14";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return "bikshirt15";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return "bikshirt16";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return "bikshirt17";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return "bikshirt18";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return "bikshirt19";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return "bikshirt20";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return "bikshirt21";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
			return "CLO_STM_O_E_0";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return "CLO_STF_O_E_0";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
			return "CLO_STM_O_E_1";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return "CLO_STF_O_E_1";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
			return "CLO_STM_O_E_2";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return "CLO_STF_O_E_2";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
			return "CLO_STM_O_E_3";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return "CLO_STF_O_E_3";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
			return "CLO_STM_O_E_4";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return "CLO_STF_O_E_4";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
			return "CLO_STM_O_E_15";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return "CLO_STF_O_E_5";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
			return "CLO_STM_O_E_6";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return "CLO_STF_O_E_6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
			return "CLO_EXF_EU_15_0";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return "CLO_EXM_EU_15_0";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
			return "CLO_EXF_EU_15_1";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return "CLO_EXM_EU_15_1";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
			return "CLO_EXF_EU_15_2";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return "CLO_EXM_EU_15_2";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
			return "CLO_EXF_EU_15_3";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return "CLO_EXM_EU_15_3";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
			return "CLO_EXF_EU_15_4";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return "CLO_EXM_EU_15_4";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
			return "CLO_EXF_EU_15_5";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return "CLO_EXM_EU_15_5";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
			return "CLO_EXF_EU_15_6";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return "CLO_EXM_EU_15_6";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
			return "CLO_EXF_EU_15_7";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return "CLO_EXM_EU_15_7";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
			return "CLO_EXF_EU_15_8";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return "CLO_EXM_EU_15_8";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
			return "CLO_EXF_EU_15_9";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return "CLO_EXM_EU_15_9";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
			return "CLO_EXF_EU_1510";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return "CLO_EXM_EU_1510";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
			return "CLO_EXF_EU_1511";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return "CLO_EXM_EU_1511";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
			return "CLO_EXF_EU_1512";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return "CLO_EXM_EU_1512";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
			return "CLO_EXF_EU_1513";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return "CLO_EXM_EU_1513";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return "SMOKINGJACKUNLOCK";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return "UNLOKLOWHATS0";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return "UNLOKLOWHATS1";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return "UNLOKLOWHATS2";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return "UNLOKLOWHATS3";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return "UNLOKLOWHATS4";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return "UNLOKLOWHATS5";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return "UNLOKLOWHATS6";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return "UNLOKLOWHATS7";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return "UNLOKLOWHATS8";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return "UNLOKLOWHATS9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "UNLOCK_NAME_BHAT1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "UNLOCK_NAME_BHAT2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "UNLOCK_NAME_BHAT3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "UNLOCK_NAME_BHAT4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "UNLOCK_NAME_BHAT5";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "UNLOCK_NAME_BHAT6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return "BBSHIRTUN15";
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return "BBSHIRTUN6";
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return "BBSHIRTUN1";
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return "BBSHIRTUN2";
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return "BBSHIRTUN4";
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return "BBSHIRTUN3";
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return "BBSHIRTUN0";
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return "BBSHIRTUN10";
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return "BBSHIRTUN8";
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return "BBSHIRTUN9";
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return "BBSHIRTUN14";
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return "BBSHIRTUN12";
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return "BBSHIRTUN5";
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return "BBSHIRTUN13";
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return "BBSHIRTUN7";
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return "UNLOCK_NAME_SHIRT14";
		
		default:
	}
	switch (iParam0)
	{
		case 1743008394:
			return "CLO_X3F_U_1_0";
		
		case 1084175393:
			return "CLO_X3M_U_1_0";
		
		case -1090232119:
			return "CLO_X3F_U_1_1";
		
		case 787255484:
			return "CLO_X3M_U_1_1";
		
		case -1133356123:
			return "CLO_X3F_U_1_2";
		
		case -566366372:
			return "CLO_X3M_U_1_2";
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
			return "CLO_X2F_HT_4_0";
		
		case 2026483804:
			return "CLO_X2F_HT_5_0";
		
		case 1831101822:
			return "CLO_X2M_HT_4_0";
		
		case 1411612772:
			return "CLO_X2M_HT_5_0";
		
		case 1875861023:
			return "CLO_X2F_HT_4_3";
		
		case -1385031204:
			return "CLO_X2F_HT_5_3";
		
		case -703154335:
			return "CLO_X2M_HT_4_3";
		
		case 798340921:
			return "CLO_X2M_HT_5_3";
		
		case -1208373599:
			return "CLO_X3M_B_10_0";
		
		case 1656518170:
			return "CLO_X3F_B_10_0";
		
		case -970054678:
			return "CLO_X2M_B_1_0";
		
		case -840010097:
			return "CLO_X2F_B_1_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
			return "CLO_INDF_HT_6_0";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "CLO_INDM_HT_6_0";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
			return "CLO_INDF_HT_6_1";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "CLO_INDM_HT_6_1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
			return "CLO_INDF_HT_6_2";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "CLO_INDM_HT_6_2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
			return "CLO_INDF_HT_6_3";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "CLO_INDM_HT_6_3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
			return "CLO_INDF_HT_6_4";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "CLO_INDM_HT_6_4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
			return "CLO_INDF_HT_6_5";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "CLO_INDM_HT_6_5";
		
		default:
	}
	return "UNLOCK_AWD_SHIRT";
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return 32309;
			break;
		
		case -1166011267:
		case -906547381:
			return 32310;
			break;
		
		case -721794703:
		case 308133919:
			return 32311;
			break;
		
		case 488495423:
		case 1072091359:
			return 32307;
			break;
		
		case -523083487:
		case 508464559:
			return 32308;
			break;
		
		case -1498989066:
		case 452715244:
			return 32295;
			break;
		
		case 1281689967:
		case -112025702:
			return 32296;
			break;
		
		case 841209069:
		case 128072761:
			return 32297;
			break;
		
		case 1742192724:
		case -705996596:
			return 32298;
			break;
		
		case -2022943269:
		case 733291825:
			return 32299;
			break;
		
		case -804690608:
		case -101367374:
			return 32300;
			break;
		
		case -1100955137:
		case 1328802862:
			return 32301;
			break;
		
		case 2089631321:
		case 495519961:
			return 32302;
			break;
		
		case 591101258:
		case -693204279:
			return 32303;
			break;
		
		case -1278730655:
		case 150499164:
			return 32304;
			break;
		
		case -1215879713:
		case -129905169:
			return 32305;
			break;
		
		case -918271655:
		case 612902523:
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 32273;
			break;
		
		case 991513037:
		case -1634791241:
			return 31768;
			break;
		
		case -675149090:
		case -1227437948:
			return 31769;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 31784;
			break;
		
		case -1686814509:
		case -1408179706:
			return 31770;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 31777;
			break;
		
		case -126686984:
		case 2057911750:
			return 31788;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 31787;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 31786;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 31785;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 31766;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 31767;
			break;
		
		case -1174740608:
		case 1620783517:
			return 31789;
			break;
		
		case -1943796269:
		case -1699338794:
			return 31790;
			break;
		
		case -1372800957:
			return 31791;
			break;
		
		case -1125170035:
			return 31792;
			break;
		
		case 1276052663:
			return 31793;
			break;
		
		case 2138708412:
		case -1894139601:
			return 31771;
			break;
		
		case 205793848:
		case -786254870:
			return 31772;
			break;
		
		case 1325175663:
		case -773154515:
			return 31773;
			break;
		
		case -368088972:
		case 1778247767:
			return 31774;
			break;
		
		case -1771053026:
		case -648092145:
			return 31775;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case 153754618:
		case -308681510:
			return 30703;
			break;
		
		case 659374865:
		case -2032106950:
			return 30704;
			break;
		
		case -13136248:
		case 921664999:
			return 30700;
			break;
		
		case -1132960710:
		case 1700345329:
			return 30701;
			break;
		
		case 1993003331:
		case -46539229:
			return 30702;
			break;
		
		case -625419875:
		case 552527284:
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case 156407004:
		case 992344178:
			return 30533;
			break;
		
		case 850137272:
		case 530639494:
			return 30534;
			break;
		
		case -907859154:
		case 1472939772:
			return 30535;
			break;
		
		case -475744483:
		case 1057844725:
			return 30536;
			break;
		
		case -47667242:
		case 1810957693:
			return 30537;
			break;
		
		case -409012879:
		case 1261157513:
			return 30538;
			break;
		
		case 1327735228:
		case 1864065459:
			return 30539;
			break;
		
		case -187858220:
		case -1644702422:
			return 30540;
			break;
		
		case 1452108911:
		case -1603076035:
			return 30541;
			break;
		
		case -1932584643:
		case -310682988:
			return 30542;
			break;
		
		case -252057754:
		case 2103214089:
			return 30543;
			break;
		
		case 116007471:
		case 2133791411:
			return 30544;
			break;
		
		case -463212372:
		case 70168645:
			return 30545;
			break;
		
		case -1171053658:
		case -669229192:
			return 30546;
			break;
		
		case -990049180:
		case 620186715:
			return 30547;
			break;
		
		case -1617127026:
		case 519116877:
			return 30548;
			break;
		
		case 1770910373:
		case -1586273681:
			return 30549;
			break;
		
		case -2143701887:
		case -72045715:
			return 30550;
			break;
		
		case 1999836107:
		case 1105733954:
			return 30551;
			break;
		
		case 417383307:
		case -1733868774:
			return 30552;
			break;
		
		case -2136840722:
		case 75001248:
			return 30553;
			break;
		
		case -83336071:
		case -351320953:
			return 30554;
			break;
		
		case -1391222343:
		case -1824952815:
			return 30555;
			break;
		
		case -1715443581:
		case -548539487:
			return 30556;
			break;
		
		case 1673024230:
		case -925164242:
			return 30557;
			break;
		
		case -1832442562:
		case 887187828:
			return 30524;
			break;
		
		case 2086548996:
		case 249518856:
			return 30525;
			break;
		
		case 1006203940:
		case -1491875241:
			return 30526;
			break;
		
		case -1032809603:
		case 1114248050:
			return 30527;
			break;
		
		case 1054867669:
		case 335686386:
			return 30528;
			break;
		
		case -1911088924:
		case -773349244:
			return 30529;
			break;
		
		case 983574619:
		case -1153521254:
			return 30530;
			break;
		
		case 2119361460:
		case 449125530:
			return 30531;
			break;
		
		case 596636884:
		case -1089524784:
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case 193032544:
		case -1747470682:
		case 1743653920:
		case 124145947:
			return 30563;
			break;
		
		case -1068490820:
		case -906046046:
			return 30564;
			break;
		
		case -843735811:
		case -179852662:
			return 30565;
			break;
		
		case -1150093192:
		case -486242812:
			return 30566;
			break;
		
		case -1804748036:
		case -1325807533:
			return 30567;
			break;
		
		case 686668863:
		case -304462319:
			return 30568;
			break;
		
		case 235066951:
		case 1884986113:
			return 30569;
			break;
		
		case 1510632880:
		case -594316604:
			return 30570;
			break;
		
		case 1912778271:
		case 1362488454:
			return 30571;
			break;
		
		case 1883424478:
		case 1295264906:
			return 30572;
			break;
		
		case 1585980265:
		case 455362671:
			return 30573;
			break;
		
		case 1324675295:
		case 1138553164:
			return 30574;
			break;
		
		case 1047498497:
		case 431167936:
			return 30575;
			break;
		
		case 1894446071:
		case 733789651:
			return 30576;
			break;
		
		case 781674592:
		case 597888060:
			return 30577;
			break;
		
		case 1688044709:
		case -1048078133:
			return 30578;
			break;
		
		case -1152863750:
		case 1966407715:
			return 30579;
			break;
		
		case 217109849:
		case -2013616722:
			return 30580;
			break;
		
		case -507609371:
		case -1710110244:
			return 30581;
			break;
		
		case -1324049006:
		case -1412666031:
			return 30582;
			break;
		
		case 491860090:
		case 1852149696:
			return 30583;
			break;
		
		case -98964984:
		case 1346196336:
			return 30584;
			break;
		
		case -373077669:
		case 2093788310:
			return 30585;
			break;
		
		case -228620636:
		case 1058320393:
			return 30586;
			break;
		
		case -135868800:
		case 637248244:
		case 2109360205:
		case 1275503017:
			return 30587;
			break;
		
		case -1340948775:
		case 949078048:
		case -1945344783:
		case -776164077:
			return 30588;
			break;
		
		case -1689217707:
		case 1259040019:
		case 2075837522:
		case -963537219:
			return 30589;
			break;
		
		case -846726717:
		case 1568838149:
		case -1978572545:
		case 878899806:
			return 30590;
			break;
		
		case -1093837746:
		case 1876768442:
		case 1726421675:
		case 724361202:
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case -360715836:
		case -1624389651:
		case 243836943:
		case 1312139416:
			return 30592;
			break;
		
		case -626734578:
		case -1939725738:
		case -39745983:
		case 1527824974:
			return 30593;
			break;
		
		case -723370359:
		case -1277169323:
		case 739992372:
		case 1842046915:
			return 30594;
			break;
		
		case -1214774283:
		case -1538633174:
		case 696212988:
		case 108960043:
			return 30595;
			break;
		
		case 368984260:
		case 1329899548:
		case -712067560:
		case 414465430:
			return 30596;
			break;
		
		case 875199772:
		case 1171821892:
		case -991030057:
		case 572608624:
			return 30597;
			break;
		
		case 40409497:
		case 1824023299:
		case -214699678:
		case 878703853:
			return 30598;
			break;
		
		case 279950887:
		case 1637174461:
		case 125146481:
		case 1058015837:
			return 30599;
			break;
		
		case 1823960629:
		case 677993062:
		case 355152092:
		case 1366404896:
			return 30600;
			break;
		
		case 990612190:
		case -15530054:
		case 700602890:
		case 1537524614:
			return 30601;
			break;
		
		case -64425650:
		case 1762092216:
		case 152902057:
		case -1675566132:
			return 30602;
			break;
		
		case -291875279:
		case 927564093:
		case 1409363824:
		case 1784152123:
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case -1364447384:
		case -2133234397:
			return 30604;
			break;
		
		case 1480295044:
		case 1863698844:
			return 30605;
			break;
		
		case -1977784761:
		case 330175182:
			return 30606;
			break;
		
		case 1372550572:
		case 1229553156:
			return 30607;
			break;
		
		case 1133140258:
		case 758400474:
			return 30608;
			break;
		
		case 783527797:
		case -623173331:
			return 30609;
			break;
		
		case 525570229:
		case -894664496:
			return 30610;
			break;
		
		case 710420154:
		case 17690002:
			return 30611;
			break;
		
		case 484248516:
		case -265532465:
			return 30612;
			break;
		
		case -470279681:
		case -1779198113:
			return 30613;
			break;
		
		case 624976017:
		case 357509846:
			return 30614;
			break;
		
		case 393266418:
		case 636341267:
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case 944286754:
		case 1683790232:
		case -691678195:
		case 1249842995:
			return 30616;
			break;
		
		case -2040870827:
		case 1218208280:
		case -1985267239:
		case 859302053:
			return 30617;
			break;
		
		case 1424254297:
		case -2147200793:
		case 2068946214:
		case 621038654:
			return 30618;
			break;
		
		case 583565602:
		case 1916319056:
		case -1642143040:
		case -320381947:
			return 30619;
			break;
		
		case -288155336:
		case -1374540534:
		case -1869854821:
		case -5799547:
			return 30620;
			break;
		
		case 1168361176:
		case -1143617391:
		case 1112910639:
		case -914123458:
			return 30621;
			break;
		
		case 190370371:
		case -927735219:
		case 755400849:
		case -34144732:
			return 30622;
			break;
		
		case 572784601:
		case -663060006:
		case 1666772277:
		case -1509306805:
			return 30623;
			break;
		
		case -245293476:
		case -151011612:
		case 1312408311:
		case -657181729:
			return 30624;
			break;
		
		case -5981469:
		case 79780455:
		case 410507132:
		case -2104752304:
			return 30625;
			break;
		
		case -2056851459:
		case -321877893:
		case -1105452802:
		case -2102601008:
			return 30626;
			break;
		
		case 41118228:
		case -613915217:
		case 258163595:
		case -2006391224:
			return 30627;
			break;
		
		case -255965526:
		case -917847692:
		case -459280891:
		case 561715294:
			return 30628;
			break;
		
		case -1646780193:
		case 908892982:
		case -1293088096:
		case 691873762:
			return 30629;
			break;
		
		case -1677189825:
		case 601454224:
		case 138786128:
		case 1056887653:
			return 30630;
			break;
		
		case 362614887:
		case -16110350:
		case 1462555445:
		case 1425538903:
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case 598488729:
		case 964509759:
			return 30674;
			break;
		
		case 854447388:
		case 1806705832:
			return 30675;
			break;
		
		case 2001034706:
		case 1728518998:
			return 30676;
			break;
		
		case -2138345378:
		case -1724448843:
			return 30677;
			break;
		
		case 1254196427:
		case -2106535383:
			return 30678;
			break;
		
		case 1711192901:
		case -1261717794:
			return 30679;
			break;
		
		case -1175362775:
		case -686556306:
			return 30680;
			break;
		
		case -867891252:
		case -1067659776:
			return 30681;
			break;
		
		case -1653233102:
		case -358800748:
			return 30682;
			break;
		
		case -1392490169:
		case -605518549:
			return 30683;
			break;
		
		case 625638735:
		case -734987935:
			return 30684;
			break;
		
		case 268817094:
		case -503573257:
			return 30685;
			break;
		
		case 1102231075:
		case -273305494:
			return 30686;
			break;
		
		case 1551035299:
		case 259518446:
			return 30687;
			break;
		
		case -639637893:
		case -1618604024:
			return 30688;
			break;
		
		case -727983117:
		case -1085911160:
			return 30689;
			break;
		
		case 106807158:
		case -854791403:
			return 30690;
			break;
		
		case -283209480:
		case -623769953:
			return 30691;
			break;
		
		case 1890849825:
		case 1718492629:
			return 30692;
			break;
		
		case -1959114451:
		case 1951971754:
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case -36224791:
		case 327104734:
			return 30638;
			break;
		
		case -1139163793:
		case 99196339:
			return 30639;
			break;
		
		case -1842419302:
		case 804581833:
			return 30640;
			break;
		
		case 2121581094:
		case 566908276:
			return 30641;
			break;
		
		case 1957801632:
		case -1535223074:
			return 30642;
			break;
		
		case 1660947261:
		case -1766539445:
			return 30643;
			break;
		
		case 997276700:
		case -1107784238:
			return 30644;
			break;
		
		case 724278161:
		case -1301711180:
			return 30645;
			break;
		
		case -1880201963:
		case 1229923461:
			return 30646;
			break;
		
		case 2108670104:
		case 999885081:
			return 30647;
			break;
		
		case 1149517553:
		case -1409944646:
			return 30648;
			break;
		
		case -1842521530:
		case -1678486601:
			return 30649;
			break;
		
		case -1661989803:
		case -1630379289:
			return 30650;
			break;
		
		case 315029509:
		case -442077042:
			return 30651;
			break;
		
		case 76045192:
		case -2097370308:
			return 30652;
			break;
		
		case -231524642:
		case -900220431:
			return 30653;
			break;
		
		case -538078637:
		case -1147331460:
			return 30654;
			break;
		
		case 1280600755:
		case 511435320:
			return 30655;
			break;
		
		case 1050267454:
		case 280643253:
			return 30656;
			break;
		
		case 686728168:
		case 52898703:
			return 30657;
			break;
		
		case 388825189:
		case -182939790:
			return 30658;
			break;
		
		case -1765539843:
		case -380995642:
			return 30659;
			break;
		
		case -332552075:
		case -321839039:
			return 30660;
			break;
		
		case -624917093:
		case 1940860411:
			return 30661;
			break;
		
		case -1463507504:
		case 1073312767:
			return 30662;
			break;
		
		case -744686720:
		case 315136414:
			return 30663;
			break;
		
		case -982294739:
		case 590559859:
			return 30664;
			break;
		
		case 1101354891:
		case 833640293:
			return 30665;
			break;
		
		case -352998867:
		case 1113749705:
			return 30666;
			break;
		
		case -629143230:
		case 349871546:
			return 30667;
			break;
		
		case 214625751:
		case 1720729896:
			return 30668;
			break;
		
		case 1809853456:
		case 2002248375:
			return 30669;
			break;
		
		case 1473119212:
		case 1227163218:
			return 30670;
			break;
		
		case -1988237493:
		case 1529621088:
			return 30671;
			break;
		
		case -308780352:
		case -488766247:
			return 30672;
			break;
		
		case -539048115:
		case 1676314352:
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
		case 676807987:
			return 30260;
			break;
		
		case 1888753218:
		case 272160153:
			return 30261;
			break;
		
		case -552467991:
		case 1593344440:
			return 30262;
			break;
		
		case -1655919948:
		case 546222390:
			return 30263;
			break;
		
		case -917106601:
		case 1983375900:
			return 30264;
			break;
		
		case 1595446967:
		case -620589387:
			return 30265;
			break;
		
		case -530593323:
		case 383923929:
			return 30266;
			break;
		
		case 561619447:
		case -1703406594:
			return 30267;
			break;
		
		case -1913656173:
		case -398286533:
			return 30268;
			break;
		
		case -1766901922:
		case -80478106:
			return 30269;
			break;
		
		case 2091781849:
		case 1835331655:
			return 30270;
			break;
		
		case 1824588341:
		case -1650596870:
			return 30271;
			break;
		
		case 242597641:
		case 1231926496:
			return 30272;
			break;
		
		case 566785691:
		case -1506181253:
			return 30273;
			break;
		
		case -2091312957:
		case -1737145605:
			return 30274;
			break;
		
		case -2079214831:
		case 1673851512:
			return 30275;
			break;
		
		case 1359156274:
		case 1023339598:
			return 30276;
			break;
		
		case 1904247246:
		case -163738770:
			return 30277;
			break;
		
		case -1351518396:
		case 1863218823:
			return 30278;
			break;
		
		case -797874817:
		case 333966447:
			return 30279;
			break;
		
		case -385507297:
		case 1412626052:
			return 30280;
			break;
		
		case 2011910758:
		case -39100956:
			return 30281;
			break;
		
		case -1953985443:
		case 1631533003:
			return 30282;
			break;
		
		case -1124222352:
		case 1493430918:
			return 30283;
			break;
		
		case -1806994767:
		case -196693334:
			return 30284;
			break;
		
		case -1445761968:
		case 553507495:
			return 30285;
			break;
		
		case -89186417:
		case 2003474700:
			return 30286;
			break;
		
		case -308083083:
		case 1121792228:
			return 30287;
			break;
		
		case 667714507:
		case -1424651669:
			return 30288;
			break;
		
		case -1610210252:
		case -1454164346:
			return 30289;
			break;
		
		case 1868506246:
		case -307572086:
			return 30290;
			break;
		
		case 1686703834:
		case -1486436861:
			return 30291;
			break;
		
		case -1811091999:
		case -1705464857:
			return 30292;
			break;
		
		case 414381867:
		case -469188798:
			return 30293;
			break;
		
		case -1206261789:
		case 692621401:
			return 30294;
			break;
		
		case 1395785293:
		case 60231546:
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		
		default:
	}
	switch (iParam0)
	{
		case -1641688020:
			return 25002;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		
		case 1743008394:
		case 1084175393:
			return 110;
		
		case -1090232119:
		case 787255484:
			return 111;
		
		case -1133356123:
		case -566366372:
			return 112;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
			return 4333;
		
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 4334;
		
		case -1208373599:
		case 1656518170:
			return 4335;
		
		case -970054678:
		case -840010097:
			return 3750;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		
		default:
	}
	return -1;
}

int func_468(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_469())
		{
			return Global_262145.f_31420[iVar0];
		}
		else
		{
			return Global_262145.f_31408[iVar0];
		}
	}
	return -1;
}

bool func_469()
{
	return func_470(unk_0x9E2D6C50374FCFA9());
}

int func_470(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = func_468(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (func_469())
	{
		iVar3 = func_530(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = func_527(joaat("mp_f_freemode_01"), iVar0, func_530(iVar0), 4);
		}
		iVar2 = func_526(iVar0, 4);
		if ((func_525(func_467(iVar0), -1) || (iVar2 != -1 && func_519(iVar2, -1))) || (iVar1 != -99 && func_472(joaat("mp_f_freemode_01"), func_530(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = func_530(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = func_527(joaat("mp_m_freemode_01"), iVar0, func_530(iVar0), 3);
		}
		iVar2 = func_526(iVar0, 3);
		if ((func_525(func_467(iVar0), -1) || (iVar2 != -1 && func_519(iVar2, -1))) || (iVar1 != -99 && func_472(joaat("mp_m_freemode_01"), func_530(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_472(int iParam0, int iParam1, int iParam2)
{
	Global_77663[1 /*14*/] = { func_473(iParam0, iParam1, iParam2, -1) };
	return unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2);
}

struct<14> func_473(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_518();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_502(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_474(iParam1, iParam2, iParam3);
	}
	return Global_77663[0 /*14*/];
}

void func_474(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_501(iParam1, iParam2);
			break;
		
		case 11:
			func_500(iParam1, iParam2);
			break;
		
		case 8:
			func_499(iParam1, iParam2);
			break;
		
		case 9:
			func_498(iParam1, iParam2);
			break;
		
		case 3:
			func_497(iParam1, iParam2);
			break;
		
		case 4:
			func_496(iParam1, iParam2);
			break;
		
		case 6:
			func_495(iParam1, iParam2);
			break;
		
		case 1:
			func_494(iParam1, iParam2);
			break;
		
		case 7:
			func_493(iParam1, iParam2);
			break;
		
		case 10:
			func_492(iParam1, iParam2);
			break;
		
		case 14:
			func_491(iParam1, iParam2);
			break;
		
		case 12:
			func_490(iParam1, iParam2);
			break;
		
		case 5:
			func_489(iParam1, iParam2);
			break;
		
		case 0:
			func_486(iParam1, iParam2);
			break;
		
		case 13:
			func_475(iParam1);
			break;
	}
}

void func_475(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_476(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_485(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x2E87280918B16506(sParam3) != unk_0x2E87280918B16506("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 6);
		if (func_484(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("REBREATHER"), 0))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_482(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_482(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_482(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_482(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_482(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_482(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		if (func_481(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		}
		if (func_481(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
		if (!func_481(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_484(14))
			{
				return;
			}
			iVar0 = func_479(func_480(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			}
			iVar0 = func_479(func_478(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
			}
			if (func_477(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_479(iVar1, Global_77660, 0);
				if (!unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
}

bool func_477(int iParam0, int iParam1, var uParam2)
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

int func_478(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_479(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_150(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_482(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_483(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_479(iVar2, iVar0, 0);
		return unk_0xE2D0C323A1AE5D85(iVar3, iVar1);
	}
	return 0;
}

bool func_483(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12597;
	if ((bParam4 && Global_4532516) || (!bParam4 && bParam5))
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
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
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
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4532516)
		{
			iVar0 = unk_0xA713D1504E921B62(iParam0);
		}
		else
		{
			iVar0 = unk_0x033025C1430DD8E8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA713D1504E921B62(iParam0);
	}
	else
	{
		iVar0 = unk_0x033025C1430DD8E8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
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
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10302;
					break;
				
				case 232:
					*uParam2 = 10303;
					break;
				
				case 233:
					*uParam2 = 10304;
					break;
				
				case 234:
					*uParam2 = 10305;
					break;
				
				case 235:
					*uParam2 = 10306;
					break;
				
				case 236:
					*uParam2 = 10307;
					break;
				
				case 237:
					*uParam2 = 10308;
					break;
				
				case 238:
					*uParam2 = 10309;
					break;
				
				case 239:
					*uParam2 = 10310;
					break;
				
				case 240:
					*uParam2 = 10311;
					break;
				
				case 241:
					*uParam2 = 10312;
					break;
				
				case 242:
					*uParam2 = 10313;
					break;
				
				case 243:
					*uParam2 = 10314;
					break;
				
				case 244:
					*uParam2 = 10315;
					break;
				
				case 245:
					*uParam2 = 10316;
					break;
				
				case 246:
					*uParam2 = 10317;
					break;
				
				case 247:
					*uParam2 = 10318;
					break;
				
				case 248:
					*uParam2 = 10319;
					break;
				
				case 249:
					*uParam2 = 10320;
					break;
				
				case 250:
					*uParam2 = 10321;
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
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
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10322;
					break;
				
				case 232:
					*uParam2 = 10323;
					break;
				
				case 233:
					*uParam2 = 10324;
					break;
				
				case 234:
					*uParam2 = 10325;
					break;
				
				case 235:
					*uParam2 = 10326;
					break;
				
				case 236:
					*uParam2 = 10327;
					break;
				
				case 237:
					*uParam2 = 10328;
					break;
				
				case 238:
					*uParam2 = 10329;
					break;
				
				case 239:
					*uParam2 = 10330;
					break;
				
				case 240:
					*uParam2 = 10331;
					break;
				
				case 241:
					*uParam2 = 10332;
					break;
				
				case 242:
					*uParam2 = 10333;
					break;
				
				case 243:
					*uParam2 = 10334;
					break;
				
				case 244:
					*uParam2 = 10335;
					break;
				
				case 245:
					*uParam2 = 10336;
					break;
				
				case 246:
					*uParam2 = 10337;
					break;
				
				case 247:
					*uParam2 = 10338;
					break;
				
				case 248:
					*uParam2 = 10339;
					break;
				
				case 249:
					*uParam2 = 10340;
					break;
				
				case 250:
					*uParam2 = 10341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12597;
}

bool func_484(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_486(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77663[0 /*14*/].f_5 = 4;
	func_487(iVar0, iParam0, 0, iParam1);
}

void func_487(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_77663[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0x30264A1C9ADAAE62(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x43FFB630E515D7A1(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2;
				func_476(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_476(&(Global_77663[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0xA188D1127A77C942(uVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0xC99CE91134872039(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5;
				func_476(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x036D1EA7243F2CCC(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var9);
		if (iParam3 != -1 && Global_77833)
		{
			unk_0x37E8462BC2A63393(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9;
			func_476(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0xA188D1127A77C942(uVar1, 10, -1, 0, -1, func_488(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xEA030AC498B5F181(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9;
				func_476(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_489(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_490(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_491(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2043[iVar9]) * Global_294258.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2164[iVar10]) * Global_294258.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2189[iVar11]) * Global_294258.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2318[iVar12]) * Global_294258.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 327, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("HAT"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_26));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_56));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("WATCH"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_28));
			}
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_492(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_493(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 55, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_294258.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_494(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 26, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2016[iVar8]) * Global_294258.f_29));
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_495(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1759[iVar8]) * Global_294258.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_25));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_496(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1245[iVar8]) * Global_294258.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_23));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_497(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 16, iParam1);
		return;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_498(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 36, iParam1);
		return;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_499(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[223]));
			break;
		
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 136, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_519(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1502[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_519(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1502[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1502[iVar9]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_294258.f_24));
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_500(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_519(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2979) * Global_294258.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1502[4]) * Global_294258.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2978) * Global_294258.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_519(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2977) * Global_294258.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1502[9]) * Global_294258.f_24));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1502[iVar8]) * Global_294258.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_487(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_24));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_501(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[15]));
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[16]));
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[17]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[18]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[19]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[20]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[21]));
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[22]));
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[23]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[24]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[25]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[26]));
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[27]));
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[28]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[29]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[30]));
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[31]));
			break;
		
		case 36:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[32]));
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[33]));
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[34]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[35]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[36]));
			break;
		
		case 42:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[37]));
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[38]));
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[39]));
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[40]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[41]));
			break;
		
		case 48:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[42]));
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[43]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[44]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[45]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[46]));
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[47]));
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[48]));
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[49]));
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[50]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[51]));
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[52]));
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[53]));
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[54]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[55]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[56]));
			break;
		
		case 68:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[57]));
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[58]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[59]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[60]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[61]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[62]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[63]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[64]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[65]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[66]));
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[67]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[68]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[69]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[70]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2455[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_487(iVar7, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_502(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_517(iParam1, iParam2);
			break;
		
		case 11:
			func_516(iParam1, iParam2);
			break;
		
		case 8:
			func_515(iParam1, iParam2);
			break;
		
		case 9:
			func_514(iParam1, iParam2);
			break;
		
		case 3:
			func_513(iParam1, iParam2);
			break;
		
		case 4:
			func_512(iParam1, iParam2);
			break;
		
		case 6:
			func_511(iParam1, iParam2);
			break;
		
		case 1:
			func_510(iParam1, iParam2);
			break;
		
		case 7:
			func_509(iParam1, iParam2);
			break;
		
		case 10:
			func_508(iParam1, iParam2);
			break;
		
		case 14:
			func_507(iParam1, iParam2);
			break;
		
		case 12:
			func_506(iParam1, iParam2);
			break;
		
		case 5:
			func_505(iParam1, iParam2);
			break;
		
		case 0:
			func_504(iParam1, iParam2);
			break;
		
		case 13:
			func_503(iParam1);
			break;
	}
}

void func_503(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_504(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77663[0 /*14*/].f_5 = 3;
	func_487(iVar0, iParam0, 0, iParam1);
}

void func_505(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_506(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_507(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 320;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 245;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 415;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 315;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 265;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 570;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 560;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 260;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 100;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1715;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 3900;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1550;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 4250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 4460;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 4970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 290;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 305;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 4170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 335;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 4940;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 275;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 3620;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 350;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 365;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 380;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 380;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 950;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 630;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 265;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 675;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 4050;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 4060;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 1760;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 1375;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 1440;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 1445;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 530;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 785;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 850;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 4260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 4310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 4130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1885;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 1500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 1565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 4290;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 4150;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 4295;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 6240;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 4955;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 5590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4920;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 4990;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 4780;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 4775;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 4800;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 385;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 3655;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 4055;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 3595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 3605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 3645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 2230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 1690;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 2715;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 2395;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 485;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 695;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_954[iVar9]) * Global_294258.f_18));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1075[iVar10]) * Global_294258.f_19));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1100[iVar11]) * Global_294258.f_20));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 15)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1229[iVar12]) * Global_294258.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77663[0 /*14*/].f_5 = 3;
		func_487(iVar7, iParam0, 327, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("HAT"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_18));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_20));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("WATCH"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_21));
			}
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_508(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 7, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_509(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 40:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 41:
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar3 = 12;
			iVar4 = 1;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar3 = 12;
			iVar4 = 2;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 90:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 92, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_57));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_294258.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_510(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_927[iVar8]) * Global_294258.f_22));
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_511(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 690;
			break;
	}
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_670[iVar8]) * Global_294258.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 3;
		func_487(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_17));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_512(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_175[iVar8]) * Global_294258.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 3;
		func_487(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_15));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_513(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 16, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_514(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 36:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 37:
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 38:
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 40:
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 41:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 42:
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 43:
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 44:
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 45:
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 46, iParam1);
			return;
			break;
	}
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_515(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_519(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = round((to_float(45) * Global_262145.f_432[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_519(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = round((to_float(55) * Global_262145.f_432[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_432[iVar11]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_294258.f_16));
	if (iParam0 >= 241)
	{
		Global_77663[0 /*14*/].f_5 = 3;
		func_487(iVar7, iParam0, 241, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_16));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_516(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_519(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2979) * Global_294258.f_16));
		}
		else
		{
			iVar1 = round(((to_float(45) * Global_262145.f_432[23]) * Global_294258.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2978) * Global_294258.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_519(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2977) * Global_294258.f_16));
		}
		else
		{
			iVar1 = round(((to_float(55) * Global_262145.f_432[28]) * Global_294258.f_16));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_432[iVar8]) * Global_294258.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_77663[0 /*14*/].f_5 = 3;
		func_487(iVar7, iParam0, 237, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_16));
		}
	}
	else
	{
		func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_517(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[15]));
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[16]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[17]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[18]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[19]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[20]));
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[21]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[22]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[23]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[24]));
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[25]));
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[26]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[27]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[28]));
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[29]));
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[30]));
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[31]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[32]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[33]));
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[34]));
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[35]));
			break;
		
		case 43:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[36]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[37]));
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[38]));
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[39]));
			break;
		
		case 49:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[40]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[41]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[42]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[43]));
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[44]));
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[45]));
			break;
		
		case 55:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[46]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[47]));
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[48]));
			break;
		
		case 60:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[49]));
			break;
		
		case 61:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[50]));
			break;
		
		case 62:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[51]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[52]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[53]));
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[54]));
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[55]));
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[56]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[57]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[58]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[59]));
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[60]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[61]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[62]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[63]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[64]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[65]));
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[66]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[67]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[68]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[69]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[70]));
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2532[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 3;
			func_487(iVar7, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_476(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_518()
{
	Global_77663[0 /*14*/].f_1 = -1;
	Global_77663[0 /*14*/].f_2 = -1;
	Global_77663[0 /*14*/].f_5 = -1;
	Global_77663[0 /*14*/].f_3 = -1;
	Global_77663[0 /*14*/].f_4 = -1;
	Global_77663[0 /*14*/].f_7 = 0;
	Global_77663[0 /*14*/].f_6 = 0;
	Global_77663[0 /*14*/].f_13 = -1;
	Global_77663[0 /*14*/].f_12 = 0;
	Global_77663[0 /*14*/] = 0;
	StringCopy(&(Global_77663[0 /*14*/].f_8), "NO_LABEL", 16);
}

bool func_519(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_522(iParam0) == 12597)
	{
		return 0;
	}
	uVar0 = func_521(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xE2D0C323A1AE5D85(uVar0, func_520(iVar1));
}

int func_520(int iParam0)
{
	return (iParam0 % 32);
}

int func_521(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_479(func_522(uParam0), iParam1, 0);
	return iVar0;
}

int func_522(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_524(iVar0);
	if ((func_344() == 0 || func_523() == 0) || (func_344() == 999 && func_523() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8905;
				break;
			
			case 44:
				return 8908;
				break;
			
			case 45:
				return 8911;
				break;
			
			case 46:
				return 10286;
				break;
			
			case 47:
				return 10289;
				break;
		}
	}
	return 12597;
}

int func_523()
{
	return Global_31506;
}

int func_524(int iParam0)
{
	return (iParam0 / 32);
}

bool func_525(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_526(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x35F01D0BCDF83B24(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xA188D1127A77C942(iParam3, 10, -1, 1, -1, -1);
		iVar0 = unk_0x971016887DC14CED(iParam1);
		if (iVar0 != -1)
		{
			return (func_529(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_488(iParam2));
		iVar1 = unk_0x8F3F503BADA161ED(iParam1);
		if (iVar1 != -1)
		{
			return (func_528(iParam0, func_488(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_528(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
		case -1166011267:
		case -906547381:
		case -721794703:
		case 308133919:
			return 11;
			break;
		
		case 488495423:
		case -523083487:
		case 1072091359:
		case 508464559:
			return 11;
			break;
		
		case -1498989066:
		case 1281689967:
		case 841209069:
		case 1742192724:
		case -2022943269:
		case -804690608:
		case -1100955137:
		case 2089631321:
		case 591101258:
		case -1278730655:
		case -1215879713:
		case -918271655:
		case 452715244:
		case -112025702:
		case 128072761:
		case -705996596:
		case 733291825:
		case -101367374:
		case 1328802862:
		case 495519961:
		case -693204279:
		case 150499164:
		case -129905169:
		case 612902523:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 10;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 11;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 12;
			break;
		
		case -126686984:
		case 2057911750:
			return 11;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 11;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 11;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 11;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 0;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 0;
			break;
		
		case -1174740608:
		case 1620783517:
			return 12;
			break;
		
		case -1943796269:
		case -1699338794:
			return 12;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case 193032544:
		case -1747470682:
		case 1743653920:
		case 124145947:
		case -1068490820:
		case -906046046:
		case -843735811:
		case -179852662:
		case -1150093192:
		case -486242812:
		case -1804748036:
		case -1325807533:
		case 1883424478:
		case 1295264906:
		case 1585980265:
		case 455362671:
		case 1047498497:
		case 431167936:
		case 1894446071:
		case 733789651:
		case 781674592:
		case 597888060:
		case 1688044709:
		case -1048078133:
		case -1152863750:
		case 1966407715:
		case 217109849:
		case -2013616722:
		case -507609371:
		case -1710110244:
		case -1324049006:
		case -1412666031:
			return 11;
			break;
		
		case 491860090:
		case 1852149696:
		case -98964984:
		case 1346196336:
		case -373077669:
		case 2093788310:
		case -228620636:
		case 1058320393:
			return 4;
			break;
		
		case -135868800:
		case 637248244:
		case 2109360205:
		case 1275503017:
		case -1340948775:
		case 949078048:
		case -1945344783:
		case -776164077:
		case -1689217707:
		case 1259040019:
		case 2075837522:
		case -963537219:
		case -846726717:
		case 1568838149:
		case -1978572545:
		case 878899806:
		case -1093837746:
		case 1876768442:
		case 1726421675:
		case 724361202:
			return 0;
			break;
		
		case 1324675295:
		case 1138553164:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -360715836:
		case -1624389651:
		case 243836943:
		case 1312139416:
		case -626734578:
		case -1939725738:
		case -39745983:
		case 1527824974:
		case -723370359:
		case -1277169323:
		case 739992372:
		case 1842046915:
		case -1214774283:
		case -1538633174:
		case 696212988:
		case 108960043:
		case 368984260:
		case 1329899548:
		case -712067560:
		case 414465430:
		case 875199772:
		case 1171821892:
		case -991030057:
		case 572608624:
		case 40409497:
		case 1824023299:
		case -214699678:
		case 878703853:
		case 279950887:
		case 1637174461:
		case 125146481:
		case 1058015837:
		case 1823960629:
		case 677993062:
		case 355152092:
		case 1366404896:
		case 990612190:
		case -15530054:
		case 700602890:
		case 1537524614:
		case -64425650:
		case 1762092216:
		case 152902057:
		case -1675566132:
		case -291875279:
		case 927564093:
		case 1409363824:
		case 1784152123:
			return 5;
			break;
	}
	switch (iParam0)
	{
		case -1364447384:
		case -2133234397:
		case 1480295044:
		case 1863698844:
		case -1977784761:
		case 330175182:
		case 1372550572:
		case 1229553156:
		case 1133140258:
		case 758400474:
		case 783527797:
		case -623173331:
		case 525570229:
		case -894664496:
		case 710420154:
		case 17690002:
		case 484248516:
		case -265532465:
		case -470279681:
		case -1779198113:
		case 624976017:
		case 357509846:
		case 393266418:
		case 636341267:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case 944286754:
		case 1683790232:
		case -691678195:
		case 1249842995:
		case -2040870827:
		case 1218208280:
		case -1985267239:
		case 859302053:
		case 1424254297:
		case -2147200793:
		case 2068946214:
		case 621038654:
		case 583565602:
		case 1916319056:
		case -1642143040:
		case -320381947:
		case -288155336:
		case -1374540534:
		case -1869854821:
		case -5799547:
		case 1168361176:
		case -1143617391:
		case 1112910639:
		case -914123458:
		case 190370371:
		case -927735219:
		case 755400849:
		case -34144732:
		case 572784601:
		case -663060006:
		case 1666772277:
		case -1509306805:
		case -245293476:
		case -151011612:
		case 1312408311:
		case -657181729:
		case -5981469:
		case 79780455:
		case 410507132:
		case -2104752304:
		case -2056851459:
		case -321877893:
		case -1105452802:
		case -2102601008:
		case 41118228:
		case -613915217:
		case 258163595:
		case -2006391224:
		case -255965526:
		case -917847692:
		case -459280891:
		case 561715294:
		case -1646780193:
		case 908892982:
		case -1293088096:
		case 691873762:
		case -1677189825:
		case 601454224:
		case 138786128:
		case 1056887653:
		case 362614887:
		case -16110350:
		case 1462555445:
		case 1425538903:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case 598488729:
		case 964509759:
		case 854447388:
		case 1806705832:
		case 2001034706:
		case 1728518998:
		case -2138345378:
		case -1724448843:
		case 1254196427:
		case -2106535383:
		case 1711192901:
		case -1261717794:
		case -1175362775:
		case -686556306:
		case -867891252:
		case -1067659776:
		case -1653233102:
		case -358800748:
		case -1392490169:
		case -605518549:
		case 625638735:
		case -734987935:
		case 268817094:
		case -503573257:
		case 1102231075:
		case -273305494:
		case 1551035299:
		case 259518446:
		case -639637893:
		case -1618604024:
		case -727983117:
		case -1085911160:
		case 106807158:
		case -854791403:
		case -283209480:
		case -623769953:
		case 1890849825:
		case 1718492629:
		case -1959114451:
		case 1951971754:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -36224791:
		case 327104734:
		case -1139163793:
		case 99196339:
		case -1842419302:
		case 804581833:
		case 2121581094:
		case 566908276:
		case 1957801632:
		case -1535223074:
		case 1660947261:
		case -1766539445:
		case 997276700:
		case -1107784238:
		case 724278161:
		case -1301711180:
		case -1880201963:
		case 1229923461:
		case 2108670104:
		case 999885081:
		case 1149517553:
		case -1409944646:
		case -1842521530:
		case -1678486601:
		case -1661989803:
		case -1630379289:
		case 315029509:
		case -442077042:
		case 76045192:
		case -2097370308:
		case -231524642:
		case -900220431:
		case -538078637:
		case -1147331460:
		case 1280600755:
		case 511435320:
		case 1050267454:
		case 280643253:
		case 686728168:
		case 52898703:
		case 388825189:
		case -182939790:
		case -1765539843:
		case -380995642:
		case -332552075:
		case -321839039:
		case -624917093:
		case 1940860411:
		case -1463507504:
		case 1073312767:
		case -744686720:
		case 315136414:
		case -982294739:
		case 590559859:
		case 1101354891:
		case 833640293:
		case -352998867:
		case 1113749705:
		case -629143230:
		case 349871546:
		case 214625751:
		case 1720729896:
		case 1809853456:
		case 2002248375:
		case 1473119212:
		case 1227163218:
		case -1988237493:
		case 1529621088:
		case -308780352:
		case -488766247:
		case -539048115:
		case 1676314352:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case 1868506246:
		case -307572086:
		case 1686703834:
		case -1486436861:
		case -1811091999:
		case -1705464857:
		case 414381867:
		case -469188798:
			return 1;
			break;
		
		case -1206261789:
		case 692621401:
			return 4;
			break;
		
		case 1395785293:
		case 60231546:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 10;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
			return 12;
		
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 1;
		
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
			return 4;
		
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
			return 6;
		
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 11;
		
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 10;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 10;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
			return 12;
		
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 4;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 0;
		
		case 1743008394:
		case 1084175393:
		case -1090232119:
		case 787255484:
		case -1133356123:
		case -566366372:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 0;
		
		case -1208373599:
		case 1656518170:
		case -970054678:
		case -840010097:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 1;
		
		default:
	}
	return -1;
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_469())
		{
			if (Global_262145.f_31420[iVar0] != -1)
			{
				return 1;
			}
		}
		else if (Global_262145.f_31408[iVar0] != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_533(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_534(func_535(unk_0x9E2D6C50374FCFA9()))))
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_535(int iParam0)
{
	if (func_105(iParam0) == 237 || func_105(iParam0) == 250)
	{
		return func_536(iParam0);
	}
	return -1;
}

int func_536(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_537(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_538(int iParam0)
{
	if (func_545(unk_0x9E2D6C50374FCFA9()) && func_544())
	{
		if (func_139(iParam0))
		{
			func_540(11020, -1);
		}
		else if (func_140(iParam0))
		{
			func_540(11022, -1);
		}
		else if (func_222(iParam0, 1))
		{
			func_540(11023, -1);
		}
		else if (func_539(iParam0))
		{
			func_540(11024, -1);
		}
	}
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_540(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_479(iParam0, func_150(iParam1), 0);
	iVar0++;
	if (!func_543(iParam0))
	{
		func_542(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_541(iParam0, iVar0, iParam1, 1);
	}
}

void func_541(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_150(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_150(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_150(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_150(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_150(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_150(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_150(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_150(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_150(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_150(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_150(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_150(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_150(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_150(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_150(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_150(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_150(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_150(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_150(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_150(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_150(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_150(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_150(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_150(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_150(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_150(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_150(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_150(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_150(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_150(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_150(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_150(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_150(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_150(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_150(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_150(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_150(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_150(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_150(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_150(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_150(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_150(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_150(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_150(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_150(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_150(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_150(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_150(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_150(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_150(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_150(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_150(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_150(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_150(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_542(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_150(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_543(int iParam0)
{
	if (Global_1655477)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10890:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_544()
{
	return func_257(unk_0x9E2D6C50374FCFA9());
}

bool func_545(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_127, 14);
}

void func_546(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

void func_547(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23765 == 0 || Global_262145.f_23765 == 1)
		{
			if (!unk_0x8FE9914D4872D601() || Global_262145.f_23765 == 1)
			{
				Global_2810287.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810287.f_284 = iParam1;
				Global_2810287.f_285 = 0;
			}
		}
	}
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_550(int iParam0, int iParam1)
{
	if (func_545(unk_0x9E2D6C50374FCFA9()) && func_544())
	{
		if (func_139(iParam0) && iParam1 > 0)
		{
			func_542(11021, (func_479(11021, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_551(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_576();
	if (iVar5 != func_65())
	{
		func_575(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_574(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_573())
			{
				unk_0xE8BB3AD37B7CA086(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_544())
			{
				if (!func_573())
				{
					Var7 = { func_572() };
					unk_0xCC091D3A89AF23C8(iParam1, unk_0x2E87280918B16506(func_571(Var7)), func_570(Var7), iParam4);
				}
			}
			else if (func_573())
			{
				func_558(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE8BB3AD37B7CA086(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_557())
			{
				if (!func_573())
				{
					unk_0xCC091D3A89AF23C8(iParam1, unk_0x2E87280918B16506(func_571(func_556(unk_0x9E2D6C50374FCFA9()))), 5, iParam4);
				}
			}
			else if (func_573())
			{
				func_558(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE8BB3AD37B7CA086(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_557())
			{
				if (!func_573())
				{
					iVar2 = func_552(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xC530A5E539148D87(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_573())
			{
				func_558(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE811878E2DB4B386(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_573())
			{
				func_558(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x73338A57ED708319(iParam1);
			}
			break;
		
		case 237:
			if (func_557())
			{
				if (!func_573())
				{
					unk_0x83148714B0CEA446(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_573())
			{
				func_558(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE8BB3AD37B7CA086(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_573())
			{
				func_558(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA94478640DCA926E(iParam1);
			}
			break;
		
		case 249:
			if (func_573())
			{
				func_558(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xD2F8A068D640D1AC(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_573())
			{
				func_558(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xC1DBAEAA7B7B2570(iParam1);
			}
			break;
		
		case 243:
			if (func_573())
			{
				func_558(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB514AD4FD69533E6(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_573())
				{
					func_558(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x7A70C2F43E7510F2(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_573())
			{
				func_558(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x7A70C2F43E7510F2(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_573())
			{
				func_558(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = uVar0;
				Global_4528329[iVar4 /*85*/].f_7 = uVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2657FE217212334B(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_552(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_555(iParam0, iParam1);
	fVar1 = (to_float(func_553(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_553(int iParam0, int iParam1)
{
	return (func_554(iParam0) * iParam1);
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22578;
		
		case 0:
			return Global_262145.f_22579;
		
		case 1:
			return Global_262145.f_22580;
		
		case 2:
			return Global_262145.f_22581;
		
		case 3:
			return Global_262145.f_22582;
		
		case 4:
			return Global_262145.f_22583;
		
		case 5:
			return Global_262145.f_22584;
		
		case 6:
			return Global_262145.f_22585;
		
		case 7:
			return Global_262145.f_22586;
		
		default:
	}
	return 0;
}

float func_555(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22588);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22590;
			fVar1 = to_float(Global_262145.f_22587);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22590;
			fVar1 = to_float(Global_262145.f_22587);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22591;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22591;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22591;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22592;
			fVar1 = to_float(Global_262145.f_22589);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22592;
			fVar1 = to_float(Global_262145.f_22589);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22592;
			fVar1 = to_float(Global_262145.f_22589);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_556(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

bool func_557()
{
	return func_124(unk_0x9E2D6C50374FCFA9());
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_573())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_559(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_559(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_559(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_559(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_559(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_573())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_19()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_566(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_565(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_560(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_560(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_561(iParam0);
	}
}

void func_561(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_573())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_564(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_562(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_562(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_563(&(uParam0->f_14));
	func_563(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_563(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_564(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_565(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_566(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_573())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_567(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_567(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_569(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_568();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_568()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_569(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_571(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_572()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_194;
}

int func_573()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

bool func_574(bool bParam0)
{
	return func_191(unk_0x9E2D6C50374FCFA9(), bParam0);
}

void func_575(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1893548[iParam0 /*600*/].f_11.f_8[0];
	*uParam2 = Global_1893548[iParam0 /*600*/].f_11.f_8[1];
}

int func_576()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

int func_577(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_578(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_578(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_588(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_584(unk_0x6EA486FF6D815B4B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_579(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_579(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_582(iParam0, 1) };
	if (iParam0 == func_581(unk_0xE2D3D51028F0428A()))
	{
		func_580(1);
	}
	func_584(Var0, iParam1, 0, sParam2, iParam3);
}

void func_580(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_581(var uParam0)
{
	return uParam0;
}

Vector3 func_582(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x66DEF7450747437A())
	{
		Var1 = { unk_0x9C0ED16B4F524508(2) };
	}
	if (iParam0 == func_583(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		Var0 = { unk_0xCACAD935C0BEE14F(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar2 = unk_0x82FE2343F8BDFF0B(iParam0);
		if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x6DB7FBD602C51670(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_583(var uParam0)
{
	return uParam0;
}

void func_584(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_587(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam1;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam2;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_586();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_585();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam4);
		}
	}
}

int func_585()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_586()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_587(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x987A5F1E1A67E3C0(unk_0xCB284F809B594322(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_588(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_589(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_589(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_619(unk_0x9E2D6C50374FCFA9()) || func_618(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_245() || func_617(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_616(uParam2))
	{
	}
	if (func_615())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_613(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_612(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_610(0, &iVar1);
					break;
				
				case 3:
					func_610(1, &iVar1);
					break;
				
				case 1:
					func_608(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_607(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_599((func_606(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_2 != -1)
				{
					func_607(1166, iVar1, -1);
				}
				func_594(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_590((func_592(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_590((func_592(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_590(int iParam0)
{
	if (func_615())
	{
		Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_5 = iParam0;
		func_591(joaat("mpply_globalxp"), iParam0);
	}
}

void func_591(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_592(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1121(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_593(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_593(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_593(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_594(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_67(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar1 = func_597(func_598(&Var0));
			if (iVar1 == 0)
			{
				func_596(&Global_1655483, iParam0);
				func_595(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar1 == 1)
			{
				func_596(&Global_1655484, iParam0);
				func_595(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar1 == 2)
			{
				func_596(&Global_1655485, iParam0);
				func_595(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar1 == 3)
			{
				func_596(&Global_1655486, iParam0);
				func_595(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar1 == 4)
			{
				func_596(&Global_1655487, iParam0);
				func_595(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_595(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_596(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_597(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_598(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

void func_599(int iParam0, int iParam1, int iParam2)
{
	if (func_615())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_150(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_150(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_605(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_6 = func_603(iParam0, 1);
		}
		func_541(640, iParam0, -1, 1);
		func_542(641, func_603(iParam0, 1), -1, 1, 0);
		Global_1655628[func_150(-1)] = iParam0;
		func_600(-1109644434, 7, 0);
	}
}

void func_600(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_602(iParam1, iParam2))
	{
		iVar0 = func_601();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_601()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_602(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_603(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_604(iParam0, 0);
}

int func_604(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_605(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_606(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_150(-1)];
			}
			else if (func_605(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_150(-1)];
	}
	return 0;
}

void func_607(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_479(iParam0, func_150(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_543(iParam0))
	{
		func_542(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_541(iParam0, iVar0, iParam2, 1);
	}
}

void func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_372(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_68(unk_0x9E2D6C50374FCFA9(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_609(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_609(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_609(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_610(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_1121(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_68(unk_0x9E2D6C50374FCFA9(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1121(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_611(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(unk_0x9E2D6C50374FCFA9(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_609(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_609(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_611(int iParam0, int iParam1)
{
	return vdist(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_612(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_609(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_613(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_606(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_606(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_614(8000, 0, 0) > 0)
	{
		if (func_614(8000, 0, 0) < (iParam0 + func_606(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_614(8000, 0, 0) - func_606(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_614(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294328[iParam0];
}

int func_615()
{
	return 1;
}

int func_616(var uParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_617(int iParam0)
{
	return func_428(func_105(iParam0));
}

bool func_618(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_619(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_620()
{
	Global_2726775 = 1;
}

void func_621(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_624(iParam0);
	iVar1 = func_623(iParam0);
	iVar2 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(Global_2810287.f_5193.f_269, unk_0x0A89FDFA763DCAED()));
	if (func_622(iParam0) != -1)
	{
		if (iVar2 > func_622(iParam0))
		{
			iVar2 = func_622(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12659)
	{
		iVar2 = Global_262145.f_12659;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_622(int iParam0)
{
	if (func_222(iParam0, 0) || func_140(iParam0))
	{
		return Global_262145.f_18753;
	}
	if (func_139(iParam0))
	{
		return Global_262145.f_18752;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18749;
		
		case 191:
			return Global_262145.f_18751;
		
		case 190:
			return Global_262145.f_18750;
		
		case 227:
			return Global_262145.f_21311;
		
		case 226:
			return Global_262145.f_21299;
		
		case 225:
			return Global_262145.f_21319;
		
		case 230:
			return Global_262145.f_22575;
		
		case 229:
			return Global_262145.f_22479;
		
		case 233:
			return Global_262145.f_23055;
		
		case 237:
			return Global_262145.f_24218;
		
		case 238:
			return Global_262145.f_24329;
		
		case 249:
			return Global_262145.f_24345;
		
		case 243:
			return Global_262145.f_26740;
		
		default:
	}
	return -1;
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12750;
		
		case 152:
			return Global_262145.f_12785;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12773;
		
		case 157:
			return Global_262145.f_12740;
		
		case 159:
			return Global_262145.f_12723;
		
		case 164:
			return Global_262145.f_12763;
		
		case 160:
			return Global_262145.f_12813;
		
		case 162:
			return Global_262145.f_12833;
		
		case 163:
			return Global_262145.f_12798;
		
		case 154:
			return Global_262145.f_12868;
		
		case 155:
			return Global_262145.f_12858;
		
		case 153:
			return Global_262145.f_12822;
		
		case 170:
			return Global_262145.f_15261;
		
		case 171:
			return Global_262145.f_15320;
		
		case 172:
			return Global_262145.f_15338;
		
		case 173:
			return Global_262145.f_15279;
		
		case 166:
			return Global_262145.f_15294;
		
		case 167:
			return Global_262145.f_15385;
		
		case 169:
			return Global_262145.f_15357;
		
		case 168:
			return Global_262145.f_15350;
		
		case 179:
			return Global_262145.f_18632;
		
		case 180:
			return Global_262145.f_18410;
		
		case 182:
			return Global_262145.f_18410;
		
		case 183:
			return Global_262145.f_18410;
		
		case 185:
			return Global_262145.f_18410;
		
		case 186:
			return Global_262145.f_18410;
		
		case 189:
			return Global_262145.f_18632;
		
		case 190:
			return Global_262145.f_18286;
		
		case 191:
			return Global_262145.f_18377;
		
		case 192:
			return Global_262145.f_18171;
		
		case 193:
			return Global_262145.f_18632;
		
		case 194:
			return Global_262145.f_18632;
		
		case 195:
			return Global_262145.f_18410;
		
		case 197:
			return Global_262145.f_18410;
		
		case 198:
			return Global_262145.f_18410;
		
		case 199:
			return Global_262145.f_18632;
		
		case 200:
			return Global_262145.f_18632;
		
		case 201:
			return Global_262145.f_18632;
		
		case 205:
			return Global_262145.f_18632;
		
		case 207:
			return Global_262145.f_18410;
		
		case 208:
			return Global_262145.f_18410;
		
		case 209:
			return Global_262145.f_18410;
		
		case 210:
			return Global_262145.f_18632;
		
		case 211:
			return Global_262145.f_18632;
		
		case 214:
			return Global_262145.f_19482;
		
		case 215:
			return Global_262145.f_19484;
		
		case 216:
			return Global_262145.f_19486;
		
		case 217:
			return Global_262145.f_19488;
		
		case 218:
			return Global_262145.f_19490;
		
		case 219:
			return Global_262145.f_19492;
		
		case 220:
			return Global_262145.f_19494;
		
		case 221:
			return Global_262145.f_19496;
		
		case 225:
			if (!func_557())
			{
				return Global_262145.f_21321;
			}
			break;
		
		case 226:
			if (!func_557())
			{
				return Global_262145.f_21301;
			}
			break;
		
		case 227:
			if (!func_557())
			{
				return Global_262145.f_21313;
			}
			break;
		
		case 229:
			if (!func_557())
			{
				return Global_262145.f_22481;
			}
			break;
		
		case 230:
			if (!func_557())
			{
				return Global_262145.f_22577;
			}
			break;
		
		case 233:
			if (!func_557())
			{
				return Global_262145.f_23054;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_557())
			{
				return Global_262145.f_24220;
			}
			break;
		
		case 238:
			if (!func_557())
			{
				return Global_262145.f_24331;
			}
			break;
		
		case 249:
			if (!func_557())
			{
				return Global_262145.f_24347;
			}
			break;
		
		case 243:
			if (!func_557())
			{
				return Global_262145.f_26743;
			}
			break;
		
		case 158:
			if (!func_557())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12749;
		
		case 152:
			return Global_262145.f_12784;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12772;
		
		case 157:
			return Global_262145.f_12739;
		
		case 159:
			return Global_262145.f_12722;
		
		case 164:
			return Global_262145.f_12762;
		
		case 160:
			return Global_262145.f_12812;
		
		case 162:
			return Global_262145.f_12832;
		
		case 163:
			return Global_262145.f_12797;
		
		case 154:
			return Global_262145.f_12867;
		
		case 155:
			return Global_262145.f_12857;
		
		case 153:
			return Global_262145.f_12821;
		
		case 170:
			return Global_262145.f_15260;
		
		case 171:
			return Global_262145.f_15319;
		
		case 172:
			return Global_262145.f_15337;
		
		case 173:
			return Global_262145.f_15278;
		
		case 166:
			return Global_262145.f_15293;
		
		case 179:
			return Global_262145.f_18631;
		
		case 180:
			return Global_262145.f_18409;
		
		case 182:
			return Global_262145.f_18409;
		
		case 183:
			return Global_262145.f_18409;
		
		case 185:
			return Global_262145.f_18409;
		
		case 186:
			return Global_262145.f_18409;
		
		case 189:
			return Global_262145.f_18631;
		
		case 193:
			return Global_262145.f_18631;
		
		case 194:
			return Global_262145.f_18631;
		
		case 195:
			return Global_262145.f_18409;
		
		case 197:
			return Global_262145.f_18409;
		
		case 198:
			return Global_262145.f_18409;
		
		case 199:
			return Global_262145.f_18631;
		
		case 200:
			return Global_262145.f_18631;
		
		case 201:
			return Global_262145.f_18631;
		
		case 205:
			return Global_262145.f_18631;
		
		case 207:
			return Global_262145.f_18409;
		
		case 208:
			return Global_262145.f_18409;
		
		case 209:
			return Global_262145.f_18409;
		
		case 210:
			return Global_262145.f_18631;
		
		case 211:
			return Global_262145.f_18631;
		
		case 190:
			if (func_255(0))
			{
				return Global_262145.f_18285;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_255(0))
			{
				return Global_262145.f_18376;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_255(0))
			{
				return Global_262145.f_18170;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19481;
		
		case 215:
			return Global_262145.f_19483;
		
		case 216:
			return Global_262145.f_19485;
		
		case 217:
			return Global_262145.f_19487;
		
		case 218:
			return Global_262145.f_19489;
		
		case 219:
			return Global_262145.f_19491;
		
		case 220:
			return Global_262145.f_19493;
		
		case 221:
			return Global_262145.f_19495;
		
		case 225:
			if (func_255(0))
			{
				return Global_262145.f_21320;
			}
			break;
		
		case 226:
			if (func_255(0))
			{
				return Global_262145.f_21300;
			}
			break;
		
		case 227:
			if (func_255(0))
			{
				return Global_262145.f_21312;
			}
			break;
		
		case 229:
			if (func_255(0))
			{
				return Global_262145.f_22480;
			}
			break;
		
		case 230:
			if (func_255(0))
			{
				return Global_262145.f_22576;
			}
			break;
		
		case 233:
			if (func_255(0))
			{
				return Global_262145.f_23056;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_255(0))
			{
				return Global_262145.f_24219;
			}
			break;
		
		case 238:
			if (func_255(0))
			{
				return Global_262145.f_24330;
			}
			break;
		
		case 249:
			if (func_255(0))
			{
				return Global_262145.f_24346;
			}
			break;
		
		case 243:
			return Global_262145.f_26739;
		
		case 158:
			if (func_255(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_557())
		{
			if (func_574(0))
			{
				if (!func_255(0))
				{
					if (unk_0x0D01086B38EC256F(func_576()))
					{
						if (func_635() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_635());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_633(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_630("GB_BCUT_TICK1", func_576(), iVar0, 0, 0, 1);
						}
						func_629(20);
						func_626(func_576(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_626(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1121(iParam0, 0, 1))
	{
		Var0 = 657959395;
		Var0.f_1 = unk_0x9E2D6C50374FCFA9();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_628(iParam0);
		func_627(&(Var0.f_6), &(Var0.f_7));
		unk_0x2700C00F82C16BF0(1, &Var0, 8, func_569(iParam0));
	}
}

void func_627(var uParam0, var uParam1)
{
	*uParam0 = Global_1921036.f_9;
	*uParam1 = Global_1921036.f_10;
}

var func_628(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_511;
}

void func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_7[iVar0]), iVar1);
}

int func_630(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var1))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		unk_0x138506D6C7564EF1(func_365(iParam1, -2, 1, 0, 0));
		unk_0x76DB21247AE4E4E2(func_631(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x138506D6C7564EF1(iParam3);
		}
		unk_0x2AE954BA77A66307(iParam2);
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
		func_310(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_631(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_632(&cVar0);
}

var func_632(char[4] cParam0)
{
	return cParam0;
}

void func_633(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_634(1);
	}
	else
	{
		iVar1 = func_634(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_634(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12654;
}

int func_635()
{
	return Global_262145.f_12653;
}

void func_636(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_255(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_557())
		{
			iVar17 = unk_0x9E2D6C50374FCFA9();
		}
		else
		{
			iVar17 = func_576();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1853128[iVar11 /*888*/].f_865.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1853128[iVar11 /*888*/].f_865.f_2;
			}
			else
			{
				iVar2 = func_652(Global_1853128[iVar11 /*888*/].f_865, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_651(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x9E2D6C50374FCFA9())
				{
					func_650("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1944935.f_49 = *uParam3;
			if (iVar17 == unk_0x9E2D6C50374FCFA9())
			{
				if (iVar2 > 0)
				{
					func_649(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_647(*uParam3);
				}
				iVar6 = func_646(&uVar5);
				iVar7 = Global_262145.f_24249;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_24248));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_629(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x5D79167FED95F0B0())
						{
							iVar22 = iVar21;
							if (unk_0x81F82FFBED0CACCA(iVar22))
							{
								iVar23 = unk_0x6B01934FA503547F(iVar22);
								if (func_645(iVar23))
								{
									func_637(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2810287.f_5193.f_386 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24221;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24222;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957936 = *iParam2;
					func_629(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_639(iParam0);
	func_638(iParam0, uVar0, iParam1, iParam2);
}

void func_638(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1890277845;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_628(iParam0);
	func_627(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			unk_0x2700C00F82C16BF0(1, &Var0, 8, func_569(iParam0));
		}
	}
}

int func_639(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_644();
	iVar0 = func_642(iParam0, iVar0);
	iVar1 = Global_1893548[func_576() /*600*/].f_11.f_427;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15221));
	if (iVar0 < func_641())
	{
		iVar0 = func_641();
	}
	if (iVar0 > func_640())
	{
		iVar0 = func_640();
	}
	return iVar0;
}

int func_640()
{
	return Global_262145.f_15222;
}

int func_641()
{
	return Global_262145.f_16397;
}

int func_642(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_696(iParam0) * func_643());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_643()
{
	return Global_262145.f_16396;
}

var func_644()
{
	return Global_262145.f_12645;
}

int func_645(int iParam0)
{
	if (unk_0x0D01086B38EC256F(iParam0))
	{
		if (iParam0 != unk_0x9E2D6C50374FCFA9())
		{
			if (func_76(iParam0, unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (!func_109(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_646(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x0D01086B38EC256F(unk_0xA1087A6350CD9244(iVar0)))
		{
			iVar2 = unk_0xA1087A6350CD9244(iVar0);
			if (!func_17(iVar2, 0) && !func_76(iVar2, unk_0x9E2D6C50374FCFA9(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_647(int iParam0)
{
	func_648(iParam0, 7238);
}

void func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_479(iParam1, -1, 0);
	func_542(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_649(int iParam0)
{
	func_648(iParam0, 7233);
}

int func_650(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x150D8F58B26E9F70(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	if (bParam2)
	{
		func_310(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_310(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_651(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24250);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_652(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_653(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_255(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_557())
		{
			iVar15 = unk_0x9E2D6C50374FCFA9();
		}
		else
		{
			iVar15 = func_576();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_553(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_552(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_655(*iParam2) > 0)
			{
				if (iVar15 == unk_0x9E2D6C50374FCFA9())
				{
					func_650("SMTICK_RONCUT", func_655(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_655(*iParam2));
			}
			if (iVar15 == unk_0x9E2D6C50374FCFA9())
			{
				func_654(iVar2, iVar9);
				iVar6 = func_646(&uVar5);
				iVar7 = Global_262145.f_22594;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22593));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_629(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5D79167FED95F0B0())
						{
							iVar19 = iVar18;
							if (unk_0x81F82FFBED0CACCA(iVar19))
							{
								iVar20 = unk_0x6B01934FA503547F(iVar19);
								if (func_645(iVar20))
								{
									func_637(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2810287.f_5193.f_386 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22527;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22528;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957936 = *iParam2;
					func_629(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_654(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_648(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_648(iParam1, 6119);
	}
}

int func_655(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22561);
	if (fVar1 > to_float(Global_262145.f_22562))
	{
		fVar1 = to_float(Global_262145.f_22562);
	}
	return round(fVar1);
}

void func_656(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_255(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_557())
		{
			iVar15 = unk_0x9E2D6C50374FCFA9();
		}
		else
		{
			iVar15 = func_576();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_556(iVar15);
			iVar0 = (func_674(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_670(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21303));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21302));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x9E2D6C50374FCFA9())
			{
				func_666(iVar16, iVar2);
				if (func_662(iVar16) >= Global_262145.f_20849 || iVar2 >= Global_262145.f_20849)
				{
					func_657(5);
				}
				iVar6 = func_646(&uVar5);
				iVar7 = round(Global_262145.f_21305);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21304));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_629(108);
					}
					else
					{
						func_629(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5D79167FED95F0B0())
						{
							iVar19 = iVar18;
							if (unk_0x81F82FFBED0CACCA(iVar19))
							{
								iVar20 = unk_0x6B01934FA503547F(iVar19);
								if (func_645(iVar20))
								{
									func_637(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2810287.f_5193.f_386 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21306;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21307;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957936 = *iParam2;
					func_629(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20837)
			{
				if (func_659(Global_262145.f_20838))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20839)
			{
				if (func_659(Global_262145.f_20840))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20841)
			{
				if (func_659(Global_262145.f_20842))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20843)
			{
				if (func_659(Global_262145.f_20844))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20845)
			{
				if (func_659(Global_262145.f_20846))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20847)
			{
				if (func_659(Global_262145.f_20848))
				{
					func_650("CLOTHAWDSTRAP3", Global_262145.f_20849, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20850)
			{
				if (func_659(Global_262145.f_20851))
				{
					func_650("CLOTHAWDSTRAP5", Global_262145.f_20985, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20853)
			{
				if (func_659(Global_262145.f_20854))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20855)
			{
				if (func_659(Global_262145.f_20856))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20857)
			{
				if (func_659(Global_262145.f_20858))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20859)
			{
				if (func_659(Global_262145.f_20860))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20861)
			{
				if (func_659(Global_262145.f_20862))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20863)
			{
				if (func_659(Global_262145.f_20864))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20865)
			{
				if (func_659(Global_262145.f_20866))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20867)
			{
				if (func_659(Global_262145.f_20868))
				{
					func_658("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_658(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x150D8F58B26E9F70(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x138506D6C7564EF1(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x138506D6C7564EF1(iParam3);
	}
	unk_0x26C23BE14F66F202(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
	}
	else
	{
		Global_2783300 = { func_67(unk_0x9E2D6C50374FCFA9()) };
		if (unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300))
		{
			iVar1 = 0;
			if (unk_0x3C57C2F07FEE34D2(&(Global_2783230.f_22), "Leader") && Global_2783230.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2783230.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x2FE2977F89F2C159(iVar2, unk_0x780A8BCE22FA646B(&Global_2783230, 35), &(Global_2783230.f_17), Global_2783230.f_30, iVar1, 0, Global_2783230, unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), Global_1576203, Global_1576204, Global_1576205);
		}
		else
		{
			iVar0 = unk_0x187DF98ED95E5557(0, 1);
		}
	}
	func_310(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_525(15417, -1))
			{
				func_466(15417, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_525(15418, -1))
			{
				func_466(15418, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_525(15425, -1))
			{
				func_466(15425, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_525(15405, -1))
			{
				func_466(15405, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_525(15393, -1))
			{
				func_466(15393, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_525(15409, -1))
			{
				func_466(15409, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_525(15396, -1))
			{
				func_466(15396, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_525(15412, -1))
			{
				func_466(15412, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_525(15403, -1))
			{
				func_466(15403, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_525(15389, -1))
			{
				func_466(15389, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_525(15398, -1))
			{
				func_466(15398, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_525(15400, -1))
			{
				func_466(15400, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_525(15408, -1))
			{
				func_466(15408, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_525(15411, -1))
			{
				func_466(15411, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_525(15397, -1))
			{
				func_466(15397, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_525(15413, -1))
			{
				func_466(15413, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_525(15391, -1))
			{
				func_466(15391, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_525(15388, -1))
			{
				func_466(15388, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_525(15401, -1))
			{
				func_466(15401, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_525(15394, -1))
			{
				func_466(15394, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_525(15406, -1))
			{
				func_466(15406, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_525(15395, -1))
			{
				func_466(15395, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_525(15410, -1))
			{
				func_466(15410, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_525(15407, -1))
			{
				func_466(15407, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_525(15414, -1))
			{
				func_466(15414, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_525(15415, -1))
			{
				func_466(15415, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_525(15399, -1))
			{
				func_466(15399, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_525(15404, -1))
			{
				func_466(15404, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_525(15392, -1))
			{
				func_466(15392, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_525(15390, -1))
			{
				func_466(15390, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_525(15402, -1))
			{
				func_466(15402, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_525(15416, -1))
			{
				func_466(15416, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_149(209, -1))
			{
				func_660(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_525(15426, -1))
			{
				func_466(15426, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_525(15422, -1))
			{
				func_466(15422, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_525(15423, -1))
			{
				func_466(15423, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_525(15421, -1))
			{
				func_466(15421, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_525(15427, -1))
			{
				func_466(15427, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_525(15419, -1))
			{
				func_466(15419, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_525(15420, -1))
			{
				func_466(15420, 1, -1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_661())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_150(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_661()
{
	return 1;
	return 0;
}

int func_662(int iParam0)
{
	int iVar0;
	
	iVar0 = func_664(iParam0);
	return func_479(func_663(iVar0), -1, 0);
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3953;
		
		case 1:
			return 3954;
		
		case 2:
			return 3955;
		
		case 3:
			return 3956;
		
		case 4:
			return 3957;
		
		case 5:
			return 5458;
		
		default:
	}
	return 3953;
}

int func_664(int iParam0)
{
	int iVar0;
	
	if (func_665(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar0 /*13*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_665(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_666(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_664(iParam0);
	iVar1 = func_663(iVar0);
	iVar2 = (func_479(iVar1, -1, 0) + iParam1);
	func_542(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_669(9357, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
			{
				iVar1 = func_663(iVar0);
				iVar3 = (iVar3 + func_479(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_668(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_667(9357, iVar5, -1);
	}
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_669(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

int func_670(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_570(iParam1);
	if (func_665(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17226;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17231);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17236);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17225;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17230);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17235);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17224;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17229);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17234);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17222;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17227);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17232);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17223;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17228);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17233);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21328;
				if (func_671(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21330);
				}
				if (func_671(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21329);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_671(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_673(iParam0, iParam1))
	{
		iVar0 = func_672(iParam0, iParam1);
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_5, iParam2);
	}
	return 0;
}

int func_672(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_665(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_665(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_674(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_665(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_675(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_544())
			{
				Var0 = { func_572() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_670(unk_0x9E2D6C50374FCFA9(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18861);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18860);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_646(&uVar9);
				iVar11 = round(Global_262145.f_18851);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18850));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_629(86);
				}
				Global_2810287.f_5193.f_386 = *iParam2;
			}
			else if (func_255(0))
			{
				Var14 = { func_676(func_576()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_670(func_576(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18861));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18860));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18900;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18901;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_676(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_194;
}

void func_677(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_124(unk_0x9E2D6C50374FCFA9()))
		{
			if (bParam1)
			{
				func_692();
			}
			func_691();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_124(unk_0x9E2D6C50374FCFA9()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_683(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_682(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_646(&uVar2);
					iVar4 = Global_262145.f_16407;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15616));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_629(44);
					}
				}
				func_680(*iParam3);
				func_679();
				Global_2810287.f_5193.f_386 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x5D79167FED95F0B0())
				{
					iVar8 = iVar7;
					if (unk_0x81F82FFBED0CACCA(iVar8))
					{
						iVar9 = unk_0x6B01934FA503547F(iVar8);
						if (func_645(iVar9))
						{
							func_637(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_124(unk_0x9E2D6C50374FCFA9()))
		{
			func_678();
		}
	}
}

void func_678()
{
	int iVar0;
	
	iVar0 = Global_2863484[func_19()];
	iVar0++;
	func_541(3669, iVar0, -1, 1);
}

void func_679()
{
	int iVar0;
	
	iVar0 = Global_2863490[func_19()];
	iVar0++;
	func_541(3668, iVar0, -1, 1);
}

void func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2863493[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_541(3670, iVar0, -1, 1);
	if (func_669(7666, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_681(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_667(7666, iVar2, -1);
	}
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16540;
			break;
		
		case 2:
			return Global_262145.f_16541;
			break;
		
		case 3:
			return Global_262145.f_16542;
			break;
		
		case 4:
			return Global_262145.f_16543;
			break;
		
		case 5:
			return Global_262145.f_16544;
			break;
		
		case 6:
			return Global_262145.f_16545;
			break;
		
		case 7:
			return Global_262145.f_16546;
			break;
		
		case 8:
			return Global_262145.f_16547;
			break;
		
		case 9:
			return Global_262145.f_16548;
			break;
		
		case 10:
			return Global_262145.f_16549;
			break;
		
		case 11:
			return Global_262145.f_16550;
			break;
		
		case 12:
			return Global_262145.f_16551;
			break;
		
		case 13:
			return Global_262145.f_16552;
			break;
		
		case 14:
			return Global_262145.f_16553;
			break;
		
		case 15:
			return Global_262145.f_16554;
			break;
		
		case 16:
			return Global_262145.f_16555;
			break;
		
		case 17:
			return Global_262145.f_16556;
			break;
		
		case 18:
			return Global_262145.f_16557;
			break;
		
		case 19:
			return Global_262145.f_16558;
			break;
		
		case 20:
			return Global_262145.f_16559;
			break;
		
		case 21:
			return Global_262145.f_16560;
			break;
		
		case 22:
			return Global_262145.f_16561;
			break;
		
		case 23:
			return Global_262145.f_16562;
			break;
		
		case 24:
			return Global_262145.f_16563;
			break;
	}
	return 0;
}

var func_682(int iParam0)
{
	if (iParam0 >= Global_262145.f_15594)
	{
		return Global_262145.f_15615;
	}
	else if (iParam0 >= Global_262145.f_15593)
	{
		return Global_262145.f_15614;
	}
	else if (iParam0 >= Global_262145.f_15592)
	{
		return Global_262145.f_15613;
	}
	else if (iParam0 >= Global_262145.f_15591)
	{
		return Global_262145.f_15612;
	}
	else if (iParam0 >= Global_262145.f_15590)
	{
		return Global_262145.f_15611;
	}
	else if (iParam0 >= Global_262145.f_15589)
	{
		return Global_262145.f_15610;
	}
	else if (iParam0 >= Global_262145.f_15588)
	{
		return Global_262145.f_15609;
	}
	else if (iParam0 >= Global_262145.f_15587)
	{
		return Global_262145.f_15608;
	}
	else if (iParam0 >= Global_262145.f_15586)
	{
		return Global_262145.f_15607;
	}
	else if (iParam0 >= Global_262145.f_15585)
	{
		return Global_262145.f_15606;
	}
	else if (iParam0 >= Global_262145.f_15584)
	{
		return Global_262145.f_15605;
	}
	else if (iParam0 >= Global_262145.f_15583)
	{
		return Global_262145.f_15604;
	}
	else if (iParam0 >= Global_262145.f_15582)
	{
		return Global_262145.f_15603;
	}
	else if (iParam0 >= Global_262145.f_15581)
	{
		return Global_262145.f_15602;
	}
	else if (iParam0 >= Global_262145.f_15580)
	{
		return Global_262145.f_15601;
	}
	else if (iParam0 >= Global_262145.f_15579)
	{
		return Global_262145.f_15600;
	}
	else if (iParam0 >= Global_262145.f_15578)
	{
		return Global_262145.f_15599;
	}
	else if (iParam0 >= Global_262145.f_15577)
	{
		return Global_262145.f_15598;
	}
	else if (iParam0 >= Global_262145.f_15576)
	{
		return Global_262145.f_15597;
	}
	else if (iParam0 >= Global_262145.f_15575)
	{
		return Global_262145.f_15596;
	}
	return Global_262145.f_15595;
}

int func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_690(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_689(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_688(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_684(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_684(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_688(unk_0x5853B15F78E1A265(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_684(int iParam0)
{
	int iVar0;
	
	if (func_687(iParam0))
	{
		iVar0 = func_685(func_686(iParam0));
		return func_479(iVar0, -1, 0);
	}
	return 0;
}

int func_685(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3648;
	}
	else if (iParam0 == 1)
	{
		return 3649;
	}
	else if (iParam0 == 2)
	{
		return 3650;
	}
	else if (iParam0 == 3)
	{
		return 3651;
	}
	else if (iParam0 == 4)
	{
		return 3652;
	}
	return 3648;
}

int func_686(int iParam0)
{
	int iVar0;
	
	if (func_687(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_687(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_688(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15794;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15792;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15796;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15790;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15788;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15798;
	}
	return 0;
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_687(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1946638[iVar0] == iParam1 && Global_1946645[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_690(int iParam0)
{
	int iVar0;
	
	if (func_687(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_691()
{
	int iVar0;
	
	iVar0 = Global_2863481[func_19()];
	iVar0++;
	Global_2863481[func_19()] = iVar0;
	func_541(3667, iVar0, -1, 1);
}

void func_692()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2863478[func_19()];
	iVar1 = Global_2863487[func_19()];
	iVar0++;
	iVar1++;
	Global_2863478[func_19()] = iVar0;
	Global_2863487[func_19()] = iVar1;
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_132 = iVar1;
	func_541(3665, iVar0, -1, 1);
	func_541(3666, iVar1, -1, 1);
}

void func_693()
{
	if (func_557())
	{
		Global_2715542.f_3076.f_134 = 0;
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
	}
}

void func_694()
{
	if (func_557())
	{
		if (Global_2715542.f_3076.f_134 < 10)
		{
			Global_2715542.f_3076.f_134++;
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
		}
	}
}

void func_695()
{
	if (func_557())
	{
		if (Global_2715542.f_3076.f_134 > 0)
		{
			Global_2715542.f_3076.f_134 = (Global_2715542.f_3076.f_134 - 1);
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
		}
	}
}

int func_696(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_28;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_574(1) && !func_255(1))
			{
				if (func_698(func_576()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_116(iParam0) == 0)
	{
		if (func_574(1) && !func_255(1))
		{
			if (func_698(func_576()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_698(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 26);
}

int func_699(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18547;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12770) * Global_262145.f_12775));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12720) * Global_262145.f_12725));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12747) * Global_262145.f_12751));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12760) * Global_262145.f_12764));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12782) * Global_262145.f_12787));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12944) * Global_262145.f_12945));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12950) * Global_262145.f_12951));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12948) * Global_262145.f_12949));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12942) * Global_262145.f_12943));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12946) * Global_262145.f_12947));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12940) * Global_262145.f_12941));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15317;
		
		case 172:
			return Global_262145.f_15333;
		
		case 173:
			return Global_262145.f_15276;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18555;
		
		case 180:
			return Global_262145.f_18430;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18438;
		
		case 185:
			return Global_262145.f_18447;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18643;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18660;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18507;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18691;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18569;
		
		case 205:
			return Global_262145.f_18678;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18536;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18673;
		
		case 211:
			return Global_262145.f_18637;
		
		case 214:
			return Global_262145.f_19231;
		
		case 215:
			return Global_262145.f_19241;
		
		case 216:
			return Global_262145.f_19251;
		
		case 217:
			return Global_262145.f_19260;
		
		case 218:
			return Global_262145.f_19269;
		
		case 219:
			return Global_262145.f_19285;
		
		case 241:
			return Global_262145.f_24366;
		
		case 242:
			return Global_262145.f_24362;
		
		case 248:
			return Global_262145.f_24365;
		
		case 244:
			return Global_262145.f_24363;
		
		case 239:
			return Global_262145.f_24367;
		
		case 240:
			return Global_262145.f_24368;
		
		case 243:
			return Global_262145.f_26738;
		
		default:
	}
	return 0;
}

int func_700(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18548;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12771) * Global_262145.f_12776));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12721) * Global_262145.f_12726));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12748) * Global_262145.f_12752));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12761) * Global_262145.f_12765));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12783) * Global_262145.f_12788));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12820) * Global_262145.f_12823));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12866) * Global_262145.f_12869));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12856) * Global_262145.f_12859));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12811) * Global_262145.f_12814));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12831) * Global_262145.f_12836));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12796) * Global_262145.f_12799));
		
		case 170:
			return Global_262145.f_15259;
		
		case 171:
			return Global_262145.f_15318;
		
		case 172:
			return Global_262145.f_15334;
		
		case 173:
			return Global_262145.f_15277;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17356;
		
		case 168:
			return Global_262145.f_17355;
		
		case 179:
			return Global_262145.f_18556;
		
		case 180:
			return Global_262145.f_18431;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18439;
		
		case 185:
			return Global_262145.f_18448;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18644;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18661;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18508;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18692;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18570;
		
		case 205:
			return Global_262145.f_18679;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18537;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18674;
		
		case 211:
			return Global_262145.f_18638;
		
		case 214:
			return Global_262145.f_19232;
		
		case 215:
			return Global_262145.f_19242;
		
		case 216:
			return Global_262145.f_19252;
		
		case 217:
			return Global_262145.f_19261;
		
		case 218:
			return Global_262145.f_19270;
		
		case 219:
			return Global_262145.f_19286;
		
		case 178:
			if (func_557())
			{
				return Global_262145.f_19109;
			}
			else if (bParam1)
			{
				return Global_262145.f_19110;
			}
			break;
		
		case 188:
			if (func_557())
			{
				return Global_262145.f_19193;
			}
			else if (bParam1)
			{
				return Global_262145.f_19194;
			}
			break;
		
		case 225:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_21316;
				}
				else
				{
					return Global_262145.f_21317;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_21318;
			}
			break;
		
		case 226:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_21296;
				}
				else
				{
					return Global_262145.f_21297;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_21298;
			}
			break;
		
		case 227:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_21308;
				}
				else
				{
					return Global_262145.f_21309;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_21310;
			}
			break;
		
		case 229:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_22476;
				}
				else
				{
					return Global_262145.f_22477;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_22478;
			}
			break;
		
		case 230:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_22572;
				}
				else
				{
					return Global_262145.f_22573;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_22574;
			}
			break;
		
		case 233:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_23052;
				}
				else
				{
					return Global_262145.f_23053;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_23051;
			}
			break;
		
		case 241:
			return Global_262145.f_24373;
		
		case 242:
			return Global_262145.f_24369;
		
		case 244:
			return Global_262145.f_24370;
		
		case 248:
			return Global_262145.f_24372;
		
		case 239:
			return Global_262145.f_24374;
		
		case 240:
			return Global_262145.f_24375;
		
		case 237:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_24215;
				}
				else
				{
					return Global_262145.f_24216;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_24217;
			}
			break;
		
		case 238:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_24326;
				}
				else
				{
					return Global_262145.f_24327;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_24328;
			}
			break;
		
		case 249:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_24342;
				}
				else
				{
					return Global_262145.f_24343;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_24344;
			}
			break;
		
		case 243:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return Global_262145.f_26741;
				}
				else
				{
					return Global_262145.f_26742;
				}
			}
			else if (func_544())
			{
				return Global_262145.f_26741;
			}
			break;
		
		case 158:
			if (func_557() && !func_544())
			{
				if (func_698(unk_0x9E2D6C50374FCFA9()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_544())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_701(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_702(iParam0))
	{
		if (!func_557())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12664;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (func_324(iParam0))
		{
			*uParam1 = (Global_262145.f_18407 / 100f);
			*uParam2 = (Global_262145.f_18407 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24376;
			*uParam2 = Global_262145.f_24376;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24377;
			*uParam2 = Global_262145.f_24377;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24379;
			*uParam2 = Global_262145.f_24379;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24380;
			*uParam2 = Global_262145.f_24380;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24381;
			*uParam2 = Global_262145.f_24381;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24382;
			*uParam2 = Global_262145.f_24382;
		}
		else
		{
			*uParam1 = Global_262145.f_12661;
			*uParam2 = Global_262145.f_12660;
		}
	}
	else if (func_324(iParam0))
	{
		*uParam1 = (Global_262145.f_18408 / 100f);
		*uParam2 = (Global_262145.f_18408 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24383;
		*uParam2 = Global_262145.f_24383;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24384;
		*uParam2 = Global_262145.f_24384;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24386;
		*uParam2 = Global_262145.f_24386;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24387;
		*uParam2 = Global_262145.f_24387;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24388;
		*uParam2 = Global_262145.f_24388;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24389;
		*uParam2 = Global_262145.f_24389;
	}
	else
	{
		*uParam1 = Global_262145.f_12663;
		*uParam2 = Global_262145.f_12662;
	}
	iVar0 = func_258();
	if (iVar0 != func_65())
	{
		if (func_76(unk_0x9E2D6C50374FCFA9(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_703()
{
	return (Local_88.f_115 * Global_262145.f_15292);
}

int func_704()
{
	return (Local_88.f_115 * Global_262145.f_15291);
}

void func_705(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[3];
	var uVar5[3];
	int iVar6;
	int iVar7;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_183(unk_0x9E2D6C50374FCFA9());
		Global_1944899.f_4 = func_835();
		Global_1944899.f_5 = func_834();
		if (func_130(unk_0x9E2D6C50374FCFA9()) || func_131(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944899.f_6 = 1;
		}
		else
		{
			Global_1944899.f_6 = 0;
		}
		Global_1944899.f_1 = func_828(bParam9);
		Global_1944899.f_8 = unk_0x48352343BC5A41AE();
		Global_1944899.f_9 = func_827(bParam0);
		Global_1944899.f_10 = iParam1;
		Global_1944899.f_17 = Global_1944899.f_2;
		Global_1944899.f_18 = Global_1944899.f_2;
		Global_1944899.f_19 = func_826();
		Global_1944899.f_21 = (Global_1944899.f_8 - Global_1944899.f_7);
		if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944899.f_23 = func_827(func_255(1));
		}
		Global_1944899.f_24 = func_825(unk_0x9E2D6C50374FCFA9());
		Global_1944899.f_28 = func_824(unk_0x9E2D6C50374FCFA9());
		if (Global_1944899.f_24 > 2)
		{
			Global_1944899.f_24 = 2;
		}
		func_822(iVar0);
	}
	else
	{
		iVar0 = func_105(unk_0x9E2D6C50374FCFA9());
	}
	if (func_324(iVar0))
	{
		Global_1944638.f_2 = func_835();
		Global_1944638.f_3 = func_834();
		Global_1944638.f_50 = iParam4;
		Global_1944638.f_51 = iParam5;
		Global_1944638.f_10 = unk_0x48352343BC5A41AE();
		Global_1944638.f_20 = (Global_1944638.f_10 - Global_1944638.f_9);
		Global_1944638.f_12 = iParam1;
		Global_1944638.f_19 = func_818(iVar0, bParam0, func_821(bParam3));
		if (bParam0)
		{
			Global_1944638.f_11 = 1;
		}
		else
		{
			Global_1944638.f_11 = 0;
		}
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944638.f_8 = 1;
		}
		else
		{
			Global_1944638.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1944638.f_43 = 0;
			Global_1944638.f_45 = func_817(func_576(), iParam2);
			Global_1944638.f_47 = iParam7;
			Global_1944638.f_46 = iParam6;
			Global_1944638.f_52 = func_816(func_576(), iParam2);
		}
		func_814(iVar0);
	}
	else if (func_329(iVar0))
	{
		Global_1944692.f_2 = func_835();
		Global_1944692.f_3 = func_834();
		Global_1944692.f_10 = unk_0x48352343BC5A41AE();
		Global_1944692.f_19 = (Global_1944692.f_10 - Global_1944692.f_9);
		Global_1944692.f_12 = iParam1;
		if (bParam0)
		{
			Global_1944692.f_11 = 1;
		}
		else
		{
			Global_1944692.f_11 = 0;
		}
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944692.f_8 = 1;
		}
		else
		{
			Global_1944692.f_8 = 0;
		}
		func_812(iVar0);
	}
	else if (func_432(iVar0))
	{
		Global_1944755.f_2 = func_835();
		Global_1944755.f_3 = func_834();
		Global_1944755.f_9 = unk_0x48352343BC5A41AE();
		Global_1944755.f_18 = (Global_1944755.f_9 - Global_1944755.f_8);
		Global_1944755.f_11 = iParam1;
		Global_1944755.f_7 = func_826();
		Global_1944755.f_42 = func_810(func_19(), 5);
		iVar1 = unk_0x9E2D6C50374FCFA9();
		iVar2 = func_556(iVar1);
		Global_1944755.f_28 = iVar2;
		Global_1944755.f_29 = func_827((func_809(iVar1) || func_808(iVar1)));
		Global_1944755.f_30 = func_827(func_807(iVar1));
		Global_1944755.f_32 = func_827(func_806(iVar1));
		Global_1944755.f_33 = func_827(func_805(iVar1));
		Global_1944755.f_34 = func_827(func_804(iVar1));
		Global_1944755.f_35 = func_827(func_803(0, iVar1) == 1);
		Global_1944755.f_36 = func_827(func_802(iVar1));
		Global_1944755.f_37 = func_827(func_801(iVar1));
		Global_1944755.f_38 = func_827(func_800(iVar1));
		Global_1944755.f_39 = func_827(func_671(iVar1, iVar2, 0));
		Global_1944755.f_40 = func_827(func_671(iVar1, iVar2, 2));
		Global_1944755.f_41 = func_827(func_671(iVar1, iVar2, 1));
		if (func_799(iVar1))
		{
			Global_1944755.f_31 = 2;
		}
		else if (func_798(iVar1))
		{
			Global_1944755.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1944755.f_10 = 1;
		}
		else
		{
			Global_1944755.f_10 = 0;
		}
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944755.f_6 = 1;
		}
		else
		{
			Global_1944755.f_6 = 0;
		}
		Global_1944755.f_21 = -2;
		Global_1944755.f_22 = -2;
		func_796(iVar0);
	}
	else if (func_430(iVar0))
	{
		Global_1944799.f_2 = func_835();
		Global_1944799.f_3 = func_834();
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944799.f_6 = 1;
		}
		else
		{
			Global_1944799.f_6 = 0;
		}
		Global_1944799.f_9 = unk_0x48352343BC5A41AE();
		Global_1944799.f_10 = func_827(bParam0);
		Global_1944799.f_11 = iParam1;
		Global_1944799.f_17 = func_795(func_258());
		Global_1944799.f_18 = (Global_1944799.f_9 - Global_1944799.f_8);
		Global_1944799.f_20 = iParam8;
		Global_1944799.f_21 = -2;
		Global_1944799.f_22 = -2;
		Global_1944799.f_27 = func_794();
		Global_1944799.f_29 = func_479(6109, -1, 0);
		Global_1944799.f_30 = func_479(6105, -1, 0);
		Global_1944799.f_31 = func_479(6106, -1, 0);
		Global_1944799.f_32 = func_479(6108, -1, 0);
		Global_1944799.f_33 = func_479(6107, -1, 0);
		Global_1944799.f_34 = func_479(6110, -1, 0);
		Global_1944799.f_36 = func_827(func_255(1));
		Global_1944799.f_37 = func_792();
		func_778();
		func_776(iVar0);
	}
	else if (func_428(iVar0))
	{
		Global_1944853.f_2 = func_835();
		Global_1944853.f_3 = func_834();
		Global_1944853.f_1 = iParam10;
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944853.f_6 = 1;
		}
		else
		{
			Global_1944853.f_6 = 0;
		}
		Global_1944853.f_9 = unk_0x48352343BC5A41AE();
		Global_1944853.f_10 = func_827(bParam0);
		Global_1944853.f_11 = iParam1;
		Global_1944853.f_18 = (Global_1944853.f_9 - Global_1944853.f_8);
		Global_1944853.f_20 = iParam8;
		Global_1944853.f_23 = Global_786547;
		Global_1944853.f_36 = Global_786547.f_1;
		Global_1944853.f_24 = func_479(6159, -1, 0);
		Global_1944853.f_25 = func_479(6164, -1, 0);
		Global_1944853.f_26 = func_479(6165, -1, 0);
		Global_1944853.f_27 = func_827((((func_775() || func_774()) || func_773()) || func_772(unk_0x9E2D6C50374FCFA9())));
		Global_1944853.f_28 = func_479(6166, -1, 0);
		Global_1944853.f_29 = func_827(func_771());
		Global_1944853.f_35 = -1;
		Global_1944853.f_38 = -1;
		Global_1944853.f_39 = Global_1944853.f_4;
		Global_1944853.f_40 = Global_1944853.f_5;
		Global_1944853.f_41 = func_835();
		Global_1944853.f_42 = func_827(func_255(1));
		Global_1944853.f_44 = Global_1944853.f_18;
		func_769(iVar0);
	}
	else if (func_533(iVar0))
	{
		if (Global_1944989.f_2 == -1)
		{
			Global_1944989.f_2 = func_835();
		}
		if (Global_1944989.f_3 == -1)
		{
			Global_1944989.f_3 = func_834();
		}
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944989.f_6 = 1;
		}
		else
		{
			Global_1944989.f_6 = 0;
		}
		Global_1944989.f_1 = func_828(0);
		Global_1944989.f_7 = func_826();
		Global_1944989.f_9 = unk_0x48352343BC5A41AE();
		Global_1944989.f_10 = func_827(bParam0);
		Global_1944989.f_11 = iParam1;
		if (func_576() != -1)
		{
			Global_1944989.f_17 = func_768(func_576());
		}
		Global_1944989.f_18 = (Global_1944989.f_9 - Global_1944989.f_8);
		Global_1944989.f_19 = Global_2810287.f_6707;
		Global_1944989.f_28 = func_824(unk_0x9E2D6C50374FCFA9());
		Global_1944989.f_29 = func_827(func_767(unk_0x9E2D6C50374FCFA9()));
		Global_1944989.f_30 = func_827(func_766(unk_0x9E2D6C50374FCFA9()));
		Global_1944989.f_31 = func_765(unk_0x9E2D6C50374FCFA9());
		if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944989.f_33 = func_827(func_255(1));
		}
		if (Global_1944989.f_34 > 2)
		{
			Global_1944989.f_34 = 2;
		}
		func_763(iVar0);
	}
	else if (func_537(iVar0))
	{
		Global_1944935.f_2 = func_835();
		Global_1944935.f_3 = func_834();
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944935.f_6 = 1;
		}
		else
		{
			Global_1944935.f_6 = 0;
		}
		Global_1944935.f_1 = func_828(0);
		Global_1944935.f_9 = unk_0x48352343BC5A41AE();
		Global_1944935.f_10 = func_827(bParam0);
		Global_1944935.f_11 = iParam1;
		Global_1944935.f_18 = (Global_1944935.f_9 - Global_1944935.f_8);
		Global_1944935.f_28 = func_824(unk_0x9E2D6C50374FCFA9());
		if (Global_1944935.f_28)
		{
			Global_1944935.f_29 = func_762(unk_0x9E2D6C50374FCFA9());
		}
		else
		{
			Global_1944935.f_29 = 0;
		}
		Global_1944935.f_30 = func_746(unk_0x9E2D6C50374FCFA9(), 4, -1);
		Global_1944935.f_31 = func_765(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_32 = func_827(func_745(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_33 = func_827(func_744(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_34 = func_827(func_743(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_35 = func_827(func_742(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_36 = func_741(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_37 = func_740(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_39 = func_739(unk_0x9E2D6C50374FCFA9());
		if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944935.f_41 = func_827(func_255(1));
		}
		if (Global_1944935.f_42 > 2)
		{
			Global_1944935.f_42 = 2;
		}
		func_737(iVar0);
	}
	else if (func_532(iVar0))
	{
		Global_1945073.f_2 = func_835();
		Global_1945073.f_3 = func_834();
		Global_1945073.f_4 = func_736(func_576());
		Global_1945073.f_5 = func_735(func_576());
		if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1945073.f_6 = 1;
		}
		else
		{
			Global_1945073.f_6 = 0;
		}
		Global_1945073.f_7 = func_826();
		Global_1945073.f_9 = unk_0x48352343BC5A41AE();
		Global_1945073.f_10 = func_827(bParam0);
		Global_1945073.f_11 = iParam1;
		if (func_258() != -1)
		{
			Global_1945073.f_17 = func_768(func_258());
		}
		Global_1945073.f_18 = (Global_1945073.f_9 - Global_1945073.f_8);
		Global_1945073.f_21 = 1;
		Global_1945073.f_22 = 1;
		Global_1945073.f_25 = func_734(unk_0x9E2D6C50374FCFA9());
		Global_1945073.f_27 = func_827(func_733(unk_0x9E2D6C50374FCFA9()));
		Global_1945073.f_28 = func_729(21, -1);
		Global_1945073.f_29 = func_827(func_728(unk_0x9E2D6C50374FCFA9()));
		func_726(iVar0);
	}
	else if (func_421(iVar0))
	{
		if (func_576() != -1)
		{
			Global_1945148.f_6 = func_736(func_576());
			Global_1945148.f_7 = func_735(func_576());
		}
		if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1945148.f_8 = func_827(func_255(1));
		}
		Global_1945148.f_10 = func_826();
		Global_1945148.f_11 = 1;
		Global_1945148.f_13 = (unk_0x48352343BC5A41AE() - Global_1973258);
		Global_1945148.f_14 = iParam1;
		Global_1945148.f_19 = 1;
		Global_1945148.f_20 = 1;
		func_724(iVar0);
	}
	else if (func_420(iVar0))
	{
		Global_1945235.f_2 = func_835();
		if (func_576() != -1)
		{
			Global_1945235.f_6 = func_736(func_576());
			Global_1945235.f_7 = func_735(func_576());
		}
		Global_1945235.f_8 = func_827(func_255(1));
		Global_1945235.f_10 = func_826();
		Global_1945235.f_11 = 1;
		Global_1945235.f_14 = iParam1;
		func_722(iVar0);
	}
	else if (func_721(iVar0))
	{
		Global_1945347.f_2 = func_835();
		Global_1945347.f_9 = 1;
		Global_1945347.f_10 = bParam0;
		Global_1945347.f_11 = iParam1;
		func_719(iVar0);
	}
	else if (func_414(iVar0) || func_410(iVar0))
	{
		if (func_576() != -1)
		{
			Global_1945368.f_5 = func_736(func_576());
			Global_1945368.f_6 = func_735(func_576());
		}
		Global_1945368.f_7 = func_827(func_255(1));
		Global_1945368.f_9 = func_826();
		Global_1945368.f_10 = 1;
		Global_1945368.f_13 = iParam1;
		Global_1945368.f_33 = bParam0;
		Global_1945368.f_32 = iVar0;
		func_717(iVar0);
	}
	else if (func_409(iVar0) || func_716(iVar0))
	{
		iVar3 = func_576();
		if (iVar3 != -1)
		{
			Global_1945437.f_7 = func_736(iVar3);
			Global_1945437.f_8 = func_735(iVar3);
		}
		Global_1945437.f_9 = func_827(func_255(1));
		Global_1945437.f_11 = func_826();
		Global_1945437.f_12 = 1;
		Global_1945437.f_15 = bParam0;
		Global_1945437.f_3 = func_835();
		if (func_191(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1945437.f_9 = func_827(func_255(1));
		}
		else
		{
			Global_1945437.f_9 = -1;
		}
		if (func_409(iVar0))
		{
			Global_1945437.f_4 = func_714(func_715(unk_0x9E2D6C50374FCFA9()));
		}
		else
		{
			Global_1945437.f_4 = func_712(func_713(unk_0x9E2D6C50374FCFA9()));
		}
		Global_1945437.f_1 = iVar0;
		Global_1945437.f_16 = iParam1;
		iVar7 = unk_0x9E2D6C50374FCFA9();
		if (iVar3 != -1)
		{
			iVar7 = iVar3;
		}
		iVar6 = 0;
		while (iVar6 < 3)
		{
			uVar4[iVar6] = func_710(func_711(iVar7, iVar6));
			uVar5[iVar6] = func_708(func_709(iVar7, iVar6));
			iVar6++;
		}
		func_706(iVar0, &uVar4, &uVar5);
	}
	else
	{
		Global_1944620.f_6 = unk_0x48352343BC5A41AE();
		if (bParam0)
		{
			Global_1944620.f_7 = 1;
		}
		else
		{
			Global_1944620.f_7 = 0;
		}
		Global_1944620.f_8 = iParam1;
		if (Global_1944620.f_4 == 0)
		{
			if ((func_125(unk_0x9E2D6C50374FCFA9()) || func_143(unk_0x9E2D6C50374FCFA9())) || func_151(unk_0x9E2D6C50374FCFA9()))
			{
				Global_1944620.f_4 = 1;
			}
		}
	}
}

void func_706(int iParam0, var uParam1, var uParam2)
{
	unk_0x46A70777BE6CEAB9(&Global_1945437, uParam1, uParam2);
	func_707();
}

void func_707()
{
	struct<29> Var0;
	
	Global_1945437 = { Var0 };
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -996199159;
		
		case 1:
			return 1351684416;
		
		case 2:
			return 80063766;
		
		default:
	}
	return -1;
}

int func_709(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		if (iParam1 >= 0 && iParam1 < 3)
		{
			return Global_1977258[iParam0 /*55*/].f_27.f_17[iParam1 /*3*/].f_1;
		}
	}
	return 0;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2118247256;
		
		case 1:
			return 1203690123;
		
		case 2:
			return 270501699;
		
		case 3:
			return 1117148689;
		
		case 4:
			return 372411449;
		
		case 5:
			return 1263185141;
		
		default:
	}
	return -1;
}

int func_711(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		if (iParam1 >= 0 && iParam1 < 3)
		{
			return Global_1977258[iParam0 /*55*/].f_27.f_17[iParam1 /*3*/];
		}
	}
	return -1;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -550162297;
		
		case 1:
			return 1867392996;
		
		case 2:
			return 1178478598;
		
		case 3:
			return 1733853200;
		
		case 4:
			return 122463526;
		
		case 5:
			return -11921007;
		
		case 6:
			return 1857889391;
		
		case 7:
			return -175123167;
		
		default:
	}
	return -1;
}

int func_713(int iParam0)
{
	if (func_105(iParam0) == 262)
	{
		return func_536(iParam0);
	}
	return -1;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -652378470;
		
		case 1:
			return -1721915175;
		
		case 2:
			return 1943926012;
		
		case 3:
			return 1889811088;
		
		case 4:
			return 2056605795;
		
		case 5:
			return 1160295559;
		
		default:
	}
	return -1;
}

int func_715(int iParam0)
{
	if (func_105(iParam0) == 263)
	{
		return func_536(iParam0);
	}
	return -1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 262:
			return 1;
		
		default:
	}
	return 0;
}

void func_717(int iParam0)
{
	unk_0xDD14B13C611C2A72(&Global_1945368);
	func_718();
}

void func_718()
{
	struct<34> Var0;
	
	Global_1945368 = { Var0 };
}

void func_719(int iParam0)
{
	unk_0xA0EE58DF5F161A36(&Global_1945347);
	func_720();
}

void func_720()
{
	struct<21> Var0;
	
	Global_1945347 = { Var0 };
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_722(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x95663AE09F86EE73(&Global_1945235);
	func_723();
}

void func_723()
{
	struct<35> Var0;
	
	Global_1945235 = { Var0 };
	Global_1945235.f_23 = 0;
	Global_1945235.f_22 = 0;
	Global_1945235.f_21 = 0;
}

void func_724(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x71E002586231CECC(&Global_1945148);
	func_725();
}

void func_725()
{
	struct<36> Var0;
	
	Global_1945148 = { Var0 };
	Global_1945148.f_23 = 0;
	Global_1945148.f_22 = 0;
	Global_1945148.f_21 = 0;
}

void func_726(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xF736E9FFB158C31E(&Global_1945073);
	func_727();
}

void func_727()
{
	struct<31> Var0;
	
	Global_1945073 = { Var0 };
}

int func_728(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2, 6);
	}
	return 0;
}

int func_729(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_17250)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_732(iParam0);
		if (iVar1 == 0 && func_479(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_731(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_824(unk_0x9E2D6C50374FCFA9()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_730(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1655634[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2863443[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 27)
		{
			return 0;
		}
		return Global_2863282[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_730(int iParam0)
{
	return func_479(9516, iParam0, 0) != 0;
}

bool func_731(int iParam0)
{
	if (!Global_262145.f_23939)
	{
		return 0;
	}
	return func_479(7209, iParam0, 0) != 0;
}

int func_732(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_733(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_379 != 0;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (func_105(iParam0) == 243)
	{
		return func_536(iParam0);
	}
	return -1;
}

int func_735(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[1];
}

int func_736(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[0];
}

void func_737(int iParam0)
{
	unk_0x088366FA1148EB2F(&Global_1944935);
	func_738();
}

void func_738()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1944935 = { Var0 };
}

int func_739(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 12);
	}
	return 0;
}

int func_740(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 10);
	}
	return 0;
}

int func_741(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 11);
	}
	return 0;
}

bool func_742(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 4);
}

bool func_743(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 3);
}

bool func_744(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 2);
}

bool func_745(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 1);
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_65() || !func_761(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_756(iParam0, iParam2);
		
		case 1:
			return func_754(iParam0, iParam2);
		
		case 3:
			return func_753(iParam0);
		
		case 2:
			return func_748(iParam0, iParam2);
		
		case 4:
			return func_747(iParam0);
		
		default:
	}
	return 0;
}

bool func_747(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 6);
	}
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 6);
}

int func_748(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_752(iParam0);
		
		case 11:
			return func_751(iParam0);
		
		case 12:
			return func_750(iParam0);
		
		case 13:
			return func_749(iParam0);
		
		default:
	}
	return 0;
}

bool func_749(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 15);
}

bool func_750(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 14);
}

bool func_751(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 13);
}

bool func_752(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 12);
}

bool func_753(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 11);
	}
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 5);
}

int func_754(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_755(iParam0);
		
		case 6:
			return func_745(iParam0);
		
		case 7:
			return func_744(iParam0);
		
		case 8:
			return func_743(iParam0);
		
		case 9:
			return func_742(iParam0);
		
		default:
	}
	return 0;
}

bool func_755(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 0);
}

int func_756(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_760(iParam0);
		
		case 1:
			return func_759(iParam0);
		
		case 2:
			return func_758(iParam0);
		
		case 3:
			return func_757(iParam0);
		
		case 4:
			return func_765(iParam0);
		
		default:
	}
	return 0;
}

bool func_757(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 10);
}

bool func_758(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 9);
}

bool func_759(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 8);
}

bool func_760(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 7);
}

bool func_761(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_762(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_746(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_746(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_746(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_746(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_763(int iParam0)
{
	unk_0xD64D32D200423B06(&Global_1944989);
	func_764();
}

void func_764()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1944989 = { Var0 };
}

int func_765(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 31);
	}
	return 0;
}

bool func_766(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_332.f_1, 0);
}

bool func_767(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 5);
	}
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_332.f_1, 19);
}

var func_768(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

void func_769(int iParam0)
{
	unk_0x394A4AC6FA3905C0(&Global_1944853);
	func_770();
}

void func_770()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1944853 = { Var0 };
	Global_1944853.f_16 = 0;
}

bool func_771()
{
	return func_479(6158, -1, 0) != 0;
}

int func_772(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_281 != 0;
	}
	return 0;
}

bool func_773()
{
	return func_479(6166, -1, 0) == 3;
}

bool func_774()
{
	return func_479(6166, -1, 0) == 2;
}

bool func_775()
{
	return func_479(6166, -1, 0) == 1;
}

void func_776(int iParam0)
{
	unk_0xE054822C491E697A(&Global_1944799);
	func_777();
}

void func_777()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1944799 = { Var0 };
	Global_1944799.f_23 = 0;
	Global_1944799.f_24 = 0;
	Global_1944799.f_16 = 0;
}

void func_778()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_789(12));
		func_788(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1585844[iVar1 /*142*/].f_66 != 0 && func_780(Global_1585844[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2810287.f_958 != iVar1)
				{
					if (func_779(Global_1585844[iVar1 /*142*/].f_66))
					{
						if (Global_1585844[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1585844[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1944799.f_38 = iVar3;
								break;
							
							case 1:
								Global_1944799.f_39 = iVar3;
								break;
							
							case 2:
								Global_1944799.f_40 = iVar3;
								break;
							
							case 3:
								Global_1944799.f_41 = iVar3;
								break;
							
							case 4:
								Global_1944799.f_42 = iVar3;
								break;
							
							case 5:
								Global_1944799.f_43 = iVar3;
								break;
							
							case 6:
								Global_1944799.f_44 = iVar3;
								break;
							
							case 7:
								Global_1944799.f_45 = iVar3;
								break;
							
							case 8:
								Global_1944799.f_46 = iVar3;
								break;
							
							case 9:
								Global_1944799.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_780(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x9315DBF7D972F07A()) || (iParam0 == joaat("buffalo3") && !unk_0x9315DBF7D972F07A())) || (iParam0 == joaat("gauntlet2") && !unk_0x9315DBF7D972F07A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x9315DBF7D972F07A()))
	{
		if (!func_787())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x63913871ECC3707E())
		{
			if (unk_0xCD58DE0B13D04118(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x1B5C8EE302FC0D1E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_786() && !func_785()) && !func_784()) && !func_783()) && !func_787())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3EBD3AF4E5D7A08C() || unk_0x8FE9914D4872D601()) || unk_0xA7384DAD7CF469DA())
		{
		}
		else if (!func_784())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_782(iParam0))
		{
			return 0;
		}
	}
	if (!func_781(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_781(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_573())
	{
		return 1;
	}
	unk_0x5D66DA471CACD32B(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x5B1B2A8FE51FDB2D(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2783340)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x48352343BC5A41AE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6856 && !Global_262145.f_13186) && iVar1 < Global_262145.f_13187)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14486 && iVar1 < Global_262145.f_14498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14482 && iVar1 < Global_262145.f_14494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14483 && iVar1 < Global_262145.f_14495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14484 && iVar1 < Global_262145.f_14496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14485 && iVar1 < Global_262145.f_14497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14487 && iVar1 < Global_262145.f_14499)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14488 && iVar1 < Global_262145.f_14491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14489 && iVar1 < Global_262145.f_14492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14490 && iVar1 < Global_262145.f_14493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17119 && iVar1 < Global_262145.f_17084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17114 && iVar1 < Global_262145.f_17079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17118 && iVar1 < Global_262145.f_17083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17117 && iVar1 < Global_262145.f_17082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17111 && iVar1 < Global_262145.f_17076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17112 && iVar1 < Global_262145.f_17077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17115 && iVar1 < Global_262145.f_17080)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17116 && iVar1 < Global_262145.f_17081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17113 && iVar1 < Global_262145.f_17078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17121 && iVar1 < Global_262145.f_17086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17122 && iVar1 < Global_262145.f_17087)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17110 && iVar1 < Global_262145.f_17075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17109 && iVar1 < Global_262145.f_17074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17108 && iVar1 < Global_262145.f_17073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17120 && iVar1 < Global_262145.f_17085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17123 && iVar1 < Global_262145.f_17088)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17124 && iVar1 < Global_262145.f_17089)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17125 && iVar1 < Global_262145.f_17090)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17126 && iVar1 < Global_262145.f_17091)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17273 && iVar1 < Global_262145.f_17295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17274 && iVar1 < Global_262145.f_17296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17275 && iVar1 < Global_262145.f_17297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17276 && iVar1 < Global_262145.f_17298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17277 && iVar1 < Global_262145.f_17299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17278 && iVar1 < Global_262145.f_17300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17280 && iVar1 < Global_262145.f_17301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17281 && iVar1 < Global_262145.f_17302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17282 && iVar1 < Global_262145.f_17303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17283 && iVar1 < Global_262145.f_17304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17284 && iVar1 < Global_262145.f_17305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17285 && iVar1 < Global_262145.f_17306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17286 && iVar1 < Global_262145.f_17307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17292 && iVar1 < Global_262145.f_17314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17289 && iVar1 < Global_262145.f_17310)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17290 && iVar1 < Global_262145.f_17311)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17291 && iVar1 < Global_262145.f_17312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17279 && iVar1 < Global_262145.f_17313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17293 && iVar1 < Global_262145.f_17315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17287 && iVar1 < Global_262145.f_17308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17288 && iVar1 < Global_262145.f_17309)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17294 && iVar1 < Global_262145.f_17316)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18925 && iVar1 < Global_262145.f_19022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18926 && iVar1 < Global_262145.f_19023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18927 && iVar1 < Global_262145.f_19024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18928 && iVar1 < Global_262145.f_19025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18929 && iVar1 < Global_262145.f_19026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18930 && iVar1 < Global_262145.f_19027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18931 && iVar1 < Global_262145.f_19028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18932 && iVar1 < Global_262145.f_19029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18933 && iVar1 < Global_262145.f_19030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18934 && iVar1 < Global_262145.f_19031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18935 && iVar1 < Global_262145.f_19032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18936 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18937 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18938 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18939 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18940 && iVar1 < Global_262145.f_19037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18941 && iVar1 < Global_262145.f_19038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18942 && iVar1 < Global_262145.f_19039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18943 && iVar1 < Global_262145.f_19040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18944 && iVar1 < Global_262145.f_19041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18945 && iVar1 < Global_262145.f_19042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18946 && iVar1 < Global_262145.f_19043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18947 && iVar1 < Global_262145.f_19044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18948 && iVar1 < Global_262145.f_19045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18949 && iVar1 < Global_262145.f_19046)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20006 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20007 && iVar1 < Global_262145.f_20003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20008 && iVar1 < Global_262145.f_20004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20009 && iVar1 < Global_262145.f_20005)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20887 && iVar1 < Global_262145.f_20895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20888 && iVar1 < Global_262145.f_20896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20889 && iVar1 < Global_262145.f_20897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20890 && iVar1 < Global_262145.f_20898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20891 && iVar1 < Global_262145.f_20899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20892 && iVar1 < Global_262145.f_20900)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21681 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21685 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21683 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21684 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21686 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21682 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22629 && iVar1 < Global_262145.f_22657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22630 && iVar1 < Global_262145.f_22658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22631 && iVar1 < Global_262145.f_22659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22632 && iVar1 < Global_262145.f_22660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22633 && iVar1 < Global_262145.f_22661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22634 && iVar1 < Global_262145.f_22662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22635 && iVar1 < Global_262145.f_22663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22636 && iVar1 < Global_262145.f_22664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22637 && iVar1 < Global_262145.f_22665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22638 && iVar1 < Global_262145.f_22666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22639 && iVar1 < Global_262145.f_22667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22640 && iVar1 < Global_262145.f_22668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22641 && iVar1 < Global_262145.f_22669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22642 && iVar1 < Global_262145.f_22670)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22643 && iVar1 < Global_262145.f_22671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22644 && iVar1 < Global_262145.f_22672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22645 && iVar1 < Global_262145.f_22673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22646 && iVar1 < Global_262145.f_22674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22647 && iVar1 < Global_262145.f_22675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22648 && iVar1 < Global_262145.f_22676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22649 && iVar1 < Global_262145.f_22677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22650 && iVar1 < Global_262145.f_22678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22651 && iVar1 < Global_262145.f_22679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22652 && iVar1 < Global_262145.f_22680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22653 && iVar1 < Global_262145.f_22681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22654 && iVar1 < Global_262145.f_22682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22655 && iVar1 < Global_262145.f_22683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22656 && iVar1 < Global_262145.f_22684)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23849 && iVar1 < Global_262145.f_23865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23850 && iVar1 < Global_262145.f_23866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23848 && iVar1 < Global_262145.f_23864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23874)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23939 && iVar1 < Global_262145.f_23926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23940 && iVar1 < Global_262145.f_23927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23945 && iVar1 < Global_262145.f_23932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23944 && iVar1 < Global_262145.f_23931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23942 && iVar1 < Global_262145.f_23929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23948 && iVar1 < Global_262145.f_23935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23950 && iVar1 < Global_262145.f_23937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23951 && iVar1 < Global_262145.f_23938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23949 && iVar1 < Global_262145.f_23936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23941 && iVar1 < Global_262145.f_23928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23943 && iVar1 < Global_262145.f_23930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23947 && iVar1 < Global_262145.f_23934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23946 && iVar1 < Global_262145.f_23933)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26416 && iVar1 < Global_262145.f_26418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25429 && iVar1 < Global_262145.f_25422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25430 && iVar1 < Global_262145.f_25423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25431 && iVar1 < Global_262145.f_25424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25432 && iVar1 < Global_262145.f_25425)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26417 && iVar1 < Global_262145.f_26419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25433 && iVar1 < Global_262145.f_25426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25434 && iVar1 < Global_262145.f_25427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25435 && iVar1 < Global_262145.f_25428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25440 && iVar1 < Global_262145.f_25461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25441 && iVar1 < Global_262145.f_25462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25442 && iVar1 < Global_262145.f_25463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25443 && iVar1 < Global_262145.f_25464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25444 && iVar1 < Global_262145.f_25465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25445 && iVar1 < Global_262145.f_25466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25446 && iVar1 < Global_262145.f_25467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25447 && iVar1 < Global_262145.f_25468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25448 && iVar1 < Global_262145.f_25469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25449 && iVar1 < Global_262145.f_25470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25450 && iVar1 < Global_262145.f_25471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25451 && iVar1 < Global_262145.f_25472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25452 && iVar1 < Global_262145.f_25473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25453 && iVar1 < Global_262145.f_25474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25454 && iVar1 < Global_262145.f_25475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25455 && iVar1 < Global_262145.f_25476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25456 && iVar1 < Global_262145.f_25477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25457 && iVar1 < Global_262145.f_25478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25458 && iVar1 < Global_262145.f_25479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25459 && iVar1 < Global_262145.f_25480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25460 && iVar1 < Global_262145.f_25481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28261 && iVar1 < Global_262145.f_28282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28262 && iVar1 < Global_262145.f_28283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28263 && iVar1 < Global_262145.f_28284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28264 && iVar1 < Global_262145.f_28285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28265 && iVar1 < Global_262145.f_28286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28266 && iVar1 < Global_262145.f_28287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28267 && iVar1 < Global_262145.f_28288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28268 && iVar1 < Global_262145.f_28289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28269 && iVar1 < Global_262145.f_28290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28270 && iVar1 < Global_262145.f_28291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28271 && iVar1 < Global_262145.f_28292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28272 && iVar1 < Global_262145.f_28293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28273 && iVar1 < Global_262145.f_28294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28274 && iVar1 < Global_262145.f_28295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28275 && iVar1 < Global_262145.f_28296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28276 && iVar1 < Global_262145.f_28297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28277 && iVar1 < Global_262145.f_28298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28278 && iVar1 < Global_262145.f_28299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28279 && iVar1 < Global_262145.f_28300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28280 && iVar1 < Global_262145.f_28301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28281 && iVar1 < Global_262145.f_28302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28304 && iVar1 < Global_262145.f_28305) && !Global_262145.f_28259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28307 && iVar1 < Global_262145.f_28308) && !Global_262145.f_28260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28312 && iVar1 < Global_262145.f_28315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28313 && iVar1 < Global_262145.f_28316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28314 && iVar1 < Global_262145.f_28317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_28995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28981 && iVar1 < Global_262145.f_29002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28982 && iVar1 < Global_262145.f_28988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_28996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_28997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28975 && iVar1 < Global_262145.f_28994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28976 && iVar1 < Global_262145.f_29003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28977 && iVar1 < Global_262145.f_28993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28978 && iVar1 < Global_262145.f_28991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29324 && iVar1 < Global_262145.f_28998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29325 && iVar1 < Global_262145.f_28999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29326 && iVar1 < Global_262145.f_29000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28979 && iVar1 < Global_262145.f_28990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28980 && iVar1 < Global_262145.f_28992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29775 && iVar1 < Global_262145.f_29758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29776 && iVar1 < Global_262145.f_29759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29777 && iVar1 < Global_262145.f_29760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29778 && iVar1 < Global_262145.f_29761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29779 && iVar1 < Global_262145.f_29762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29780 && iVar1 < Global_262145.f_29763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29781 && iVar1 < Global_262145.f_29764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29782 && iVar1 < Global_262145.f_29765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29783 && iVar1 < Global_262145.f_29766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29792)
		{
		}
		else if (!Global_262145.f_29784 && iVar1 < Global_262145.f_29767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29785 && iVar1 < Global_262145.f_29768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29786 && iVar1 < Global_262145.f_29769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29787 && iVar1 < Global_262145.f_29770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29788 && iVar1 < Global_262145.f_29771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29793)
		{
		}
		else if (!Global_262145.f_29789 && iVar1 < Global_262145.f_29772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29790 && iVar1 < Global_262145.f_29773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29791 && iVar1 < Global_262145.f_29774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30643 && iVar1 < Global_262145.f_30626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30644 && iVar1 < Global_262145.f_30627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30645 && iVar1 < Global_262145.f_30628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30646 && iVar1 < Global_262145.f_30629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30647 && iVar1 < Global_262145.f_30630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30648 && iVar1 < Global_262145.f_30631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30649 && iVar1 < Global_262145.f_30632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30650 && iVar1 < Global_262145.f_30633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30651 && iVar1 < Global_262145.f_30634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30652 && iVar1 < Global_262145.f_30635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30653 && iVar1 < Global_262145.f_30636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30654 && iVar1 < Global_262145.f_30637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30655 && iVar1 < Global_262145.f_30638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30656 && iVar1 < Global_262145.f_30639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30657 && iVar1 < Global_262145.f_30640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30658 && iVar1 < Global_262145.f_30641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30659 && iVar1 < Global_262145.f_30642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915234475)
	{
		if (!Global_262145.f_31467 && iVar1 < Global_262145.f_31452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -619930876)
	{
		if (!Global_262145.f_31468 && iVar1 < Global_262145.f_31453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1532171089)
	{
		if (!Global_262145.f_31469 && iVar1 < Global_262145.f_31454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 461465043)
	{
		if (!Global_262145.f_31470 && iVar1 < Global_262145.f_31455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1444114309)
	{
		if (!Global_262145.f_31471 && iVar1 < Global_262145.f_31456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1527436269)
	{
		if (!Global_262145.f_31472 && iVar1 < Global_262145.f_31457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 629969764)
	{
		if (!Global_262145.f_31473 && iVar1 < Global_262145.f_31458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1141395928)
	{
		if (!Global_262145.f_31474 && iVar1 < Global_262145.f_31459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 655665811)
	{
		if (!Global_262145.f_31475 && iVar1 < Global_262145.f_31460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1993851908)
	{
		if (!Global_262145.f_31476 && iVar1 < Global_262145.f_31461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 662793086)
	{
		if (!Global_262145.f_31477 && iVar1 < Global_262145.f_31462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -261346873)
	{
		if (!Global_262145.f_31478 && iVar1 < Global_262145.f_31463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -670086588)
	{
		if (!Global_262145.f_31479 && iVar1 < Global_262145.f_31464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1353120668)
	{
		if (!Global_262145.f_31480 && iVar1 < Global_262145.f_31465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 359875117)
	{
		if (Global_262145.f_31545)
		{
		}
		else if (!Global_262145.f_31481 && iVar1 < Global_262145.f_31466)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_783()
{
	return 0;
}

int func_784()
{
	return 1;
}

int func_785()
{
	return 1;
}

int func_786()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_787()
{
	var uVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (unk_0xE2D0C323A1AE5D85(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_788(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10421)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1941386[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x8142A6539DDC180F() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_789(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_732(iParam0);
		return func_791(iVar0);
	}
	return (func_790(iParam0, -1, 1) * iParam0);
}

int func_790(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_438(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_444(iParam1))
			{
				return 0;
			}
			else if (func_436(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			{
				return 10;
			}
			{
			}
			{