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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	var uLocal_79 = 1;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<170> Local_247 = { 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<2> Local_260 = { 0, 5 } ;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 5;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	vLocal_56 = { ScriptParam_260.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x9EC5BDC006623C42(114))
	{
		func_161(1);
	}
	iLocal_53 = unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A());
	iLocal_59 = 0;
	func_159(&Global_105216, 0);
	func_153();
	unk_0x1F0C49658F7E2AE1(1);
	if (func_152(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_32193)
	{
		wait(0);
	}
	if (!func_152(uLocal_58, 8))
	{
		if (!func_150(iLocal_64))
		{
			if (func_149(0, iLocal_63))
			{
				func_161(0);
			}
			else
			{
				func_161(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_149(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_152(uLocal_58, 8388608))
	{
		func_161(1);
	}
	if (func_152(uLocal_58, 524288) && (func_148() && !func_147()))
	{
		func_161(1);
	}
	if (unk_0x1BCDA92AD0A7835B(unk_0x535C9C52117DA0AD()) > 1 && !func_152(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_146(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_145(10);
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_54))
	{
		if (func_144() && !Global_105612)
		{
			func_143(1);
		}
		else if (Global_105612)
		{
		}
	}
	while (true)
	{
		if (Global_3)
		{
			func_161(1);
		}
		iLocal_53 = unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A());
		if (func_152(uLocal_58, 1048576))
		{
			if (unk_0xD62C4419A41F106A(iLocal_53, 0))
			{
				func_161(1);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_53) && !unk_0xD62C4419A41F106A(iLocal_53, 0))
		{
			vLocal_55 = { unk_0xFBB1F99A825CAB09(iLocal_53, true) };
			fLocal_57 = vdist2(vLocal_55, ScriptParam_260.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_260.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_150(iLocal_64) || (func_152(uLocal_58, 16) && !func_152(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_138();
						func_145(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_146(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_145(10);
						}
						if ((vLocal_55.z - ScriptParam_260.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_136())
					{
						iLocal_67 = iLocal_67;
						func_145(3);
					}
					else
					{
						func_138();
					}
					break;
				
				case 3:
					if (unk_0x295BEA3FE13E5C3D())
					{
						func_161(1);
						return;
					}
					if (!func_150(iLocal_64))
					{
						if (!func_152(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0xCE3CFF625BEBAA04(&(Global_93682.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_161(0);
								break;
							}
						}
					}
					if (!func_152(uLocal_58, 4))
					{
						func_134();
						func_133(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_93716)
					{
						if (iLocal_69 != 263)
						{
							if (func_132(6) && !func_131(iLocal_69))
							{
							}
							else
							{
								func_146(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_145(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_152(uLocal_58, 64);
						func_159(&uLocal_58, 128);
						if (!func_130(3) && !Global_93716)
						{
							if (func_152(uLocal_58, 2097152))
							{
								if ((!func_152(uLocal_58, 1) || !unk_0x765F6FEEFF39224F(func_129())) && !Global_93716)
								{
									func_145(10);
									break;
								}
							}
						}
						if (func_152(uLocal_58, 524288) && (func_148() && !func_147()))
						{
							func_161(1);
						}
						if (func_128())
						{
							func_161(1);
						}
						if ((!func_120(6) || Global_105612) || func_119())
						{
							bVar2 = false;
						}
						if (!bLocal_78)
						{
							func_117(&uLocal_58, 128);
							bVar2 = false;
						}
						if (func_152(uLocal_58, 1))
						{
							if (!func_116())
							{
								func_117(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_115(1))
						{
							bVar2 = false;
						}
						if (Global_71590)
						{
							bVar2 = false;
						}
						if (func_114())
						{
							bVar2 = false;
						}
						if (unk_0x71EC91BA8C88BCE0())
						{
							bVar2 = false;
						}
						if (func_113() || func_112(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
						{
							bVar2 = false;
						}
						if (func_111(0) || func_110())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0xD62C4419A41F106A(iLocal_54, 0))
							{
								func_117(&uLocal_58, 128);
								bVar2 = false;
							}
							else if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
							{
								func_117(&uLocal_58, 128);
								bVar2 = false;
							}
							else
							{
								iVar3 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
								if (bVar2)
								{
									if (iLocal_54 == iVar3)
									{
									}
									else
									{
										func_117(&uLocal_58, 128);
										bVar2 = false;
									}
								}
							}
							if (bVar2)
							{
								unk_0x144904D2EAA84341(0, 51);
								if (func_109(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_108(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_117(&uLocal_58, 2048);
									}
									else if (!func_152(uLocal_58, 2048) || !unk_0xFAC8F20FBC764F4D())
									{
										func_107(&iLocal_60);
										func_159(&uLocal_58, 2048);
									}
									if (func_105(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_107(&iLocal_60);
										func_159(&uLocal_58, 2048);
										unk_0x8F59DE352CFE248B(&Local_52);
										unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 56);
										func_145(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_107(&iLocal_60);
									func_159(&uLocal_58, 2048);
									unk_0x8F59DE352CFE248B(&Local_52);
									func_145(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_107(&iLocal_60);
								func_159(&uLocal_58, 2048);
								unk_0xEDF90B96BED57BCE(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x144904D2EAA84341(0, 51);
					if (unk_0x07AB0925A06BD5AD(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_107(&iLocal_60);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_152(uLocal_58, 1))
						{
							if (func_132(6) || func_132(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_47(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
							{
								unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
							}
							func_46();
							if (Global_37584)
							{
								func_37(unk_0x33CD235DF1E6A94E());
							}
							iLocal_50 = func_27();
							func_159(&uLocal_58, 4);
							func_26();
							func_117(&uLocal_58, 2);
							func_145(6);
							func_22(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_21(iLocal_63);
								func_18(func_20(iLocal_63), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_15();
						}
						else if (iVar4 == 0)
						{
							func_145(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_152(Global_105216, 262144))
					{
						func_159(&Global_105216, 262144);
						func_14();
					}
					if (func_152(uLocal_58, 2097152))
					{
						if (!func_130(3) && !unk_0x8ED4328770BEE4A1(iLocal_50))
						{
							func_145(10);
						}
					}
					if (!unk_0x8ED4328770BEE4A1(iLocal_50))
					{
						unk_0x198BCB9897710EAB(round((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_159(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_159(&uLocal_58, 2);
						}
						else if (func_152(uLocal_58, 2))
						{
							if (func_152(Global_105216, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_159(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_159(&uLocal_58, 2);
							}
						}
						func_145(0);
						if (iLocal_63 != -1)
						{
							if (func_152(Global_105216, 0))
							{
								unk_0x4F729C0B5CCB6FEE(func_20(iLocal_63), 0, Global_93719, 0);
								func_6(func_20(iLocal_63), 0, Global_93719, 1, 0);
							}
							else
							{
								unk_0x4F729C0B5CCB6FEE(func_20(iLocal_63), 0, Global_93719, 0);
								func_6(func_20(iLocal_63), 0, Global_93719, 0, 0);
							}
						}
						func_5();
						func_159(&Global_105216, 0);
						if (func_152(uLocal_58, 16777216))
						{
							func_161(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_106565.f_9079)
							{
								if (!func_149(0, iLocal_63))
								{
									func_161(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_145(0);
					break;
				
				case 10:
					func_161(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_146(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_145(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_146(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_107(&iLocal_60);
					}
					if (!unk_0x786AF4A44E1B5B4B(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0xEDF90B96BED57BCE(1);
						}
					}
					func_145(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_150(iLocal_64) && func_149(0, iLocal_63))
									{
										func_153();
										if (iLocal_69 != 263)
										{
											func_146(iLocal_69, 1, 0);
										}
										func_145(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_146(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_145(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_153();
									if (iLocal_69 != 263)
									{
										func_146(iLocal_69, 1, 0);
									}
									func_145(0);
								}
							}
						}
						else
						{
							func_146(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_2()
{
	func_3(&uLocal_79);
	unk_0x65F544B458249682(&Local_247);
	unk_0x1F45B4626AC4A4C0(&(Local_247.f_3));
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x71CA80D41E1338B4((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (iLocal_81 == 0)
	{
		unk_0x458484959AA7E2D0();
	}
	unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x786AF4A44E1B5B4B(&Global_90782))
	{
		return;
	}
	if (unk_0xF75A0E8805B9AE6F(sParam0, &Global_90782, 0, -1) != 0)
	{
		return;
	}
	unk_0x6B5B900B02D42C0F(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87889);
	StringCopy(&Global_90782, "", 64);
}

void func_7(int iParam0)
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

void func_8()
{
	vector3 vVar0[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		unk_0x0A919F27746977BF(StackVal, 0, 0, 0);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x7EB82D55AB02865C(0, &cVar0);
	}
}

void func_9(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
	func_16(&iLocal_252, Local_247);
}

void func_16(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x117DAF3BF7232886(*iParam0) && unk_0x49D25022440E65EE(*iParam0))
	{
		vVar2 = { unk_0xB29314FDACFD865E(*iParam0) };
		vVar0 = { unk_0xF165F9F874811603(*iParam0, 2) };
		if (unk_0x91D5C8283D19AF49(iParam1, 0))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
		}
		fVar3 = unk_0xB92C3C556226E8F9((vVar1.z - vVar2.z), unk_0x16E00F066AFFEA0D(vVar1, vVar2, false));
		if (fVar3 > vVar0.x)
		{
			vVar0.x = func_17(vVar0.x, fVar3, 0.07f);
		}
		unk_0x833A05A7AD82EA44(*iParam0, vVar0, 2);
	}
}

float func_17(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x786AF4A44E1B5B4B(&Global_90782))
	{
		unk_0x6B5B900B02D42C0F(&Global_90782, 0, 0, 0, 1, 0);
		StringCopy(&Global_90782, "", 64);
	}
	StringCopy(&Global_90782, sParam0, 64);
	unk_0x708AAA79D977B46E(sParam0, iParam1, iParam2, func_19(0));
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_21(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		uVar0 = iParam0;
		unk_0x0A919F27746977BF(8, &uVar0, 1, 1);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x7EB82D55AB02865C(8, &cVar1);
	}
}

void func_22(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_25(iParam0);
	}
	else
	{
		func_23(iParam0);
	}
}

void func_23(int iParam0)
{
	func_24(iParam0, 0f);
}

void func_24(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_11(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_25(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
}

void func_26()
{
	if (unk_0x765F6FEEFF39224F(Local_247) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
	}
	if (unk_0x49D25022440E65EE(iLocal_252))
	{
		unk_0x189377BFBDC9127F(iLocal_252, false);
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		unk_0x2F8A4DF7D0DFF0A8(iLocal_252, 0);
	}
	func_2();
}

int func_27()
{
	int iVar0;
	
	Global_106565.f_18961 = iLocal_81;
	switch (iLocal_81)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 9:
		case 10:
		case 11:
			func_36();
			break;
		
		case 7:
			func_36();
			func_28(65, 0, 1, 1, 0);
			func_28(66, 0, 1, 1, 0);
			break;
		
		default:
			break;
	}
	iVar0 = start_new_script_with_args(&Local_51, &Local_247, 170, iLocal_61);
	unk_0x841080481716E87C(&Local_51);
	return iVar0;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71590)
		{
			Global_2437364.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106565.f_7255.f_227[iParam0] = iParam1;
		}
		Global_33392[iParam0] = iParam2;
		Global_33591[iParam0] = 1;
		func_31(iParam0, bParam3, iParam4, 0);
		func_29(iParam0, iParam1);
	}
}

void func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x5F70D43CDB987564("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x5F70D43CDB987564("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x71CD86755B8F5322("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x71CD86755B8F5322("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_30(0, 0);
			}
			else
			{
				func_30(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x5F70D43CDB987564("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x5F70D43CDB987564("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x5DED13D62A972414("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_105203, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_105203, iParam0);
	}
	Global_105202 = 1;
}

bool func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1647687 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_35(&Var3, iParam0);
	if (func_32())
	{
		iVar1 = Global_106565.f_7255.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437364.f_75.f_227[iParam0];
	}
	iVar2 = Global_33790[iParam0];
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !bParam3)
	{
		Global_1647687 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) != unk_0x36163153849DFDA1("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33392[iParam0] && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1647687 = 1;
				}
				if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || unk_0xA7772238DA986E33(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBB5E373390A5F824())
					{
						bVar5 = false;
						Global_1647687 = 1;
					}
				}
			}
		}
		if (unk_0xE980BAFD70E8A4B3() && (!unk_0x71EC91BA8C88BCE0() || unk_0x469BF85808505E83() != 5))
		{
			bVar5 = false;
			Global_1647687 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x1BFBC1E2615E22FC(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x17D569F7C0516CDF(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34986[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[1 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[2 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[0 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0x7E3B06742E797067(&(Var3.f_34));
								Global_1647687 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_34));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_34));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES"))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34787[iParam0] = 1;
					Global_34986[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x30B9FCF52BAAEB11(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_50)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_50)))
							{
								unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES"))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x7749193AF003DC67(iVar6);
						}
					}
					Global_34986[iParam0] = 1;
					Global_34787[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x16E00F066AFFEA0D(Var3, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), true) < 250f)
					{
						uVar4 = unk_0x4ACCC545ABA180AC(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xC0832B9258378F00(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xED0F188B4F015CBB(uVar4, 3);
								Global_34986[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x59AECBDFE1CC0576(uVar4) != 6 && unk_0x59AECBDFE1CC0576(uVar4) != 7) && unk_0x59AECBDFE1CC0576(uVar4) != 8)
								{
									unk_0xED0F188B4F015CBB(uVar4, 10);
									Global_34986[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x85F91F38AF4DED49(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xCE689A8E8C42ED78(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x6A71A9A295C36777(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x8950ED5730F62EE8(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33591[iParam0] = 0;
				Global_33790[iParam0] = iVar1;
				if (!func_32())
				{
					if (!Global_34387[iParam0])
					{
						Global_34387[iParam0] = 1;
						Global_34586++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_32()
{
	if ((func_34() == -1 || func_34() == 999) && !func_33() == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	return Global_25766;
}

int func_34()
{
	return Global_25765;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_36()
{
	unk_0x7EDEAEAED85BEE4F(3000);
	func_16(&iLocal_252, Local_247);
	while (unk_0x75A50A9E5219C397())
	{
		wait(0);
		func_16(&iLocal_252, Local_247);
	}
	if (unk_0x91D5C8283D19AF49(Local_247, 0))
	{
		unk_0xD303E20CB0AE4AD0(Local_247, 1);
	}
}

void func_37(int iParam0)
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
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
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

int func_39(int iParam0)
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

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()
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

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
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

int func_45(int iParam0)
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

void func_46()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 25);
	unk_0x8950ED5730F62EE8(&Global_2424, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_49(0))
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
		if (!func_150(iParam2))
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
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
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

int func_49(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	func_51();
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return;
	}
	fVar7 = func_103(func_104(iLocal_81) == joaat("maverick"), 0.45f, 0.3f);
	iVar2 = unk_0x8918EC905FC8975D();
	if (unk_0x765F6FEEFF39224F(iVar2) && iVar2 != iLocal_54)
	{
		Local_247.f_1 = iVar2;
	}
	if (!iLocal_249)
	{
		func_134();
		wait(0);
		return;
	}
	if (func_100(Local_247.f_3, Local_247, 1, 1, 1, 1, 0) || unk_0x71EC91BA8C88BCE0())
	{
		func_143(0);
		iLocal_249 = 0;
		if (unk_0x765F6FEEFF39224F(Local_247.f_3) && !unk_0xBC2FC12AD0FBF72E(Local_247.f_3))
		{
			if (unk_0x91D5C8283D19AF49(Local_247, 0) && unk_0x10930B9CAD4111C2(Local_247.f_3, Local_247, 0))
			{
				unk_0x6ED1018181C54CFB(Local_247.f_3, Local_247, unk_0xFBB1F99A825CAB09(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xB969B7304D29679F(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x629D2D6C17B9B5E2(Local_247), 262144, 50f, 50f, 1);
			}
			else
			{
				unk_0xECCD4FDA45197F97(Local_247.f_3, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
			}
			unk_0x897EF720254BBEA3(Local_247.f_3, true);
			unk_0x5FEE418CE11E6DDE(Local_247.f_3, 251, false);
			unk_0x5FEE418CE11E6DDE(Local_247.f_3, 255, false);
			Local_247.f_3 = 0;
		}
		if (unk_0x765F6FEEFF39224F(Local_247))
		{
			unk_0x65F544B458249682(&Local_247);
			Local_247 = 0;
		}
		if (func_1("PLAY_BASEJUMP_S"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return;
	}
	fVar6 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), func_99(iLocal_81));
	if (fVar6 < 11664f)
	{
		if (!iLocal_251)
		{
			unk_0xB815670C37E03CDE(func_98(iLocal_81));
			iLocal_251 = 1;
		}
	}
	else if (fVar6 > 13924f)
	{
		if (iLocal_251)
		{
			unk_0x71CA80D41E1338B4(func_98(iLocal_81));
			iLocal_251 = 0;
		}
	}
	if (fVar6 < 10000f)
	{
		if (!unk_0x765F6FEEFF39224F(Local_247.f_3))
		{
			if ((unk_0x5D98D654CDC2165A(func_98(iLocal_81)) && unk_0x765F6FEEFF39224F(Local_247)) && unk_0x91D5C8283D19AF49(Local_247, 0))
			{
				Local_247.f_3 = unk_0xE196503B36B6194B(Local_247, 4, func_98(iLocal_81), -1, 1, true);
				if (!unk_0xBC2FC12AD0FBF72E(Local_247.f_3))
				{
					unk_0x2B4A2E9ED65D5C93(Local_247.f_3, 0);
					func_97(Local_247.f_3, iLocal_81);
					func_96();
					unk_0x5464B9731013E08C(Local_247.f_3, func_95(iLocal_81));
					func_93(&uLocal_82, 0, Local_247.f_3, func_94(iLocal_81), 1, 1);
					unk_0x7D575FC8F42508D8(Local_247.f_3, -1);
					unk_0x5FEE418CE11E6DDE(Local_247.f_3, 251, true);
					unk_0x5FEE418CE11E6DDE(Local_247.f_3, 255, true);
				}
				unk_0x9FABD0AB045A5D6E(Local_247, true, true, 0);
				unk_0x6E15F06772C40AC4(Local_247, fVar7);
			}
		}
		else
		{
			unk_0x0D21E1FDE062ED99(Local_247.f_3, true, 0);
			if (!unk_0x117DAF3BF7232886(iLocal_252) || !unk_0xFAA5C555ED0CEC9B(iLocal_252))
			{
				unk_0x6E15F06772C40AC4(Local_247, fVar7);
			}
			if (!unk_0x0E4018692D92041D(Local_247.f_169, 0))
			{
				if (unk_0x73DA1542B2F0C458())
				{
					if (!unk_0xBC2FC12AD0FBF72E(Local_247.f_3) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(Local_247.f_3, true)) < 400f)
						{
							func_77(&uLocal_82, "OJBJAUD", func_91(iLocal_81), 8, 0, 0, 0);
							unk_0xC4A347124F39D998(Local_247.f_3, unk_0x33CD235DF1E6A94E(), 6000, 0, 2);
							unk_0x8950ED5730F62EE8(&(Local_247.f_169), 0);
						}
					}
				}
			}
		}
	}
	else if (fVar6 > 12100f)
	{
		if (unk_0x765F6FEEFF39224F(Local_247.f_3))
		{
			iVar3 = Local_247.f_3;
			unk_0x897EF720254BBEA3(iVar3, true);
			if (!unk_0x3F219400E5FE4B69(iVar3))
			{
				unk_0x0D21E1FDE062ED99(iVar3, true, 0);
				unk_0x4B8B69DAE5BAC592(&iVar3);
			}
			else
			{
				unk_0x1F45B4626AC4A4C0(&iVar3);
			}
		}
	}
	func_16(&iLocal_252, Local_247);
	if ((unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_247, 1) && !unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E())) && func_75(Local_247.f_3, Local_247))
	{
		vVar5 = { unk_0x16068053F8800179(Local_247, unk_0x61B226C460A8FCC2(unk_0x33CD235DF1E6A94E(), 0, 0f, 0f, 0f)) };
		if (vVar5.x < 0f || vVar5.y < 1f)
		{
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
			unk_0xE3040995362DF6F7(Local_247, "OFF");
			func_159(&uLocal_58, 64);
			bVar8 = true;
			if (iLocal_250)
			{
				if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				iLocal_250 = 0;
			}
			if (!unk_0x117DAF3BF7232886(iLocal_252))
			{
				func_64(0, 0, 1);
				func_58(1);
				iLocal_252 = unk_0xB1A92B63D6757EEF(26379945, func_57(iLocal_81), func_56(iLocal_81), func_55(iLocal_81), 0, 2);
				unk_0x189377BFBDC9127F(iLocal_252, true);
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
				unk_0x083F68B89E3EA476(iLocal_252, "HAND_SHAKE", 0.07f);
			}
			if (unk_0x91D5C8283D19AF49(Local_247, 0))
			{
				iVar0 = unk_0xD76D6BCC14B95CE1(Local_247.f_3, -1273030092);
				if (iVar0 != 0 && iVar0 != 1)
				{
					unk_0x5FEE418CE11E6DDE(Local_247.f_3, 134, true);
					func_23(&iVar1);
					while (func_10(&iVar1) < 1f)
					{
						wait(0);
						if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) || unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()))
						{
							func_54(iLocal_69);
							if (unk_0x765F6FEEFF39224F(Local_247.f_3) && !unk_0xBC2FC12AD0FBF72E(Local_247.f_3))
							{
								if (unk_0x91D5C8283D19AF49(Local_247, 0) && unk_0x10930B9CAD4111C2(Local_247.f_3, Local_247, 0))
								{
									unk_0x6ED1018181C54CFB(Local_247.f_3, Local_247, unk_0xFBB1F99A825CAB09(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xB969B7304D29679F(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x629D2D6C17B9B5E2(Local_247), 262144, 50f, 50f, 1);
								}
								else
								{
									unk_0xECCD4FDA45197F97(Local_247.f_3, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
								}
								unk_0x897EF720254BBEA3(Local_247.f_3, true);
								unk_0x5FEE418CE11E6DDE(Local_247.f_3, 251, false);
								unk_0x5FEE418CE11E6DDE(Local_247.f_3, 255, false);
							}
							if (unk_0x765F6FEEFF39224F(Local_247))
							{
								unk_0x65F544B458249682(&Local_247);
							}
							if (func_1("PLAY_BASEJUMP_S"))
							{
								unk_0xEDF90B96BED57BCE(1);
							}
							unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
							return;
						}
						else
						{
							func_16(&iLocal_252, Local_247);
						}
					}
					func_22(&iLocal_253);
					while (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_247, 0) && func_53(&iLocal_253) < 2f)
					{
						wait(0);
					}
					func_9(&iLocal_253);
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_247, 0))
					{
						bVar8 = false;
						unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
						if (unk_0x117DAF3BF7232886(iLocal_252))
						{
							unk_0x2F8A4DF7D0DFF0A8(iLocal_252, 0);
						}
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
						return;
					}
					if (!unk_0xD62C4419A41F106A(Local_247.f_3, 0) && !unk_0xD62C4419A41F106A(Local_247, 0))
					{
						unk_0x99414FB2D30425C1(&iVar4);
						unk_0x7D575FC8F42508D8(0, 500);
						unk_0x6ED1018181C54CFB(0, Local_247, unk_0xFBB1F99A825CAB09(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xB969B7304D29679F(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x629D2D6C17B9B5E2(Local_247), 262144, 50f, 50f, 1);
						unk_0xC734F59A13D39AEF(iVar4);
						unk_0x13A2D602CD10CBAC(Local_247.f_3, iVar4);
						unk_0xA7A57E7757ED035E(&iVar4);
						if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
						{
							unk_0x2B4A2E9ED65D5C93(unk_0x33CD235DF1E6A94E(), 0);
							unk_0x50E893C437D3AC10(unk_0x33CD235DF1E6A94E(), 1);
						}
					}
					func_23(&iVar1);
					while (func_10(&iVar1) < 2f)
					{
						wait(0);
						func_16(&iLocal_252, Local_247);
					}
				}
			}
		}
	}
	if (!bVar8)
	{
		if ((unk_0x91D5C8283D19AF49(Local_247, 0) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(Local_247, true)) < 225f) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if ((!iLocal_250 || (iLocal_81 == 3 && !func_1("PLAY_BASEJUMP_B"))) || (iLocal_81 != 3 && !func_1("PLAY_BASEJUMP_S")))
			{
				if (iLocal_81 == 3)
				{
					if (!Global_68807)
					{
						func_52("PLAY_BASEJUMP_B");
					}
				}
				else if (!Global_68807)
				{
					func_52("PLAY_BASEJUMP_S");
				}
				iLocal_250 = 1;
			}
		}
		else if (iLocal_250)
		{
			if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			iLocal_250 = 0;
		}
		if ((!unk_0xBC2FC12AD0FBF72E(Local_247.f_3) && unk_0xD76D6BCC14B95CE1(Local_247.f_3, -982327190) != 0) && unk_0xD76D6BCC14B95CE1(Local_247.f_3, -982327190) != 1)
		{
			unk_0x7D575FC8F42508D8(Local_247.f_3, -1);
		}
	}
}

void func_52(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

float func_53(int iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_54(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_146(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_107(&iLocal_60);
		iLocal_59 = 9;
	}
}

float func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 46.7708f;
		
		case 1:
			return 30.5578f;
		
		case 2:
			return 31.1151f;
		
		case 3:
			return 43.4229f;
		
		case 7:
			return 48.6851f;
		
		case 9:
			return 46.947f;
		
		case 10:
			return 40.6109f;
		
		case 11:
			return 32.1049f;
			break;
	}
	return 45f;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.5672f, 0f, -15.3269f;
		
		case 1:
			return 1.6743f, 0f, 13.7295f;
		
		case 2:
			return 2.2348f, 0f, 141.3733f;
		
		case 3:
			return 0.7682f, 0f, -154.1293f;
		
		case 7:
			return -1.8117f, 0f, 100.4016f;
		
		case 9:
			return 0.7611f, 0f, -71.8023f;
		
		case 10:
			return 2.3742f, 0f, 86.6743f;
		
		case 11:
			return 0.73f, 0f, 109.0678f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -840.2545f, -1317.986f, 6.1066f;
		
		case 1:
			return 1210.955f, 153.4641f, 81.7073f;
		
		case 2:
			return 2489.731f, 1537.972f, 36.1861f;
		
		case 3:
			return -286.5149f, 6665.522f, 6.9225f;
		
		case 7:
			return -714.035f, 4491.083f, 79.9083f;
		
		case 9:
			return -1396.963f, 4363.597f, 43.1246f;
		
		case 10:
			return 2547.738f, 4967.683f, 46.0189f;
		
		case 11:
			return 1091.145f, -169.1484f, 70.757f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		func_63();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_111(0))
		{
			func_59(0);
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

void func_59(int iParam0)
{
	if (func_62())
	{
		return;
	}
	if (Global_14725)
	{
		func_61(0, 0);
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
	if (!func_60())
	{
		Global_14553.f_1 = 3;
	}
}

int func_60()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_111(0))
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

bool func_62()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_63()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, iParam0);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x87A1F7523B14E2C9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 15f);
	}
	unk_0x6B9BB8BC34DAFFD9(iParam1);
	func_59(0);
	func_66(1, 1, iParam2, 0, 0, 0);
	unk_0xDFF589A2149528CE(false);
	unk_0x35675D19812BDF22(false);
	func_65(23, 1);
}

void func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_26010, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_26010, iParam0);
	}
}

void func_66(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
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
			if (!func_60())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_73(1, iParam3, uParam2, 0);
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
		func_73(0, iParam3, uParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_71(unk_0x95B959F18401C09A())) && !func_68(unk_0x95B959F18401C09A(), 0)) && !func_67()) && !bParam4) && !bParam5)
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

bool func_67()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_69(-1, 0) == 8;
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

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_70();
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

int func_70()
{
	return Global_1312745;
}

int func_71(int iParam0)
{
	if (func_68(iParam0, 0))
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

int func_75(int iParam0, int iParam1)
{
	if (((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x765F6FEEFF39224F(iParam1)) || unk_0xD62C4419A41F106A(iParam0, 0)) || unk_0xD62C4419A41F106A(iParam1, 0))
	{
		return 0;
	}
	if (unk_0x10930B9CAD4111C2(iParam0, iParam1, 0) && func_76(iParam0, iParam1) == -1)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_78(sParam2, iParam3, 0);
}

int func_78(char* sParam0, int iParam1, bool bParam2)
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
					func_89();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_88();
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
				func_82();
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
				if (func_81())
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
			if (func_60())
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
			func_80();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_79();
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
		func_89();
	}
	return 0;
}

void func_79()
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

void func_80()
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

int func_81()
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

void func_82()
{
	if (func_132(14))
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
		Global_14553 = func_83();
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

var func_83()
{
	func_84();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_84()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_87(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_86(unk_0x33CD235DF1E6A94E());
			if (func_85(iVar0) && (!func_132(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_85(Global_106565.f_2357.f_539.f_4321))
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

bool func_85(int iParam0)
{
	return iParam0 < 3;
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)
{
	if (func_85(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_88()
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

void func_89()
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

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_91(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_86(unk_0x33CD235DF1E6A94E()) == true;
	switch (iParam0)
	{
		case 0:
			return func_92(bVar0, "BJ_01F", "BJ_01L");
		
		case 1:
			return func_92(bVar0, "BJ_02F", "BJ_02L");
		
		case 2:
			return func_92(bVar0, "BJ_03F", "BJ_03L");
		
		case 3:
			return func_92(bVar0, "BJ_04FG", "BJ_04L");
		
		case 7:
			return "BJ_08L";
		
		case 9:
			return func_92(bVar0, "BJ_10LF", "BJ_10L");
		
		case 10:
			return func_92(bVar0, "BJ_11LF", "BJ_11L");
		
		case 11:
			return "BJ_12L";
		
		default:
	}
	return "";
}

char* func_92(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_93(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_94(int iParam0)
{
	return "EXT1HELIPILOT";
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EXT1HELIPILOT";
		
		case 1:
			return "EXT1HELIPILOT";
		
		case 2:
			return "EXT1HELIPILOT";
		
		case 3:
			return "EXT1HELIPILOT";
		
		case 7:
			return "BJPilot_Train";
		
		case 9:
			return "EXT1HELIPILOT";
		
		case 10:
			return "EXT1HELIPILOT";
		
		case 11:
			return "BJPilot_Canal";
		
		default:
	}
	return "EXT1HELIPILOT";
}

void func_96()
{
	iLocal_46++;
}

void func_97(int iParam0, int iParam1)
{
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0x93AA93DA1B137032(iParam0, 0, 0, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 2, 1, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 8, 1, 0, 0);
			unk_0x73D993BCA1CEC58D(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0x93AA93DA1B137032(iParam0, 0, 1, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 2, 2, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 1, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 2, 0);
			unk_0x73D993BCA1CEC58D(iParam0, 0, 1, 2, false);
			unk_0x73D993BCA1CEC58D(iParam0, 1, 1, 0, false);
			break;
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

Vector3 func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_100(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (((!unk_0x765F6FEEFF39224F(iParam1) || unk_0xD62C4419A41F106A(iParam1, 0)) || !unk_0x91D5C8283D19AF49(iParam1, 0)) || unk_0x17260B4EA0652E1C(iParam1))
	{
		return 1;
	}
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			if (bParam3)
			{
				if (unk_0x71E0DAA57FE7D5C7(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam5)
			{
				if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
				{
					return 1;
				}
			}
			if (bParam6)
			{
				if (unk_0x4ED4D1D8B2023FD8(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
				{
					if (unk_0x910FF514D7BC5674(iParam0, iVar0, 90f))
					{
						if (func_101(iParam0, 1) < 10f)
						{
							return 1;
						}
					}
				}
			}
			if (unk_0xF0D230FB550CD6EB(iParam0, 0))
			{
				if (unk_0x91BBD269506D61D2(unk_0xF2C96862595654B4(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x9ED464AAA493C8EF(iVar0, 4))
			{
				if (unk_0x5DACF31D3AC5ED8D(iVar0))
				{
					if (unk_0x18FB647D79B09657(iParam0, unk_0xFBB1F99A825CAB09(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x416C37C19CCE0077(vVar1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x34DB0AC28A1FDE20((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return 1;
			}
			if (unk_0x2E9A4AE2A5B4D8E8(iParam0) || !func_75(iParam0, iParam1))
			{
				return 1;
			}
			if ((unk_0xCA12322D8FBBDBEE(-1, vVar1, 25f) && !unk_0xCA12322D8FBBDBEE(11, vVar1, 25f)) && !unk_0xCA12322D8FBBDBEE(13, vVar1, 25f))
			{
				return 1;
			}
		}
		else if (bParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_101(int iParam0, bool bParam1)
{
	return func_102(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, bParam1);
}

float func_102(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, bParam2);
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_106(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_111(0))
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

int func_106(int iParam0)
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

void func_107(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_106(*iParam0);
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

void func_108(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_107(iParam0);
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

int func_109(int iParam0)
{
	return 0;
	return 1;
}

var func_110()
{
	return Global_68807;
}

int func_111(int iParam0)
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

bool func_113()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_114()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_115(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_116()
{
	return 1;
}

void func_117(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

void func_118(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_119()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return ((((bVar1 && unk_0xF1CDE9FD207C4CD8(0, 69)) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 70))) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 68))) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()));
	}
	return (((((bVar1 && unk_0xF1CDE9FD207C4CD8(0, 24)) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 25))) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 47))) || unk_0xE7A1E8F9E47DE4A7(unk_0x33CD235DF1E6A94E())) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()));
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_83();
				if (!func_85(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_127()) || Global_105612) || Global_25767) || func_126()) || func_112(8, -1)) || func_125()) || func_124()) || func_123()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_127()) || Global_25767) || func_126()) || func_112(8, -1)) || func_123()) || func_125()) || func_124()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_127()) || Global_105612) || Global_25767) || func_126()) || func_112(8, -1)) || func_123()) || func_125()) || func_124()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_127()) || Global_105612) || Global_25767) || func_126()) || func_112(8, -1)) || func_125()) || func_124()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_127() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_112(8, -1)) || func_114()) || func_122()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_112(8, -1) || func_125()) || func_124()) || func_122()) || func_121())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_127()) || Global_25767) || func_126()) || func_112(8, -1)) || func_124()) || func_123()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_127()) || func_124()) || Global_105612) || Global_25767) || func_126()) || Global_37584) || func_112(8, -1)) || func_123()) || func_122()) || func_114()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_127()) || Global_105612) || Global_25767) || func_126()) || func_112(8, -1)) || func_123()) || func_122()) || func_125()) || func_124()) || func_114())
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

var func_121()
{
	return Global_93721.f_1;
}

int func_122()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_123()
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

bool func_124()
{
	return Global_93734.f_340 > 0;
}

bool func_125()
{
	return Global_93734.f_339 > 0;
}

var func_126()
{
	return Global_1312867;
}

int func_127()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_128()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_129()
{
	return Global_89544;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_132(6) || func_132(7))
			{
				return 1;
			}
			else
			{
				return func_130(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_150(5))
			{
				if (func_120(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE38E3CF1625A4145(Global_26140[iVar0 /*23*/].f_19);
}

bool func_132(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_134()
{
	if (bLocal_248)
	{
		switch (iLocal_81)
		{
			case 0:
				func_135(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
				break;
			
			case 1:
				func_135(1208.197f, 174.5777f, 81.0003f, 138.8786f);
				break;
			
			case 2:
				func_135(2463.904f, 1509.964f, 35.0372f, 88.9199f);
				break;
			
			case 3:
				func_135(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
				break;
			
			case 7:
				func_135(-742.5047f, 4493.466f, 75.2206f, 180.991f);
				break;
			
			case 9:
				func_135(-1367.687f, 4381.998f, 41.4017f, 277.8339f);
				break;
			
			case 10:
				func_135(2517.962f, 4971.619f, 44.7057f, 15.3895f);
				break;
			
			case 11:
				func_135(1054.534f, -179.6562f, 70.3162f, 30.046f);
				break;
			
			default:
				break;
			}
	}
}

void func_135(vector3 vParam0, float fParam1)
{
	var uVar0;
	bool bVar1;
	
	fLocal_57 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vParam0);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && (fLocal_57 > 25f || unk_0xBB5E373390A5F824()))
	{
		if (fLocal_57 < 25600f)
		{
			if (!unk_0x73E7A21FD53144AB(vParam0, 6f) || unk_0xBB5E373390A5F824())
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x765F6FEEFF39224F(Local_247))
		{
			unk_0x7AC8DF0B83EB4C6B(&Local_247);
		}
		unk_0xCE04CE961AF41AB9(vParam0, 4f, 1, 0, 0, false);
		if (iLocal_81 == 0)
		{
			unk_0x5856B9BF2B4E98C4(-835.7629f, -1298.777f, 0f, -815.1855f, -1283.906f, 10f, false, 1);
		}
		if (iLocal_81 == 3)
		{
			Local_247 = unk_0xC651C43AB13A15E5(joaat("frogger"), vParam0, fParam1, true, true, false);
			unk_0xD6D2420F0051065A(Local_247, 5);
		}
		else
		{
			Local_247 = unk_0xC651C43AB13A15E5(joaat("maverick"), vParam0, fParam1, true, true, false);
			unk_0xD6D2420F0051065A(Local_247, 6);
		}
		iLocal_54 = Local_247;
		unk_0xFE8201EFB515D77B(iLocal_54, true);
		if (unk_0x8C1596BAD35D957A(vParam0, &uVar0, 0, 0))
		{
			unk_0x1B2303F9DC2D90D5(Local_247, 1084227584);
		}
		unk_0x09993E7216CF52C4(Local_247, true);
		iLocal_249 = 1;
	}
	else
	{
		iLocal_249 = 0;
	}
}

bool func_136()
{
	return func_137(&uLocal_79);
}

int func_137(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x5D98D654CDC2165A((*uParam0)[iVar0]))
			{
				if (!unk_0x5D98D654CDC2165A((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_138()
{
	switch (iLocal_81)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			func_140();
			break;
		
		default:
			break;
	}
	func_139(&uLocal_79);
}

void func_139(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xB815670C37E03CDE((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_140()
{
	if (iLocal_81 == 3)
	{
		func_141(&uLocal_79, joaat("frogger"));
	}
	else
	{
		func_141(&uLocal_79, joaat("maverick"));
	}
}

int func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_142(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_144()
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	fVar1 = vdist2(vVar0, vLocal_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (unk_0x73E7A21FD53144AB(vLocal_56, 5f))
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

void func_145(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 18);
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 15);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xE38E3CF1625A4145(Global_26140[iVar0 /*23*/].f_19))
		{
			unk_0x1F685E0FB1FEAB13(1);
			unk_0x1ABDB383C83A336A(&(Global_26140[iVar0 /*23*/].f_19));
			unk_0x1F685E0FB1FEAB13(0);
		}
	}
}

int func_147()
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

int func_148()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_149(int iParam0, int iParam1)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_36425);
}

int func_151(int iParam0, int iParam1)
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

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_153()
{
	iLocal_63 = 0;
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_117(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_81 = func_157(vLocal_56, 1);
	func_117(&uLocal_58, 64);
	switch (iLocal_81)
	{
		case 0:
			iLocal_69 = 125;
			break;
		
		case 1:
			iLocal_69 = 126;
			break;
		
		case 2:
			iLocal_69 = 127;
			break;
		
		case 3:
			iLocal_69 = 128;
			break;
		
		case 7:
			iLocal_69 = 132;
			break;
		
		case 9:
			iLocal_69 = 134;
			break;
		
		case 10:
			iLocal_69 = 135;
			break;
		
		case 11:
			iLocal_69 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_81 == 4)
	{
		if (func_156(19))
		{
			func_117(&uLocal_58, 8388608);
			return;
		}
	}
	if (iLocal_81 == 7)
	{
		if (func_155(16) && !func_155(65))
		{
			func_117(&uLocal_58, 8388608);
			return;
		}
	}
	if (iLocal_81 == 0)
	{
		func_117(&uLocal_58, 524288);
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		func_117(&uLocal_58, 8388608);
		return;
	}
	func_117(&uLocal_58, 4194304);
	func_117(&uLocal_58, 16);
	fLocal_66 = (to_float(func_154(iLocal_69)) + 5f);
	if (iLocal_69 != 263)
	{
		if (!func_149(0, iLocal_63))
		{
			bLocal_248 = false;
			func_54(iLocal_69);
		}
		else
		{
			bLocal_248 = true;
		}
	}
	else
	{
		bLocal_248 = false;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("bj")) > 0)
	{
	}
	else
	{
		func_159(&uLocal_58, 8);
	}
	if (func_132(12))
	{
		func_117(&uLocal_58, 8);
	}
	iLocal_61 = 28000;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_155(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

bool func_156(int iParam0)
{
	return Global_105652[iParam0 /*10*/].f_1;
}

int func_157(vector3 vParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_158(iVar3))
		{
			fVar1 = vdist2(vParam0, func_99(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_159(var uParam0, int iParam1)
{
	func_160(uParam0, iParam1);
}

void func_160(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_161(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_146(iLocal_69, 0, 0);
		}
	}
	func_107(&iLocal_60);
	if (func_152(uLocal_58, 2))
	{
		func_5();
		func_159(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_162();
	unk_0x5894DC159447E10A();
}

void func_162()
{
	func_159(&uLocal_58, 4);
	func_163();
	if (unk_0x8ED4328770BEE4A1(iLocal_50))
	{
		unk_0x0432BBEFF2AF18F4(iLocal_50, 3);
	}
	if (!unk_0x6D2E2622CA149402(&Local_52))
	{
		if (unk_0x625A8786A9CA5F9A(&Local_52) != 0)
		{
			unk_0x841080481716E87C(&Local_52);
		}
	}
}

void func_163()
{
}

