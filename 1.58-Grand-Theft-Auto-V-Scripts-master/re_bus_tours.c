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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<15> Local_50[14];
	struct<15> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
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
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	Local_77 = { 0f, 0f, 0f };
	Local_78 = { 0f, 0f, 0f };
	sLocal_262 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_264 = 524459;
	iLocal_265 = 40;
	iLocal_273 = 7500;
	Local_53 = { ScriptParam_277.f_1[0 /*3*/] };
	if (unk_0x4B34601C5C56F3EE(11))
	{
		if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_63, 0))
				{
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_63, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), unk_0x82FE2343F8BDFF0B(iLocal_63));
					unk_0x2378080C93821600(unk_0xE2D3D51028F0428A(), 1);
					unk_0x0AF8D3A06BB92903("RE_BUS_TOUR_SCENE");
					unk_0x5545B7D117BB40B4(iLocal_63, 0);
				}
			}
		}
		func_229();
	}
	if (!func_228())
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (func_195(Local_53, 2, 0, 1, 0))
	{
		func_192(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_190();
	func_189();
	while (true)
	{
		func_188();
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
		}
		switch (iLocal_69)
		{
			case 0:
				if (unk_0xC92F9F18E020B461())
				{
					if (func_228())
					{
						switch (iLocal_46)
						{
							case 0:
								func_184();
								break;
							
							case 1:
								if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
								{
									if (unk_0xF68107C40359970C(iLocal_57) || unk_0xF68107C40359970C(uLocal_58))
									{
										func_229();
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
						func_229();
					}
				}
				else
				{
					func_229();
				}
				break;
			
			case 1:
				if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
				{
					func_1();
				}
				else
				{
					func_229();
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_183();
	func_182();
	func_181();
	func_180();
	switch (iLocal_47)
	{
		case 0:
			func_126();
			break;
		
		case 1:
			func_92();
			break;
		
		case 2:
			func_91();
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
	unk_0x963A57DF8530029D(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0x7653D561C9574763(0, 68, 1);
	unk_0x7653D561C9574763(0, 99, 1);
	unk_0x7653D561C9574763(0, 1, 1);
	unk_0x7653D561C9574763(0, 2, 1);
	if (!unk_0xF68107C40359970C(iLocal_58) && !unk_0xF68107C40359970C(iLocal_57))
	{
		if (iLocal_268)
		{
			if (!func_90())
			{
				if (iLocal_261 < 14)
				{
					func_89(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0);
				}
				func_229();
			}
		}
		else if (!func_88())
		{
			unk_0x5AD47D8CFC3A86AF();
			unk_0xAC765EF46E85A446(2);
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_63) && iLocal_52 + 1 < 13)
				{
					func_229();
				}
			}
			if (!iLocal_74)
			{
				if (timera() > 12000)
				{
					func_86();
				}
			}
			else
			{
				unk_0x963A57DF8530029D("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_47();
			func_33();
			func_27(0);
			if (func_26(iLocal_63))
			{
				iLocal_73 = 1;
			}
			unk_0x6B137DB2C9C0C754(iLocal_63);
		}
		else
		{
			func_3(&uLocal_96, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0x3B2646B62E7BBE11(iLocal_63, 3);
			unk_0xF838539C61C30896(iLocal_63, 0);
			iLocal_268 = 1;
		}
	}
	else
	{
		func_229();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 1;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_24();
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
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_22();
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
				func_14();
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
				if (func_13())
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
			if (func_12())
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
			func_11();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_10();
		func_5();
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
		func_24();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
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

int func_6()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_9())
	{
		return 0;
	}
	if (func_7(unk_0x9E2D6C50374FCFA9()))
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

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_9()
{
	return -1;
}

void func_10()
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

void func_11()
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

int func_12()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
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

void func_14()
{
	if (func_21(14))
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
		Global_19954 = func_15();
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

int func_15()
{
	func_16();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_19(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_18(unk_0xE2D3D51028F0428A());
			if (func_17(iVar0) && (!func_21(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_17(Global_112915.f_2363.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_22()
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

bool func_23(int iParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
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

int func_26(int iParam0)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if ((unk_0xF798DCF92C74B531(iParam0, 0, 7000) || unk_0xF798DCF92C74B531(iParam0, 1, 7000)) || unk_0xF798DCF92C74B531(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0xF09A4F413B0D30EB(2, 225))
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 256);
				unk_0x05BAD514D7C46D83(1);
			}
			else
			{
				iLocal_76 = 1;
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0x05BAD514D7C46D83(0);
			}
		}
	}
	if (iLocal_76 && !Local_50[13 /*15*/].f_9)
	{
		if (unk_0x4131052989DE1278())
		{
			unk_0xBD1E8007D7DFA747(0);
		}
		func_30();
	}
	else if (iLocal_74)
	{
		if (unk_0x876B1078E90C91CB(uLocal_81))
		{
			unk_0x588DDCB644C6486A(uLocal_81, 0);
			unk_0x850D4EF3D40FB068(0, 0, 0, 1, 0, 0);
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
			func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
		}
	}
	else if (unk_0x876B1078E90C91CB(uLocal_81))
	{
		unk_0x588DDCB644C6486A(uLocal_81, 0);
		unk_0x850D4EF3D40FB068(0, 0, 0, 1, 0, 0);
		unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
	}
}

void func_28(struct<3> Param0, var uParam1)
{
	if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
	{
		if (!unk_0x876B1078E90C91CB(uLocal_81) && !unk_0x4131052989DE1278())
		{
			if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_51.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0xDBFEE73A55300843(Param0, uParam1, 3000, 3000, 0);
				func_29(Param0);
				iLocal_71 = unk_0x320D1840B6DAA1CC();
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_57))
		{
			unk_0xBB3480BB855CDB33(iLocal_57, 3f);
		}
		iLocal_74 = 1;
	}
}

void func_29(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_61 = unk_0x320D1840B6DAA1CC();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		iVar1 = unk_0x5853B15F78E1A265(6000, 16000);
		unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0xF68107C40359970C(uLocal_59[iVar0]))
		{
			iVar1 = unk_0x5853B15F78E1A265(6000, 16000);
			iLocal_60[iVar0] = unk_0x5853B15F78E1A265(0, 2000);
			iLocal_62[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_30()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
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
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (unk_0x876B1078E90C91CB(uLocal_81))
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_32();
		iVar8 = floor((unk_0x3BF65CF27F6CFBBE(2, 218) * 127f));
		iVar9 = floor((unk_0x3BF65CF27F6CFBBE(2, 219) * 127f));
		iVar10 = floor((unk_0x3BF65CF27F6CFBBE(2, 220) * 127f));
		iVar11 = floor((unk_0x3BF65CF27F6CFBBE(2, 221) * 127f));
		if (!unk_0xC63A09AA9006F776())
		{
			iVar9 = (iVar9 * -1);
			iVar11 = (iVar11 * -1);
		}
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x3A76A0944BE2C291(2))
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
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x3A76A0944BE2C291(2))
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
		if ((iVar9 > 28 || iVar9 < -28) || unk_0x3A76A0944BE2C291(2))
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
		if ((iVar8 > 28 || iVar8 < -28) || unk_0x3A76A0944BE2C291(2))
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
		func_31(unk_0xE2D3D51028F0428A(), &uLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x0A18C027350D3C19(uLocal_81, fVar1);
		unk_0x3FB84450A94CB528(uLocal_81, unk_0xE2D3D51028F0428A(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_81 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0x3FB84450A94CB528(uLocal_81, unk_0xE2D3D51028F0428A(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0x74789DA66781DB64(uLocal_81, 0.01f);
		fLocal_94 = -70f;
		fLocal_95 = 3f;
		func_31(unk_0xE2D3D51028F0428A(), &uLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x0A18C027350D3C19(uLocal_81, fVar1);
		unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 0, 0);
		unk_0x850D4EF3D40FB068(1, 0, 2000, 1, 0, 0);
	}
}

void func_31(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if (unk_0x876B1078E90C91CB(*uParam1))
		{
			uVar0 = unk_0x82FE2343F8BDFF0B(iParam0);
			Var1.x = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0x93150D31CE38FE75(*uParam1, Var1.x, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_32()
{
	struct<3> Var0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(uLocal_59[2]))
	{
		if (unk_0x174CED88B97C78D9(uLocal_59[2], -880529684) == 7)
		{
			if (unk_0x320D1840B6DAA1CC() > iLocal_89 + 8000)
			{
				unk_0x2378080C93821600(uLocal_59[2], 0);
				Var0 = { unk_0xCACAD935C0BEE14F(uLocal_59[2], unk_0xC4EAB25A108C2429(0f, 2f), unk_0xC4EAB25A108C2429(0f, 2f), 0.5f) };
				iVar1 = unk_0x5853B15F78E1A265(1000, 6000);
				unk_0xE1E1AF00CA06A2B7(uLocal_59[2], Var0, iVar1, 2049, 2);
				iLocal_89 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	if (!iLocal_92 && unk_0xE9E8955A780DDA01())
	{
		unk_0x284E43C619CC0D26("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0xF09A4F413B0D30EB(2, 223) || iLocal_73 == 1)
		{
			if (unk_0xE9E8955A780DDA01())
			{
				if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
				{
					if (!unk_0xF68107C40359970C(iLocal_57))
					{
						if (!Local_50[iVar0 /*15*/].f_14 && !Local_50[iVar0 /*15*/].f_9)
						{
							settimera(0);
							Local_50[iLocal_52 /*15*/].f_9 = 1;
							func_36(Local_50[iVar0 /*15*/].f_10, Local_50[iVar0 /*15*/].f_13);
							func_35();
							if (iVar0 == 13)
							{
								iLocal_92 = 1;
								func_34();
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

void func_34()
{
	if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_57))
		{
			unk_0x03A927199A2DFE46(iLocal_57);
			unk_0xA888F8CC04F25CC8(&uLocal_79);
			unk_0x3B8F94419979A0B1(0, iLocal_63, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			unk_0x3B8F94419979A0B1(0, iLocal_63, Local_51.f_1, 3f, 0, joaat("tourbus"), iLocal_264, 3f, 15f);
			unk_0xC963A45B50851768(uLocal_79);
			unk_0x8ACADA903FCAA42F(iLocal_57, uLocal_79);
			unk_0x7461D7C5BA953BC7(&uLocal_79);
		}
	}
}

void func_35()
{
	Global_20151 = 0;
	func_24();
}

void func_36(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	unk_0x66B27A59829491D3("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x859006DB870314C5(1000);
	while (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x5AD47D8CFC3A86AF();
		unk_0xAC765EF46E85A446(2);
		if (!unk_0x55A0C756C4A8220C(iLocal_63, 0))
		{
			func_229();
		}
		if (unk_0xF68107C40359970C(iLocal_57))
		{
			func_229();
		}
		wait(0);
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(1);
	}
	unk_0x94953C3FF0664F66(0f);
	if (!unk_0xF68107C40359970C(iLocal_57))
	{
		unk_0x03A927199A2DFE46(iLocal_57);
	}
	if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
	{
		unk_0x02B222EADC9DC566(Param0.x, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0, 0, 0);
		unk_0xC64B6E13A6A7F517(iLocal_63, Param0.x, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(iLocal_63, fParam1);
		unk_0xB2D5451CC5606248(iLocal_63, 0f);
		unk_0x3B8F94419979A0B1(iLocal_57, iLocal_63, unk_0x6B62510F212526DC(iLocal_63, 1), 0f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		func_39(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
	{
		unk_0x9F65B3BAFA302A65(iLocal_63, 1084227584);
		unk_0x371D594409A68A18(iLocal_63, 1, 1, 0);
		if (iVar0 < 13)
		{
			if (!unk_0xF68107C40359970C(iLocal_57))
			{
				unk_0x3B8F94419979A0B1(iLocal_57, iLocal_63, Local_50[iVar0 /*15*/].f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			}
		}
		else if (!unk_0xF68107C40359970C(iLocal_57))
		{
			unk_0x3B8F94419979A0B1(iLocal_57, iLocal_63, Local_51.f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		}
		unk_0xB2D5451CC5606248(iLocal_63, 8f);
	}
	func_37();
	unk_0x842B2A274564CAF5(3);
	iLocal_48 = 3;
	func_27(1);
	unk_0x0AF8D3A06BB92903("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x5A7ACD1CDF509B0D(1000);
	while (unk_0xECD40FEF3CF43BDB())
	{
		unk_0x5AD47D8CFC3A86AF();
		unk_0xAC765EF46E85A446(2);
		func_27(1);
		wait(0);
	}
	unk_0x5AD47D8CFC3A86AF();
	unk_0xAC765EF46E85A446(2);
	func_27(1);
}

void func_37()
{
	Global_20151 = 0;
	func_38();
}

void func_38()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

void func_39(struct<3> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xD6D670D39E5EB332(Param0, iParam1, iParam2, 127);
	if (unk_0x52D132F41E04CB67(uVar0))
	{
		iVar1 = (unk_0x320D1840B6DAA1CC() + iParam3);
		while (!unk_0x247B9CD82FD64F32(uVar0) && unk_0x320D1840B6DAA1CC() < iVar1)
		{
			if (bParam5)
			{
				func_41(0);
			}
			if (bParam4)
			{
				func_40();
			}
			wait(0);
		}
		if (unk_0x320D1840B6DAA1CC() < iVar1)
		{
		}
		unk_0x7DE67EEEFEC38205(uVar0);
	}
}

void func_40()
{
	Global_22691.f_6 = 1;
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_45(0))
		{
			func_42(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_12())
	{
		Global_19954.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
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

bool func_44()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_45(int iParam0)
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

bool func_46()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_47()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_52 + 1;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
							if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_50[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_50[12 /*15*/].f_9)
								{
									Local_50[13 /*15*/].f_9 = 1;
									iLocal_71 = unk_0x320D1840B6DAA1CC();
									iLocal_48 = 2;
								}
							}
						}
						else if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_50[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_63, 0))
							{
								func_28(Local_50[iVar0 /*15*/].f_4, Local_50[iVar0 /*15*/].f_7);
								iLocal_52 = iVar0;
								if (iLocal_75)
								{
									iLocal_75 = 0;
								}
								func_35();
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
				func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
				iLocal_70 = unk_0x320D1840B6DAA1CC();
				if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
				{
					if (iVar1 <= 13)
					{
						func_85(unk_0x6B62510F212526DC(iLocal_63, 1), Local_50[iVar1 /*15*/].f_1, &Local_77, &Local_78, 500);
					}
					if (unk_0xF8805443C3DB6256(Local_77.x, Local_77.f_1, Local_78.x, Local_78.f_1))
					{
						if ((iLocal_70 - iLocal_71) > 0)
						{
							if (func_84(&uLocal_96, "BUSTOAU", Local_50[iLocal_52 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0xA888F8CC04F25CC8(&uVar2);
										unk_0x3B8F94419979A0B1(0, iLocal_63, -100.461f, -206.1412f, 44.4215f, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0x3B8F94419979A0B1(0, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0xC963A45B50851768(uVar2);
										unk_0x8ACADA903FCAA42F(iLocal_57, uVar2);
										unk_0x7461D7C5BA953BC7(&uVar2);
									}
									else
									{
										unk_0x3B8F94419979A0B1(iLocal_57, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
									}
								}
								iLocal_71 = unk_0x320D1840B6DAA1CC();
								Local_50[iLocal_52 /*15*/].f_14 = 1;
								Local_50[iLocal_52 /*15*/].f_9 = 1;
								iLocal_48 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_49())
				{
					iLocal_48 = 3;
				}
				break;
			
			case 3:
				iLocal_70 = unk_0x320D1840B6DAA1CC();
				func_48(Local_50[iLocal_52 /*15*/].f_4);
				if ((iLocal_70 - iLocal_71) > 5000)
				{
					if (!func_90())
					{
						iLocal_74 = 0;
						iLocal_71 = unk_0x320D1840B6DAA1CC();
						if (unk_0x4131052989DE1278())
						{
							unk_0xBD1E8007D7DFA747(1);
						}
						if (Local_50[13 /*15*/].f_9 == 1)
						{
							iLocal_48 = 4;
						}
						else
						{
							if (!unk_0xF68107C40359970C(iLocal_57))
							{
								unk_0xBB3480BB855CDB33(iLocal_57, 15f);
							}
							iLocal_48 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_229();
				break;
			}
	}
}

void func_48(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((unk_0x320D1840B6DAA1CC() - iLocal_61) > iLocal_60[iVar0] && iLocal_62[iVar0] == 0)
		{
			if (!unk_0x55B23FE400FCEA6B(uLocal_59[iVar0], 0))
			{
				unk_0xE1E1AF00CA06A2B7(uLocal_59[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_62[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_49()
{
	float fVar0[5];
	struct<3> Var1[5];
	
	if (func_82(1000))
	{
		iLocal_86 = 3;
	}
	iLocal_269 = 1;
	switch (iLocal_86)
	{
		case 0:
			if (unk_0x876B1078E90C91CB(uLocal_81))
			{
				unk_0x588DDCB644C6486A(uLocal_81, 0);
				unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
			}
			func_74(1, 1, 1, 0, 0, 0, 0);
			unk_0x0D0B74B18BF93317(1);
			unk_0xB60709BD0E075903(0);
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
			unk_0x05BAD514D7C46D83(1);
			uLocal_82 = unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_83 = unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0xDD786B89B15AA63F(uLocal_82, 1);
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			unk_0x889B4F9D52E23DEE(uLocal_83, uLocal_82, 17000, 1, 1);
			func_84(&uLocal_96, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0xC64B6E13A6A7F517(iLocal_63, Local_51.f_1, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(iLocal_63, Local_51.f_13);
			unk_0x9F65B3BAFA302A65(iLocal_63, 1084227584);
			unk_0x3B2646B62E7BBE11(iLocal_63, 3);
			if (!unk_0xF68107C40359970C(iLocal_57))
			{
				unk_0x03A927199A2DFE46(iLocal_57);
				unk_0xBB3480BB855CDB33(iLocal_57, 0f);
				unk_0xA888F8CC04F25CC8(&uLocal_79);
				unk_0xCD41D6F721CB9C3A(0, iLocal_63, 24, 10000);
				unk_0xC963A45B50851768(uLocal_79);
				unk_0x8ACADA903FCAA42F(iLocal_57, uLocal_79);
				unk_0x7461D7C5BA953BC7(&uLocal_79);
			}
			unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 268.4057f);
			unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
			iLocal_74 = 1;
			iLocal_71 = unk_0x320D1840B6DAA1CC();
			iLocal_86 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0x320D1840B6DAA1CC();
			if ((iLocal_70 - iLocal_71) > 3000)
			{
				unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 268.4057f);
				unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
				unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
				Var1[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var1[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var1[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var1[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var1[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_88 = 0;
				while (iLocal_88 < 5)
				{
					if (unk_0xE5965CDF24F93A9F(uLocal_59[iLocal_88]))
					{
						if (!unk_0xF68107C40359970C(uLocal_59[iLocal_88]))
						{
							unk_0x51BB443B279E4104(uLocal_59[iLocal_88]);
							unk_0xBBF86885619695CE(uLocal_59[iLocal_88], fVar0[iLocal_88]);
							unk_0xC64B6E13A6A7F517(uLocal_59[iLocal_88], Var1[iLocal_88 /*3*/], 1, 0, 0, 1);
							unk_0xD86A0BC9CC0A625A(uLocal_59[iLocal_88], 1193033728, 0);
						}
					}
					iLocal_88++;
				}
				iLocal_71 = unk_0x320D1840B6DAA1CC();
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			iLocal_70 = unk_0x320D1840B6DAA1CC();
			if ((iLocal_70 - iLocal_71) > 13000)
			{
				iLocal_86 = 3;
			}
			break;
		
		case 3:
			unk_0xDD786B89B15AA63F(uLocal_82, 0);
			unk_0x850D4EF3D40FB068(0, 1, 3000, 0, 0, 0);
			unk_0x94953C3FF0664F66(0f);
			unk_0x588DDCB644C6486A(uLocal_82, 0);
			unk_0x588DDCB644C6486A(uLocal_83, 0);
			unk_0x0D0B74B18BF93317(0);
			unk_0xB60709BD0E075903(1);
			func_74(0, 1, 1, 0, 0, 0, 0);
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			iLocal_71 = 10000;
			func_50();
			return 1;
			break;
	}
	return 0;
}

void func_50()
{
	func_54(-1, 0);
	func_51();
	func_229();
}

void func_51()
{
	func_52();
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_54(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_71(iParam0))
	{
		func_70(iParam0, iParam1);
		if (!func_69(51))
		{
			func_65("RE_REWARD", 1, 0, 4000, 10000, func_68(), 0, 138, 0);
			func_64(51);
		}
		if (func_63(iParam0))
		{
			Global_112915.f_24995.f_2 = 3;
		}
		if (func_62(iParam0, iParam1) != 322)
		{
			func_56(func_62(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_112903 = iParam1;
		if (Global_112901 == 0)
		{
			if (((Global_112904 == 1 || Global_112904 == 5) || Global_112904 == 11) || Global_112904 == 25)
			{
				func_55(2);
			}
			else if ((Global_112904 == 26 || Global_112904 == 8) || Global_112904 == 17)
			{
				func_55(7);
			}
			else
			{
				func_55(1);
			}
		}
	}
}

void func_55(int iParam0)
{
	Global_112901 = iParam0;
}

void func_56(int iParam0, var uParam1, var uParam2)
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
		func_60((891 + iParam0), 1, -1);
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
		func_57();
	}
}

void func_57()
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
		func_59(13, floor(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_58() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
				{
					func_52();
				}
			}
		}
	}
}

int func_58()
{
	return Global_31505;
}

int func_59(int iParam0, int iParam1)
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

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_61();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_61()
{
	return Global_1574907;
}

int func_62(int iParam0, int iParam1)
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

int func_63(int iParam0)
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

void func_64(int iParam0)
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

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_67();
	}
}

void func_67()
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

int func_68()
{
	func_16();
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

int func_69(int iParam0)
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

void func_70(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112915.f_24995.f_8[iParam0]), iParam1);
}

int func_71(int iParam0)
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

int func_72()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar1 = func_73(Var0);
	return uVar1;
}

int func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_74(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_81(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_12())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_80(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_81(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_80(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_78(unk_0x9E2D6C50374FCFA9())) && !func_76(unk_0x9E2D6C50374FCFA9(), 0)) && !func_75()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_78(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_75()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_77(-1, 0) == 8;
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

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
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

int func_78(int iParam0)
{
	if (func_76(iParam0, 0))
	{
		return 1;
	}
	if (func_79())
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

bool func_79()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_80(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_81(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 13);
	}
}

int func_82(int iParam0)
{
	if (unk_0xE9E8955A780DDA01())
	{
		if ((unk_0x320D1840B6DAA1CC() - Global_28) > iParam0)
		{
			Global_27 = unk_0x320D1840B6DAA1CC();
		}
		Global_28 = unk_0x320D1840B6DAA1CC();
		if ((unk_0x320D1840B6DAA1CC() - Global_27) > iParam0)
		{
			if (func_83())
			{
				Global_27 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
	}
	return 0;
}

int func_83()
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xF09A4F413B0D30EB(0, 18) || unk_0xF09A4F413B0D30EB(2, 18))
	{
		return 1;
	}
	return 0;
}

bool func_84(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_85(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!iLocal_75)
	{
		if (Param2 <= Param0)
		{
			*uParam4 = Param2;
			*uParam5 = Param0;
		}
		else
		{
			*uParam4 = Param0;
			*uParam5 = Param2;
		}
		if (Param2.f_1 <= Param0.f_1)
		{
			uParam4->f_1 = Param2.f_1;
			uParam5->f_1 = Param0.f_1;
		}
		else
		{
			uParam4->f_1 = Param0.f_1;
			uParam5->f_1 = Param2.f_1;
		}
		*uParam4 = { *uParam4 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		*uParam5 = { *uParam5 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		iLocal_75 = 1;
	}
}

void func_86()
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
			iLocal_71 = unk_0x320D1840B6DAA1CC();
			iLocal_72 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0x320D1840B6DAA1CC();
			if ((iLocal_70 - iLocal_71) > 2000)
			{
				if (!func_90())
				{
					iLocal_71 = unk_0x320D1840B6DAA1CC();
					iLocal_72 = 2;
				}
			}
			break;
		
		case 2:
			if (func_90())
			{
				unk_0x963A57DF8530029D("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_270)
			{
				iLocal_70 = unk_0x320D1840B6DAA1CC();
				if ((iLocal_70 - iLocal_71) > iLocal_273)
				{
					if (func_87(uLocal_59[iLocal_271]))
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
						unk_0x963A57DF8530029D("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0xB0C559BD7D5D270D(uLocal_59[iLocal_271], sVar1, "SPEECH_PARAMS_FORCE", 1);
						iLocal_272++;
						if (iLocal_272 == 3)
						{
							iLocal_270 = 0;
						}
						iLocal_273 = unk_0x5853B15F78E1A265(9000, 14000);
						iLocal_71 = unk_0x320D1840B6DAA1CC();
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
				iLocal_70 = unk_0x320D1840B6DAA1CC();
				if ((iLocal_70 - iLocal_71) > 10000)
				{
					if (!func_90())
					{
						if (func_89(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0))
						{
							iLocal_261++;
							iLocal_71 = unk_0x320D1840B6DAA1CC();
							iLocal_270 = 1;
							iLocal_272 = 0;
						}
						else
						{
							unk_0x963A57DF8530029D("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
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

int func_87(var uParam0)
{
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		if (unk_0xACFDE386DBAED938(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	if (unk_0xF09A4F413B0D30EB(2, 222) && !iLocal_269)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_63))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_63, 0))
					{
						if (!unk_0xF68107C40359970C(iLocal_57))
						{
							unk_0xCD41D6F721CB9C3A(iLocal_57, iLocal_63, 24, 5000);
							fLocal_65 = unk_0x207D53F9E0190691(iLocal_63);
							while (fLocal_65 > 5f)
							{
								wait(0);
								if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
								{
									fLocal_65 = unk_0x207D53F9E0190691(iLocal_63);
								}
							}
							func_35();
							unk_0x842B2A274564CAF5(iLocal_263);
							unk_0x2378080C93821600(unk_0xE2D3D51028F0428A(), 1);
							unk_0x0AF8D3A06BB92903("RE_BUS_TOUR_SCENE");
							unk_0x5545B7D117BB40B4(iLocal_63, 0);
							if (unk_0x876B1078E90C91CB(uLocal_81))
							{
								unk_0x588DDCB644C6486A(uLocal_81, 0);
								unk_0x850D4EF3D40FB068(0, 0, 0, 1, 0, 0);
								unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
							}
							unk_0x02F1CAAC7CB77E47(unk_0xE2D3D51028F0428A(), iLocal_63, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_89(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 1;
	Global_22278 = 0;
	Global_22282 = 0;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_90()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	switch (iLocal_52)
	{
		case 0:
			unk_0x6B81DF75FA671549(0.5f);
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
			unk_0x6B81DF75FA671549(0.6f);
			break;
	}
}

void func_92()
{
	if (!unk_0xF68107C40359970C(iLocal_58) && !unk_0xF68107C40359970C(iLocal_57))
	{
		switch (iLocal_49)
		{
			case 0:
				unk_0xE4FA4FBF0BAFD2A8(0);
				unk_0x66B27A59829491D3("RE_BUS_TOUR_SCENE");
				unk_0x2A375326652F1B50(iLocal_63, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0x2378080C93821600(unk_0xE2D3D51028F0428A(), 0);
				func_74(1, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 256);
				unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				unk_0x917F631782A9CB32(Local_51.f_1, 30f, 0);
				unk_0x027BDA95C9BD0667(iLocal_57, 0);
				unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iLocal_63, 2);
				unk_0x0D0B74B18BF93317(1);
				unk_0xB60709BD0E075903(0);
				uLocal_82 = unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_83 = unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0xDD786B89B15AA63F(uLocal_82, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				unk_0x889B4F9D52E23DEE(uLocal_83, uLocal_82, 6500, 1, 1);
				if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0x9993EF7FDBCDB632(), iLocal_63, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0xBBF86885619695CE(unk_0x9993EF7FDBCDB632(), 65f);
						unk_0xC64B6E13A6A7F517(unk_0x9993EF7FDBCDB632(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0x9E4A185A00C358E1("BusTours");
				if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
				{
					func_85(unk_0x6B62510F212526DC(iLocal_63, 1), Local_50[0 /*15*/].f_1, &Local_77, &Local_78, 500);
					iLocal_275 = unk_0x320D1840B6DAA1CC();
					iLocal_49 = 1;
				}
				if (unk_0x2B1D7439C26D5642() == 4)
				{
					iLocal_76 = 1;
				}
				iLocal_276 = 0;
				break;
			
			case 1:
				if (!iLocal_93)
				{
					func_125();
				}
				if ((unk_0x320D1840B6DAA1CC() - iLocal_275) > 5000 && !iLocal_274)
				{
					func_84(&uLocal_96, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_124("Enter_bus"))
					{
						unk_0x3410421C60BF7143(1);
					}
					iLocal_274 = 1;
				}
				if ((unk_0x320D1840B6DAA1CC() - iLocal_275) > 6200)
				{
					if (iLocal_76 == 1)
					{
						if (iLocal_276 == 0)
						{
							unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
							unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_276 = 1;
						}
					}
				}
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if ((unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_63) && unk_0x87B449F4C26E764A(iLocal_58, iLocal_63)) && unk_0x87B449F4C26E764A(iLocal_57, iLocal_63))
					{
						iLocal_49 = 2;
					}
					else if (func_82(1000))
					{
						if (unk_0x7158135695FAE89D(iLocal_63, 0, 0))
						{
							unk_0xA9F390242F9EB2E1(iLocal_58, iLocal_63, 0);
						}
						iLocal_49 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x3B8F94419979A0B1(iLocal_57, iLocal_63, Local_50[0 /*15*/].f_1, Local_50[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
				unk_0xDD786B89B15AA63F(uLocal_82, 0);
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				unk_0x588DDCB644C6486A(uLocal_82, 0);
				unk_0x588DDCB644C6486A(uLocal_83, 0);
				unk_0x0D0B74B18BF93317(0);
				unk_0xB60709BD0E075903(1);
				unk_0x5AD47D8CFC3A86AF();
				unk_0xAC765EF46E85A446(2);
				func_74(0, 1, 1, 0, 0, 0, 0);
				iLocal_84 = func_15();
				func_93(iLocal_84, 1, iLocal_265);
				iLocal_263 = unk_0x964CD83935AD0ED1();
				if (!iLocal_76)
				{
					unk_0x842B2A274564CAF5(3);
				}
				else
				{
					func_27(1);
				}
				unk_0xFFD8EB5462B07B59(&uLocal_67);
				iLocal_47 = 2;
				break;
		}
	}
	else
	{
		func_229();
	}
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (func_123(iParam0) == 3)
	{
		return 0;
	}
	if (func_123(iParam0) == 4)
	{
		return 0;
	}
	return func_94(func_123(iParam0), 0, iParam1, iParam2, 0);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_122();
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
					func_121(99, 1);
					func_120(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_120(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_120(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_106(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_103(5))
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
							func_120(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_103(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_120(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_103(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_102(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_121(95, iParam3);
					break;
				
				case 1:
					func_121(97, iParam3);
					break;
				
				case 2:
					func_121(96, iParam3);
					break;
			}
			func_121(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(iVar1);
	}
	iVar5 = (Global_59864[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59864[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59864[iVar2] = 2147483647;
				}
				else
				{
					Global_59864[iVar2] = (Global_59864[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_120(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_120(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_120(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59864[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59864[iVar2];
			Global_59864[iVar2] = (Global_59864[iVar2] - iParam3);
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
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112915.f_20564.f_233[iVar2 /*69*/]++;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_96(iParam0);
	if (Global_42596 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
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
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59872[iVar0 /*3*/][0] = Global_112915.f_20564[iVar0];
		Global_59872.f_31[iVar0 /*3*/][0] = Global_112915.f_20564.f_11[iVar0];
		Global_59872.f_62[iVar0 /*3*/][0] = Global_112915.f_20564.f_22[iVar0];
		Global_59872.f_93[iVar0 /*3*/][0] = Global_112915.f_20564.f_33[iVar0];
		Global_59872.f_124[iVar0 /*3*/][0] = Global_112915.f_20564.f_44[iVar0];
		Global_59872.f_155[iVar0 /*3*/][0] = Global_112915.f_20564.f_55[iVar0];
		Global_59872.f_186[iVar0 /*3*/][0] = Global_112915.f_20564.f_66[iVar0];
		Global_59872.f_217[iVar0 /*3*/][0] = Global_112915.f_20564.f_77[iVar0];
		Global_59872.f_248[iVar0 /*3*/][0] = Global_112915.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_59872[iVar0 /*3*/][1] = Global_112915.f_20564[iVar0];
			Global_59872.f_31[iVar0 /*3*/][1] = Global_112915.f_20564.f_11[iVar0];
			Global_59872.f_62[iVar0 /*3*/][1] = Global_112915.f_20564.f_22[iVar0];
			Global_59872.f_93[iVar0 /*3*/][1] = Global_112915.f_20564.f_33[iVar0];
			Global_59872.f_124[iVar0 /*3*/][1] = Global_112915.f_20564.f_44[iVar0];
			Global_59872.f_155[iVar0 /*3*/][1] = Global_112915.f_20564.f_55[iVar0];
			Global_59872.f_186[iVar0 /*3*/][1] = Global_112915.f_20564.f_66[iVar0];
			Global_59872.f_217[iVar0 /*3*/][1] = Global_112915.f_20564.f_77[iVar0];
			Global_59872.f_248[iVar0 /*3*/][1] = Global_112915.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59864[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_97(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_60(129, 0, -1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, -1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, -1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, -1);
		return;
	}
	if (iParam0 == 12)
	{
		func_100(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_100(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_100(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_100(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_100(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_100(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_112915.f_20564.f_471), iParam0);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0) || unk_0xE2D0C323A1AE5D85(Global_2359296[func_99() /*5559*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_112915.f_20564.f_471), iParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_99() /*5559*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_98(iParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_98(int iParam0)
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
			break;
		
		default:
			break;
	}
	return "";
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_61();
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

void func_102(int iParam0)
{
	func_121(93, iParam0);
	func_121(29, iParam0);
	func_121(30, iParam0);
}

bool func_103(int iParam0)
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
		return func_105(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_105(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_105(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_105(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_104(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_104(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_104(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_104(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_104(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_104(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0);
	}
	return unk_0xE2D0C323A1AE5D85(Global_2359296[func_99() /*5559*/].f_675.f_10, iParam0);
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_101(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_105(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_61();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_106(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_107(27, 1);
	return 1;
}

int func_107(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_108(iParam0, iParam1);
}

int func_108(int iParam0, int iParam1)
{
	if (func_21(14) && !func_119(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31755 != 0 && !Global_77852)
	{
		return 0;
	}
	if (func_118(&Global_4535627))
	{
		if (func_116(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_109(&Global_4535627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_109(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	func_112(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_110(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_113(uParam0, iVar0);
		iVar0++;
	}
	func_114(uParam0, (Global_4535626 - 0.5f));
}

void func_113(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_114(var uParam0, float fParam1)
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

float func_115(var uParam0)
{
	return uParam0->f_80;
}

bool func_116(var uParam0, int iParam1)
{
	return func_117(uParam0, iParam1) != -1;
}

int func_117(var uParam0, int iParam1)
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

bool func_118(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_119(int iParam0)
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

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58432[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58432[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_122()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59864[0] == iVar0)
		{
			Global_59864[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59864[1] == iVar0)
		{
			Global_59864[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59864[2] == iVar0)
		{
			Global_59864[2] = iVar0;
		}
	}
}

int func_123(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

bool func_124(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_125()
{
	if (!unk_0xF68107C40359970C(iLocal_58))
	{
		unk_0x03A927199A2DFE46(iLocal_58);
		unk_0xB486640392EC50BB(iLocal_58, iLocal_63, 10000, 0, 2f, 262144, 0);
		unk_0xABC2CA6F28903308(iLocal_58, 1);
		iLocal_93 = 1;
	}
}

void func_126()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_166())
		{
			unk_0x3B2646B62E7BBE11(iLocal_63, 3);
			unk_0xF838539C61C30896(iLocal_63, 0);
			func_229();
		}
		else if (func_157(4))
		{
			if ((unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_63, 5f, 5f, 5f, 0, 1, 0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !func_124("TX_H02"))
			{
				if (func_155())
				{
					if (!iLocal_266)
					{
						unk_0x3B2646B62E7BBE11(iLocal_63, 1);
						iLocal_266 = 1;
					}
					unk_0x284E43C619CC0D26("Enter_bus", 0);
					if (unk_0x4C1B8C5717647539(2, 23))
					{
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), iLocal_63, -1, 2, 1f, 8, 0);
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_67))
					{
						if (unk_0x12DD4A0B247D9B4D(uLocal_68))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_68);
						}
						uLocal_67 = unk_0xEFD6451BF0F3352F(iLocal_63);
						unk_0xD809204F14EF9B68(uLocal_67, 1);
						unk_0x293A9399E902A33B(uLocal_67, Global_31552);
						if (!unk_0xF68107C40359970C(iLocal_58))
						{
							unk_0xF30F15F203736DE4(iLocal_58, unk_0xE2D3D51028F0428A(), -1, 0, 2);
						}
						if (!func_154())
						{
							if (func_142())
							{
								func_229();
							}
							else
							{
								func_132(1);
							}
						}
					}
					if (func_131())
					{
						iLocal_269 = 0;
						func_130(1);
					}
				}
				else
				{
					unk_0x284E43C619CC0D26("No_bus_money", 0);
					if (iLocal_266)
					{
						unk_0x3B2646B62E7BBE11(iLocal_63, 2);
						iLocal_266 = 0;
					}
				}
			}
		}
		if (iLocal_88 < 5)
		{
			if (func_127(&(uLocal_59[iLocal_88])))
			{
				iLocal_88++;
			}
		}
	}
}

int func_127(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x72E575062E5D1004(Local_53, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			if (func_129(*uParam0))
			{
				if (!unk_0xA6A089369417736E(*uParam0))
				{
					unk_0x2D58A6131679D82C(*uParam0, 1, 0);
					unk_0x03A927199A2DFE46(*uParam0);
					unk_0x50274A7EACA3133A(*uParam0, 1);
					unk_0xD8B630F464FE1D6D(*uParam0, "randompassenger");
					unk_0xD6A76BAB45A4B460(*uParam0, 134, 1);
					switch (iLocal_88)
					{
						case 0:
							if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
							{
								unk_0xA9F390242F9EB2E1(*uParam0, iLocal_63, 3);
								unk_0xABC2CA6F28903308(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
							{
								unk_0xA9F390242F9EB2E1(*uParam0, iLocal_63, 7);
								unk_0xABC2CA6F28903308(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
							{
								unk_0xA9F390242F9EB2E1(*uParam0, iLocal_63, 6);
								unk_0xABC2CA6F28903308(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
							{
								unk_0xA9F390242F9EB2E1(*uParam0, iLocal_63, 8);
								unk_0xABC2CA6F28903308(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
							{
								unk_0xA9F390242F9EB2E1(*uParam0, iLocal_63, 1);
								unk_0xABC2CA6F28903308(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_128(unk_0xECF091D7E67FF7F2(*uParam0));
					unk_0xEEBC95A38CBDED42(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_128(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 16);
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
	iVar0 = unk_0x5853B15F78E1A265(0, 33);
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

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x15CAA6D7B11F1A7C(uParam0) == joaat("a_m_m_tramp_01") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("s_m_y_cop_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_130(int iParam0)
{
	iLocal_49 = 0;
	iLocal_47 = iParam0;
}

int func_131()
{
	if (unk_0x55A0C756C4A8220C(iLocal_63, 0))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()) == iLocal_63)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_136())
	{
		Global_112905 = 1;
		Global_112902 = unk_0x320D1840B6DAA1CC();
		if (func_63(Global_112904))
		{
			func_133(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_63(Global_112904))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112915.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_134(func_135(iParam0), -1);
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
					func_134(func_135(iParam0), -1);
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
					func_134(func_135(iParam0), -1);
					Global_112915.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 2);
				}
			}
			break;
	}
}

void func_134(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_135(int iParam0)
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

int func_136()
{
	switch (func_137(&Global_31565, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_141(0))
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
		if (!func_139(iParam2))
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
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
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

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_42596);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_142()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_143(float fParam0, bool bParam1)
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
		if (func_17(func_15()))
		{
			iVar5 = func_68();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 2) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 3))
				{
					func_144(iVar1, &Var0);
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

void func_144(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(uParam1, "Abigail1", func_147(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 1:
			func_145(uParam1, "Abigail2", func_147(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 2:
			func_145(uParam1, "Barry1", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 3:
			func_145(uParam1, "Barry2", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 4:
			func_145(uParam1, "Barry3", func_147(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 5:
			func_145(uParam1, "Barry3A", func_147(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 6:
			func_145(uParam1, "Barry3C", func_147(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 7:
			func_145(uParam1, "Barry4", func_147(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_146(iParam0), 0, 0);
			break;
		
		case 8:
			func_145(uParam1, "Dreyfuss1", func_147(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 9:
			func_145(uParam1, "Epsilon1", func_147(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 10:
			func_145(uParam1, "Epsilon2", func_147(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 11:
			func_145(uParam1, "Epsilon3", func_147(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 12:
			func_145(uParam1, "Epsilon4", func_147(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 13:
			func_145(uParam1, "Epsilon5", func_147(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 14:
			func_145(uParam1, "Epsilon6", func_147(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 15:
			func_145(uParam1, "Epsilon7", func_147(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 16:
			func_145(uParam1, "Epsilon8", func_147(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 17:
			func_145(uParam1, "Extreme1", func_147(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 18:
			func_145(uParam1, "Extreme2", func_147(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 19:
			func_145(uParam1, "Extreme3", func_147(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 20:
			func_145(uParam1, "Extreme4", func_147(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 21:
			func_145(uParam1, "Fanatic1", func_147(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 22:
			func_145(uParam1, "Fanatic2", func_147(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 23:
			func_145(uParam1, "Fanatic3", func_147(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_146(iParam0), 0, 1);
			break;
		
		case 24:
			func_145(uParam1, "Hao1", func_147(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_146(iParam0), 0, 1);
			break;
		
		case 25:
			func_145(uParam1, "Hunting1", func_147(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 26:
			func_145(uParam1, "Hunting2", func_147(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 27:
			func_145(uParam1, "Josh1", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 28:
			func_145(uParam1, "Josh2", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 29:
			func_145(uParam1, "Josh3", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 30:
			func_145(uParam1, "Josh4", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 31:
			func_145(uParam1, "Maude1", func_147(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 32:
			func_145(uParam1, "Minute1", func_147(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 33:
			func_145(uParam1, "Minute2", func_147(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 34:
			func_145(uParam1, "Minute3", func_147(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 35:
			func_145(uParam1, "MrsPhilips1", func_147(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 36:
			func_145(uParam1, "MrsPhilips2", func_147(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 37:
			func_145(uParam1, "Nigel1", func_147(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 38:
			func_145(uParam1, "Nigel1A", func_147(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 39:
			func_145(uParam1, "Nigel1B", func_147(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 40:
			func_145(uParam1, "Nigel1C", func_147(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 41:
			func_145(uParam1, "Nigel1D", func_147(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 42:
			func_145(uParam1, "Nigel2", func_147(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 43:
			func_145(uParam1, "Nigel3", func_147(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 44:
			func_145(uParam1, "Omega1", func_147(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 45:
			func_145(uParam1, "Omega2", func_147(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 46:
			func_145(uParam1, "Paparazzo1", func_147(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 47:
			func_145(uParam1, "Paparazzo2", func_147(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 48:
			func_145(uParam1, "Paparazzo3", func_147(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 49:
			func_145(uParam1, "Paparazzo3A", func_147(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 50:
			func_145(uParam1, "Paparazzo3B", func_147(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 51:
			func_145(uParam1, "Paparazzo4", func_147(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 52:
			func_145(uParam1, "Rampage1", func_147(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 54:
			func_145(uParam1, "Rampage3", func_147(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 55:
			func_145(uParam1, "Rampage4", func_147(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 56:
			func_145(uParam1, "Rampage5", func_147(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 53:
			func_145(uParam1, "Rampage2", func_147(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 57:
			func_145(uParam1, "TheLastOne", func_147(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 58:
			func_145(uParam1, "Tonya1", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 59:
			func_145(uParam1, "Tonya2", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 60:
			func_145(uParam1, "Tonya3", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 61:
			func_145(uParam1, "Tonya4", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 62:
			func_145(uParam1, "Tonya5", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_145(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_146(int iParam0)
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

struct<2> func_147(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_148(iParam0) };
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

struct<2> func_148(int iParam0)
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

int func_149()
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

int func_150()
{
	if (func_153() && !func_149())
	{
		return 1;
	}
	if (func_152() && func_151())
	{
		return 1;
	}
	return 0;
}

bool func_151()
{
	return Global_112633 > 0;
}

int func_152()
{
	if (Global_96896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_154()
{
	if ((Global_112904 == func_72() && unk_0xE3BBDB1C36703410()) && Global_112905)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (func_156(func_15()) >= iLocal_265)
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_15();
				if (!func_17(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_165()) || Global_111962) || Global_31508) || func_164()) || func_23(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_165()) || Global_31508) || func_164()) || func_23(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_165()) || Global_111962) || Global_31508) || func_164()) || func_23(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_165()) || Global_111962) || Global_31508) || func_164()) || func_23(8, -1)) || func_163()) || func_162()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_23(8, -1)) || func_160()) || func_159()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_23(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_165()) || Global_31508) || func_164()) || func_23(8, -1)) || func_162()) || func_161()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_165()) || func_162()) || Global_111962) || Global_31508) || func_164()) || Global_43774) || func_23(8, -1)) || func_161()) || func_159()) || func_160()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_165()) || Global_111962) || Global_31508) || func_164()) || func_23(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
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

var func_158()
{
	return Global_100013.f_1;
}

int func_159()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
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

bool func_162()
{
	return Global_100026.f_376 > 0;
}

bool func_163()
{
	return Global_100026.f_375 > 0;
}

var func_164()
{
	return Global_1575046;
}

int func_165()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_166()
{
	if (func_179(iLocal_58))
	{
		if (!unk_0xF68107C40359970C(iLocal_58))
		{
			if (func_171(iLocal_58))
			{
				func_169(iLocal_58, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_168();
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
	if (!unk_0xF68107C40359970C(iLocal_57))
	{
		if (((func_171(iLocal_57) || !unk_0xD5C6B5E3B93A5EDC(iLocal_57, 0)) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_57)) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_57))
		{
			func_167(iLocal_58);
			return 1;
		}
	}
	else
	{
		func_167(iLocal_58);
		return 1;
	}
	if (unk_0x0747E45CFF1F74AA(iLocal_63, unk_0xE2D3D51028F0428A(), 1))
	{
		if (func_179(iLocal_58))
		{
			if (!unk_0xF68107C40359970C(iLocal_58))
			{
				func_167(iLocal_58);
				func_169(iLocal_58, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_229();
	}
	if (unk_0x09FC827691DACE59() >= 19 || unk_0x09FC827691DACE59() <= 6)
	{
		if (!func_90())
		{
			if (func_84(&uLocal_96, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_63, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (func_179(iLocal_58))
	{
		if (!unk_0xF68107C40359970C(iLocal_58))
		{
			unk_0x50274A7EACA3133A(uParam0, 0);
			unk_0x03A927199A2DFE46(uParam0);
			unk_0x7734082B0EDB0BE0(iParam0, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
			unk_0xABC2CA6F28903308(iParam0, 1);
			func_37();
		}
	}
}

void func_168()
{
	if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_58, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_70 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_70 - iLocal_71) > 10000)
		{
			if (!func_90())
			{
				func_84(&uLocal_96, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_71 = unk_0x320D1840B6DAA1CC();
		}
	}
}

void func_169(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_170(iParam2), 1);
}

int func_170(int iParam0)
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

int func_171(var uParam0)
{
	if (func_172(uParam0, &uLocal_90, &uLocal_87, iLocal_85, bLocal_91, 1077936128, 0) || unk_0x32DCDA1B2F8A0694(uParam0))
	{
		func_167(uParam0);
		return 1;
	}
	return 0;
}

int func_172(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0) && !bParam4)
	{
		if (unk_0x3C7ED37A9FE7C585(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			Var4 = { unk_0x6B62510F212526DC(uParam0, 1) };
			fVar5 = vdist(Var3, Var4);
			if (!unk_0xE2D0C323A1AE5D85(iParam3, 3))
			{
				if (func_178(iParam0, iParam6))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_176(iParam0);
					return 1;
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x9AC74C7EF847A074(Var4, fParam5, 1))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_176(iParam0);
					return 1;
				}
				if (unk_0x863026E0C5C2E52B(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_176(iParam0);
					return 1;
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(iParam3, 2))
			{
				fVar0 = unk_0xAEC78423999EFE49(unk_0xE2D3D51028F0428A());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
				{
					if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xD936DBC1D824A1BE(iParam0, unk_0xE2D3D51028F0428A(), 17))
							{
								func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_177("	aggro Ped knows player is pointing gun\n");
								func_173("		lockOnTimer = ", *uParam2);
								func_177("\n");
								func_173("		time since not LockedOn = ", (unk_0x320D1840B6DAA1CC() - iLocal_43));
								func_177("\n");
								bVar2 = true;
								if (unk_0x320D1840B6DAA1CC() > (iLocal_43 + *uParam2))
								{
									func_177("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_176(iParam0);
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
			if (!unk_0xE2D0C323A1AE5D85(iParam3, 0))
			{
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_176(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0x320D1840B6DAA1CC();
	}
	return 0;
}

void func_173(char* sParam0, int iParam1)
{
	func_175(sParam0);
	func_174(iParam1);
}

void func_174(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_175(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, uParam0))
	{
	}
}

void func_176(var uParam0)
{
	unk_0x642EEAB0CFC6A636(uParam0);
}

void func_177(char* sParam0)
{
	func_175(sParam0);
}

int func_178(int iParam0, int iParam1)
{
	if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x0747E45CFF1F74AA(uParam0, unk_0xE2D3D51028F0428A(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		if ((unk_0x3C739E920862F79E(iParam0) - unk_0x0CF63873D754B965(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_179(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	unk_0xBD9C95510C697303(0, 1);
	unk_0xBD9C95510C697303(1, 1);
	unk_0xBD9C95510C697303(2, 1);
	unk_0xBD9C95510C697303(3, 1);
	unk_0xBD9C95510C697303(4, 1);
	unk_0xBD9C95510C697303(5, 1);
	unk_0xBD9C95510C697303(6, 1);
	unk_0xBD9C95510C697303(7, 1);
	unk_0xBD9C95510C697303(8, 1);
}

void func_181()
{
	unk_0x11A68A2DDD8CD574(unk_0x9E2D6C50374FCFA9());
	unk_0x01E6FD194DCBEB7D(unk_0x9E2D6C50374FCFA9(), 5);
	unk_0x01E6FD194DCBEB7D(unk_0x9E2D6C50374FCFA9(), 3);
	unk_0x01E6FD194DCBEB7D(unk_0x9E2D6C50374FCFA9(), 15);
	unk_0x01E6FD194DCBEB7D(unk_0x9E2D6C50374FCFA9(), 2);
	unk_0x01E6FD194DCBEB7D(unk_0x9E2D6C50374FCFA9(), 4);
}

void func_182()
{
	if (iLocal_75)
	{
		unk_0x2EE5FFF3E1E3400D(Local_77.x, Local_77.f_1, Local_78.x, Local_78.f_1);
	}
}

void func_183()
{
	if (unk_0x6DCFE88F29C7556E("RAIN") || unk_0x6DCFE88F29C7556E("THUNDER"))
	{
		unk_0x95FC0D9FFA87229E("OVERCAST", 10000f);
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_187())
	{
		func_229();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0xD69A0C3662175E68(iVar0);
		unk_0xD69A0C3662175E68(iVar1);
		unk_0x8FB472886552D737(sLocal_262);
		unk_0xD69A0C3662175E68(joaat("tourbus"));
		unk_0x249A0D3C5714BCF4("BUSTOUR", 2);
		if ((((unk_0x0152AA00FA3130F1(iVar0) && unk_0x0152AA00FA3130F1(iVar1)) && unk_0x6F940C2636C076AD(sLocal_262)) && unk_0x0152AA00FA3130F1(joaat("tourbus"))) && unk_0x01896B71C5AC966E(2))
		{
			unk_0xF30CF8286FBA13D7(0);
			unk_0x0FBEA22DBE03AC23(Local_53, &uLocal_54, &uLocal_64, 1, 1077936128, 0);
			iLocal_63 = unk_0xBA715A7BEBA5A1F9(joaat("tourbus"), Local_51.f_1, Local_51.f_13, 1, 1, 0);
			unk_0x9F65B3BAFA302A65(iLocal_63, 1084227584);
			unk_0x3B2646B62E7BBE11(iLocal_63, 3);
			unk_0x82B0E749922635BC(iLocal_63, 0);
			unk_0xD501428969A52C0F(iLocal_63, "OFF");
			unk_0x2EABFF5EFCB7E6CF(iLocal_63, 0, 0);
			unk_0x45A6EA15139A0C54(iLocal_63, 2, 1);
			unk_0x7CD708DEB04F8474(joaat("tourbus"), 1);
			unk_0x09042D5723106B97(iLocal_63, 100f);
			iLocal_57 = unk_0x487C17B41938052C(iLocal_63, 26, iVar1, -1, 1, 1);
			unk_0x50274A7EACA3133A(iLocal_57, 1);
			unk_0xD6A76BAB45A4B460(iLocal_57, 251, 1);
			unk_0x4D671450EBB62809(iLocal_57, 1);
			if (unk_0xE5965CDF24F93A9F(iLocal_57))
			{
				if (!unk_0xF68107C40359970C(iLocal_57))
				{
					unk_0xE3752B10DC995E95(iLocal_57, 3, 1, 2, 0);
					unk_0xE3752B10DC995E95(iLocal_57, 4, 0, 2, 0);
				}
			}
			iLocal_58 = unk_0xA8D58C3AADA2C41C(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0xEEBC95A38CBDED42(iLocal_58, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x50274A7EACA3133A(iLocal_58, 1);
			unk_0xA7266A50941DBAEA(iLocal_58, 0);
			unk_0xE3752B10DC995E95(iLocal_58, 0, 1, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_58, 2, 1, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_58, 3, 0, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_58, 4, 1, 0, 0);
			unk_0xA888F8CC04F25CC8(&uLocal_80);
			unk_0x49D97B076E3590AC(0, sLocal_262, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(0, sLocal_262, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(0, sLocal_262, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x3F2B528DF27C8A9F(uLocal_80, 1);
			unk_0xC963A45B50851768(uLocal_80);
			unk_0x8ACADA903FCAA42F(iLocal_58, uLocal_80);
			unk_0x7461D7C5BA953BC7(&uLocal_80);
			func_186(&uLocal_96, 3, iLocal_58, "TOURGUIDE", 0, 1);
			if (!unk_0x12DD4A0B247D9B4D(uLocal_68))
			{
				uLocal_68 = unk_0xEFD6451BF0F3352F(iLocal_63);
				unk_0x1A5B5BA56167D412(uLocal_68, 85);
			}
			func_185();
			iLocal_46 = 1;
		}
	}
}

void func_185()
{
	unk_0xBC12D08EE7559CCD(iLocal_57, 17, 1);
	unk_0xBC12D08EE7559CCD(iLocal_58, 17, 1);
	unk_0xD642E010A287ADFD("re_bus_tours1", &uLocal_66);
	unk_0xFF4BEB6CFF55A013(iLocal_57, uLocal_66);
	unk_0xFF4BEB6CFF55A013(iLocal_58, uLocal_66);
	unk_0x9972EFADA7A2A47D(1, uLocal_66, 1862763509);
}

void func_186(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

int func_187()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_150())
	{
		return 1;
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
}

void func_189()
{
}

void func_190()
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
	func_191(Var0);
	func_191(Var1);
	func_191(Var2);
	func_191(Var3);
	func_191(Var4);
	func_191(Var5);
	func_191(Var6);
	func_191(Var7);
	func_191(Var8);
	func_191(Var9);
	func_191(Var10);
	func_191(Var11);
	func_191(Var12);
	func_191(Local_51);
	iLocal_52 = 0;
}

void func_191(char[60] cParam0)
{
	Local_50[iLocal_52 /*15*/] = { cParam0 };
	iLocal_52++;
}

void func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_194(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112901 = 0;
	func_193();
}

void func_193()
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

void func_194(int iParam0)
{
	Global_112904 = iParam0;
}

int func_195(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_72();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_149())
			{
				return 0;
			}
		}
		if (!Global_112915.f_9085)
		{
			return 0;
		}
		if (func_53(0))
		{
			return 0;
		}
		if (func_150())
		{
			return 0;
		}
		if (func_226())
		{
			return 0;
		}
		if (Global_112904 != -1)
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_143(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_225(iParam1))
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_224(func_15()) == 4 || func_224(func_15()) == 5)
			{
				return 0;
			}
		}
		if (func_17(func_15()))
		{
			if (!func_223(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_222(Global_112915.f_24995.f_43[iParam1]))
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
		if (func_221())
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
		if (!func_157(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_220(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_220(0, 0))
		{
			return 0;
		}
		if (Global_31652)
		{
			return 0;
		}
		if (func_225(30) && !func_220(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_17(func_15()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112915.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112915.f_2363.f_539.f_2296[iVar2];
				if (func_219(iVar4))
				{
					if (func_197(iVar2))
					{
						if (!func_196(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var3) < (210f * 210f))
							{
								if (func_15() != iVar2)
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

bool func_196(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_198(iVar0);
}

int func_198(int iParam0)
{
	return func_199(iParam0, 1);
}

int func_199(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_219(iParam0))
	{
		return 0;
	}
	func_200(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_201(func_212(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_201(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_211(iParam0, iParam1))
	{
		iVar0 = func_210(iParam1);
		iVar1 = func_208(iParam0);
		iVar2 = (func_208(iParam0) - func_208(iParam1));
		iVar3 = (func_210(iParam0) - func_210(iParam1));
		iVar4 = (func_207(iParam0) - func_207(iParam1));
		iVar5 = (func_206(iParam0) - func_206(iParam1));
		iVar6 = (func_205(iParam0) - func_205(iParam1));
		iVar7 = (func_204(iParam0) - func_204(iParam1));
	}
	else
	{
		iVar0 = func_210(iParam0);
		iVar1 = func_208(iParam1);
		iVar2 = (func_208(iParam1) - func_208(iParam0));
		iVar3 = (func_210(iParam1) - func_210(iParam0));
		iVar4 = (func_207(iParam1) - func_207(iParam0));
		iVar5 = (func_206(iParam1) - func_206(iParam0));
		iVar6 = (func_205(iParam1) - func_205(iParam0));
		iVar7 = (func_204(iParam1) - func_204(iParam0));
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
		iVar4 = (iVar4 + func_203(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_202(to_float(iVar0 + 1), 0f, 12f));
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

float func_202(float fParam0, float fParam1, float fParam2)
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

int func_203(int iParam0, int iParam1)
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

int func_204(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_205(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_206(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_207(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_208(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_209(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_209(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_210(int iParam0)
{
	return iParam0 & 15;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_219(iParam1) || !func_219(iParam0))
	{
		return 1;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
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
	return 0;
}

int func_212()
{
	var uVar0;
	
	func_218(&uVar0, unk_0xAA2844CAD88768B5());
	func_217(&uVar0, unk_0x80F97D7D29800A1A());
	func_216(&uVar0, unk_0x09FC827691DACE59());
	func_215(&uVar0, unk_0xD52BD97E61483713());
	func_214(&uVar0, unk_0x771485043FDC55DE());
	func_213(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_213(var uParam0, int iParam1)
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

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_210(*uParam0);
	iVar1 = func_208(*uParam0);
	if (iParam1 < 1 || iParam1 > func_203(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_217(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_218(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_219(int iParam0)
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
	iVar0 = func_204(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_205(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_206(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_208(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_210(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_207(iParam0);
	if (iVar5 < 1 || iVar5 > func_203(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_220(int iParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	func_14();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_222(int iParam0)
{
	return func_211(func_212(), iParam0);
}

int func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_15();
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

int func_224(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 7;
	}
	return Global_112915.f_7688.f_919[iParam0];
}

bool func_225(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_227())
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

int func_226()
{
	var uVar0;
	
	if (Global_31656)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_227()
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

int func_228()
{
	if (unk_0x09FC827691DACE59() > 19 || unk_0x09FC827691DACE59() < 6)
	{
		return 0;
	}
	return 1;
}

void func_229()
{
	int iVar0;
	
	unk_0x027F803A942FB98F();
	unk_0xC4075F869BC19306();
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(0);
		unk_0x94953C3FF0664F66(0f);
	}
	if (unk_0x876B1078E90C91CB(uLocal_82))
	{
		unk_0xDD786B89B15AA63F(uLocal_82, 0);
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		unk_0x588DDCB644C6486A(uLocal_82, 0);
		unk_0x0D0B74B18BF93317(0);
	}
	if (unk_0x876B1078E90C91CB(uLocal_83))
	{
		unk_0x588DDCB644C6486A(uLocal_83, 0);
	}
	if (iLocal_47 >= 2)
	{
		unk_0x842B2A274564CAF5(iLocal_263);
	}
	unk_0xB60709BD0E075903(1);
	if (iLocal_47 >= 1)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_57))
	{
		if (!unk_0xF68107C40359970C(iLocal_57))
		{
			unk_0xD6A76BAB45A4B460(iLocal_57, 251, 0);
			unk_0x027BDA95C9BD0667(iLocal_57, 1);
			unk_0xABC2CA6F28903308(iLocal_57, 1);
			unk_0x50274A7EACA3133A(iLocal_57, 0);
		}
		unk_0xB3822DB3D538C8F3(&iLocal_57);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_58))
	{
		if (!unk_0xF68107C40359970C(iLocal_58))
		{
			unk_0xA7266A50941DBAEA(iLocal_58, 1);
			unk_0xABC2CA6F28903308(iLocal_58, 1);
			unk_0x50274A7EACA3133A(iLocal_58, 0);
		}
		unk_0xB3822DB3D538C8F3(&iLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_59[iVar0]))
		{
			if (func_179(uLocal_59[iVar0]))
			{
				unk_0x50274A7EACA3133A(uLocal_59[iVar0], 0);
			}
			unk_0xB3822DB3D538C8F3(&(uLocal_59[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_63))
	{
		unk_0x3B2646B62E7BBE11(iLocal_63, 1);
		unk_0xF838539C61C30896(iLocal_63, 1);
		unk_0x3D81769BEC61BFF8(&iLocal_63);
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	if (func_154())
	{
		func_241();
	}
	else
	{
		func_240(&Global_31565);
	}
	unk_0x05BAD514D7C46D83(1);
	func_230(-1);
	wait(0);
	unk_0xAFBDF6A5E54114C1();
}

void func_230(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_154())
	{
		func_233(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112906 = unk_0x320D1840B6DAA1CC();
		func_232(30000);
		StringCopy(&cVar0, func_231(Global_112904, 1), 64);
		if (func_71(Global_112904) > 0)
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
	func_240(&Global_31565);
	Global_112905 = 0;
	func_194(-1);
}

char* func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0)
{
	Global_43147 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_212();
	func_237(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_206(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_207(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_210(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_208(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_112915.f_24995.f_43[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_210(*uParam0);
	iVar2 = func_207(*uParam0);
	iVar3 = func_206(*uParam0);
	iVar4 = func_205(*uParam0);
	iVar5 = func_204(*uParam0);
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
	iVar6 = func_203(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_203(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_218(uParam0, iParam1);
	func_217(uParam0, iParam2);
	func_216(uParam0, iParam3);
	func_214(uParam0, iParam5);
	func_215(uParam0, iParam4);
	func_213(uParam0, iParam6);
}

int func_239(int iParam0)
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

void func_240(var uParam0)
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

void func_241()
{
	func_232(30000);
	func_240(&Global_31565);
	Global_31553 = unk_0x320D1840B6DAA1CC();
}

