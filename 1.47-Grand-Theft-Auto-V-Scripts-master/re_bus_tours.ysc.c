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
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<15> Local_50[14];
	struct<15> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62[5] = { 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	var uLocal_96 = 16;
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
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<2> Local_277 = { 0, 5 } ;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 5;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
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
	vLocal_77 = { 0f, 0f, 0f };
	vLocal_78 = { 0f, 0f, 0f };
	sLocal_262 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_264 = 524459;
	iLocal_265 = 40;
	iLocal_273 = 7500;
	vLocal_53 = { ScriptParam_277.f_1[0 /*3*/] };
	if (unk_0x9EC5BDC006623C42(11))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_63, 0))
				{
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_63, 2.5f, 1.5f, 0f), 1, false, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), unk_0xC472E34C8FBEC678(iLocal_63));
					unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 1);
					unk_0x7CED302277C0F3D3("RE_BUS_TOUR_SCENE");
					unk_0xA6E32819044BBB6A(iLocal_63, 0);
				}
			}
		}
		func_223();
	}
	if (!func_222())
	{
		unk_0x5894DC159447E10A();
	}
	if (func_189(vLocal_53, 2, 0, 1, 0))
	{
		func_186(-1);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	func_184();
	func_183();
	while (true)
	{
		func_182();
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
		}
		switch (iLocal_69)
		{
			case 0:
				if (unk_0xA80721FDC3BDCCDB())
				{
					if (func_222())
					{
						switch (iLocal_46)
						{
							case 0:
								func_178();
								break;
							
							case 1:
								if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
								{
									if (unk_0xBC2FC12AD0FBF72E(iLocal_57) || unk_0xBC2FC12AD0FBF72E(iLocal_58))
									{
										func_223();
									}
									else
									{
										iLocal_69 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_223();
					}
				}
				else
				{
					func_223();
				}
				break;
			
			case 1:
				if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
				{
					func_1();
				}
				else
				{
					func_223();
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_177();
	func_176();
	func_175();
	func_174();
	switch (iLocal_47)
	{
		case 0:
			func_120();
			break;
		
		case 1:
			func_85();
			break;
		
		case 2:
			func_84();
			func_2();
			break;
	}
}

void func_2()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_261, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_52, 64);
	unk_0xCFBA20230D6CDB6C(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0x3FD9339AA95E323F(0, 68, 1);
	unk_0x3FD9339AA95E323F(0, 99, 1);
	unk_0x3FD9339AA95E323F(0, 1, 1);
	unk_0x3FD9339AA95E323F(0, 2, 1);
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_58) && !unk_0xBC2FC12AD0FBF72E(iLocal_57))
	{
		if (iLocal_268)
		{
			if (!func_83())
			{
				if (iLocal_261 < 14)
				{
					func_82(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0);
				}
				func_223();
			}
		}
		else if (!func_81())
		{
			unk_0xC2E971FFC45AE37D();
			unk_0x581AE7724ACAD410(2);
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iLocal_63) && iLocal_52 + 1 < 13)
				{
					func_223();
				}
			}
			if (!iLocal_74)
			{
				if (timera() > 12000)
				{
					func_79();
				}
			}
			else
			{
				unk_0xCFBA20230D6CDB6C("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_40();
			func_27();
			func_21(0);
			if (func_20(iLocal_63))
			{
				iLocal_73 = 1;
			}
			unk_0xB0A4F7928B78DD26(iLocal_63);
		}
		else
		{
			func_3(&uLocal_96, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0xD303E20CB0AE4AD0(iLocal_63, 3);
			unk_0x9152A6430680BF0A(iLocal_63, 0);
			iLocal_268 = 1;
		}
	}
	else
	{
		func_223();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_18();
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
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_16();
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
				func_9();
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
				if (func_8())
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
			if (func_7())
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
			func_6();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_5();
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
		func_18();
	}
	return 0;
}

void func_5()
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

void func_6()
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

int func_7()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
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

void func_9()
{
	if (func_15(14))
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
		Global_14553 = func_10();
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

int func_10()
{
	func_11();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_14(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_13(unk_0x33CD235DF1E6A94E());
			if (func_12(iVar0) && (!func_15(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_12(Global_106565.f_2357.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_16()
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

bool func_17(int iParam0, int iParam1)
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

void func_18()
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

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_20(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if ((unk_0x67001C5CC88C66A8(iParam0, 0, 7000) || unk_0x67001C5CC88C66A8(iParam0, 1, 7000)) || unk_0x67001C5CC88C66A8(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0x833B1A3D9F713E03(2, 225))
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 256);
				unk_0xBCDC495E812C1253(1);
			}
			else
			{
				iLocal_76 = 1;
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				unk_0xBCDC495E812C1253(0);
			}
		}
	}
	if (iLocal_76 && !Local_50[13 /*15*/].f_9)
	{
		if (unk_0x8D255802EBF1DA76())
		{
			unk_0x3754CDF254D9F523(0);
		}
		func_24();
	}
	else if (iLocal_74)
	{
		if (unk_0x117DAF3BF7232886(iLocal_81))
		{
			unk_0x2F8A4DF7D0DFF0A8(iLocal_81, 0);
			unk_0x63F0B040CE6EDF0F(false, false, 0, 1, 0, 0);
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
			func_22(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
		}
	}
	else if (unk_0x117DAF3BF7232886(iLocal_81))
	{
		unk_0x2F8A4DF7D0DFF0A8(iLocal_81, 0);
		unk_0x63F0B040CE6EDF0F(false, false, 0, 1, 0, 0);
		unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
	}
}

void func_22(vector3 vParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
	{
		if (!unk_0x117DAF3BF7232886(iLocal_81) && !unk_0x8D255802EBF1DA76())
		{
			if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_51.f_4, 12f, 12f, 12f, false, true, 0))
			{
				unk_0xAB2EAB7DC12EC718(vParam0, iParam1, 3000, 3000, 0);
				func_23(vParam0);
				iLocal_71 = unk_0xE3903F59E2F22150();
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
		{
			unk_0xB225487E62B643CA(iLocal_57, 3f);
		}
		iLocal_74 = 1;
	}
}

void func_23(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iLocal_61 = unk_0xE3903F59E2F22150();
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		iVar1 = unk_0x9EC3B269A34A2BEE(6000, 16000);
		unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), vParam0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0xBC2FC12AD0FBF72E(uLocal_59[iVar0]))
		{
			iVar1 = unk_0x9EC3B269A34A2BEE(6000, 16000);
			iLocal_60[iVar0] = unk_0x9EC3B269A34A2BEE(0, 2000);
			iLocal_62[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_24()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	vVar7 = { 0.2f, 0.9f, -0.15f };
	if (unk_0x117DAF3BF7232886(iLocal_81))
	{
		if (unk_0x5D79F3D06EB318A0(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar8 = floor((unk_0x405A2F54470CCC35(2, 218) * 127f));
		iVar9 = floor((unk_0x405A2F54470CCC35(2, 219) * 127f));
		iVar10 = floor((unk_0x405A2F54470CCC35(2, 220) * 127f));
		iVar11 = floor((unk_0x405A2F54470CCC35(2, 221) * 127f));
		if (!unk_0x8871859EF0AB8004())
		{
			iVar9 = (iVar9 * -1);
			iVar11 = (iVar11 * -1);
		}
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x5D79F3D06EB318A0(2))
		{
			fVar0 = to_float(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (to_float(100) * to_float(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x5D79F3D06EB318A0(2))
		{
			fVar0 = to_float(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (to_float(100) * to_float(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		if ((iVar9 > 28 || iVar9 < -28) || unk_0x5D79F3D06EB318A0(2))
		{
			fVar0 = to_float(iVar9);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (to_float(100) * to_float(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar9 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar8 > 28 || iVar8 < -28) || unk_0x5D79F3D06EB318A0(2))
		{
			fVar0 = to_float(iVar8);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (to_float(100) * to_float(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar8 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		func_25(unk_0x33CD235DF1E6A94E(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x63B608CD1957089E(iLocal_81, fVar1);
		unk_0x5A488F57F21B3451(iLocal_81, unk_0x33CD235DF1E6A94E(), vVar7.x, (vVar7.y - 1f), (vVar7.z + 1f), 1);
	}
	else
	{
		iLocal_81 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", true);
		unk_0x5A488F57F21B3451(iLocal_81, unk_0x33CD235DF1E6A94E(), vVar7.x, (vVar7.y - 1f), (vVar7.z + 1f), 1);
		unk_0x6ADA542E698077EB(iLocal_81, 0.01f);
		fLocal_94 = -70f;
		fLocal_95 = 3f;
		func_25(unk_0x33CD235DF1E6A94E(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x63B608CD1957089E(iLocal_81, fVar1);
		unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), false, 0);
		unk_0x63F0B040CE6EDF0F(true, false, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	vector3 vVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x117DAF3BF7232886(*iParam1))
		{
			fVar0 = unk_0xC472E34C8FBEC678(iParam0);
			vVar1.x = 0f;
			vVar1.y = 0f;
			vVar1.z = fVar0;
			vVar1 = { vVar1 + vParam2 };
			unk_0x833A05A7AD82EA44(*iParam1, vVar1.x, vVar1.y, vVar1.z, 2);
		}
	}
}

void func_26()
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(uLocal_59[2]))
	{
		if (unk_0xD76D6BCC14B95CE1(uLocal_59[2], -880529684) == 7)
		{
			if (unk_0xE3903F59E2F22150() > iLocal_89 + 8000)
			{
				unk_0x990A34F9DA8E506D(uLocal_59[2], 0);
				vVar0 = { unk_0x2CA911E7569D12EA(uLocal_59[2], unk_0x9562E33C057F7589(0f, 2f), unk_0x9562E33C057F7589(0f, 2f), 0.5f) };
				iVar1 = unk_0x9EC3B269A34A2BEE(1000, 6000);
				unk_0xAE5B044AA2973E2A(uLocal_59[2], vVar0, iVar1, 2049, 2);
				iLocal_89 = unk_0xE3903F59E2F22150();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	if (!iLocal_92 && unk_0x73DA1542B2F0C458())
	{
		unk_0x9BA2E2E65B12C39B("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0x833B1A3D9F713E03(2, 223) || iLocal_73 == 1)
		{
			if (unk_0x73DA1542B2F0C458())
			{
				if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
					{
						if (!Local_50[iVar0 /*15*/].f_14 && !Local_50[iVar0 /*15*/].f_9)
						{
							settimera(0);
							Local_50[iLocal_52 /*15*/].f_9 = 1;
							func_30(Local_50[iVar0 /*15*/].f_10, Local_50[iVar0 /*15*/].f_13);
							func_29();
							if (iVar0 == 13)
							{
								iLocal_92 = 1;
								func_28();
							}
							Local_50[iVar0 /*15*/].f_14 = 1;
							iLocal_52 = iVar0;
						}
						iLocal_73 = 0;
					}
				}
			}
		}
	}
}

void func_28()
{
	if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
		{
			unk_0xED68CDDDE25A144E(iLocal_57);
			unk_0x99414FB2D30425C1(&iLocal_79);
			unk_0x77C4189A8E5C57C2(0, iLocal_63, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			unk_0x77C4189A8E5C57C2(0, iLocal_63, Local_51.f_1, 3f, 0, joaat("tourbus"), iLocal_264, 3f, 15f);
			unk_0xC734F59A13D39AEF(iLocal_79);
			unk_0x13A2D602CD10CBAC(iLocal_57, iLocal_79);
			unk_0xA7A57E7757ED035E(&iLocal_79);
		}
	}
}

void func_29()
{
	Global_14732 = 0;
	func_18();
}

void func_30(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	unk_0xDEFB5E2E5CBD460A("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x7EDEAEAED85BEE4F(1000);
	while (!unk_0xBB5E373390A5F824())
	{
		unk_0xC2E971FFC45AE37D();
		unk_0x581AE7724ACAD410(2);
		if (!unk_0x91D5C8283D19AF49(iLocal_63, 0))
		{
			func_223();
		}
		if (unk_0xBC2FC12AD0FBF72E(iLocal_57))
		{
			func_223();
		}
		wait(0);
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(1);
	}
	unk_0xC7E6A5D90DED6E0B(0f);
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
	{
		unk_0xED68CDDDE25A144E(iLocal_57);
	}
	if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
	{
		unk_0xB7350047030F7672(vParam0.x, vParam0.y, vParam0.z, 5f, 0, 0, 0, 0, false, 0);
		unk_0xBEADAF07D2339505(iLocal_63, vParam0.x, vParam0.y, vParam0.z, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(iLocal_63, fParam1);
		unk_0x4522AD7364B6AA54(iLocal_63, 0f);
		unk_0x77C4189A8E5C57C2(iLocal_57, iLocal_63, unk_0xFBB1F99A825CAB09(iLocal_63, true), 0f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		func_33(vParam0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
	{
		unk_0x1B2303F9DC2D90D5(iLocal_63, 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_63, true, true, 0);
		if (iVar0 < 13)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
			{
				unk_0x77C4189A8E5C57C2(iLocal_57, iLocal_63, Local_50[iVar0 /*15*/].f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			}
		}
		else if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
		{
			unk_0x77C4189A8E5C57C2(iLocal_57, iLocal_63, Local_51.f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		}
		unk_0x4522AD7364B6AA54(iLocal_63, 8f);
	}
	func_31();
	unk_0x816788E0CA50BB83(3);
	iLocal_48 = 3;
	func_21(1);
	unk_0x7CED302277C0F3D3("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0xACCDA78123DB57B0(1000);
	while (unk_0xD33DAC8D0D70A78C())
	{
		unk_0xC2E971FFC45AE37D();
		unk_0x581AE7724ACAD410(2);
		func_21(1);
		wait(0);
	}
	unk_0xC2E971FFC45AE37D();
	unk_0x581AE7724ACAD410(2);
	func_21(1);
}

void func_31()
{
	Global_14732 = 0;
	func_32();
}

void func_32()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_33(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4382260282C96ECD(vParam0, iParam1, iParam2, 127);
	if (unk_0xBC9F465E12815B03(iVar0))
	{
		iVar1 = (unk_0xE3903F59E2F22150() + iParam3);
		while (!unk_0xD007040030F44ED2(iVar0) && unk_0xE3903F59E2F22150() < iVar1)
		{
			if (bParam5)
			{
				func_35(0);
			}
			if (bParam4)
			{
				func_34();
			}
			wait(0);
		}
		if (unk_0xE3903F59E2F22150() < iVar1)
		{
		}
		unk_0x6BFA9158A12CC006(iVar0);
	}
}

void func_34()
{
	Global_17272.f_6 = 1;
}

void func_35(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14725)
	{
		func_37(0, 0);
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
	if (!func_7())
	{
		Global_14553.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)
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

bool func_39()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = iLocal_52 + 1;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!iLocal_92)
				{
					if (Local_50[12 /*15*/].f_9 || Local_50[13 /*15*/].f_14)
					{
						iLocal_92 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_50[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_50[iVar0 /*15*/].f_1, 30f, 30f, 15f, false, true, 0))
							{
								if (Local_50[12 /*15*/].f_9)
								{
									Local_50[13 /*15*/].f_9 = 1;
									iLocal_71 = unk_0xE3903F59E2F22150();
									iLocal_48 = 2;
								}
							}
						}
						else if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_50[iVar0 /*15*/].f_1, 40f, 40f, 12f, false, true, 0))
						{
							if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_63, 0))
							{
								func_22(Local_50[iVar0 /*15*/].f_4, Local_50[iVar0 /*15*/].f_7);
								iLocal_52 = iVar0;
								if (iLocal_75)
								{
									iLocal_75 = 0;
								}
								func_29();
								iLocal_48 = 1;
							}
							else
							{
								iLocal_48 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_22(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
				iLocal_70 = unk_0xE3903F59E2F22150();
				if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
				{
					if (iVar1 <= 13)
					{
						func_78(unk_0xFBB1F99A825CAB09(iLocal_63, true), Local_50[iVar1 /*15*/].f_1, &vLocal_77, &vLocal_78, 500);
					}
					if (unk_0x656BB209FFCEE74A(vLocal_77.x, vLocal_77.y, vLocal_78.x, vLocal_78.y))
					{
						if ((iLocal_70 - iLocal_71) > 0)
						{
							if (func_77(&uLocal_96, "BUSTOAU", Local_50[iLocal_52 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0x99414FB2D30425C1(&iVar2);
										unk_0x77C4189A8E5C57C2(0, iLocal_63, -100.461f, -206.1412f, 44.4215f, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0x77C4189A8E5C57C2(0, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0xC734F59A13D39AEF(iVar2);
										unk_0x13A2D602CD10CBAC(iLocal_57, iVar2);
										unk_0xA7A57E7757ED035E(&iVar2);
									}
									else
									{
										unk_0x77C4189A8E5C57C2(iLocal_57, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
									}
								}
								iLocal_71 = unk_0xE3903F59E2F22150();
								Local_50[iLocal_52 /*15*/].f_14 = 1;
								Local_50[iLocal_52 /*15*/].f_9 = 1;
								iLocal_48 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_42())
				{
					iLocal_48 = 3;
				}
				break;
			
			case 3:
				iLocal_70 = unk_0xE3903F59E2F22150();
				func_41(Local_50[iLocal_52 /*15*/].f_4);
				if ((iLocal_70 - iLocal_71) > 5000)
				{
					if (!func_83())
					{
						iLocal_74 = 0;
						iLocal_71 = unk_0xE3903F59E2F22150();
						if (unk_0x8D255802EBF1DA76())
						{
							unk_0x3754CDF254D9F523(1);
						}
						if (Local_50[13 /*15*/].f_9 == 1)
						{
							iLocal_48 = 4;
						}
						else
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
							{
								unk_0xB225487E62B643CA(iLocal_57, 15f);
							}
							iLocal_48 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_223();
				break;
			}
	}
}

void func_41(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((unk_0xE3903F59E2F22150() - iLocal_61) > iLocal_60[iVar0] && iLocal_62[iVar0] == 0)
		{
			if (!unk_0xD62C4419A41F106A(uLocal_59[iVar0], 0))
			{
				unk_0xAE5B044AA2973E2A(uLocal_59[iVar0], vParam0, 20000, 2050, 4);
			}
			iLocal_62[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_42()
{
	float fVar0[5];
	vector3 vVar1[5];
	
	if (func_75(1000))
	{
		iLocal_86 = 3;
	}
	iLocal_269 = 1;
	switch (iLocal_86)
	{
		case 0:
			if (unk_0x117DAF3BF7232886(iLocal_81))
			{
				unk_0x2F8A4DF7D0DFF0A8(iLocal_81, 0);
				unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
			}
			func_67(1, 1, 1, 0, 0, 0);
			unk_0x108BCD583149AF69(1);
			unk_0xDFF589A2149528CE(false);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
			unk_0xBCDC495E812C1253(1);
			iLocal_82 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			iLocal_83 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x189377BFBDC9127F(iLocal_82, true);
			unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
			unk_0x8EB023915CEEDB99(iLocal_83, iLocal_82, 17000, 1, 1);
			func_77(&uLocal_96, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0xBEADAF07D2339505(iLocal_63, Local_51.f_1, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(iLocal_63, Local_51.f_13);
			unk_0x1B2303F9DC2D90D5(iLocal_63, 1084227584);
			unk_0xD303E20CB0AE4AD0(iLocal_63, 3);
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
			{
				unk_0xED68CDDDE25A144E(iLocal_57);
				unk_0xB225487E62B643CA(iLocal_57, 0f);
				unk_0x99414FB2D30425C1(&iLocal_79);
				unk_0x78893508441AD74F(0, iLocal_63, 24, 10000);
				unk_0xC734F59A13D39AEF(iLocal_79);
				unk_0x13A2D602CD10CBAC(iLocal_57, iLocal_79);
				unk_0xA7A57E7757ED035E(&iLocal_79);
			}
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 101.4382f, 250.0447f, 107.2579f, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 268.4057f);
			unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
			iLocal_74 = 1;
			iLocal_71 = unk_0xE3903F59E2F22150();
			iLocal_86 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0xE3903F59E2F22150();
			if ((iLocal_70 - iLocal_71) > 3000)
			{
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 101.4382f, 250.0447f, 107.2579f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 268.4057f);
				unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
				unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
				vVar1[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				vVar1[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				vVar1[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				vVar1[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				vVar1[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_88 = 0;
				while (iLocal_88 < 5)
				{
					if (unk_0x765F6FEEFF39224F(uLocal_59[iLocal_88]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(uLocal_59[iLocal_88]))
						{
							unk_0x31826EF4A8BC8E9F(uLocal_59[iLocal_88]);
							unk_0x3C990C409B3845DE(uLocal_59[iLocal_88], fVar0[iLocal_88]);
							unk_0xBEADAF07D2339505(uLocal_59[iLocal_88], vVar1[iLocal_88 /*3*/], 1, false, 0, 1);
							unk_0xBD4591245C650283(uLocal_59[iLocal_88], 1193033728, 0);
						}
					}
					iLocal_88++;
				}
				iLocal_71 = unk_0xE3903F59E2F22150();
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			iLocal_70 = unk_0xE3903F59E2F22150();
			if ((iLocal_70 - iLocal_71) > 13000)
			{
				iLocal_86 = 3;
			}
			break;
		
		case 3:
			unk_0x189377BFBDC9127F(iLocal_82, false);
			unk_0x63F0B040CE6EDF0F(false, true, 3000, 0, 0, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0x2F8A4DF7D0DFF0A8(iLocal_82, 0);
			unk_0x2F8A4DF7D0DFF0A8(iLocal_83, 0);
			unk_0x108BCD583149AF69(0);
			unk_0xDFF589A2149528CE(true);
			func_67(0, 1, 1, 0, 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			iLocal_71 = 10000;
			func_43();
			return 1;
			break;
	}
	return 0;
}

void func_43()
{
	func_47(-1, 0);
	func_44();
	func_223();
}

void func_44()
{
	func_45();
}

int func_45()
{
	if (func_46(0))
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

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_49(func_55(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_48(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_48(7);
			}
			else
			{
				func_48(1);
			}
		}
	}
}

void func_48(int iParam0)
{
	Global_106551 = iParam0;
}

void func_49(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
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
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106565.f_10188.f_3853))
	{
		func_52(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_51() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_45();
				}
			}
		}
	}
}

int func_51()
{
	return Global_25765;
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_54();
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

int func_54()
{
	return Global_1312745;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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
		unk_0x8950ED5730F62EE8(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_11();
	switch (Global_106565.f_2357.f_539.f_4321)
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

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x36163153849DFDA1(&cParam0))
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

void func_67(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_74(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_7())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_73(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_74(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_73(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_71(unk_0x95B959F18401C09A())) && !func_69(unk_0x95B959F18401C09A(), 0)) && !func_68()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_71(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_68()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_70(-1, 0) == 8;
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

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_71(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_72())
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

bool func_72()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_73(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_74(int iParam0)
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

int func_75(int iParam0)
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
			if (func_76())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_76()
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

bool func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_78(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, float fParam4, float fParam5, int iParam6)
{
	if (!iLocal_75)
	{
		if (Param2 <= Param0)
		{
			*fParam4 = Param2;
			*fParam5 = Param0;
		}
		else
		{
			*fParam4 = Param0;
			*fParam5 = Param2;
		}
		if (Param2.f_1 <= Param0.f_1)
		{
			fParam4->f_1 = Param2.f_1;
			fParam5->f_1 = Param0.f_1;
		}
		else
		{
			fParam4->f_1 = Param0.f_1;
			fParam5->f_1 = Param2.f_1;
		}
		*fParam4 = { *fParam4 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		*fParam5 = { *fParam5 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		iLocal_75 = 1;
	}
}

void func_79()
{
	int iVar0[24];
	char* sVar1;
	
	sLocal_267[0] = "BUSTO_RAMB_1";
	sLocal_267[1] = "BUSTO_RAMB_2";
	sLocal_267[2] = "BUSTO_RAMB_3";
	sLocal_267[3] = "BUSTO_RAMB_4";
	sLocal_267[4] = "BUSTO_RAMB_5";
	sLocal_267[5] = "BUSTO_RAMB_6";
	sLocal_267[6] = "BUSTO_RAMB_7";
	sLocal_267[7] = "BUSTO_RAMB_8";
	sLocal_267[8] = "BUSTO_RAMB_9";
	sLocal_267[9] = "BUSTO_RAMB_10";
	sLocal_267[10] = "BUSTO_RAMB_11";
	sLocal_267[11] = "BUSTO_RAMB_12";
	sLocal_267[12] = "BUSTO_RAMB_13";
	sLocal_267[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_72)
	{
		case 0:
			iLocal_71 = unk_0xE3903F59E2F22150();
			iLocal_72 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0xE3903F59E2F22150();
			if ((iLocal_70 - iLocal_71) > 2000)
			{
				if (!func_83())
				{
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_72 = 2;
				}
			}
			break;
		
		case 2:
			if (func_83())
			{
				unk_0xCFBA20230D6CDB6C("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_270)
			{
				iLocal_70 = unk_0xE3903F59E2F22150();
				if ((iLocal_70 - iLocal_71) > iLocal_273)
				{
					if (func_80(uLocal_59[iLocal_271]))
					{
						if (iLocal_52 == 0)
						{
							sVar1 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_52 % 2) == 0)
						{
							sVar1 = "TOUR_CHAT";
						}
						else
						{
							sVar1 = "TOUR_LANDMARK";
						}
						unk_0xCFBA20230D6CDB6C("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0xAEED0213982928AC(uLocal_59[iLocal_271], sVar1, "SPEECH_PARAMS_FORCE", 1);
						iLocal_272++;
						if (iLocal_272 == 3)
						{
							iLocal_270 = 0;
						}
						iLocal_273 = unk_0x9EC3B269A34A2BEE(9000, 14000);
						iLocal_71 = unk_0xE3903F59E2F22150();
					}
					iLocal_271++;
					if (iLocal_271 == 5)
					{
						iLocal_271 = 0;
					}
				}
			}
			else if (iLocal_261 < 14)
			{
				iLocal_70 = unk_0xE3903F59E2F22150();
				if ((iLocal_70 - iLocal_71) > 10000)
				{
					if (!func_83())
					{
						if (func_82(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0))
						{
							iLocal_261++;
							iLocal_71 = unk_0xE3903F59E2F22150();
							iLocal_270 = 1;
							iLocal_272 = 0;
						}
						else
						{
							unk_0xCFBA20230D6CDB6C("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_270 = 1;
			}
			break;
	}
}

int func_80(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x703744DBEBD1252B(iParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	if (unk_0x833B1A3D9F713E03(2, 222) && !iLocal_269)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_63))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_63, 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
						{
							unk_0x78893508441AD74F(iLocal_57, iLocal_63, 24, 5000);
							fLocal_65 = unk_0x8BB475EA09C9A0EB(iLocal_63);
							while (fLocal_65 > 5f)
							{
								wait(0);
								if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
								{
									fLocal_65 = unk_0x8BB475EA09C9A0EB(iLocal_63);
								}
							}
							func_29();
							unk_0x816788E0CA50BB83(iLocal_263);
							unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 1);
							unk_0x7CED302277C0F3D3("RE_BUS_TOUR_SCENE");
							unk_0xA6E32819044BBB6A(iLocal_63, 0);
							if (unk_0x117DAF3BF7232886(iLocal_81))
							{
								unk_0x2F8A4DF7D0DFF0A8(iLocal_81, 0);
								unk_0x63F0B040CE6EDF0F(false, false, 0, 1, 0, 0);
								unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
							}
							unk_0x0FF06FD8DEB3AB01(unk_0x33CD235DF1E6A94E(), iLocal_63, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_82(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_83()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	switch (iLocal_52)
	{
		case 0:
			unk_0x453924F2AAE93AD9(0.5f);
			break;
		
		case 1:
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
			unk_0x453924F2AAE93AD9(0.6f);
			break;
	}
}

void func_85()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_58) && !unk_0xBC2FC12AD0FBF72E(iLocal_57))
	{
		switch (iLocal_49)
		{
			case 0:
				unk_0x052830EE89C97404(false);
				unk_0xDEFB5E2E5CBD460A("RE_BUS_TOUR_SCENE");
				unk_0x7B1011A61F402324(iLocal_63, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 0);
				func_67(1, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 256);
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
				unk_0x9FDF63945C690003(Local_51.f_1, 30f, 0);
				unk_0x7D1F395C3A7A37BE(iLocal_57, 0);
				unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_63, 2);
				unk_0x108BCD583149AF69(1);
				unk_0xDFF589A2149528CE(false);
				iLocal_82 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				iLocal_83 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x189377BFBDC9127F(iLocal_82, true);
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
				unk_0x8EB023915CEEDB99(iLocal_83, iLocal_82, 6500, 1, 1);
				if (unk_0x91D5C8283D19AF49(unk_0x8918EC905FC8975D(), 0))
				{
					if (unk_0x335C0645074963FE(unk_0x8918EC905FC8975D(), iLocal_63, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0x3C990C409B3845DE(unk_0x8918EC905FC8975D(), 65f);
						unk_0xBEADAF07D2339505(unk_0x8918EC905FC8975D(), 115.1136f, 241.6893f, 106.6493f, 1, false, 0, 1);
					}
				}
				unk_0xD6D4E1E1597D7BB6("BusTours");
				if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
				{
					func_78(unk_0xFBB1F99A825CAB09(iLocal_63, true), Local_50[0 /*15*/].f_1, &vLocal_77, &vLocal_78, 500);
					iLocal_275 = unk_0xE3903F59E2F22150();
					iLocal_49 = 1;
				}
				if (unk_0xB813DCBD5002BC42() == 4)
				{
					iLocal_76 = 1;
				}
				iLocal_276 = 0;
				break;
			
			case 1:
				if (!iLocal_93)
				{
					func_119();
				}
				if ((unk_0xE3903F59E2F22150() - iLocal_275) > 5000 && !iLocal_274)
				{
					func_77(&uLocal_96, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_118("Enter_bus"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					iLocal_274 = 1;
				}
				if ((unk_0xE3903F59E2F22150() - iLocal_275) > 6200)
				{
					if (iLocal_76 == 1)
					{
						if (iLocal_276 == 0)
						{
							unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
							unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_276 = 1;
						}
					}
				}
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if ((unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iLocal_63) && unk_0xEE984ED4E4A374BE(iLocal_58, iLocal_63)) && unk_0xEE984ED4E4A374BE(iLocal_57, iLocal_63))
					{
						iLocal_49 = 2;
					}
					else if (func_75(1000))
					{
						if (unk_0x67FFBB75D2430704(iLocal_63, 0, 0))
						{
							unk_0x094626C0798AE1F8(iLocal_58, iLocal_63, 0);
						}
						iLocal_49 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x77C4189A8E5C57C2(iLocal_57, iLocal_63, Local_50[0 /*15*/].f_1, Local_50[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
				unk_0x189377BFBDC9127F(iLocal_82, false);
				unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
				unk_0x2F8A4DF7D0DFF0A8(iLocal_82, 0);
				unk_0x2F8A4DF7D0DFF0A8(iLocal_83, 0);
				unk_0x108BCD583149AF69(0);
				unk_0xDFF589A2149528CE(true);
				unk_0xC2E971FFC45AE37D();
				unk_0x581AE7724ACAD410(2);
				func_67(0, 1, 1, 0, 0, 0);
				iLocal_84 = func_10();
				func_86(iLocal_84, 1, iLocal_265);
				iLocal_263 = unk_0xCB68F86E41CE5197();
				if (!iLocal_76)
				{
					unk_0x816788E0CA50BB83(3);
				}
				else
				{
					func_21(1);
				}
				unk_0x1ABDB383C83A336A(&iLocal_67);
				iLocal_47 = 2;
				break;
		}
	}
	else
	{
		func_223();
	}
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_87(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_117();
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
					func_116(99, 1);
					func_115(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_115(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_115(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_101(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_96(5))
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
							func_115(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_115(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_115(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_96(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_115(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_115(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_115(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_115(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_115(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_115(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_115(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_115(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_115(joaat("sp2_money_spent_property"), iParam3);
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
									func_115(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_115(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_115(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_115(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_115(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_115(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_96(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_115(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_115(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_115(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_115(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_115(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_115(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_95(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_116(95, iParam3);
					break;
				
				case 1:
					func_116(97, iParam3);
					break;
				
				case 2:
					func_116(96, iParam3);
					break;
			}
			func_116(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_90(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_90(iVar1);
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
					func_115(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_115(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_115(joaat("sp2_total_cash_earned"), iParam3);
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
	func_89(iParam0);
	if (Global_36425 == 15)
	{
		func_88(0);
	}
	return 1;
}

void func_88(bool bParam0)
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

void func_89(int iParam0)
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

void func_90(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_53(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_53(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_53(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_53(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_93(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_93(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_93(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_93(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_93(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_93(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_92() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_92() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_91(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_91(int iParam0)
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

int func_92()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_94(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

void func_95(int iParam0)
{
	func_116(93, iParam0);
	func_116(29, iParam0);
	func_116(30, iParam0);
}

bool func_96(int iParam0)
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
		return func_98(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_98(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_98(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_98(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_97(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_97(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_97(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_97(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_97(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_97(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_92() /*10778*/].f_6165.f_10, iParam0);
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_94(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_54();
	}
	iVar1 = func_100(iParam0, iParam1);
	uVar2 = func_99(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_99(int iParam0)
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

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_54();
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

int func_101(bool bParam0)
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
		func_52(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_102(27, 1);
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_103(iParam0, iParam1);
}

int func_103(int iParam0, int iParam1)
{
	if (func_15(14) && !func_114(iParam0))
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
	if (func_113(&Global_4269608))
	{
		if (func_111(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_104(&Global_4269608, iParam0))
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

int func_104(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_114(iParam1))
	{
		return 0;
	}
	if (func_111(uParam0, iParam1))
	{
		return 0;
	}
	if (func_110(uParam0) < 0f)
	{
		func_109(uParam0, 0);
	}
	func_107(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_105(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_105(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_114(iParam1))
	{
		return 0;
	}
	if (func_111(uParam0, iParam1))
	{
		return 0;
	}
	if (func_110(uParam0) < 0f)
	{
		func_109(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_106(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_106(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_107(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_108(uParam0, iVar0);
		iVar0++;
	}
	func_109(uParam0, (Global_4269607 - 0.5f));
}

void func_108(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_109(var uParam0, float fParam1)
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

float func_110(var uParam0)
{
	return uParam0->f_80;
}

bool func_111(var uParam0, int iParam1)
{
	return func_112(uParam0, iParam1) != -1;
}

int func_112(var uParam0, int iParam1)
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

bool func_113(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_114(int iParam0)
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

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_116(int iParam0, int iParam1)
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

void func_117()
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

int func_118(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_119()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
	{
		unk_0xED68CDDDE25A144E(iLocal_58);
		unk_0xC838CE9837D0ABAF(iLocal_58, iLocal_63, 10000, 0, 2f, 262144, 0);
		unk_0x897EF720254BBEA3(iLocal_58, true);
		iLocal_93 = 1;
	}
}

void func_120()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_160())
		{
			unk_0xD303E20CB0AE4AD0(iLocal_63, 3);
			unk_0x9152A6430680BF0A(iLocal_63, 0);
			func_223();
		}
		else if (func_151(4))
		{
			if ((unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_63, 5f, 5f, 5f, 0, 1, 0) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) && !func_118("TX_H02"))
			{
				if (func_149())
				{
					if (!iLocal_266)
					{
						unk_0xD303E20CB0AE4AD0(iLocal_63, 1);
						iLocal_266 = 1;
					}
					unk_0x9BA2E2E65B12C39B("Enter_bus", 0);
					if (unk_0xF1CDE9FD207C4CD8(2, 23))
					{
						unk_0xC838CE9837D0ABAF(unk_0x33CD235DF1E6A94E(), iLocal_63, -1, 2, 1f, 8, 0);
					}
					if (!unk_0xE38E3CF1625A4145(iLocal_67))
					{
						if (unk_0xE38E3CF1625A4145(iLocal_68))
						{
							unk_0x1ABDB383C83A336A(&iLocal_68);
						}
						iLocal_67 = unk_0x8848A15CBDADDC60(iLocal_63);
						unk_0xBF11C8A43770C598(iLocal_67, true);
						unk_0xCE5C49921A521962(iLocal_67, Global_25811);
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
						{
							unk_0xC4A347124F39D998(iLocal_58, unk_0x33CD235DF1E6A94E(), -1, 0, 2);
						}
						if (!func_148())
						{
							if (func_136())
							{
								func_223();
							}
							else
							{
								func_126(1);
							}
						}
					}
					if (func_125())
					{
						iLocal_269 = 0;
						func_124(1);
					}
				}
				else
				{
					unk_0x9BA2E2E65B12C39B("No_bus_money", 0);
					if (iLocal_266)
					{
						unk_0xD303E20CB0AE4AD0(iLocal_63, 2);
						iLocal_266 = 0;
					}
				}
			}
		}
		if (iLocal_88 < 5)
		{
			if (func_121(&(uLocal_59[iLocal_88])))
			{
				iLocal_88++;
			}
		}
	}
}

int func_121(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x730FAC2C24A116EC(vLocal_53, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*uParam0))
		{
			if (func_123(*uParam0))
			{
				if (!unk_0x5A04E3BD0B5E7E49(*uParam0))
				{
					unk_0x0D21E1FDE062ED99(*uParam0, true, 0);
					unk_0xED68CDDDE25A144E(*uParam0);
					unk_0x4A852F02088ECC9D(*uParam0, true);
					unk_0xC6CDB5F78F0E3592(*uParam0, "randompassenger");
					unk_0x5FEE418CE11E6DDE(*uParam0, 134, true);
					switch (iLocal_88)
					{
						case 0:
							if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
							{
								unk_0x094626C0798AE1F8(*uParam0, iLocal_63, 3);
								unk_0x897EF720254BBEA3(*uParam0, true);
							}
							break;
						
						case 1:
							if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
							{
								unk_0x094626C0798AE1F8(*uParam0, iLocal_63, 7);
								unk_0x897EF720254BBEA3(*uParam0, true);
							}
							break;
						
						case 2:
							if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
							{
								unk_0x094626C0798AE1F8(*uParam0, iLocal_63, 6);
								unk_0x897EF720254BBEA3(*uParam0, true);
							}
							break;
						
						case 3:
							if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
							{
								unk_0x094626C0798AE1F8(*uParam0, iLocal_63, 8);
								unk_0x897EF720254BBEA3(*uParam0, true);
							}
							break;
						
						case 4:
							if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
							{
								unk_0x094626C0798AE1F8(*uParam0, iLocal_63, 1);
								unk_0x897EF720254BBEA3(*uParam0, true);
							}
							break;
					}
					sVar0 = func_122(unk_0x28C4F998CC33B00F(*uParam0));
					unk_0x5464B9731013E08C(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_122(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x541D5C57194E73C4(iParam0) == joaat("a_m_m_tramp_01") || unk_0x541D5C57194E73C4(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x541D5C57194E73C4(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x541D5C57194E73C4(iParam0) == joaat("s_m_y_cop_01")) || unk_0x541D5C57194E73C4(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x541D5C57194E73C4(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_124(int iParam0)
{
	iLocal_49 = 0;
	iLocal_47 = iParam0;
}

int func_125()
{
	if (unk_0x91D5C8283D19AF49(iLocal_63, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()) == iLocal_63)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (func_130())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_56(Global_106554))
		{
			func_127(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_56(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_128(func_129(iParam0), -1);
					Global_106565.f_24989.f_2++;
					unk_0x8950ED5730F62EE8(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(Global_106561, 1))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_128(func_129(iParam0), -1);
					Global_106565.f_24989.f_3++;
					unk_0x8950ED5730F62EE8(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Global_106561, 2))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_128(func_129(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

char* func_129(int iParam0)
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

int func_130()
{
	switch (func_131(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
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

int func_131(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_135(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_133(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_132(uParam0, iParam4);
		}
	}
	return 2;
}

void func_132(var uParam0, int iParam1)
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

bool func_133(int iParam0)
{
	return func_134(iParam0, Global_36425);
}

int func_134(int iParam0, int iParam1)
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

int func_135(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_136()
{
	if (!func_133(5))
	{
		return 1;
	}
	if (func_144())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_143())
		{
			return 0;
		}
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_137(float fParam0, bool bParam1)
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
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (func_12(func_10()))
		{
			iVar5 = func_61();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_138(iVar1, &Var0);
					fVar4 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Var0.f_6, true);
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

void func_138(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
		
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
		
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
		
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
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

int func_140(int iParam0)
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

struct<2> func_141(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_142(iParam0) };
	if (unk_0x786AF4A44E1B5B4B(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_142(int iParam0)
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

int func_143()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x7A0BCF765DB6E029() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_144()
{
	if (func_147() && !func_143())
	{
		return 1;
	}
	if (func_146() && func_145())
	{
		return 1;
	}
	return 0;
}

bool func_145()
{
	return Global_106283 > 0;
}

int func_146()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_147()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_148()
{
	if ((Global_106554 == func_65() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	if (func_150(func_10()) >= iLocal_265)
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
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

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_10();
				if (!func_12(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_159()) || Global_105612) || Global_25767) || func_158()) || func_17(8, -1)) || func_157()) || func_156()) || func_155()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_159()) || Global_25767) || func_158()) || func_17(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_159()) || Global_105612) || Global_25767) || func_158()) || func_17(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_159()) || Global_105612) || Global_25767) || func_158()) || func_17(8, -1)) || func_157()) || func_156()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_159() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_17(8, -1)) || func_154()) || func_153()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_157()) || func_156()) || func_153()) || func_152())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_159()) || Global_25767) || func_158()) || func_17(8, -1)) || func_156()) || func_155()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_159()) || func_156()) || Global_105612) || Global_25767) || func_158()) || Global_37584) || func_17(8, -1)) || func_155()) || func_153()) || func_154()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_159()) || Global_105612) || Global_25767) || func_158()) || func_17(8, -1)) || func_155()) || func_153()) || func_157()) || func_156()) || func_154())
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

var func_152()
{
	return Global_93721.f_1;
}

int func_153()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_154()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_155()
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

bool func_156()
{
	return Global_93734.f_340 > 0;
}

bool func_157()
{
	return Global_93734.f_339 > 0;
}

var func_158()
{
	return Global_1312867;
}

int func_159()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_160()
{
	if (func_173(iLocal_58))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
		{
			if (func_165(iLocal_58))
			{
				func_163(iLocal_58, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_162();
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
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
	{
		if (((func_165(iLocal_57) || !unk_0xF0D230FB550CD6EB(iLocal_57, 0)) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_57)) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_57))
		{
			func_161(iLocal_58);
			return 1;
		}
	}
	else
	{
		func_161(iLocal_58);
		return 1;
	}
	if (unk_0x91BBD269506D61D2(iLocal_63, unk_0x33CD235DF1E6A94E(), 1))
	{
		if (func_173(iLocal_58))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
			{
				func_161(iLocal_58);
				func_163(iLocal_58, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_223();
	}
	if (unk_0x13348E86D5B8A052() >= 19 || unk_0x13348E86D5B8A052() <= 6)
	{
		if (!func_83())
		{
			if (func_77(&uLocal_96, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_63, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (func_173(iLocal_58))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
		{
			unk_0x4A852F02088ECC9D(iParam0, false);
			unk_0xED68CDDDE25A144E(iParam0);
			unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 100f, -1, 0, 0);
			unk_0x897EF720254BBEA3(iParam0, true);
			func_31();
		}
	}
}

void func_162()
{
	if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_58, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_70 = unk_0xE3903F59E2F22150();
		if ((iLocal_70 - iLocal_71) > 10000)
		{
			if (!func_83())
			{
				func_77(&uLocal_96, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_71 = unk_0xE3903F59E2F22150();
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)
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

int func_165(int iParam0)
{
	if (func_166(iParam0, &uLocal_90, &uLocal_87, iLocal_85, bLocal_91, 1077936128, 0) || unk_0x3AF2B3B68DD52355(iParam0))
	{
		func_161(iParam0);
		return 1;
	}
	return 0;
}

int func_166(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !bParam4)
	{
		if (unk_0xA1248DEAD0B27B8E(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			vVar4 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			fVar5 = vdist(vVar3, vVar4);
			if (!unk_0x0E4018692D92041D(iParam3, 3))
			{
				if (func_172(iParam0, iParam6))
				{
					func_171("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_171("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_170(iParam0);
					return 1;
				}
			}
			if (!unk_0x0E4018692D92041D(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x416C37C19CCE0077(vVar4, fParam5, 1))
				{
					func_171("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_171("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_170(iParam0);
					return 1;
				}
				if (unk_0x34DB0AC28A1FDE20(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_171("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_171("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_170(iParam0);
					return 1;
				}
			}
			if (!unk_0x0E4018692D92041D(iParam3, 2))
			{
				fVar0 = unk_0x0B1DF741666F11BA(unk_0x33CD235DF1E6A94E());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
				{
					if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0x72F7FAFD0710100C(iParam0, unk_0x33CD235DF1E6A94E(), 17))
							{
								func_171("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_171("	aggro Ped knows player is pointing gun\n");
								func_167("		lockOnTimer = ", *uParam2);
								func_171("\n");
								func_167("		time since not LockedOn = ", (unk_0xE3903F59E2F22150() - iLocal_43));
								func_171("\n");
								bVar2 = true;
								if (unk_0xE3903F59E2F22150() > (iLocal_43 + *uParam2))
								{
									func_171("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_170(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0x0E4018692D92041D(iParam3, 0))
			{
				if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					func_171("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_171("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_170(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0xE3903F59E2F22150();
	}
	return 0;
}

void func_167(char* sParam0, int iParam1)
{
	func_169(sParam0);
	func_168(iParam1);
}

void func_168(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_169(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04(sParam0, sParam0))
	{
	}
}

void func_170(int iParam0)
{
	unk_0x2918FC6BDEBF9834(iParam0);
}

void func_171(char* sParam0)
{
	func_169(sParam0);
}

int func_172(int iParam0, int iParam1)
{
	if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		if ((unk_0x194C9CD81C97B65B(iParam0) - unk_0xE80842D7B53F8525(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0)
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

void func_174()
{
	unk_0x667E9887F10A4FAD(0, 1);
	unk_0x667E9887F10A4FAD(1, 1);
	unk_0x667E9887F10A4FAD(2, 1);
	unk_0x667E9887F10A4FAD(3, 1);
	unk_0x667E9887F10A4FAD(4, 1);
	unk_0x667E9887F10A4FAD(5, 1);
	unk_0x667E9887F10A4FAD(6, 1);
	unk_0x667E9887F10A4FAD(7, 1);
	unk_0x667E9887F10A4FAD(8, 1);
}

void func_175()
{
	unk_0xD19E4D92930D6413(unk_0x95B959F18401C09A());
	unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 5);
	unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 3);
	unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 15);
	unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 2);
	unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 4);
}

void func_176()
{
	if (iLocal_75)
	{
		unk_0x6CB3E644E3FBFEF0(vLocal_77.x, vLocal_77.y, vLocal_78.x, vLocal_78.y);
	}
}

void func_177()
{
	if (unk_0x02491E9986CE036B("RAIN") || unk_0x02491E9986CE036B("THUNDER"))
	{
		unk_0x10D261962C02BE0E("OVERCAST", 10000f);
	}
}

void func_178()
{
	int iVar0;
	int iVar1;
	
	if (func_181())
	{
		func_223();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0xB815670C37E03CDE(iVar0);
		unk_0xB815670C37E03CDE(iVar1);
		unk_0x0483D0035D6E46FD(sLocal_262);
		unk_0xB815670C37E03CDE(joaat("tourbus"));
		unk_0x2EE8D1440C9060EF("BUSTOUR", 2);
		if ((((unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(iVar1)) && unk_0xE9CCF312047EBEE0(sLocal_262)) && unk_0x5D98D654CDC2165A(joaat("tourbus"))) && unk_0x8A7F864DAB908749(2))
		{
			unk_0xCB7F618CC6FABC72(0);
			unk_0x5A5015CF0B2DE07A(vLocal_53, &uLocal_54, &uLocal_64, 1, 1077936128, 0);
			iLocal_63 = unk_0xC651C43AB13A15E5(joaat("tourbus"), Local_51.f_1, Local_51.f_13, true, true, false);
			unk_0x1B2303F9DC2D90D5(iLocal_63, 1084227584);
			unk_0xD303E20CB0AE4AD0(iLocal_63, 3);
			unk_0x69C19C4A66A58974(iLocal_63, 0);
			unk_0xE3040995362DF6F7(iLocal_63, "OFF");
			unk_0x1C2B995BA5ADE8FF(iLocal_63, false, 0);
			unk_0x3A3707C1ECABF993(iLocal_63, 2, true);
			unk_0x8C4EA5F6857553AE(joaat("tourbus"), true);
			unk_0x18A74017AFD59D9B(iLocal_63, 100f);
			iLocal_57 = unk_0xE196503B36B6194B(iLocal_63, 26, iVar1, -1, 1, true);
			unk_0x4A852F02088ECC9D(iLocal_57, true);
			unk_0x5FEE418CE11E6DDE(iLocal_57, 251, true);
			unk_0xDD9D9FFE59B3E34D(iLocal_57, 1);
			if (unk_0x765F6FEEFF39224F(iLocal_57))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
				{
					unk_0x93AA93DA1B137032(iLocal_57, 3, 1, 2, 0);
					unk_0x93AA93DA1B137032(iLocal_57, 4, 0, 2, 0);
				}
			}
			iLocal_58 = unk_0x9BA5CF280376EEA4(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, true);
			unk_0x5464B9731013E08C(iLocal_58, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x4A852F02088ECC9D(iLocal_58, true);
			unk_0xF0BE7CB40DE62A2F(iLocal_58, false);
			unk_0x93AA93DA1B137032(iLocal_58, 0, 1, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_58, 2, 1, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_58, 3, 0, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_58, 4, 1, 0, 0);
			unk_0x99414FB2D30425C1(&iLocal_80);
			unk_0x108754262311D34F(0, sLocal_262, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, sLocal_262, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, sLocal_262, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x656E3BB78935070E(iLocal_80, 1);
			unk_0xC734F59A13D39AEF(iLocal_80);
			unk_0x13A2D602CD10CBAC(iLocal_58, iLocal_80);
			unk_0xA7A57E7757ED035E(&iLocal_80);
			func_180(&uLocal_96, 3, iLocal_58, "TOURGUIDE", 0, 1);
			if (!unk_0xE38E3CF1625A4145(iLocal_68))
			{
				iLocal_68 = unk_0x8848A15CBDADDC60(iLocal_63);
				unk_0xA20C1DE21F2F071C(iLocal_68, 85);
			}
			func_179();
			iLocal_46 = 1;
		}
	}
}

void func_179()
{
	unk_0x28F648743D7DE312(iLocal_57, 17, true);
	unk_0x28F648743D7DE312(iLocal_58, 17, true);
	unk_0x9315FCF6CFE2AB41("re_bus_tours1", &iLocal_66);
	unk_0x0648A75D3F60E864(iLocal_57, iLocal_66);
	unk_0x0648A75D3F60E864(iLocal_58, iLocal_66);
	unk_0xD2E80177F27FD43F(1, iLocal_66, 1862763509);
}

void func_180(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_181()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_143())
		{
			return 0;
		}
	}
	if (func_144())
	{
		return 1;
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_182()
{
}

void func_183()
{
}

void func_184()
{
	struct<15> Var0;
	struct<15> Var1;
	struct<15> Var2;
	struct<15> Var3;
	struct<15> Var4;
	struct<15> Var5;
	struct<15> Var6;
	struct<15> Var7;
	struct<15> Var8;
	struct<15> Var9;
	struct<15> Var10;
	struct<15> Var11;
	struct<15> Var12;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0 = "BUSTO_P1";
	Var1.f_1 = { -214.9f, 267.4f, 91.5f };
	Var1.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var1.f_7 = 9000;
	Var1.f_8 = (8f - 1f);
	Var1.f_10 = { -188.67f, 265.43f, 92.15f };
	Var1.f_13 = 81.79f;
	Var1 = "BUSTO_P5";
	Var2.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var2.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var2.f_7 = 9000;
	Var2.f_8 = 8f;
	Var2.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var2.f_13 = 85f;
	Var2 = "BUSTO_P6";
	Var3.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var3.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var3.f_7 = 9000;
	Var3.f_8 = (8f + 2f);
	Var3.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var3.f_13 = 25f;
	Var3 = "BUSTO_P7";
	Var4.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var4.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var4.f_7 = 9000;
	Var4.f_8 = (8f + 3f);
	Var4.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var4.f_13 = 105f;
	Var4 = "BUSTO_P8";
	Var5.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var5.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var5.f_7 = 9000;
	Var5.f_8 = (8f + 2f);
	Var5.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var5.f_13 = 47f;
	Var5 = "BUSTO_P9";
	Var6.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var6.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var6.f_7 = 9000;
	Var6.f_8 = (8f + 4f);
	Var6.f_10 = { -1168.448f, 257.0845f, 66.3477f };
	Var6.f_13 = 105f;
	Var6 = "BUSTO_P10";
	Var7.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var7.f_4 = { -1421.479f, -193.5715f, 50f };
	Var7.f_7 = 9000;
	Var7.f_8 = (8f + 4f);
	Var7.f_10 = { -1398.391f, -114.7998f, 50.028f };
	Var7.f_13 = 178f;
	Var7 = "BUSTO_P11";
	Var8.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var8.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var8.f_7 = 9000;
	Var8.f_8 = (15f + 4f);
	Var8.f_10 = { -1356.912f, -437.5389f, 34.0665f };
	Var8.f_13 = 215f;
	Var8 = "BUSTO_P3";
	Var9.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var9.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var9.f_7 = 9000;
	Var9.f_8 = (15f + 6f);
	Var9.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var9.f_13 = 290f;
	Var9 = "BUSTO_P2";
	Var10.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var10.f_4 = { -695f, 22f, 53f };
	Var10.f_7 = 9000;
	Var10.f_8 = (15f + 5f);
	Var10.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var10.f_13 = 27.9347f;
	Var10 = "BUSTO_P14";
	Var11.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var11.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var11.f_7 = 6000;
	Var11.f_8 = (15f + 5f);
	Var11.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var11.f_13 = 250f;
	Var11 = "BUSTO_P13";
	Var12.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var12.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var12.f_7 = 6000;
	Var12.f_8 = (15f + 3f);
	Var12.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var12.f_13 = 70f;
	Var12 = "BUSTO_P4";
	Local_51.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_51.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_51.f_7 = -1;
	Local_51.f_8 = 8f;
	Local_51.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_51.f_13 = 70f;
	Local_51 = "BUSTO_Px";
	func_185(Var0);
	func_185(Var1);
	func_185(Var2);
	func_185(Var3);
	func_185(Var4);
	func_185(Var5);
	func_185(Var6);
	func_185(Var7);
	func_185(Var8);
	func_185(Var9);
	func_185(Var10);
	func_185(Var11);
	func_185(Var12);
	func_185(Local_51);
	iLocal_52 = 0;
}

void func_185(char[60] cParam0)
{
	Local_50[iLocal_52 /*15*/] = { cParam0 };
	iLocal_52++;
}

void func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_188(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_187();
}

void func_187()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x8C4EA5F6857553AE(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)), true);
		}
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	}
}

void func_188(int iParam0)
{
	Global_106554 = iParam0;
}

int func_189(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_65();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_221())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_143())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_46(0))
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (func_220())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_137(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_219(iParam1))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_218(func_10()) == 4 || func_218(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_217(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_216(Global_106565.f_24989.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xE3903F59E2F22150() - Global_106556) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_215())
		{
			return 0;
		}
		if (unk_0xB2B616B1F434DB30())
		{
			return 0;
		}
		if (unk_0x40AC0B9EFCB6A65B())
		{
			return 0;
		}
		if (!func_151(4))
		{
			return 0;
		}
		if (!func_133(5))
		{
			return 0;
		}
		if (func_214(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xDE9B75BB528AC06E(unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E())))
		{
			if ((unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(377.153f, -717.567f, 10.0536f) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(320.9934f, 265.2515f, 82.1221f)) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_214(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_219(30) && !func_214(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_12(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_213(iVar4))
				{
					if (func_191(iVar2))
					{
						if (!func_190(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_190(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_192(iVar0);
}

int func_192(int iParam0)
{
	return func_193(iParam0, 1);
}

int func_193(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_213(iParam0))
	{
		return 0;
	}
	func_194(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_195(func_206(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_195(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_205(iParam0, iParam1))
	{
		iVar0 = func_204(iParam1);
		iVar1 = func_202(iParam0);
		iVar2 = (func_202(iParam0) - func_202(iParam1));
		iVar3 = (func_204(iParam0) - func_204(iParam1));
		iVar4 = (func_201(iParam0) - func_201(iParam1));
		iVar5 = (func_200(iParam0) - func_200(iParam1));
		iVar6 = (func_199(iParam0) - func_199(iParam1));
		iVar7 = (func_198(iParam0) - func_198(iParam1));
	}
	else
	{
		iVar0 = func_204(iParam0);
		iVar1 = func_202(iParam1);
		iVar2 = (func_202(iParam1) - func_202(iParam0));
		iVar3 = (func_204(iParam1) - func_204(iParam0));
		iVar4 = (func_201(iParam1) - func_201(iParam0));
		iVar5 = (func_200(iParam1) - func_200(iParam0));
		iVar6 = (func_199(iParam1) - func_199(iParam0));
		iVar7 = (func_198(iParam1) - func_198(iParam0));
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
		iVar4 = (iVar4 + func_197(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_196(to_float(iVar0 + 1), 0f, 12f));
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

float func_196(float fParam0, float fParam1, float fParam2)
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

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_199(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_200(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_202(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_203(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_203(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_204(int iParam0)
{
	return iParam0 & 15;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_213(iParam1) || !func_213(iParam0))
	{
		return 1;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	var uVar0;
	
	func_212(&uVar0, unk_0xE6A7CE90720B9037());
	func_211(&uVar0, unk_0x7EA67BD818402745());
	func_210(&uVar0, unk_0x13348E86D5B8A052());
	func_209(&uVar0, unk_0x020A28FAE1C09250());
	func_208(&uVar0, unk_0x2C02CAA9C4127339());
	func_207(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_207(var uParam0, int iParam1)
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

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(*uParam0);
	iVar1 = func_202(*uParam0);
	if (iParam1 < 1 || iParam1 > func_197(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_213(int iParam0)
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
	iVar0 = func_198(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_199(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_200(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_202(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_204(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_201(iParam0);
	if (iVar5 < 1 || iVar5 > func_197(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_214(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	func_9();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_216(int iParam0)
{
	return func_205(func_206(), iParam0);
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_218(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_219(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_221())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_220()
{
	int iVar0;
	
	if (Global_25915)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x7BDC41A7CA0C77A2(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_221()
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

int func_222()
{
	if (unk_0x13348E86D5B8A052() > 19 || unk_0x13348E86D5B8A052() < 6)
	{
		return 0;
	}
	return 1;
}

void func_223()
{
	int iVar0;
	
	unk_0x01B3F43DF6F208D4();
	unk_0xFEE41843770AB969();
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(0);
		unk_0xC7E6A5D90DED6E0B(0f);
	}
	if (unk_0x117DAF3BF7232886(iLocal_82))
	{
		unk_0x189377BFBDC9127F(iLocal_82, false);
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		unk_0x2F8A4DF7D0DFF0A8(iLocal_82, 0);
		unk_0x108BCD583149AF69(0);
	}
	if (unk_0x117DAF3BF7232886(iLocal_83))
	{
		unk_0x2F8A4DF7D0DFF0A8(iLocal_83, 0);
	}
	if (iLocal_47 >= 2)
	{
		unk_0x816788E0CA50BB83(iLocal_263);
	}
	unk_0xDFF589A2149528CE(true);
	if (iLocal_47 >= 1)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_57))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_57))
		{
			unk_0x5FEE418CE11E6DDE(iLocal_57, 251, false);
			unk_0x7D1F395C3A7A37BE(iLocal_57, 1);
			unk_0x897EF720254BBEA3(iLocal_57, true);
			unk_0x4A852F02088ECC9D(iLocal_57, false);
		}
		unk_0x1F45B4626AC4A4C0(&iLocal_57);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_58))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_58))
		{
			unk_0xF0BE7CB40DE62A2F(iLocal_58, true);
			unk_0x897EF720254BBEA3(iLocal_58, true);
			unk_0x4A852F02088ECC9D(iLocal_58, false);
		}
		unk_0x1F45B4626AC4A4C0(&iLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x765F6FEEFF39224F(uLocal_59[iVar0]))
		{
			if (func_173(uLocal_59[iVar0]))
			{
				unk_0x4A852F02088ECC9D(uLocal_59[iVar0], false);
			}
			unk_0x1F45B4626AC4A4C0(&(uLocal_59[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_63))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_63, 1);
		unk_0x9152A6430680BF0A(iLocal_63, 1);
		unk_0x65F544B458249682(&iLocal_63);
	}
	unk_0x052830EE89C97404(true);
	if (func_148())
	{
		func_235();
	}
	else
	{
		func_234(&Global_25824);
	}
	unk_0xBCDC495E812C1253(1);
	func_224(-1);
	wait(0);
	unk_0x5894DC159447E10A();
}

void func_224(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_148())
	{
		func_227(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_106554, 1), 64);
		if (func_64(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		unk_0x3976D3CAA943B599(&cVar0, Global_106551, (unk_0xE3903F59E2F22150() - Global_106552), 0);
	}
	else if (unk_0x0E4018692D92041D(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		unk_0xCE689A8E8C42ED78(&Global_106561, 0);
	}
	func_234(&Global_25824);
	Global_106555 = 0;
	func_188(-1);
}

char* func_225(int iParam0, bool bParam1)
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

void func_226(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_227(int iParam0)
{
	func_228(iParam0, 0, func_233(iParam0));
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_206();
	func_231(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(iParam0, &uVar0);
	Var1 = { func_229(&uVar0) };
}

struct<16> func_229(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_198(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_202(*uParam0), 64);
	return Var0;
}

void func_230(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_204(*uParam0);
	iVar2 = func_201(*uParam0);
	iVar3 = func_200(*uParam0);
	iVar4 = func_199(*uParam0);
	iVar5 = func_198(*uParam0);
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
	iVar6 = func_197(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_197(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_232(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(uParam0, iParam1);
	func_211(uParam0, iParam2);
	func_210(uParam0, iParam3);
	func_208(uParam0, iParam5);
	func_209(uParam0, iParam4);
	func_207(uParam0, iParam6);
}

int func_233(int iParam0)
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

void func_234(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

void func_235()
{
	func_226(30000);
	func_234(&Global_25824);
	Global_25812 = unk_0xE3903F59E2F22150();
}

