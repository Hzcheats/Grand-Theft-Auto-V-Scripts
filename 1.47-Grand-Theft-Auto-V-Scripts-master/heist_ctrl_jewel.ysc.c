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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_96 = 0;
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
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_254 = -1;
	if (unk_0x9EC5BDC006623C42(82))
	{
		func_236();
	}
	func_235(3);
	func_224(&(Local_46.f_1), func_234(Global_89741[1 /*19*/], Global_89741[2 /*19*/]));
	func_223(&Local_46, 0);
	while (!func_222(4))
	{
		if (!Global_71859)
		{
			if (!func_221(86) && !func_220(14))
			{
				func_209(&Local_46, 32f, 35f);
			}
			else if (unk_0x0E4018692D92041D(Local_46.f_449, 0))
			{
				func_207(&Local_46);
			}
			if (unk_0x0E4018692D92041D(Local_46.f_449, 0))
			{
				if (func_206() == 86)
				{
					while (!func_207(&Local_46))
					{
						wait(0);
					}
				}
			}
			func_204(&Local_46);
			func_195();
			func_146();
			if (func_144(0) || unk_0x0E4018692D92041D(Local_46.f_449, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		wait(0);
	}
	func_1(3);
	func_236();
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iVar0], iVar1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_9079.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	
	if (Global_71850)
	{
		return;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return;
	}
	iVar0 = round((1f + (1000f * timestep())));
	Global_89932.f_8 = (Global_89932.f_8 + iVar0);
}

void func_3(var uParam0)
{
	if (unk_0x0E4018692D92041D(Global_89720, *uParam0))
	{
		if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 15);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 16);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 14);
			unk_0xCE689A8E8C42ED78(&Global_89720, *uParam0);
		}
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 5);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 5);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 5);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0xE3903F59E2F22150();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 5);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 4);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0xE3903F59E2F22150();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_106565.f_1.f_6[*uParam0] = 1;
			unk_0xEDF90B96BED57BCE(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 5);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0xE3903F59E2F22150();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0xF745CA12DC8836EB(2, 13, true);
	sVar1 = unk_0xF745CA12DC8836EB(2, 11, true);
	sVar2 = unk_0x4464D5595CEED843(0, 32, true);
	sVar3 = unk_0xF745CA12DC8836EB(0, 1, true);
	sVar4 = unk_0x4464D5595CEED843(2, 201, true);
	sVar5 = unk_0x4464D5595CEED843(2, 202, true);
	if (unk_0x5D79F3D06EB318A0(2))
	{
		sVar0 = unk_0xF745CA12DC8836EB(2, 6, true);
		sVar1 = unk_0xF745CA12DC8836EB(2, 7, true);
		sVar2 = unk_0xF745CA12DC8836EB(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0x8DAB5B12D7B9AD29(0.6f);
	unk_0x818901B332D5541D();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
				}
				else
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					unk_0x818901B332D5541D();
				}
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x295B86DE57A0721D(false);
				unk_0x818901B332D5541D();
			}
			break;
		
		case 1:
			unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x295B86DE57A0721D(false);
			unk_0x818901B332D5541D();
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x818901B332D5541D();
				if (*uParam0 == 2)
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x818901B332D5541D();
				}
				else
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x818901B332D5541D();
				}
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x295B86DE57A0721D(false);
				unk_0x818901B332D5541D();
			}
			break;
		
		case 3:
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				if (unk_0x0E4018692D92041D(uParam0->f_449, 9))
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
				}
				else
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x818901B332D5541D();
					unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x818901B332D5541D();
				}
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x295B86DE57A0721D(false);
				unk_0x818901B332D5541D();
			}
			break;
		
		case 4:
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x818901B332D5541D();
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0x818901B332D5541D();
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0x818901B332D5541D();
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0x818901B332D5541D();
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0x818901B332D5541D();
				unk_0xBB698266C5FDF0A7(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x295B86DE57A0721D(false);
				unk_0x818901B332D5541D();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_9(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0xEDF90B96BED57BCE(0);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 18);
	}
}

int func_12(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_105205 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x06948208804E0997())
		{
			unk_0xEDF90B96BED57BCE(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0xCE3CFF625BEBAA04(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106565.f_20404.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_106565.f_20404.f_145 - 1));
			Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
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

void func_15(int iParam0)
{
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/].f_4), "", 16);
	Global_106565.f_20404[iParam0 /*16*/].f_8 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = -1;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)
{
	Global_106565.f_20404[iParam0 /*16*/] = { Global_106565.f_20404[iParam1 /*16*/] };
	Global_106565.f_20404[iParam0 /*16*/].f_4 = { Global_106565.f_20404[iParam1 /*16*/].f_4 };
	Global_106565.f_20404[iParam0 /*16*/].f_8 = Global_106565.f_20404[iParam1 /*16*/].f_8;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = Global_106565.f_20404[iParam1 /*16*/].f_10;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = Global_106565.f_20404[iParam1 /*16*/].f_9;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = Global_106565.f_20404[iParam1 /*16*/].f_11;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = Global_106565.f_20404[iParam1 /*16*/].f_12;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = Global_106565.f_20404[iParam1 /*16*/].f_13;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = Global_106565.f_20404[iParam1 /*16*/].f_14;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = Global_106565.f_20404[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415);
	unk_0x818901B332D5541D();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(8);
			unk_0x818901B332D5541D();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x818901B332D5541D();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(uParam0->f_449, 7))
	{
		if (!unk_0x0E4018692D92041D(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_106565.f_1[*uParam0])
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_106565.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFAC8F20FBC764F4D())
					{
						if (((!unk_0x0E4018692D92041D(uParam0->f_449, 11) && !unk_0x0E4018692D92041D(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							unk_0x37621D6689F9E3C3("PB_H_CHOICE");
							unk_0x092150016C06C431(0, 1, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_106565.f_1.f_6[*uParam0])
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_106565.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFAC8F20FBC764F4D())
					{
						if (!unk_0x0E4018692D92041D(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0x0E4018692D92041D(uParam0->f_449, 11) && !unk_0x0E4018692D92041D(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_89741[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0x37621D6689F9E3C3("PB_H_GUNM");
												unk_0x092150016C06C431(0, 1, false, -1);
												break;
											
											case 2:
												unk_0x37621D6689F9E3C3("PB_H_HACK");
												unk_0x092150016C06C431(0, 1, false, -1);
												break;
											
											case 3:
												unk_0x37621D6689F9E3C3("PB_H_DRIV");
												unk_0x092150016C06C431(0, 1, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_106565.f_20404.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0x786AF4A44E1B5B4B(&Param2))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param2 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam3;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0xE3903F59E2F22150() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_11 = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0x303324EA56AE968C((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_649.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0x303324EA56AE968C((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (to_float(*uParam1) / to_float(iVar0));
	*uParam3 = (to_float(uParam1->f_1) / to_float(iVar1));
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)
{
	int iVar0;
	
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "CREATE_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415);
	unk_0x4D9DA18AB3C2A466(1);
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_16));
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_16.f_1));
	unk_0x818901B332D5541D();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(2);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x818901B332D5541D();
			break;
		
		case 1:
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(3);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x4D9DA18AB3C2A466(4);
			unk_0x818901B332D5541D();
			break;
		
		case 3:
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(6);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x4D9DA18AB3C2A466(7);
			unk_0x818901B332D5541D();
			break;
		
		case 4:
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(8);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415);
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x818901B332D5541D();
			break;
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415);
	unk_0x818901B332D5541D();
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415);
	unk_0x295B86DE57A0721D(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0x818901B332D5541D();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
		unk_0x4D9DA18AB3C2A466(uParam0->f_415);
		unk_0x818901B332D5541D();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(8);
			unk_0x818901B332D5541D();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x818901B332D5541D();
		}
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
		unk_0x4D9DA18AB3C2A466(99);
		unk_0x818901B332D5541D();
	}
}

bool func_32(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_106565.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0x818901B332D5541D();
}

void func_34(var uParam0)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415);
	unk_0x818901B332D5541D();
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_89741[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x295B86DE57A0721D(true);
	unk_0x818901B332D5541D();
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x818901B332D5541D();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x818901B332D5541D();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_89741[iVar1 /*19*/].f_1[iParam1];
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "CREATE_VIEW");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x4D9DA18AB3C2A466(0);
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0x818901B332D5541D();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_106565.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_106565.f_1.f_12[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_106565.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x295B86DE57A0721D(true);
		unk_0x818901B332D5541D();
	}
	else
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x818901B332D5541D();
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_106565.f_1.f_12[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_1.f_118, iParam0);
}

bool func_39(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_1.f_116, iParam0);
}

int func_40(int iParam0)
{
	return Global_89587[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xBB698266C5FDF0A7(iParam0, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(iParam2);
	unk_0x4D9DA18AB3C2A466(iParam3);
	unk_0x4D9DA18AB3C2A466(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x4D9DA18AB3C2A466(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x4D9DA18AB3C2A466(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x4D9DA18AB3C2A466(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x4D9DA18AB3C2A466(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x4D9DA18AB3C2A466(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x4D9DA18AB3C2A466(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x4D9DA18AB3C2A466(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x4D9DA18AB3C2A466(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x4D9DA18AB3C2A466(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x4D9DA18AB3C2A466(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x4D9DA18AB3C2A466(func_42(iParam1));
	unk_0x818901B332D5541D();
}

var func_42(int iParam0)
{
	return Global_89587[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return round(((to_float(func_45(iParam0, iParam1)) / to_float(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_106565.f_1.f_73[iParam0 /*3*/].f_1, Global_106565.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return shift_right(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)
{
	return round(((to_float(func_52(iParam0, iParam1)) / to_float(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return round(((to_float(func_56(iParam0, iParam1)) / to_float(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
{
	switch (Global_89587[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x818901B332D5541D();
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(Global_89741[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0xCE3CFF625BEBAA04(&(Global_89741[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_89741[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0x8950ED5730F62EE8(&(Global_89741[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_89741[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_89741[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x8950ED5730F62EE8(&(Global_89741[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4D9DA18AB3C2A466(99);
	unk_0x818901B332D5541D();
	func_18(uParam0);
}

void func_64(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4D9DA18AB3C2A466(99);
			unk_0x818901B332D5541D();
			break;
	}
	unk_0xEDF90B96BED57BCE(0);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_205[iParam0];
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)
{
	if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!unk_0x0E4018692D92041D(uParam0->f_449, 2))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (!func_143(0))
			{
				if (func_134(8))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), uParam0->f_401) < 4f)
					{
						vVar1 = { uParam0->f_401 - unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
						fVar2 = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
						fVar3 = unk_0x7EECA16E87982278((uParam0->f_404 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_404;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0x7EECA16E87982278((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_404 - fVar2) < fVar3)
								{
									fVar3 = unk_0x7EECA16E87982278((uParam0->f_404 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0x7EECA16E87982278((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_133(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_132(uParam0->f_451, 1))
			{
				func_130(&(uParam0->f_451));
				func_116(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_130(&(uParam0->f_451));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_78(uParam0);
		if (((!bVar5 && uParam0->f_453 > 15) && (unk_0x833B1A3D9F713E03(2, iLocal_36) || unk_0x833B1A3D9F713E03(2, 238))) || unk_0x0E4018692D92041D(uParam0->f_449, 8))
		{
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_453 = 0;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0f, (1f * cos((180f - uParam0->f_404))), (1f * sin((180f - uParam0->f_404)))) };
			unk_0x8C1596BAD35D957A(vVar0, &(vVar0.f_2), 0, 0);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), uParam0->f_404);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			unk_0x13C3FE558ED056EE(unk_0x33CD235DF1E6A94E(), -1871534317, false, 0, 0);
			unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 1, 0);
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 134);
	}
	unk_0xDFF589A2149528CE(true);
	func_72(0);
	func_71();
	unk_0xD384C2E6BE0D5ABF();
	unk_0x019859CB72B1DB4C(17);
	unk_0x45B8601B4D532792(0);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0xEDF90B96BED57BCE(1);
	while (unk_0xFAC8F20FBC764F4D())
	{
		unk_0xEDF90B96BED57BCE(1);
		wait(0);
	}
	iVar1 = unk_0x90D2E06562D440E1(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0x2F7BF094F3C2A257(iVar1);
	}
	unk_0xCE78D564BC829C9F();
	func_64(uParam0);
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 7);
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 2);
	Global_89719 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		if (bParam2)
		{
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0x49D25022440E65EE(*uParam0))
		{
			unk_0x189377BFBDC9127F(*uParam0, false);
		}
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xD3260F66BCA580A2();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_71()
{
	Global_17272.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_77();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_143(0))
		{
			func_73(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_73(int iParam0)
{
	if (func_76())
	{
		return;
	}
	if (Global_14725)
	{
		func_75(0, 0);
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
	if (!func_74())
	{
		Global_14553.f_1 = 3;
	}
}

int func_74()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_143(0))
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

bool func_76()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_77()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_78(var uParam0)
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = unk_0xF745CA12DC8836EB(0, 1, true);
	if (!unk_0xCE3CFF625BEBAA04(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_114();
	func_102(uParam0);
	func_86(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_83(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0xE3903F59E2F22150();
	func_79(&(uParam0->f_649), unk_0x0E4018692D92041D(uParam0->f_449, 4), (unk_0x0E4018692D92041D(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0x0E4018692D92041D(uParam0->f_449, 7))
	{
		if ((!unk_0x286C823E0969F22A() && unk_0x73DA1542B2F0C458()) && !unk_0xD9C92B0885A075F8())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0x0E4018692D92041D(uParam0->f_449, 11) && !unk_0x0E4018692D92041D(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!unk_0x0E4018692D92041D(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0xFF524AE40FB6301A(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xDFF589A2149528CE(false);
	unk_0x581AE7724ACAD410(2);
	unk_0x581AE7724ACAD410(1);
	unk_0x581AE7724ACAD410(8);
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(3);
	unk_0x03D404FD169632CA();
	unk_0x1382AC429D0EA2BB(82, 66);
	unk_0x7049F65F85106838(17, 0.612f, 0.818f);
	unk_0x94A8B1D385430451();
	if (!unk_0x286C823E0969F22A())
	{
		unk_0x144904D2EAA84341(2, 201);
	}
	unk_0x144904D2EAA84341(2, 202);
	unk_0x144904D2EAA84341(2, 188);
	unk_0x144904D2EAA84341(2, 187);
	unk_0x144904D2EAA84341(2, 189);
	unk_0x144904D2EAA84341(2, 190);
	if (!unk_0x0E4018692D92041D(uParam0->f_449, 7))
	{
		if (!unk_0x286C823E0969F22A())
		{
			vVar2 = { uParam0->f_401 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * cos((180f - uParam0->f_404))), (2.9f * sin((180f - uParam0->f_404)))) };
			unk_0x8C1596BAD35D957A(vVar2, &(vVar2.f_2), 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 134);
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar2, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), uParam0->f_404);
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 7);
		}
	}
}

void func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0x636CEDA67977F07B(2);
	func_82(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x8871859EF0AB8004())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x5D79F3D06EB318A0(2))
	{
		fVar1 = unk_0x405A2F54470CCC35(2, 239);
		fVar2 = unk_0x405A2F54470CCC35(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0x405A2F54470CCC35(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0x405A2F54470CCC35(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_81((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_81((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0xE3903F59E2F22150())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x5D79F3D06EB318A0(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0xE3903F59E2F22150() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * timestep());
	vVar6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x5D79F3D06EB318A0(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar6.x;
		uParam0->f_14.f_1 = vVar6.y;
		uParam0->f_14.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_80(((((vVar6.x - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_80(((((vVar6.y - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_80(((((vVar6.z - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_80(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_80(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_80(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0x5D79F3D06EB318A0(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x5D79F3D06EB318A0(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x5EBE50D55314CEAD(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0xE3903F59E2F22150() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x5EBE50D55314CEAD(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0xE3903F59E2F22150() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_80(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_80(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0xC6A1EC79D232D93C(2, 207);
			iVar0[3] = unk_0xC6A1EC79D232D93C(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0x2AAFDB86F2CBFB67(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		if (unk_0x49D25022440E65EE(*uParam0))
		{
			if (unk_0xFAA5C555ED0CEC9B(*uParam0))
			{
				unk_0x4AC1EB89981AFAFD();
			}
		}
	}
}

float func_80(float fParam0, float fParam1, float fParam2)
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

int func_81(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_82(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x405A2F54470CCC35(2, 218) * 127f));
	*uParam1 = floor((unk_0x405A2F54470CCC35(2, 219) * 127f));
	*uParam2 = floor((unk_0x405A2F54470CCC35(2, 220) * 127f));
	*uParam3 = floor((unk_0x405A2F54470CCC35(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xAED1F3230E36A119(2, 218))
		{
			*uParam0 = floor((unk_0x2EEE89525F08C860(2, 218) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 219))
		{
			*uParam1 = floor((unk_0x2EEE89525F08C860(2, 219) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 220))
		{
			*uParam2 = floor((unk_0x2EEE89525F08C860(2, 220) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 221))
		{
			*uParam3 = floor((unk_0x2EEE89525F08C860(2, 221) * 127f));
		}
	}
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (bParam5)
		{
			if (unk_0x8871859EF0AB8004())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA5C0D3C085A49E49())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_83(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0x0E4018692D92041D(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0xE3903F59E2F22150() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0xE3903F59E2F22150();
				}
			}
			else if (unk_0xE3903F59E2F22150() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0x0E4018692D92041D(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_85(uParam0, iVar1);
							if (unk_0x0E4018692D92041D(uParam0->f_1.f_370, iVar1))
							{
								unk_0x8950ED5730F62EE8(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_84(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_9079.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_9079.f_99.f_219[iParam0]), iParam1);
	}
}

void func_85(var uParam0, int iParam1)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4D9DA18AB3C2A466(99);
	unk_0x818901B332D5541D();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x73DA1542B2F0C458()) && !unk_0x286C823E0969F22A())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0x0E4018692D92041D(uParam0->f_449, 13))
			{
				if (func_87(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x8950ED5730F62EE8(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 13);
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0x0E4018692D92041D(uParam0->f_449, 11))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 11);
			}
			if (unk_0x0E4018692D92041D(uParam0->f_449, 13))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_87(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_101(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_88(sParam2, iParam3, 0);
}

int func_88(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					unk_0xD92171BC6C48DB90(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_100();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_99(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_98();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam2)
			{
				func_92();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_91())
				{
					return 0;
				}
				if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
					if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
				}
			}
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x0E4018692D92041D(Global_2423, 9))
				{
					return 0;
				}
			}
			func_90();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_89();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_100();
	}
	return 0;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD92171BC6C48DB90(false);
	Global_15866 = 1;
}

void func_90()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2424, 16);
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52370FB78E42E275() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
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

void func_92()
{
	if (func_220(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_93();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_93()
{
	func_94();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_94()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_97(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_96(unk_0x33CD235DF1E6A94E());
			if (func_95(iVar0) && (!func_220(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_95(Global_106565.f_2357.f_539.f_4321))
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

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)
{
	if (func_95(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_99(int iParam0, int iParam1)
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

void func_100()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if ((unk_0xA30F14B621E3269D() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
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

void func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_453++;
	if (unk_0xEABBA3F8727C0FE7(2))
	{
		func_7(uParam0);
	}
	if (!unk_0x0E4018692D92041D(uParam0->f_449, 11))
	{
		if ((unk_0x833B1A3D9F713E03(2, iLocal_37) || unk_0x833B1A3D9F713E03(2, iLocal_39)) || (unk_0x5D79F3D06EB318A0(2) && (unk_0x833B1A3D9F713E03(2, iLocal_38) || unk_0x833B1A3D9F713E03(2, iLocal_40))))
		{
			func_112();
			if (unk_0x0E4018692D92041D(uParam0->f_449, 12))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_449), 13);
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 11);
				unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 10);
			}
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 12);
		}
	}
	func_82(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0x5D79F3D06EB318A0(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_81((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_81((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x8871859EF0AB8004())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0xE3903F59E2F22150())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0x0E4018692D92041D(uParam0->f_449, 10))
	{
		if (!unk_0x0E4018692D92041D(uParam0->f_449, 11))
		{
			if ((unk_0xE3903F59E2F22150() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0xE3903F59E2F22150() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0xF1CDE9FD207C4CD8(2, 188)) || unk_0xF1CDE9FD207C4CD8(2, 189)) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(2, 241)))
					{
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4D9DA18AB3C2A466(8);
						unk_0x818901B332D5541D();
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x614EE52A69097A4C();
						uParam0->f_456 = unk_0xE3903F59E2F22150();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0xF1CDE9FD207C4CD8(2, 187)) || unk_0xF1CDE9FD207C4CD8(2, 190)) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(0, 242)))
					{
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4D9DA18AB3C2A466(9);
						unk_0x818901B332D5541D();
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x614EE52A69097A4C();
						uParam0->f_456 = unk_0xE3903F59E2F22150();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0xF1CDE9FD207C4CD8(2, 188)) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(0, 40)))
					{
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4D9DA18AB3C2A466(8);
						unk_0x818901B332D5541D();
						if (uParam0->f_416 != 0)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 0;
						if (unk_0x0E4018692D92041D(uParam0->f_449, 9))
						{
							unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0xE3903F59E2F22150();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0xF1CDE9FD207C4CD8(2, 187)) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(0, 41)))
					{
						unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4D9DA18AB3C2A466(9);
						unk_0x818901B332D5541D();
						if (uParam0->f_416 != 1)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 1;
						if (unk_0x0E4018692D92041D(uParam0->f_449, 9))
						{
							unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0xE3903F59E2F22150();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || unk_0x0E4018692D92041D(uParam0->f_449, 13))
				{
					if (unk_0x833B1A3D9F713E03(2, iLocal_37) || (unk_0x5D79F3D06EB318A0(2) && unk_0x833B1A3D9F713E03(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0x0E4018692D92041D(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0xE3903F59E2F22150();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0xBB698266C5FDF0A7(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x614EE52A69097A4C();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_106565.f_1[*uParam0] = 1;
											unk_0xEDF90B96BED57BCE(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_89741[iVar1 /*19*/])
									{
										unk_0xBB698266C5FDF0A7(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x614EE52A69097A4C();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_84(4, *uParam0, 1);
									if (!func_111(0))
									{
										func_109(*uParam0);
									}
								}
								else
								{
									func_84(5, *uParam0, 1);
								}
								unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_89741[iVar1 /*19*/])
								{
									if (Global_106565.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_106565.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_89741[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_89587[iVar3 /*5*/] != Global_89741[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0x0E4018692D92041D(Global_106565.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0x0E4018692D92041D(Global_106565.f_1.f_118, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_106565.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x833B1A3D9F713E03(2, iLocal_39) || (unk_0x5D79F3D06EB318A0(2) && unk_0x833B1A3D9F713E03(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_89741[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0x0F8EAEEC97DDBCB3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0xE3903F59E2F22150();
								}
								else if (!func_222(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x4D9DA18AB3C2A466(iVar7);
											unk_0x818901B332D5541D();
											unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x4D9DA18AB3C2A466(iVar7);
											unk_0x295B86DE57A0721D(true);
											unk_0x818901B332D5541D();
											iVar7++;
										}
										unk_0x0F8EAEEC97DDBCB3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_108(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0xE3903F59E2F22150();
										uParam0->f_465 = 0;
										func_107(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_89741[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_108(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_106(8, 0);
									func_84(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = unk_0xE3903F59E2F22150();
									func_5(uParam0, 3, 0);
								}
								unk_0x0F8EAEEC97DDBCB3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_89741[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4D9DA18AB3C2A466(99);
			unk_0x4D9DA18AB3C2A466(-1);
			unk_0x818901B332D5541D();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0x0E4018692D92041D(uParam0->f_449, 17))
			{
				iVar10 = Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_89741[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0xE3903F59E2F22150();
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 10);
	}
	else if (unk_0xFAC8F20FBC764F4D())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0xBFCC17D9792F43AF(uParam0->f_680))
		{
			iVar11 = unk_0x82D58DA03789627A(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_106(iVar0, iVar1);
			if (!func_111(0))
			{
				func_105(*uParam0);
			}
			unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_108(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_89741[iVar1 /*19*/])
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
					unk_0x4D9DA18AB3C2A466(iVar12);
					unk_0x295B86DE57A0721D(true);
					unk_0x818901B332D5541D();
				}
				else
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
					unk_0x4D9DA18AB3C2A466(iVar12);
					unk_0x295B86DE57A0721D(false);
					unk_0x818901B332D5541D();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_84(5, *uParam0, 1);
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0xEDF90B96BED57BCE(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0xBFCC17D9792F43AF(uParam0->f_681))
		{
			iVar13 = unk_0x82D58DA03789627A(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_106565.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_450);
			unk_0x4D9DA18AB3C2A466(iVar13);
			unk_0x4D9DA18AB3C2A466(iVar14);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4D9DA18AB3C2A466(99);
			unk_0x818901B332D5541D();
			unk_0x0F8EAEEC97DDBCB3(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 17);
			func_104(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0xE3903F59E2F22150();
			uParam0->f_457 = uParam0->f_456;
			unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0xEDF90B96BED57BCE(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0xBFCC17D9792F43AF(uParam0->f_682))
		{
			iVar15 = unk_0x82D58DA03789627A(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_103(uParam0, uParam0->f_427);
	}
}

void func_103(var uParam0, int iParam1)
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0x0E4018692D92041D(Global_106565.f_1.f_119, 14))
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 14);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0x0E4018692D92041D(Global_106565.f_1.f_119, 16))
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 16);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0x0E4018692D92041D(Global_106565.f_1.f_119, 15))
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 15);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0x0E4018692D92041D(Global_106565.f_1.f_119, 17))
					{
						if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 10);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 17);
							unk_0x8950ED5730F62EE8(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_104(var uParam0, int iParam1)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_463, iParam1))
	{
		if (!unk_0x0E4018692D92041D(Global_106565.f_1.f_119, iParam1))
		{
			if (!unk_0xCE3CFF625BEBAA04(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 0))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 0))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 1))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 15))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 2))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 18))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 10))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 0))
								{
									if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 11))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 1))
								{
									if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 19))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 16))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0x0E4018692D92041D(Global_106565.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x8950ED5730F62EE8(&(uParam0->f_463), iParam1);
	}
}

void func_105(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_106565.f_9079.f_99.f_205[7];
			if (iVar0 == 1)
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_106565.f_9079.f_99.f_205[8];
			if (iVar0 == 3)
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_106565.f_9079.f_99.f_205[10];
			if (iVar0 == 6)
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_106565.f_9079.f_99.f_205[11];
			if (iVar0 == 8)
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0x353711570A4FAE35(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_106(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_205[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_58[iParam0] = iParam1;
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_120[iParam0]), iParam1);
	}
	unk_0x8950ED5730F62EE8(&Global_89720, iParam0);
}

void func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_110(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_106565.f_9079.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_89741[iVar1 /*19*/])
			{
				switch (Global_106565.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 1);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 3);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 6);
						break;
				}
				unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_119), Global_106565.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_106565.f_9079.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_89741[iVar1 /*19*/])
			{
				switch (Global_106565.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 8);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 9);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 17);
						break;
				}
				unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_119), Global_106565.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_106565.f_9079.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_89741[iVar1 /*19*/])
			{
				switch (Global_106565.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 11);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 15);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_117), 20);
						unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_119), 16);
						break;
				}
				unk_0x8950ED5730F62EE8(&(Global_106565.f_1.f_119), Global_106565.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 0);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 1);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 2);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 3);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 4);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 5);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 7);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 8);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 10);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 11);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 12);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 13);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 14);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 15);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 16);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 17);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 18);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 19);
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_1.f_117), 20);
			break;
	}
}

bool func_111(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_112()
{
	Global_14732 = 0;
	func_113();
}

void func_113()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_114()
{
	unk_0x818D1850BE9E44A9();
	func_115();
}

void func_115()
{
	Global_17272.f_134 = 1;
}

void func_116(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x8950ED5730F62EE8(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0x286C823E0969F22A())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (Global_37584 == 1)
			{
				func_121(unk_0x33CD235DF1E6A94E());
			}
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * cos((180f - uParam0->f_404))), (2.9f * sin((180f - uParam0->f_404)))) };
			unk_0x8C1596BAD35D957A(vVar0, &(vVar0.f_2), 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 134);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), uParam0->f_404);
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
		}
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 7);
	}
	unk_0xDFF589A2149528CE(false);
	func_72(1);
	func_120();
	unk_0x68F7298CC6F16961();
	unk_0xCE04CE961AF41AB9(uParam0->f_401, 5f, 1, 1, 0, false);
	unk_0x40EF19475E844CE3(uParam0->f_401, 5f);
	unk_0x45B8601B4D532792(1);
	unk_0x1382AC429D0EA2BB(82, 66);
	unk_0x7049F65F85106838(17, 0.612f, 0.818f);
	unk_0x94A8B1D385430451();
	func_119(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = unk_0x90D2E06562D440E1(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0xDDF57F769FD85704(iVar1);
	}
	unk_0xD219F857F67DEABA(&(Global_89658[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x6770BF761B8E6EF7(unk_0x2A5C37131A0177EC(unk_0x33CD235DF1E6A94E()));
	}
	func_118(0);
	func_117();
	unk_0xCB7F618CC6FABC72(0);
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
	uParam0->f_466 = unk_0xF745CA12DC8836EB(2, 10, true);
	unk_0x8950ED5730F62EE8(&(uParam0->f_449), 2);
	Global_89719 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_117()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_106565.f_20404.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xFAC8F20FBC764F4D())
	{
		unk_0xEDF90B96BED57BCE(1);
	}
}

void func_118(bool bParam0)
{
	if (!bParam0)
	{
		Global_105207 = unk_0xE3903F59E2F22150() + 250;
	}
	Global_105204 = bParam0;
}

void func_119(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = uParam7;
	*uParam0 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x189377BFBDC9127F(*uParam0, true);
	unk_0x2AAFDB86F2CBFB67(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x083F68B89E3EA476(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x6ADA542E698077EB(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0x15FBE4622810D829(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_120()
{
	Global_17272.f_5 = 1;
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return;
	}
	iVar0 = func_129(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_124(1, iVar1, 1);
		return;
	}
	iVar2 = func_123(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_122(iVar2);
}

void func_122(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == unk_0x33CD235DF1E6A94E())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	func_125(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_128(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_130(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_131(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_131(int iParam0)
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

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_131(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_143(0))
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

void func_133(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*uParam0 == -1)
		{
			func_130(uParam0);
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
			*uParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_134(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_93();
				if (!func_95(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_142()) || Global_105612) || Global_25767) || func_141()) || func_99(8, -1)) || func_140()) || func_139()) || func_138()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_142()) || Global_25767) || func_141()) || func_99(8, -1)) || func_138()) || func_140()) || func_139()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_142()) || Global_105612) || Global_25767) || func_141()) || func_99(8, -1)) || func_138()) || func_140()) || func_139()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_142()) || Global_105612) || Global_25767) || func_141()) || func_99(8, -1)) || func_140()) || func_139()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_142() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_99(8, -1)) || func_137()) || func_136()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_99(8, -1) || func_140()) || func_139()) || func_136()) || func_135())
						{
							return 0;
						}
						if ((unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3) && unk_0x469BF85808505E83() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
						{
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_142()) || Global_25767) || func_141()) || func_99(8, -1)) || func_139()) || func_138()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_142()) || func_139()) || Global_105612) || Global_25767) || func_141()) || Global_37584) || func_99(8, -1)) || func_138()) || func_136()) || func_137()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_142()) || Global_105612) || Global_25767) || func_141()) || func_99(8, -1)) || func_138()) || func_136()) || func_140()) || func_139()) || func_137())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_135()
{
	return Global_93721.f_1;
}

int func_136()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_137()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return Global_93734.f_340 > 0;
}

bool func_140()
{
	return Global_93734.f_339 > 0;
}

var func_141()
{
	return Global_1312867;
}

int func_142()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_143(int iParam0)
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

bool func_144(int iParam0)
{
	return func_145(iParam0, Global_36425);
}

int func_145(int iParam0, int iParam1)
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

void func_146()
{
	int iVar0;
	vector3 vVar1;
	
	if (func_222(17))
	{
		if (!unk_0x0E4018692D92041D(iLocal_41, 11))
		{
			unk_0x3427206E004F448F("JH_1_MCS_4P2", 8);
			unk_0x8F59DE352CFE248B("lesterHandler");
			unk_0x2EE8D1440C9060EF("JHS1AUD", 6);
			unk_0x8950ED5730F62EE8(&iLocal_41, 11);
		}
		else if (unk_0xA812C1043FE92B58())
		{
			unk_0xA3FAF797B8885C09("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_222(18))
	{
		if (func_222(17))
		{
			if ((unk_0xCB46B7F7245145D9("JH_1_MCS_4P2") && unk_0x07AB0925A06BD5AD("lesterHandler")) && unk_0x8A7F864DAB908749(6))
			{
				if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
				{
					unk_0xEF6624A3AFF02A02(iLocal_245, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0xEF6624A3AFF02A02(iLocal_245, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_248))
				{
					if (unk_0x47904E0914F5B5C6(iLocal_248))
					{
						unk_0x35F11A916FDFCF32(iLocal_248, 1, 1);
					}
				}
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0xEF6624A3AFF02A02(unk_0x33CD235DF1E6A94E(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_248))
				{
					unk_0xEF6624A3AFF02A02(iLocal_248, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0xEF6624A3AFF02A02(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0xB815670C37E03CDE(joaat("prop_cs_walking_stick"));
				unk_0xB815670C37E03CDE(joaat("prop_laptop_lester2"));
				func_72(1);
				func_118(1);
				func_186(1, 1, 1, 0, 0, 0);
				iLocal_43 = -1;
				unk_0x2EC4FFC8740228D3(0);
				if (func_111(0))
				{
					unk_0x1790B816B917D10E(0, 0, 0, 0);
				}
				func_107(17, 0);
			}
		}
		else if (unk_0x286C823E0969F22A())
		{
			func_114();
			if (unk_0x0E4018692D92041D(iLocal_41, 7))
			{
				if (unk_0x765F6FEEFF39224F(iLocal_248))
				{
					unk_0x0CDD28A9DFCE2FCE(iLocal_248, true, 0);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_246))
				{
					unk_0x0CDD28A9DFCE2FCE(iLocal_246, true, 0);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_245))
				{
					unk_0x0CDD28A9DFCE2FCE(iLocal_245, true, 0);
				}
				unk_0xCE689A8E8C42ED78(&iLocal_41, 7);
			}
			if (unk_0x3CA08F647CEAD042("Lester", 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_245))
				{
					iVar0 = iLocal_245;
					start_new_script_with_args("lesterHandler", &iVar0, 1, 1424);
					unk_0x841080481716E87C("lesterHandler");
					iLocal_255 = unk_0xE3903F59E2F22150();
					unk_0x8950ED5730F62EE8(&iLocal_41, 18);
				}
			}
			if (unk_0x3CA08F647CEAD042("Michael", 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					vVar1 = { 709.3766f, -964.2602f, 29.3954f };
					unk_0x8C1596BAD35D957A(vVar1, &(vVar1.f_2), 0, 0);
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar1, 1, false, 0, 1);
						unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 261.7831f);
						if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
						{
							unk_0x0E7A95202BF2383F(unk_0x95B959F18401C09A(), 1f, 2000, 0, 1, 0);
						}
						unk_0x13C3FE558ED056EE(unk_0x33CD235DF1E6A94E(), -668482597, false, 0, 0);
					}
					unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
				}
			}
			if (unk_0x2442598EA366437F(0))
			{
				unk_0xC7E6A5D90DED6E0B(0f);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
			}
		}
		else if (iLocal_43 == -1 && !func_111(0))
		{
			iLocal_43 = unk_0xE3903F59E2F22150() + 1500;
		}
		else if (unk_0xE3903F59E2F22150() > iLocal_43 || func_111(0))
		{
			if (func_111(0))
			{
				unk_0x7EDEAEAED85BEE4F(0);
			}
			else
			{
				Global_56494 = 0;
				Global_93721 = 0;
				func_185();
			}
			unk_0x71CA80D41E1338B4(joaat("prop_cs_walking_stick"));
			unk_0x71CA80D41E1338B4(joaat("prop_laptop_lester2"));
			func_72(0);
			func_186(0, 1, 1, 0, 0, 0);
			func_183(&(Global_106565.f_2357.f_539), 86);
			func_155(&(Global_106565.f_2357.f_539), 86);
			func_154(&iLocal_45);
			unk_0xCE689A8E8C42ED78(&iLocal_41, 1);
			unk_0xF1CFA0046BB67893(iLocal_249, 0);
			if (iLocal_254 != -1)
			{
				if (unk_0xB0D69EC116526983(iLocal_254))
				{
					unk_0xF4BF002874250DB7(iLocal_254);
				}
			}
			unk_0xBD881F1B7ECAD975();
			unk_0x252F9CE6A90B6B86(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
			unk_0xD875615F72CD34A6(5);
			func_107(18, 0);
			func_147(0, 0);
		}
	}
	else if (!func_222(17))
	{
		if (unk_0xCB46B7F7245145D9("JH_1_MCS_4P2"))
		{
			unk_0x4742207943D8EB65();
		}
	}
	if (unk_0x0E4018692D92041D(iLocal_41, 18))
	{
		unk_0x3FD9339AA95E323F(0, 26, 1);
		if (unk_0xE3903F59E2F22150() > iLocal_255 + 1000)
		{
			unk_0xCE689A8E8C42ED78(&iLocal_41, 18);
		}
	}
}

void func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_151(4, 1);
						break;
					
					case 4:
						func_151(8, 1);
						break;
					
					case 6:
						func_151(10, 1);
						break;
					
					case 7:
						func_151(1, 1);
						break;
					
					case 8:
						func_151(3, 1);
						break;
					
					case 9:
						func_151(6, 1);
						break;
					
					case 10:
						func_151(9, 1);
						break;
					
					case 12:
						func_151(11, 1);
						break;
					
					case 13:
						func_151(12, 1);
						break;
					
					case 11:
						if (func_150(91))
						{
							func_151(0, 1);
						}
						break;
					
					case 5:
						if (func_150(91))
						{
							func_151(2, 1);
						}
						break;
					
					case 3:
						if (func_150(67))
						{
							func_151(5, 1);
						}
						break;
					
					case 2:
						if (func_150(77))
						{
							func_151(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[4], 0))
	{
		func_151(9, 1);
	}
	if (!func_39(13) && unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[16], 0))
	{
		func_151(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_151(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_149(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_148("DI_FEED_HST");
	}
}

void func_148(char* sParam0)
{
	unk_0x1F85AD4B26B92795("");
	unk_0x5533AFC8FCF79DDC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_151(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_153(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_26428.f_1), iVar0);
			if (!bParam1)
			{
				func_148(func_152(iParam0));
			}
		}
	}
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_153(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_26428.f_1, iParam0);
	}
	return 0;
}

void func_154(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36387)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_156(uParam0, 0, 12);
			break;
		
		case 19:
			func_156(uParam0, 1, 13);
			break;
		
		case 29:
			func_156(uParam0, 1, 14);
			break;
		
		case 30:
			func_156(uParam0, 2, 15);
			func_156(uParam0, 1, 29);
			break;
		
		case 32:
			func_156(uParam0, 1, 16);
			func_156(uParam0, 0, 17);
			break;
		
		case 39:
			func_156(uParam0, 0, 21);
			func_156(uParam0, 1, 20);
			break;
		
		case 31:
			func_156(uParam0, 0, 18);
			break;
		
		case 20:
			func_156(uParam0, 2, 22);
			break;
		
		case 66:
			func_156(uParam0, 1, 23);
			break;
		
		case 68:
			func_156(uParam0, 1, 24);
			break;
		
		case 70:
			func_156(uParam0, 1, 67);
			break;
		
		case 8:
			func_156(uParam0, 1, 25);
			func_156(uParam0, 2, 26);
			break;
		
		case 67:
			func_156(uParam0, 1, 27);
			break;
		
		case 9:
			func_156(uParam0, 2, 28);
			break;
		
		case 38:
			func_156(uParam0, 2, 30);
			func_156(uParam0, 1, 19);
			break;
		
		case 83:
			func_156(uParam0, 2, 33);
			break;
		
		case 45:
			func_156(uParam0, 1, 35);
			break;
		
		case 64:
			func_156(uParam0, 0, 36);
			func_156(uParam0, 1, 37);
			break;
		
		case 91:
			func_156(uParam0, 0, 41);
			break;
		
		case 42:
			func_156(uParam0, 0, 58);
			Global_93086[0 /*98*/] = 0;
			func_156(uParam0, 2, 59);
			Global_93086[2 /*98*/] = 0;
			break;
		
		case 41:
			func_156(uParam0, 1, 42);
			func_156(uParam0, 2, 42);
			break;
		
		case 15:
			func_156(uParam0, 0, 46);
			func_156(uParam0, 1, 47);
			break;
		
		case 16:
			func_156(uParam0, 0, 48);
			break;
		
		case 48:
			func_156(uParam0, 1, 50);
			func_156(uParam0, 2, 51);
			break;
		
		case 74:
			func_156(uParam0, 0, 52);
			func_156(uParam0, 1, 66);
			break;
		
		case 76:
			func_156(uParam0, 1, 53);
			func_156(uParam0, 2, 54);
			func_156(uParam0, 0, 62);
			break;
		
		case 75:
			func_156(uParam0, 0, 61);
			func_156(uParam0, 1, 31);
			break;
		
		case 69:
			func_156(uParam0, 1, 63);
			break;
		
		case 84:
			func_156(uParam0, 0, 68);
			func_156(uParam0, 2, 69);
			break;
		
		case 85:
			func_156(uParam0, 0, 64);
			func_156(uParam0, 2, 65);
			break;
		
		case 93:
			func_156(uParam0, 1, 38);
			func_156(uParam0, 2, 39);
			break;
		
		case 11:
			func_156(uParam0, 2, 55);
			break;
		
		case 77:
			func_156(uParam0, 1, 56);
			func_156(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_156(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[0], 9))
	{
		iVar0 = Global_106565.f_18527[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_106565.f_18527[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_172();
	if (!func_171(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_170(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_170(Global_92121[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_157(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_93086[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_157(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_93086[iParam0 /*98*/] };
			if (Global_93381[iParam0] != 2)
			{
				if (unk_0xC2F708DE8AD68197(Global_93389[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_93381[iParam0] == 1)
					{
						*uParam3 = { Global_93389[iParam0 /*3*/] - Global_106565.f_2357.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_93399[iParam0] - Global_106565.f_2357.f_539.f_2310[iParam0]);
						if (vmag2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_93389[iParam0 /*3*/] - Global_106565.f_2357.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_93399[iParam0] - Global_106565.f_2357.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_93086[iParam0 /*98*/] };
			if (Global_93381[iParam0] != 2)
			{
				*uParam3 = { Global_93389[iParam0 /*3*/] - Global_106565.f_2357.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_93399[iParam0] - Global_106565.f_2357.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_93086[iParam0 /*98*/] };
			if (Global_93381[iParam0] != 2)
			{
				*uParam3 = { Global_93389[iParam0 /*3*/] - Global_106565.f_2357.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_93399[iParam0] - Global_106565.f_2357.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_157(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_157(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_159(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_159(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
			*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_157(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
				*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_157(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_157(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_159(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_157(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_157(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_157(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
			*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
				*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
				*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x9562E33C057F7589(-5f, 5f), unk_0x9562E33C057F7589(-5f, 5f), 0f };
				*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_157(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_157(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_159(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_158(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_157(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_157(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_157(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_157(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_157(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_157(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0x174C48E9E544E9A8(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0x174C48E9E544E9A8(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0x174C48E9E544E9A8(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_92121[iParam1 /*3*/] };
			*uParam4 = unk_0x9562E33C057F7589(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_158(int iParam0, var uParam1, int iParam2)
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

int func_159(int iParam0, var uParam1, int iParam2)
{
	if (Global_93086[iParam0 /*98*/] == 0)
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("blimp"))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_169(iParam0))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x444D956C7F94526E(Global_93086[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x57D74362A8BD1490(Global_93086[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x097E7778E3E162E8(Global_93086[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xFFB467183FEE27C4(Global_93086[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x0C2E237744BA0026(Global_93086[iParam0 /*98*/]))
		{
			func_158(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x9E374B5F44A76AE2(Global_93086[iParam0 /*98*/]))
		{
			func_158(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_160(Global_93086[iParam0 /*98*/], 0))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_93086[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_93086[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_158(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_93086[iParam0 /*98*/] == *uParam1)
		{
			func_158(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_158(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_93086[iParam0 /*98*/] == *uParam1)
		{
			func_158(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_93086[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_158(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_160(int iParam0, bool bParam1)
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
		if (!func_168())
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
		if ((((!func_167() && !func_166()) && !func_165()) && !func_164()) && !func_168())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_165())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_163(iParam0))
		{
			return 0;
		}
	}
	if (!func_161(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_162())
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

int func_162()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_163(int iParam0)
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

int func_164()
{
	return 0;
}

int func_165()
{
	return 1;
}

int func_166()
{
	return 1;
}

int func_167()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_168()
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

int func_169(int iParam0)
{
	if (Global_93086[iParam0 /*98*/] == joaat("blimp") || Global_93086[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("submersible") || Global_93086[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("burrito2") || Global_93086[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("entityxf") && !Global_106565.f_9079.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("cheetah") && !Global_106565.f_9079.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("policeb") && !Global_106565.f_9079.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("ztype") && !Global_106565.f_9079.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("polmav") && !Global_106565.f_9079.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("jb700") && !Global_106565.f_9079.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("monroe") && !Global_106565.f_9079.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == 1938952078)
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_93086[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_93086[iParam0 /*98*/] == joaat("gauntlet") && !Global_106565.f_9079.f_330[80 /*6*/]) && !Global_106565.f_9079.f_330[81 /*6*/]) && !Global_106565.f_9079.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_170(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_171(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_172()
{
	var uVar0;
	
	func_182(&uVar0, unk_0xE6A7CE90720B9037());
	func_181(&uVar0, unk_0x7EA67BD818402745());
	func_180(&uVar0, unk_0x13348E86D5B8A052());
	func_175(&uVar0, unk_0x020A28FAE1C09250());
	func_174(&uVar0, unk_0x2C02CAA9C4127339());
	func_173(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_173(var uParam0, int iParam1)
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

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_175(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_176(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_176(int iParam0, int iParam1)
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

var func_177(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_178(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(var uParam0)
{
	return uParam0 & 15;
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_183(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106565.f_18527[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_171(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_184(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_91102[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_9 = 0f;
				Global_91102[iVar0 /*29*/].f_12 = 0f;
				Global_91102[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_10 = 0f;
				Global_91102[iVar0 /*29*/].f_13 = 0f;
				Global_91102[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_11 = 0f;
				Global_91102[iVar0 /*29*/].f_14 = 0f;
				Global_91102[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_26 = 0f;
				Global_91102[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_27 = 0f;
				Global_91102[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_184(var uParam0)
{
	*uParam0 = -15;
}

int func_185()
{
	if (func_111(0))
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

void func_186(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_194(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_74())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_193(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_194(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_193(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_191(unk_0x95B959F18401C09A())) && !func_188(unk_0x95B959F18401C09A(), 0)) && !func_187()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_191(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_187()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_188(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_189(-1, 0) == 8;
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

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_190();
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

int func_190()
{
	return Global_1312745;
}

int func_191(int iParam0)
{
	if (func_188(iParam0, 0))
	{
		return 1;
	}
	if (func_192())
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

bool func_192()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && iParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_194(int iParam0)
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

void func_195()
{
	unk_0x282AC7D53286DA83(-1747852954);
	if (func_222(16))
	{
		if (!func_111(0))
		{
			if (!unk_0x0E4018692D92041D(iLocal_41, 10))
			{
				unk_0x3427206E004F448F("JH_1_MCS_4_P1_ALT1", 8);
				func_203();
				func_108(0, 0, 1);
				iLocal_249 = unk_0x0335D8135051EA56(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 1, 1, 1);
				iLocal_254 = unk_0x6E6EB18FDAB9A074(Local_46.f_1.f_394, Local_46.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				unk_0x798B28A324675954(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397);
				unk_0x252F9CE6A90B6B86(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, false, 0);
				unk_0x8950ED5730F62EE8(&iLocal_41, 10);
			}
			else if (unk_0xA812C1043FE92B58())
			{
				unk_0xA3FAF797B8885C09("LESTER", 1, 0, 0, 0);
			}
			if (func_150(86))
			{
				if (!unk_0x0E4018692D92041D(iLocal_41, 1))
				{
					if (func_144(0))
					{
						if (func_200(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_193(1, 0, 1, 0);
							if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
							{
								unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
								unk_0xD875615F72CD34A6(0);
							}
							unk_0x8950ED5730F62EE8(&iLocal_41, 1);
							unk_0x8950ED5730F62EE8(&iLocal_41, 2);
						}
					}
				}
			}
			if (unk_0x0E4018692D92041D(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (unk_0x117DAF3BF7232886(iLocal_250))
						{
							unk_0x2F8A4DF7D0DFF0A8(iLocal_250, 0);
						}
						if (unk_0x117DAF3BF7232886(iLocal_251))
						{
							unk_0x2F8A4DF7D0DFF0A8(iLocal_251, 0);
						}
						iLocal_250 = unk_0xB1A92B63D6757EEF(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_251 = unk_0xB1A92B63D6757EEF(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (unk_0x765F6FEEFF39224F(Global_90209.f_9[0]))
						{
							if (!unk_0xD62C4419A41F106A(Global_90209.f_9[0], 0))
							{
								iLocal_245 = Global_90209.f_9[0];
								unk_0x0D21E1FDE062ED99(iLocal_245, false, 1);
							}
						}
						if (unk_0x765F6FEEFF39224F(Global_90209[0]))
						{
							if (!unk_0xD62C4419A41F106A(Global_90209[0], 0))
							{
								iLocal_247 = Global_90209[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_186(1, 1, 0, 0, 0, 0);
						unk_0xDFF589A2149528CE(false);
						unk_0x35675D19812BDF22(false);
						if (unk_0x765F6FEEFF39224F(iLocal_247))
						{
							if (unk_0x91D5C8283D19AF49(iLocal_247, 0))
							{
								unk_0x1C98D51D7C424A85(iLocal_250, iLocal_247, 0f, 0f, 0f, 1);
							}
						}
						unk_0x8EB023915CEEDB99(iLocal_251, iLocal_250, 5000, 1, 1);
						unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
						iLocal_43 = unk_0xE3903F59E2F22150();
						iLocal_42++;
						break;
					
					case 2:
						if ((unk_0xE3903F59E2F22150() - iLocal_43) > 1200)
						{
							if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
							{
								if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
								{
									if (unk_0x91D5C8283D19AF49(iLocal_247, 0))
									{
										if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_247, 0))
										{
											unk_0x99414FB2D30425C1(&iLocal_252);
											unk_0x0FF06FD8DEB3AB01(0, iLocal_247, 0);
											unk_0x7E268975AF5EA74F(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0xC734F59A13D39AEF(iLocal_252);
											unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
											unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), iLocal_252);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((unk_0xE3903F59E2F22150() - iLocal_43) > 2400)
						{
							if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
							{
								if (unk_0x765F6FEEFF39224F(iLocal_247))
								{
									if (unk_0x91D5C8283D19AF49(iLocal_247, 0))
									{
										if (unk_0x10930B9CAD4111C2(iLocal_245, iLocal_247, 0))
										{
											unk_0x99414FB2D30425C1(&iLocal_253);
											unk_0x0FF06FD8DEB3AB01(0, iLocal_247, 0);
											unk_0x7E268975AF5EA74F(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0xC734F59A13D39AEF(iLocal_253);
											unk_0xED68CDDDE25A144E(iLocal_245);
											unk_0x13A2D602CD10CBAC(iLocal_245, iLocal_253);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((unk_0xE3903F59E2F22150() - iLocal_43) > 5000)
						{
							unk_0xCE689A8E8C42ED78(&iLocal_41, 2);
						}
						break;
					}
			}
			if (unk_0x0E4018692D92041D(iLocal_41, 1) && !unk_0x0E4018692D92041D(iLocal_41, 2))
			{
				if (unk_0xCB46B7F7245145D9("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0x286C823E0969F22A())
					{
						iLocal_246 = unk_0x33CD235DF1E6A94E();
						if (!unk_0xD62C4419A41F106A(iLocal_246, 0))
						{
							unk_0xEF6624A3AFF02A02(iLocal_246, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
						{
							unk_0xEF6624A3AFF02A02(iLocal_245, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0x8950ED5730F62EE8(&iLocal_41, 9);
						unk_0xEF6624A3AFF02A02(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0x8950ED5730F62EE8(&iLocal_41, 8);
						func_199(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
						func_199(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = unk_0xE3903F59E2F22150();
						unk_0x2EC4FFC8740228D3(2048);
					}
					else
					{
						func_114();
						if (!unk_0x0E4018692D92041D(iLocal_41, 17))
						{
							if (!unk_0x73DA1542B2F0C458() && !unk_0xD33DAC8D0D70A78C())
							{
								unk_0xACCDA78123DB57B0(800);
							}
							unk_0x8950ED5730F62EE8(&iLocal_41, 17);
						}
						if (unk_0x66D6584F4E8C88AE())
						{
							unk_0x8950ED5730F62EE8(&iLocal_41, 16);
						}
						if (unk_0x0E4018692D92041D(iLocal_41, 16))
						{
							if (unk_0xBB5E373390A5F824())
							{
								if (!unk_0x0E4018692D92041D(iLocal_41, 12))
								{
									func_108(0, 1, 1);
									unk_0x8950ED5730F62EE8(&iLocal_41, 12);
								}
								if (!unk_0x0E4018692D92041D(iLocal_41, 13))
								{
									func_108(0, 2, 1);
									unk_0x8950ED5730F62EE8(&iLocal_41, 13);
								}
								if (!unk_0x0E4018692D92041D(iLocal_41, 14))
								{
									func_108(0, 3, 1);
									unk_0x8950ED5730F62EE8(&iLocal_41, 14);
								}
								if (!unk_0x0E4018692D92041D(iLocal_41, 15))
								{
									func_108(0, 4, 1);
									unk_0x8950ED5730F62EE8(&iLocal_41, 15);
								}
								func_197(&Local_46);
								if (!unk_0x0E4018692D92041D(iLocal_41, 0))
								{
									func_196();
									unk_0x8950ED5730F62EE8(&iLocal_41, 0);
								}
							}
						}
						if (!unk_0x0E4018692D92041D(iLocal_41, 5))
						{
							if (unk_0x117DAF3BF7232886(iLocal_250))
							{
								unk_0x189377BFBDC9127F(iLocal_250, false);
							}
							if (unk_0x117DAF3BF7232886(iLocal_251))
							{
								unk_0x189377BFBDC9127F(iLocal_251, false);
							}
							unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
							if (unk_0x117DAF3BF7232886(iLocal_251))
							{
								unk_0x2F8A4DF7D0DFF0A8(iLocal_251, 0);
							}
							if (unk_0x117DAF3BF7232886(iLocal_251))
							{
								unk_0x2F8A4DF7D0DFF0A8(iLocal_251, 0);
							}
							if (unk_0x765F6FEEFF39224F(iLocal_245))
							{
								unk_0x4B8B69DAE5BAC592(&iLocal_245);
							}
							unk_0x8950ED5730F62EE8(&iLocal_41, 5);
						}
						if (!unk_0x0E4018692D92041D(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								unk_0x8950ED5730F62EE8(&iLocal_41, 6);
							}
						}
						if (!unk_0x0E4018692D92041D(iLocal_41, 12))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_43) > 14058)
							{
								func_108(0, 1, 1);
								unk_0x8950ED5730F62EE8(&iLocal_41, 12);
							}
						}
						else if (!unk_0x0E4018692D92041D(iLocal_41, 13))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_43) > 22887)
							{
								func_108(0, 2, 1);
								unk_0x8950ED5730F62EE8(&iLocal_41, 13);
							}
						}
						else if (!unk_0x0E4018692D92041D(iLocal_41, 14))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_43) > 27988)
							{
								func_108(0, 3, 1);
								func_197(&Local_46);
								unk_0x8950ED5730F62EE8(&iLocal_41, 14);
							}
						}
						else if (!unk_0x0E4018692D92041D(iLocal_41, 15))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_43) > 42084)
							{
								func_108(0, 4, 1);
								unk_0x8950ED5730F62EE8(&iLocal_41, 15);
							}
						}
						if (unk_0x0E4018692D92041D(iLocal_41, 8))
						{
							if (unk_0x765F6FEEFF39224F(unk_0x0DBE02F22EF4C0B4("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_248 = unk_0x6BB2785511E9F977(unk_0x0DBE02F22EF4C0B4("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0xCE689A8E8C42ED78(&iLocal_41, 8);
							}
						}
						if (unk_0x0E4018692D92041D(iLocal_41, 9))
						{
							if (unk_0x765F6FEEFF39224F(unk_0x0DBE02F22EF4C0B4("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_245 = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("Lester", joaat("ig_lestercrest")));
								unk_0xCE689A8E8C42ED78(&iLocal_41, 9);
							}
						}
						if (unk_0x3CA08F647CEAD042("Michael", 0))
						{
							if (!unk_0xD62C4419A41F106A(iLocal_246, 0))
							{
								unk_0x4A852F02088ECC9D(iLocal_246, true);
								unk_0x5FEE418CE11E6DDE(iLocal_246, 208, true);
								unk_0x5FEE418CE11E6DDE(iLocal_246, 118, false);
								unk_0x5FEE418CE11E6DDE(iLocal_246, 213, false);
								unk_0x2A25AECBD792A364(iLocal_246, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x3CA08F647CEAD042("Lester", 0))
						{
							if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
							{
								if (unk_0x765F6FEEFF39224F(iLocal_248))
								{
									unk_0x2F0A6390D863D337(iLocal_248, iLocal_245, unk_0xFCAF61876D23D31D(iLocal_245, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
							{
								unk_0x4A852F02088ECC9D(iLocal_245, true);
								unk_0x5FEE418CE11E6DDE(iLocal_245, 208, true);
								unk_0x5FEE418CE11E6DDE(iLocal_245, 118, false);
								unk_0x5FEE418CE11E6DDE(iLocal_245, 213, false);
								unk_0x2A25AECBD792A364(iLocal_245, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x2442598EA366437F(0))
						{
							if (!unk_0x0E4018692D92041D(iLocal_41, 0))
							{
								func_196();
								unk_0x8950ED5730F62EE8(&iLocal_41, 0);
							}
							if (!unk_0x0E4018692D92041D(iLocal_41, 7))
							{
								if (!unk_0xD62C4419A41F106A(iLocal_246, 0))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_246, false, 0);
								}
								if (!unk_0xD62C4419A41F106A(iLocal_245, 0))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_245, false, 0);
								}
								if (unk_0x765F6FEEFF39224F(iLocal_248))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_248, false, 0);
								}
								unk_0x8950ED5730F62EE8(&iLocal_41, 7);
							}
							func_107(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_199(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
			func_199(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
			if (func_144(0))
			{
				if (func_200(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0x8950ED5730F62EE8(&iLocal_41, 1);
				}
			}
			if (unk_0x0E4018692D92041D(iLocal_41, 1))
			{
				func_196();
				func_107(16, 0);
			}
		}
	}
	else
	{
		if (unk_0xCB46B7F7245145D9("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0x4742207943D8EB65();
		}
		if (unk_0x0E4018692D92041D(iLocal_41, 10))
		{
			unk_0xCE689A8E8C42ED78(&iLocal_41, 10);
		}
	}
}

void func_196()
{
	func_84(1, 0, 1);
	func_84(2, 0, 1);
	func_204(&Local_46);
	func_67(&Local_46);
}

void func_197(var uParam0)
{
	if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
	{
		if (!unk_0x286C823E0969F22A())
		{
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_198(uParam0);
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 1);
		unk_0xCE689A8E8C42ED78(&Global_89721, *uParam0);
	}
}

void func_198(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0x765F6FEEFF39224F(uParam0->f_428[iVar0]))
		{
			unk_0xEC26F4BFC9942A0C(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_200(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_202(0))
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *iParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_144(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_201(iParam0, iParam4);
		}
	}
	return 2;
}

void func_201(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_202(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_144(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_203()
{
	Global_93721 = 1;
}

void func_204(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
		{
			if (unk_0x0E4018692D92041D(uParam0->f_449, 2))
			{
				func_69(uParam0, func_205(*uParam0));
				func_84(2, *uParam0, 0);
			}
			else
			{
				func_116(uParam0);
				func_84(2, *uParam0, 0);
			}
		}
	}
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_222(18);
			break;
		
		case 1:
			return func_222(22);
			break;
		
		case 2:
			return func_222(40);
			break;
		
		case 3:
			return func_222(8);
			break;
		
		case 4:
			return func_222(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_206()
{
	return Global_71852;
}

int func_207(var uParam0)
{
	if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
	{
		func_197(uParam0);
	}
	if (unk_0x0E4018692D92041D(uParam0->f_449, 0))
	{
		func_208(uParam0);
	}
	return 1;
}

void func_208(var uParam0)
{
	unk_0xB4F447A5639E2006("HEIST_BULLETIN_BOARD");
	unk_0x71CA80D41E1338B4(joaat("prop_ld_planning_pin_01"));
	unk_0x71CA80D41E1338B4(joaat("prop_ld_planning_pin_02"));
	unk_0x71CA80D41E1338B4(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_414));
	}
	unk_0xB073DB452891DC0B(5, false);
	unk_0xCE689A8E8C42ED78(&Global_89722, *uParam0);
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 0);
}

void func_209(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		fVar0 = vdist2(uParam0->f_401, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
		if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
		{
			func_217(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0x0E4018692D92041D(Global_89721, *uParam0))
		{
			if (unk_0x0E4018692D92041D(uParam0->f_449, 0))
			{
				if (func_216(uParam0))
				{
					if (unk_0x0E4018692D92041D(Global_89721, *uParam0))
					{
						if (unk_0x0E4018692D92041D(Global_89723, *uParam0))
						{
							func_211(uParam0);
						}
					}
					else
					{
						func_211(uParam0);
					}
				}
			}
			else
			{
				func_210(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0x0E4018692D92041D(Global_89721, *uParam0))
		{
			if (unk_0x0E4018692D92041D(uParam0->f_449, 0))
			{
				if (unk_0x0E4018692D92041D(uParam0->f_449, 1))
				{
					func_197(uParam0);
				}
				func_208(uParam0);
			}
		}
	}
}

void func_210(var uParam0)
{
	if (!unk_0x06CA72695A7DE9E7())
	{
		return;
	}
	unk_0x2EE8D1440C9060EF(&(uParam0->f_1.f_272), 5);
	unk_0x3C05A6D663EA1B6A("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		unk_0xB815670C37E03CDE(joaat("prop_ld_planning_pin_01"));
		unk_0xB815670C37E03CDE(joaat("prop_ld_planning_pin_02"));
		unk_0xB815670C37E03CDE(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0x9E4935AAC82732AB(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0x9E4935AAC82732AB("INSTRUCTIONAL_BUTTONS");
	unk_0x8950ED5730F62EE8(&Global_89720, *uParam0);
	unk_0x8950ED5730F62EE8(&(uParam0->f_449), 0);
}

void func_211(var uParam0)
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_215(uParam0);
		func_214(uParam0);
		func_212(uParam0);
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 1);
	}
}

void func_212(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (to_float((unk_0x9EC3B269A34A2BEE(0, 65535) - 32767)) / 4000f);
			fVar3 = (to_float((unk_0x9EC3B269A34A2BEE(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_213(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0x7CA67831169E8AA6(iVar1, vVar4, true, true, false);
			unk_0x1C8705F667F673EA(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0x0D21E1FDE062ED99(uParam0->f_428[iVar0], true, 0);
			unk_0x9611832841071B69(uParam0->f_428[iVar0], true);
			unk_0x23298AB8A7D0F403(uParam0->f_428[iVar0], false, 0);
			unk_0x860D3E500AEADB97(uParam0->f_428[iVar0], 0);
			unk_0xF70578F5CD9822CB(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	unk_0xCE689A8E8C42ED78(&Global_89723, *uParam0);
}

Vector3 func_213(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) };
	return vVar7;
}

void func_214(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		iVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = unk_0x0E4018692D92041D(Global_106565.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4D9DA18AB3C2A466(uParam0->f_1.f_118[iVar0]);
			unk_0x295B86DE57A0721D(bVar3);
			unk_0x818901B332D5541D();
		}
		else
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4D9DA18AB3C2A466(uParam0->f_1.f_118[iVar0]);
			unk_0x295B86DE57A0721D(bVar3);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0x818901B332D5541D();
		}
		iVar0++;
	}
}

void func_215(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "CREATE_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
	unk_0x4D9DA18AB3C2A466(2);
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_14));
	unk_0x8DAB5B12D7B9AD29(to_float(uParam0->f_1.f_14.f_1));
	unk_0x818901B332D5541D();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
			unk_0x4D9DA18AB3C2A466(iVar1);
			unk_0x4D9DA18AB3C2A466(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0x818901B332D5541D();
			iVar1++;
		}
		iVar2++;
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
	unk_0x818901B332D5541D();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
		unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
		unk_0x295B86DE57A0721D(true);
		unk_0x818901B332D5541D();
	}
	else
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_VIEW");
		unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
}

int func_216(var uParam0)
{
	if (!unk_0x11AE7F6A404414C9(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0x11AE7F6A404414C9(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0x8A7F864DAB908749(5))
	{
		return 0;
	}
	if (unk_0x06CA72695A7DE9E7())
	{
		if (!unk_0x3C05A6D663EA1B6A("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0x5D98D654CDC2165A(joaat("prop_ld_planning_pin_01")) || !unk_0x5D98D654CDC2165A(joaat("prop_ld_planning_pin_02"))) || !unk_0x5D98D654CDC2165A(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x8950ED5730F62EE8(&Global_89722, *uParam0);
	return 1;
}

void func_217(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_218(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0xDD9E6DB1A6A3E1F2(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * cos((90f - uParam0->f_404))), (fVar0 * sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (unk_0x0E4018692D92041D(Global_89720, *uParam0))
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 16);
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 15);
		unk_0x8950ED5730F62EE8(&(uParam0->f_449), 14);
		unk_0xCE689A8E8C42ED78(&Global_89720, *uParam0);
	}
	if (unk_0x0E4018692D92041D(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0xBB698266C5FDF0A7(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4D9DA18AB3C2A466(uParam0->f_1.f_118[iVar0]);
			unk_0x295B86DE57A0721D(bVar2);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x818901B332D5541D();
			iVar0++;
		}
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 16);
	}
	if (unk_0x0E4018692D92041D(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0x765F6FEEFF39224F(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (to_float((unk_0x9EC3B269A34A2BEE(0, 65535) - 32767)) / 4000f);
					fVar5 = (to_float((unk_0x9EC3B269A34A2BEE(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_213(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0x7CA67831169E8AA6(iVar3, vVar6, true, true, false);
					unk_0x1C8705F667F673EA(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0x0D21E1FDE062ED99(uParam0->f_428[iVar0], true, 0);
					unk_0x9611832841071B69(uParam0->f_428[iVar0], true);
					unk_0x23298AB8A7D0F403(uParam0->f_428[iVar0], false, 0);
					unk_0x860D3E500AEADB97(uParam0->f_428[iVar0], 0);
					unk_0xF70578F5CD9822CB(uParam0->f_428[iVar0], true);
				}
			}
			else if (!unk_0x765F6FEEFF39224F(uParam0->f_428[iVar0]))
			{
				unk_0xEC26F4BFC9942A0C(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 15);
	}
	if (unk_0x0E4018692D92041D(uParam0->f_449, 14))
	{
		func_219(uParam0);
		func_33(uParam0);
		func_215(uParam0);
		unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 14);
	}
}

void func_219(var uParam0)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4D9DA18AB3C2A466(uParam0->f_415 + 1);
	unk_0x818901B332D5541D();
}

bool func_220(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87697[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_84464)
	{
		if (Global_84464[iVar0 /*5*/] != -1)
		{
			if (Global_71859.f_109[Global_84464[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_223(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_89658[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_89658[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { vVar0 };
	uParam0->f_404 = fVar1;
	uParam0->f_405 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * cos((360f - fVar1))), (-uParam0->f_1.f_8 * sin((360f - fVar1)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar1 };
	unk_0x8950ED5730F62EE8(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 0);
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 1);
	unk_0xCE689A8E8C42ED78(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_224(var uParam0, var uParam1)
{
	func_233(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_232(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_231(uParam0, 20f, 22f, 28f);
	func_230(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_229(uParam0, 1, "CRW_GM", "");
	func_229(uParam0, 4, "CRW_NR", "");
	func_229(uParam0, 6, "CRW_PH", "");
	func_229(uParam0, 7, "CRW_CF", "");
	func_229(uParam0, 8, "CRW_ET", "");
	func_229(uParam0, 9, "CRW_KD", "");
	func_229(uParam0, 10, "CRW_PM", "CRM_PM");
	func_229(uParam0, 12, "CRW_RL", "CRM_RL");
	func_228(uParam0, 0, 0, 0, 0);
	func_228(uParam0, 6, 0, 0, 0);
	func_228(uParam0, 1, 0, 0, 0);
	func_228(uParam0, 3, 1, 0, 0);
	func_228(uParam0, 11, 2, 0, 0);
	func_228(uParam0, 5, 3, 0, 0);
	func_228(uParam0, 9, 3, 0, 0);
	func_228(uParam0, 2, 4, 0, 0);
	func_228(uParam0, 7, 9, 0, 0);
	func_228(uParam0, 10, 10, 0, 0);
	func_227(uParam0, 2, 2, "H_TD_SEC");
	func_227(uParam0, 2, 2, "H_TD_PHOTO");
	func_227(uParam0, 2, 5, "H_TD_PLAN");
	func_227(uParam0, 2, 6, "H_TD_CREW");
	func_227(uParam0, 7, 11, "H_TD_CARB");
	func_227(uParam0, 8, 9, "H_TD_BUGS");
	func_227(uParam0, 8, 10, "H_TD_GAS");
	func_226(uParam0, 0, 203, 74);
	func_226(uParam0, 1, 368, 181);
	func_226(uParam0, 1, 556, 189);
	func_226(uParam0, 2, 690, 63);
	func_226(uParam0, 2, 673, 308);
	func_226(uParam0, 2, 671, 406);
	func_226(uParam0, 3, 245, 244);
	func_226(uParam0, 4, 70, 68);
	func_225(uParam0, 0, "JHP12", 214, 165, 1);
	func_225(uParam0, 0, "JHP13", 254, 46, 1);
	func_225(uParam0, 0, "JHP14", 70, 97, 1);
	func_225(uParam0, 0, "JHP15", 254, 275, 1);
	func_225(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_225(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_227(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_229(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0xCE3CFF625BEBAA04(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_230(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var1 };
	uParam0->f_108[0 /*4*/] = { Var2 };
	uParam0->f_108[1 /*4*/] = { Var3 };
	uParam0->f_280[1 /*2*/] = { Var4 };
	uParam0->f_280[2 /*2*/] = { Var5 };
	uParam0->f_280[0 /*2*/] = { Var6 };
	uParam0->f_280[3 /*2*/] = { Var7 };
}

void func_231(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_232(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { vParam11 };
	uParam0->f_397 = { vParam12 };
}

int func_234(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x8950ED5730F62EE8(&(Global_106565.f_9079.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_236()
{
	if (unk_0xCB46B7F7245145D9("JH_1_MCS_4P2") || unk_0xCB46B7F7245145D9("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0x4742207943D8EB65();
	}
	func_107(16, 0);
	func_107(17, 0);
	func_107(18, 0);
	func_84(1, 0, 0);
	func_84(2, 0, 0);
	unk_0xF1CFA0046BB67893(iLocal_249, 0);
	if (iLocal_254 != -1)
	{
		if (unk_0xB0D69EC116526983(iLocal_254))
		{
			unk_0xF4BF002874250DB7(iLocal_254);
		}
	}
	unk_0xBD881F1B7ECAD975();
	unk_0x252F9CE6A90B6B86(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
	unk_0xD875615F72CD34A6(5);
	if (iLocal_45 != -1)
	{
		func_154(&iLocal_45);
	}
	while (!func_207(&Local_46))
	{
		wait(0);
	}
	unk_0x5894DC159447E10A();
}

