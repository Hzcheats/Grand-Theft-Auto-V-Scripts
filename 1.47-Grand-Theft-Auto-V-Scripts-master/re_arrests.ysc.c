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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	vector3 vLocal_244 = { 0f, 0f, 0f };
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	vector3 vLocal_271 = { 0f, 0f, 0f };
	vector3 vLocal_272 = { 0f, 0f, 0f };
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	bool bLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	iLocal_238 = 8000;
	iLocal_241 = 8;
	iLocal_243 = 1;
	sLocal_249 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_250 = "RANDOM@ARRESTS";
	sLocal_251 = "RANDOM@ARRESTS@BUSTED";
	iLocal_255 = 1;
	vLocal_63 = { ScriptParam_285.f_1[0 /*3*/] };
	if (unk_0x9EC5BDC006623C42(11))
	{
		bLocal_70 = true;
		func_202();
		func_172();
	}
	if (vdist(2411.32f, 4958.76f, 45.19f, vLocal_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (func_129(vLocal_63, 15, iLocal_51, 0, 0))
	{
		func_124(15);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	while (true)
	{
		wait(0);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((unk_0xA80721FDC3BDCCDB() && !func_123()) && !func_110())
				{
					if (func_107())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_172();
				}
				break;
			
			case 1:
				if (func_103())
				{
					unk_0xAF9EA4E314ED45C2(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, true, 1);
					unk_0x4B06B5746CBEC99F(0f);
					func_92(1);
					iLocal_46 = 2;
				}
				else if (!func_91(200f))
				{
					func_172();
				}
				break;
			
			case 2:
				if (func_91(1128792064))
				{
					func_1();
				}
				else
				{
					func_172();
				}
				break;
		}
	}
}

void func_1()
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	unk_0x8950ED5730F62EE8(&uVar0, 3);
	unk_0x8950ED5730F62EE8(&uVar0, 4);
	iVar3 = 0;
	func_90();
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		unk_0x41E36A540F8F323F(iLocal_53, 129, true);
	}
	if (func_89(iLocal_53))
	{
		if (unk_0x2ADCDD5710DD5A07(iLocal_53, 0))
		{
			bLocal_284 = true;
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					unk_0xCFBA20230D6CDB6C("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (timera() > 10)
					{
						if (!bLocal_68)
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_52, 1227113341) == 7)
							{
								unk_0x3C0F6044C54799A8(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (timera() > 4000)
					{
						if (!bLocal_68)
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_53, 1805844857) == 7)
							{
								if (unk_0xD76D6BCC14B95CE1(iLocal_53, -2017877118) == 1)
								{
									unk_0xA5F1549010780D92(iLocal_53, 2, 1);
								}
								unk_0xECCD4FDA45197F97(iLocal_53, iLocal_52, 150f, -1, 0, 0);
							}
						}
					}
					fVar2 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_52, true), unk_0xFBB1F99A825CAB09(iLocal_53, true), true);
					if (timera() > 8000 || fVar2 < 1.5f)
					{
						iVar3 = func_85();
						if (iVar3 == 1)
						{
							unk_0x3C0F6044C54799A8(iLocal_52, iLocal_53, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (timera() > 30000 && fVar2 < 10f)
					{
						iVar3 = 1;
					}
					if (timera() > 2000)
					{
						if (iVar3 || iLocal_270 == 1)
						{
							if (!func_84())
							{
								if (func_74(&uLocal_72, "REARRAU", "REARR_PCUFF", 4, iLocal_246, 0, 0))
								{
								}
								bLocal_282 = (unk_0x3AF2B3B68DD52355(iLocal_53) || unk_0xF7C907E9E8E2BB22(iLocal_53));
								if (!unk_0xEAF6E82C7BDE5A4C(iLocal_52, joaat("weapon_pistol"), 0))
								{
									unk_0x697EBA5CF1A6AB57(iLocal_52, joaat("weapon_pistol"), -1, false, true);
								}
								unk_0x274C6068B660FFB4(iLocal_52, joaat("weapon_pistol"), true);
								vLocal_64 = { unk_0xFBB1F99A825CAB09(iLocal_53, true) };
								unk_0xED68CDDDE25A144E(iLocal_52);
								unk_0x99414FB2D30425C1(&iLocal_67);
								if (!bLocal_282 && fVar2 > 2f)
								{
									unk_0x876889652BF6F5B5(0, vLocal_64.x, vLocal_64.y, (vLocal_64.z + 4f), 1000, 1566631136);
								}
								unk_0xC4A347124F39D998(0, iLocal_53, -1, 2048, 2);
								unk_0xBA33E5509FA3F42C(0, iLocal_53, iLocal_53, 1f, 0, 3f, 1082130432, 1, 0, -957453492);
								unk_0x4DDF5809B68AA635(0, iLocal_53, 5000, 0);
								unk_0xC734F59A13D39AEF(iLocal_67);
								unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
								unk_0xA7A57E7757ED035E(&iLocal_67);
								unk_0x0D847D71D9E6142E(iLocal_52);
								unk_0x897EF720254BBEA3(iLocal_52, true);
								settimera(0);
								iLocal_240 = unk_0xE3903F59E2F22150();
								if (bLocal_282)
								{
									unk_0xED68CDDDE25A144E(iLocal_53);
									unk_0x0BDE9076965FCC2C(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_270)
							{
								unk_0x3C0F6044C54799A8(iLocal_52, iLocal_53, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_270 = 1;
							}
						}
						else
						{
							func_73();
						}
					}
					else
					{
						unk_0xCFBA20230D6CDB6C("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_52) && !unk_0xD62C4419A41F106A(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							if (unk_0x4ED4D1D8B2023FD8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), iLocal_52))
							{
								unk_0xED68CDDDE25A144E(iLocal_52);
								iLocal_50 = 1;
								unk_0x7D575FC8F42508D8(iLocal_52, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0xD76D6BCC14B95CE1(iLocal_52, -982327190) == 7)
					{
						unk_0x3C0F6044C54799A8(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
						iLocal_50 = 0;
					}
					break;
				
				case 2:
					if ((unk_0xE3903F59E2F22150() - iLocal_240) > 1000)
					{
						vVar1 = { 0f, 0f, (unk_0xC472E34C8FBEC678(iLocal_53) * 3f) };
						unk_0x7E268975AF5EA74F(iLocal_53, vVar1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_50 = 3;
					}
					break;
				
				case 3:
					if ((unk_0xE3903F59E2F22150() - iLocal_240) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				
				case 4:
					bLocal_68 = true;
					unk_0x99414FB2D30425C1(&iLocal_67);
					unk_0x108754262311D34F(0, sLocal_250, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(iLocal_67);
					unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
					unk_0xA7A57E7757ED035E(&iLocal_67);
					unk_0x0D847D71D9E6142E(iLocal_53);
					unk_0x897EF720254BBEA3(iLocal_53, true);
					unk_0x141A3DB3233829B3(iLocal_53, 1);
					iLocal_50 = 5;
					break;
				
				case 5:
					if (iLocal_48 == 3)
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_52, 242628503) == 7)
						{
							unk_0xED68CDDDE25A144E(iLocal_52);
							if (!unk_0xEAF6E82C7BDE5A4C(iLocal_52, joaat("weapon_pistol"), 0))
							{
								unk_0x697EBA5CF1A6AB57(iLocal_52, joaat("weapon_pistol"), -1, false, true);
							}
							unk_0x274C6068B660FFB4(iLocal_52, joaat("weapon_pistol"), true);
							unk_0x99414FB2D30425C1(&iLocal_67);
							unk_0x4DDF5809B68AA635(0, iLocal_53, -1, 0);
							unk_0xC734F59A13D39AEF(iLocal_67);
							unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
							unk_0xA7A57E7757ED035E(&iLocal_67);
							unk_0x897EF720254BBEA3(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0x91D5C8283D19AF49(iLocal_55, 0) && !unk_0xBC2FC12AD0FBF72E(iLocal_54))
					{
						unk_0x4D606EA1940E249E(iLocal_55, 1);
						if (unk_0xD76D6BCC14B95CE1(iLocal_52, -2017877118) == 7)
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_54, -1273030092) == 7)
							{
								if (unk_0x782B99DB55846C95(iLocal_53, iLocal_55, 2, 0, false))
								{
									if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
									{
										if (!unk_0xEE984ED4E4A374BE(iLocal_53, iLocal_55))
										{
											if (!unk_0x71E0DAA57FE7D5C7(iLocal_53, 0))
											{
												if (unk_0xD76D6BCC14B95CE1(iLocal_53, -1794415470) == 7)
												{
													unk_0x99414FB2D30425C1(&iLocal_67);
													unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0xC734F59A13D39AEF(iLocal_67);
													unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
													unk_0xA7A57E7757ED035E(&iLocal_67);
													unk_0xD2E80177F27FD43F(0, iLocal_66, iLocal_65);
													unk_0xD2E80177F27FD43F(0, iLocal_65, iLocal_66);
												}
											}
										}
									}
									if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
									{
										unk_0xB13B4A13090E7801(iLocal_52);
										if (!unk_0x71E0DAA57FE7D5C7(iLocal_52, 0))
										{
											if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
											{
												if (!func_84())
												{
													if (func_74(&uLocal_72, "REARRAU", "REARR_INCAR", 4, iLocal_246, 0, 0))
													{
														if (func_72(iLocal_52, iLocal_55) == 2)
														{
															if (unk_0x910FF514D7BC5674(iLocal_54, iLocal_53, 180f))
															{
																vLocal_283 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																vLocal_283 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0x910FF514D7BC5674(iLocal_54, iLocal_53, 180f))
														{
															vLocal_283 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															vLocal_283 = { -2.978f, 0.75f, 1f };
														}
														unk_0x99414FB2D30425C1(&iLocal_67);
														unk_0x1E6D9DB41BEDAFB3(0, unk_0x2CA911E7569D12EA(iLocal_55, vLocal_283), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, 0, -957453492, 60000);
														unk_0x4DDF5809B68AA635(0, iLocal_53, -1, 0);
														unk_0xC734F59A13D39AEF(iLocal_67);
														unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
														unk_0xA7A57E7757ED035E(&iLocal_67);
														unk_0x897EF720254BBEA3(iLocal_52, true);
														unk_0xF0E2D155B834E176(iLocal_55, 0);
														iLocal_238 = 8000;
														settimerb(0);
														iLocal_269 = unk_0xE3903F59E2F22150();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_71();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_269) > 8000)
							{
								if (!func_84())
								{
									unk_0xC4A347124F39D998(iLocal_52, unk_0x33CD235DF1E6A94E(), 6000, 2048, 2);
									func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
									iLocal_269 = unk_0xE3903F59E2F22150();
								}
							}
						}
						if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
						{
							if (iLocal_62)
							{
								if (func_72(iLocal_52, iLocal_55) == 2)
								{
									unk_0xC838CE9837D0ABAF(iLocal_53, iLocal_55, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0xC838CE9837D0ABAF(iLocal_53, iLocal_55, -1, 1, 1f, 1, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar4 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_53, true), unk_0xFBB1F99A825CAB09(iLocal_55, true), true);
								if (fVar4 < 4f && iLocal_273 == 0)
								{
									unk_0x1579D77E267228A1(iLocal_53, iLocal_55, 60000, 0.5f, vLocal_283.x, vLocal_283.y, 1f, 1);
									iLocal_273 = 1;
								}
								else if (fVar4 < 3f)
								{
									unk_0xED68CDDDE25A144E(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "kneeling_arrest_get_up", 3))
							{
								if (func_72(iLocal_52, iLocal_55) == 2)
								{
									vLocal_283 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									vLocal_283 = { -1.578f, -0.5f, 1f };
								}
								unk_0x1579D77E267228A1(iLocal_53, iLocal_55, 60000, 0.5f, vLocal_283.x, vLocal_283.y, 1f, 1);
								if (bLocal_284)
								{
									unk_0x511559F67646F1C0(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0x511559F67646F1C0(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
						{
							if (unk_0xEE984ED4E4A374BE(iLocal_53, iLocal_55))
							{
								if (unk_0xE38E3CF1625A4145(iLocal_56))
								{
									unk_0x1ABDB383C83A336A(&iLocal_56);
								}
								if (unk_0xE38E3CF1625A4145(iLocal_57))
								{
									unk_0x1ABDB383C83A336A(&iLocal_57);
								}
								if (unk_0xEE984ED4E4A374BE(iLocal_52, iLocal_55))
								{
									unk_0x21D56A8927F5A92A(iLocal_54, iLocal_55, 10f, 786603);
									unk_0x897EF720254BBEA3(iLocal_54, true);
									unk_0x4A852F02088ECC9D(iLocal_52, false);
									func_172();
								}
								else if (unk_0xD76D6BCC14B95CE1(iLocal_52, -1794415470) == 7)
								{
									unk_0xED68CDDDE25A144E(iLocal_52);
									unk_0xC838CE9837D0ABAF(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0);
									unk_0x897EF720254BBEA3(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_57();
	if (unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
	}
	if (unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!func_84())
					{
						if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_53, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), true) < 20f)
						{
							func_74(&uLocal_72, "REARRAU", sLocal_266, 4, iLocal_246, 0, 0);
						}
					}
				}
				if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
				{
					unk_0x99414FB2D30425C1(&iLocal_67);
					unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
					unk_0xC734F59A13D39AEF(iLocal_67);
					unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
					unk_0xA7A57E7757ED035E(&iLocal_67);
				}
				else
				{
					unk_0xECCD4FDA45197F97(iLocal_53, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
					unk_0x897EF720254BBEA3(iLocal_53, true);
				}
				wait(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_172();
			}
		}
	}
	if (unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { 40f, 40f, 20f };
	if (unk_0xE3903F59E2F22150() > iLocal_247 + 1000)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
		{
			if (!unk_0x335C0645074963FE(iLocal_52, unk_0x33CD235DF1E6A94E(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			if (!unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_246 = 1;
		}
		else
		{
			iLocal_246 = 0;
		}
		iLocal_247 = unk_0xE3903F59E2F22150();
	}
}

void func_3(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_237 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!func_84())
					{
						unk_0xED68CDDDE25A144E(iLocal_52);
						unk_0x99414FB2D30425C1(&iLocal_67);
						unk_0xAE5B044AA2973E2A(0, unk_0xFBB1F99A825CAB09(iLocal_53, false), 10000, 0, 2);
						unk_0x108754262311D34F(0, sLocal_250, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x108754262311D34F(0, sLocal_250, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_67);
						unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
						unk_0xA7A57E7757ED035E(&iLocal_67);
						iLocal_48 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x1CE8F0A08E65CA6A(iLocal_52, sLocal_250, sVar1, 3))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
					{
						if (!func_84())
						{
							if (func_74(&uLocal_72, "REARRAU", "REARR_PRAD1", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_84())
						{
							if (func_74(&uLocal_72, "REARRAU", "REARR_PRAD2", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_84())
				{
					if (func_10())
					{
						if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
						{
							unk_0x8DD9343DCA32CE78(iLocal_55, 0);
							unk_0xF0E2D155B834E176(iLocal_55, 1);
						}
						unk_0xED68CDDDE25A144E(iLocal_52);
						unk_0x99414FB2D30425C1(&iLocal_67);
						unk_0x108754262311D34F(0, sLocal_250, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_67);
						unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
						unk_0xA7A57E7757ED035E(&iLocal_67);
						unk_0x880B00F3FAE4C022(iLocal_52, 0, 0);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_68)
				{
					func_7();
				}
				if (unk_0x765F6FEEFF39224F(iLocal_53) || !unk_0xD62C4419A41F106A(iLocal_53, 0))
				{
					if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_53))
					{
						if (!func_84())
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0);
						}
					}
				}
				if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0xC87D718F567156BE(iLocal_52, 1, unk_0x33CD235DF1E6A94E(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0xC87D718F567156BE(unk_0x33CD235DF1E6A94E(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (timerb() > iLocal_238 || iLocal_254)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
							{
								if (iLocal_238 == 8000 || iLocal_254)
								{
									if (bLocal_253)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_84())
								{
									unk_0xC4A347124F39D998(iLocal_52, unk_0x33CD235DF1E6A94E(), 500, 2048, 2);
									func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
								}
							}
							else if (iLocal_238 == 8000)
							{
								if (!func_84())
								{
									func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 20000;
								}
							}
							else if (!func_84())
							{
								func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
								iLocal_238 = 8000;
							}
							settimerb(0);
						}
						else
						{
							if (unk_0xBC2FC12AD0FBF72E(iLocal_53))
							{
								if (!func_84())
								{
									func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 30000;
								}
							}
							else if (!func_84())
							{
								unk_0xC4A347124F39D998(iLocal_52, unk_0x33CD235DF1E6A94E(), 6000, 2048, 2);
								func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
								iLocal_238 = unk_0x9EC3B269A34A2BEE(8, 22);
								iLocal_238 *= 30000;
							}
							settimerb(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_53, iLocal_55, 0))
							{
								func_71();
							}
						}
					}
					else
					{
						func_71();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_254)
	{
		switch (unk_0x9EC3B269A34A2BEE(0, 3))
		{
			case 0:
				sLocal_252 = "idle_a";
				break;
			
			case 1:
				sLocal_252 = "idle_b";
				break;
			
			case 2:
				sLocal_252 = "idle_c";
				break;
		}
		unk_0x99414FB2D30425C1(&iLocal_67);
		unk_0x108754262311D34F(0, sLocal_251, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sLocal_251, sLocal_252, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sLocal_251, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xC734F59A13D39AEF(iLocal_67);
		unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
		unk_0xA7A57E7757ED035E(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_251, "enter", 3))
	{
		if (func_5())
		{
			func_74(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
		}
	}
	else if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_251, "exit", 3))
	{
	}
	else if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_251, sLocal_252, 3))
	{
		func_74(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0xE3903F59E2F22150() > iLocal_256 + 6000)
	{
		iLocal_256 = unk_0xE3903F59E2F22150();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_254)
	{
		unk_0x99414FB2D30425C1(&iLocal_67);
		unk_0x108754262311D34F(0, sLocal_250, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sLocal_250, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sLocal_250, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0x4DDF5809B68AA635(0, iLocal_53, -1, 0);
		unk_0xC734F59A13D39AEF(iLocal_67);
		unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
		unk_0xA7A57E7757ED035E(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (unk_0x1CE8F0A08E65CA6A(iLocal_52, sLocal_250, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_74(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
		}
	}
	else if (unk_0x1CE8F0A08E65CA6A(iLocal_52, sLocal_250, "radio_exit", 3))
	{
		iLocal_255 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_68)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				unk_0xD62C4419A41F106A(iLocal_52, 0);
				unk_0xD62C4419A41F106A(iLocal_53, 0);
				if (unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x765F6FEEFF39224F(iLocal_53))
				{
					unk_0x1579D77E267228A1(iLocal_52, iLocal_53, -1, 3f, 0f, 0f, 1f, 0);
				}
				settimerb(0);
			}
			break;
		
		case 1:
			if (unk_0xE38E3CF1625A4145(iLocal_56))
			{
				unk_0x1ABDB383C83A336A(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_238 = 8000;
			iLocal_279 = unk_0xE3903F59E2F22150();
			break;
		
		case 2:
			if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_279) > 20000)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_54, -1273030092) == 7)
						{
							unk_0xC838CE9837D0ABAF(iLocal_52, iLocal_55, -1, 0, 1f, 1, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
				{
					if (unk_0xEE984ED4E4A374BE(iLocal_52, iLocal_55))
					{
						unk_0x21D56A8927F5A92A(iLocal_54, iLocal_55, 10f, 786603);
						unk_0x897EF720254BBEA3(iLocal_54, true);
						func_172();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_253 = func_9();
	bLocal_253 = iLocal_255;
	iLocal_238 = 20000;
	iLocal_254 = 0;
}

int func_9()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	int iVar4;
	
	iVar4 = joaat("pranger");
	if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iVar4);
	if (unk_0x5D98D654CDC2165A(iVar4))
	{
		if (unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iLocal_52, false), 1, &vVar0, 1, 3f, 0f))
		{
			if (unk_0xA266A7B6EFD4FE4E(&vVar0, &vVar2, &uVar3, 0f, 180f, 50f, true, 1, 1))
			{
				iLocal_55 = unk_0xC651C43AB13A15E5(iVar4, vVar2, 0f, true, true, false);
				iLocal_54 = unk_0xE196503B36B6194B(iLocal_55, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				unk_0x5FEE418CE11E6DDE(iLocal_54, 294, true);
				if (!unk_0xEAF6E82C7BDE5A4C(iLocal_54, joaat("weapon_pistol"), 0))
				{
					unk_0x697EBA5CF1A6AB57(iLocal_54, joaat("weapon_pistol"), -1, false, true);
				}
				unk_0x274C6068B660FFB4(iLocal_54, joaat("weapon_pistol"), true);
				unk_0x0648A75D3F60E864(iLocal_54, iLocal_65);
				unk_0xD303E20CB0AE4AD0(iLocal_55, 3);
				unk_0x4A852F02088ECC9D(iLocal_54, true);
				unk_0x1B2303F9DC2D90D5(iLocal_55, 1084227584);
				unk_0x23F395CF89089EB2(iLocal_55, 1);
				unk_0x8A065911C6F917C0(iLocal_55, 1);
				vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_55, true) };
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - vVar0 };
				unk_0x3C990C409B3845DE(iLocal_55, unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y));
				unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iLocal_52, false), 1, &vVar0, 1, 3f, 0f);
				if (unk_0x16E00F066AFFEA0D(vVar0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					vVar0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0x16E00F066AFFEA0D(2538.71f, 2592.007f, 36.9446f, vVar0, true) < 16f)
				{
					vVar0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x6ED1018181C54CFB(iLocal_54, iLocal_55, vVar0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0x4522AD7364B6AA54(iLocal_55, 4f);
				unk_0xF0E2D155B834E176(iLocal_55, 1);
				iLocal_71 = 1;
				unk_0x3F6A41F0B145E78C(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_47 != 3)
	{
		iLocal_237 = 3;
	}
	switch (iLocal_237)
	{
		case 0:
			if (unk_0xD76D6BCC14B95CE1(iLocal_52, 242628503) == 7 || unk_0xE3903F59E2F22150() > iLocal_240 + 15000)
			{
				if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
					{
						unk_0xED68CDDDE25A144E(iLocal_52);
						unk_0x99414FB2D30425C1(&iLocal_67);
						if (!unk_0xD62C4419A41F106A(iLocal_53, 0))
						{
							unk_0x3C0F6044C54799A8(0, iLocal_53, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 2000);
						unk_0xC734F59A13D39AEF(iLocal_67);
						unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
						unk_0xA7A57E7757ED035E(&iLocal_67);
						iLocal_237 = 1;
					}
				}
				else
				{
					iLocal_237 = 3;
				}
			}
			break;
		
		case 1:
			if (unk_0xD76D6BCC14B95CE1(iLocal_52, 242628503) == 1)
			{
				if (unk_0x24CA7139A01083BE(iLocal_52) > 0)
				{
					if (!func_84())
					{
						if (iLocal_239 < 2)
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
							if (unk_0xE38E3CF1625A4145(iLocal_56))
							{
								unk_0xBF11C8A43770C598(iLocal_56, true);
							}
						}
						else
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
						}
						iLocal_237 = 2;
					}
				}
			}
			else if (!func_84())
			{
				if (iLocal_239 < 2)
				{
					func_74(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
					if (unk_0xE38E3CF1625A4145(iLocal_56))
					{
						unk_0xBF11C8A43770C598(iLocal_56, true);
					}
				}
				else
				{
					func_74(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
				}
				iLocal_237 = 2;
			}
			break;
		
		case 2:
			if (!func_84())
			{
				iLocal_237 = 3;
			}
			unk_0x11C4AF4137F2A4B5(iLocal_52, unk_0x33CD235DF1E6A94E(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x91BBD269506D61D2(iLocal_53, unk_0x33CD235DF1E6A94E(), 1);
	bVar1 = func_56();
	if (bVar1)
	{
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_68 == 1)
				{
					switch (iLocal_241)
					{
						case 8:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0xBF11C8A43770C598(iLocal_57, true);
							if (!unk_0xD62C4419A41F106A(iLocal_53, 0) && unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
							{
								unk_0x99414FB2D30425C1(&iLocal_67);
								unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0xC734F59A13D39AEF(iLocal_67);
								unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
								unk_0xA7A57E7757ED035E(&iLocal_67);
								iLocal_241 = 9;
							}
							else
							{
								iLocal_241 = 3;
							}
							break;
						
						case 9:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xD76D6BCC14B95CE1(iLocal_53, 242628503) == 7)
							{
								iLocal_241 = 0;
							}
							break;
						
						case 0:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0x9FD099B0593CD91D(iLocal_53, true);
								iLocal_241 = 3;
							}
							break;
						
						case 1:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x18FB647D79B09657(iLocal_53, unk_0xFBB1F99A825CAB09(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_241 = 2;
							}
							else
							{
								unk_0xED68CDDDE25A144E(iLocal_53);
								unk_0x99414FB2D30425C1(&iLocal_67);
								unk_0xAE5B044AA2973E2A(0, unk_0xFBB1F99A825CAB09(iLocal_52, false), 1000, 0, 2);
								unk_0x7E268975AF5EA74F(0, unk_0xFBB1F99A825CAB09(iLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								unk_0xC734F59A13D39AEF(iLocal_67);
								unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
								unk_0xA7A57E7757ED035E(&iLocal_67);
								iLocal_241 = 2;
							}
							break;
						
						case 2:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x18FB647D79B09657(iLocal_53, unk_0xFBB1F99A825CAB09(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (unk_0xD76D6BCC14B95CE1(iLocal_53, 242628503) == 7 || func_74(&uLocal_72, "REARRAU", sLocal_263, 4, iLocal_246, 0, 0))
								{
									iLocal_241 = 6;
								}
							}
							else if (unk_0xD76D6BCC14B95CE1(iLocal_53, 242628503) == 7)
							{
								unk_0x99414FB2D30425C1(&iLocal_67);
								unk_0xAE5B044AA2973E2A(0, unk_0xFBB1F99A825CAB09(iLocal_52, false), 1000, 0, 2);
								unk_0x7E268975AF5EA74F(0, unk_0xFBB1F99A825CAB09(iLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								unk_0xC734F59A13D39AEF(iLocal_67);
								unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
								unk_0xA7A57E7757ED035E(&iLocal_67);
							}
							break;
						
						case 3:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_241 = 4;
							}
							else if (unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_84())
								{
									unk_0xED68CDDDE25A144E(iLocal_53);
									unk_0x99414FB2D30425C1(&iLocal_67);
									unk_0x3C0F6044C54799A8(0, unk_0x33CD235DF1E6A94E(), -1, 8f, 2f, 1073741824, 0);
									unk_0xC734F59A13D39AEF(iLocal_67);
									unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
									unk_0xA7A57E7757ED035E(&iLocal_67);
									iLocal_241 = 4;
								}
							}
							else
							{
								iLocal_241 = 6;
							}
							break;
						
						case 4:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_280 = unk_0xE3903F59E2F22150();
								iLocal_241 = 7;
							}
							break;
						
						case 7:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0xFB2C4D32FED130AB(iLocal_53, unk_0x33CD235DF1E6A94E()))
							{
								unk_0xC4A347124F39D998(iLocal_53, unk_0x33CD235DF1E6A94E(), -1, 2064, 2);
							}
							if (!unk_0x910FF514D7BC5674(iLocal_53, unk_0x33CD235DF1E6A94E(), 30f))
							{
								unk_0x11C4AF4137F2A4B5(iLocal_53, unk_0x33CD235DF1E6A94E(), -1);
							}
							if ((unk_0xE3903F59E2F22150() - iLocal_280) > 2000)
							{
								iLocal_241 = 5;
							}
							break;
						
						case 5:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "Thanks_Male_05", 3) || unk_0xD76D6BCC14B95CE1(iLocal_53, 242628503) == 7)
							{
								if (!func_84())
								{
									if (iLocal_239 < 2)
									{
										func_74(&uLocal_72, "REARRAU", sLocal_258, 4, iLocal_246, 0, 0);
										unk_0x108754262311D34F(iLocal_53, sLocal_250, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_74(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
									}
									func_15(func_51(), 1, 250, 0, 0);
									unk_0xE0DAC4ABE9900D9A(iLocal_53);
									iLocal_241 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xCFBA20230D6CDB6C("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_84())
							{
								unk_0xECCD4FDA45197F97(iLocal_53, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
								func_172();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_84())
				{
					func_74(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
				}
				unk_0xECCD4FDA45197F97(iLocal_53, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
				func_172();
			}
		}
		else
		{
			func_13();
			unk_0xECCD4FDA45197F97(iLocal_53, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!func_84())
			{
				func_74(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
			}
			func_172();
		}
	}
}

void func_13()
{
	Global_14732 = 0;
	func_14();
}

void func_14()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x75D54ED6C1AD1642(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x12B6E23F244DDB0F(iVar1, iVar0, 1);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_50();
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
					func_49(99, 1);
					func_48(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_32(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
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
							func_48(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_48(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_property"), iParam3);
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
									func_48(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_49(95, iParam3);
					break;
				
				case 1:
					func_49(97, iParam3);
					break;
				
				case 2:
					func_49(96, iParam3);
					break;
			}
			func_49(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_48(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_total_cash_earned"), iParam3);
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
	func_18(iParam0);
	if (Global_36425 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
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

void func_18(int iParam0)
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

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_25(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_25(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_25(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_25(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_22(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_22(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_22(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_22(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_22(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_22(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_21() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_21() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_20(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
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

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_23(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312745;
}

int func_25(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_24();
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

void func_26(int iParam0)
{
	func_49(93, iParam0);
	func_49(29, iParam0);
	func_49(30, iParam0);
}

bool func_27(int iParam0)
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
		return func_29(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_29(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_29(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_29(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_28(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_28(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_28(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_28(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_28(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_28(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_21() /*10778*/].f_6165.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_23(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_32(bool bParam0)
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
		func_47(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_33(27, 1);
	return 1;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_46(14) && !func_45(iParam0))
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
	if (func_44(&Global_4269608))
	{
		if (func_42(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_35(&Global_4269608, iParam0))
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

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	func_38(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_38(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4269607 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_40(var uParam0, float fParam1)
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

float func_41(var uParam0)
{
	return uParam0->f_80;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != -1;
}

int func_43(var uParam0, int iParam1)
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

bool func_44(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_45(int iParam0)
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

bool func_46(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_47(int iParam0, int iParam1)
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

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_49(int iParam0, int iParam1)
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

void func_50()
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

int func_51()
{
	func_52();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_52()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_55(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_54(unk_0x33CD235DF1E6A94E());
			if (func_53(iVar0) && (!func_46(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_53(Global_106565.f_2357.f_539.f_4321))
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

bool func_53(int iParam0)
{
	return iParam0 < 3;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_55(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_55(int iParam0)
{
	if (func_53(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_56()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
	{
		if (unk_0x335C0645074963FE(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0x4517BC4DD6D865D7(unk_0xFBB1F99A825CAB09(iLocal_53, false), fVar0, fVar0, fVar0, -1);
	if (!unk_0xBC2FC12AD0FBF72E(iVar1))
	{
		if (unk_0x541D5C57194E73C4(iVar1) == joaat("s_f_y_cop_01") || unk_0x541D5C57194E73C4(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0x4517BC4DD6D865D7(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, fVar0, fVar0, -1);
	if (!unk_0xBC2FC12AD0FBF72E(iVar1))
	{
		if (unk_0x541D5C57194E73C4(iVar1) == joaat("s_f_y_cop_01") || unk_0x541D5C57194E73C4(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0x5E65439BE0A05829(unk_0xFBB1F99A825CAB09(iLocal_53, false), fVar0, 0, 1024);
	if (unk_0x91D5C8283D19AF49(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0x5E65439BE0A05829(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, 0, 1024);
	if (unk_0x91D5C8283D19AF49(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		bVar0 = unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_53);
		bVar1 = unk_0x91BBD269506D61D2(iLocal_53, unk_0x33CD235DF1E6A94E(), 1);
		if (((bVar1 || func_70()) || func_68()) || bVar0)
		{
			func_67();
			if (bLocal_68)
			{
				if (((bVar0 || bVar1) && !unk_0x3AF2B3B68DD52355(iLocal_53)) && !unk_0xF0D230FB550CD6EB(iLocal_53, 0))
				{
					unk_0xED68CDDDE25A144E(iLocal_53);
					unk_0x27E510DC69CA08B6(iLocal_53, 500, 2000, 0, 0, 0, 0);
					unk_0xE0345C3A81F4471A(iLocal_53, -1);
					unk_0x897EF720254BBEA3(iLocal_53, true);
				}
				else if (!unk_0xF0D230FB550CD6EB(iLocal_53, 0) && !unk_0x3AF2B3B68DD52355(iLocal_53))
				{
					unk_0xED68CDDDE25A144E(iLocal_53);
					unk_0xE0345C3A81F4471A(iLocal_53, -1);
					unk_0x897EF720254BBEA3(iLocal_53, true);
				}
				func_63(0);
				if (!func_84())
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_52) && iLocal_274 == 0)
					{
						if (func_74(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (unk_0xE38E3CF1625A4145(iLocal_57))
		{
			unk_0x1ABDB383C83A336A(&iLocal_57);
			func_62(&uLocal_72, 2);
		}
		func_67();
		if (unk_0x91BBD269506D61D2(iLocal_53, unk_0x33CD235DF1E6A94E(), 1))
		{
			if (bLocal_68)
			{
				func_63(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
			{
				func_172();
			}
		}
		if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x765F6FEEFF39224F(iLocal_54))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
			{
				if ((unk_0x91BBD269506D61D2(iLocal_54, unk_0x33CD235DF1E6A94E(), 1) && unk_0xE80842D7B53F8525(iLocal_54) < 190) || (unk_0x91BBD269506D61D2(iLocal_54, unk_0x33CD235DF1E6A94E(), 1) && unk_0x3AF2B3B68DD52355(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (unk_0x765F6FEEFF39224F(iLocal_55) && unk_0x91BBD269506D61D2(iLocal_55, unk_0x33CD235DF1E6A94E(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0x91BBD269506D61D2(iLocal_52, unk_0x33CD235DF1E6A94E(), 1) && unk_0xE80842D7B53F8525(iLocal_52) < 190) || func_61()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || func_60()) || (unk_0x91BBD269506D61D2(iLocal_52, unk_0x33CD235DF1E6A94E(), 1) && unk_0x3AF2B3B68DD52355(iLocal_52))) || iVar2 == 1)
		{
			func_63(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (unk_0x91BBD269506D61D2(iLocal_52, unk_0x33CD235DF1E6A94E(), 1))
		{
			if (iLocal_275 == 0)
			{
				iLocal_275 = 1;
				iLocal_278 = unk_0xE3903F59E2F22150();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			unk_0x0D847D71D9E6142E(iLocal_53);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_56))
		{
			unk_0x1ABDB383C83A336A(&iLocal_56);
			func_62(&uLocal_72, 1);
		}
	}
	if (iLocal_275)
	{
		if ((unk_0xE3903F59E2F22150() - iLocal_278) > 5000)
		{
			unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 3, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			iLocal_275 = 0;
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52) && !unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (unk_0x91BBD269506D61D2(iLocal_52, unk_0x33CD235DF1E6A94E(), 1) && unk_0x91BBD269506D61D2(iLocal_53, unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0xE80842D7B53F8525(iLocal_52) < 190 && unk_0xE80842D7B53F8525(iLocal_53) < 190)
			{
				func_67();
				func_63(1);
				iLocal_47 = 1;
			}
		}
		if (!unk_0x335C0645074963FE(iLocal_53, iLocal_52, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 20f, 20f, 20f, 0, 1, 0))
			{
				func_58();
				wait(0);
				func_74(&uLocal_72, "REARRAU", "REARR_PORUN", 4, iLocal_246, 0, 0);
			}
			else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_53, 40f, 40f, 40f, 0, 1, 0))
			{
				func_58();
				wait(0);
				func_74(&uLocal_72, "REARRAU", sLocal_259, 4, iLocal_246, 0, 0);
			}
			func_172();
		}
	}
	if (unk_0xBC2FC12AD0FBF72E(iLocal_52) && unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		func_172();
	}
	if (unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
		{
			if (!unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 100f, 100f, 40f, 0, 1, 0))
			{
				func_172();
			}
		}
	}
}

void func_58()
{
	Global_14732 = 0;
	func_59();
}

void func_59()
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

bool func_60()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
			{
				if (unk_0x4ED4D1D8B2023FD8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_71)
		{
			if (unk_0x91BBD269506D61D2(iLocal_55, unk_0x33CD235DF1E6A94E(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_61()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (unk_0x416C37C19CCE0077(unk_0x61B226C460A8FCC2(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			return 1;
		}
		else if (!unk_0x416C37C19CCE0077(unk_0x61B226C460A8FCC2(iLocal_53, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0x4141DE783FB62352(unk_0x61B226C460A8FCC2(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
		{
			if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_52) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_52))
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_53) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_53))
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						if (bLocal_68)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	vVar0 = { vVar0 + unk_0x61B226C460A8FCC2(iLocal_52, 31086, 0f, 0f, 0f) };
	vVar1 = { vVar1 + unk_0x61B226C460A8FCC2(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((unk_0x7EEE8B447AB73C25(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0x7EEE8B447AB73C25(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0x7EEE8B447AB73C25(vVar1, vVar0, joaat("weapon_stickybomb"), 1)) || unk_0x7EEE8B447AB73C25(vVar1, vVar0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_63(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		unk_0x0D847D71D9E6142E(iLocal_52);
		if (!bLocal_59)
		{
			unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 2, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			unk_0xF0BE7CB40DE62A2F(iLocal_52, true);
			if (unk_0xE38E3CF1625A4145(iLocal_56))
			{
				unk_0xBF11C8A43770C598(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
				{
					if (unk_0xD76D6BCC14B95CE1(iLocal_53, 1805844857) == 7)
					{
						if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							unk_0x99414FB2D30425C1(&iLocal_67);
							unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xECCD4FDA45197F97(0, iLocal_52, 150f, -1, 0, 0);
							unk_0xC734F59A13D39AEF(iLocal_67);
							unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
							unk_0xA7A57E7757ED035E(&iLocal_67);
							unk_0x13C3FE558ED056EE(iLocal_53, -530524, false, 0, 0);
							unk_0x897EF720254BBEA3(iLocal_53, true);
						}
						else
						{
							unk_0xED68CDDDE25A144E(iLocal_53);
							unk_0xECCD4FDA45197F97(iLocal_53, iLocal_52, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0xD62C4419A41F106A(iLocal_53, 0) && !unk_0xBC2FC12AD0FBF72E(iLocal_53)) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_53, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), true) < 20f)
					{
						if (!func_84())
						{
							func_74(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
						}
					}
				}
			}
			unk_0xED68CDDDE25A144E(iLocal_52);
			unk_0x99414FB2D30425C1(&iLocal_67);
			unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
			unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
			unk_0xC734F59A13D39AEF(iLocal_67);
			unk_0x13A2D602CD10CBAC(iLocal_52, iLocal_67);
			unk_0xA7A57E7757ED035E(&iLocal_67);
			unk_0x897EF720254BBEA3(iLocal_52, true);
			unk_0x428C55A965F78103(iLocal_52, 1, 0);
			if (unk_0x91D5C8283D19AF49(iLocal_55, 0))
			{
				unk_0xD303E20CB0AE4AD0(iLocal_55, 1);
			}
			func_65();
			wait(0);
			wait(0);
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
			{
				if (!unk_0x3AF2B3B68DD52355(iLocal_52))
				{
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_54))
			{
				func_64();
			}
			bLocal_59 = true;
		}
	}
}

void func_64()
{
	if (unk_0x765F6FEEFF39224F(iLocal_54))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
		{
			unk_0x99414FB2D30425C1(&iLocal_67);
			unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
			unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
			unk_0xC734F59A13D39AEF(iLocal_67);
			unk_0x13A2D602CD10CBAC(iLocal_54, iLocal_67);
			unk_0xA7A57E7757ED035E(&iLocal_67);
			unk_0x897EF720254BBEA3(iLocal_54, true);
			unk_0x428C55A965F78103(iLocal_54, 1, 0);
		}
	}
}

void func_65()
{
	Global_14732 = 0;
	func_66();
}

void func_66()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_67()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (unk_0xE38E3CF1625A4145(iLocal_57))
		{
			unk_0xBF11C8A43770C598(iLocal_57, false);
		}
		unk_0x0D847D71D9E6142E(iLocal_53);
	}
}

int func_68()
{
	if (!unk_0xD62C4419A41F106A(iLocal_52, 0))
	{
		if (bLocal_68)
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_52))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	if (!func_84())
	{
		if (iLocal_267 < 3)
		{
			unk_0xC4A347124F39D998(iLocal_52, unk_0x33CD235DF1E6A94E(), 6000, 2048, 2);
			func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
		}
	}
	iLocal_267++;
	iLocal_268 = unk_0xE3903F59E2F22150();
}

int func_70()
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x4ED4D1D8B2023FD8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), iLocal_53))
		{
			if (bLocal_68)
			{
				if (iLocal_50 != 7)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(iLocal_53, true), vLocal_64) > 2.5f)
					{
						return 1;
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
		}
	}
	if (bLocal_68)
	{
		if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_53))
		{
			if (unk_0x3AF2B3B68DD52355(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(iLocal_53, true), vLocal_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_68)
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	if (!iLocal_69)
	{
		switch (iLocal_239)
		{
			case 0:
				if (!bLocal_59)
				{
					if (timera() > 80000)
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
							{
								func_58();
								wait(0);
								func_74(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
							}
						}
						iLocal_239 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_84())
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
					{
						if (unk_0x1CE8F0A08E65CA6A(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							unk_0x99414FB2D30425C1(&iLocal_67);
							unk_0x108754262311D34F(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xECCD4FDA45197F97(0, iLocal_52, 150f, -1, 0, 0);
							unk_0xC734F59A13D39AEF(iLocal_67);
							unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
							unk_0xA7A57E7757ED035E(&iLocal_67);
							unk_0x13C3FE558ED056EE(iLocal_53, -530524, false, 0, 0);
							unk_0x897EF720254BBEA3(iLocal_53, true);
						}
						else
						{
							unk_0xECCD4FDA45197F97(iLocal_53, iLocal_52, 150f, -1, 0, 0);
						}
						unk_0x897EF720254BBEA3(iLocal_53, true);
						unk_0x7FC2040EB34E0E31(iLocal_53, 101, 0);
						func_74(&uLocal_72, "REARRAU", sLocal_261, 4, iLocal_246, 0, 0);
						iLocal_239 = 2;
					}
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
					{
						unk_0xED68CDDDE25A144E(iLocal_52);
						iLocal_239 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
					{
						unk_0xD2E80177F27FD43F(2, iLocal_66, iLocal_65);
						unk_0xD2E80177F27FD43F(2, iLocal_65, iLocal_66);
						unk_0x277716E9E7CC0692(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						unk_0xBD4591245C650283(iLocal_52, 1193033728, 0);
						func_172();
					}
					unk_0x897EF720254BBEA3(iLocal_52, true);
				}
				iLocal_69 = 1;
				break;
			}
	}
}

int func_72(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (unk_0x91D5C8283D19AF49(iParam1, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
		}
		else
		{
			return -1;
		}
		vVar1 = { unk_0x2CA911E7569D12EA(iParam1, 1f, -0.5f, 0f) };
		vVar3 = { vVar1 - vVar0 };
		vVar2 = { unk_0x2CA911E7569D12EA(iParam1, -1f, -0.5f, 0f) };
		vVar4 = { vVar2 - vVar0 };
		if (vmag(vVar3) < vmag(vVar4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_73()
{
	if (!func_84())
	{
		if (!iLocal_281)
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 30f, 30f, 30f, 0, 1, 0))
			{
				func_74(&uLocal_72, "REARRAU", "REARR_PSTOP", 4, iLocal_246, 0, 0);
				iLocal_281 = 1;
				settimerb(0);
			}
		}
		else if (timerb() > 8000)
		{
			if (unk_0x9EC3B269A34A2BEE(0, 99) > 50)
			{
				func_74(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
			}
			else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_74(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, 10f, 10f, 10f, 0, 1, 0))
			{
				func_74(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else
			{
				func_74(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
			}
			settimerb(0);
		}
	}
}

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
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
					func_59();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_81();
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
				func_80();
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
				if (func_79())
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
			if (func_78())
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
			func_77();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_76();
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
		func_59();
	}
	return 0;
}

void func_76()
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

void func_77()
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

int func_78()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
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

void func_80()
{
	if (func_46(14))
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
		Global_14553 = func_51();
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

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_84()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	if (unk_0x335C0645074963FE(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_88())
	{
		if (!func_86(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(float fParam0)
{
	var uVar0;
	vector3 vVar1;
	
	if (unk_0xC13E21630C52C675(unk_0xFBB1F99A825CAB09(iLocal_53, true), &uVar0, &vVar1))
	{
		if (func_87(vVar1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_87(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_88()
{
	return 0;
}

int func_89(int iParam0)
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

void func_90()
{
	if ((unk_0xE3903F59E2F22150() - iLocal_245) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_57))
			{
				unk_0xBF11C8A43770C598(iLocal_57, iLocal_242);
				if (bLocal_242 == 1)
				{
					bLocal_242 = false;
				}
				else
				{
					bLocal_242 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		if (!bLocal_59)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_56))
			{
				unk_0xBF11C8A43770C598(iLocal_56, iLocal_243);
				if (bLocal_243 == 1)
				{
					bLocal_243 = false;
				}
				else
				{
					bLocal_243 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		iLocal_245 = unk_0xE3903F59E2F22150();
	}
	if (!bLocal_277 == bLocal_276)
	{
		if (bLocal_276)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_57))
			{
				unk_0x983D75D9630FD905(iLocal_57, true);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_56))
			{
				unk_0x983D75D9630FD905(iLocal_56, true);
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(iLocal_57))
			{
				unk_0x983D75D9630FD905(iLocal_57, false);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_56))
			{
				unk_0x983D75D9630FD905(iLocal_56, false);
			}
		}
		bLocal_277 = bLocal_276;
	}
}

int func_91(float fParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	vVar2 = { fParam0, fParam0, 50f };
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_271, vLocal_272, 194.75f, 0, true, 0))
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		if (unk_0x335C0645074963FE(iLocal_52, unk_0x33CD235DF1E6A94E(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
	{
		if (unk_0x335C0645074963FE(iLocal_53, unk_0x33CD235DF1E6A94E(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_92(int iParam0)
{
	if (func_97())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_96(Global_106554))
		{
			func_93(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_96(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_94(func_95(iParam0), -1);
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
					func_94(func_95(iParam0), -1);
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
					func_94(func_95(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_94(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

char* func_95(int iParam0)
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

int func_96(int iParam0)
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

int func_97()
{
	switch (func_98(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
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

int func_98(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_102(0))
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
		if (!func_100(iParam2))
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
			func_99(uParam0, iParam4);
		}
	}
	return 2;
}

void func_99(var uParam0, int iParam1)
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

bool func_100(int iParam0)
{
	return func_101(iParam0, Global_36425);
}

int func_101(int iParam0, int iParam1)
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

int func_102(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_103()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			if ((unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_52, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_271, vLocal_272, 194.75f, 0, true, 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_57))
				{
					iLocal_57 = func_104(iLocal_53, 0, 145);
				}
				if (!unk_0xE38E3CF1625A4145(iLocal_56))
				{
					iLocal_56 = func_104(iLocal_52, 0, 145);
				}
				unk_0x983D75D9630FD905(iLocal_57, false);
				unk_0x983D75D9630FD905(iLocal_56, false);
				settimera(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_56))
				{
					iLocal_56 = func_104(iLocal_52, 0, 145);
				}
			}
			if (unk_0xE38E3CF1625A4145(iLocal_57))
			{
				unk_0x1ABDB383C83A336A(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			if (!unk_0xE38E3CF1625A4145(iLocal_57))
			{
				iLocal_57 = func_104(iLocal_53, 0, 145);
			}
		}
		if (unk_0xE38E3CF1625A4145(iLocal_56))
		{
			unk_0x1ABDB383C83A336A(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_105(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_105(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_106(unk_0xB331FCEB94EB05C8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xBF11C8A43770C598(iVar0, bParam1);
		}
		else
		{
			unk_0xB9E84A421C105943(iVar0, 2);
		}
	}
	else if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_106(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_106(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_107()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_51 == 1)
	{
		vVar2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar4 = 218.3434f;
		vVar3 = { 2431.685f, 4945.31f, 44.6996f };
		fVar5 = 220.0087f;
		vLocal_271 = { 2378.284f, 4863.027f, 32.50883f };
		vLocal_272 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_248 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_257 = "arrestcriminal";
		sLocal_258 = "REARR_CTHANK";
		sLocal_259 = "REARR_CORUN";
		sLocal_260 = "REARR_CWTF";
		sLocal_261 = "REARR_CTURN";
		sLocal_262 = "REARR_CHELP";
		sLocal_263 = "REARR_HATE";
		sLocal_264 = "REARR_CRAND";
		sLocal_265 = "REARR_CRAND";
		sLocal_266 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		vVar2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar4 = 90.5639f;
		vVar3 = { 2586.005f, 2541.41f, 31.0379f };
		fVar5 = 75.5943f;
		vLocal_271 = { 2543.135f, 2683.917f, 0.307461f };
		vLocal_272 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_248 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_257 = "arrestcriminal2";
		sLocal_258 = "REARR_THANK2";
		sLocal_259 = "REARR_CORUN2";
		sLocal_260 = "REARR_CWTF2";
		sLocal_261 = "REARR_CTURN2";
		sLocal_262 = "REARR_CHELP2";
		sLocal_263 = "REARR_HATE2";
		sLocal_264 = "REARR_CRAND2";
		sLocal_265 = "REARR_CRAND2";
		sLocal_266 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	unk_0xB815670C37E03CDE(iVar0);
	unk_0xB815670C37E03CDE(iVar1);
	unk_0xB815670C37E03CDE(joaat("prop_ld_binbag_01"));
	unk_0x0483D0035D6E46FD(sLocal_250);
	unk_0x0483D0035D6E46FD(sLocal_251);
	unk_0x1FCB57E33CEA24E8("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0x1FCB57E33CEA24E8("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(iVar1)) && unk_0x5D98D654CDC2165A(joaat("prop_ld_binbag_01"))) && unk_0xE9CCF312047EBEE0(sLocal_250)) && unk_0xE9CCF312047EBEE0(sLocal_251)) && unk_0xCDA107F8BEE35F40("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0xCDA107F8BEE35F40("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = unk_0x9BA5CF280376EEA4(6, iVar0, vVar2, fVar4, 1, true);
		unk_0x5FEE418CE11E6DDE(iLocal_52, 294, true);
		unk_0x428C55A965F78103(iLocal_52, 1, 0);
		unk_0x141A3DB3233829B3(iLocal_52, 1);
		unk_0x4A852F02088ECC9D(iLocal_52, true);
		func_109(&uLocal_72, 1, iLocal_52, "ArrestCop", 0, 1);
		unk_0x43D47AD82DA3C6EC(iLocal_52, true, 1);
		unk_0x9E280E42C0773A3A(iLocal_52, 1);
		iLocal_53 = unk_0x9BA5CF280376EEA4(26, iVar1, vVar3, fVar5, 1, true);
		unk_0x428C55A965F78103(iLocal_53, 1, 0);
		unk_0x5FEE418CE11E6DDE(iLocal_53, 42, true);
		unk_0x5FEE418CE11E6DDE(iLocal_53, 281, true);
		unk_0x4A852F02088ECC9D(iLocal_53, true);
		func_109(&uLocal_72, 2, iLocal_53, sLocal_257, 0, 1);
		unk_0x43D47AD82DA3C6EC(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			unk_0x93AA93DA1B137032(iLocal_53, 0, 0, 2, 0);
			unk_0x93AA93DA1B137032(iLocal_53, 2, 0, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_53, 3, 2, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_53, 4, 0, 0, 0);
		}
		func_108();
		if (func_51() == 0)
		{
			func_109(&uLocal_72, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_109(&uLocal_72, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_109(&uLocal_72, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
		}
		if (!unk_0xEAF6E82C7BDE5A4C(iLocal_52, joaat("weapon_pistol"), 0))
		{
			unk_0x697EBA5CF1A6AB57(iLocal_52, joaat("weapon_pistol"), -1, false, true);
		}
		unk_0x274C6068B660FFB4(iLocal_52, joaat("weapon_pistol"), true);
		iLocal_58 = unk_0x7CA67831169E8AA6(joaat("prop_ld_binbag_01"), vLocal_63.x, vLocal_63.y, (vLocal_63.z + 100f), true, true, false);
		unk_0x0CDD28A9DFCE2FCE(iLocal_58, false, 0);
		if (vdist(2411.32f, 4958.76f, 45.19f, vLocal_63) < 10f)
		{
			iLocal_51 = 1;
			unk_0x99414FB2D30425C1(&iLocal_67);
			unk_0x2EFD82FCBABD29F7(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, vLocal_244, 1193033728);
			unk_0xECCD4FDA45197F97(0, iLocal_52, 150f, -1, 0, 0);
			unk_0xC734F59A13D39AEF(iLocal_67);
			unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
			unk_0x897EF720254BBEA3(iLocal_53, true);
			unk_0xA7A57E7757ED035E(&iLocal_67);
			unk_0x47B5CF91AC5D5FFA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_51 = 2;
			unk_0x99414FB2D30425C1(&iLocal_67);
			unk_0x2EFD82FCBABD29F7(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, vLocal_244, 1193033728);
			unk_0xECCD4FDA45197F97(0, iLocal_52, 150f, -1, 0, 0);
			unk_0xC734F59A13D39AEF(iLocal_67);
			unk_0x13A2D602CD10CBAC(iLocal_53, iLocal_67);
			unk_0x897EF720254BBEA3(iLocal_53, true);
			unk_0xA7A57E7757ED035E(&iLocal_67);
		}
		if (iLocal_51 == 1)
		{
		}
		unk_0x3C0F6044C54799A8(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
		unk_0x897EF720254BBEA3(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_108()
{
	vLocal_244.x = 0f;
	vLocal_244.y = 10f;
	unk_0x34A51926277F67BC(iLocal_52, 2);
	unk_0x28F648743D7DE312(iLocal_52, 13, true);
	unk_0x28F648743D7DE312(iLocal_52, 2, true);
	unk_0x28F648743D7DE312(iLocal_52, 1, true);
	unk_0x28F648743D7DE312(iLocal_52, 11, false);
	unk_0x1E0350F1D7702D6A(iLocal_52, 0);
	unk_0x34A51926277F67BC(iLocal_53, 3);
	unk_0x28F648743D7DE312(iLocal_53, 17, true);
	unk_0x28F648743D7DE312(iLocal_53, 6, true);
	unk_0x28F648743D7DE312(iLocal_53, 1, true);
	unk_0x28F648743D7DE312(iLocal_53, 11, false);
	unk_0x33F6BE48E356DA27(iLocal_53, 128, true);
	unk_0x33F6BE48E356DA27(iLocal_53, 1, false);
	unk_0x9315FCF6CFE2AB41("RE_ARREST_COP", &iLocal_65);
	unk_0x9315FCF6CFE2AB41("RE_ARREST_CRIM", &iLocal_66);
	unk_0x0648A75D3F60E864(iLocal_52, iLocal_65);
	unk_0x0648A75D3F60E864(iLocal_53, iLocal_66);
	unk_0xD2E80177F27FD43F(4, iLocal_66, iLocal_65);
	unk_0xD2E80177F27FD43F(3, iLocal_65, 1862763509);
	unk_0xD2E80177F27FD43F(3, iLocal_66, 1862763509);
	unk_0xD2E80177F27FD43F(4, iLocal_66, -1533126372);
	unk_0x5464B9731013E08C(iLocal_52, sLocal_249);
	unk_0x5464B9731013E08C(iLocal_53, sLocal_248);
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_110()
{
	if (!func_100(5))
	{
		return 1;
	}
	if (func_119())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_118())
		{
			return 0;
		}
	}
	if (func_111(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_111(float fParam0, bool bParam1)
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
		if (func_53(func_51()))
		{
			iVar5 = func_117();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_112(iVar1, &Var0);
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

void func_112(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_113(uParam1, "Abigail1", func_115(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 1:
			func_113(uParam1, "Abigail2", func_115(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 2:
			func_113(uParam1, "Barry1", func_115(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 3:
			func_113(uParam1, "Barry2", func_115(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 4:
			func_113(uParam1, "Barry3", func_115(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 5:
			func_113(uParam1, "Barry3A", func_115(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 6:
			func_113(uParam1, "Barry3C", func_115(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 7:
			func_113(uParam1, "Barry4", func_115(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_114(iParam0), 0, 0);
			break;
		
		case 8:
			func_113(uParam1, "Dreyfuss1", func_115(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 9:
			func_113(uParam1, "Epsilon1", func_115(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 10:
			func_113(uParam1, "Epsilon2", func_115(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 11:
			func_113(uParam1, "Epsilon3", func_115(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 12:
			func_113(uParam1, "Epsilon4", func_115(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 13:
			func_113(uParam1, "Epsilon5", func_115(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 14:
			func_113(uParam1, "Epsilon6", func_115(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 15:
			func_113(uParam1, "Epsilon7", func_115(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 16:
			func_113(uParam1, "Epsilon8", func_115(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 17:
			func_113(uParam1, "Extreme1", func_115(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 18:
			func_113(uParam1, "Extreme2", func_115(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 19:
			func_113(uParam1, "Extreme3", func_115(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 20:
			func_113(uParam1, "Extreme4", func_115(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 21:
			func_113(uParam1, "Fanatic1", func_115(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_114(iParam0), 1, 0);
			break;
		
		case 22:
			func_113(uParam1, "Fanatic2", func_115(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_114(iParam0), 1, 0);
			break;
		
		case 23:
			func_113(uParam1, "Fanatic3", func_115(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_114(iParam0), 0, 1);
			break;
		
		case 24:
			func_113(uParam1, "Hao1", func_115(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_114(iParam0), 0, 1);
			break;
		
		case 25:
			func_113(uParam1, "Hunting1", func_115(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 26:
			func_113(uParam1, "Hunting2", func_115(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 27:
			func_113(uParam1, "Josh1", func_115(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 28:
			func_113(uParam1, "Josh2", func_115(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 29:
			func_113(uParam1, "Josh3", func_115(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 30:
			func_113(uParam1, "Josh4", func_115(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 31:
			func_113(uParam1, "Maude1", func_115(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 32:
			func_113(uParam1, "Minute1", func_115(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 33:
			func_113(uParam1, "Minute2", func_115(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 34:
			func_113(uParam1, "Minute3", func_115(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 35:
			func_113(uParam1, "MrsPhilips1", func_115(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 36:
			func_113(uParam1, "MrsPhilips2", func_115(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 37:
			func_113(uParam1, "Nigel1", func_115(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 38:
			func_113(uParam1, "Nigel1A", func_115(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 39:
			func_113(uParam1, "Nigel1B", func_115(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 40:
			func_113(uParam1, "Nigel1C", func_115(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 41:
			func_113(uParam1, "Nigel1D", func_115(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 42:
			func_113(uParam1, "Nigel2", func_115(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 43:
			func_113(uParam1, "Nigel3", func_115(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 44:
			func_113(uParam1, "Omega1", func_115(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 45:
			func_113(uParam1, "Omega2", func_115(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 46:
			func_113(uParam1, "Paparazzo1", func_115(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 47:
			func_113(uParam1, "Paparazzo2", func_115(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 48:
			func_113(uParam1, "Paparazzo3", func_115(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 49:
			func_113(uParam1, "Paparazzo3A", func_115(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 50:
			func_113(uParam1, "Paparazzo3B", func_115(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 51:
			func_113(uParam1, "Paparazzo4", func_115(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 52:
			func_113(uParam1, "Rampage1", func_115(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 54:
			func_113(uParam1, "Rampage3", func_115(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 55:
			func_113(uParam1, "Rampage4", func_115(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 56:
			func_113(uParam1, "Rampage5", func_115(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 53:
			func_113(uParam1, "Rampage2", func_115(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 57:
			func_113(uParam1, "TheLastOne", func_115(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 58:
			func_113(uParam1, "Tonya1", func_115(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 59:
			func_113(uParam1, "Tonya2", func_115(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 60:
			func_113(uParam1, "Tonya3", func_115(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 61:
			func_113(uParam1, "Tonya4", func_115(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 62:
			func_113(uParam1, "Tonya5", func_115(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_113(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_114(int iParam0)
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

struct<2> func_115(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_116(iParam0) };
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

struct<2> func_116(int iParam0)
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

int func_117()
{
	func_52();
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

int func_118()
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

int func_119()
{
	if (func_122() && !func_118())
	{
		return 1;
	}
	if (func_121() && func_120())
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return Global_106283 > 0;
}

int func_121()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_123()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_118())
		{
			return 0;
		}
	}
	if (func_119())
	{
		return 1;
	}
	if (func_111(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_127();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_126(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_125();
}

void func_125()
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

void func_126(int iParam0)
{
	Global_106554 = iParam0;
}

int func_127()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_128(Var0);
	return uVar1;
}

int func_128(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_129(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_127();
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
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_118())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_170(0))
		{
			return 0;
		}
		if (func_119())
		{
			return 0;
		}
		if (func_169())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_53(func_51()))
		{
			if (func_111(100f, 1) != -1)
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
		if (!func_168(iParam1))
		{
			return 0;
		}
		if (func_53(func_51()))
		{
			if (func_167(func_51()) == 4 || func_167(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_53(func_51()))
		{
			if (!func_166(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_165(Global_106565.f_24989.f_43[iParam1]))
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
		if (func_164())
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
		if (!func_155(4))
		{
			return 0;
		}
		if (!func_100(5))
		{
			return 0;
		}
		if (func_154(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_154(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_168(30) && !func_154(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_53(func_51()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_153(iVar4))
				{
					if (func_131(iVar2))
					{
						if (!func_130(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_51() != iVar2)
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

bool func_130(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_132(iVar0);
}

int func_132(int iParam0)
{
	return func_133(iParam0, 1);
}

int func_133(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_153(iParam0))
	{
		return 0;
	}
	func_134(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_135(func_146(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_145(iParam0, iParam1))
	{
		iVar0 = func_144(iParam1);
		iVar1 = func_142(iParam0);
		iVar2 = (func_142(iParam0) - func_142(iParam1));
		iVar3 = (func_144(iParam0) - func_144(iParam1));
		iVar4 = (func_141(iParam0) - func_141(iParam1));
		iVar5 = (func_140(iParam0) - func_140(iParam1));
		iVar6 = (func_139(iParam0) - func_139(iParam1));
		iVar7 = (func_138(iParam0) - func_138(iParam1));
	}
	else
	{
		iVar0 = func_144(iParam0);
		iVar1 = func_142(iParam1);
		iVar2 = (func_142(iParam1) - func_142(iParam0));
		iVar3 = (func_144(iParam1) - func_144(iParam0));
		iVar4 = (func_141(iParam1) - func_141(iParam0));
		iVar5 = (func_140(iParam1) - func_140(iParam0));
		iVar6 = (func_139(iParam1) - func_139(iParam0));
		iVar7 = (func_138(iParam1) - func_138(iParam0));
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
		iVar4 = (iVar4 + func_137(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_136(to_float(iVar0 + 1), 0f, 12f));
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

float func_136(float fParam0, float fParam1, float fParam2)
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

int func_137(int iParam0, int iParam1)
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

int func_138(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_140(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_141(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_142(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_143(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_143(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_144(int iParam0)
{
	return iParam0 & 15;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_153(iParam1) || !func_153(iParam0))
	{
		return 1;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	var uVar0;
	
	func_152(&uVar0, unk_0xE6A7CE90720B9037());
	func_151(&uVar0, unk_0x7EA67BD818402745());
	func_150(&uVar0, unk_0x13348E86D5B8A052());
	func_149(&uVar0, unk_0x020A28FAE1C09250());
	func_148(&uVar0, unk_0x2C02CAA9C4127339());
	func_147(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_147(var uParam0, int iParam1)
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

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_144(*uParam0);
	iVar1 = func_142(*uParam0);
	if (iParam1 < 1 || iParam1 > func_137(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_153(int iParam0)
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
	iVar0 = func_138(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_139(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_140(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_142(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_144(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_141(iParam0);
	if (iVar5 < 1 || iVar5 > func_137(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_51();
				if (!func_53(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_163()) || Global_105612) || Global_25767) || func_162()) || func_82(8, -1)) || func_161()) || func_160()) || func_159()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_163()) || Global_25767) || func_162()) || func_82(8, -1)) || func_159()) || func_161()) || func_160()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_163()) || Global_105612) || Global_25767) || func_162()) || func_82(8, -1)) || func_159()) || func_161()) || func_160()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_163()) || Global_105612) || Global_25767) || func_162()) || func_82(8, -1)) || func_161()) || func_160()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_163() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_82(8, -1)) || func_158()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_161()) || func_160()) || func_157()) || func_156())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_163()) || Global_25767) || func_162()) || func_82(8, -1)) || func_160()) || func_159()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_163()) || func_160()) || Global_105612) || Global_25767) || func_162()) || Global_37584) || func_82(8, -1)) || func_159()) || func_157()) || func_158()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_163()) || Global_105612) || Global_25767) || func_162()) || func_82(8, -1)) || func_159()) || func_157()) || func_161()) || func_160()) || func_158())
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

var func_156()
{
	return Global_93721.f_1;
}

int func_157()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_158()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_159()
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

bool func_160()
{
	return Global_93734.f_340 > 0;
}

bool func_161()
{
	return Global_93734.f_339 > 0;
}

var func_162()
{
	return Global_1312867;
}

int func_163()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_164()
{
	func_80();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_165(int iParam0)
{
	return func_145(func_146(), iParam0);
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_167(int iParam0)
{
	if (!func_53(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_168(int iParam0)
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
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_169()
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

bool func_170(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_171()
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

void func_172()
{
	if (unk_0x40AC0B9EFCB6A65B())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_201(6);
				func_186();
				break;
			
			case 3:
				func_201(5);
				func_186();
				break;
		}
		if (unk_0x765F6FEEFF39224F(iLocal_53))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_53) && !unk_0xD62C4419A41F106A(iLocal_53, 0))
			{
				unk_0xD62C4419A41F106A(iLocal_52, 0);
				if (unk_0x765F6FEEFF39224F(iLocal_52))
				{
					unk_0x6DA4DBA91F234052(iLocal_53, unk_0xFBB1F99A825CAB09(iLocal_52, true), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0x6DA4DBA91F234052(iLocal_53, unk_0xFBB1F99A825CAB09(iLocal_53, true), 9000f, -1, 0, 0);
				}
				unk_0x4A852F02088ECC9D(iLocal_53, false);
				unk_0x897EF720254BBEA3(iLocal_53, true);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_52))
			{
				unk_0x897EF720254BBEA3(iLocal_52, true);
				unk_0x4A852F02088ECC9D(iLocal_52, false);
				unk_0xBBB04DF002BAB732(iLocal_52, 1);
				unk_0xF0BE7CB40DE62A2F(iLocal_52, true);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_54))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_54))
			{
				if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					func_64();
				}
				unk_0x4A852F02088ECC9D(iLocal_54, false);
				unk_0xBBB04DF002BAB732(iLocal_54, 1);
			}
		}
		if (func_185())
		{
			unk_0x4B06B5746CBEC99F(1f);
			unk_0xD2E80177F27FD43F(2, iLocal_66, iLocal_65);
			unk_0xD2E80177F27FD43F(2, iLocal_65, iLocal_66);
		}
		if (iLocal_71)
		{
			unk_0x3F6A41F0B145E78C(1);
		}
	}
	unk_0x78713C03966ED44F(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_275)
	{
		unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 3, 0);
		unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
	}
	func_173(-1);
	wait(0);
	unk_0x5894DC159447E10A();
}

void func_173(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_127();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_185())
	{
		func_178(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_177(30000);
		StringCopy(&cVar0, func_176(Global_106554, 1), 64);
		if (func_175(Global_106554) > 0)
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
	func_174(&Global_25824);
	Global_106555 = 0;
	func_126(-1);
}

void func_174(var uParam0)
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

int func_175(int iParam0)
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

char* func_176(int iParam0, bool bParam1)
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

void func_177(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_178(int iParam0)
{
	func_179(iParam0, 0, func_184(iParam0));
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_146();
	func_182(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_181(iParam0, &uVar0);
	Var1 = { func_180(&uVar0) };
}

struct<16> func_180(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_141(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_144(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_142(*uParam0), 64);
	return Var0;
}

void func_181(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_142(*uParam0);
	iVar1 = func_144(*uParam0);
	iVar2 = func_141(*uParam0);
	iVar3 = func_140(*uParam0);
	iVar4 = func_139(*uParam0);
	iVar5 = func_138(*uParam0);
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
	iVar6 = func_137(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_137(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_183(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_152(uParam0, iParam1);
	func_151(uParam0, iParam2);
	func_150(uParam0, iParam3);
	func_148(uParam0, iParam5);
	func_149(uParam0, iParam4);
	func_147(uParam0, iParam6);
}

int func_184(int iParam0)
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

int func_185()
{
	if ((Global_106554 == func_127() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_186()
{
	if (!bLocal_70)
	{
		func_200();
	}
	func_189(15, iLocal_51);
	func_187();
}

void func_187()
{
	func_188();
}

int func_188()
{
	if (func_170(0))
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

void func_189(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_127();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_175(iParam0))
	{
		func_199(iParam0, iParam1);
		if (!func_198(51))
		{
			func_195("RE_REWARD", 1, 0, 4000, 10000, func_117(), 0, 138, 0);
			func_194(51);
		}
		if (func_96(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_193(iParam0, iParam1) != 322)
		{
			func_190(func_193(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_201(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_201(7);
			}
			else
			{
				func_201(1);
			}
		}
	}
}

void func_190(int iParam0, var uParam1, var uParam2)
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
		func_25((891 + iParam0), 1, -1, 1);
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
		func_191();
	}
}

void func_191()
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
		func_47(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_192() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_188();
				}
			}
		}
	}
}

int func_192()
{
	return Global_25765;
}

int func_193(int iParam0, int iParam1)
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

void func_194(int iParam0)
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

void func_195(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_196(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_196(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_197();
	}
}

void func_197()
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

int func_198(int iParam0)
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

void func_199(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_200()
{
	return 1;
}

void func_201(int iParam0)
{
	Global_106551 = iParam0;
}

void func_202()
{
	if (!bLocal_68 && iLocal_49 == 0)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_52) && !unk_0xBC2FC12AD0FBF72E(iLocal_53))
		{
			unk_0x2A25AECBD792A364(iLocal_52, unk_0xFBB1F99A825CAB09(iLocal_53, true), 3f, 20000, 1193033728, 1056964608);
			unk_0x897EF720254BBEA3(iLocal_52, true);
			wait(0);
		}
	}
}

