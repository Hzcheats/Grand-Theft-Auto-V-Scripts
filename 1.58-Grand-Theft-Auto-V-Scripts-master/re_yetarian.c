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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	struct<20> Local_45[2];
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[2] = { 0, 0 };
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_80[2];
	float fLocal_81[2] = { 0f, 0f };
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	char[] cLocal_91[8] = 0;
	var uLocal_92 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<2> Local_257 = { 0, 5 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 5;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
#endregion

void __EntryFunction__()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_12 = 3;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_55 = -1;
	iLocal_56 = -1;
	iLocal_74 = joaat("p_amb_phone_01");
	Local_78 = { -35.607f, -1110.046f, 26.4364f };
	Local_79 = { -126.1154f, -1129.347f, 23.4329f };
	iLocal_83 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_86 = -1;
	cLocal_91 = "REYE_AU";
	func_173(ScriptParam_257.f_1[0 /*3*/]);
	if (unk_0x4B34601C5C56F3EE(27))
	{
		func_172();
	}
	if (func_145(ScriptParam_257.f_1[0 /*3*/], 30, 0, 0, 0))
	{
		func_143(30);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_130();
	while (true)
	{
		if (!func_129())
		{
			if (func_128())
			{
				func_100();
			}
		}
		if (unk_0x1E63BE2394148DA0("DEALERSHIP"))
		{
			if (unk_0x96A05000CCD43584("DEALERSHIP"))
			{
				unk_0xA3D2C191DF3CB742("DEALERSHIP", 0);
			}
		}
		fVar0 = (unk_0x0B9CD460E6A37693() + 20f);
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Local_57) < (fVar0 * fVar0))
		{
			unk_0x584B286572B48431();
		}
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Local_59) < (fVar0 * fVar0))
		{
			unk_0x584B286572B48431();
		}
		if (unk_0xC92F9F18E020B461())
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				func_97(iVar1);
				iVar1++;
			}
			switch (iLocal_46)
			{
				case 0:
					func_79();
					break;
				
				case 1:
					func_61();
					break;
				
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_72)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 2)
			{
				func_97(iVar2);
				iVar2++;
			}
			switch (iLocal_46)
			{
				case 0:
					func_79();
					break;
				
				case 1:
					func_61();
					break;
				
				case 2:
					func_3();
					break;
			}
			if (func_2(uLocal_48))
			{
				if (func_1(uLocal_48, unk_0xE2D3D51028F0428A(), 1) > 120f)
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
		wait(0);
	}
}

float func_1(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(uParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

int func_2(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	switch (iLocal_47)
	{
		case 0:
			if (func_60())
			{
				iLocal_47 = 1;
			}
			func_59();
			break;
		
		case 1:
			func_59();
			if (func_2(uLocal_48))
			{
				if (func_58())
				{
					if (!iLocal_66)
					{
						iLocal_67 = 1;
						iLocal_62 = 1;
						unk_0x03A927199A2DFE46(uLocal_48);
						if (unk_0xE5965CDF24F93A9F(uLocal_52))
						{
							unk_0x4BDA5AFD88C085EB(&uLocal_52);
						}
						if (!bLocal_64)
						{
							if (!bLocal_65)
							{
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1500);
								unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
								unk_0xC963A45B50851768(uLocal_87);
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
								unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
								unk_0xC963A45B50851768(uLocal_87);
							}
							unk_0x8ACADA903FCAA42F(uLocal_48, uLocal_87);
							unk_0x7461D7C5BA953BC7(&uLocal_87);
							iLocal_66 = 1;
						}
						else
						{
							if (!bLocal_65)
							{
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
								if (func_1(uLocal_48, unk_0xE2D3D51028F0428A(), 1) <= 4f)
								{
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1500);
								}
								unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 150f, -1, 1, 0);
								unk_0xC963A45B50851768(uLocal_87);
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
								unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 150f, -1, 1, 0);
								unk_0xC963A45B50851768(uLocal_87);
							}
							unk_0x8ACADA903FCAA42F(uLocal_48, uLocal_87);
							unk_0x7461D7C5BA953BC7(&uLocal_87);
							iLocal_66 = 1;
						}
					}
					else
					{
						func_36();
						unk_0xCAC4D1050F2E6899(uLocal_48, 2f);
						if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) >= 100f && !unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(uLocal_48, 0), 3f))
						{
							unk_0x05CB75C0837196F9(&uLocal_48);
						}
						if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
						{
							func_4();
						}
					}
				}
				else
				{
					func_36();
					unk_0xCAC4D1050F2E6899(uLocal_48, 2f);
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) >= 100f && !unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(uLocal_48, 0), 3f))
					{
						unk_0x05CB75C0837196F9(&uLocal_48);
					}
					if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
					{
						if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
					if (func_2(uLocal_48))
					{
						unk_0x3E3D339BAD67F6F2(uLocal_48, 60, 1);
					}
				}
			}
			else
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_51))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_51);
				}
				if (unk_0xE5965CDF24F93A9F(uLocal_48))
				{
					if (unk_0x55B23FE400FCEA6B(uLocal_48, 0))
					{
						if (!iLocal_73)
						{
							iLocal_73 = 1;
						}
					}
				}
				iLocal_67 = 1;
				if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
				{
					if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()
{
	func_35(&uLocal_48, 1, 0, 1);
	while (!func_34())
	{
		wait(0);
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(-1, 0);
	func_5();
	func_100();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_100013.f_8)
	{
		if (Global_100013.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100013.f_10 > 1)
	{
		return 0;
	}
	Global_100013.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_31(iParam0))
	{
		func_30(iParam0, iParam1);
		if (!func_29(51))
		{
			func_19("RE_REWARD", 1, 0, 4000, 10000, func_22(), 0, 138, 0);
			func_18(51);
		}
		if (func_17(iParam0))
		{
			Global_112915.f_24995.f_2 = 3;
		}
		if (func_16(iParam0, iParam1) != 322)
		{
			func_10(func_16(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_112903 = iParam1;
		if (Global_112901 == 0)
		{
			if (((Global_112904 == 1 || Global_112904 == 5) || Global_112904 == 11) || Global_112904 == 25)
			{
				func_9(2);
			}
			else if ((Global_112904 == 26 || Global_112904 == 8) || Global_112904 == 17)
			{
				func_9(7);
			}
			else
			{
				func_9(1);
			}
		}
	}
}

void func_9(int iParam0)
{
	Global_112901 = iParam0;
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_14((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112915.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112915.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112915.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112915.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112915.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112915.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_11();
	}
}

void func_11()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112651 = 0;
	Global_112652 = 0;
	Global_112653 = 0;
	Global_112654 = 0;
	Global_112655 = 0;
	Global_112656 = 0;
	Global_112657 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112915.f_10194.f_3853;
	Global_112915.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112915.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112915.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112651++;
					fVar1 = (fVar1 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112652++;
					fVar2 = (fVar2 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112653++;
					fVar3 = (fVar3 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112654++;
					fVar4 = (fVar4 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112655++;
					fVar5 = (fVar5 + (Global_112915.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112656++;
					fVar6 = (fVar6 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112657++;
					fVar7 = (fVar7 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112634 > 0)
	{
		if (Global_112651 == Global_112634)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112635 > 0)
	{
		if (Global_112652 == Global_112635)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112636 > 0)
	{
		if (Global_112653 == Global_112636)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112637 > 0)
	{
		if (Global_112654 == Global_112637)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112638 > 0)
	{
		if (((Global_112655 == Global_112638 || (Global_112638 * 10 / Global_112655) < 41) || Global_112655 > Global_112641) || Global_112655 == Global_112641)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_10194.f_3856, 14))
			{
				if (Global_112655 == Global_112638)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_112638, 0);
					unk_0xCED9E32812D6C7C7(&(Global_112915.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112639 > 0)
	{
		if (Global_112656 == Global_112639)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112640 > 0)
	{
		if (Global_112657 == Global_112640)
		{
			fVar7 = 5f;
		}
	}
	Global_112915.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112655 > Global_112641 || Global_112655 == Global_112641)
	{
		iVar9 = Global_112641;
	}
	else
	{
		iVar9 = Global_112655;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_112651, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_112634, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_112652, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_112635, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_112653, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_112636, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_112654, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_112637, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_112641, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_112657 + Global_112656), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_112640 + Global_112639), 1);
	Global_112658 = (Global_112651 * 100 / Global_112634);
	Global_112660 = ((Global_112653 + Global_112652) * 100 / (Global_112636 + Global_112635));
	Global_112659 = ((Global_112654 + iVar9) * 100 / (Global_112637 + Global_112641));
	Global_112661 = ((Global_112656 + Global_112657) * 100 / (Global_112639 + Global_112640));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_112915.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_112658, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_112659, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_112660, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_112915.f_10194.f_3853))
	{
		func_13(13, floor(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_12() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
				{
					func_6();
				}
			}
		}
	}
}

int func_12()
{
	return Global_31505;
}

int func_13(int iParam0, int iParam1)
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_15()
{
	return Global_1574907;
}

int func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_18(int iParam0)
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
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_20(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_20(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112915.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112915.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112915.f_20410.f_145++;
		func_21();
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112915.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[0])
			{
				Global_112915.f_20410.f_146[0] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[1])
			{
				Global_112915.f_20410.f_146[1] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[2])
			{
				Global_112915.f_20410.f_146[2] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_22()
{
	func_23();
	switch (Global_112915.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_27(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_26(unk_0xE2D3D51028F0428A());
			if (func_25(iVar0) && (!func_24(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_25(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return Global_42596 == iParam0;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

int func_29(int iParam0)
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
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112915.f_24995.f_8[iParam0]), iParam1);
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_32()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar1 = func_33(Var0);
	return uVar1;
}

int func_33(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_34()
{
	return 1;
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

void func_36()
{
	if (iLocal_68 == 0)
	{
		if (!func_57())
		{
			if (func_2(Local_45[0 /*20*/].f_1))
			{
				func_56(&uLocal_92, 5, Local_45[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (func_2(Local_45[1 /*20*/].f_1))
			{
				func_56(&uLocal_92, 5, Local_45[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_68 = 1;
				iLocal_69 = 1;
			}
			if (iLocal_68 == 0)
			{
				if (func_55() == 0)
				{
					if (func_39(&uLocal_92, cLocal_91, "RE_YETA_MIKE", 7, 0, 0, 0))
					{
						iLocal_68 = 1;
					}
				}
				else if (func_39(&uLocal_92, cLocal_91, "RE_YETA_FRAN", 7, 0, 0, 0))
				{
					iLocal_68 = 1;
				}
			}
		}
	}
	else if (iLocal_69 == 0)
	{
		if (!func_57())
		{
			if (func_2(Local_45[0 /*20*/].f_1))
			{
				func_37(Local_45[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_69 = 1;
			}
			else if (func_2(Local_45[1 /*20*/].f_1))
			{
				func_37(Local_45[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_69 = 1;
			}
			else
			{
				iLocal_69 = 1;
			}
		}
	}
}

void func_37(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_38(iParam2), 1);
}

int func_38(int iParam0)
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

bool func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_53();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_51();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam2)
			{
				func_50();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_49())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77852)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_48())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 9))
				{
					return 0;
				}
			}
			func_47();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_46();
		func_41();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_53();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973333.f_1), {Global_20904}, 4);
		Global_1973333 = Global_7139;
		Global_1973333.f_6 = Global_21295;
	}
}

int func_42()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_45())
	{
		return 0;
	}
	if (func_43(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21285 = 1;
}

void func_47()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	unk_0xB0550BC91B0159D6(&Global_7825, 16);
}

int func_48()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	if (Global_77852)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_50()
{
	if (func_24(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_55();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_52(int iParam0, int iParam1)
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

void func_53()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_55()
{
	func_23();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_56(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(uParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(uParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(uParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(uParam2, 1);
			}
		}
	}
}

int func_57()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	if (func_2(uLocal_48))
	{
		if (!bLocal_64)
		{
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) <= 7f || unk_0x174CED88B97C78D9(uLocal_48, 242628503) == 7)
			{
				if (!iLocal_66)
				{
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) <= 7f)
					{
					}
					if (unk_0x174CED88B97C78D9(uLocal_48, 242628503) == 7)
					{
					}
				}
				return 1;
			}
		}
		else if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) <= 4.5f || unk_0x174CED88B97C78D9(uLocal_48, 242628503) == 7)
		{
			if (!iLocal_66)
			{
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_48, 0), 1) <= 4.5f)
				{
				}
				if (unk_0x174CED88B97C78D9(uLocal_48, 242628503) == 7)
				{
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	if (func_2(uLocal_48))
	{
		if (unk_0xFCF559C8631ABED7(uLocal_48, "cellphone@", "cellphone_call_out", 3))
		{
			if (unk_0xD01FAFCE275C94F3(uLocal_48, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (unk_0xE5965CDF24F93A9F(uLocal_52))
				{
					unk_0x4BDA5AFD88C085EB(&uLocal_52);
				}
			}
		}
	}
}

int func_60()
{
	int iVar0;
	
	iVar0 = unk_0xA0F62C1038208492(Local_45[0 /*20*/].f_10);
	if (iVar0 != 0)
	{
		unk_0x62EB051F5ED6DD41(iVar0);
		if (unk_0xEA02B859DE237081(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			if (func_60())
			{
				if (!unk_0xEC32121F2E3875C8(-1831288286))
				{
					unk_0x5DD86AC785D8E188(-1831288286, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
				}
				else if (unk_0xC4336736B30C9DF5(-1831288286) < 1f)
				{
					unk_0x1B3E1454BD86FCE6(-1831288286, 1f, 0, 0);
					unk_0x7E15597AA5F53F9A(-1831288286, 1, 0, 1);
				}
			}
			func_59();
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (func_2(uLocal_49) || func_2(uLocal_50))
				{
					if (func_65())
					{
						if (iLocal_71 == 0)
						{
							if (bLocal_63)
							{
								unk_0x03A927199A2DFE46(uLocal_48);
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 12, 2);
								unk_0x49D97B076E3590AC(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								unk_0xC963A45B50851768(uLocal_87);
								unk_0x8ACADA903FCAA42F(uLocal_48, uLocal_87);
								unk_0x7461D7C5BA953BC7(&uLocal_87);
							}
							else
							{
								unk_0x03A927199A2DFE46(uLocal_48);
								unk_0xA888F8CC04F25CC8(&uLocal_87);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 12, 2);
								unk_0x49D97B076E3590AC(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								unk_0xC963A45B50851768(uLocal_87);
								unk_0x8ACADA903FCAA42F(uLocal_48, uLocal_87);
								unk_0x7461D7C5BA953BC7(&uLocal_87);
							}
							bLocal_72 = true;
							iLocal_71 = 1;
						}
						if (!bLocal_64 && !bLocal_63)
						{
							if (iLocal_55 == -1)
							{
								iLocal_55 = unk_0x320D1840B6DAA1CC();
							}
							if (iLocal_56 == -1)
							{
								iLocal_56 = 4000;
							}
						}
						else
						{
							if (iLocal_55 == -1)
							{
								iLocal_55 = unk_0x320D1840B6DAA1CC();
							}
							if (iLocal_56 == -1)
							{
								iLocal_56 = 1000;
							}
						}
						if (iLocal_55 != -1 && iLocal_56 != 1)
						{
							if ((unk_0x320D1840B6DAA1CC() - iLocal_55) >= iLocal_56)
							{
								func_62();
								unk_0x1CF3F44FC2EB9F99("RE9_SPOTTED");
								iLocal_61 = 1;
								iLocal_47 = 2;
							}
						}
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_51))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_51);
					}
					if (unk_0xE5965CDF24F93A9F(uLocal_48))
					{
						if (unk_0x55B23FE400FCEA6B(uLocal_48, 0))
						{
							if (!iLocal_73)
							{
								iLocal_73 = 1;
							}
						}
					}
					iLocal_67 = 1;
					if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
					{
						if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
				}
			}
			break;
		
		case 2:
			iLocal_46 = 2;
			iLocal_47 = 0;
			break;
	}
}

void func_62()
{
	if (func_55() == 1)
	{
		func_56(&uLocal_92, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_56(&uLocal_92, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
	}
	func_56(&uLocal_92, 4, uLocal_48, "SIMEON", 0, 1);
	if (bLocal_65)
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
	else if (bLocal_63)
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_EXT", 7, 1, 0, 0);
	}
	else if (func_63())
	{
		if (func_55() == 0)
		{
			func_39(&uLocal_92, cLocal_91, "RE_YETAM", 7, 0, 0, 0);
		}
		else if (func_55() == 1)
		{
			func_39(&uLocal_92, cLocal_91, "RE_YETAF", 7, 0, 0, 0);
		}
	}
	else
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
}

int func_63()
{
	if ((((((((func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && func_64(unk_0xE2D3D51028F0428A()) != joaat("object")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_knife")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_nightstick")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_hammer")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_bat")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_crowbar")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_golfclub")) && func_64(unk_0xE2D3D51028F0428A()) != joaat("weapon_bottle"))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		else if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
	}
	return 1;
}

int func_64(var uParam0)
{
	var uVar0;
	
	unk_0xA7E29842FA438ED6(uParam0, &uVar0, 1);
	return uVar0;
}

int func_65()
{
	if (!unk_0x97D65C0968CFE3AF(Local_78, Local_79) && !(unk_0x90BD7EB173E1CFD6(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && unk_0x90BD7EB173E1CFD6(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (unk_0x782B98242B6BBB25(unk_0xE2D3D51028F0428A()) == unk_0x2E87280918B16506("rm_showroom"))
		{
			if (!func_129())
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -41.19015f, -1104.137f, 24.42232f, -33.7943f, -1107.183f, 28.67232f, 8.5f, 0, 1, 0))
				{
					bLocal_64 = true;
					func_77(0);
				}
				else
				{
					bLocal_64 = false;
					func_77(1);
				}
				func_67(1);
			}
			return 1;
		}
	}
	else if (unk_0x97D65C0968CFE3AF(Local_78, Local_79) || (unk_0x90BD7EB173E1CFD6(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && unk_0x90BD7EB173E1CFD6(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (unk_0x782B98242B6BBB25(unk_0xE2D3D51028F0428A()) == unk_0x2E87280918B16506("rm_showroom"))
		{
			func_35(&(Local_45[0 /*20*/].f_1), 1, 0, 1);
			func_35(&(Local_45[1 /*20*/].f_1), 1, 0, 1);
			func_66(&uLocal_50);
			func_66(&uLocal_49);
			func_100();
		}
	}
	return 0;
}

void func_66(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

int func_67(int iParam0)
{
	if (func_71())
	{
		Global_112905 = 1;
		Global_112902 = unk_0x320D1840B6DAA1CC();
		if (func_17(Global_112904))
		{
			func_68(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_17(Global_112904))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112915.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_69(func_70(iParam0), -1);
					Global_112915.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_69(func_70(iParam0), -1);
					Global_112915.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_69(func_70(iParam0), -1);
					Global_112915.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 2);
				}
			}
			break;
	}
}

void func_69(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_70(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_71()
{
	switch (func_72(&Global_31565, 0, 5, 0, unk_0x69CE66B03B2184EB()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_72(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_76(0))
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_42596 = iParam2;
		Global_42558 = *uParam0;
		Global_42559 = iParam4;
		Global_42557 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42557 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42557)
			{
				if (Global_42563[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42558 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_74(iParam2))
		{
			return 0;
		}
		if (Global_42557 == 8)
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		Global_42563[Global_42557 /*4*/] = Global_42560;
		Global_42563[Global_42557 /*4*/].f_1 = iParam1;
		Global_42563[Global_42557 /*4*/].f_2 = iParam2;
		Global_42563[Global_42557 /*4*/].f_3 = 0;
		Global_42557++;
		if (iParam4 != 0)
		{
			func_73(uParam0, iParam4);
		}
	}
	return 2;
}

void func_73(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42557 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42557)
	{
		if (Global_42563[iVar0 /*4*/] == *uParam0)
		{
			Global_42563[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_42596);
}

int func_75(int iParam0, int iParam1)
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

int func_76(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		if (func_2(uLocal_50))
		{
			unk_0x1C2ED929474DC6FE(uLocal_50, 1, 0);
			unk_0x5C65DDDC219B3AA5(uLocal_50, 0);
			unk_0xFEF687AF74EEDCC2(uLocal_50, 1);
			uLocal_48 = uLocal_50;
			uLocal_52 = uLocal_54;
			func_66(&uLocal_49);
			func_78(&uLocal_53);
		}
	}
	else if (func_2(uLocal_49))
	{
		unk_0x1C2ED929474DC6FE(uLocal_49, 1, 0);
		unk_0x5C65DDDC219B3AA5(uLocal_49, 0);
		unk_0xFEF687AF74EEDCC2(uLocal_49, 1);
		uLocal_48 = uLocal_49;
		uLocal_52 = uLocal_53;
		func_66(&uLocal_50);
		func_78(&uLocal_54);
	}
}

void func_78(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
}

void func_79()
{
	switch (iLocal_47)
	{
		case 0:
			if (func_96())
			{
				iLocal_47 = 1;
			}
			else if (func_84())
			{
				func_100();
			}
			unk_0x84A65E2E9CFB6A77(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, 0, 1);
			unk_0x17B104183E0F2C46(-53.57574f, -1095.356f, 24.17232f, -46.52551f, -1094.587f, 27.42232f, 3.75f, 0, 0, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			if (!func_2(uLocal_49) || !func_2(uLocal_50))
			{
				func_81(&uLocal_49, 18, Local_57, fLocal_58, 1);
				if (func_2(uLocal_49))
				{
					unk_0x1C2ED929474DC6FE(uLocal_49, 0, 0);
					unk_0xFEF687AF74EEDCC2(uLocal_49, 0);
					unk_0xA7266A50941DBAEA(uLocal_49, 0);
					unk_0x50274A7EACA3133A(uLocal_49, 1);
					unk_0xFF4BEB6CFF55A013(uLocal_49, iLocal_90);
					unk_0x0407CF7EFEE35240(uLocal_49, 1);
					unk_0x9521FB98DB6DDF50(uLocal_49, joaat("weapon_pistol"), 999, 0, 0);
					unk_0xE701941B064F05A2(uLocal_49, 0, iLocal_88);
					unk_0x9972EFADA7A2A47D(5, iLocal_88, 1862763509);
					unk_0x006574E87E6F1942(uLocal_49, 1, 1);
					unk_0xD6A76BAB45A4B460(uLocal_49, 104, 1);
					uLocal_53 = unk_0x0E536D72AB30F4C8(iLocal_74, unk_0x6B62510F212526DC(uLocal_49, 1), 1, 1, 0);
					unk_0x9A97DC6DBC7B223D(uLocal_53, uLocal_49, unk_0xB897FCFCFA664B38(uLocal_49, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_87);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x3F2B528DF27C8A9F(uLocal_87, 1);
					unk_0xC963A45B50851768(uLocal_87);
					unk_0x8ACADA903FCAA42F(uLocal_49, uLocal_87);
					unk_0x7461D7C5BA953BC7(&uLocal_87);
					unk_0x5C65DDDC219B3AA5(uLocal_49, 1);
				}
				func_81(&uLocal_50, 18, Local_59, fLocal_60, 1);
				if (func_2(uLocal_50))
				{
					unk_0x1C2ED929474DC6FE(uLocal_50, 0, 0);
					unk_0xFEF687AF74EEDCC2(uLocal_50, 0);
					unk_0xA7266A50941DBAEA(uLocal_50, 0);
					unk_0x50274A7EACA3133A(uLocal_50, 1);
					unk_0xFF4BEB6CFF55A013(uLocal_50, iLocal_90);
					unk_0x0407CF7EFEE35240(uLocal_50, 1);
					unk_0x9521FB98DB6DDF50(uLocal_50, joaat("weapon_pistol"), 999, 0, 0);
					unk_0xE701941B064F05A2(uLocal_50, 0, iLocal_88);
					unk_0x9972EFADA7A2A47D(5, iLocal_88, 1862763509);
					unk_0x006574E87E6F1942(uLocal_50, 1, 1);
					unk_0xD6A76BAB45A4B460(uLocal_50, 104, 1);
					uLocal_54 = unk_0x0E536D72AB30F4C8(iLocal_74, unk_0x6B62510F212526DC(uLocal_50, 1), 1, 1, 0);
					unk_0x9A97DC6DBC7B223D(uLocal_54, uLocal_50, unk_0xB897FCFCFA664B38(uLocal_50, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_87);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x3F2B528DF27C8A9F(uLocal_87, 1);
					unk_0xC963A45B50851768(uLocal_87);
					unk_0x8ACADA903FCAA42F(uLocal_50, uLocal_87);
					unk_0x7461D7C5BA953BC7(&uLocal_87);
					unk_0x5C65DDDC219B3AA5(uLocal_49, 1);
				}
			}
			else
			{
				func_80();
				uLocal_75 = unk_0xBA715A7BEBA5A1F9(joaat("baller2"), -46.2722f, -1097.466f, 25.42f, 112.5363f, 1, 1, 0);
				unk_0xD584204572DF0440(uLocal_75, 7);
				unk_0x2EB7787881686751(uLocal_75, 3);
				unk_0x3B2646B62E7BBE11(uLocal_75, 2);
				unk_0xF838539C61C30896(uLocal_75, 0);
				uLocal_76 = unk_0xBA715A7BEBA5A1F9(joaat("tailgater"), -41.07354f, -1099.567f, 25.42f, 138.4292f, 1, 1, 0);
				unk_0xD584204572DF0440(uLocal_76, 12);
				unk_0x3B2646B62E7BBE11(uLocal_76, 2);
				unk_0xF838539C61C30896(uLocal_76, 0);
				uLocal_77 = unk_0xBA715A7BEBA5A1F9(joaat("bjxl"), -36.74456f, -1101.583f, 25.42f, 155.1573f, 1, 1, 0);
				unk_0xD584204572DF0440(uLocal_77, 4);
				unk_0x2EB7787881686751(uLocal_77, 3);
				unk_0x3B2646B62E7BBE11(uLocal_77, 2);
				unk_0xF838539C61C30896(uLocal_77, 0);
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			iLocal_46 = 1;
			iLocal_47 = 0;
			break;
	}
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_45[iVar0 /*20*/].f_18 = 1;
		iVar0++;
	}
}

int func_81(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_25(iParam1))
	{
		iVar0 = func_83(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, fParam3, 0, 0);
			unk_0xDCB52C614B3660EC(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*uParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*uParam0, 5, 2, 0, 0);
				}
			}
			func_82(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_95808[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_83(int iParam0)
{
	if (!func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_84()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_95())
		{
			return 0;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (func_85(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_85(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_25(func_55()))
		{
			iVar5 = func_22();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 2) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 3))
				{
					func_86(iVar1, &Var0);
					fVar4 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_87(uParam1, "Abigail1", func_89(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 1:
			func_87(uParam1, "Abigail2", func_89(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 2:
			func_87(uParam1, "Barry1", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 3:
			func_87(uParam1, "Barry2", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 4:
			func_87(uParam1, "Barry3", func_89(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 5:
			func_87(uParam1, "Barry3A", func_89(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 6:
			func_87(uParam1, "Barry3C", func_89(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 7:
			func_87(uParam1, "Barry4", func_89(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_88(iParam0), 0, 0);
			break;
		
		case 8:
			func_87(uParam1, "Dreyfuss1", func_89(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 9:
			func_87(uParam1, "Epsilon1", func_89(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 10:
			func_87(uParam1, "Epsilon2", func_89(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 11:
			func_87(uParam1, "Epsilon3", func_89(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 12:
			func_87(uParam1, "Epsilon4", func_89(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 13:
			func_87(uParam1, "Epsilon5", func_89(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 14:
			func_87(uParam1, "Epsilon6", func_89(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 15:
			func_87(uParam1, "Epsilon7", func_89(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 16:
			func_87(uParam1, "Epsilon8", func_89(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 17:
			func_87(uParam1, "Extreme1", func_89(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 18:
			func_87(uParam1, "Extreme2", func_89(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 19:
			func_87(uParam1, "Extreme3", func_89(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 20:
			func_87(uParam1, "Extreme4", func_89(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 21:
			func_87(uParam1, "Fanatic1", func_89(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_88(iParam0), 1, 0);
			break;
		
		case 22:
			func_87(uParam1, "Fanatic2", func_89(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_88(iParam0), 1, 0);
			break;
		
		case 23:
			func_87(uParam1, "Fanatic3", func_89(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_88(iParam0), 0, 1);
			break;
		
		case 24:
			func_87(uParam1, "Hao1", func_89(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_88(iParam0), 0, 1);
			break;
		
		case 25:
			func_87(uParam1, "Hunting1", func_89(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 26:
			func_87(uParam1, "Hunting2", func_89(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 27:
			func_87(uParam1, "Josh1", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 28:
			func_87(uParam1, "Josh2", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 29:
			func_87(uParam1, "Josh3", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 30:
			func_87(uParam1, "Josh4", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 31:
			func_87(uParam1, "Maude1", func_89(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 32:
			func_87(uParam1, "Minute1", func_89(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 33:
			func_87(uParam1, "Minute2", func_89(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 34:
			func_87(uParam1, "Minute3", func_89(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 35:
			func_87(uParam1, "MrsPhilips1", func_89(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 36:
			func_87(uParam1, "MrsPhilips2", func_89(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 37:
			func_87(uParam1, "Nigel1", func_89(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 38:
			func_87(uParam1, "Nigel1A", func_89(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 39:
			func_87(uParam1, "Nigel1B", func_89(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 40:
			func_87(uParam1, "Nigel1C", func_89(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 41:
			func_87(uParam1, "Nigel1D", func_89(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 42:
			func_87(uParam1, "Nigel2", func_89(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 43:
			func_87(uParam1, "Nigel3", func_89(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 44:
			func_87(uParam1, "Omega1", func_89(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 45:
			func_87(uParam1, "Omega2", func_89(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 46:
			func_87(uParam1, "Paparazzo1", func_89(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 47:
			func_87(uParam1, "Paparazzo2", func_89(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 48:
			func_87(uParam1, "Paparazzo3", func_89(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 49:
			func_87(uParam1, "Paparazzo3A", func_89(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 50:
			func_87(uParam1, "Paparazzo3B", func_89(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 51:
			func_87(uParam1, "Paparazzo4", func_89(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 52:
			func_87(uParam1, "Rampage1", func_89(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 54:
			func_87(uParam1, "Rampage3", func_89(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 55:
			func_87(uParam1, "Rampage4", func_89(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 56:
			func_87(uParam1, "Rampage5", func_89(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 53:
			func_87(uParam1, "Rampage2", func_89(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 57:
			func_87(uParam1, "TheLastOne", func_89(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 58:
			func_87(uParam1, "Tonya1", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 59:
			func_87(uParam1, "Tonya2", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 60:
			func_87(uParam1, "Tonya3", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 61:
			func_87(uParam1, "Tonya4", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 62:
			func_87(uParam1, "Tonya5", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_87(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_90(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_90(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_91()
{
	if (func_94() && !func_95())
	{
		return 1;
	}
	if (func_93() && func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_112633 > 0;
}

int func_93()
{
	if (Global_96896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_95()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_96()
{
	if (((((((((((unk_0x0152AA00FA3130F1(Local_45[0 /*20*/]) && unk_0x0152AA00FA3130F1(Local_45[1 /*20*/])) && unk_0xC870CD3D6D40CB09(Local_45[0 /*20*/].f_17)) && unk_0xC870CD3D6D40CB09(Local_45[1 /*20*/].f_17)) && func_60()) && unk_0x6F940C2636C076AD("cellphone@")) && unk_0x6F940C2636C076AD("cellphone@str")) && unk_0xBD3CEA9CD36E271E("reyetarian_simeonoffice")) && unk_0x0152AA00FA3130F1(iLocal_74)) && unk_0x0152AA00FA3130F1(joaat("bjxl"))) && unk_0x0152AA00FA3130F1(joaat("tailgater"))) && unk_0x0152AA00FA3130F1(joaat("baller2")))
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0)
{
	switch (Local_45[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
		
		case 1:
			if (!Local_45[iParam0 /*20*/].f_19)
			{
				if (!func_2(Local_45[iParam0 /*20*/].f_1))
				{
					Local_45[iParam0 /*20*/].f_1 = unk_0xA8D58C3AADA2C41C(22, Local_45[iParam0 /*20*/], Local_45[iParam0 /*20*/].f_10, Local_45[iParam0 /*20*/].f_13, 1, 1);
					if (func_2(Local_45[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							unk_0xDB4F67AAFBF32AA5(Local_45[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", Local_80[iParam0 /*3*/], fLocal_81[iParam0], 0, 0, 1);
							unk_0x0BF0EE0B51C31E49(Local_45[iParam0 /*20*/].f_1);
							unk_0x9DA17163846E32FC(Local_45[iParam0 /*20*/].f_1, 1);
							unk_0x1EE49ABA6B11E9CF(Local_45[iParam0 /*20*/].f_1, -37.34785f, -1102.022f, 25.42232f, 3f, 0, 0);
							unk_0xBC12D08EE7559CCD(Local_45[iParam0 /*20*/].f_1, 37, 1);
						}
						unk_0x50274A7EACA3133A(Local_45[iParam0 /*20*/].f_1, 1);
						unk_0xFF4BEB6CFF55A013(Local_45[iParam0 /*20*/].f_1, iLocal_88);
						unk_0xE701941B064F05A2(Local_45[iParam0 /*20*/].f_1, 0, iLocal_88);
						unk_0xBC12D08EE7559CCD(Local_45[iParam0 /*20*/].f_1, 23, 0);
						unk_0xBC12D08EE7559CCD(Local_45[iParam0 /*20*/].f_1, 1, 0);
						unk_0xBC12D08EE7559CCD(Local_45[iParam0 /*20*/].f_1, 28, 1);
						unk_0x1EABB8571D8C86D4(Local_45[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_70[iParam0] = 0;
						if (func_55() == 0)
						{
							unk_0x9521FB98DB6DDF50(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_17, -1, 1, 1);
						}
						unk_0xF1A23B343DFEDFD0(Local_45[iParam0 /*20*/]);
						Local_45[iParam0 /*20*/].f_19 = 1;
						Local_45[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_2(Local_45[iParam0 /*20*/].f_1))
			{
				if (iLocal_67)
				{
					func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					unk_0x03A927199A2DFE46(Local_45[iParam0 /*20*/].f_1);
					unk_0xA091C233F9D0AB04(Local_45[iParam0 /*20*/].f_1, 1, -1, "DEFAULT_ACTION");
					unk_0xA888F8CC04F25CC8(&uLocal_87);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 12, 2);
					unk_0x7D1424753688EE7A(0, Local_45[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 1193033728);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_87);
					unk_0x8ACADA903FCAA42F(Local_45[iParam0 /*20*/].f_1, uLocal_87);
					unk_0x7461D7C5BA953BC7(&uLocal_87);
					Local_45[iParam0 /*20*/].f_18 = 3;
				}
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(Local_45[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 3:
			if (func_2(Local_45[iParam0 /*20*/].f_1))
			{
				func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				if (unk_0x174CED88B97C78D9(Local_45[iParam0 /*20*/].f_1, 242628503) == 7 || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(Local_45[iParam0 /*20*/].f_1, 0), 1) <= 5f)
				{
					unk_0xF30F15F203736DE4(Local_45[iParam0 /*20*/].f_1, unk_0xE2D3D51028F0428A(), -1, 0, 2);
					unk_0xC1A74225341AA9FB(Local_45[iParam0 /*20*/].f_1, unk_0xE2D3D51028F0428A(), 0, 16);
					unk_0x0AEBDB297E8270B8(Local_45[iParam0 /*20*/].f_1, 3);
					unk_0xABC2CA6F28903308(Local_45[iParam0 /*20*/].f_1, 1);
					Local_45[iParam0 /*20*/].f_18 = 4;
				}
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(Local_45[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 4:
			func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if (!func_2(Local_45[iParam0 /*20*/].f_1))
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (iLocal_70[iParam0] == 0)
				{
					if (!func_63() || func_55() == 0)
					{
						unk_0x9521FB98DB6DDF50(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_17, -1, 0, 1);
						iLocal_70[iParam0] = 1;
					}
				}
				if (unk_0x174CED88B97C78D9(Local_45[iParam0 /*20*/].f_1, 780511057) == 7)
				{
					unk_0xC1A74225341AA9FB(Local_45[iParam0 /*20*/].f_1, unk_0xE2D3D51028F0428A(), 0, 16);
				}
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(Local_45[iParam0 /*20*/].f_1, 0), 1) >= 75f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			break;
		
		case 5:
			func_98(&(Local_45[iParam0 /*20*/].f_2));
			if (unk_0xE5965CDF24F93A9F(Local_45[iParam0 /*20*/].f_1))
			{
				unk_0xB3822DB3D538C8F3(&(Local_45[iParam0 /*20*/].f_1));
			}
			Local_45[iParam0 /*20*/].f_18 = 6;
			break;
		
		case 6:
			break;
	}
}

void func_98(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
		bVar0 = true;
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0->f_1))
	{
		unk_0xFFD8EB5462B07B59(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_7))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0->f_7, 0))
		{
			if (unk_0x227D9DCE160DDA9D(uParam0->f_7))
			{
				unk_0x0B69DCF6FE80E8EB(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_99(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6BA8B8E3D0B41C6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if (!unk_0x227D9DCE160DDA9D(uParam0))
		{
			bVar0 = true;
			if (unk_0x17FE501894ED2713(uParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x0B69DCF6FE80E8EB(uParam0, 1);
				}
				else
				{
					unk_0xBFD785B1D608BC11(uParam0, 1, iParam8);
				}
				uParam1->f_7 = uParam0;
				unk_0xEEC8A34FF9213FE4(uParam0, iParam2);
				unk_0x7C87F71C68A9AF0B(uParam0, fParam6);
				if (unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					unk_0x7A610B2EC5DA34E7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x21D1ACE7CE56627C(uParam0, iParam9);
		}
		unk_0x0FB9B56364B11BC9(uParam0, iParam4);
		unk_0x922263C0FEA956C8(uParam0, iParam5);
		*uParam1 = unk_0xC6CEFB49E88BDD9B(uParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xA582EE8380437B1B(*uParam1, iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(iParam7))
				{
					unk_0xB6AD9F9931D821CA("STRING");
					if (bParam10)
					{
						unk_0x76DB21247AE4E4E2(iParam7);
					}
					else
					{
						unk_0x26C23BE14F66F202(iParam7);
					}
					unk_0xA630BF119308F2F4(*uParam1);
				}
				unk_0x7A610B2EC5DA34E7(*uParam1, 7);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(uParam1->f_6, 2))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(uParam0, 0))
		{
			uParam1->f_1 = unk_0xFEB99716362809A3(uParam0);
			if (!unk_0xE2D0C323A1AE5D85(uParam1->f_6, 3))
			{
				if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xA582EE8380437B1B(uParam1->f_1, iParam8);
					}
					if (!unk_0xACC32B78196FBC2A(iParam7))
					{
						unk_0xB6AD9F9931D821CA("STRING");
						if (bParam10)
						{
							unk_0x76DB21247AE4E4E2(iParam7);
						}
						else
						{
							unk_0x26C23BE14F66F202(iParam7);
						}
						unk_0xA630BF119308F2F4(uParam1->f_1);
					}
					unk_0x7A610B2EC5DA34E7(uParam1->f_1, 7);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	
	if (func_129())
	{
		func_127(&Global_31565);
	}
	else
	{
		func_127(&Global_31565);
	}
	func_101(-1);
	unk_0x8813F60F6F44C9E3(iLocal_88);
	unk_0x8813F60F6F44C9E3(uLocal_89);
	unk_0x8813F60F6F44C9E3(iLocal_90);
	if (iLocal_61 == 0)
	{
		unk_0x0709E99F1DDFFF26("RE9_SPOTTED");
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_48))
	{
		unk_0xB3822DB3D538C8F3(&uLocal_48);
		if (unk_0x12DD4A0B247D9B4D(uLocal_51))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_51);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_45[iVar0 /*20*/].f_18 = 5;
		iVar0++;
	}
	unk_0x7BACBB4C6A7B18B7(uLocal_82, 0);
	unk_0x71FCD88FC7F98621();
	if (iLocal_83 != -1)
	{
		unk_0xB251DDFA99084C56(iLocal_83);
	}
	if (iLocal_84 != -1)
	{
		unk_0xB251DDFA99084C56(iLocal_84);
	}
	if (iLocal_85 != -1)
	{
		unk_0xB251DDFA99084C56(iLocal_85);
	}
	if (iLocal_86 != -1)
	{
		unk_0xB251DDFA99084C56(iLocal_86);
	}
	if (unk_0x1E63BE2394148DA0("DEALERSHIP"))
	{
		if (!unk_0x96A05000CCD43584("DEALERSHIP"))
		{
			unk_0xA3D2C191DF3CB742("DEALERSHIP", 1);
		}
	}
	unk_0x84A65E2E9CFB6A77(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 1, 1);
	unk_0xAFBDF6A5E54114C1();
}

void func_101(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_129())
	{
		func_105(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112906 = unk_0x320D1840B6DAA1CC();
		func_104(30000);
		StringCopy(&cVar0, func_103(Global_112904, 1), 64);
		if (func_31(Global_112904) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112903, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_112901, (unk_0x320D1840B6DAA1CC() - Global_112902), 0);
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_112911, 0) && Global_112915.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_112911, 0);
	}
	func_127(&Global_31565);
	Global_112905 = 0;
	func_102(-1);
}

void func_102(int iParam0)
{
	Global_112904 = iParam0;
}

char* func_103(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_104(int iParam0)
{
	Global_43147 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_105(int iParam0)
{
	func_106(iParam0, 0, func_126(iParam0));
}

void func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_125();
	func_116(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_115(iParam0, &uVar0);
	Var1 = { func_107(&uVar0) };
}

struct<16> func_107(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_114(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_112(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_111(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

int func_108(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_109(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_112(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_113(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_114(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_115(int iParam0, var uParam1)
{
	Global_112915.f_24995.f_43[iParam0] = *uParam1;
}

void func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_111(*uParam0);
	iVar3 = func_114(*uParam0);
	iVar4 = func_113(*uParam0);
	iVar5 = func_112(*uParam0);
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
	iVar6 = func_124(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_124(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_117(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_117(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, iParam1);
	func_122(uParam0, iParam2);
	func_121(uParam0, iParam3);
	func_120(uParam0, iParam5);
	func_119(uParam0, iParam4);
	func_118(uParam0, iParam6);
}

void func_118(var uParam0, int iParam1)
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

void func_119(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_124(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_122(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_124(int iParam0, int iParam1)
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

int func_125()
{
	var uVar0;
	
	func_123(&uVar0, unk_0xAA2844CAD88768B5());
	func_122(&uVar0, unk_0x80F97D7D29800A1A());
	func_121(&uVar0, unk_0x09FC827691DACE59());
	func_119(&uVar0, unk_0xD52BD97E61483713());
	func_120(&uVar0, unk_0x771485043FDC55DE());
	func_118(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_127(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42558)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42557 = 0;
	Global_42559 = 0;
	Global_42596 = 15;
	Global_62687 = 0;
	Global_62688 = 0;
}

int func_128()
{
	if (!func_74(5))
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_95())
		{
			return 0;
		}
	}
	if (func_85(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if ((Global_112904 == func_32() && unk_0xE3BBDB1C36703410()) && Global_112905)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	Local_57 = { -45.97f, -1095.58f, 25.42f };
	fLocal_58 = 105.42f;
	Local_59 = { -33.39f, -1101.79f, 25.42f };
	fLocal_60 = 184.5161f;
	Local_45[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	Local_45[0 /*20*/].f_13 = 58.7988f;
	Local_45[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	Local_45[0 /*20*/] = joaat("g_m_m_armgoon_01");
	Local_45[0 /*20*/].f_17 = joaat("weapon_pistol");
	Local_80[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_81[0] = 177.22f;
	Local_45[1 /*20*/].f_10 = { -36.8032f, -1090.619f, 25.4223f };
	Local_45[1 /*20*/].f_13 = 257.6675f;
	Local_45[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	Local_45[1 /*20*/] = joaat("g_m_y_armgoon_02");
	Local_45[1 /*20*/].f_17 = joaat("weapon_pistol");
	Local_80[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_81[1] = 136.57f;
	unk_0xD642E010A287ADFD("GoonGroup", &iLocal_88);
	unk_0xD642E010A287ADFD("PlayerGroup", &iLocal_89);
	unk_0xD642E010A287ADFD("YetarianGroup", &iLocal_90);
	unk_0x9972EFADA7A2A47D(1, iLocal_90, 1862763509);
	unk_0x9972EFADA7A2A47D(1, 1862763509, iLocal_90);
	unk_0x9972EFADA7A2A47D(5, iLocal_88, 1862763509);
	unk_0x9972EFADA7A2A47D(5, 1862763509, iLocal_88);
	unk_0x84A65E2E9CFB6A77(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 0, 1);
	uLocal_82 = unk_0x2915D98110F23A29(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, 0, 1, 1, 1);
	unk_0x5AF3192F3C3D45EC(-34.2476f, -1107.283f, 24.9621f, -24.7924f, -1102.557f, 29.8287f, 1, 1, 1, 0);
	if (iLocal_86 == -1)
	{
		iLocal_86 = unk_0x7AFC31F33CB9B8D5(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, 0, 7);
	}
	func_131(196, 0);
	func_131(197, 0);
	func_131(194, 0);
	func_131(195, 0);
	unk_0xD69A0C3662175E68(Local_45[0 /*20*/]);
	unk_0xD69A0C3662175E68(Local_45[1 /*20*/]);
	unk_0xD69A0C3662175E68(iLocal_74);
	unk_0xD69A0C3662175E68(joaat("bjxl"));
	unk_0xD69A0C3662175E68(joaat("tailgater"));
	unk_0xD69A0C3662175E68(joaat("baller2"));
	unk_0x334E9A09859A3C8D(Local_45[0 /*20*/].f_17, 31, 0);
	unk_0x334E9A09859A3C8D(Local_45[1 /*20*/].f_17, 31, 0);
	unk_0x8FB472886552D737("cellphone@");
	unk_0x8FB472886552D737("cellphone@str");
	unk_0x70F260358D1A42C4("reyetarian_simeonoffice");
	unk_0x63B063064DC08617("RE9_SPOTTED");
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_77852)
		{
			iVar0 = Global_42130[iParam0];
		}
		else
		{
			iVar0 = Global_112915.f_7261[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
				Global_38428[iParam0] = iParam1;
			}
			else if (Global_77852)
			{
				Global_42130[iParam0] = iParam1;
			}
			else
			{
				Global_112915.f_7261[iParam0] = iParam1;
			}
			unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
			func_133(iParam0);
			if (unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_132(iParam0);
			}
		}
	}
}

void func_132(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Global_38899.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xCED9E32812D6C7C7(&(Global_38899.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38899[Global_38899.f_227] = iParam0;
		Global_38899.f_227++;
	}
}

void func_133(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_141())
	{
		return;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	Var0 = { func_140(iParam0) };
	if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 2))
	{
		func_138(iParam0, &Var0);
	}
	if (!unk_0xEC32121F2E3875C8(Var0.f_5))
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0x987A5F1E1A67E3C0(Var0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1);
	if ((unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) && Global_38428[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0xB0550BC91B0159D6(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
		Global_37974[iParam0] = 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("startup_positioning")) == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_38201[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100026.f_373 == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						Global_100026.f_373 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
					}
				}
				iVar5 = Global_100026.f_373;
				iVar6 = unk_0xA0F62C1038208492(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0xCED9E32812D6C7C7(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
					Global_38428[iParam0] = 3;
					unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xB0550BC91B0159D6(&(Global_38201[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38428[iParam0];
	}
	else if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 0))
	{
		if (Global_112915.f_9085)
		{
			iVar3 = func_135(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_24(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 1) && unk_0xB4C854DD86E40FDA(joaat("ambient_solomon")) == 0)
	{
		if (func_134())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_112915.f_7261[iParam0];
	}
	if (Global_38655[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) || (Global_37974[iParam0] == 0 && Global_38428[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_37955)
		{
		}
		else
		{
			if (!unk_0xEC32121F2E3875C8(Var0.f_5))
			{
				unk_0x5DD86AC785D8E188(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
						iVar9 = unk_0xA0F62C1038208492(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0xB0550BC91B0159D6(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
			Global_38655[iParam0] = iVar3;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) && Global_38428[iParam0] != 2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
		func_132(iParam0);
		if (Global_37974[iParam0] < 2)
		{
			Global_37974[iParam0]++;
		}
	}
}

int func_134()
{
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 0;
	}
	switch (func_55())
	{
		case 0:
			if (Global_112915.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_112915.f_9085.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_112915.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_55();
	if (func_136(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[5], 0) || unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[6], 0))
			{
				return 0;
			}
		}
		if (func_25(iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_95001[5], iVar0))
			{
				return 0;
			}
		}
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
			if (iVar0 == 0)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[0], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[5], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[6], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[2], 0))
				{
					return 0;
				}
				if (func_25(iVar0))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_95001[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[1], 0))
				{
					return 0;
				}
				if (func_25(iVar0))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_95001[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[3], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				iVar0 = unk_0x15CAA6D7B11F1A7C(func_137(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_137(var uParam0)
{
	return uParam0;
}

void func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_125();
	iVar1 = func_114(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_139(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_139(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_139(iParam0))
			{
				if ((unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0) && !Global_112915.f_9085.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_112915.f_7261[iParam0] = 0;
							unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_112915.f_9085.f_99.f_58[4])
				{
					Global_112915.f_7261[iParam0] = 0;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (Global_112915.f_9085.f_99.f_58[4])
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112915.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112915.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_139(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_139(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) > 0)
			{
				Global_112915.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0xB4C854DD86E40FDA(Global_90762[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0xB4C854DD86E40FDA(joaat("omega2")) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_139(iParam0) && unk_0xB4C854DD86E40FDA(Global_90762[26 /*34*/].f_6) == 0)
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
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
			if (!func_139(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[43 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_139(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[93 /*34*/].f_6) > 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_139(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[8 /*34*/].f_6) == 0 && unk_0xB4C854DD86E40FDA(Global_90762[10 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_139(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[47 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0xB4C854DD86E40FDA(Global_90762[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
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
			if (unk_0xB4C854DD86E40FDA(Global_90762[48 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0xB4C854DD86E40FDA(Global_90762[39 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_139(iParam0))
			{
				Global_112915.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
	}
}

bool func_139(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_140(iParam0) };
	iVar1 = unk_0xA570D693C4A2B421(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

struct<7> func_140(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_141()
{
	if ((func_12() == -1 || func_12() == 999) && !func_142() == 0)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	return Global_31506;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_32();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_102(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112901 = 0;
	func_144();
}

void func_144()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

int func_145(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151499)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_171())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_95())
			{
				return 0;
			}
		}
		if (!Global_112915.f_9085)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_91())
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (Global_112904 != -1)
		{
			return 0;
		}
		if (func_25(func_55()))
		{
			if (func_85(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_169(iParam1))
		{
			return 0;
		}
		if (func_25(func_55()))
		{
			if (func_168(func_55()) == 4 || func_168(func_55()) == 5)
			{
				return 0;
			}
		}
		if (func_25(func_55()))
		{
			if (!func_167(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_166(Global_112915.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_112906) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_165())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_156(4))
		{
			return 0;
		}
		if (!func_74(5))
		{
			return 0;
		}
		if (func_155(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_155(0, 0))
		{
			return 0;
		}
		if (Global_31652)
		{
			return 0;
		}
		if (func_169(30) && !func_155(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_25(func_55()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112915.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112915.f_2363.f_539.f_2296[iVar2];
				if (func_154(iVar4))
				{
					if (func_147(iVar2))
					{
						if (!func_146(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var3) < (210f * 210f))
							{
								if (func_55() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_146(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_148(iVar0);
}

int func_148(int iParam0)
{
	return func_149(iParam0, 1);
}

int func_149(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_154(iParam0))
	{
		return 0;
	}
	func_150(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_151(func_125(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_153(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_111(iParam0) - func_111(iParam1));
		iVar5 = (func_114(iParam0) - func_114(iParam1));
		iVar6 = (func_113(iParam0) - func_113(iParam1));
		iVar7 = (func_112(iParam0) - func_112(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_111(iParam1) - func_111(iParam0));
		iVar5 = (func_114(iParam1) - func_114(iParam0));
		iVar6 = (func_113(iParam1) - func_113(iParam0));
		iVar7 = (func_112(iParam1) - func_112(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_124(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_152(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_152(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_154(iParam1) || !func_154(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_112(iParam0);
	iVar1 = func_112(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
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
	iVar0 = func_112(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_113(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_114(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_111(iParam0);
	if (iVar5 < 1 || iVar5 > func_124(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_55();
				if (!func_25(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_164()) || Global_111962) || Global_31508) || func_163()) || func_52(8, -1)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_164()) || Global_31508) || func_163()) || func_52(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_164()) || Global_111962) || Global_31508) || func_163()) || func_52(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_164()) || Global_111962) || Global_31508) || func_163()) || func_52(8, -1)) || func_162()) || func_161()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_164() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_52(8, -1)) || func_159()) || func_158()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_52(8, -1) || func_162()) || func_161()) || func_158()) || func_157())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_164()) || Global_31508) || func_163()) || func_52(8, -1)) || func_161()) || func_160()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_164()) || func_161()) || Global_111962) || Global_31508) || func_163()) || Global_43774) || func_52(8, -1)) || func_160()) || func_158()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_164()) || Global_111962) || Global_31508) || func_163()) || func_52(8, -1)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

var func_157()
{
	return Global_100013.f_1;
}

int func_158()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_159()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if (Global_78112)
	{
		return 1;
	}
	else if (Global_62684 && !Global_62690)
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_100026.f_376 > 0;
}

bool func_162()
{
	return Global_100026.f_375 > 0;
}

var func_163()
{
	return Global_1575046;
}

int func_164()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_165()
{
	func_50();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)
{
	return func_153(func_125(), iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_55();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_168(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 7;
	}
	return Global_112915.f_7688.f_919[iParam0];
}

bool func_169(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_171())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_1, iVar0);
	}
	return bVar1;
}

int func_170()
{
	var uVar0;
	
	if (Global_31656)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_171()
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

void func_172()
{
	func_100();
}

void func_173(struct<3> Param0)
{
	if (vdist(Param0, Param0) > 1f)
	{
	}
}

