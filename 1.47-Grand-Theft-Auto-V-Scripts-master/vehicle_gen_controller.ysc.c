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
	char* sLocal_20 = NULL;
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
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
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
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
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
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	unk_0x9980AE643A60F372(0);
	Local_56.f_5 = -1;
	Local_56 = -1;
	Local_56.f_1 = 99999.99f;
	func_479(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_91091[iVar0 /*3*/][0] = -1;
		Global_91091[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_106565.f_32743.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_106565.f_32743.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_106565.f_32743.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_106565.f_32743.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_106565.f_32743.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_106565.f_32743.f_4801 = -15;
		Global_106565.f_32743.f_4802 = 1;
	}
	if (((!func_478() && !func_477()) && !func_476()) && !func_475())
	{
		func_474(60, 0);
		func_474(61, 0);
	}
	func_473();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_472(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (unk_0x9EC5BDC006623C42(98))
			{
				if (unk_0xFC234596ED1AED40() == 64)
				{
					if (!Global_71398)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_471();
						func_470();
					}
					Global_71398 = 0;
				}
				else
				{
					func_471();
					func_470();
				}
			}
		}
		wait(0);
		if (unk_0xCDEC8161BE712395() != 5)
		{
			iLocal_129 = func_468();
			func_432();
			func_430();
			func_398(&iLocal_58);
			func_369();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0x0E4018692D92041D(Global_106565.f_10010.f_25, 7))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0x0E4018692D92041D(*iParam0, 6) && unk_0x0E4018692D92041D(*iParam0, 12))
			{
				fVar1 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(2000, 4000)));
						}
						if (!unk_0x0E4018692D92041D(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!unk_0x0E4018692D92041D(*iParam0, 30))
						{
							if (unk_0x3C05A6D663EA1B6A(&(iParam0->f_9), false, -1))
							{
								if (unk_0xE3903F59E2F22150() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										unk_0x8950ED5730F62EE8(iParam0, 30);
									}
								}
							}
						}
						else if (unk_0x66DE54BD13B1BD88(iParam0->f_1))
						{
							unk_0xCE689A8E8C42ED78(iParam0, 30);
							unk_0x44D426446FAF55FB(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0x0E4018692D92041D(*iParam0, 23))
				{
					func_2(iParam0);
				}
				unk_0xCE689A8E8C42ED78(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int iParam0)
{
	unk_0xC16C998D785ABF3A();
	unk_0xCE689A8E8C42ED78(iParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 22);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_10010.f_25), 22);
	}
}

void func_4(int iParam0, vector3 vParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = unk_0x8CCC0A0504C52531();
	unk_0xEC95D37A139F1D5C(iParam0->f_1, &Var0, vParam1, &Var1, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		vVar2 = { func_7(iParam0->f_6 - vVar1) * Vector(52.5f, 52.5f, 52.5f) };
		vVar0 = { vVar1 + vVar2 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)
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

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x5EBE50D55314CEAD(0, 36))
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 22);
	}
	bVar0 = unk_0x0E4018692D92041D(Global_106565.f_10010.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_10010.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_106565.f_10010.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return shift_right((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)
{
	unk_0x3C05A6D663EA1B6A(sParam1, false, -1);
	unk_0x8950ED5730F62EE8(iParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;
	
	bVar0 = unk_0x0E4018692D92041D(Global_106565.f_10010.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1323096.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1323096.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1323096[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1323096[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xB8B82117DF4CF099(iVar0);
			if (Global_1323096[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1323096[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x5A719ACF626B92C0(iVar0);
			}
			else
			{
				fVar2 = unk_0x27ECFF7BAF3864B5(iVar0);
			}
			if (Global_1323096[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1323096[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x7880662A729659DE(iVar0);
			if (Global_1323096[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1323096[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return unk_0xD36E854645FF8736(iParam0);
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
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
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE38E3CF1625A4145(Global_70409.f_583))
	{
		bVar0 = false;
		if (iLocal_129 != Global_70409.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_70409.f_590)
		{
			if (!func_26(Global_70409.f_584, unk_0x7BC3899BF7085A7D(Global_70409.f_583), 1056964608, 0) || func_22(Global_70409.f_582, func_23(Global_70409.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_70409.f_591)
		{
			if (!func_26(Global_70409.f_587, unk_0x7BC3899BF7085A7D(Global_70409.f_583), 1056964608, 0) || func_22(Global_70409.f_582, func_23(Global_70409.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x765F6FEEFF39224F(Global_70409.f_581) || !unk_0x91D5C8283D19AF49(Global_70409.f_581, 0)) || (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_581, 0)))
		{
			if (unk_0x765F6FEEFF39224F(Global_70409.f_581) && !unk_0x91D5C8283D19AF49(Global_70409.f_581, 0))
			{
				Global_70409.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x765F6FEEFF39224F(Global_70409.f_581))
		{
			if (unk_0x91D5C8283D19AF49(Global_70409.f_581, 0))
			{
				Global_70409.f_587 = { unk_0xFBB1F99A825CAB09(Global_70409.f_581, true) };
			}
			else
			{
				Global_70409.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x1ABDB383C83A336A(&(Global_70409.f_583));
			Global_70409.f_590 = 0;
			Global_70409.f_591 = 0;
			Global_70409.f_581 = 0;
		}
	}
	else
	{
		Global_70409.f_590 = 0;
		Global_70409.f_591 = 0;
		Global_70409.f_581 = 0;
	}
	if ((((((!unk_0xE38E3CF1625A4145(Global_70409.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_91053[iVar2] != 145 && Global_91063[iVar2] != 0) && unk_0x765F6FEEFF39224F(Global_91043[iVar2])) && unk_0x91D5C8283D19AF49(Global_91043[iVar2], 0)) && !unk_0xE38E3CF1625A4145(unk_0x0525753DC633D9F8(Global_91043[iVar2]))) && Global_91053[iVar2] == iLocal_129) && unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(Global_91043[iVar2])))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_91043[iVar2], 0))
				{
					Global_70409.f_581 = Global_91043[iVar2];
					Global_70409.f_582 = iLocal_129;
					Global_70409.f_590 = 0;
					Global_70409.f_583 = unk_0x8848A15CBDADDC60(Global_70409.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xE38E3CF1625A4145(Global_70409.f_583) && !func_21(Global_70409.f_584, 0f, 0f, 0f, 0))
			{
				Global_70409.f_581 = 0;
				Global_70409.f_582 = iLocal_129;
				Global_70409.f_590 = 1;
				Global_70409.f_583 = unk_0x2C0ED4741A007C6A(Global_70409.f_584);
			}
			if (!unk_0xE38E3CF1625A4145(Global_70409.f_583) && !func_21(Global_70409.f_587, 0f, 0f, 0f, 0))
			{
				Global_70409.f_581 = 0;
				Global_70409.f_582 = iLocal_129;
				Global_70409.f_591 = 1;
				Global_70409.f_583 = unk_0x2C0ED4741A007C6A(Global_70409.f_587);
			}
		}
		else
		{
			Global_70409.f_590 = 0;
			Global_70409.f_591 = 0;
		}
		if (unk_0xE38E3CF1625A4145(Global_70409.f_583))
		{
			unk_0xA20C1DE21F2F071C(Global_70409.f_583, 225);
			unk_0x1C95CD840303FC37(Global_70409.f_583, "PVEHICLE");
			unk_0xD99530E6E53B24BF(Global_70409.f_583, false);
			unk_0xC51C58C963968740(Global_70409.f_583, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			unk_0xB9E84A421C105943(Global_70409.f_583, iVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar1]) && unk_0x91D5C8283D19AF49(Global_91043[iVar1], 0))
		{
			if (Global_91053[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x541D5C57194E73C4(Global_91043[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
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
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x7EECA16E87982278((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_28()
{
	func_310();
	func_226();
	func_68();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (((((Local_56.f_29.f_80 && !Local_56.f_29.f_69) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && unk_0x1BCDA92AD0A7835B(joaat("michael1")) == 0)
		{
			if (!unk_0x765F6FEEFF39224F(Local_56.f_113))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0))
					{
						iVar1 = unk_0x541D5C57194E73C4(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x91D5C8283D19AF49(Local_56.f_113, 0) && func_64(unk_0x541D5C57194E73C4(Local_56.f_113)))
			{
				if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_56.f_113, 0))
				{
					if (unk_0xD4B4F68F3449CBEC(Local_56.f_113, Local_56.f_29.f_48, Local_56.f_29.f_51, Local_56.f_29.f_54, 0, true, 0))
					{
						if ((!func_63(Local_56.f_113) && !func_62(Local_56.f_113)) && Local_56.f_113 != Global_70409.f_484[Local_56])
						{
							func_30(Local_56, Local_56.f_113, 1);
						}
						Local_56.f_113 = 0;
					}
				}
			}
			else
			{
				Local_56.f_113 = 0;
			}
		}
		else
		{
			Local_56.f_113 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_61(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 12) && !unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70409.f_555[0 /*21*/].f_4 != unk_0x541D5C57194E73C4(iParam1))
		{
			return;
		}
	}
	if (Global_71316 != -1 && Global_71316 != iParam0)
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		if (unk_0x91D5C8283D19AF49(iParam1, 0))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iParam1))
			{
				unk_0x0D21E1FDE062ED99(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106565.f_32743.f_4801 = func_50();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
		if (!unk_0x765F6FEEFF39224F(iVar0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, -1);
		}
		if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xBC2FC12AD0FBF72E(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_32(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_66 = unk_0x541D5C57194E73C4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x00D614EBCFFD919D(iParam0), 16);
		*uParam1 = unk_0x4FD199DD0B583F5C(iParam0);
		unk_0x344F2893FA037279(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xEB9780F1DB69CCB5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xBA1F4FDFE2E12FFE(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x362EE6C496FA3D80(iParam0);
		uParam1->f_67 = unk_0xE84981C3FDDC67C7(iParam0);
		uParam1->f_69 = unk_0x6598BA4640D7E61A(iParam0);
		uParam1->f_70 = unk_0xAF60E30B2CC603B2(iParam0);
		unk_0x7BC172C1973D1722(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x425E187882F60326(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA8DC0D4489FEC63C(iParam0, 2))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 28);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 3))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 29);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 30);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 1))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x8D9FD90A001D447C(iParam0, 0))
		{
			uParam1->f_68 = unk_0xDFEA91A83C472035(iParam0);
		}
		if (unk_0x57D74362A8BD1490(uParam1->f_66))
		{
			if (unk_0x411E3F93EC413BF3(iParam0))
			{
				switch (unk_0x6379DAF3AD61121F(iParam0))
				{
					case 3:
					case 0:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xEEBF939BC404D2BE(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 9);
		}
		if (unk_0xFB89D9B67066DB2C(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 10);
		}
		if (unk_0x17097E17C445781F(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 13);
			unk_0xB6BB43D4EAC89240(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xDBEA4F184CA4EA54(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7E0C34F3D4B48A15(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 11);
		}
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "IgnoredByQuickSave") && unk_0x821D9C8EA372B2F8(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCD2E94F6C3101AFC(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				switch (unk_0x57BBAEE53EDFE2D0(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xEECA910C75BFF02B(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_37(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x444D956C7F94526E(iParam0) || unk_0x57D74362A8BD1490(iParam0)) || unk_0x097E7778E3E162E8(iParam0)) || unk_0xFFB467183FEE27C4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
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
		case 1938952078:
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
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xBB8F0B8D18FF4982(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0xB331FCEB94EB05C8()) || (iParam0 == joaat("buffalo3") && !unk_0xB331FCEB94EB05C8())) || (iParam0 == joaat("gauntlet2") && !unk_0xB331FCEB94EB05C8())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0xB331FCEB94EB05C8()))
	{
		if (!func_43())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x3039527F47B67213())
		{
			if (unk_0xD78C9FF329D2C218(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC4ED190294E9E658(Var1))
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
		if ((((!func_478() && !func_477()) && !func_476()) && !func_475()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_476())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0x84EDD6303549E375(&iVar0, &uVar1);
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
	if (!unk_0x97E4D6970CDE676B(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xEF4753434B24594D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		if (unk_0xDBB8379205DEBBFE())
		{
			if (unk_0x0E7784F64A622FCE())
			{
				unk_0x75D54ED6C1AD1642(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x8950ED5730F62EE8(&iVar0, 2);
				unk_0x8950ED5730F62EE8(&iVar0, 4);
				unk_0x8950ED5730F62EE8(&iVar0, 6);
				unk_0x8950ED5730F62EE8(&Global_25, 2);
				unk_0x8950ED5730F62EE8(&Global_25, 4);
				unk_0x8950ED5730F62EE8(&Global_25, 6);
				unk_0x12B6E23F244DDB0F(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x3CEDCF35B2FFE080())
				{
					iVar0 = unk_0x37FBC14B2F5D54DB(866);
					unk_0x8950ED5730F62EE8(&iVar0, 0);
					unk_0x59DD23556BF7C12E(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (unk_0x3CEDCF35B2FFE080())
	{
		if (unk_0x0E4018692D92041D(unk_0x37FBC14B2F5D54DB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 145;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x0E4018692D92041D(Global_106565.f_7223[iVar2], 0))
		{
			if (unk_0xE9B30318257F029D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

int func_50()
{
	var uVar0;
	
	func_60(&uVar0, unk_0xE6A7CE90720B9037());
	func_59(&uVar0, unk_0x7EA67BD818402745());
	func_58(&uVar0, unk_0x13348E86D5B8A052());
	func_53(&uVar0, unk_0x020A28FAE1C09250());
	func_52(&uVar0, unk_0x2C02CAA9C4127339());
	func_51(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_54(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_55(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_56(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
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
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 11);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 11);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 9);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 9);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x0E4018692D92041D(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106565.f_32743.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106565.f_32743.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106565.f_32743.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x0E4018692D92041D(uParam0->f_9, 19))
	{
		if (!func_21(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x0E4018692D92041D(uParam0->f_9, 20))
	{
		if (!func_21(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]) && unk_0x91D5C8283D19AF49(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && unk_0x541D5C57194E73C4(Global_91043[iVar0]) == unk_0x541D5C57194E73C4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((unk_0x444D956C7F94526E(iParam0) || unk_0xC692A86D0A8FD54C(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (unk_0x097E7778E3E162E8(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x0C2E237744BA0026(iParam0) && !unk_0x9E374B5F44A76AE2(iParam0)) && !unk_0xC3622EC0E0215A79(iParam0)) && !unk_0x86A90EB179092418(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0x57D74362A8BD1490(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_32743[iParam0], iParam1);
}

void func_68()
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56 == -1 || unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0)) || ((unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]) && unk_0x91D5C8283D19AF49(Global_70409.f_484[Local_56], 0)) && (unk_0x7EABAA6F963BC011(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56]) || unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56], 1)))) || ((unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]) && unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E())) && ((unk_0x06EDAF915C19EB69(unk_0x33CD235DF1E6A94E()) - 1f) > 0.15f && unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56])))) || ((unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]) && unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E())) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56], 1))) || (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) && unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_225(0) != bLocal_161) || bLocal_142) || func_224(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && !Global_68807) && !bLocal_142) && !unk_0xBB5E373390A5F824())
			{
				if ((((((((((Local_56.f_29.f_80 && Local_56.f_2 == 0) && (Global_70409.f_592[0] != -1 || func_223() != 0)) && Local_56 != -1) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_224(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (func_67(Local_56, 0) && func_67(Local_56, 5))
					{
						if ((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0) && !unk_0x6C296F3A10E6939B(unk_0x33CD235DF1E6A94E())) && !unk_0x9F4718FD61B07058(unk_0x33CD235DF1E6A94E()))
						{
							if ((!unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]) || !unk_0x91D5C8283D19AF49(Global_70409.f_484[Local_56], 0)) || (!unk_0x7EABAA6F963BC011(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56]) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_484[Local_56], 1)))
							{
								iVar6 = func_223();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_64(func_219(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_70409.f_592)
								{
									if (Global_70409.f_592[iVar4] != -1)
									{
										if ((func_218(Global_70409.f_592[iVar4], iLocal_129) && Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[Global_70409.f_592[iVar4]] == -15) && (Global_70409.f_592[iVar4] != 200 || !Global_106565.f_25067.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!unk_0xFAC8F20FBC764F4D())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_217(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_217(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_225(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!unk_0xFAC8F20FBC764F4D() || func_216("HANGAR_NO"))
										{
											func_215("HANGAR_NO", -1);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!unk_0xFAC8F20FBC764F4D() || func_216("MARINA_NO"))
										{
											func_215("MARINA_NO", -1);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!unk_0xFAC8F20FBC764F4D() || func_216("HELIPAD_NO"))
										{
											func_215("HELIPAD_NO", -1);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!unk_0xFAC8F20FBC764F4D() || func_216(&Var8))
										{
											func_215(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && func_213(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_212(iLocal_114, 1))
				{
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					if (unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
					{
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
					}
					else
					{
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 256);
					}
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							unk_0xF28F45F667D62218(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), false);
						}
					}
					func_211();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 4, 0, 0, 0);
				func_208(1, 2, 1, 1, 1);
				func_207("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0;
				iVar14 = func_223();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_219(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_219(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_70409.f_592)
				{
					if (Global_70409.f_592[iVar12] != -1)
					{
						if ((func_218(Global_70409.f_592[iVar12], iLocal_129) && Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[Global_70409.f_592[iVar12]] == -15) && (Global_70409.f_592[iVar12] != 200 || !Global_106565.f_25067.f_7))
						{
							func_137(Global_70409.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_66)
							{
								iLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == -1)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_223();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_219(iVar12)))
					{
						unk_0x8950ED5730F62EE8(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_133(iVar13, unk_0x093916B4639501B8(func_219(iVar12)), 0, 1, 0, 0);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_132(iVar13, 4, 0);
						}
						else
						{
							func_132(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_70409.f_592)
				{
					if (Global_70409.f_592[iVar12] != -1)
					{
						if ((func_218(Global_70409.f_592[iVar12], iLocal_129) && Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[Global_70409.f_592[iVar12]] == -15) && (Global_70409.f_592[iVar12] != 200 || !Global_106565.f_25067.f_7))
						{
							unk_0x8950ED5730F62EE8(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_137(Global_70409.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (Global_70409.f_592[iVar12] != 164)
							{
								func_133(iVar13, func_130(Global_70409.f_592[iVar12]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_133(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_127(func_130(Global_70409.f_592[iVar12]), 0);
								func_127("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_133(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_127(func_130(Global_70409.f_592[iVar12]), 0);
								func_127("VNX_SWFTB", 0);
							}
							else
							{
								func_133(iVar13, func_130(Global_70409.f_592[iVar12]), 0, 1, 0, 0);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_132(iVar13, 4, 0);
							}
							else
							{
								func_132(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_126(iLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0x4CE1DD5CFC1F941E())
				{
					if (unk_0x33CAB544FAAE661D(2))
					{
						unk_0x3FD9339AA95E323F(0, 1, 1);
						unk_0x3FD9339AA95E323F(0, 2, 1);
						unk_0x3FD9339AA95E323F(2, 200, 1);
						unk_0xAE4810E427AD9203(0, 237, 1);
						unk_0xAE4810E427AD9203(0, 238, 1);
						unk_0xAE4810E427AD9203(0, 241, 1);
						unk_0xAE4810E427AD9203(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, -1, 1);
						if (func_121())
						{
							if (Global_4268040 != iLocal_109)
							{
								unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_109 = Global_4268040;
								func_126(iLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x833B1A3D9F713E03(2, 188) || unk_0x833B1A3D9F713E03(2, 241))
				{
					iLocal_119 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (iLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (unk_0x0E4018692D92041D(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							iLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (unk_0x0E4018692D92041D(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								iLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						func_126(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x833B1A3D9F713E03(2, 187) || unk_0x833B1A3D9F713E03(2, 242))
				{
					iLocal_119 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (unk_0x0E4018692D92041D(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							iLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (iLocal_109 - 1))
						{
							if (unk_0x0E4018692D92041D(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								iLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_126(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x1771F6BAF60B44FA(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_223();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_64(func_219(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_219(iVar20) || !unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56])) || !unk_0x91D5C8283D19AF49(Global_70409.f_484[Local_56], 0)) || Local_56 == 21) || Local_56 == 22) || Local_56 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_219(iVar20)) || (!iLocal_118 && Local_56 == 21)) || (!iLocal_118 && Local_56 == 22)) || (!iLocal_118 && Local_56 == 23))
								{
									func_120("VEH_SELECT_CNFA", 0, 0);
									func_119(-1);
									func_118(201, "ITEM_YES", -1);
									func_118(202, "ITEM_NO", -1);
									iLocal_118 = 1;
									iVar20 = func_223() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_117(func_219(iVar20)))
									{
										iLocal_160 = func_219(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										iLocal_111 = 0;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_219(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_117(func_219(iVar20)))
								{
									iLocal_160 = func_219(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									iLocal_111 = 0;
									iLocal_113++;
								}
								else
								{
									if (unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]))
									{
										unk_0x0D21E1FDE062ED99(Global_70409.f_484[Local_56], false, 1);
										unk_0x7AC8DF0B83EB4C6B(&(Global_70409.f_484[Local_56]));
									}
									Var1.f_66 = func_219(iVar20);
									unk_0x8950ED5730F62EE8(&(Var1.f_77), 14);
									func_114(Local_56, &Var1, 0f, 0f, 0f, -1f, 145);
									func_113(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_223() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_70409.f_592)
						{
							if (Global_70409.f_592[iVar20] != -1)
							{
								if ((func_218(Global_70409.f_592[iVar20], iLocal_129) && Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[Global_70409.f_592[iVar20]] == -15) && (Global_70409.f_592[iVar20] != 200 || !Global_106565.f_25067.f_7))
								{
									func_137(Global_70409.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_66 || !unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56])) || !unk_0x91D5C8283D19AF49(Global_70409.f_484[Local_56], 0)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_120("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_120("VEH_SELECT_CNFA", 0, 0);
											}
											func_119(-1);
											func_118(201, "ITEM_YES", -1);
											func_118(202, "ITEM_NO", -1);
											iLocal_118 = 1;
											iVar20 = Global_70409.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_70409.f_592 + 1;
										}
										else
										{
											if (unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]))
											{
												unk_0x0D21E1FDE062ED99(Global_70409.f_484[Local_56], false, 1);
												unk_0x7AC8DF0B83EB4C6B(&(Global_70409.f_484[Local_56]));
											}
											func_137(Global_70409.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
											unk_0x8950ED5730F62EE8(&(Var0.f_77), 14);
											if (unk_0x57D74362A8BD1490(Var0.f_66))
											{
												unk_0x8950ED5730F62EE8(&(Var0.f_77), 22);
											}
											func_114(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
											func_113(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_70409.f_592 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (unk_0x1771F6BAF60B44FA(2, 202) || unk_0x1771F6BAF60B44FA(2, 238))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			unk_0xF3F3DC87D7163212();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(-1);
				func_118(201, "ITEM_SELECT", -1);
				func_118(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 0, 0, 0, 0);
				func_208(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_207("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_133(iVar23, &Var24, 0, 1, 0, 0);
					unk_0x8950ED5730F62EE8(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_12 == 0)
				{
					iLocal_111 = Global_106565.f_25176.f_313[200];
				}
				else if (Local_131.f_12 == 1)
				{
					iLocal_111 = Global_106565.f_25176.f_626[200];
				}
				else
				{
					iLocal_111 = Global_106565.f_25176.f_939[200];
				}
				func_126(iLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0x4CE1DD5CFC1F941E())
				{
					if (unk_0x33CAB544FAAE661D(2))
					{
						unk_0x3FD9339AA95E323F(0, 1, 1);
						unk_0x3FD9339AA95E323F(0, 2, 1);
						unk_0xAE4810E427AD9203(0, 237, 1);
						unk_0xAE4810E427AD9203(0, 238, 1);
						unk_0xAE4810E427AD9203(0, 241, 1);
						unk_0xAE4810E427AD9203(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, -1, 1);
						if (func_121())
						{
							if (Global_4268040 != iLocal_111)
							{
								unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_111 = Global_4268040;
								func_126(iLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x833B1A3D9F713E03(2, 188) || unk_0x833B1A3D9F713E03(2, 241))
				{
					iLocal_119 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (iLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (unk_0x0E4018692D92041D(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							iLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (unk_0x0E4018692D92041D(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								iLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						func_126(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x833B1A3D9F713E03(2, 187) || unk_0x833B1A3D9F713E03(2, 242))
				{
					iLocal_119 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (unk_0x0E4018692D92041D(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							iLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (iLocal_111 - 1))
						{
							if (unk_0x0E4018692D92041D(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								iLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_126(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x1771F6BAF60B44FA(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (unk_0x765F6FEEFF39224F(Global_70409.f_484[Local_56]))
					{
						unk_0x0D21E1FDE062ED99(Global_70409.f_484[Local_56], false, 1);
						unk_0x7AC8DF0B83EB4C6B(&(Global_70409.f_484[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_106565.f_25176.f_313[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_106565.f_25176.f_626[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_106565.f_25176.f_939[200] = uVar29;
					}
					func_137(200, &Var0, 0, iLocal_129, -1, -1);
					unk_0x8950ED5730F62EE8(&(Var0.f_77), 14);
					if (unk_0x57D74362A8BD1490(Var0.f_66))
					{
						unk_0x8950ED5730F62EE8(&(Var0.f_77), 22);
					}
					func_114(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
					func_113(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (unk_0x1771F6BAF60B44FA(2, 202) || unk_0x1771F6BAF60B44FA(2, 238))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			unk_0xF3F3DC87D7163212();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(-1);
				func_118(201, "ITEM_SELECT", -1);
				func_118(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
				{
					if (!unk_0x334AC6FC831E4ABC())
					{
						unk_0xF28F45F667D62218(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), true);
					}
				}
			}
			func_71(1, -1);
			iLocal_113 = 0;
			func_69(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && unk_0xFAC8F20FBC764F4D())
	{
		if (!unk_0x786AF4A44E1B5B4B(&cLocal_162))
		{
			if ((((func_216("HANGAR_NO") || func_216("MARINA_NO")) || func_216("HELIPAD_NO")) || func_216("CAR_GAR_NO_1")) || func_216("CAR_GAR_NO_2"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_70(int iParam0)
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
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		unk_0x019859CB72B1DB4C(15);
		Global_17411.f_8353 = 0;
	}
	unk_0x5E1FA2076D53C3F5(0f);
	if (Global_17411.f_5628[iVar0])
	{
		unk_0xB073DB452891DC0B(9, false);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		unk_0x30F6F0B876E12AD8("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		unk_0x30F6F0B876E12AD8("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_72(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_72(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*iParam0))
		{
			unk_0x83A1D480DB0B52CC(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0xB331FCEB94EB05C8() && unk_0xE36862B47CD70685())
		{
			iParam2 = unk_0x3031F3812E92B62B();
		}
	}
	StringCopy(&cVar0, unk_0xD178EF744F20B712(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x36163153849DFDA1(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17411.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17411.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17411.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_110(0, bParam6))
	{
		return;
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_108(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17411 = 0;
		}
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
	{
		fVar57 = Global_17409;
	}
	else
	{
		fVar57 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17410;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x3A5E614EC752B188(&iVar58, &iVar59);
		fVar61 = unk_0x63151314B8B4D6EB(0);
		if (func_107())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_107())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x6521432F7BEAC16C(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_17411.f_5218 <= 1)
		{
			func_133(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_17411.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17411.f_5728)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
			{
				fVar49 = Global_17409;
			}
			else
			{
				if (Global_17411)
				{
					StringCopy(&cVar63, func_106(29), 64);
					StringCopy(&cVar64, func_103(29, 1), 64);
					if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
					{
						func_102(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17411.f_8323)
				{
					iVar1 = Global_17411.f_8319;
					iVar2 = Global_17411.f_8320;
					iVar3 = Global_17411.f_8321;
					iVar4 = Global_17411.f_8322;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_102(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) != 0)
				{
					func_101();
					unk_0xAA70163B3B48EEE4(&(Global_17411.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17411.f_68)
					{
						if (Global_17411.f_5[iVar14] == 2)
						{
							unk_0xE800DC85FDF60F85(Global_17411.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17411.f_5[iVar14] == 3)
						{
							unk_0x974BEF45D557B847(Global_17411.f_14[iVar16], Global_17411.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17411.f_5[iVar14] == 1)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 8)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 5)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 6)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 7)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 9)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCCA49CAF391D1A15((Global_17408 + 0.00390625f), ((Global_17409 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17411.f_5735)
				{
					func_101();
					func_99((((Global_17408 + fParam5) - 0.00390625f) - func_100("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_101();
						func_99((((Global_17408 + fParam5) - 0.00390625f) - func_100("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
					}
				}
			}
			iVar6 = Global_17411.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_17411.f_8333)
			{
				iVar1 = Global_17411.f_8329;
				iVar2 = Global_17411.f_8330;
				iVar3 = Global_17411.f_8331;
				iVar4 = Global_17411.f_8332;
			}
			else
			{
				unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17411.f_5225 && iVar6 <= Global_17411.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_17411.f_5485[iVar6])
					{
						if (Global_17411.f_5356[iVar6] && iVar6 != Global_17411.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_17411.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_17411.f_5731 > Global_17411.f_5225)
			{
				if (Global_17411.f_8338)
				{
					iVar1 = Global_17411.f_8334;
					iVar2 = Global_17411.f_8335;
					iVar3 = Global_17411.f_8336;
					iVar4 = Global_17411.f_8337;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_102(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x5B78EE936879124F("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_17411.f_8351)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x1256E5EA03020804(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "shop_arrows_upANDdown", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x36163153849DFDA1(&(Global_17411.f_4690)) != 0 && Global_17411.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_17411.f_4768 != 0)
				{
					func_108(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_98(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_102(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_98(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17411.f_4768 != 0)
				{
					func_108(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_97(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4768), func_103(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17411.f_4766 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_17411.f_4767) > Global_17411.f_4766)
					{
						StringCopy(&(Global_17411.f_4690), "", 24);
						Global_17411.f_4766 = -1;
					}
				}
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_21)) != 0 && Global_4267964.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_4267964.f_67 != 0)
				{
					func_108(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_98(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_102(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_98(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4267964.f_67 != 0)
				{
					func_108(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_97(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_106(Global_4267964.f_67), func_103(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4267964.f_65 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_4267964.f_66) > Global_4267964.f_65)
					{
						StringCopy(&(Global_4267964.f_21), "", 16);
						Global_4267964.f_65 = -1;
					}
				}
			}
			func_89(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x1382AC429D0EA2BB(76, 84);
			unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17411.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_17411.f_5218;
			if (Global_17411.f_5729)
			{
				iVar66 = (Global_17411.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_17411.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_17411.f_5745[iVar6];
				}
				if (Global_17411.f_5729)
				{
					iVar6 = Global_17411.f_7974[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17411.f_5738 && iVar9 < Global_17411.f_5225)
				{
					bVar33 = true;
					if (Global_17411.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_17411.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17411.f_5879[iVar6] = fVar35;
				fVar34 = (Global_17408 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17411.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17411.f_8345)
					{
						unk_0x1256E5EA03020804(Global_17411.f_8344, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x1256E5EA03020804(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Nav", (Global_17408 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17411.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_17411.f_5226)
				{
					if (unk_0x0E4018692D92041D(Global_17411.f_5089[iVar6], iVar8) || Global_17411.f_5056[iVar8] == 5)
					{
						if (Global_17411.f_5729)
						{
							iVar19 = Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar20 = Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar21 = Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar22 = Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar23 = Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)];
						}
						else
						{
							Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar19;
							Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar20;
							Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar21;
							Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar22;
							Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_17411.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_17411.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_17411.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_17408 + 0.0046875f) + Global_17411.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_17411.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_17411.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_17411.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_17408 + Global_17410) - 0.0046875f) - fVar34);
						}
						if ((Global_17411.f_5075[iVar8] && Global_17411.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_17411.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x201339347519B9A8(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_108(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_17411.f_4433[(iVar22 + iVar14)] == 2 || Global_17411.f_4433[(iVar22 + iVar14)] == 50) || Global_17411.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
										Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_17411.f_5083[iVar69] == 2)
												{
													Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] = (Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] - Global_17411.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_86(bVar32);
										}
										unk_0xAA70163B3B48EEE4(&(Global_17411.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar28)] == 2 || Global_17411.f_4433[(iVar22 + iVar28)] == 50) || Global_17411.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_108(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_108(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_97(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[(iVar22 + iVar28)]), func_103(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[(iVar22 + iVar28)]), func_103(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_17411.f_5083[iVar8] == 2)
										{
											unk_0xCCA49CAF391D1A15(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCCA49CAF391D1A15((fVar34 + fVar40), fVar35, 0);
											if (func_85() && unk_0x1BCDA92AD0A7835B(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_87(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xC56FB1634FB1F447(0f, (0.35f * 0.7f));
													unk_0x762F7A52B1325903(255, 255, 255, 150);
													unk_0x5263FF82360FF7E2((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xAA70163B3B48EEE4(&cVar75);
													unk_0xE800DC85FDF60F85((Global_17411.f_5738 + iVar30));
													unk_0xCCA49CAF391D1A15((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar14)] != 2 && Global_17411.f_4433[(iVar22 + iVar14)] != 50) && Global_17411.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_108(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_108(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_97(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[(iVar22 + iVar14)]), func_103(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[(iVar22 + iVar14)]), func_103(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[(iVar22 + iVar14)]), func_103(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_86(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0xE800DC85FDF60F85(Global_17411.f_3918[iVar20]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_84((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_86(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0x974BEF45D557B847(Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_108(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_87(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_108(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_17411.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17411.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
											Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
											fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_108(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x281206A3ED9B7B48(func_106(Global_17411.f_4433[iVar22]), func_103(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_82(Global_17411.f_4433[iVar22])), (fVar37 * func_82(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_17411.f_5056[iVar8] == 5)
						{
							if (Global_17411.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							if (Global_17411.f_5075[iVar8])
							{
								if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17411.f_7974[iVar9] = iVar6;
						Global_17411.f_5740 = iVar6;
						iVar9++;
						if (Global_17411.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_17411.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_17411.f_5728)
					{
						Global_17411.f_5485[iVar6] = 1;
						if (Global_17411.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_17411.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17411.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17411.f_5728)
			{
				Global_17411.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_17411.f_5733 = iVar11;
				Global_17411.f_5731 = iVar10;
				Global_17411.f_5728 = 1;
			}
		}
		if (!Global_17411.f_5729)
		{
			Global_17411.f_5732 = iVar9;
			Global_17411.f_5729 = 1;
		}
		iVar5++;
	}
	Global_17411.f_5876 = fVar49;
	Global_17411.f_5878 = unk_0xE3903F59E2F22150();
	unk_0x5E1FA2076D53C3F5(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_76(0);
	}
	Global_17411.f_8318 = 0;
	if (bParam2)
	{
		unk_0x581AE7724ACAD410(10);
	}
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(8);
	if (bParam0)
	{
		func_75(1);
	}
	unk_0x94A8B1D385430451();
}

void func_75(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_76(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_80(0))
		{
			func_77(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_77(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_14725)
	{
		func_79(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_78())
	{
		Global_14553.f_1 = 3;
	}
}

int func_78()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_80(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
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
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

float func_82(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_83(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0x974BEF45D557B847(fParam3, iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

void func_84(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam4);
}

bool func_85()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

void func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
}

void func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_88(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x1256E5EA03020804(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
		else
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x762F7A52B1325903(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	else
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x5E831B95C8BE4F09(1);
	if (bParam5)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(4);
	}
	else if (bParam6)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(6);
	}
	else
	{
		unk_0xBED53673591D764E(0);
	}
	unk_0x1C500BB2E1897008(0f, 1f);
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_88(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_89(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_110(bParam4, bParam8))
	{
		return;
	}
	if (func_95())
	{
		return;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_92(unk_0x95B959F18401C09A(), 0))
		{
			return;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x86CF3D110E5DD82F() == 0 || unk_0xE3F7CBC28F745843())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (unk_0xEABBA3F8727C0FE7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0x4464D5595CEED843(2, Global_17411.f_5026[iVar1], true), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0xF745CA12DC8836EB(2, Global_17411.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x8DAB5B12D7B9AD29((1f - (Global_17411.f_5081 / 100f)));
			unk_0x818901B332D5541D();
			if (unk_0x4CE1DD5CFC1F941E())
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar1 /*4*/])) != unk_0x36163153849DFDA1("PREV"))
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					func_91(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar2 /*4*/])) == unk_0x36163153849DFDA1("PREV"))
					{
						func_91(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_90(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xDC97362660946DF9(iVar3, 70);
						}
						else
						{
							unk_0xE800DC85FDF60F85(iVar3);
						}
						unk_0x36F3AA9FFAAF8606();
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (Global_17411.f_5026[iVar1] != 359 && unk_0x0E4018692D92041D(Global_17411.f_5052, iVar1))
						{
							unk_0x295B86DE57A0721D(true);
							unk_0x4D9DA18AB3C2A466(Global_17411.f_5026[iVar1]);
						}
						else
						{
							unk_0x295B86DE57A0721D(false);
							unk_0x4D9DA18AB3C2A466(359);
						}
					}
					unk_0x818901B332D5541D();
				}
				iVar1++;
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_16)) != unk_0x36163153849DFDA1(""))
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(Global_17411.f_4769);
				func_91(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_90(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iVar4, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iVar4);
					}
					unk_0x36F3AA9FFAAF8606();
				}
				unk_0x818901B332D5541D();
			}
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(80);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				unk_0x4D9DA18AB3C2A466(1);
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(0);
			}
			unk_0x818901B332D5541D();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iParam2, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iParam2);
					}
					unk_0x36F3AA9FFAAF8606();
					unk_0x818901B332D5541D();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4D9DA18AB3C2A466(iVar1);
				unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
				if (bParam5)
				{
					unk_0xDC97362660946DF9(iParam2, 70);
				}
				else
				{
					unk_0xE800DC85FDF60F85(iParam2);
				}
				unk_0x36F3AA9FFAAF8606();
				unk_0x818901B332D5541D();
			}
		}
		unk_0x1382AC429D0EA2BB(76, 66);
		unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				unk_0x7049F65F85106838(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			unk_0x019859CB72B1DB4C(15);
			Global_17411.f_8353 = 0;
		}
		unk_0x94A8B1D385430451();
		if (Global_17411.f_5055)
		{
			unk_0x1382AC429D0EA2BB(82, 66);
			unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
			unk_0x5A2C46836B4DF5B3(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94A8B1D385430451();
		}
		else
		{
			unk_0xFF524AE40FB6301A(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_90(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_91(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_92(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_93(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_94();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_94()
{
	return Global_1312745;
}

int func_95()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_96())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x4951EE4BB7B6B4F7(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_96()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x1256E5EA03020804(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 54:
			unk_0x1256E5EA03020804(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_98(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0xBD5053F7FFEB44E5(2);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008(fParam0, ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_99(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

float func_100(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_101();
	unk_0xCAE35308CC49F0CC(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	unk_0xE800DC85FDF60F85(iParam2);
	return unk_0x201339347519B9A8(1);
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17411.f_8328)
	{
		iVar0 = Global_17411.f_8324;
		iVar1 = Global_17411.f_8325;
		iVar2 = Global_17411.f_8326;
		iVar3 = Global_17411.f_8327;
	}
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008((Global_17408 + 0.0046875f), ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x5263FF82360FF7E2((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_103(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_105(unk_0x95B959F18401C09A()) };
			if (unk_0x5E6D03D528D40F43(&Var2, &uVar1))
			{
				return func_104(&uVar1);
			}
		}
		else
		{
			return func_104(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_104(var uParam0)
{
	return uParam0;
}

struct<13> func_105(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

char* func_106(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_105(unk_0x95B959F18401C09A()) };
			unk_0x5E6D03D528D40F43(&Var1, &uVar0);
			return func_104(&uVar0);
		}
		else
		{
			return func_104(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_107()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x3A5E614EC752B188(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_106(iParam0), 64);
	StringCopy(&cVar1, func_103(iParam0, bParam1), 64);
	if (unk_0x36163153849DFDA1(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x3A5E614EC752B188(&iVar2, &iVar3);
			fVar5 = unk_0x63151314B8B4D6EB(0);
			if (func_107())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_107())
			{
				fVar4 = 1f;
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("director_mode")) > 0)
			{
				unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x5B78EE936879124F(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_109(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_109(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x9E7AB96D7830E5B1() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_109(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_110(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x73DA1542B2F0C458() || (func_112(8, -1) && func_111() != 64)) || (unk_0x1B9A01A53920FD50() != 0 && !bParam1)) || (unk_0x71EC91BA8C88BCE0() && !bParam0)) || unk_0xBAA5E93732372E34()) || Global_71850) || Global_17411.f_8352) || unk_0x15C85368E432C647()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_111()
{
	return Global_1312802;
}

bool func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

void func_113(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_70409[iParam0] = 0;
	Global_70409.f_69[iParam0] = 0;
}

void func_114(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_61(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_116(iParam0);
			func_115(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 11))
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_474(iParam0, 1);
		}
	}
}

void func_115(var uParam0, var uParam1)
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
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
			unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_474(iParam0, 0);
		}
	}
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_118(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x4464D5595CEED843(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
}

void func_120(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_4690), sParam0, 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = iParam1;
	Global_17411.f_4767 = unk_0xE3903F59E2F22150();
	Global_17411.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
}

int func_121()
{
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (Global_4268040 > -1)
		{
			if (unk_0x1771F6BAF60B44FA(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x0817B4F2C156A62D();
	}
	if (Global_4268040 == -6)
	{
		unk_0x2C02423528813544(4);
		if (iParam0 && unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268040 = -1;
			return 0;
		}
	}
	if (((Global_4268040 > -1 || Global_4268040 == -3) || Global_4268040 == -2) || unk_0x7B37FD322F4D4188())
	{
		unk_0x2C02423528813544(1);
		return 0;
	}
	if (Global_4268040 == -1 && iParam0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			unk_0x2C02423528813544(4);
			Global_4268040 = -6;
			return 1;
		}
		else
		{
			unk_0x2C02423528813544(3);
			return 0;
		}
	}
	unk_0x2C02423528813544(1);
	return 0;
}

void func_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		Global_4268040 = -1;
		return;
	}
	unk_0xDF7C6E5DFD633758(1);
	fVar0 = Global_17408;
	fVar2 = (fVar0 + Global_17410);
	fVar3 = Global_17411.f_5730;
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17411.f_5732 < 1)
	{
		fVar1 = (Global_17411.f_5730 - 0.034722f);
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xDF73B9B8F283BB7B(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xDF73B9B8F283BB7B(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x94A8B1D385430451();
	func_125();
	if (Global_4268040 == -6)
	{
		return;
	}
	Global_4268040 = -1;
	fVar7 = Global_4268034;
	fVar8 = Global_4268035;
	if (Global_17411.f_5733 > Global_17411.f_5732)
	{
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= fVar3) && Global_4268035 < (fVar3 + fVar6))
		{
			Global_4268040 = -2;
			if (bParam3)
			{
				func_124(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_124(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_17411.f_5733 == -1)
		{
			Global_4268040 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17411.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x1382AC429D0EA2BB(76, 84);
				unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
				func_102(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x94A8B1D385430451();
			}
		}
		Global_4268040 = Global_17411.f_7974[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268040 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268040 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268040 = -4;
		return;
	}
	Global_4268040 = -1;
}

void func_124(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17408;
	fVar1 = Global_17411.f_5730;
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268040 == -2)
	{
		func_102(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_102(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x94A8B1D385430451();
}

void func_125()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = unk_0x2D0598FBFD4D8A23(2, 239);
	Global_4268035 = unk_0x2D0598FBFD4D8A23(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

void func_126(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = iParam0;
	Global_17411.f_5874 = iParam2;
	if (Global_17411.f_5739 < Global_17411.f_5738)
	{
		Global_17411.f_5738 = Global_17411.f_5739;
	}
	else if ((Global_17411.f_5729 && Global_17411.f_5739 > Global_17411.f_5740) || (!Global_17411.f_5729 && Global_17411.f_5739 >= (Global_17411.f_5738 + Global_17411.f_5225)))
	{
		iVar0 = Global_17411.f_5738;
		while (iVar0 <= Global_17411.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17411.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17411.f_5225 && Global_17411.f_5738 < 128)
		{
			Global_17411.f_5738++;
			iVar1 = 0;
			iVar0 = Global_17411.f_5738;
			while (iVar0 <= Global_17411.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17411.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17411.f_4690), "", 24);
		StringCopy(&(Global_4267964.f_21), "", 16);
	}
}

void func_127(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam0, 24);
	Global_17411.f_5220++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 1;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_129();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_108(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_128();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

float func_128()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_108(Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x6486D2A6F2DC8DCB(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_129()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_87(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[Global_17411.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xE800DC85FDF60F85(Global_17411.f_3918[((Global_17411.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0x974BEF45D557B847(Global_17411.f_4175[((Global_17411.f_5223 - iVar4) + iVar10)], Global_17411.f_4304[((Global_17411.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		fVar0 = unk_0x201339347519B9A8(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_108(Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_130(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_131(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return unk_0x093916B4639501B8(iVar0);
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68786;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_68787;
		
		case 324:
			return Global_68788;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_68789;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		case 402:
			return Global_68790;
		
		case 403:
			return 1945374990;
		
		case 404:
			return 1653666139;
		
		case 405:
			return 500482303;
		
		case 406:
			return 2044532910;
		
		case 407:
			return -638562243;
		
		case 408:
			return 1692272545;
		
		case 409:
			return 2069146067;
		
		case 410:
			return -420911112;
		
		case 411:
			return 321186144;
		
		case 412:
			return -54332285;
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return -307958377;
		
		case 414:
			return 345756458;
		
		case 425:
			return -801550069;
		
		case 426:
			return 679453769;
		
		case 427:
			return 1909700336;
		
		case 428:
			return 2139203625;
		
		case 429:
			return -1890996696;
		
		case 430:
			return 2038858402;
		
		case 431:
			return -1146969353;
		
		case 432:
			return 1542143200;
		
		case 433:
			return -579747861;
		
		case 434:
			return 444994115;
		
		case 435:
			return 1637620610;
		
		case 436:
			return -755532233;
		
		case 437:
			return 540101442;
		
		case 438:
			return -1106120762;
		
		case 439:
			return -1478704292;
		
		case 440:
			return -2096690334;
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return -49115651;
		
		case 442:
			return 1456744817;
		
		case 443:
			return 1591739866;
		
		case 444:
			return -507495760;
		
		case 445:
			return -1168952148;
		
		case 446:
			return 1279262537;
		
		case 447:
			return -1566607184;
		
		case 448:
			return -331467772;
		
		case 449:
			return -286046740;
		
		case 459:
			return 1044193113;
		
		case 460:
			return 686471183;
		
		case 461:
			return -941272559;
		
		case 462:
			return -1829436850;
		
		case 463:
			return -682108547;
		
		case 464:
			return 722226637;
		
		case 465:
			return 1854776567;
		
		case 466:
			return 1862507111;
		
		case 467:
			return -882629065;
		
		case 468:
			return -362150785;
		
		case 469:
			return 310284501;
		
		case 470:
			return 916547552;
		
		case 471:
			return -1804415708;
		
		case 472:
			return 1934384720;
		
		case 473:
			return -1349095620;
		
		case 474:
			return -208911803;
		
		case 475:
			return -324618589;
		
		case 476:
			return -664141241;
		
		case 477:
			return 1323778901;
		
		case 478:
			return -1620126302;
		
		case 479:
			return -447711397;
		
		default:
	}
	return 0;
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5224 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 4)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 4)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17411.f_4433[Global_17411.f_5224] = iParam1;
	Global_17411.f_5224++;
	if (iParam1 != 0)
	{
		func_108(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_108(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar2;
			}
		}
	}
	unk_0x8950ED5730F62EE8(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 4;
}

void func_133(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 1)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 1)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x786AF4A44E1B5B4B(sParam1) && !unk_0xEAF855A7DC28BC8D(sParam1))
	{
	}
	Global_17411.f_1610[Global_17411.f_5220] = bParam3;
	Global_17411.f_1867[Global_17411.f_5220] = iParam4;
	Global_17411.f_5220++;
	if (!bParam3)
	{
		func_136(Global_17411.f_5218, 1);
	}
	else
	{
		func_136(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_135(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_108(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_134(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
			if (fVar4 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x8950ED5730F62EE8(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 1;
	Global_17411.f_5742 = (Global_17411.f_5220 - 1);
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = iParam2;
}

float func_134(char* sParam0)
{
	if (!unk_0xEAF855A7DC28BC8D(sParam0))
	{
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_135(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_87(0, 1, 0, 0, 0, 0, 0);
	unk_0xCAE35308CC49F0CC(sParam0);
	return unk_0x201339347519B9A8(1);
}

void func_136(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_137(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_66 = func_131(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_206(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_205(iParam0))
	{
		if (Global_70349)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (func_204(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case 2139203625:
		case -1890996696:
		case 2038858402:
			uParam1->f_9[42] = 4;
			break;
		
		case -1146969353:
		case 1542143200:
		case -579747861:
			uParam1->f_9[42] = 4;
			break;
		
		case 444994115:
		case 1637620610:
		case -755532233:
			uParam1->f_9[42] = 1;
			break;
		
		case 540101442:
		case -1106120762:
		case -1478704292:
			uParam1->f_9[42] = 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
			uParam1->f_9[42] = 4;
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_70349)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_203(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_70348;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_106565.f_25176.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_106565.f_25176.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_106565.f_25176.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 2:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 3:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 4:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 5:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 6:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 7:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 8:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 9:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 10:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 11:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 12:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 13:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 14:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 15:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 16:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 17:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 18:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 19:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 20:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 21:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 22:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 23:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 24:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 25:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_147(func_161(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_146(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_145(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_144(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_147(func_161(iParam0, iVar1));
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_146(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_145(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_144(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_147(func_161(iParam0, iVar1));
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_146(iParam0))
				{
					if (func_145(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_144(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_146(iParam0))
				{
					if (func_145(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_144(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_141(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (unk_0xCE3CFF625BEBAA04(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_141(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (unk_0xCE3CFF625BEBAA04(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_205(iParam0))
				{
					if (!Global_70349)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = 177270108;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = 387748548;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_140(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_139();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = func_138();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_138()
{
	return -1988428699;
}

int func_139()
{
	return -2118308144;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
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
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

bool func_141(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_142(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443) || iParam0 == 459) || iParam0 == 460) || iParam0 == 461) || iParam0 == 462) || iParam0 == 463) || iParam0 == 464) || iParam0 == 465) || iParam0 == 466) || iParam0 == 467) || iParam0 == 468) || iParam0 == 469) || iParam0 == 470) || iParam0 == 471) || iParam0 == 472) || iParam0 == 473) || iParam0 == 474) || iParam0 == 475) || iParam0 == 476) || iParam0 == 477) || iParam0 == 478) || iParam0 == 479)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_160(func_161(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_160(func_161(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_146(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_159(unk_0x95B959F18401C09A(), 0))
			{
				return 14;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 1))
			{
				return 13;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 2))
			{
				return 8;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 3))
			{
				return 12;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 4))
			{
				return 11;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 5))
			{
				return 10;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 6))
			{
				return 9;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 7))
			{
				return 7;
			}
			else if (func_159(unk_0x95B959F18401C09A(), 8))
			{
				return 15;
			}
			if (func_148(unk_0x95B959F18401C09A()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_148(int iParam0)
{
	if ((((((((func_158(iParam0) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_151(iParam0)) || func_149(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_2, 0);
}

int func_150()
{
	return -1;
}

bool func_151(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 31);
}

bool func_152(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 30);
}

bool func_153(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 29);
}

bool func_154(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 28);
}

bool func_155(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 27);
}

bool func_156(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 26);
}

bool func_157(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 25);
}

bool func_158(int iParam0)
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 24);
}

int func_159(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_158(iParam0);
		
		case 3:
			return func_157(iParam0);
		
		case 6:
			return func_156(iParam0);
		
		case 1:
			return func_155(iParam0);
		
		case 0:
			return func_154(iParam0);
		
		case 7:
			return func_153(iParam0);
		
		case 2:
			return func_152(iParam0);
		
		case 5:
			return func_151(iParam0);
		
		case 8:
			return func_149(iParam0);
		
		default:
	}
	return 0;
}

int func_160(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_162(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_162(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		default:
	}
	return -1;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_131(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0x67E385FAD2957EF2())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_202())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0xB331FCEB94EB05C8()) || (iParam0 == 207 && unk_0xB331FCEB94EB05C8())) || (iParam0 == 208 && unk_0xB331FCEB94EB05C8())) || (iParam0 == 209 && unk_0xB331FCEB94EB05C8()))
	{
		if (func_43())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_205(iParam0))
	{
		if (Global_70349)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_201(iVar0);
	if (iVar1 != -1)
	{
		if (func_199(func_200(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_198(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_262145.f_19625) || (iParam0 != 205 && Global_262145.f_19624))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_197(iParam0))
	{
		if (func_188(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_187(iVar0);
	if (iVar2 != -1)
	{
		if (func_185(func_186(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_184(iVar0);
	if (iVar3 > 0)
	{
		if (func_182(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_181(iVar0);
	if (iVar4 != -1)
	{
		if (func_179(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_178(iVar0);
	if (iVar5 != -1)
	{
		if (func_171(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_170(iVar0);
	if (iVar6 != -1)
	{
		if (func_163(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_163(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_170(iParam0) != -1)
	{
		if (func_164(func_169(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_165(func_168(iParam0), -1, -1);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar1 = func_167(iParam0, iParam1);
	uVar2 = func_166(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 8;
			break;
		
		case 679453769:
			return 9;
			break;
		
		case 1909700336:
			return 10;
			break;
		
		case 2139203625:
			return 11;
			break;
		
		case -1890996696:
			return 12;
			break;
		
		case 2038858402:
			return 13;
			break;
		
		case 540101442:
			return 14;
			break;
		
		case -1106120762:
			return 15;
			break;
		
		case -1478704292:
			return 16;
			break;
		
		case -1146969353:
			return 20;
			break;
		
		case 1542143200:
			return 21;
			break;
		
		case -579747861:
			return 22;
			break;
		
		case 444994115:
			return 17;
			break;
		
		case 1637620610:
			return 18;
			break;
		
		case -755532233:
			return 19;
			break;
		
		case -2096690334:
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case 931280609:
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 0;
		
		case 679453769:
			return 1;
		
		case 1909700336:
			return 2;
		
		case 2139203625:
			return 3;
		
		case -1890996696:
			return 4;
		
		case 2038858402:
			return 5;
		
		case -1146969353:
			return 6;
		
		case 1542143200:
			return 7;
		
		case -579747861:
			return 8;
		
		case 444994115:
			return 9;
		
		case 1637620610:
			return 10;
		
		case -755532233:
			return 11;
		
		case 540101442:
			return 12;
		
		case -1106120762:
			return 13;
		
		case -1478704292:
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case -2096690334:
			return 19;
		
		case 931280609:
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			if (func_176(7230, -1, 0) >= func_175(iParam0) || Global_262145.f_24027)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1653666139:
			if (func_176(7230, -1, 0) >= func_175(iParam0) || Global_262145.f_24028)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2069146067:
			if (func_172(22050, -1, -1) >= func_175(iParam0) || Global_262145.f_24029)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 345756458:
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_275.f_7, 1) || Global_262145.f_24031)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -420911112:
			if (func_176(7228, -1, 0) >= func_175(iParam0) || Global_262145.f_24032)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -307958377:
			if (func_176(7228, -1, 0) >= func_175(iParam0) || Global_262145.f_24033)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -638562243:
			if (func_165(22123, -1, -1) || Global_262145.f_24030)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	iVar1 = func_174(iParam0, iParam1);
	iVar2 = func_173(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return Global_262145.f_24034;
			break;
		
		case 1653666139:
			return Global_262145.f_24035;
			break;
		
		case 2069146067:
			return Global_262145.f_24036;
			break;
		
		case -420911112:
			return Global_262145.f_24037;
			break;
		
		case -307958377:
			return Global_262145.f_24038;
			break;
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_177(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_177(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return 0;
			break;
		
		case 1653666139:
			return 1;
			break;
		
		case 2069146067:
			return 2;
			break;
		
		case -638562243:
			return 3;
			break;
		
		case 345756458:
			return 4;
			break;
		
		case -420911112:
			return 5;
			break;
		
		case -307958377:
			return 6;
			break;
	}
	return -1;
}

int func_179(int iParam0)
{
	int iVar0;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = func_176(5661, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return unk_0x0E4018692D92041D(iVar0, func_180(1));
		
		case 1181327175:
			return unk_0x0E4018692D92041D(iVar0, func_180(2));
		
		case -1693015116:
			return unk_0x0E4018692D92041D(iVar0, func_180(6));
		
		case 886810209:
			return unk_0x0E4018692D92041D(iVar0, func_180(7));
		
		case -692292317:
			return unk_0x0E4018692D92041D(iVar0, func_180(10));
		
		case -212993243:
			return unk_0x0E4018692D92041D(iVar0, func_180(11));
		
		case -1435527158:
			return unk_0x0E4018692D92041D(iVar0, func_180(12));
		
		case 447548909:
			return unk_0x0E4018692D92041D(iVar0, func_180(13));
		
		case 1489874736:
			return unk_0x0E4018692D92041D(iVar0, func_180(15));
		
		default:
	}
	return 0;
}

int func_180(int iParam0)
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
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_183();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	return func_176(6113, -1, 0);
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_262145.f_22084;
		
		case -975345305:
			return Global_262145.f_22085;
		
		case -1523619738:
			return Global_262145.f_22086;
		
		case -1984275979:
			return Global_262145.f_22087;
		
		case -1700874274:
			return Global_262145.f_22088;
		
		case 1565978651:
			return Global_262145.f_22089;
		
		case 1043222410:
			return Global_262145.f_22090;
		
		case -32878452:
			return Global_262145.f_22091;
		
		case -1007528109:
			return Global_262145.f_22092;
		
		case -749299473:
			return Global_262145.f_22093;
		
		case -1386191424:
			return Global_262145.f_22094;
		
		case -392675425:
			return Global_262145.f_22095;
		
		case 1036591958:
			return Global_262145.f_22096;
		
		case -42959138:
			return Global_262145.f_22097;
		
		default:
	}
	return 0;
}

bool func_185(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(func_176(5463, -1, 0), iParam0);
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (!Global_71590)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_189(iVar0);
}

bool func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_196())
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	iVar1 = iParam0;
	return unk_0x0E4018692D92041D(iVar0, func_190(iVar1));
}

int func_190(int iParam0)
{
	return (iParam0 % 32);
}

var func_191(var uParam0)
{
	var uVar0;
	
	uVar0 = func_176(func_192(uParam0), -1, 0);
	return uVar0;
}

int func_192(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_195(iVar0);
	if ((func_194() == 0 || func_193() == 0) || (func_194() == 999 && func_193() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 10383;
}

int func_193()
{
	return Global_25766;
}

int func_194()
{
	return Global_25765;
}

int func_195(int iParam0)
{
	return (iParam0 / 32);
}

bool func_196()
{
	return Global_1312846;
}

int func_197(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)
{
	if (!Global_71590)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(func_176(5326, -1, 0), iParam0);
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_201(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_202()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0E4018692D92041D(Global_25, 5))
	{
		if (unk_0x0E4018692D92041D(Global_25, 1) || unk_0x0E4018692D92041D(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0x0E4018692D92041D(iVar0, 5))
		{
			if (unk_0x0E4018692D92041D(iVar0, 1) || unk_0x0E4018692D92041D(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x24F08F9426A12B11(0))
	{
		if (Global_145399.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x75D54ED6C1AD1642(iVar2, &iVar1, -1))
			{
				if (unk_0x0E4018692D92041D(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x3CEDCF35B2FFE080())
	{
		iVar3 = unk_0x37FBC14B2F5D54DB(866);
		if (unk_0x0E4018692D92041D(iVar3, 1) || unk_0x0E4018692D92041D(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x40863EBAEA2F03D7())
	{
		if (unk_0xDBB8379205DEBBFE())
		{
			if (unk_0x7C524C4D606CCA17())
			{
				unk_0x75D54ED6C1AD1642(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x8950ED5730F62EE8(&iVar4, 1);
				unk_0x8950ED5730F62EE8(&iVar4, 3);
				unk_0x8950ED5730F62EE8(&iVar4, 5);
				unk_0x8950ED5730F62EE8(&Global_25, 1);
				unk_0x8950ED5730F62EE8(&Global_25, 3);
				unk_0x8950ED5730F62EE8(&Global_25, 5);
				unk_0x12B6E23F244DDB0F(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x3CEDCF35B2FFE080())
				{
					iVar4 = unk_0x37FBC14B2F5D54DB(866);
					unk_0x8950ED5730F62EE8(&iVar4, 1);
					unk_0x8950ED5730F62EE8(&iVar4, 3);
					unk_0x59DD23556BF7C12E(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0.2f;
			break;
		
		case -32878452:
			*uParam1 = 0.15f;
			break;
		
		case -1007528109:
			*uParam1 = 0.3f;
			break;
		
		case -42959138:
			*uParam1 = 0.5f;
			break;
		
		case -1763555241:
			*uParam1 = 0.3f;
			break;
		
		case -749299473:
			*uParam1 = 0.4f;
			break;
		
		case 1565978651:
			*uParam1 = 0.3f;
			break;
		
		case 1036591958:
			*uParam1 = 0.4f;
			break;
		
		case -1386191424:
			*uParam1 = 0.4f;
			break;
		
		case -975345305:
			*uParam1 = 0.4f;
			break;
		
		case -392675425:
			*uParam1 = 0.3f;
			break;
		
		case -1700874274:
			*uParam1 = 0.5f;
			break;
		
		case 1043222410:
			*uParam1 = 0.15f;
			break;
		
		case -1435527158:
			*uParam1 = 0.6f;
			break;
		
		case 668439077:
			*uParam1 = 1f;
			break;
		
		case -1694081890:
			*uParam1 = 1f;
			break;
		
		case -2042350822:
			*uParam1 = 1f;
			break;
		
		case 2139203625:
			*uParam1 = 1f;
			break;
		
		case -1890996696:
			*uParam1 = 1f;
			break;
		
		case 2038858402:
			*uParam1 = 1f;
			break;
		
		case -801550069:
			*uParam1 = 1f;
			break;
		
		case 679453769:
			*uParam1 = 1f;
			break;
		
		case 1909700336:
			*uParam1 = 1f;
			break;
		
		case -27326686:
			*uParam1 = 1f;
			break;
		
		case -1812949672:
			*uParam1 = 1f;
			break;
		
		case -1374500452:
			*uParam1 = 1f;
			break;
		
		case -688189648:
			*uParam1 = 1f;
			break;
		
		case -1375060657:
			*uParam1 = 1f;
			break;
		
		case -1293924613:
			*uParam1 = 1f;
			break;
		
		case 1009171724:
			*uParam1 = 1f;
			break;
		
		case -1924800695:
			*uParam1 = 1f;
			break;
		
		case -1744505657:
			*uParam1 = 1f;
			break;
		
		case 444994115:
			*uParam1 = 1f;
			break;
		
		case 1637620610:
			*uParam1 = 1f;
			break;
		
		case -755532233:
			*uParam1 = 1f;
			break;
		
		case 628003514:
			*uParam1 = 1f;
			break;
		
		case 1537277726:
			*uParam1 = 1f;
			break;
		
		case 1239571361:
			*uParam1 = 1f;
			break;
		
		case 1721676810:
			*uParam1 = 1f;
			break;
		
		case 840387324:
			*uParam1 = 1f;
			break;
		
		case -715746948:
			*uParam1 = 1f;
			break;
		
		case -1146969353:
			*uParam1 = 1f;
			break;
		
		case 1542143200:
			*uParam1 = 1f;
			break;
		
		case -579747861:
			*uParam1 = 1f;
			break;
		
		case -2061049099:
			*uParam1 = 1f;
			break;
		
		case 373261600:
			*uParam1 = 1f;
			break;
		
		case 1742022738:
			*uParam1 = 1f;
			break;
		
		case 540101442:
			*uParam1 = 1f;
			break;
		
		case -1106120762:
			*uParam1 = 1f;
			break;
		
		case -1478704292:
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case -1146969353:
		case 668439077:
		case -801550069:
		case 1721676810:
		case -688189648:
		case 1009171724:
		case 444994115:
		case 628003514:
		case -27326686:
		case 540101442:
		case -2061049099:
		case -398987772:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return 1;
		
		default:
	}
	return 0;
}

int func_205(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0x8950ED5730F62EE8(iParam1, 4);
			break;
		
		case 67:
			unk_0x8950ED5730F62EE8(iParam1, 4);
			break;
		
		case 72:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 117:
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			break;
		
		case 49:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 118:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			break;
		
		case 1:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 119:
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			break;
		
		case 77:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 120:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 130:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 132:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 135:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 137:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 141:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 6);
			break;
		
		case 147:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 2);
			unk_0x8950ED5730F62EE8(iParam1, 3);
			unk_0x8950ED5730F62EE8(iParam1, 4);
			unk_0x8950ED5730F62EE8(iParam1, 5);
			unk_0x8950ED5730F62EE8(iParam1, 6);
			unk_0x8950ED5730F62EE8(iParam1, 7);
			unk_0x8950ED5730F62EE8(iParam1, 8);
			break;
		
		case 203:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 100:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 2);
			break;
		
		case 170:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 160:
			unk_0x8950ED5730F62EE8(iParam1, 15);
			break;
		
		case 161:
			unk_0x8950ED5730F62EE8(iParam1, 15);
			break;
		
		case 192:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 221:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			break;
		
		case 222:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 172:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 165:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 166:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0xCE689A8E8C42ED78(iParam1, 1);
			break;
		
		case 139:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 104:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 109:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0xCE689A8E8C42ED78(iParam1, 2);
			unk_0xCE689A8E8C42ED78(iParam1, 4);
			break;
		
		case 97:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 52:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 108:
			unk_0x8950ED5730F62EE8(iParam1, 1);
			break;
		
		case 237:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 238:
			unk_0xCE689A8E8C42ED78(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_70349)
			{
				unk_0x8950ED5730F62EE8(iParam1, 9);
			}
			break;
		
		case 271:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 2);
			unk_0x8950ED5730F62EE8(iParam1, 3);
			unk_0x8950ED5730F62EE8(iParam1, 4);
			break;
		
		case 272:
			unk_0x8950ED5730F62EE8(iParam1, 3);
			unk_0x8950ED5730F62EE8(iParam1, 4);
			break;
		
		case 273:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 281:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 267:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 268:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			break;
		
		case 292:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 309:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 329:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 364:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 360:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 401:
			unk_0x8950ED5730F62EE8(iParam1, 0);
			unk_0x8950ED5730F62EE8(iParam1, 1);
			unk_0x8950ED5730F62EE8(iParam1, 6);
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 406:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 404:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 425:
		case 426:
		case 427:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 431:
		case 432:
		case 433:
			unk_0x8950ED5730F62EE8(iParam1, 9);
			break;
		
		case 471:
			unk_0x8950ED5730F62EE8(iParam1, 3);
			unk_0x8950ED5730F62EE8(iParam1, 7);
			break;
		
		default:
			return;
			break;
	}
}

void func_207(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_1), sParam0, 16);
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5056[0] = iParam0;
	Global_17411.f_5056[1] = iParam1;
	Global_17411.f_5056[2] = iParam2;
	Global_17411.f_5056[3] = iParam3;
	Global_17411.f_5056[4] = iParam4;
	Global_17411.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_17411.f_5226++;
	}
}

void func_210(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17411.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17411.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459153[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_5089[iVar0] = 0;
		Global_17411.f_5227[iVar0] = 0;
		Global_17411.f_5356[iVar0] = 0;
		Global_17411.f_5879[iVar0] = 0f;
		Global_17411.f_5485[iVar0] = 0;
		Global_17411.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17411.f_5056[iVar0] = 0;
		Global_17411.f_5068[iVar0] = 0f;
		Global_17411.f_5062[iVar0] = -1f;
		Global_17411.f_5075[iVar0] = 0;
		Global_17411.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		StringCopy(&(Global_17411.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17411.f_6997[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17411.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	Global_17411 = 0;
	Global_17411.f_5218 = 0;
	Global_17411.f_5219 = 0;
	Global_17411.f_5220 = 0;
	Global_17411.f_5222 = 0;
	Global_17411.f_5223 = 0;
	Global_17411.f_5224 = 0;
	Global_17411.f_5221 = 0;
	Global_17411.f_5874 = 0;
	Global_17411.f_6014 = 0;
	Global_17411.f_5739 = 0;
	Global_17411.f_5738 = 0;
	Global_17411.f_5740 = 0;
	StringCopy(&(Global_17411.f_4690), "", 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = 0;
	Global_17411.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_4768 = 0;
	StringCopy(&(Global_4267964.f_21), "", 16);
	Global_4267964.f_61 = 0;
	Global_4267964.f_62 = 0;
	Global_4267964.f_63 = 0;
	Global_4267964.f_64 = 0;
	Global_4267964.f_65 = 0;
	Global_4267964.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4267964.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4267964.f_67 = 0;
	StringCopy(&(Global_17411.f_1), "", 16);
	Global_17411.f_5074 = 0f;
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_5744 = 0;
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = 0;
	Global_17411.f_5742 = 0;
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	Global_17411.f_5225 = 10;
	Global_17411.f_5226 = 0;
	Global_17411.f_5876 = 0f;
	Global_17411.f_5877 = 0f;
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	Global_17411.f_5730 = 0f;
	Global_17411.f_5731 = 0;
	Global_17411.f_5733 = 0;
	Global_17411.f_5732 = 0;
	Global_17411.f_5734 = 0;
	Global_17411.f_5735 = 0;
	Global_17411.f_5736 = 0;
	Global_17411.f_5737 = 0;
	Global_17411.f_8349 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17411.f_6008[iVar0] = -1;
		Global_17411.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_17411.f_5081 = 0f;
	Global_17411.f_5052 = 0;
	Global_17411.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17411.f_6015)
	{
		Global_17411.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_8328 = 0;
	Global_17411.f_8323 = 0;
	Global_17411.f_8333 = 0;
	Global_17411.f_8338 = 0;
	Global_17411.f_8343 = 0;
	Global_17411.f_8345 = 0;
	Global_17411.f_8351 = 0;
	Global_17408 = 0.05f;
	Global_17409 = 0.05f;
	Global_17410 = 0.225f;
	fVar2 = unk_0x63151314B8B4D6EB(0);
	if (bParam0)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17410 = 0.225f;
	}
}

void func_211()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x0C130F0ECCD773BC(0.325f, 0.3f);
	}
}

int func_212(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_80(0))
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_213(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		unk_0x2EE8D1440C9060EF(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!unk_0x65F173513F5EF79C(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0A06DEFFF267C21E("CommonMenu", false);
	Global_17411.f_5614[iVar0] = 1;
	if (!unk_0xD83C9F072D059CC4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0A06DEFFF267C21E("MPShopSale", false);
		Global_17411.f_5621[iVar0] = 1;
		if (!unk_0xD83C9F072D059CC4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_214(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_214(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				*uParam0 = unk_0x199B24FF79A52CCF(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x11AE7F6A404414C9(*uParam0))
					{
						uParam0->f_8 = unk_0xE3903F59E2F22150();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_215(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

int func_216(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_217(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = unk_0x8C40DC84EDF05997();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x786AF4A44E1B5B4B(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_25176[iParam0], iVar0);
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_222(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_18568[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0xB331FCEB94EB05C8())
	{
		if (func_221(33, 0) && !func_220(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_106565.f_25067.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_106565.f_25067.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_106565.f_25067.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_106565.f_25067.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_106565.f_25067.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_106565.f_7682.f_764)
	{
		if (Global_106565.f_7682.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_222(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_668.f_1311, 2))
		{
			return 1;
		}
	}
	if (unk_0x67E385FAD2957EF2())
	{
		if (!bParam1 || unk_0x43E505744A9B715D())
		{
			if (!unk_0xF3622D832771D4B9() && !unk_0xF5DB888C353E2BED())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xA71A137E08393E8F())
		{
			return 0;
		}
	}
	if (unk_0x67E385FAD2957EF2())
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_222(1, 1))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0++;
		}
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_18568[45 /*6*/], 3))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0xB331FCEB94EB05C8())
	{
		if (func_221(33, 0) && !func_220(1751306471))
		{
			iVar0++;
		}
		if (Global_106565.f_25067.f_3)
		{
			iVar0++;
		}
		if (Global_106565.f_25067.f_4)
		{
			iVar0++;
		}
		if (Global_106565.f_25067.f_5)
		{
			iVar0++;
		}
		if (Global_106565.f_25067.f_6)
		{
			iVar0++;
		}
		if (Global_106565.f_25067.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_224(float fParam0)
{
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xB6AC6399D9375C3A(unk_0x33CD235DF1E6A94E()) > 0;
		}
		else
		{
			return unk_0x7A607552722EC814(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), fParam0) > 0;
		}
	}
	return 0;
}

bool func_225(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_226()
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	bool bVar15;
	float fVar16;
	int iVar17;
	vector3 vVar18;
	vector3 vVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_29.f_80 && Local_56.f_29.f_69) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && Local_56.f_2 == 0) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68807) && !func_225(1)) && !func_309()) || (((Local_56.f_3 > 1 && !func_225(0)) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && !func_309()))
	{
		func_308(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		vVar5 = { 198.3659f, -1020.273f, -100f };
		vVar6 = { vVar5 };
		vVar7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_307(Local_56);
		switch (Local_56.f_3)
		{
			case 0:
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !unk_0x71EC91BA8C88BCE0())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_306(unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()), Local_56.f_29.f_68, 90f) || unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && !unk_0x2E9A4AE2A5B4D8E8(unk_0x33CD235DF1E6A94E())) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) && !unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_305())
					{
						bVar9 = true;
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
						{
							iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1);
							if (unk_0x765F6FEEFF39224F(iVar2))
							{
								if (unk_0x91D5C8283D19AF49(iVar2, 0))
								{
									iVar10 = unk_0x541D5C57194E73C4(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0)) || unk_0xF3E8C179636ED71E(iVar2)) || ((!unk_0x0C2E237744BA0026(iVar10) && !unk_0x9E374B5F44A76AE2(iVar10)) && !unk_0x86A90EB179092418(iVar10))) || iVar10 == joaat("monster")) || unk_0x17260B4EA0652E1C(iVar2)) || unk_0xC16D1B065E3EEA79(iVar2)) || (unk_0x0281F3C55C2638AC(unk_0x33CD235DF1E6A94E()) && unk_0x1BCDA92AD0A7835B(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (unk_0x4436DC94592033FF(sVar4))
						{
							unk_0x0483D0035D6E46FD(sVar4);
							if (!unk_0xE9CCF312047EBEE0(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_217(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
						{
							if (!unk_0xFAC8F20FBC764F4D() || func_216("WEB_VEH_INV"))
							{
								func_215("WEB_VEH_INV", -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!unk_0xFAC8F20FBC764F4D() || func_216("WEB_VEH_FULL"))
					{
						func_215("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
					{
						iLocal_173 = 0;
						unk_0x0483D0035D6E46FD(sVar4);
						if (unk_0xE9CCF312047EBEE0(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						unk_0xFF2DEA68E2D3602E(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1);
					if (unk_0x765F6FEEFF39224F(iVar2))
					{
						if (unk_0x91D5C8283D19AF49(iVar2, 0))
						{
							iVar12 = unk_0x541D5C57194E73C4(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || unk_0xF3E8C179636ED71E(iVar2)) || ((!unk_0x0C2E237744BA0026(iVar12) && !unk_0x9E374B5F44A76AE2(iVar12)) && !unk_0x86A90EB179092418(iVar12))) || iVar12 == joaat("monster")) || unk_0x17260B4EA0652E1C(iVar2)) || unk_0xC16D1B065E3EEA79(iVar2)) || (unk_0x0281F3C55C2638AC(unk_0x33CD235DF1E6A94E()) && unk_0x1BCDA92AD0A7835B(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_306(unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()), Local_56.f_29.f_68, 90f) || unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && func_305()) && !unk_0x2E9A4AE2A5B4D8E8(unk_0x33CD235DF1E6A94E())) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) && !unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2)) && !func_309()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()) || (unk_0xE9CCF312047EBEE0(sVar4) || !unk_0x4436DC94592033FF(sVar4)))
					{
						if (func_212(iLocal_115, 1))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_303(47, 0);
						func_298(47, 0);
						Local_56.f_112 = unk_0x30B9FCF52BAAEB11(vVar5, "v_garagem_sp");
						if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
						{
							if (!unk_0x5FC25A9F19EB39FA(Local_56.f_112))
							{
								if ((unk_0xE77FA521699F639C() % 10) == 0)
								{
									unk_0xDDF57F769FD85704(Local_56.f_112);
								}
							}
							StringCopy(&Global_33147, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !unk_0xE980BAFD70E8A4B3())
						{
							if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
							{
								iVar13 = func_296(Local_56);
								func_61(&vVar14, iVar13);
								vVar6 = { vVar14 };
								unk_0x1F6A09AE9372AE6C(vVar6, 20f, 0);
							}
							else
							{
								unk_0x1F6A09AE9372AE6C(vVar7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && unk_0xE980BAFD70E8A4B3())
					{
						unk_0x4ABB9EF39DA515D7();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_69(&iLocal_115);
					unk_0xFF2DEA68E2D3602E(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_303(47, 0);
				func_298(47, 0);
				unk_0x3D732B99F6301C4D(8);
				Global_70409.f_577 = 1;
				Global_70409.f_578 = { Local_56.f_29.f_55 };
				iLocal_155 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0xB5FEFF716515EF9E(unk_0x33CD235DF1E6A94E(), 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				unk_0x35675D19812BDF22(false);
				unk_0xDFF589A2149528CE(false);
				unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
					{
						if (func_306(unk_0xC472E34C8FBEC678(iVar2), Local_56.f_29.f_68, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						unk_0x4D5F3407F1F37E28(iVar2, true, true, true, true, true, true, 0, false);
						unk_0xBAE549A63F38DAE8(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0x9FDF63945C690003(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0x40EF19475E844CE3(Local_83.f_86[0 /*6*/], 7f);
						unk_0xBEADAF07D2339505(iVar2, Local_83.f_86[0 /*6*/], 1, false, 0, 1);
						if (iLocal_175 && !unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
						{
							unk_0x3C990C409B3845DE(iVar2, (Local_83.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x3C990C409B3845DE(iVar2, Local_83.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
						{
							unk_0xC3A483C3C1B1F104(unk_0x33CD235DF1E6A94E(), 0, 0, -1);
							unk_0x2B4A2E9ED65D5C93(unk_0x33CD235DF1E6A94E(), 1);
						}
						unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
					}
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
					func_290(1, 1, 1, 0, 0, 0);
					func_289(&(Local_83[1 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 3;
				}
				else
				{
					if (unk_0x765F6FEEFF39224F(iLocal_168) && !unk_0xD62C4419A41F106A(iLocal_168, 0))
					{
						if (unk_0x5A04E3BD0B5E7E49(iLocal_168) && unk_0x9E08E12414BD4476(iLocal_168, 1))
						{
							unk_0x65F544B458249682(&iLocal_168);
						}
					}
					iLocal_168 = unk_0x8918EC905FC8975D();
					if ((((unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x91D5C8283D19AF49(iLocal_168, 0)) && !unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(iLocal_168))) && !unk_0x57D74362A8BD1490(unk_0x541D5C57194E73C4(iLocal_168))) && !unk_0x444D956C7F94526E(unk_0x541D5C57194E73C4(iLocal_168)))
					{
						if (!unk_0x5A04E3BD0B5E7E49(iLocal_168))
						{
							unk_0x0D21E1FDE062ED99(iLocal_168, false, 0);
						}
						if (unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x91D5C8283D19AF49(iLocal_168, 0))
						{
							if (!bVar15)
							{
								if (unk_0xD4B4F68F3449CBEC(iLocal_168, Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = vdist2(unk_0xFBB1F99A825CAB09(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(24);
								if (func_288(&Local_141, 24))
								{
									func_283(&Local_141, func_468());
									if (unk_0x765F6FEEFF39224F(iVar17))
									{
										unk_0x7AC8DF0B83EB4C6B(&iVar17);
									}
								}
								if (Local_56 == 21)
								{
									unk_0xCE04CE961AF41AB9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56 == 22)
								{
									unk_0xCE04CE961AF41AB9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56 == 23)
								{
									unk_0xCE04CE961AF41AB9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0x1B2303F9DC2D90D5(iLocal_168, 1084227584);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					vVar18 = { Local_56.f_29 * Vector(2f, 2f, 2f) + Local_56.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar19 = { Local_56.f_29 * Vector(1f, 1f, 1f) + Local_56.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29, vVar18.x, vVar18.y, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x9EC3B269A34A2BEE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vVar18.x, vVar18.y, Local_56.f_29.f_2, vVar19.x, vVar19.y, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x9EC3B269A34A2BEE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vVar19.x, vVar19.y, Local_56.f_29.f_2, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x9EC3B269A34A2BEE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (unk_0x9EC3B269A34A2BEE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					unk_0xBAE549A63F38DAE8(Local_83.f_73[0 /*4*/], 20f, 0);
					unk_0x9FDF63945C690003(Local_83.f_86[0 /*6*/], 20f, 0);
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), Local_83.f_73[0 /*4*/], 1, false, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), Local_83.f_73[0 /*4*/].f_3);
					iLocal_120 = unk_0x38A6890195DD00D1(Local_83.f_73[0 /*4*/], 0f, 0f, Local_83.f_73[0 /*4*/].f_3, 2);
					unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
					func_290(1, 1, 1, 0, 0, 0);
					func_289(&(Local_83[0 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 4;
				}
				Local_56.f_112 = unk_0x30B9FCF52BAAEB11(vVar5, "v_garagem_sp");
				if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
				{
					if (!unk_0x5FC25A9F19EB39FA(Local_56.f_112))
					{
						unk_0xDDF57F769FD85704(Local_56.f_112);
					}
					StringCopy(&Global_33147, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
					{
						iVar20 = func_296(Local_56);
						func_61(&vVar21, iVar20);
						vVar6 = { vVar21 };
						unk_0x1F6A09AE9372AE6C(vVar6, 20f, 0);
					}
					else
					{
						unk_0x1F6A09AE9372AE6C(vVar7, 20f, 0);
					}
				}
				unk_0x8950ED5730F62EE8(&(Local_131.f_9), 25);
				func_277(198.0043f, -999.7775f, -100f, 50f, 0);
				func_113(Local_56);
				func_113(26);
				func_113(29);
				func_113(32);
				func_113(28);
				func_113(31);
				func_113(34);
				func_113(27);
				func_113(30);
				func_113(33);
				settimera(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!unk_0xE980BAFD70E8A4B3())
				{
				}
				else if (unk_0x4E1190A8D88ABDB7())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
				{
					if (!unk_0x5FC25A9F19EB39FA(Local_56.f_112))
					{
						unk_0xDDF57F769FD85704(Local_56.f_112);
					}
					StringCopy(&Global_33147, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0x30B9FCF52BAAEB11(vVar5, "v_garagem_sp");
				}
				if (func_276())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_110) && unk_0xFAA5C555ED0CEC9B(Local_56.f_110))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_110))
					{
						bVar22 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (unk_0x117DAF3BF7232886(Local_56.f_111) && unk_0xFAA5C555ED0CEC9B(Local_56.f_111))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_111))
					{
						bVar22 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xDB4C79A9697E6A55(iLocal_120))
				{
					fVar23 = unk_0x4EDDCE9AAE0FC976(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					unk_0x7EDEAEAED85BEE4F(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0xBB5E373390A5F824())
				{
					iVar24 = unk_0x8CCC0A0504C52531();
					unk_0x0F8EAEEC97DDBCB3(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x1819081E2D6040CB(iVar24, "hold", (2250f / 1000f));
					func_290(0, 1, 1, 0, 0, 0);
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
					if (unk_0x117DAF3BF7232886(Local_56.f_110))
					{
						unk_0x189377BFBDC9127F(Local_56.f_110, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
					}
					if (unk_0x117DAF3BF7232886(Local_56.f_111))
					{
						unk_0x189377BFBDC9127F(Local_56.f_111, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_178))
					{
						unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
						unk_0xF70578F5CD9822CB(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
					unk_0x3D732B99F6301C4D(8);
					if (unk_0xDB4C79A9697E6A55(iLocal_120))
					{
						unk_0xC94F9717AA77D4D0(iLocal_120);
					}
					iLocal_120 = -1;
					unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 194.5394f, -1026.32f, -100f, 1, false, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 334.1665f);
					unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					settimera(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_275(Local_56);
				if (unk_0xBB5E373390A5F824() && timera() > 2250)
				{
					unk_0xFF2DEA68E2D3602E(sVar4);
					func_274();
					if (unk_0xE980BAFD70E8A4B3())
					{
						unk_0x4ABB9EF39DA515D7();
					}
					unk_0xACCDA78123DB57B0(800);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
					unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
					settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_275(Local_56);
				bVar25 = true;
				if (!unk_0xE980BAFD70E8A4B3())
				{
				}
				else if (unk_0x4E1190A8D88ABDB7())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
				{
					if (!unk_0x5FC25A9F19EB39FA(Local_56.f_112))
					{
						unk_0xDDF57F769FD85704(Local_56.f_112);
					}
					StringCopy(&Global_33147, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0x30B9FCF52BAAEB11(vVar5, "v_garagem_sp");
				}
				if (func_276())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_110) && unk_0xFAA5C555ED0CEC9B(Local_56.f_110))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_110))
					{
						bVar25 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (unk_0x117DAF3BF7232886(Local_56.f_111) && unk_0xFAA5C555ED0CEC9B(Local_56.f_111))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_111))
					{
						bVar25 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_266(unk_0x33CD235DF1E6A94E(), Local_83.f_86[0 /*6*/], Local_83.f_66[0 /*3*/], ((Local_83[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_274();
					settimera(0);
					unk_0x7EDEAEAED85BEE4F(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_275(Local_56);
				if (IntToFloat(timera()) <= (Local_83.f_61[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_274();
					func_290(0, 1, 1, 0, 0, 0);
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
					if (unk_0x117DAF3BF7232886(Local_56.f_110))
					{
						unk_0x189377BFBDC9127F(Local_56.f_110, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
					}
					if (unk_0x117DAF3BF7232886(Local_56.f_111))
					{
						unk_0x189377BFBDC9127F(Local_56.f_111, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_178))
					{
						unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
						unk_0xF70578F5CD9822CB(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
					unk_0x3D732B99F6301C4D(8);
					if (unk_0xE980BAFD70E8A4B3())
					{
						unk_0x4ABB9EF39DA515D7();
					}
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
						{
							iVar28 = func_296(Local_56);
							func_61(&Var29, iVar28);
							unk_0xBEADAF07D2339505(iVar2, Var29, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iVar2, Var29.f_3);
							unk_0x65EE1E8C987CD1DB(iVar2, 1);
							unk_0x9FABD0AB045A5D6E(iVar2, false, true, 0);
							unk_0x26E0FFDB1AD22AC5(iVar2, 4);
							unk_0xA953EEBEEE013DEB(iVar2, 1, 0);
							unk_0xA953EEBEEE013DEB(iVar2, 0, 0);
							unk_0xF28F45F667D62218(iVar2, false);
							unk_0x4D5F3407F1F37E28(iVar2, false, false, false, false, false, false, 0, false);
							unk_0x0FF06FD8DEB3AB01(unk_0x33CD235DF1E6A94E(), iVar2, 0);
							unk_0xF70578F5CD9822CB(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_59 = 2;
							func_32(iVar2, &Var30);
							func_114(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_265(iVar2);
						}
						unk_0xC7E6A5D90DED6E0B(0f);
						unk_0xD6EDA274D82E8678(0f, 1065353216);
					}
					iVar31 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((unk_0x765F6FEEFF39224F(uVar0[iVar32]) && !unk_0xBC2FC12AD0FBF72E(uVar0[iVar32])) && unk_0x731F434EAFE6E9FE(uVar0[iVar32], unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A())))
						{
							unk_0xC7C47D4054903839(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar32++;
					}
					settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0xACCDA78123DB57B0(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (timera() < 7000 || !Global_106565.f_32743.f_4800)
				{
					if (!Global_106565.f_32743.f_4800)
					{
						if (iLocal_156 == 0)
						{
							func_215("CAR_GAR_05", -1);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (timera() >= 7000)
							{
								settimera(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_215("CAR_GAR_06", -1);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (timera() >= 7000)
							{
								settimera(0);
								Global_106565.f_32743.f_4800 = 1;
							}
						}
					}
					else
					{
						func_215("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_106565.f_32743.f_4800 = 1;
				}
				iVar33 = 0;
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
					{
						if (unk_0x7AC4B5350A148805(iVar2) || unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
						{
							if (!(unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E())))
							{
								if ((((unk_0x2EEE89525F08C860(0, 71) != 0f || unk_0x833B1A3D9F713E03(0, 71)) || unk_0xF1CDE9FD207C4CD8(0, 71)) || unk_0x5EBE50D55314CEAD(0, 71)) || unk_0x1CAA347A3C84C225(0, 71))
								{
									iVar33 = 1;
								}
								if ((((unk_0x2EEE89525F08C860(0, 72) != 0f || unk_0x833B1A3D9F713E03(0, 72)) || unk_0xF1CDE9FD207C4CD8(0, 72)) || unk_0x5EBE50D55314CEAD(0, 72)) || unk_0x1CAA347A3C84C225(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x0483D0035D6E46FD(sVar4);
					if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_306(unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							func_217(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (func_212(iLocal_115, 1))
							{
								func_69(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_264())
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || iLocal_159)
					{
						settimera(0);
						unk_0x1F6A09AE9372AE6C(Local_83.f_73[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (unk_0xE9CCF312047EBEE0(sVar4))
					{
						sLocal_176 = "";
						switch (unk_0x9EC3B269A34A2BEE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = unk_0x38A6890195DD00D1(Local_83.f_73[1 /*4*/], 0f, 0f, Local_83.f_73[1 /*4*/].f_3, 2);
						unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
						func_290(1, 1, 1, 0, 0, 0);
						func_289(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
						unk_0x1F6A09AE9372AE6C(Local_83.f_73[2 /*4*/], 20f, 0);
						settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!unk_0x4436DC94592033FF(sVar4))
					{
						unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), Local_83.f_73[1 /*4*/], 1, false, 0, 1);
						unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), Local_83.f_73[1 /*4*/].f_3);
						func_290(1, 1, 1, 0, 0, 0);
						func_289(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
						unk_0x1F6A09AE9372AE6C(Local_83.f_73[2 /*4*/], 20f, 0);
						settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!unk_0xE980BAFD70E8A4B3())
				{
				}
				else if (unk_0x4E1190A8D88ABDB7())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_276())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_110) && unk_0xFAA5C555ED0CEC9B(Local_56.f_110))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_110))
					{
						bVar34 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (unk_0x117DAF3BF7232886(Local_56.f_111) && unk_0xFAA5C555ED0CEC9B(Local_56.f_111))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_111))
					{
						bVar34 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0xDB4C79A9697E6A55(iLocal_120))
				{
					fVar35 = unk_0x4EDDCE9AAE0FC976(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0x7EDEAEAED85BEE4F(800);
					settimera(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x3FD9339AA95E323F(0, 75, 1);
				if (timera() > 500)
				{
					iVar36 = func_263();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_59 = 2;
						func_114(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_116(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							func_474(iVar36, 0);
							func_116(iVar36);
						}
					}
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					unk_0xB5FEFF716515EF9E(unk_0x33CD235DF1E6A94E(), 0, 0);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
					unk_0xFF2DEA68E2D3602E(sVar4);
					unk_0x7EDEAEAED85BEE4F(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0xBB5E373390A5F824())
				{
					iVar38 = unk_0x8CCC0A0504C52531();
					unk_0x0F8EAEEC97DDBCB3(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x1819081E2D6040CB(iVar38, "hold", (2250f / 1000f));
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
					if (unk_0x117DAF3BF7232886(Local_56.f_110))
					{
						unk_0x189377BFBDC9127F(Local_56.f_110, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
					}
					if (unk_0x117DAF3BF7232886(Local_56.f_111))
					{
						unk_0x189377BFBDC9127F(Local_56.f_111, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_178))
					{
						unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
						unk_0xF70578F5CD9822CB(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
					unk_0x3D732B99F6301C4D(8);
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (!iLocal_159)
						{
							iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
							if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
							{
								unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
								unk_0xBEADAF07D2339505(iVar2, Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iVar2, Local_56.f_29.f_77[1]);
								unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0xDB4C79A9697E6A55(iLocal_120))
						{
							unk_0xC94F9717AA77D4D0(iLocal_120);
						}
						iLocal_120 = -1;
						unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
						unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
						unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_77[1]);
					}
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					settimera(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0xBB5E373390A5F824() && timera() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						unk_0xB815670C37E03CDE(iLocal_160);
						if (unk_0x5D98D654CDC2165A(iLocal_160))
						{
							iVar40 = unk_0xC651C43AB13A15E5(iLocal_160, Local_56.f_29.f_70[0 /*3*/], Local_56.f_29.f_77[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								unk_0x40DFA7AAEFC8F34C(iVar40, 0);
							}
							if (unk_0x765F6FEEFF39224F(iVar40) && unk_0x91D5C8283D19AF49(iVar40, 0))
							{
								unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iVar40, -1);
								unk_0x62B7B895D641DC81(iVar40, 0f);
								unk_0x71CA80D41E1338B4(iLocal_160);
								if (func_117(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											unk_0x40DFA7AAEFC8F34C(iVar40, iLocal_111);
											break;
										}
								}
								unk_0x65F544B458249682(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!unk_0xE980BAFD70E8A4B3())
					{
					}
					else if (unk_0x4E1190A8D88ABDB7())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x91D5C8283D19AF49(iLocal_168, 0))
						{
							iVar41 = func_49(24);
							if (func_288(&Local_141, 24))
							{
								func_283(&Local_141, func_468());
								if (unk_0x765F6FEEFF39224F(iVar41))
								{
									unk_0x7AC8DF0B83EB4C6B(&iVar41);
								}
							}
							if (Local_56 == 21)
							{
								unk_0xCE04CE961AF41AB9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								unk_0xBEADAF07D2339505(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iLocal_168, 154.4846f);
								func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56 == 22)
							{
								unk_0xCE04CE961AF41AB9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								unk_0xBEADAF07D2339505(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iLocal_168, 319.6985f);
								func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56 == 23)
							{
								unk_0xCE04CE961AF41AB9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								unk_0xBEADAF07D2339505(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iLocal_168, 270.8741f);
								func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0x1B2303F9DC2D90D5(iLocal_168, 1084227584);
						}
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
							if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
							{
								unk_0xBEADAF07D2339505(iVar2, Local_83.f_66[1 /*3*/], 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iVar2, Local_56.f_29.f_77[0]);
								unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									unk_0x26D5EA44545890ED(iVar2, false);
								}
								else
								{
									unk_0x26D5EA44545890ED(iVar2, true);
								}
								if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
								{
									unk_0xC3A483C3C1B1F104(unk_0x33CD235DF1E6A94E(), 0, 0, -1);
									unk_0x2B4A2E9ED65D5C93(unk_0x33CD235DF1E6A94E(), 1);
								}
								unk_0xF28F45F667D62218(iVar2, true);
								func_232(func_468(), &iVar2, 3, 1);
							}
							unk_0xACCDA78123DB57B0(800);
							func_290(1, 1, 1, 0, 0, 0);
							func_289(&(Local_83[3 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							unk_0xFF2DEA68E2D3602E(sVar4);
							func_274();
							unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
							if (unk_0x117DAF3BF7232886(Local_56.f_110))
							{
								unk_0x189377BFBDC9127F(Local_56.f_110, false);
								unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
							}
							if (unk_0x117DAF3BF7232886(Local_56.f_111))
							{
								unk_0x189377BFBDC9127F(Local_56.f_111, false);
								unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
							}
							if (unk_0x765F6FEEFF39224F(iLocal_178))
							{
								unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
								unk_0xF70578F5CD9822CB(iLocal_178, false);
								iLocal_178 = 0;
							}
							unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
							unk_0x3D732B99F6301C4D(8);
							unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
							unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
							unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_77[1]);
							unk_0xACCDA78123DB57B0(800);
							settimera(0);
							func_277(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
						}
						unk_0x35675D19812BDF22(false);
						unk_0xDFF589A2149528CE(false);
						settimera(0);
						unk_0xC7E6A5D90DED6E0B(0f);
						unk_0xD6EDA274D82E8678(0f, 1065353216);
						iVar42 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((unk_0x765F6FEEFF39224F(uVar0[iVar43]) && !unk_0xBC2FC12AD0FBF72E(uVar0[iVar43])) && unk_0x731F434EAFE6E9FE(uVar0[iVar43], unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A())))
							{
								if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
								{
									iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
									if ((unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0)) && unk_0xC92AA0DBDDDE8BB8(iVar2) > iVar43)
									{
										unk_0x094626C0798AE1F8(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									unk_0xC7C47D4054903839(uVar0[iVar43], Local_56.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar43++;
						}
						unk_0x3D732B99F6301C4D(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!unk_0xE980BAFD70E8A4B3())
				{
				}
				else if (unk_0x4E1190A8D88ABDB7())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_276())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_110) && unk_0xFAA5C555ED0CEC9B(Local_56.f_110))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_110))
					{
						bVar44 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (unk_0x117DAF3BF7232886(Local_56.f_111) && unk_0xFAA5C555ED0CEC9B(Local_56.f_111))
				{
					if (unk_0x6010B3CAC53496C3(Local_56.f_111))
					{
						bVar44 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					func_266(unk_0x33CD235DF1E6A94E(), Local_83.f_86[1 /*6*/], Local_83.f_66[1 /*3*/], ((Local_83[3 /*15*/].f_14 * 1000f) - 500f), Local_83.f_73[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_231(unk_0x33CD235DF1E6A94E(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_277(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					settimera(0);
					Local_56.f_3 = 16;
				}
				else
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(timera()) <= (Local_83.f_61[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
				{
					unk_0x2F7BF094F3C2A257(Local_56.f_112);
				}
				StringCopy(&Global_33147, "", 32);
				if (unk_0xE980BAFD70E8A4B3())
				{
					unk_0x4ABB9EF39DA515D7();
				}
				func_230(47, 1);
				func_228(47, 1);
				Global_70409.f_577 = 0;
				if (unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
				{
					unk_0xACCDA78123DB57B0(250);
				}
				settimera(0);
				unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
				if (unk_0x117DAF3BF7232886(Local_56.f_110))
				{
					unk_0x189377BFBDC9127F(Local_56.f_110, false);
					unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_111))
				{
					unk_0x189377BFBDC9127F(Local_56.f_111, false);
					unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_178))
				{
					unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
					unk_0xF70578F5CD9822CB(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
					{
						unk_0xBEADAF07D2339505(iVar2, Local_83.f_73[2 /*4*/], 1, false, 0, 1);
						unk_0x3C990C409B3845DE(iVar2, Local_83.f_73[2 /*4*/].f_3);
						unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
						unk_0xC7E6A5D90DED6E0B(0f);
						unk_0xD6EDA274D82E8678(0f, 1065353216);
					}
				}
				unk_0x35675D19812BDF22(true);
				unk_0xDFF589A2149528CE(true);
				func_290(0, 1, 1, 0, 0, 0);
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				if (iLocal_155 > 0)
				{
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), iLocal_155, 0);
					unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				}
				if (((unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x5A04E3BD0B5E7E49(iLocal_168)) && unk_0x9E08E12414BD4476(iLocal_168, 0)) && iLocal_168 != func_49(24))
				{
					unk_0x65F544B458249682(&iLocal_168);
				}
				unk_0xCE689A8E8C42ED78(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x73DA1542B2F0C458())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_70409.f_577)
		{
			func_230(47, 1);
			func_228(47, 1);
			Global_70409.f_577 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_70409.f_577)
	{
		unk_0xB4D430A4D2FDC831();
		func_227();
		func_76(0);
		unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
		unk_0x144904D2EAA84341(2, 202);
		unk_0x3FD9339AA95E323F(0, 37, 1);
		unk_0x3FD9339AA95E323F(0, 157, 1);
		unk_0x3FD9339AA95E323F(0, 158, 1);
		unk_0x3FD9339AA95E323F(0, 159, 1);
		unk_0x3FD9339AA95E323F(0, 160, 1);
		unk_0x3FD9339AA95E323F(0, 161, 1);
		unk_0x3FD9339AA95E323F(0, 162, 1);
		unk_0x3FD9339AA95E323F(0, 163, 1);
		unk_0x3FD9339AA95E323F(0, 164, 1);
		unk_0x3FD9339AA95E323F(0, 165, 1);
		unk_0x3FD9339AA95E323F(0, 14, 1);
		unk_0x3FD9339AA95E323F(0, 15, 1);
		unk_0x3FD9339AA95E323F(0, 53, 1);
		unk_0x3FD9339AA95E323F(0, 54, 1);
		unk_0x3FD9339AA95E323F(0, 140, 1);
		unk_0x3FD9339AA95E323F(0, 141, 1);
		unk_0x3FD9339AA95E323F(0, 142, 1);
		unk_0x3FD9339AA95E323F(0, 143, 1);
		unk_0x3FD9339AA95E323F(0, 143, 1);
		unk_0x3FD9339AA95E323F(0, 47, 1);
		unk_0x3FD9339AA95E323F(0, 38, 1);
		unk_0x3FD9339AA95E323F(0, 22, 1);
		unk_0x3FD9339AA95E323F(0, 102, 1);
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
		unk_0x3FD9339AA95E323F(0, 92, 1);
		unk_0x3FD9339AA95E323F(0, 99, 1);
		unk_0x3FD9339AA95E323F(0, 115, 1);
		unk_0x3FD9339AA95E323F(0, 46, 1);
		unk_0x3FD9339AA95E323F(0, 25, 1);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			if (!unk_0x786AF4A44E1B5B4B(&cLocal_165))
			{
				if ((((func_216("WEB_VEH_INV") || func_216("WEB_VEH_FULL")) || func_216("CAR_GAR_05")) || func_216("CAR_GAR_06")) || func_216("CAR_GAR_EXIT"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_227()
{
	Global_17272.f_6 = 1;
}

void func_228(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_32202[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_32202[Var0.f_1]), Var0);
	}
}

struct<2> func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_230(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_32194[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_32194[Var0.f_1]), Var0);
	}
}

float func_231(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vParam1, bParam2);
}

void func_232(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x765F6FEEFF39224F(*iParam1)) && unk_0x91D5C8283D19AF49(*iParam1, 0))
	{
		if (iParam2 > Global_106565.f_2357.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0xCD2E94F6C3101AFC(*iParam1) != 0)
		{
			unk_0x520614EF43727019(*iParam1, 0);
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x541D5C57194E73C4(*iParam1);
		if (unk_0x13D6E1E301794440(*iParam1, &iVar1))
		{
			Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x541D5C57194E73C4(iVar1);
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x8FE1E440C51947F5(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xE80842D7B53F8525(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x34B1602009421B58(*iParam1, 1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x34B1602009421B58(*iParam1, 2);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x34B1602009421B58(*iParam1, 3);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x34B1602009421B58(*iParam1, 4);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x34B1602009421B58(*iParam1, 5);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x34B1602009421B58(*iParam1, 6);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x34B1602009421B58(*iParam1, 7);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x34B1602009421B58(*iParam1, 8);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x34B1602009421B58(*iParam1, 9);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x34B1602009421B58(*iParam1, 10);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x34B1602009421B58(*iParam1, 11);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x34B1602009421B58(*iParam1, 12);
		if (unk_0x8D9FD90A001D447C(*iParam1, 0))
		{
			iVar2 = unk_0xDFEA91A83C472035(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xDDB55BEB9D76717D();
		StringCopy(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x00D614EBCFFD919D(*iParam1), 16);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x4FD199DD0B583F5C(*iParam1);
		unk_0x344F2893FA037279(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xEB9780F1DB69CCB5(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xBA1F4FDFE2E12FFE(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xEEBF939BC404D2BE(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x362EE6C496FA3D80(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xE84981C3FDDC67C7(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x6598BA4640D7E61A(*iParam1);
		unk_0x425E187882F60326(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 2))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 3))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 0))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 1))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_106565.f_2357.f_539.f_4317[iParam0] = 10;
		if (unk_0x7BF2203BA17719C8(*iParam1) >= 0 && func_235(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_106565.f_20112[iParam0 /*43*/].f_40 = 1;
				Global_106565.f_20112[iParam0 /*43*/] = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_106565.f_20112[iParam0 /*43*/].f_3 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_106565.f_20112[iParam0 /*43*/].f_4 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_106565.f_20112[iParam0 /*43*/].f_5 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_106565.f_20112[iParam0 /*43*/].f_6 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_106565.f_20112[iParam0 /*43*/].f_10 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_106565.f_20112[iParam0 /*43*/].f_16 = !Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_106565.f_20112[iParam0 /*43*/].f_19 = { Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_106565.f_20112[iParam0 /*43*/].f_23 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_106565.f_20112[iParam0 /*43*/].f_7 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_106565.f_20112[iParam0 /*43*/].f_8 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_106565.f_20112[iParam0 /*43*/].f_9 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_106565.f_20112[iParam0 /*43*/].f_11 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_106565.f_20112[iParam0 /*43*/].f_12 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_106565.f_20112[iParam0 /*43*/].f_13 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_106565.f_20112[iParam0 /*43*/].f_14 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_106565.f_20112[iParam0 /*43*/].f_15 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_106565.f_20112[iParam0 /*43*/].f_18 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_106565.f_20112[iParam0 /*43*/].f_17 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_106565.f_20112[iParam0 /*43*/].f_24 = unk_0x3DE306309922F8D1(*iParam1, 11) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_25 = unk_0x3DE306309922F8D1(*iParam1, 12) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_26 = unk_0x3DE306309922F8D1(*iParam1, 4) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_27 = unk_0x3DE306309922F8D1(*iParam1, 23) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_28 = unk_0x3DE306309922F8D1(*iParam1, 14) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_29 = unk_0x3DE306309922F8D1(*iParam1, 16) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_30 = unk_0x3DE306309922F8D1(*iParam1, 15) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_32 = unk_0xBBCEC7EB03B44376(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[0] = unk_0xA98B95F4DE09F76B(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[1] = unk_0xDD86272C593A9D9C(*iParam1, 14, 0);
				Global_106565.f_20112[iParam0 /*43*/].f_33[2] = unk_0xDD86272C593A9D9C(*iParam1, 14, 1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[3] = unk_0xDD86272C593A9D9C(*iParam1, 14, 2);
				Global_106565.f_20112[iParam0 /*43*/].f_33[4] = unk_0xDD86272C593A9D9C(*iParam1, 14, 3);
				Global_106565.f_20112[iParam0 /*43*/].f_39 = unk_0xA6EEC7520A5DC1B1(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_31 = func_234(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[0] = unk_0xAEED1B983783F3B3(*iParam1);
				unk_0xDB9A1E6F325ED5F3(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_233(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_106565.f_20112[iParam0 /*43*/].f_1));
				unk_0xA60926B1795990F3(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_233(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_106565.f_20112[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_233(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_141(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0x7BF2203BA17719C8(iParam0) >= 0)
	{
		if (unk_0xA6EEC7520A5DC1B1(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 0)
		{
			if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_235(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xBB8F0B8D18FF4982(unk_0x541D5C57194E73C4(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	if ((!func_261(iVar0, bParam1, uParam2) && !func_260(unk_0x95B959F18401C09A())) && !func_244(iParam0))
	{
		return 0;
	}
	if (func_260(unk_0x95B959F18401C09A()))
	{
		if (func_243(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_242(unk_0x95B959F18401C09A()) && (unk_0x097E7778E3E162E8(iVar0) || unk_0x57D74362A8BD1490(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0xF3E8C179636ED71E(iParam0) && !func_240(iParam0)) && !bVar1) && !(func_239(unk_0x541D5C57194E73C4(iParam0)) && func_236(unk_0x95B959F18401C09A())))
	{
		switch (unk_0x541D5C57194E73C4(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		if ((func_62(iParam0) && unk_0x541D5C57194E73C4(iParam0) != joaat("sentinel2")) && unk_0x541D5C57194E73C4(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
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
		case 79:
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
	}
	return -1;
}

int func_238(int iParam0, bool bParam1, bool bParam2)
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

int func_239(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)
{
	switch (unk_0x541D5C57194E73C4(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_241(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (func_259(unk_0x95B959F18401C09A()) || func_258(unk_0x95B959F18401C09A()))
	{
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	if ((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return 0;
	}
	if (func_248(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA0EDFFB6CF5B314A(iParam0, "Player_Vehicle"))
	{
		if (unk_0xE48FAA8A938257C9(iParam0, "Player_Vehicle") == unk_0x771810413D71C060(unk_0x95B959F18401C09A()))
		{
			if (func_246(iParam0))
			{
				return 1;
			}
			switch (unk_0x541D5C57194E73C4(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_246(int iParam0)
{
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (func_247(unk_0x541D5C57194E73C4(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_248(int iParam0, bool bParam1)
{
	switch (unk_0x541D5C57194E73C4(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_250(unk_0x541D5C57194E73C4(iParam0), 0))
			{
				if (Global_2528542.f_292 == iParam0)
				{
					return 1;
				}
				else if (func_249(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437364.f_627[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_257(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_256();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14096)
			{
				return func_255();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14097)
			{
				return func_255();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14095)
			{
				return func_255();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14098)
			{
				return func_255();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14100)
			{
				return func_255();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_254();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18543)
			{
				return func_253();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18545)
			{
				return func_253();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18549)
			{
				return func_253();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18546)
			{
				return func_253();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18553)
			{
				return func_253();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18551)
			{
				return func_253();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18556)
			{
				return func_253();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20499)
			{
				return func_252();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20500)
			{
				return func_252();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_251();
			break;
		
		case joaat("glendale"):
			return func_251();
			break;
		
		case -2096690334:
			return func_251();
			break;
		
		case 931280609:
			return func_251();
			break;
		
		case joaat("gargoyle"):
			return func_251();
			break;
		
		case joaat("dominator"):
			return func_251();
			break;
		
		case joaat("dominator2"):
			return func_251();
			break;
		
		case 444994115:
			return func_251();
			break;
		
		case 1637620610:
			return func_251();
			break;
		
		case -755532233:
			return func_251();
			break;
		
		case -27326686:
			return func_251();
			break;
		
		case -1812949672:
			return func_251();
			break;
		
		case -1374500452:
			return func_251();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_251();
			break;
	}
	return 0;
}

bool func_251()
{
	return unk_0xE9D7B652961D4AA3(1927191088);
}

bool func_252()
{
	return unk_0xE9D7B652961D4AA3(2067165443);
}

bool func_253()
{
	return unk_0xE9D7B652961D4AA3(-957277403);
}

bool func_254()
{
	return unk_0xE9D7B652961D4AA3(210122941);
}

bool func_255()
{
	return unk_0xE9D7B652961D4AA3(-1894522408);
}

bool func_256()
{
	return unk_0xE9D7B652961D4AA3(1630677557);
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14097)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14098)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14100)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14099)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18543)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18545)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18549)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18553)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18556)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20499)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20500)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_258(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_150())
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_150())
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_237(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_242(unk_0x95B959F18401C09A()) && (unk_0x097E7778E3E162E8(iParam0) || unk_0x57D74362A8BD1490(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((!unk_0x0C2E237744BA0026(iParam0) && !unk_0x9E374B5F44A76AE2(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_262(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_263()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			if (iVar0 == Global_70409.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_70409.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_70409.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_70409.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_70409.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_70409.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_70409.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_70409.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_70409.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_70409.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_70409.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_70409.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_264()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_265(int iParam0)
{
	if ((unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0)) && iParam0 == Global_71314)
	{
		Global_106565.f_32743.f_5588 = 0;
		Global_71314 = 0;
	}
}

int func_266(int iParam0, struct<4> Param1, var uParam2, var uParam3, vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { Param1 };
	vVar1 = { Param1.f_3 };
	vVar2 = { vParam4 };
	vVar3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = unk_0xF2C96862595654B4(iParam0, 0);
		iLocal_178 = iVar4;
		unk_0x65EE1E8C987CD1DB(iLocal_178, 1);
		unk_0xD303E20CB0AE4AD0(iLocal_178, 1);
		unk_0x1B2303F9DC2D90D5(iLocal_178, 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_178, true, true, 0);
		if (unk_0xA2F0EA9AB6142D97(iParam0))
		{
			unk_0xC3A483C3C1B1F104(iParam0, 0, 0, -1);
			unk_0x2B4A2E9ED65D5C93(iParam0, 1);
		}
		vVar5 = { unk_0xFBB1F99A825CAB09(iLocal_178, true) };
		fLocal_179 = (vVar5.z - vVar0.z);
		unk_0xBEADAF07D2339505(iLocal_178, vVar0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (unk_0x91D5C8283D19AF49(iLocal_178, 0))
		{
			unk_0x26E0FFDB1AD22AC5(iLocal_178, 3);
		}
		iLocal_180 = unk_0xE3903F59E2F22150();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_178) && unk_0x91D5C8283D19AF49(iLocal_178, 0))
		{
			fVar6 = to_float(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_273(to_float(unk_0xE3903F59E2F22150()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_272(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_271(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_269(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			unk_0x3FD9339AA95E323F(0, 72, 1);
			unk_0xC7C47D4054903839(iLocal_178, func_267(vVar0 + Vector(fLocal_179, 0f, 0f), vVar2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
			if (iLocal_175 && !unk_0xA2F0EA9AB6142D97(iParam0))
			{
				unk_0x1C8705F667F673EA(iLocal_178, func_267((0f - vVar1.x), (0f - vVar1.y), (vVar1.z + 180f), (0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), fVar6, fVar7, fVar8), 2, 1);
			}
			else
			{
				if (!unk_0xBC2FC12AD0FBF72E(iParam0))
				{
					if (unk_0xA2F0EA9AB6142D97(iParam0))
					{
						unk_0x41E36A540F8F323F(iParam0, 236, true);
						unk_0x41E36A540F8F323F(iParam0, 309, true);
					}
				}
				unk_0x1C8705F667F673EA(iLocal_178, func_267(vVar1, vVar3, fVar6, fVar7, fVar8), 2, 1);
			}
			unk_0x23298AB8A7D0F403(iLocal_178, false, 0);
			unk_0xF70578F5CD9822CB(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (to_float(unk_0xE3903F59E2F22150()) > (to_float(iLocal_180) + fParam5) && to_float(unk_0xE3903F59E2F22150()) > ((to_float(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		unk_0x41E36A540F8F323F(iParam0, 236, false);
		unk_0x41E36A540F8F323F(iParam0, 309, false);
		if (unk_0x765F6FEEFF39224F(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				unk_0xBEADAF07D2339505(iLocal_178, Param6, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(iLocal_178, Param6.f_3);
				unk_0x1B2303F9DC2D90D5(iLocal_178, 1084227584);
			}
			unk_0x23298AB8A7D0F403(iLocal_178, true, 0);
			unk_0xF70578F5CD9822CB(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (unk_0xA2F0EA9AB6142D97(iParam0))
		{
			unk_0x50E893C437D3AC10(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_267(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4)
{
	return func_268(vParam0.x, vParam1.x, fParam2, fParam3, fParam4), func_268(vParam0.y, vParam1.y, fParam2, fParam3, fParam4), func_268(vParam0.z, vParam1.z, fParam2, fParam3, fParam4);
}

float func_268(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_269(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = sin(func_270(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_270(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_271(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - cos(func_270(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_272(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - cos(func_270((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_273(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_274()
{
	Global_70409.f_553 = 1;
	Global_70409.f_554 = 0;
}

void func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_106565.f_32743.f_69[iVar1 /*78*/].f_66;
		if (iLocal_49[iVar2] != 0)
		{
			if (!unk_0x0E4018692D92041D(uLocal_48[iVar2], 2))
			{
				unk_0xB815670C37E03CDE(iLocal_49[iVar2]);
				unk_0x8950ED5730F62EE8(&(uLocal_48[iVar2]), 2);
				func_472(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_276()
{
	return !Global_70409.f_553;
}

void func_277(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x16E00F066AFFEA0D(vParam0, Global_70409.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_278(iVar0);
			}
		}
		iVar0++;
	}
}

void func_278(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x91D5C8283D19AF49(Global_70409.f_139[iParam0], 0))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
				unk_0x7AC8DF0B83EB4C6B(&(Global_70409.f_139[iParam0]));
			}
		}
		Global_70409[iParam0] = 1;
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_279(0, Global_70409.f_555[0 /*21*/].f_12) || !func_279(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_115(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_474(iParam0, 0);
		}
	}
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_280(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_280(var uParam0)
{
	return *uParam0;
}

void func_281(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x765F6FEEFF39224F(Global_70409.f_484[25]) && unk_0x91D5C8283D19AF49(Global_70409.f_484[25], 0))
			{
				if (Global_70409.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0xF3E8C179636ED71E(iParam0) || unk_0x541D5C57194E73C4(iParam0) == joaat("bus")) || unk_0x541D5C57194E73C4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_282(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			fParam2 = unk_0xC472E34C8FBEC678(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) != joaat("vehicle_gen_controller"))
			{
				Global_71397 = unk_0x36163153849DFDA1(unk_0xD178EF744F20B712());
			}
		}
		func_114(iParam3, &Var0, vParam1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_282(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_116(iParam0);
	func_474(iParam0, 0);
}

int func_283(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x765F6FEEFF39224F(Global_71315))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_279(0, iParam1))
	{
		Global_106565.f_32743.f_5592[iVar0] = 0;
	}
	else if (!func_279(1, iParam1))
	{
		Global_106565.f_32743.f_5592[iVar0] = 1;
	}
	func_284(iParam1, unk_0x093916B4639501B8(uParam0->f_66));
	func_115(uParam0, &(Global_106565.f_32743.f_5038[iVar0 /*157*/][Global_106565.f_32743.f_5592[iVar0] /*78*/]));
	Global_106565.f_32743.f_5592[iVar0]++;
	if (Global_106565.f_32743.f_5592[iVar0] >= func_280(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		Global_106565.f_32743.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_93086[iVar0 /*98*/] == uParam0->f_66 && unk_0xCE3CFF625BEBAA04(&(Global_93086[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_93086[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_284(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_106565.f_32743.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_285("IMPOUND_HELPM", sParam1, 2, unk_0x9EC3B269A34A2BEE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_285("IMPOUND_HELPF", sParam1, 2, unk_0x9EC3B269A34A2BEE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_285("IMPOUND_HELPT", sParam1, 2, unk_0x9EC3B269A34A2BEE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_106565.f_32743.f_5596[iParam0] = 1;
	}
}

void func_285(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_286(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_286(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCE3CFF625BEBAA04(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (unk_0xE3903F59E2F22150() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((unk_0xE3903F59E2F22150() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_287();
	}
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_288(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_61(&(Global_70409.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_115(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_289(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x117DAF3BF7232886(*uParam1))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam1, 0);
	}
	if (unk_0x117DAF3BF7232886(*uParam2))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam2, 0);
	}
	*uParam1 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", false);
	if (unk_0x117DAF3BF7232886(*uParam1) && unk_0x117DAF3BF7232886(*uParam2))
	{
		unk_0xFA3130C046AC45A7(*uParam1, *uParam0);
		unk_0x833A05A7AD82EA44(*uParam1, uParam0->f_3, 2);
		unk_0x63B608CD1957089E(*uParam1, uParam0->f_12);
		unk_0xFA3130C046AC45A7(*uParam2, uParam0->f_6);
		unk_0x833A05A7AD82EA44(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x63B608CD1957089E(*uParam2, uParam0->f_12);
		unk_0x083F68B89E3EA476(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x083F68B89E3EA476(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x8EB023915CEEDB99(*uParam2, *uParam1, round((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x189377BFBDC9127F(*uParam1, true);
		}
		unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_290(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_295(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_78())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_294(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_295(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_294(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_292(unk_0x95B959F18401C09A())) && !func_92(unk_0x95B959F18401C09A(), 0)) && !func_291()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_292(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_291()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

int func_292(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return 1;
	}
	if (func_293())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_293()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_294(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_295(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

int func_296(int iParam0)
{
	func_61(&(Global_70409.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_70409.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(26))
			{
				return 26;
			}
			if (!func_297(29))
			{
				return 29;
			}
			if (!func_297(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_70409.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(27))
			{
				return 27;
			}
			if (!func_297(30))
			{
				return 30;
			}
			if (!func_297(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_70409.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(28))
			{
				return 28;
			}
			if (!func_297(31))
			{
				return 31;
			}
			if (!func_297(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_297(int iParam0)
{
	return func_67(iParam0, 0);
}

void func_298(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_300(iParam0, &iVar1);
	if (!unk_0xCE3CFF625BEBAA04("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x7CD49339861D878A(iVar1))
			{
				return;
			}
			if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iVar1)
			{
				func_228(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x7CD49339861D878A(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_228(iParam0, 0);
			}
		}
		unk_0x9A046CAF0798327B(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 != -1 && unk_0x0E4018692D92041D(Global_32202[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_300(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_301(iParam0) };
	*iParam1 = unk_0x30B9FCF52BAAEB11(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_301(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_302(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_302(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_302(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_302(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_302(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_302(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_302(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049815[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_302(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_302(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_302(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_302(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_302(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_302(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_302(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_302(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_302(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_302(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_302(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_302(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_302(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_302(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_302(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_302(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_302(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_302(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_302(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_302(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_302(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_302(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_302(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_302(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_302(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_302(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_302(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_302(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_303(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_300(iParam0, &iVar1);
	if (!unk_0xCE3CFF625BEBAA04("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0xD4D8FDF28013B971(iVar1))
		{
			if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iVar1)
			{
				func_230(iParam0, 1);
				return;
			}
			unk_0xD69FA0316AAF0855(iVar1, 1);
		}
		else if (!bParam1 && unk_0xD4D8FDF28013B971(iVar1))
		{
			if (func_304(iParam0))
			{
				func_230(iParam0, 0);
			}
			unk_0xD69FA0316AAF0855(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_304(iParam0))
			{
				func_230(iParam0, 0);
			}
		}
	}
}

int func_304(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 != -1 && unk_0x0E4018692D92041D(Global_32194[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_305()
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || func_296(Local_56) != -1)
	{
		return 1;
	}
	return 0;
}

int func_306(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_308(int iParam0, var uParam1)
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_309()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

void func_310()
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_68807)
	{
		if (Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] != -15)
		{
			if (!Global_70409[Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]])
			{
				if (func_363(func_50(), Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[iLocal_143]))
				{
					iVar0 = Global_106565.f_32743.f_1982[iLocal_129 /*939*/][iLocal_143];
					func_361(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_474(Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_313[iLocal_143], 1);
					}
					Global_106565.f_32743.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		Local_56.f_7 = unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (unk_0xFAC8F20FBC764F4D())
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			if (unk_0x117DAF3BF7232886(Local_56.f_110))
			{
				unk_0x189377BFBDC9127F(Local_56.f_110, false);
				unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
			}
			if (unk_0x117DAF3BF7232886(Local_56.f_111))
			{
				unk_0x189377BFBDC9127F(Local_56.f_111, false);
				unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
			}
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				unk_0xCFF7A8F330FEF751(unk_0x95B959F18401C09A(), 0);
			}
			iVar2 = unk_0x8918EC905FC8975D();
			if (unk_0x765F6FEEFF39224F(iVar2) && unk_0x91D5C8283D19AF49(iVar2, 0))
			{
				unk_0x0CDD28A9DFCE2FCE(iVar2, true, 0);
				unk_0xF70578F5CD9822CB(iVar2, false);
				if (unk_0x9E08E12414BD4476(iVar2, 1))
				{
					unk_0x65F544B458249682(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = unk_0xE3903F59E2F22150();
			while (!unk_0x51EBF893ED085755() && (unk_0xE3903F59E2F22150() - iVar4) < iVar3)
			{
				wait(0);
			}
			if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
			{
				unk_0x2F7BF094F3C2A257(Local_56.f_112);
			}
			StringCopy(&Global_33147, "", 32);
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				func_303(47, 1);
				func_298(47, 1);
			}
			unk_0x4ABB9EF39DA515D7();
			unk_0x21675F65D589CACE();
			unk_0x35675D19812BDF22(true);
			unk_0xDFF589A2149528CE(true);
			func_290(0, 1, 1, 0, 0, 0);
			bLocal_142 = false;
			Global_26019 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && !Local_56.f_29.f_69)) || (!unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))) || (!bLocal_142 && func_67(Local_56, 5))) || (!bLocal_142 && unk_0x833B1A3D9F713E03(2, 199))) || (!bLocal_142 && unk_0xD9C92B0885A075F8())) || !func_359(0)) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x6C296F3A10E6939B(unk_0x33CD235DF1E6A94E())) || unk_0x112676E834169F33(unk_0x33CD235DF1E6A94E())) || Global_25915) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x2E9A4AE2A5B4D8E8(unk_0x33CD235DF1E6A94E())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56 != -1 && func_67(Local_56, 0)) && !func_67(Local_56, 5)) && !bLocal_158) && !bVar5)
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && !unk_0xFAC8F20FBC764F4D())
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_01", 16);
					func_217(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_212(Local_56.f_5, 1))
			{
				if (func_358(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0xE3903F59E2F22150();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = unk_0xE3903F59E2F22150();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_02", 16);
				func_217(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_212(Local_56.f_5, 1))
			{
				if (func_358(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0xE3903F59E2F22150();
					Local_56.f_2 = 90;
				}
				else
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56 == 15 || Local_56 == 17) || Local_56 == 16)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if (Local_56 == 18 || Local_56 == 19)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					else if (Local_56 == 12 || Local_56 == 13)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_57.f_4 = 117;
						bLocal_142 = true;
					}
					Local_57 = unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_26019 = 1;
					if (bLocal_142)
					{
						if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
						{
							func_303(47, 0);
							func_298(47, 0);
							Local_56.f_112 = unk_0x30B9FCF52BAAEB11(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
							{
								if (!unk_0x5FC25A9F19EB39FA(Local_56.f_112))
								{
									unk_0xDDF57F769FD85704(Local_56.f_112);
								}
								StringCopy(&Global_33147, "v_garagem_sp", 32);
							}
						}
						unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 1);
						unk_0x4ABB9EF39DA515D7();
						Local_56.f_4 = unk_0xE3903F59E2F22150();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				Local_56.f_112 = unk_0x30B9FCF52BAAEB11(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xDE9B75BB528AC06E(Local_56.f_112) || unk_0xD4D8FDF28013B971(Local_56.f_112)) || unk_0x7CD49339861D878A(Local_56.f_112))
				{
					func_303(47, 0);
					func_298(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				vVar9 = { cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					if (unk_0x1F6A09AE9372AE6C(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0xE3903F59E2F22150() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = unk_0xE3903F59E2F22150();
						Local_56.f_2 = 5;
					}
				}
				else if (unk_0x25FBDA8BA15A928A(Local_56.f_29.f_14, vVar9, fVar7, iVar8) || (unk_0xE3903F59E2F22150() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = unk_0xE3903F59E2F22150();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0xE980BAFD70E8A4B3() && unk_0x4E1190A8D88ABDB7()) && (!unk_0xDE9B75BB528AC06E(Local_56.f_112) || unk_0x5FC25A9F19EB39FA(Local_56.f_112))) || (unk_0xE3903F59E2F22150() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = unk_0xE3903F59E2F22150();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0xE3903F59E2F22150() - Local_56.f_4) > 1000)
			{
				if ((unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x5A04E3BD0B5E7E49(iLocal_168)) && unk_0x9E08E12414BD4476(iLocal_168, 1))
				{
					unk_0x65F544B458249682(&iLocal_168);
				}
				iLocal_168 = unk_0x8918EC905FC8975D();
				if ((((unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x91D5C8283D19AF49(iLocal_168, 0)) && !unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(iLocal_168))) && !unk_0x57D74362A8BD1490(unk_0x541D5C57194E73C4(iLocal_168))) && !unk_0x444D956C7F94526E(unk_0x541D5C57194E73C4(iLocal_168)))
				{
					if (!unk_0x5A04E3BD0B5E7E49(iLocal_168))
					{
						unk_0x0D21E1FDE062ED99(iLocal_168, false, 0);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), false, 0);
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
				}
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 16);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 32);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 128);
					unk_0xCFF7A8F330FEF751(unk_0x95B959F18401C09A(), 1);
				}
				func_290(1, 1, 1, 0, 0, 0);
				unk_0xD362430CD61A9B08();
				unk_0xEDF90B96BED57BCE(1);
				vVar9 = { cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_29.f_69)
				{
					unk_0x354FD6501F10A4E7(Local_56.f_29.f_14, vVar9);
				}
				if (!unk_0x117DAF3BF7232886(Local_56.f_110))
				{
					Local_56.f_110 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (unk_0x117DAF3BF7232886(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0xD219F857F67DEABA("GtaMloRoom001");
					}
					func_290(1, 1, 1, 0, 0, 0);
					func_289(&(Local_56.f_29.f_14), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
				unk_0x35675D19812BDF22(false);
				unk_0xDFF589A2149528CE(false);
				unk_0x4ABB9EF39DA515D7();
				Local_56.f_2 = 7;
				Local_56.f_4 = unk_0xE3903F59E2F22150();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((unk_0xE3903F59E2F22150() - Local_56.f_4) < 7000 && !func_356(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_05", 16);
				func_215(&Var6, -1);
				if (!unk_0xE980BAFD70E8A4B3())
				{
					if (Local_56 == 12 || Local_56 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					vVar9 = { cos((Local_56.f_29.f_29.f_2 + 90f)), sin((Local_56.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x25FBDA8BA15A928A(Local_56.f_29.f_29, vVar9, fVar7, iVar8);
				}
			}
			else
			{
				if (unk_0x117DAF3BF7232886(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0xD219F857F67DEABA("GtaMloRoom001");
					}
					func_290(1, 1, 1, 0, 0, 0);
					func_289(&(Local_56.f_29.f_29), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x21675F65D589CACE();
				unk_0xEDF90B96BED57BCE(1);
				Local_56.f_4 = unk_0xE3903F59E2F22150();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0xE3903F59E2F22150() - Local_56.f_4) < 7000 && !func_356(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_06", 16);
				if (!unk_0xFAC8F20FBC764F4D())
				{
					func_215(&Var6, 7000);
				}
			}
			else
			{
				unk_0xEDF90B96BED57BCE(1);
				Local_56.f_4 = unk_0xE3903F59E2F22150();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0xE3903F59E2F22150() - Local_56.f_4) < 3500 && !func_356(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_03", 16);
				if (unk_0x11AE7F6A404414C9(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						unk_0xFF524AE40FB6301A(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBB698266C5FDF0A7(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_90(&Var6);
						unk_0x614EE52A69097A4C();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((unk_0xE3903F59E2F22150() - Local_56.f_4) < 4000 && !func_356(1000))
			{
				if (unk_0x11AE7F6A404414C9(Local_57))
				{
					if (Local_57.f_2)
					{
						unk_0xFF524AE40FB6301A(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBB698266C5FDF0A7(Local_57, "SHARD_ANIM_OUT");
						unk_0x4D9DA18AB3C2A466(1);
						unk_0x8DAB5B12D7B9AD29(0.33f);
						unk_0x818901B332D5541D();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
					if (unk_0x117DAF3BF7232886(Local_56.f_110))
					{
						unk_0x189377BFBDC9127F(Local_56.f_110, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
					}
					if (unk_0x117DAF3BF7232886(Local_56.f_111))
					{
						unk_0x189377BFBDC9127F(Local_56.f_111, false);
						unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
					}
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
					unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
					iVar11 = unk_0x8918EC905FC8975D();
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
						unk_0xCFF7A8F330FEF751(unk_0x95B959F18401C09A(), 0);
						if ((unk_0x765F6FEEFF39224F(iVar11) && unk_0x91D5C8283D19AF49(iVar11, 0)) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar11, 0))
						{
							unk_0xBEADAF07D2339505(iVar11, Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0x3C990C409B3845DE(iVar11, Local_56.f_29.f_47);
							unk_0x1B2303F9DC2D90D5(iVar11, 1084227584);
						}
						else
						{
							unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), Local_56.f_29.f_47);
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_168) && unk_0x91D5C8283D19AF49(iLocal_168, 0))
					{
						iVar12 = func_49(24);
						if (func_288(&Local_141, 24))
						{
							func_283(&Local_141, func_468());
							if (unk_0x765F6FEEFF39224F(iVar12))
							{
								unk_0x7AC8DF0B83EB4C6B(&iVar12);
							}
						}
						if (Local_56 == 21)
						{
							unk_0xCE04CE961AF41AB9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							unk_0xBEADAF07D2339505(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iLocal_168, 154.4846f);
							func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56 == 22)
						{
							unk_0xCE04CE961AF41AB9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							unk_0xBEADAF07D2339505(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iLocal_168, 319.6985f);
							func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56 == 23)
						{
							unk_0xCE04CE961AF41AB9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							unk_0xBEADAF07D2339505(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iLocal_168, 270.8741f);
							func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0x1B2303F9DC2D90D5(iLocal_168, 1084227584);
					}
					if (unk_0x765F6FEEFF39224F(iVar11) && unk_0x91D5C8283D19AF49(iVar11, 0))
					{
						unk_0x0CDD28A9DFCE2FCE(iVar11, true, 0);
						unk_0xF70578F5CD9822CB(iVar11, false);
						if (unk_0x9E08E12414BD4476(iVar11, 1))
						{
							unk_0x65F544B458249682(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = unk_0xE3903F59E2F22150();
					while (!unk_0x51EBF893ED085755() && (unk_0xE3903F59E2F22150() - iVar14) < iVar13)
					{
						wait(0);
					}
					if (unk_0xDE9B75BB528AC06E(Local_56.f_112))
					{
						unk_0x2F7BF094F3C2A257(Local_56.f_112);
					}
					StringCopy(&Global_33147, "", 32);
					if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						func_303(47, 1);
						func_298(47, 1);
						Global_106565.f_32743.f_4800 = 1;
					}
					unk_0x4ABB9EF39DA515D7();
					unk_0x21675F65D589CACE();
					unk_0x35675D19812BDF22(true);
					unk_0xDFF589A2149528CE(true);
					func_290(0, 1, 1, 0, 0, 0);
					bLocal_142 = false;
					Global_26019 = 0;
				}
				if (unk_0x11AE7F6A404414C9(Local_57))
				{
					unk_0x83A1D480DB0B52CC(&Local_57);
				}
				func_327(iLocal_129, Local_57.f_4, Local_56.f_29.f_67);
				func_326(Local_56, 5, 1);
				func_313(Local_56);
				if (unk_0xE38E3CF1625A4145(Global_70409.f_208[Local_56]))
				{
					unk_0x1ABDB383C83A336A(&(Global_70409.f_208[Local_56]));
				}
				iLocal_151 = Local_56;
				func_312();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((unk_0xE3903F59E2F22150() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_04", 16);
					func_311(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_311(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_312()
{
	if (func_225(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

void func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_325(iVar0, 0);
	iVar2 = func_324(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_323(iVar0);
		if (func_321(iVar0, iVar1, 1))
		{
			func_314(iVar0);
			func_323(iVar0);
		}
	}
}

void func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46897[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46897[iVar0 /*203*/].f_10[(Global_46897[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46897[iVar0 /*203*/].f_9 - 1);
	if (!Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_319(Global_37597[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_315(1, Global_37597[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_37597[iVar1 /*12*/].f_3)
		{
			case 0:
				func_315(0, Global_37597[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_315(1, Global_37597[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_315(2, Global_37597[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46897[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_315(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x286C823E0969F22A())
	{
		return;
	}
	iVar0 = func_468();
	bVar1 = false;
	StringCopy(&cVar2, func_318(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x1F85AD4B26B92795("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x1F85AD4B26B92795("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x1F85AD4B26B92795("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x1F85AD4B26B92795(sParam3);
				if (!unk_0x786AF4A44E1B5B4B(sParam4))
				{
					unk_0xFA6BEE2B1507FF1E(sParam4);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam5))
				{
					unk_0xFA6BEE2B1507FF1E(sParam5);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam6))
				{
					unk_0xFA6BEE2B1507FF1E(sParam6);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam7))
				{
					unk_0xFA6BEE2B1507FF1E(sParam7);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam8))
				{
					unk_0xFA6BEE2B1507FF1E(sParam8);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam9))
				{
					unk_0xFA6BEE2B1507FF1E(sParam9);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam10))
				{
					unk_0xFA6BEE2B1507FF1E(sParam10);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam11))
				{
					unk_0xFA6BEE2B1507FF1E(sParam11);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam12))
				{
					unk_0xFA6BEE2B1507FF1E(sParam12);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam13))
				{
					unk_0xFA6BEE2B1507FF1E(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_316(unk_0xDE1BA36E3BACF7C1(&cVar2, &cVar2, 0, 2, unk_0x434854E9CAE13C4A(func_317(iParam1)), 0));
		}
		else
		{
			func_316(unk_0xDE1BA36E3BACF7C1("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x434854E9CAE13C4A(func_317(iParam1)), 0));
		}
		switch (Global_14553)
		{
			case 0:
				StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
				Global_37589++;
				if (Global_37589 > 16)
				{
					Global_37589 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
				Global_37591++;
				if (Global_37591 > 16)
				{
					Global_37591 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
				Global_37590++;
				if (Global_37590 > 16)
				{
					Global_37590 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x0F8EAEEC97DDBCB3(-1, "Notification", &Global_14542, true);
	}
}

void func_316(int iParam0)
{
	Global_37592[Global_37596] = iParam0;
	Global_16924 = 1;
	Global_16923 = iParam0;
	Global_37596++;
	if (Global_37596 == 3)
	{
		Global_37596 = 0;
	}
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_318(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[0 /*29*/].f_7));
		
		case 1:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[1 /*29*/].f_7));
		
		case 2:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[2 /*29*/].f_7));
		
		case 7:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[12 /*29*/].f_7));
		
		case 4:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[60 /*29*/].f_7));
		
		case 6:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[62 /*29*/].f_7));
		
		case 3:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[14 /*29*/].f_7));
		
		case 16:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[97 /*29*/].f_7));
		
		case 19:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[99 /*29*/].f_7));
		
		case 15:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[15 /*29*/].f_7));
		
		case 26:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[30 /*29*/].f_7));
		
		case 27:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[17 /*29*/].f_7));
		
		case 29:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[20 /*29*/].f_7));
		
		case 30:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[43 /*29*/].f_7));
		
		case 31:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[44 /*29*/].f_7));
		
		case 32:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[19 /*29*/].f_7));
		
		case 34:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[40 /*29*/].f_7));
		
		case 36:
			return unk_0x434854E9CAE13C4A("CELL_E_381");
		
		case 38:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[122 /*29*/].f_7));
		
		case 40:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[125 /*29*/].f_7));
		
		case 41:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[113 /*29*/].f_7));
		
		case 42:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[126 /*29*/].f_7));
		
		case 43:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[127 /*29*/].f_7));
		
		case 44:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[124 /*29*/].f_7));
		
		case 45:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[114 /*29*/].f_7));
		
		case 46:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[115 /*29*/].f_7));
		
		case 47:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[116 /*29*/].f_7));
		
		case 48:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[123 /*29*/].f_7));
		
		case 49:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[117 /*29*/].f_7));
		
		case 50:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[118 /*29*/].f_7));
		
		case 51:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[119 /*29*/].f_7));
		
		case 52:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[120 /*29*/].f_7));
		
		case 53:
			return unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_319(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46897[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46897[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46897[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_321(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_325(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46897[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46897[iVar0 /*203*/].f_2 = iParam0;
	Global_46897[iVar0 /*203*/].f_10[Global_46897[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46897[iVar0 /*203*/].f_10[Global_46897[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46897[iVar0 /*203*/].f_10[Global_46897[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46897[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46897[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46897[iVar0 /*203*/].f_4[iVar1] == Global_37597[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46897[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46897[iVar0 /*203*/].f_4[Global_46897[iVar0 /*203*/].f_3] = Global_37597[iParam1 /*12*/].f_3;
			Global_46897[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46897[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46897[iVar0 /*203*/].f_4[iVar1] == Global_37597[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46897[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46897[iVar0 /*203*/].f_4[Global_46897[iVar0 /*203*/].f_3] = Global_37597[iParam1 /*12*/].f_2;
			Global_46897[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46897[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46897[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_322(Global_46897[iVar0 /*203*/].f_4[iVar1], Global_46897[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_322(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_40922[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_40922[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_319(Global_37597[iVar5 /*12*/].f_1) };
		if (Global_37597[iVar5 /*12*/].f_2 == iParam0 && !Global_37597[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37597[iVar5 /*12*/].f_2;
		iVar0 = Global_46535[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_46535[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37589 = (Global_37589 - 1);
						if (Global_37589 < 0)
						{
							Global_37589 = 0;
						}
						break;
					
					case 1:
						Global_37590 = (Global_37590 - 1);
						if (Global_37590 < 0)
						{
							Global_37590 = 0;
						}
						break;
					
					case 2:
						Global_37591 = (Global_37591 - 1);
						if (Global_37591 < 0)
						{
							Global_37591 = 0;
						}
						break;
					}
				}
		}
		Global_46535[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_46535[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_46535[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46535[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_46535[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_46535[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37589 = (Global_37589 - 1);
						if (Global_37589 < 0)
						{
							Global_37589 = 0;
						}
						break;
					
					case 1:
						Global_37590 = (Global_37590 - 1);
						if (Global_37590 < 0)
						{
							Global_37590 = 0;
						}
						break;
					
					case 2:
						Global_37591 = (Global_37591 - 1);
						if (Global_37591 < 0)
						{
							Global_37591 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_46897[iVar9 /*203*/].f_1 == iParam1 && Global_46897[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_46535[iParam0 /*120*/].f_18[iVar0] = Global_46897[iVar8 /*203*/].f_1;
		Global_46535[iParam0 /*120*/].f_1[iVar0] = (Global_46897[iVar8 /*203*/].f_9 - 1);
		Global_46535[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46535[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_46535[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46535[iParam0 /*120*/]++;
		iVar10 = Global_46535[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_46897[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_37597[iVar11 /*12*/].f_2;
		if (Global_46897[iVar8 /*203*/].f_10[(Global_46897[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46897[iVar8 /*203*/].f_10[(Global_46897[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_319(Global_37597[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_46535[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_315(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_315(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_315(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_315(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_323(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x0E4018692D92041D(Global_106565.f_24980, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46897[iVar0 /*203*/] = 0;
}

int func_324(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_48319 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46897[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46897[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46897[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_48320[iVar1 /*53*/].f_52 == 0)
		{
			Global_48320[iVar1 /*53*/].f_52 = iVar0;
			Global_48320[iVar1 /*53*/] = iParam0;
			Global_48320[iVar1 /*53*/].f_1 = iParam1;
			Global_48320[iVar1 /*53*/].f_2 = iParam2;
			Global_106565.f_21031.f_310++;
			if (Global_106565.f_21031.f_310 == 0)
			{
				Global_106565.f_21031.f_310 = 1;
			}
			Global_48320[iVar1 /*53*/].f_10 = 0;
			Global_48320[iVar1 /*53*/].f_3 = Global_106565.f_21031.f_310;
			Global_48320[iVar1 /*53*/].f_4 = 1;
			Global_48319++;
			return Global_48320[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_325(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_320(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46897[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46897[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46897[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46897[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46897[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46897[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46897[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46897[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_46535[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_46535[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_46535[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_46535[iVar6 /*120*/].f_18[iVar8] == Global_46897[iVar4 /*203*/].f_1)
							{
								if (Global_46535[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_37589 = (Global_37589 - 1);
											break;
										
										case 1:
											Global_37590 = (Global_37590 - 1);
											break;
										
										case 2:
											Global_37591 = (Global_37591 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46897[iVar4 /*203*/].f_2 = iParam0;
	Global_46897[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46897[iVar4 /*203*/] = 1;
	}
	Global_106565.f_21031.f_310++;
	if (Global_106565.f_21031.f_310 == 0)
	{
		Global_106565.f_21031.f_310 = 1;
	}
	Global_46897[iVar4 /*203*/].f_1 = Global_106565.f_21031.f_310;
	Global_46897[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_326(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_32743[iParam0]), iParam1);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_32743[iParam0]), iParam1);
	}
}

int func_327(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_328(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_355();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_354(99, 1);
					func_353(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_353(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_353(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_338(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_337(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_353(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_353(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_353(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_337(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_353(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_353(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_353(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_353(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_353(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_353(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_353(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_353(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_353(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x535C9C52117DA0AD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_353(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_353(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_353(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_353(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_353(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_353(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_337(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_353(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_353(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_353(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_353(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_353(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_353(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_336(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_354(95, iParam3);
					break;
				
				case 1:
					func_354(97, iParam3);
					break;
				
				case 2:
					func_354(96, iParam3);
					break;
			}
			func_354(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_331(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_331(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_353(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_353(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_353(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_330(iParam0);
	if (Global_36425 == 15)
	{
		func_329(0);
	}
	return 1;
}

void func_329(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x12B6E23F244DDB0F(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x12B6E23F244DDB0F(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x12B6E23F244DDB0F(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_331(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_335(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_335(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_335(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_335(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_334(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_334(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_334(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_334(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_334(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_334(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_333() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_333() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_332(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_333()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_177(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_335(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_336(int iParam0)
{
	func_354(93, iParam0);
	func_354(29, iParam0);
	func_354(30, iParam0);
}

bool func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_165(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_165(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_165(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_165(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_176(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_176(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_176(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_176(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_176(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_176(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_2097152[func_333() /*10778*/].f_6165.f_10, iParam0);
}

int func_338(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x321808B6A32CCA20(27))
	{
		return 0;
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x75D54ED6C1AD1642(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x12B6E23F244DDB0F(joaat("num_cash_spent"), iVar1, 1);
		func_352(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_339(27, 1);
	return 1;
}

int func_339(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_340(iParam0, iParam1);
}

int func_340(int iParam0, int iParam1)
{
	if (func_27(14) && !func_351(iParam0))
	{
		return 0;
	}
	if (unk_0x321808B6A32CCA20(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_350(&Global_4269608))
	{
		if (func_348(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_341(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBECC4FBAC9C8E5E7(iParam0))
		{
			return 0;
		}
		if (unk_0x321808B6A32CCA20(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_341(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_351(iParam1))
	{
		return 0;
	}
	if (func_348(uParam0, iParam1))
	{
		return 0;
	}
	if (func_347(uParam0) < 0f)
	{
		func_346(uParam0, 0);
	}
	func_344(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_342(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_342(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_351(iParam1))
	{
		return 0;
	}
	if (func_348(uParam0, iParam1))
	{
		return 0;
	}
	if (func_347(uParam0) < 0f)
	{
		func_346(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_343(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_343(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_344(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_345(uParam0, iVar0);
		iVar0++;
	}
	func_346(uParam0, (Global_4269607 - 0.5f));
}

void func_345(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_346(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_347(var uParam0)
{
	return uParam0->f_80;
}

bool func_348(var uParam0, int iParam1)
{
	return func_349(uParam0, iParam1) != -1;
}

int func_349(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_350(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

void func_353(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_354(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_355()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_356(int iParam0)
{
	if (unk_0x73DA1542B2F0C458())
	{
		if ((unk_0xE3903F59E2F22150() - Global_28) > iParam0)
		{
			Global_27 = unk_0xE3903F59E2F22150();
		}
		Global_28 = unk_0xE3903F59E2F22150();
		if ((unk_0xE3903F59E2F22150() - Global_27) > iParam0)
		{
			if (func_357())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_357()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0x833B1A3D9F713E03(0, 18) || unk_0x833B1A3D9F713E03(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_359(int iParam0)
{
	return func_360(iParam0, Global_36425);
}

int func_360(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
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
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_361(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_468();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_130(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_321(iVar0, iVar1, 1))
	{
		func_362(iVar0, sVar3);
		func_314(iVar0);
		func_323(iVar0);
	}
}

void func_362(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46897[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46897[iVar0 /*203*/].f_10[(Global_46897[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46897[iVar0 /*203*/].f_10[(Global_46897[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46897[iVar0 /*203*/].f_10[(Global_46897[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46897[iVar0 /*203*/].f_10[(Global_46897[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_368(iParam1) || !func_368(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_365(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_366(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_367(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_365(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_366(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_367(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_369()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	int iVar21;
	
	iVar0 = 0;
	if (unk_0x1BCDA92AD0A7835B(joaat("startup_positioning")) == 0)
	{
		if (Global_106565.f_32743.f_5588)
		{
			if (!unk_0x765F6FEEFF39224F(Global_71314))
			{
				func_283(&(Global_106565.f_32743.f_5510), Global_106565.f_32743.f_5590);
				Global_106565.f_32743.f_5588 = 0;
			}
			else if (!unk_0x91D5C8283D19AF49(Global_71314, 0) || func_47(Global_71314, Global_106565.f_32743.f_5590, 1))
			{
				Global_106565.f_32743.f_5588 = 0;
			}
			else
			{
				if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0) == Global_71314) && func_396(unk_0x33CD235DF1E6A94E()) != Global_106565.f_32743.f_5590)
				{
					Global_106565.f_32743.f_5590 = func_396(unk_0x33CD235DF1E6A94E());
				}
				if (Global_71314 != iLocal_128)
				{
					sVar2 = unk_0x4527878B077DBA42(Global_71314, &uVar1);
					if (!unk_0x786AF4A44E1B5B4B(sVar2))
					{
						if (unk_0x36163153849DFDA1(sVar2) == unk_0x36163153849DFDA1("vehicle_gen_controller"))
						{
							Global_106565.f_32743.f_5588 = 0;
							iLocal_169 = Global_71314;
							if (Global_70409.f_139[24] == Global_71314 || (Global_71315 == Global_71314 && Global_71316 == 24))
							{
								func_395(458, 24, -1, 1);
							}
							else
							{
								func_395(458, 0, -1, 1);
							}
							Global_71314 = 0;
						}
					}
				}
				if (((Global_106565.f_32743.f_5590 != func_468() && Global_93086[Global_106565.f_32743.f_5590 /*98*/] == Global_106565.f_32743.f_5510.f_66) && unk_0xCE3CFF625BEBAA04(&(Global_93086[Global_106565.f_32743.f_5590 /*98*/].f_27), &(Global_106565.f_32743.f_5510.f_1))) && !unk_0x71EC91BA8C88BCE0())
				{
					func_115(&(Global_106565.f_32743.f_5510), &(Global_106565.f_32743.f_5600[Global_106565.f_32743.f_5590 /*78*/]));
					Global_106565.f_32743.f_5588 = 0;
					iLocal_169 = 0;
					func_395(458, 0, -1, 1);
					Global_71314 = 0;
				}
			}
		}
		else if ((unk_0x765F6FEEFF39224F(Global_71314) && unk_0x91D5C8283D19AF49(Global_71314, 0)) && !func_47(Global_71314, Global_106565.f_32743.f_5590, 1))
		{
			Global_106565.f_32743.f_5588 = 1;
		}
		if (unk_0x765F6FEEFF39224F(iLocal_169) && unk_0x91D5C8283D19AF49(iLocal_169, 0))
		{
			if (((!Global_106565.f_32743.f_5588 && iLocal_169 != Global_71314) && iLocal_169 != iLocal_170) && !unk_0x9E08E12414BD4476(iLocal_169, 1))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_395(458, 0, -1, 1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_395(458, 0, -1, 1);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_170) && unk_0x91D5C8283D19AF49(iLocal_170, 0))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_71318.f_66 != 0 && Global_71315 == 0)
	{
		func_283(&Global_71318, Global_71396);
		Global_71318.f_66 = 0;
	}
	vVar3 = { 433.6721f, -1006.538f, 25.96351f };
	vVar4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) || !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vVar3, vVar4, fVar5, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_394(iLocal_129))
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
			{
				iLocal_145 = func_392(428.37f, -1013.5f, 27.93f, 0);
				unk_0xA20C1DE21F2F071C(iLocal_145, 225);
				unk_0x1C95CD840303FC37(iLocal_145, "IMPOUND_BLIPNAME");
				unk_0xD99530E6E53B24BF(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
			unk_0x1ABDB383C83A336A(&iLocal_145);
		}
	}
	else if (unk_0xE38E3CF1625A4145(iLocal_145))
	{
		unk_0x1ABDB383C83A336A(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					if (func_394(iLocal_129))
					{
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vVar3, vVar4, fVar5, 0, true, 0))
						{
							if (func_358(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_279(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_217(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_217(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_215("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && func_213(0, -1, 0))
			{
				if (func_212(iLocal_125, 1))
				{
					func_69(&iLocal_125);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					func_391();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_279(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						iLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_279(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									vVar11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									vVar11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_375(&iLocal_128, iVar10, vVar11, 179.24f, 1))
								{
									wait(0);
								}
								if (unk_0x765F6FEEFF39224F(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_374(18, 1, 0);
									}
									else
									{
										func_374(19, 1, 0);
									}
									if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
									{
										unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
									}
									func_327(iLocal_129, 119, 250);
									func_373(iVar10);
									func_31(iLocal_128, func_468());
									func_71(1, -1);
									iLocal_124 = 3;
									func_69(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_468())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_391();
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 1, 0, 0, 0);
				func_208(1, 2, 1, 1, 1);
				func_207("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_279(iVar14, iLocal_129))
					{
						func_133(iVar15, unk_0x093916B4639501B8(Global_106565.f_32743.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						unk_0x8950ED5730F62EE8(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_133(iVar15, "IMPOUND_COST", 1, 1, 0, 0);
						func_372(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_126(iLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x4CE1DD5CFC1F941E())
				{
					if (unk_0x33CAB544FAAE661D(2))
					{
						unk_0x3FD9339AA95E323F(0, 1, 1);
						unk_0x3FD9339AA95E323F(0, 2, 1);
						unk_0xAE4810E427AD9203(0, 237, 1);
						unk_0xAE4810E427AD9203(0, 238, 1);
						unk_0xAE4810E427AD9203(0, 241, 1);
						unk_0xAE4810E427AD9203(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, -1, 1);
						if (func_121())
						{
							if (Global_4268040 != iLocal_121)
							{
								unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_121 = Global_4268040;
								func_126(iLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x833B1A3D9F713E03(2, 188) || unk_0x833B1A3D9F713E03(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar16 = (iLocal_121 - 1);
						while (iVar16 >= 0)
						{
							if (unk_0x0E4018692D92041D(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = true;
								iVar16 = 0;
							}
							iVar16 = (iVar16 + -1);
						}
						if (!bVar17)
						{
							iVar16 = 31;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (unk_0x0E4018692D92041D(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = true;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + -1);
							}
						}
						if (bVar17)
						{
							func_126(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x833B1A3D9F713E03(2, 187) || unk_0x833B1A3D9F713E03(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 31)
						{
							if (unk_0x0E4018692D92041D(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = true;
								iVar18 = 31;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0;
							while (iVar18 <= (iLocal_121 - 1))
							{
								if (unk_0x0E4018692D92041D(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = true;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_126(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x1771F6BAF60B44FA(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_120("IMPOUND_CNF", 0, 0);
						func_119(-1);
						func_118(201, "ITEM_YES", -1);
						func_118(202, "ITEM_NO", -1);
						iLocal_118 = 1;
					}
					else
					{
						if (iLocal_121 == 0)
						{
							vVar20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							vVar20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_279(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_375(&iLocal_128, iLocal_123[iLocal_121], vVar20, 179.24f, 1))
							{
								wait(0);
							}
							if (unk_0x765F6FEEFF39224F(iLocal_128))
							{
								if (iLocal_121 == 0)
								{
									func_374(18, 1, 0);
								}
								else
								{
									func_374(19, 1, 0);
								}
								if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
								{
									unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
								}
								func_327(iLocal_129, 119, 250);
								func_373(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_468());
								func_71(1, -1);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (unk_0x1771F6BAF60B44FA(2, 202) || unk_0x1771F6BAF60B44FA(2, 238))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			unk_0xF3F3DC87D7163212();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(-1);
				func_118(201, "ITEM_SELECT", -1);
				func_118(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_213(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			break;
		
		case 3:
			if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_371())
			{
				func_31(iLocal_128, func_468());
				iLocal_124 = 99;
			}
			else if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_128))
				{
					if (!unk_0xD62C4419A41F106A(iLocal_128, 0))
					{
						if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_128, 0) && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_128, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), true) > 100f)
						{
							if (!unk_0x3F219400E5FE4B69(iLocal_128))
							{
								func_370(iLocal_128, 1, 145);
								unk_0x7AC8DF0B83EB4C6B(&iLocal_128);
								unk_0xB7350047030F7672(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_128, 0))
						{
							unk_0xB7350047030F7672(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(iLocal_128, func_468());
							iLocal_124 = 99;
						}
					}
					else
					{
						unk_0xB7350047030F7672(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					unk_0xB7350047030F7672(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			}
			func_69(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			func_374(18, 0, 0);
			func_374(19, 0, 0);
			if (unk_0x765F6FEEFF39224F(iLocal_128))
			{
				unk_0x65F544B458249682(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!iLocal_127)
			{
				func_374(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_374(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x4527878B077DBA42(iParam0, &uVar0);
		if (!unk_0x786AF4A44E1B5B4B(sVar1))
		{
			if (unk_0x36163153849DFDA1(sVar1) == unk_0x36163153849DFDA1("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_371()
{
	if (unk_0xA58C083E829597F7(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xA58C083E829597F7(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xA58C083E829597F7(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xA58C083E829597F7(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_372(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17411.f_5222 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	Global_17411.f_3918[Global_17411.f_5222] = iParam0;
	Global_17411.f_5222++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 2;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_129();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_108(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_128();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

void func_373(int iParam0)
{
	int iVar0;
	
	switch (func_468())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_280(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_374(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_35548[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0x0E4018692D92041D(Global_35548[iParam0 /*31*/].f_1, 1))
			{
				Global_35548[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_35548[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0x1ABC36611CBE0E84(Global_35548[iParam0 /*31*/], Global_35548[iParam0 /*31*/].f_22, 0, 0);
			unk_0x046ED2CF120C8949(Global_35548[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_35548[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_35548[iParam0 /*31*/].f_22 = 0f;
			unk_0x1ABC36611CBE0E84(Global_35548[iParam0 /*31*/], Global_35548[iParam0 /*31*/].f_22, 0, 0);
			unk_0x046ED2CF120C8949(Global_35548[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_375(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_279(iParam1, func_468()) || unk_0x765F6FEEFF39224F(*iParam0))
	{
		return 0;
	}
	switch (func_468())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0xB815670C37E03CDE(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x5D98D654CDC2165A(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xC651C43AB13A15E5(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, vParam2, fParam3, false, false, false);
		func_376(*iParam0, &(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
		unk_0xD5386CD3834C2895(*iParam0, 0);
		unk_0x09993E7216CF52C4(*iParam0, true);
		if (bParam4)
		{
			unk_0x71CA80D41E1338B4(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_376(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (!func_384(iParam0))
		{
			if (unk_0x36163153849DFDA1(&(uParam1->f_1)) != 0)
			{
				unk_0x6F10E9B95245828B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x0E8FDE8C0E616A4C())
			{
				unk_0x177C85C6D06E7E04(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0x783094EA0E540662(iParam0, 0);
			if (unk_0xEECA910C75BFF02B(iParam0, 5) != -1)
			{
				unk_0x783094EA0E540662(iParam0, 1);
			}
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 13))
		{
			unk_0xB652C463DE18181E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7437B994D9F2A07A(iParam0);
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 12))
		{
			unk_0x5AA2C10BC3876E75(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x2AB433FAF38DC9B4(iParam0);
		}
		unk_0x65EA11CF317FE4FA(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4A7AB87632044178(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x0E4018692D92041D(uParam1->f_77, 15) || func_383(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_382())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x4D394438E3492CCE(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			unk_0xBF98CE54BD141AFF(iParam0, 0);
		}
		else
		{
			unk_0xBF98CE54BD141AFF(iParam0, 0);
			unk_0xBF98CE54BD141AFF(iParam0, uParam1->f_65);
		}
		unk_0x4459178BAF2918E1(iParam0, !unk_0x0E4018692D92041D(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD303E20CB0AE4AD0(iParam0, uParam1->f_70);
		}
		unk_0xB8A3AC2A7B2465FD(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA7CD654BB1AF9419(iParam0, 2, unk_0x0E4018692D92041D(uParam1->f_77, 28));
		unk_0xA7CD654BB1AF9419(iParam0, 3, unk_0x0E4018692D92041D(uParam1->f_77, 29));
		unk_0xA7CD654BB1AF9419(iParam0, 0, unk_0x0E4018692D92041D(uParam1->f_77, 30));
		unk_0xA7CD654BB1AF9419(iParam0, 1, unk_0x0E4018692D92041D(uParam1->f_77, 31));
		unk_0x2D5A67427544788C(iParam0, unk_0x0E4018692D92041D(uParam1->f_77, 10));
		if (unk_0x864DE9BC3905751B(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x40DFA7AAEFC8F34C(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(iParam0)))
			{
				if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_381(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_381(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x8D9FD90A001D447C(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x72B72EA288B11371(iParam0, 1);
			}
			else
			{
				unk_0x474234FD6A8029F8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_377(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x097E7778E3E162E8(uParam1->f_66) && !unk_0x444D956C7F94526E(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0x34B1602009421B58(iParam0, iVar2 + 1))
					{
						unk_0x3A3707C1ECABF993(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x34B1602009421B58(iParam0, iVar2 + 1))
				{
					unk_0x3A3707C1ECABF993(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x541D5C57194E73C4(iParam0) == joaat("sheava") || unk_0x541D5C57194E73C4(iParam0) == joaat("omnis")) || unk_0x541D5C57194E73C4(iParam0) == joaat("le7b"))
		{
			if (unk_0xEECA910C75BFF02B(iParam0, 0) == -1)
			{
				unk_0x3A3707C1ECABF993(iParam0, 1, false);
			}
		}
		if (((unk_0x57D74362A8BD1490(uParam1->f_66) && unk_0x65DCCFD295360BFB(iParam0)) && !unk_0xD470A4E16E9AAE0E(iParam0, -2118308144)) && !((((Global_4456448.f_55685 == 6 || Global_4456448.f_55685 == 7) || Global_4456448.f_55685 == 18) || Global_4456448.f_55685 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x0E4018692D92041D(uParam1->f_77, 23))
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, 22))
				{
					unk_0x6B091F0028E6FE5F(iParam0, 2);
				}
				else
				{
					unk_0x6B091F0028E6FE5F(iParam0, 3);
				}
			}
			else
			{
				unk_0x6B091F0028E6FE5F(iParam0, 4);
			}
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 27))
		{
			unk_0x6767500A150CF86F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6767500A150CF86F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_377(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCD2E94F6C3101AFC(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x520614EF43727019(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xC8A936C78C6F2FB7(*iParam0, 255);
				}
				else
				{
					unk_0xC8A936C78C6F2FB7(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xEECA910C75BFF02B(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x230C57280E1AB399(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_257(unk_0x541D5C57194E73C4(*iParam0), 1) && unk_0xEECA910C75BFF02B(*iParam0, 24) != func_380(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xB4B3AEABE432069B(*iParam0, 24, func_380(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_379(iParam0);
	if (func_378(*iParam0))
	{
		unk_0xA155CCFA52A9A0C4(*iParam0, true);
		unk_0x09993E7216CF52C4(*iParam0, true);
	}
	return 1;
}

int func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0xCD2E94F6C3101AFC(iParam0) > 0)
	{
		unk_0x520614EF43727019(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xEECA910C75BFF02B(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xA8D8B8C75983E4D9(iParam0, iVar1, unk_0xEECA910C75BFF02B(iParam0, iVar1)), 16);
				iVar2 = unk_0x36163153849DFDA1(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x36163153849DFDA1("MNU_CAGE") || iVar2 == unk_0x36163153849DFDA1("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_379(var uParam0)
{
	switch (unk_0x541D5C57194E73C4(*uParam0))
	{
		case -1700874274:
			if (unk_0xEECA910C75BFF02B(*uParam0, 4) == 0)
			{
				unk_0xB4B3AEABE432069B(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x230C57280E1AB399(*uParam0, 13);
			}
			break;
	}
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x541D5C57194E73C4(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x3DE306309922F8D1(iParam0, 38);
		iVar1 = unk_0x3DE306309922F8D1(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
	{
		unk_0x520614EF43727019(iParam0, 0);
		iVar0 = unk_0xEECA910C75BFF02B(iParam0, 24);
		iVar1 = unk_0x9EA1E2F3ADA356E7(iParam0, 24);
		unk_0x4FF8F6D30BFBB224(iParam0, iParam1);
		if (unk_0x541D5C57194E73C4(iParam0) == joaat("tornado6") || unk_0x541D5C57194E73C4(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x230C57280E1AB399(iParam0, 24);
		}
		else
		{
			unk_0xB4B3AEABE432069B(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_382()
{
	return unk_0xE9D7B652961D4AA3(-1691188696);
}

int func_383(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
			{
				if (unk_0xA0EDFFB6CF5B314A(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xE48FAA8A938257C9(iParam0, "MPBitset");
				}
				return unk_0x0E4018692D92041D(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!func_390(unk_0x95B959F18401C09A(), -1))
		{
			iParam0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (func_386(unk_0x95B959F18401C09A()) == 3)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (func_385(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	if (unk_0x854E8B95CE1C5D29("FMDeliverableID", 3))
	{
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "FMDeliverableID"))
		{
			return unk_0xE48FAA8A938257C9(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_386(int iParam0)
{
	if (func_389(iParam0) == 233)
	{
		return func_387(iParam0);
	}
	return -1;
}

int func_387(int iParam0)
{
	if (func_388(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_388(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	if (func_388(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_390(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_238(iParam0, 1, 1))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iParam0), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iParam0), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x33CD235DF1E6A94E() == unk_0x7BDC41A7CA0C77A2(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_391()
{
	unk_0x6241DAE4CB0BE8A6(0);
	unk_0xAE4810E427AD9203(0, 188, 1);
	unk_0xAE4810E427AD9203(0, 187, 1);
	unk_0xAE4810E427AD9203(0, 201, 1);
	unk_0xAE4810E427AD9203(0, 202, 1);
	unk_0xAE4810E427AD9203(0, 1, 1);
	unk_0xAE4810E427AD9203(0, 2, 1);
	unk_0xAE4810E427AD9203(0, 239, 1);
	unk_0xAE4810E427AD9203(0, 240, 1);
}

int func_392(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_393(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_393(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_279(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_395(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_94();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6668A708A3DA7FB4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_396(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_397(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_397(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_398(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0x0E4018692D92041D(Global_106565.f_10010.f_25, 7))
	{
		if (!unk_0x0E4018692D92041D(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0x8950ED5730F62EE8(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_429(iVar0) };
				if (Global_26038 == iVar0 || Global_26038 == 0)
				{
					func_3(1);
					Var1 = { func_428("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xDEFB5E2E5CBD460A(&Var1);
					iVar0 = (Global_26038 + 1 % 8);
					func_426(iParam0, iVar0);
					iParam0->f_2 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(8000, 12000));
					unk_0x8950ED5730F62EE8(iParam0, 12);
					if (iVar0 == 7)
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 7);
						func_425(255, 0);
					}
				}
				else
				{
					func_426(iParam0, 0);
					unk_0xCE689A8E8C42ED78(&(Global_106565.f_10010.f_25), 12);
				}
			}
		}
		else
		{
			func_424();
			if (!unk_0x0E4018692D92041D(*iParam0, 31))
			{
				if (!unk_0x0E4018692D92041D(*iParam0, 25))
				{
					func_423(iParam0);
				}
				else if (func_422())
				{
					func_406(iParam0);
					iParam0->f_3 = unk_0xE3903F59E2F22150() + 2000;
				}
				if (!func_405(0))
				{
					func_425(255, 0);
				}
			}
			else if (func_405(0))
			{
				if (unk_0xE3903F59E2F22150() > iParam0->f_3)
				{
					func_425(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_399(iParam0);
			}
		}
	}
}

void func_399(int iParam0)
{
	struct<8> Var0;
	
	if (unk_0x0E4018692D92041D(*iParam0, 31))
	{
		func_404(iParam0);
	}
	if (unk_0x0E4018692D92041D(*iParam0, 25))
	{
		func_400(iParam0);
	}
	Var0 = { func_428("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x7C71681384076318(&Var0))
	{
		unk_0x7CED302277C0F3D3(&Var0);
	}
	unk_0xCE689A8E8C42ED78(iParam0, 6);
	unk_0xCE689A8E8C42ED78(iParam0, 30);
	unk_0xCE689A8E8C42ED78(iParam0, 8);
}

void func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_403(iVar0);
	iVar2 = func_402(iVar1);
	iVar3 = func_401(iVar1);
	if (iVar2 != 0)
	{
		unk_0x71CA80D41E1338B4(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x71CA80D41E1338B4(iVar3);
	}
	unk_0xCE689A8E8C42ED78(iParam0, 25);
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -541762431;
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_404(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0->f_4))
	{
		unk_0x2532E297CF3112F2(unk_0xFBB1F99A825CAB09(iParam0->f_4, false), 10f);
		unk_0x7AC8DF0B83EB4C6B(&(iParam0->f_4));
	}
	if (unk_0x765F6FEEFF39224F(iParam0->f_5))
	{
		unk_0x2532E297CF3112F2(unk_0xFBB1F99A825CAB09(iParam0->f_5, false), 10f);
		unk_0x4B8B69DAE5BAC592(&(iParam0->f_5));
	}
	unk_0xCE689A8E8C42ED78(iParam0, 31);
}

bool func_405(bool bParam0)
{
	if (bParam0)
	{
		return Global_103313.f_2 > 0.5f;
	}
	return Global_103313.f_2 >= 255f;
}

void func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_403(iVar0);
	func_407(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_421(iVar0), func_420(iVar0), 1);
	unk_0x8950ED5730F62EE8(iParam0, 31);
}

void func_407(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 12:
			func_419(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 109:
			func_418(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 43:
			func_417(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 35:
			func_416(uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 28:
			func_415(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 17:
			func_414(uParam1, uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 49:
			func_412(uParam1, uParam2, vParam3, fParam4);
			break;
		
		case 25:
			func_411(uParam1, vParam3, fParam4);
			break;
		
		case 14:
			func_410(uParam1, vParam3, fParam4);
			break;
		
		case 86:
			func_408(uParam1, vParam3, fParam4);
			break;
	}
}

void func_408(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_402(86);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(5, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_409(*uParam0);
		return;
	}
}

void func_409(int iParam0)
{
	unk_0x05CD36A082654514(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x05CD36A082654514(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x05CD36A082654514(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x05CD36A082654514(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x05CD36A082654514(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_410(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_402(14);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(5, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_409(*uParam0);
		return;
	}
}

void func_411(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_402(25);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(4, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.02f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.23f), (vParam1.y + 0.04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.05f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x - 0.05f), (vParam1.y - 0.11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, (vParam1.x + 0.09f), (vParam1.y - 0.06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_409(*uParam0);
		return;
	}
}

void func_412(var uParam0, var uParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_402(49);
	iVar1 = func_401(49);
	if (unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(iVar1))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(4, iVar0, vParam2, fParam3, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		unk_0x8B096ED4BB378AA7(1110, ((vParam2.x + 0.12f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, ((vParam2.x - 0.03f) - 0.3f), ((vParam2.y + 0.04f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, ((vParam2.x - 0.2f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, ((vParam2.x - 0.05f) - 0.3f), ((vParam2.y - 0.15f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x8B096ED4BB378AA7(1110, ((vParam2.x + 0.01f) - 0.3f), ((vParam2.y - 0.06f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_409(*uParam0);
		vVar2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0xC651C43AB13A15E5(iVar1, vParam2 + vVar2, fParam3, true, true, false);
		unk_0x71CA80D41E1338B4(iVar1);
		unk_0xB81134EAAC434D76(*uParam1, 2f);
		unk_0x1B2303F9DC2D90D5(*uParam1, 1084227584);
		unk_0x3465486651F18FB8(*uParam1, 2f);
		unk_0x84FE51A0DFCCE7AD(*uParam1, 1f);
		unk_0x45DD72322A48EF4B(*uParam1, 0, func_413());
		unk_0x45DD72322A48EF4B(*uParam1, 1, func_413());
		unk_0x45DD72322A48EF4B(*uParam1, 2, func_413());
		unk_0x45DD72322A48EF4B(*uParam1, 3, func_413());
		unk_0x45DD72322A48EF4B(*uParam1, 4, func_413());
		unk_0x45DD72322A48EF4B(*uParam1, 5, func_413());
		unk_0x62B7B895D641DC81(*uParam1, 15f);
		unk_0x902CC10ED3851CA2(*uParam1, 3);
		unk_0x26E0FFDB1AD22AC5(*uParam1, 2);
		unk_0xE043FB70A76DE4AE(*uParam1, true);
		unk_0x7FC263D448DC8CAC(*uParam1);
		return;
	}
}

int func_413()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_414(var uParam0, var uParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_402(17);
	iVar1 = func_401(17);
	if (unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(iVar1))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(4, iVar1, vParam2, fParam3, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar1);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		vVar2 = { 0.02f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.23f, 0.04f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.11f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.09f, -0.06f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			vVar2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x8B096ED4BB378AA7(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x8B096ED4BB378AA7(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x8B096ED4BB378AA7(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_409(*uParam0);
		*uParam1 = unk_0xC651C43AB13A15E5(iVar0, (vParam2.x - 0.4f), (vParam2.y - 0.5f), vParam2.z, fParam3, true, true, false);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x1C8705F667F673EA(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0x3465486651F18FB8(*uParam1, 20.5f);
		unk_0x62B7B895D641DC81(*uParam1, 15f);
		unk_0x7FC263D448DC8CAC(*uParam1);
		return;
	}
}

void func_415(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_402(28);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		vVar1 = { 0.02f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.5206f, 0f, 0.003f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_416(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_402(35);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0xC651C43AB13A15E5(iVar0, vParam1, fParam2, true, true, false);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x1C8705F667F673EA(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xB81134EAAC434D76(*uParam0, 1f);
		unk_0x3465486651F18FB8(*uParam0, 1f);
		unk_0x62B7B895D641DC81(*uParam0, 15f);
		unk_0x45DD72322A48EF4B(*uParam0, 0, func_413());
		unk_0x45DD72322A48EF4B(*uParam0, 1, func_413());
		unk_0x45DD72322A48EF4B(*uParam0, 2, func_413());
		unk_0x45DD72322A48EF4B(*uParam0, 3, func_413());
		unk_0x45DD72322A48EF4B(*uParam0, 4, func_413());
		unk_0x45DD72322A48EF4B(*uParam0, 5, func_413());
		unk_0x902CC10ED3851CA2(*uParam0, 3);
		unk_0x26E0FFDB1AD22AC5(*uParam0, 2);
		unk_0xE043FB70A76DE4AE(*uParam0, true);
		unk_0x7FC263D448DC8CAC(*uParam0);
		if (bParam3)
		{
			vVar1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			vVar1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			vVar1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			vVar1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_417(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_402(43);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x5FEE418CE11E6DDE(*uParam0, 227, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_418(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_402(109);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_409(*uParam0);
		return;
	}
}

void func_419(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_402(12);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		*uParam0 = unk_0x9BA5CF280376EEA4(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x167979048B7CE51D(*uParam0, true);
		unk_0x71CA80D41E1338B4(iVar0);
		unk_0x7FC2040EB34E0E31(*uParam0, 0, 0);
		unk_0x7FC263D448DC8CAC(*uParam0);
		vVar1 = { 0.04f, 0.02f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.01f, 0.05f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, -0.01f, 0f };
		unk_0x8B096ED4BB378AA7(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x8B096ED4BB378AA7(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_409(*uParam0);
		return;
	}
}

float func_420(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_421(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_103290[0 /*3*/];
		
		case 2:
			return Global_103290[1 /*3*/];
		
		case 3:
			return Global_103290[2 /*3*/];
		
		case 4:
			return Global_103290[3 /*3*/];
		
		case 5:
			return Global_103290[4 /*3*/];
		
		case 6:
			return Global_103290[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_403(iVar0);
	iVar2 = func_402(iVar1);
	iVar3 = func_401(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x5D98D654CDC2165A(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x5D98D654CDC2165A(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_423(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_403(iVar0);
	iVar2 = func_402(iVar1);
	iVar3 = func_401(iVar1);
	if (iVar2 != 0)
	{
		unk_0xB815670C37E03CDE(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0xB815670C37E03CDE(iVar3);
	}
	unk_0x8950ED5730F62EE8(iParam0, 25);
}

void func_424()
{
	if (Global_103313.f_3 == unk_0xE77FA521699F639C())
	{
		return;
	}
	Global_103313.f_3 = unk_0xE77FA521699F639C();
	if (Global_103313.f_2 == 0f && Global_103313.f_1 == 0f)
	{
		return;
	}
	if (Global_103313.f_2 != Global_103313.f_1)
	{
		Global_103313.f_2 = (Global_103313.f_2 + Global_103313);
		if (Global_103313 <= 0f)
		{
			if (Global_103313.f_2 < Global_103313.f_1)
			{
				Global_103313.f_2 = Global_103313.f_1;
			}
		}
		else if (Global_103313.f_2 > Global_103313.f_1)
		{
			Global_103313.f_2 = Global_103313.f_1;
		}
	}
	unk_0x5263FF82360FF7E2(0.5f, 0.5f, 1f, 1f, 255, 255, 255, round(Global_103313.f_2), 0);
}

void func_425(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	if (iParam1 <= 0)
	{
		Global_103313 = 0f;
		Global_103313.f_1 = fVar0;
		Global_103313.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_103313.f_2);
		fVar2 = (to_float(iParam1) / (unk_0x7C475FA8D877007F() * 1000f));
		Global_103313 = (fVar1 / fVar2);
		Global_103313.f_1 = fVar0;
	}
}

void func_426(int iParam0, int iParam1)
{
	func_427(&(Global_106565.f_10010.f_25), iParam1, 14336, 11);
}

void func_427(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || shift_left(iParam1, iParam3));
}

struct<8> func_428(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_429(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_103268[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_430()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				unk_0xB815670C37E03CDE(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (unk_0x5D98D654CDC2165A(joaat("v_ilev_uvline")))
				{
					if (func_431(8))
					{
						iLocal_53[4] = unk_0x7CA67831169E8AA6(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						unk_0xBEADAF07D2339505(iLocal_53[4], 471.48f, fVar0, 30.33f, 1, false, 0, 1);
						unk_0x1C8705F667F673EA(iLocal_53[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_53[1] = unk_0x7CA67831169E8AA6(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						unk_0xBEADAF07D2339505(iLocal_53[1], 471.48f, fVar0, 30.15f, 1, false, 0, 1);
						unk_0x1C8705F667F673EA(iLocal_53[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_431(9))
					{
						iLocal_53[5] = unk_0x7CA67831169E8AA6(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						unk_0xBEADAF07D2339505(iLocal_53[5], 471.48f, fVar0, 29.98f, 1, false, 0, 1);
						unk_0x1C8705F667F673EA(iLocal_53[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_431(10))
					{
						iLocal_53[3] = unk_0x7CA67831169E8AA6(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						unk_0xBEADAF07D2339505(iLocal_53[3], 471.48f, fVar0, 29.82f, 1, false, 0, 1);
						unk_0x1C8705F667F673EA(iLocal_53[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = unk_0x30B9FCF52BAAEB11(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_53[iVar2]))
						{
							unk_0x0CDD28A9DFCE2FCE(iLocal_53[iVar2], true, 0);
							unk_0x9282CF35C66BB0C4(iLocal_53[iVar2], 1);
							unk_0x576963EA28E5BD52(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					unk_0x71CA80D41E1338B4(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				unk_0x71CA80D41E1338B4(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_471();
				iLocal_52 = 0;
			}
		}
	}
}

int func_431(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_432()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70409.f_553)
	{
		if (!iLocal_54)
		{
			Global_70409.f_554 = 0;
			iLocal_54 = 1;
		}
		else if (Global_70409.f_554 >= 68)
		{
			Global_70409.f_553 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_467(&Local_140, iVar1);
			if ((Local_140.f_69 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Local_140.f_55, false);
			}
			else
			{
				fLocal_152[iVar1] = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Local_131, false);
			}
			if (func_466())
			{
				func_465(iVar1);
				func_463(iVar1);
				func_462(iVar1);
				func_461(iVar1);
				func_459(iVar1);
				func_458(iVar1);
				func_457(iVar1);
				func_434(iVar1);
				if (unk_0x0E4018692D92041D(uLocal_48[iVar1], 2))
				{
					if (Global_70409.f_553)
					{
						iLocal_54 = 0;
					}
					func_472(iVar1);
				}
			}
			else
			{
				func_433(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x0E4018692D92041D(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_472(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_472(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_472(iLocal_47);
	if (iLocal_157)
	{
		func_472(21);
		func_472(22);
		func_472(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_70409.f_553)
	{
		Global_70409.f_554++;
	}
}

void func_433(int iParam0)
{
	if (iLocal_49[iParam0] != 0)
	{
		unk_0x71CA80D41E1338B4(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_434(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0x0E4018692D92041D(uLocal_48[iParam0], 2))
	{
		func_433(iParam0);
	}
	unk_0xCE689A8E8C42ED78(&(uLocal_48[iParam0]), 2);
	if (unk_0x0E4018692D92041D(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vLocal_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0x0E4018692D92041D(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0x0E4018692D92041D(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0x0E4018692D92041D(Local_131.f_9, 19) || unk_0x0E4018692D92041D(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0x0E4018692D92041D(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56 == 21) || (iLocal_129 == 0 && Local_56 == 22)) || (iLocal_129 == 0 && Local_56 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
	{
		if (unk_0x91D5C8283D19AF49(Global_70409.f_139[iParam0], 0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (iParam0 == 24)
				{
					iVar3 = unk_0x7BDC41A7CA0C77A2(Global_70409.f_139[iParam0], -1, 0);
					if (!unk_0x765F6FEEFF39224F(iVar3))
					{
						iVar3 = unk_0xDAF93A0E27EE6FC7(Global_70409.f_139[iParam0], -1);
					}
					iVar4 = func_396(iVar3);
					if (iVar4 != Global_106565.f_32743.f_5591)
					{
						if (func_25(iVar4))
						{
							func_456("Updating last character to use vehicle gen", iVar4);
							Global_106565.f_32743.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0x9E08E12414BD4476(Global_70409.f_139[iParam0], 1))
				{
					func_455("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
					}
					Global_70409.f_139[iParam0] = 0;
					Global_70409[iParam0] = 1;
					func_454(iParam0);
					return;
				}
				if (((unk_0x0E4018692D92041D(uLocal_48[iParam0], 0) && !unk_0x0E4018692D92041D(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_455("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
					}
					unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
					Global_70409.f_139[iParam0] = 0;
					Global_70409[iParam0] = 1;
					func_454(iParam0);
					return;
				}
				if ((!unk_0x0E4018692D92041D(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x91BBD269506D61D2(Global_70409.f_139[iParam0], unk_0x33CD235DF1E6A94E(), 1))
					{
						func_455("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
						}
						unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
						Global_70409.f_139[iParam0] = 0;
						Global_70409[iParam0] = 1;
						func_454(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0x0E4018692D92041D(uLocal_48[iParam0], 1) && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(Global_70409.f_139[iParam0], true), vLocal_50[iParam0 /*3*/], true) > fVar5) || (!unk_0x0E4018692D92041D(uLocal_48[iParam0], 1) && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(Global_70409.f_139[iParam0], true), Local_131, true) > fVar5))
				{
					func_455("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
					}
					unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
					Global_70409.f_139[iParam0] = 0;
					Global_70409[iParam0] = 1;
					func_454(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_455("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
					}
					unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
					Global_70409.f_139[iParam0] = 0;
					Global_70409[iParam0] = 1;
					func_454(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_70409.f_139[iParam0], iLocal_129, 1) && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0]))
					{
						func_455("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
						}
						Global_70409.f_139[iParam0] = 0;
						Global_70409[iParam0] = 1;
						func_454(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!unk_0x0E4018692D92041D(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_106565.f_32743.f_4801;
						func_452(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_363(iVar6, iVar7))
						{
							if ((!func_63(Global_70409.f_139[iParam0]) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
							}
							func_31(Global_70409.f_139[iParam0], Global_106565.f_32743.f_5591);
							Global_70409[iParam0] = 1;
							func_454(iParam0);
						}
						else if (func_37(Global_70409.f_139[iParam0]))
						{
							func_32(Global_70409.f_139[iParam0], &Global_2460052);
							Global_2460051 = Global_106565.f_32743.f_5591;
							iLocal_170 = Global_70409.f_139[iParam0];
						}
					}
					func_455("No longer needed: Player out for range");
					unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
					unk_0xCE04CE961AF41AB9(Local_131, 3f, 0, 0, 0, false);
					unk_0xB7350047030F7672(Local_131, 3f, 0, 0, 0, 0, false, 0);
					Global_70409.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_70409.f_584 = { Local_131 };
						Global_70409.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0x0E4018692D92041D(Local_131.f_9, 30))
				{
					if (!unk_0x0E4018692D92041D(Local_131.f_9, 31))
					{
						if (!unk_0x0D386FBDF1E8CD84(Global_70409.f_139[iParam0]) && !unk_0x9F4718FD61B07058(Global_70409.f_139[iParam0]))
						{
							vVar8 = { unk_0xFBB1F99A825CAB09(Global_70409.f_139[iParam0], true) };
							if (vVar8.z >= func_451(iParam0))
							{
								unk_0x2CE0A5587E9F908F(Global_70409.f_139[iParam0], true);
								unk_0x8950ED5730F62EE8(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_70409.f_139[iParam0] = 0;
	}
	if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
	{
		func_455("No longer needed: Vehicle not driveable");
		unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
		Global_70409.f_139[iParam0] = 0;
		Global_70409[iParam0] = 1;
		func_454(iParam0);
		return;
	}
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (Global_71316 == iParam0)
	{
		func_455("Processing a vehgen vehicle handover request.");
		if (unk_0x765F6FEEFF39224F(Global_71315) && unk_0x91D5C8283D19AF49(Global_71315, 0))
		{
			if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]) && unk_0x91D5C8283D19AF49(Global_70409.f_139[iParam0], 0))
			{
				if (Global_70409.f_139[iParam0] == Global_71315)
				{
					func_455("Vehicle to be handed over is the same vehicle.");
					Global_71316 = -1;
					Global_71315 = 0;
					return;
				}
				else
				{
					func_455("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_70409.f_139[iParam0])) && !func_62(Global_70409.f_139[iParam0])) && unk_0x541D5C57194E73C4(Global_70409.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], true);
					}
					unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
					Global_70409.f_139[iParam0] = 0;
				}
			}
			Global_70409.f_139[iParam0] = Global_71315;
			Global_70409[iParam0] = 1;
			unk_0xCE689A8E8C42ED78(&(uLocal_48[iParam0]), 0);
			unk_0x8950ED5730F62EE8(&(uLocal_48[iParam0]), 1);
			unk_0xCE689A8E8C42ED78(&(uLocal_48[iParam0]), 3);
			vLocal_50[iParam0 /*3*/] = { unk_0xFBB1F99A825CAB09(Global_71315, true) };
			Global_71316 = -1;
			if (unk_0x0E4018692D92041D(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_59 = 2;
				func_32(Global_71315, &Var9);
				if (Global_71317)
				{
					func_114(iParam0, &Var9, unk_0xFBB1F99A825CAB09(Global_71315, true), unk_0xC472E34C8FBEC678(Global_71315), func_46(Global_71315));
				}
				else
				{
					func_114(iParam0, &Var9, Global_106565.f_32743.f_1864[Local_131.f_14 /*3*/], Global_106565.f_32743.f_1934[Local_131.f_14], func_46(Global_71315));
				}
				Global_70409.f_139[iParam0] = Global_71315;
				Global_70409.f_484[iParam0] = Global_70409.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_468();
				if (func_25(iVar10))
				{
					func_455("Players stored switch vehicle cleared for prep getaway.");
					Global_93385[iVar10] = 0;
				}
			}
			unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
			if (iParam0 == 24)
			{
				unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], false);
			}
			Global_71315 = 0;
			if (Global_2460052.f_66 != 0)
			{
				func_283(&Global_2460052, Global_2460051);
				Global_2460052.f_66 = 0;
			}
			return;
		}
		if (Global_2460052.f_66 != 0)
		{
			func_283(&Global_2460052, Global_2460051);
			Global_2460052.f_66 = 0;
		}
		func_455("Vehicle to be handed over doesn't exist.");
		Global_71316 = -1;
		Global_71315 = 0;
	}
	if (Global_70409[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_70409[iParam0] = 0;
			func_455("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_70409.f_584 = { 0f, 0f, 0f };
			Global_70409.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_106565.f_32743.f_1958[Local_131.f_14] != 0) && Global_106565.f_32743.f_1958[Local_131.f_14] > 3) && Local_131.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_50();
			iVar13 = Global_106565.f_32743.f_4801;
			func_452(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_363(iVar12, iVar13))
			{
				func_283(&(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/]), Global_106565.f_32743.f_5591);
				func_454(iParam0);
				Global_70409[iParam0] = 1;
				func_455("Cannot be created: Vehicle ready for impound");
				Global_2460052.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_70409.f_584 = { 0f, 0f, 0f };
		Global_70409.f_587 = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0x0E4018692D92041D(Local_131.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_450() && func_449(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0x0E4018692D92041D(Local_131.f_9, 10))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iParam0]))
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_70409.f_484[iParam0] = 0;
		}
	}
	if (unk_0x0E4018692D92041D(Local_131.f_9, 6))
	{
		if (func_448(Local_131.f_4, -1))
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_447(Local_131.f_4, -1))
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0x0E4018692D92041D(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_446(iParam0))
	{
		Global_70409[iParam0] = 1;
		func_455("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (unk_0x0E4018692D92041D(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (unk_0x0E4018692D92041D(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_106565.f_32743.f_1958[Local_131.f_14] > 0) && Global_106565.f_32743.f_1958[Local_131.f_14] <= 3)
	{
		if (unk_0x9E374B5F44A76AE2(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_12 = (Global_106565.f_32743.f_1958[Local_131.f_14] - 1);
		}
		else if (unk_0x0C2E237744BA0026(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_12 = (Global_106565.f_32743.f_1958[Local_131.f_14] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_445(Local_131.f_12, iVar14, Local_131, -1f))
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_474(iParam0, 0);
			}
			return;
		}
		if (unk_0x0E4018692D92041D(Local_131.f_9, 19) || unk_0x0E4018692D92041D(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_91091[Local_131.f_12 /*3*/][1] != -1 && (unk_0xE3903F59E2F22150() - Global_91091[Local_131.f_12 /*3*/][1]) < unk_0xD06834FF174EDC89() * 180)
				{
					Global_70409[iParam0] = 1;
					func_455("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar15, "...", 24);
					StringIntConCat(&vVar15, ((unk_0xD06834FF174EDC89() * 180 - (unk_0xE3903F59E2F22150() - Global_91091[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&vVar15, " seconds", 24);
					func_455(&vVar15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_91091[Local_131.f_12 /*3*/][0] != -1 && (unk_0xE3903F59E2F22150() - Global_91091[Local_131.f_12 /*3*/][0]) < unk_0xD06834FF174EDC89() * 180)
				{
					Global_70409[iParam0] = 1;
					func_455("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar16, "...", 24);
					StringIntConCat(&vVar16, ((unk_0xD06834FF174EDC89() * 180 - (unk_0xE3903F59E2F22150() - Global_91091[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&vVar16, " seconds", 24);
					func_455(&vVar16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_70409.f_584 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_12, iVar14);
		unk_0xB815670C37E03CDE(iLocal_49[iParam0]);
		unk_0x8950ED5730F62EE8(&(uLocal_48[iParam0]), 2);
		if (!unk_0x5D98D654CDC2165A(iLocal_49[iParam0]))
		{
			func_455("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_444(iLocal_49[iParam0], Local_131, 1))
		{
			func_455("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0xCE04CE961AF41AB9(Local_131, 3f, 0, 0, 0, false);
		unk_0xB7350047030F7672(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (iVar14 == 2)
		{
			func_439(&(Global_70409.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_439(&(Global_70409.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_70409[iParam0] = 1;
			func_455("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0xB815670C37E03CDE(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		unk_0x8950ED5730F62EE8(&(uLocal_48[iParam0]), 2);
		if (!unk_0x5D98D654CDC2165A(Local_131.f_4))
		{
			func_455("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_444(Local_131.f_4, Local_131, 1))
		{
			func_455("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0xCE04CE961AF41AB9(Local_131, 3f, 0, 0, 0, false);
		unk_0xB7350047030F7672(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (unk_0x0E4018692D92041D(Local_131.f_9, 23))
		{
			unk_0x247D6E3FBE2FCEAA(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_70409.f_139[iParam0] = unk_0xC651C43AB13A15E5(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (unk_0x0E4018692D92041D(Local_131.f_9, 10))
		{
			if (unk_0x57D74362A8BD1490(Local_131.f_4))
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/].f_77), 22);
			}
			if (unk_0x0E4018692D92041D(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_70409.f_139[iParam0], &Local_141);
				func_438(Local_141.f_77, &(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/].f_77), Local_131.f_4);
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/].f_77), 14);
			}
			func_376(Global_70409.f_139[iParam0], &(Global_106565.f_32743.f_69[Local_131.f_14 /*78*/]), 0, 1);
			Global_70409.f_484[iParam0] = Global_70409.f_139[iParam0];
		}
		else
		{
			if (unk_0x0E4018692D92041D(Local_131.f_9, 9))
			{
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], Local_131.f_10, Local_131.f_11);
			}
			if (unk_0x0E4018692D92041D(Local_131.f_9, 8))
			{
				unk_0xD303E20CB0AE4AD0(Global_70409.f_139[iParam0], 2);
				unk_0x6C175D3534D25075(Global_70409.f_139[iParam0], false);
				unk_0x5C307B2D58FCF9BC(Global_70409.f_139[iParam0], 0);
				unk_0x99AC89F745981C6F(Global_70409.f_139[iParam0], false);
				unk_0xC1B2760DA83A4DF8(Global_70409.f_139[iParam0], false);
				unk_0x17A7D0FC069931EA(Global_70409.f_139[iParam0], false);
				unk_0x4459178BAF2918E1(Global_70409.f_139[iParam0], false);
				unk_0x9611832841071B69(Global_70409.f_139[iParam0], true);
				unk_0xF70578F5CD9822CB(Global_70409.f_139[iParam0], true);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
	{
		func_437("Created - Coords: ", Local_131);
		func_436("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_70409.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], 121, 21);
				unk_0x4A7AB87632044178(Global_70409.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], 122, 89);
				unk_0x4A7AB87632044178(Global_70409.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], 0, 0);
				unk_0x4A7AB87632044178(Global_70409.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], 131, 132);
				unk_0x4A7AB87632044178(Global_70409.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x65EA11CF317FE4FA(Global_70409.f_139[iParam0], 159, 0);
				unk_0x4A7AB87632044178(Global_70409.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0x0E4018692D92041D(Local_131.f_9, 22))
		{
			unk_0x2CE0A5587E9F908F(Global_70409.f_139[iParam0], true);
		}
		if (unk_0x0E4018692D92041D(Local_131.f_9, 30))
		{
			unk_0xCE689A8E8C42ED78(&(Local_131.f_9), 31);
		}
		if (unk_0x0E4018692D92041D(Local_131.f_9, 26))
		{
			unk_0xD303E20CB0AE4AD0(Global_70409.f_139[iParam0], 7);
			unk_0x83FF9FA196577C82(Global_70409.f_139[iParam0], 1);
		}
		func_435(Global_70409.f_139[iParam0], iParam0);
		if (!unk_0x0E4018692D92041D(Local_131.f_9, 29) && !unk_0x0E4018692D92041D(Local_131.f_9, 30))
		{
			unk_0x1B2303F9DC2D90D5(Global_70409.f_139[iParam0], 1084227584);
		}
		unk_0x62B7B895D641DC81(Global_70409.f_139[iParam0], 0f);
		unk_0xFE8201EFB515D77B(Global_70409.f_139[iParam0], true);
		unk_0x26D5EA44545890ED(Global_70409.f_139[iParam0], unk_0x0E4018692D92041D(Local_131.f_9, 5));
	}
	unk_0xCE689A8E8C42ED78(&(uLocal_48[iParam0]), 0);
	unk_0xCE689A8E8C42ED78(&(uLocal_48[iParam0]), 1);
	Global_70409[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_70409.f_69[iParam0] = 1;
	}
	iVar17 = func_172(458, -1, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_70409.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2460052.f_66 = 0;
	}
}

void func_435(int iParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0xA3B3E54143896FE9(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0xA3B3E54143896FE9(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0xA3B3E54143896FE9(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x3A3707C1ECABF993(iParam0, 6, false);
				unk_0x3A3707C1ECABF993(iParam0, 1, true);
				break;
			}
	}
}

void func_436(char* sParam0, float fParam1)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_437(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_438(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, 1);
			unk_0xCE689A8E8C42ED78(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, 1);
			unk_0xCE689A8E8C42ED78(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, 1);
			unk_0xCE689A8E8C42ED78(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0xCE689A8E8C42ED78(&iVar0, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, 1);
			unk_0xCE689A8E8C42ED78(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_439(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x765F6FEEFF39224F(*iParam0))
		{
			if (unk_0x541D5C57194E73C4(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_106565.f_2357.f_539.f_4316) && Global_106565.f_9079.f_99.f_58[131])
		{
			Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xB815670C37E03CDE(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x5D98D654CDC2165A(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xC651C43AB13A15E5(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, false);
				unk_0x09993E7216CF52C4(*iParam0, true);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4A7AB87632044178(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar3 + 1, !Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_443(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4459178BAF2918E1(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_377(iParam0, &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_440(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xB815670C37E03CDE(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x5D98D654CDC2165A(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xC651C43AB13A15E5(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, false);
				unk_0x09993E7216CF52C4(*iParam0, true);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4A7AB87632044178(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar4 + 1, !Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_443(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4459178BAF2918E1(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_377(iParam0, &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_440(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xB815670C37E03CDE(Var2);
			if (unk_0x5D98D654CDC2165A(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xC651C43AB13A15E5(Var2, vParam2, fParam3, true, true, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, false);
				unk_0x09993E7216CF52C4(*iParam0, true);
				StringCopy(&cVar6, unk_0x00D614EBCFFD919D(*iParam0), 16);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x4A7AB87632044178(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Var2.f_24);
				}
				if (func_443(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Var2.f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x4459178BAF2918E1(*iParam0, Var2.f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Var2.f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Var2.f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Var2.f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Var2.f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Var2.f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Var2.f_90);
						}
					}
				}
				func_377(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bagger") && !Global_106565.f_9079.f_99.f_58[118])
					{
						unk_0x6F10E9B95245828B(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_106565.f_2357.f_539.f_4316) && Global_106565.f_9079.f_99.f_58[131]) && unk_0x541D5C57194E73C4(*iParam0) == joaat("tailgater"))
				{
					unk_0xB4B3AEABE432069B(*iParam0, 6, 1, false);
					unk_0xB4B3AEABE432069B(*iParam0, 14, 7, false);
					unk_0xB4B3AEABE432069B(*iParam0, 11, 2, false);
					unk_0xB4B3AEABE432069B(*iParam0, 2, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 7, 5, false);
					unk_0xB4B3AEABE432069B(*iParam0, 0, 0, false);
					unk_0xB4B3AEABE432069B(*iParam0, 3, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 13, 1, false);
					unk_0xB4B3AEABE432069B(*iParam0, 4, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 12, 2, false);
					unk_0xBCD21D2535E4A2C9(*iParam0, 22, true);
					unk_0x4FF8F6D30BFBB224(*iParam0, 2);
					unk_0xB4B3AEABE432069B(*iParam0, 23, 11, false);
					unk_0xBF98CE54BD141AFF(*iParam0, 2);
					Global_106565.f_2357.f_539.f_4316 = 1;
					func_232(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Var2);
				}
				if (bVar5)
				{
					func_440(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			Global_91043[iVar0] = iParam0;
			Global_91053[iVar0] = iParam1;
			Global_91063[iVar0] = unk_0x541D5C57194E73C4(iParam0);
			if (unk_0x0C2E237744BA0026(Global_91063[iVar0]))
			{
				Global_91091[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_91091[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_441(var uParam0)
{
	if (!func_442(*uParam0))
	{
		unk_0x3A3707C1ECABF993(*uParam0, 5, !Global_106565.f_9079.f_99.f_58[119]);
	}
}

bool func_442(int iParam0)
{
	return unk_0x34B1602009421B58(iParam0, 5);
}

int func_443(var uParam0, int iParam1)
{
	if (unk_0xB331FCEB94EB05C8())
	{
	}
	else if (Global_106565.f_20112.f_261)
	{
		*uParam0 = { Global_106565.f_20112.f_267 };
		*iParam1 = Global_106565.f_20112.f_271;
		return 1;
	}
	return 0;
}

int func_444(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if ((iParam2 && unk_0xBB5E373390A5F824()) && unk_0x1BCDA92AD0A7835B(joaat("startup_positioning")) > 0)
	{
		func_455("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0xFEF5F9BB57EA2E8D(iParam0, &vVar0, &vVar1);
	fVar2 = unk_0x16E00F066AFFEA0D(vVar1, vVar0, true);
	if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vParam1, true) < (fVar2 * 0.5f))
	{
		func_436("player is in vehicle bounds - fLength: ", fVar2);
		func_436("player is in vehicle bounds - fDistance: ", unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vParam1, true));
		return 1;
	}
	return 0;
}

int func_445(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]) && unk_0x91D5C8283D19AF49(Global_91043[iVar0], 0))
			{
				if (unk_0x541D5C57194E73C4(Global_91043[iVar0]) == iVar2 && Global_91053[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(Global_91043[iVar0], false), vParam2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_448(Local_131.f_4, -1) || func_447(Local_131.f_4, -1)) || unk_0x1BCDA92AD0A7835B(joaat("exile2")) > 0) || !func_431(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[20]) && !unk_0xD62C4419A41F106A(Global_70409.f_484[20], 0)) && unk_0x91D5C8283D19AF49(Global_70409.f_484[20], 0))
		{
			if (Local_131.f_4 == unk_0x541D5C57194E73C4(Global_70409.f_484[20]))
			{
				unk_0x344F2893FA037279(Global_70409.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_10 && iVar1 == Local_131.f_11)
				{
					func_278(20);
				}
			}
		}
	}
	return 0;
}

int func_447(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0xACC2D6D9762C28BB(Local_131, 200f, iParam0, iVar0);
	if ((unk_0x765F6FEEFF39224F(iVar1) && unk_0x91D5C8283D19AF49(iVar1, 0)) && unk_0x541D5C57194E73C4(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0xE84981C3FDDC67C7(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x2437CAE892D2F387(unk_0x33CD235DF1E6A94E(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((unk_0x765F6FEEFF39224F(uVar0[iVar1]) && unk_0x91D5C8283D19AF49(uVar0[iVar1], 0)) && unk_0x541D5C57194E73C4(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || unk_0xE84981C3FDDC67C7(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_449(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_359(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_450()
{
	return Global_70409.f_138;
}

float func_451(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_452(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_367(*uParam0);
	iVar3 = func_366(*uParam0);
	iVar4 = func_365(*uParam0);
	iVar5 = func_364(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_453(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_453(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_454(int iParam0)
{
	if (unk_0x0E4018692D92041D(Local_131.f_9, 13))
	{
		func_474(iParam0, 0);
	}
}

void func_455(char* sParam0)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
	}
}

void func_456(char* sParam0, int iParam1)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_457(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = 1193854962;
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = 160628940;
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			vVar1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar1, true) < 250f)
	{
		if (!unk_0x765F6FEEFF39224F(iLocal_146[iVar3]))
		{
			unk_0xB815670C37E03CDE(iVar4);
			iLocal_147 = 1;
			if (unk_0x5D98D654CDC2165A(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = unk_0xDD9A603448A23A17(iVar4, vVar1, false, true, false);
					unk_0x1C8705F667F673EA(iLocal_146[iVar3], 0f, 0f, fVar2, 2, 1);
					unk_0x6B8FD1D1616EE677(iLocal_146[iVar3], false);
					unk_0xF70578F5CD9822CB(iLocal_146[iVar3], true);
					unk_0x71CA80D41E1338B4(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((unk_0x765F6FEEFF39224F(iLocal_146[iVar3]) && !unk_0x3F219400E5FE4B69(iLocal_146[iVar3])) && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar1, true) > 255f)
		{
			unk_0xEC26F4BFC9942A0C(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				unk_0x71CA80D41E1338B4(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_458(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!unk_0x0E4018692D92041D(Local_131.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_70409.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_70409.f_346[iParam0])
				{
					unk_0xF1CFA0046BB67893(Global_70409.f_415[iParam0], 0);
				}
			}
			else if (!Global_70409.f_346[iParam0])
			{
				Global_70409.f_415[iParam0] = unk_0x0335D8135051EA56(Local_131.f_15, Local_131.f_18, 0, 1, 1, 1);
			}
		}
		Global_70409.f_346[iParam0] = bVar0;
	}
}

void func_459(int iParam0)
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(Local_131.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0x0E4018692D92041D(Local_131.f_9, 16))
			{
				iVar0 = func_460(9);
			}
			else if (unk_0x0E4018692D92041D(Local_131.f_9, 18))
			{
				iVar0 = func_460(4);
			}
			if (iVar0 == Local_131.f_12)
			{
				func_326(iParam0, 5, 1);
			}
		}
	}
}

int func_460(int iParam0)
{
	return Global_106565.f_24898[iParam0 /*4*/];
}

void func_461(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (unk_0x0E4018692D92041D(Local_131.f_9, 4))
		{
			func_326(iParam0, 3, 1);
		}
		else
		{
			func_326(iParam0, 3, 1);
		}
	}
}

void func_462(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_130)
	{
		if (unk_0x0E4018692D92041D(Local_131.f_9, 0) || (unk_0x0E4018692D92041D(Local_131.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!unk_0x0E4018692D92041D(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0 || func_67(iParam0, 5)) || !unk_0x0E4018692D92041D(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xE38E3CF1625A4145(Global_70409.f_208[iParam0]))
				{
					if (func_431(0))
					{
						if (unk_0x0E4018692D92041D(Local_131.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_70409.f_208[iParam0] = unk_0x2C0ED4741A007C6A(Local_140.f_55);
							if (Local_140.f_58 != -1)
							{
								unk_0xA20C1DE21F2F071C(Global_70409.f_208[iParam0], Local_140.f_58);
								if (!unk_0x786AF4A44E1B5B4B(&(Local_140.f_59)))
								{
									unk_0x1C95CD840303FC37(Global_70409.f_208[iParam0], &(Local_140.f_59));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_70409.f_208[iParam0] = unk_0x2C0ED4741A007C6A(Local_140.f_55);
							if (Local_131.f_13 != -1)
							{
								unk_0xA20C1DE21F2F071C(Global_70409.f_208[iParam0], Local_131.f_13);
								if (!unk_0x786AF4A44E1B5B4B(&(Local_140.f_59)))
								{
									unk_0x1C95CD840303FC37(Global_70409.f_208[iParam0], &(Local_140.f_59));
								}
								if (Local_131.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0xB9E84A421C105943(Global_70409.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_70409.f_208[iParam0] = unk_0x2C0ED4741A007C6A(Local_131);
							if (Local_131.f_13 != -1)
							{
								unk_0xA20C1DE21F2F071C(Global_70409.f_208[iParam0], Local_131.f_13);
								if (!unk_0x786AF4A44E1B5B4B(&(Local_140.f_59)))
								{
									unk_0x1C95CD840303FC37(Global_70409.f_208[iParam0], &(Local_140.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0xB9E84A421C105943(Global_70409.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0xD99530E6E53B24BF(Global_70409.f_208[iParam0], !unk_0x0E4018692D92041D(Local_131.f_9, 1));
						unk_0x0E734BC61706D976(Global_70409.f_208[iParam0], false);
						unk_0xC51C58C963968740(Global_70409.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xE38E3CF1625A4145(Global_70409.f_208[iParam0]))
		{
			unk_0x1ABDB383C83A336A(&(Global_70409.f_208[iParam0]));
		}
	}
}

void func_463(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (unk_0x0E4018692D92041D(Local_131.f_9, 3))
			{
				func_464(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_326(iParam0, 1, 1);
			}
			else
			{
				func_326(iParam0, 1, 1);
			}
		}
	}
}

void func_464(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_286(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_465(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x0E4018692D92041D(Local_131.f_9, 7) || Local_131.f_12 == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && unk_0x0E4018692D92041D(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_29 = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_70409.f_592)
					{
						Global_70409.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56 == 12 || Local_56 == 13) || Local_56 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56 == 15 || Local_56 == 16) || Local_56 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56 == 18 || Local_56 == 19) || Local_56 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_131(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_70409.f_592)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_70409.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x097E7778E3E162E8(iVar2))
										{
											Global_70409.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x444D956C7F94526E(iVar2) || unk_0xC692A86D0A8FD54C(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_70409.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_70409.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = -1;
		Local_56.f_1 = 99999.99f;
	}
	if (!unk_0x0E4018692D92041D(uLocal_48[iParam0], 0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			if (unk_0x91D5C8283D19AF49(Global_70409.f_139[iParam0], 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_139[iParam0], 0))
					{
						if (!unk_0x0E4018692D92041D(uLocal_48[iParam0], 1) || unk_0x0E4018692D92041D(uLocal_48[iParam0], 3))
						{
							unk_0x8950ED5730F62EE8(&(uLocal_48[iParam0]), 0);
							func_326(iParam0, 4, 1);
							func_326(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0x8950ED5730F62EE8(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[iParam0]) && unk_0x91D5C8283D19AF49(Global_70409.f_484[iParam0], 0)) && unk_0x541D5C57194E73C4(Global_70409.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (unk_0xD4B4F68F3449CBEC(Global_70409.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					unk_0xC7B227BF170DFA81(Global_70409.f_484[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!unk_0xD4B4F68F3449CBEC(Global_70409.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				unk_0xC7B227BF170DFA81(Global_70409.f_484[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_466()
{
	return 1;
}

var func_467(var uParam0, int iParam1)
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_468()
{
	func_469();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_469()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_397(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_396(unk_0x33CD235DF1E6A94E());
			if (func_25(iVar0) && (!func_27(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_25(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

void func_470()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE38E3CF1625A4145(Global_70409.f_208[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(Global_70409.f_208[iVar0]));
		}
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iVar0]))
		{
			if (unk_0x91D5C8283D19AF49(Global_70409.f_139[iVar0], 0))
			{
				if (unk_0x9E08E12414BD4476(Global_70409.f_139[iVar0], 1))
				{
					unk_0x65F544B458249682(&(Global_70409.f_139[iVar0]));
					Global_70409.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (unk_0x117DAF3BF7232886(Local_56.f_110))
	{
		unk_0x189377BFBDC9127F(Local_56.f_110, false);
		unk_0x2F8A4DF7D0DFF0A8(Local_56.f_110, 0);
	}
	if (unk_0x117DAF3BF7232886(Local_56.f_111))
	{
		unk_0x189377BFBDC9127F(Local_56.f_111, false);
		unk_0x2F8A4DF7D0DFF0A8(Local_56.f_111, 0);
	}
	if (Local_56.f_3 != 0)
	{
		func_274();
		unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
	}
	if (unk_0xE38E3CF1625A4145(Global_70409.f_583))
	{
		unk_0x1ABDB383C83A336A(&(Global_70409.f_583));
	}
	if (iLocal_115 != -1)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_70409.f_577)
		{
			func_230(47, 1);
			func_228(47, 1);
			Global_70409.f_577 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_70409.f_553 = 0;
	unk_0x5894DC159447E10A();
}

void func_471()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_53[iVar0]))
		{
			unk_0xEC26F4BFC9942A0C(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x0E4018692D92041D(iLocal_150[iVar0], iVar1))
	{
		unk_0x8950ED5730F62EE8(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_473()
{
	int iVar0;
	
	if (func_297(25))
	{
		if (Global_106565.f_32743.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_106565.f_32743.f_69[22 /*78*/].f_66, 0))
		{
			Global_106565.f_32743.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_106565.f_32743.f_69[22 /*78*/].f_77 = 0;
			Global_106565.f_32743.f_69[22 /*78*/].f_65 = 0;
			Global_106565.f_32743.f_69[22 /*78*/].f_62 = 255;
			Global_106565.f_32743.f_69[22 /*78*/].f_63 = 255;
			Global_106565.f_32743.f_69[22 /*78*/].f_64 = 255;
			Global_106565.f_32743.f_69[22 /*78*/].f_5 = 0;
			Global_106565.f_32743.f_69[22 /*78*/].f_6 = 0;
			Global_106565.f_32743.f_69[22 /*78*/].f_7 = 0;
			Global_106565.f_32743.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_106565.f_32743.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_106565.f_32743.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_297(21) && Global_106565.f_32743.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_106565.f_32743.f_69[9 /*78*/].f_66, 0))
	{
		Global_106565.f_32743.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_297(22) && Global_106565.f_32743.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_106565.f_32743.f_69[10 /*78*/].f_66, 0))
	{
		Global_106565.f_32743.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_297(23) && Global_106565.f_32743.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_106565.f_32743.f_69[11 /*78*/].f_66, 0))
	{
		Global_106565.f_32743.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_297(26) && !func_39(Global_106565.f_32743.f_69[12 /*78*/].f_66, 0))
	{
		func_474(26, 0);
	}
	if (func_297(27) && !func_39(Global_106565.f_32743.f_69[13 /*78*/].f_66, 0))
	{
		func_474(27, 0);
	}
	if (func_297(28) && !func_39(Global_106565.f_32743.f_69[14 /*78*/].f_66, 0))
	{
		func_474(28, 0);
	}
	if (func_297(29) && !func_39(Global_106565.f_32743.f_69[15 /*78*/].f_66, 0))
	{
		func_474(29, 0);
	}
	if (func_297(30) && !func_39(Global_106565.f_32743.f_69[16 /*78*/].f_66, 0))
	{
		func_474(30, 0);
	}
	if (func_297(31) && !func_39(Global_106565.f_32743.f_69[17 /*78*/].f_66, 0))
	{
		func_474(31, 0);
	}
	if (func_297(32) && !func_39(Global_106565.f_32743.f_69[18 /*78*/].f_66, 0))
	{
		func_474(32, 0);
	}
	if (func_297(33) && !func_39(Global_106565.f_32743.f_69[19 /*78*/].f_66, 0))
	{
		func_474(33, 0);
	}
	if (func_297(34) && !func_39(Global_106565.f_32743.f_69[20 /*78*/].f_66, 0))
	{
		func_474(34, 0);
	}
}

void func_474(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_326(iParam0, 1, 0);
			func_326(iParam0, 2, 0);
			func_326(iParam0, 3, 0);
			func_326(iParam0, 4, 0);
			func_326(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_326(iParam0, 0, 0);
	}
}

int func_475()
{
	return 0;
}

int func_476()
{
	return 1;
}

int func_477()
{
	return 1;
}

int func_478()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_479(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_483();
	func_482();
	func_480();
}

void func_480()
{
	Global_104943 = 2405.849f;
	Global_104946 = 2408.22f;
	Global_104949 = 2386.096f;
	Global_104952 = 69.1875f;
	Global_104955[0 /*3*/] = 2417.105f;
	Global_104955[1 /*3*/] = 2407.058f;
	Global_104955[2 /*3*/] = 2371.92f;
	Global_104955[3 /*3*/] = 2399.583f;
	Global_104955[4 /*3*/] = 2416.519f;
	Global_104955[5 /*3*/] = 2430.345f;
	Global_104955[6 /*3*/] = 2385.819f;
	Global_104977[0] = 157.8636f;
	Global_104977[1] = 174.7226f;
	Global_104977[2] = 270.7562f;
	Global_104977[3] = 190.7495f;
	Global_104977[4] = 27.6506f;
	Global_104977[5] = 358.1218f;
	Global_104977[6] = 339.4363f;
	Global_104985 = 2399.82f;
	Global_104988 = 2414.7f;
	func_481(&Global_103312, 64);
}

void func_481(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_482()
{
	Global_103317[0 /*3*/].f_1 = 5141.01f;
	Global_103317[1 /*3*/].f_1 = 6048.71f;
	Global_103317[2 /*3*/].f_1 = 6185.32f;
	Global_103317[3 /*3*/].f_1 = 5180.99f;
	Global_103317[4 /*3*/].f_1 = 4582.72f;
	Global_103317[5 /*3*/].f_1 = 4831.82f;
	Global_103317[6 /*3*/].f_1 = 4322.66f;
	Global_103317[7 /*3*/].f_1 = 3503.92f;
	Global_103317[8 /*3*/].f_1 = 3777.54f;
	Global_103317[9 /*3*/].f_1 = 3810.8f;
	Global_103317[10 /*3*/].f_1 = 3095.88f;
	Global_103351[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_103351[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_103351[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_103351[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_103351[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_103351[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_103351[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_103351[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_103351[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_103351[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_103351[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_103351[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_103351[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_103351[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_103351[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_103351[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_103351[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_103351[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_103351[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_103351[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_103351[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_103351[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_103351[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_103351[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_103351[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_103351[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_103351[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_103351[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_103351[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_103351[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_103351[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_103351[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_103351[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_103351[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_103351[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_103351[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_103351[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_103351[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_103351[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_103351[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_103351[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_103351[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_103351[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_103351[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_103351[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_103351[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_103351[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_103351[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_103351[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_103351[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_103351[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_103351[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_103351[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_103351[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_103351[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_103351[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_103351[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_103351[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_103351[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_103351[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_103351[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_103351[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_103351[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_481(&Global_103312, 16);
}

void func_483()
{
	Global_103268[0 /*3*/] = -1567.382f;
	Global_103268[1 /*3*/] = -1436.305f;
	Global_103268[2 /*3*/] = 31.2408f;
	Global_103268[3 /*3*/] = 278.1924f;
	Global_103268[4 /*3*/] = 1116.002f;
	Global_103268[5 /*3*/] = 1676.193f;
	Global_103290[0 /*3*/] = -1592.642f;
	Global_103290[1 /*3*/] = -1573.501f;
	Global_103290[2 /*3*/] = -1459.359f;
	Global_103290[3 /*3*/] = 21.1005f;
	Global_103290[4 /*3*/] = 262.9409f;
	Global_103290[5 /*3*/] = 1091.07f;
	func_481(&Global_103312, 1);
}

