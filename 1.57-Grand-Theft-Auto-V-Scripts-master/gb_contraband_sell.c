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
	var uLocal_86 = -1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
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
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<365> Local_115 = { 7200000, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0 } ;
	var uLocal_116 = 0;
	struct<10> Local_117 = { 0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1 } ;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = -1;
	var uLocal_127 = -1;
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
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140[2] = { 0, 0 };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144 = 0;
	struct<2> Local_145[3];
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	struct<597> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 3, 0, 0, 0, -1082130432, 0, 12, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1 } ;
	struct<10> Local_155[4];
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_159 = { 0, 0, 0 } ;
	bool bLocal_160 = 0;
	var uLocal_161 = 16;
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
	var uLocal_276 = 0;
	var uLocal_277 = 0;
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
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	bool bLocal_326 = 0;
	struct<21> Local_327 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = 3f;
	fLocal_95 = 0f;
	fLocal_96 = 2f;
	fLocal_97 = 100f;
	iLocal_111 = -1;
	iLocal_112 = -1;
	iLocal_113 = -1;
	iLocal_114 = -1;
	iLocal_152 = -1;
	iLocal_153 = -1;
	Local_156 = { -5f, -5f, 0f };
	Local_157 = { 5f, -5f, 0f };
	Local_158 = { 5f, 5f, 0f };
	Local_159 = { -5f, 5f, 0f };
	if (unk_0x02BFF15CAA701972())
	{
		if (func_2489(unk_0x1146A9AE09CE2B14(), 0, 1))
		{
			if (!func_2414(ScriptParam_327))
			{
				func_2359(0, 1);
				func_2288(0);
			}
		}
		else
		{
			func_2288(0);
		}
	}
	else
	{
		func_2359(0, 1);
		func_2288(0);
	}
	bLocal_326 = func_2287();
	while (true)
	{
		func_2286();
		if (func_2280(1))
		{
			func_2359(0, 1);
			func_2288(0);
		}
		if (func_2273())
		{
			func_2359(0, 1);
			func_2288(1);
		}
		func_2269();
		func_2257();
		switch (func_2256(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if (func_2255() == 1)
				{
					if ((((func_2287() && !func_2254()) && !func_2253(2)) && !func_2252()) && func_2251() > 1)
					{
						func_2212(0);
						if (iLocal_150 == 2 || iLocal_150 == 3)
						{
							if (func_2210())
							{
								func_2209(unk_0xDD0E57E73E5C4BF6(), 1);
								func_2208();
							}
						}
					}
					else if (func_2210())
					{
						func_2209(unk_0xDD0E57E73E5C4BF6(), 1);
						func_2208();
					}
				}
				else if (func_2255() == 3)
				{
					func_2209(unk_0xDD0E57E73E5C4BF6(), 3);
				}
				break;
			
			case 1:
				if (func_2255() == 1)
				{
					func_515();
				}
				else if (func_2255() == 3)
				{
					func_2209(unk_0xDD0E57E73E5C4BF6(), 3);
				}
				break;
			
			case 3:
				func_2288(0);
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			if (func_514())
			{
				func_513(3);
			}
			switch (func_2255())
			{
				case 0:
					if (func_472())
					{
						func_513(1);
					}
					break;
				
				case 1:
					func_43();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8[3];
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	bVar7 = true;
	bVar9 = true;
	bVar10 = false;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(iVar0))
		{
			iVar5 = iVar0;
			iVar3 = unk_0x539ED6DF32477DE0(iVar5);
			iVar6 = unk_0xD56332194D622ECE(iVar3);
			iVar1 = iVar3;
			unk_0x191DDA30577F440A(&uLocal_142, iVar0);
			if (func_2489(iVar3, 0, 1))
			{
				if (Local_155[iVar0 /*10*/] != 3)
				{
					bVar9 = false;
				}
				unk_0x191DDA30577F440A(&uLocal_141, iVar1);
				if (unk_0xE50EB54E0F21BED0(iVar6, 0))
				{
					unk_0x191DDA30577F440A(&uLocal_143, iVar1);
				}
				if (unk_0x159BC3DDA80D71AC(Local_154.f_35[0]))
				{
					if (func_39(0, unk_0xD56332194D622ECE(iVar3)))
					{
						iVar4[0] = iVar3;
						iVar8[0] = 1;
					}
				}
				if (unk_0x159BC3DDA80D71AC(Local_154.f_35[0]))
				{
					if (func_39(1, unk_0xD56332194D622ECE(iVar3)))
					{
						iVar4[1] = iVar3;
						iVar8[1] = 1;
					}
				}
				if (unk_0x159BC3DDA80D71AC(Local_154.f_35[0]))
				{
					if (func_39(2, unk_0xD56332194D622ECE(iVar3)))
					{
						iVar4[2] = iVar3;
						iVar8[2] = 1;
					}
				}
				if (!bVar10)
				{
					if (func_38(iVar5, 14))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_154.f_586, 0))
						{
							if (func_37(10) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								unk_0x191DDA30577F440A(&(Local_154.f_586), 0);
							}
						}
					}
					else if (func_38(iVar5, 15))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_154.f_586, 1))
						{
							if (func_37(11) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								unk_0x191DDA30577F440A(&(Local_154.f_586), 1);
							}
						}
					}
					else if (func_38(iVar5, 16))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_154.f_586, 2))
						{
							if (func_37(12) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								unk_0x191DDA30577F440A(&(Local_154.f_586), 2);
							}
						}
					}
				}
				if (!func_38(iVar5, 0))
				{
					bVar7 = false;
				}
				if (!func_37(6))
				{
					if (func_38(iVar5, 2))
					{
						func_34(6);
					}
				}
				if (!func_2253(5))
				{
					if (func_38(iVar5, 17) && Local_155[iVar0 /*10*/].f_7 != func_33())
					{
						func_25(Local_155[iVar0 /*10*/].f_7);
						func_24(5);
					}
				}
				if (!func_23(0))
				{
					if (func_38(iVar5, 8))
					{
						func_34(19);
						func_22(0);
					}
				}
				if (!func_23(1))
				{
					if (func_38(iVar5, 9))
					{
						func_34(20);
						func_22(1);
					}
				}
				if (!func_23(2))
				{
					if (func_38(iVar5, 10))
					{
						func_34(21);
						func_22(2);
					}
				}
				if (!func_37(9))
				{
					if (func_38(iVar5, 4))
					{
						func_34(9);
					}
				}
				if (!func_37(18))
				{
					if (func_38(iVar5, 7))
					{
						iVar11 = func_13();
						if (iVar11 > -1)
						{
							Local_154.f_591 = iVar11;
							func_34(18);
						}
					}
				}
				if (!func_37(22))
				{
					if (func_38(iVar5, 12))
					{
						func_34(22);
					}
				}
				if (!func_2253(0))
				{
					if (func_38(iVar5, 13))
					{
						func_24(0);
					}
				}
				if (!func_2253(6))
				{
					if (func_38(iVar5, 18))
					{
						func_24(6);
					}
				}
				if (func_12())
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar2 /*6*/]))
						{
							if (!unk_0x234B68AC2E35ED5A(Local_154.f_549, iVar2))
							{
								if (unk_0x234B68AC2E35ED5A(Local_155[iVar0 /*10*/].f_8, iVar2))
								{
									unk_0x191DDA30577F440A(&(Local_154.f_549), iVar2);
								}
							}
						}
						iVar2++;
					}
				}
				if (func_11())
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < func_9())
					{
						if (unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar2 /*6*/]))
						{
							if (!unk_0x234B68AC2E35ED5A(Local_154.f_550, iVar2))
							{
								if (func_8(iVar2) == 3)
								{
									if (unk_0x234B68AC2E35ED5A(Local_155[iVar0 /*10*/].f_9, iVar2))
									{
										unk_0x191DDA30577F440A(&(Local_154.f_550), iVar2);
									}
								}
							}
						}
						iVar2++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar4[0] != Local_154.f_31[0])
	{
		Local_154.f_31[0] = iVar4[0];
	}
	if (iVar4[1] != Local_154.f_31[1])
	{
		Local_154.f_31[1] = iVar4[1];
	}
	if (iVar4[2] != Local_154.f_31[2])
	{
		Local_154.f_31[2] = iVar4[2];
	}
	if (iVar8[0])
	{
		if (!func_37(10))
		{
			func_3();
			func_34(10);
		}
		if (!func_37(13))
		{
			func_34(13);
		}
	}
	else if (func_37(13))
	{
		func_2(13);
	}
	if (iVar8[1])
	{
		if (!func_37(11))
		{
			func_3();
			func_34(11);
		}
		if (!func_37(14))
		{
			func_34(14);
		}
	}
	else if (func_37(14))
	{
		func_2(14);
	}
	if (iVar8[2])
	{
		if (!func_37(12))
		{
			func_3();
			func_34(12);
		}
		if (!func_37(15))
		{
			func_34(15);
		}
	}
	else if (func_37(15))
	{
		func_2(15);
	}
	if (bVar10)
	{
		func_34(17);
	}
	if (bVar9)
	{
		if (!func_37(16))
		{
			func_34(16);
		}
	}
	if (bVar7)
	{
		if (!func_37(0))
		{
			func_34(0);
		}
	}
	else if (func_37(0))
	{
		func_2(0);
	}
}

void func_2(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Local_154.f_1), iParam0);
}

void func_3()
{
	if (func_6())
	{
		if (!func_5(&(Local_154.f_584)))
		{
			func_4(&(Local_154.f_584), 0, 0);
		}
	}
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

int func_6()
{
	int iVar0;
	
	iVar0 = func_7();
	if (func_2251() == 1 && !func_2252())
	{
		iVar0 = 3;
	}
	if (iVar0 == 2 || iVar0 == 3)
	{
		return 1;
	}
	else if (Global_262145.f_16424 > 0)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	var uVar0;
	
	uVar0 = Local_154.f_593;
	return uVar0;
}

int func_8(int iParam0)
{
	return Local_154.f_499[iParam0 /*6*/].f_5;
}

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		
		case 5:
		case 6:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_10()
{
	return Local_154.f_7;
}

bool func_11()
{
	return func_10() == 6;
}

bool func_12()
{
	return func_10() == 11;
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_35[iVar0]))
		{
			if (func_19(Local_154.f_35[iVar0]))
			{
				if (!func_15(unk_0x854C404AEB476240(Local_154.f_35[iVar0]), Local_154.f_54, 350f))
				{
					if (func_14(iVar0))
					{
						return iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_37(13);
		
		case 1:
			return func_37(14);
		
		case 2:
			return func_37(15);
		
		default:
	}
	return 0;
}

int func_15(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { func_17(iParam1) };
	if (!func_16(Var0, 0f, 0f, 0f, 0))
	{
		return unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), Var0, 1) <= fParam2;
	}
	return 0;
}

bool func_16(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_17(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_18(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

int func_18(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_19(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_20(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
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

int func_21()
{
	switch (Local_154.f_582)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 1:
		case 5:
			return 2;
		
		case 6:
		case 7:
			return 3;
		
		default:
	}
	return 1;
}

void func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_37(23))
			{
				func_34(23);
			}
			break;
		
		case 1:
			if (!func_37(24))
			{
				func_34(24);
			}
			break;
		
		case 2:
			if (!func_37(25))
			{
				func_34(25);
			}
			break;
	}
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_37(19);
		
		case 1:
			return func_37(20);
		
		case 2:
			return func_37(21);
		
		default:
	}
	return 0;
}

void func_24(int iParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	unk_0x191DDA30577F440A(&(Local_154.f_2), iParam0);
}

void func_25(var uParam0)
{
	func_26(func_29(1, 0), func_28(), uParam0);
}

void func_26(int iParam0, int iParam1, var uParam2)
{
	struct<6> Var0;
	
	Var0 = -795567983;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	func_27(&(Var0.f_4), &(Var0.f_5));
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 6, iParam0);
	}
}

void func_27(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

int func_28()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

int func_29(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_2489(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_30(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_30(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_31(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_32()
{
	return Global_1312763;
}

int func_33()
{
	return -1;
}

void func_34(int iParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	unk_0x191DDA30577F440A(&(Local_154.f_1), iParam0);
}

bool func_35()
{
	return func_36(func_10());
}

int func_36(int iParam0)
{
	if ((((((iParam0 == 2 || iParam0 == 0) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_37(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Local_154.f_1, iParam0);
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Local_155[iParam0 /*10*/].f_2, iParam1);
}

int func_39(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		if (iParam1 == unk_0x27FC1B0077581B37(func_40(iParam0), -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(Local_154.f_35[iParam0]))
	{
		uVar0 = unk_0x854C404AEB476240(Local_154.f_35[iParam0]);
	}
	return uVar0;
}

int func_41(int iParam0)
{
	if (unk_0x419E13582192CFEA(func_42(iParam0)) && !unk_0xE50EB54E0F21BED0(func_42(iParam0), 0))
	{
		if (unk_0xBFCE58B2B3249999(func_40(iParam0), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_42(int iParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(Local_154.f_35[iParam0]))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(Local_154.f_35[iParam0]);
	}
	return uVar0;
}

void func_43()
{
	int iVar0;
	
	func_460();
	func_447();
	func_443();
	func_426();
	func_400();
	func_382();
	func_380();
	func_375();
	func_374();
	func_373();
	switch (func_372())
	{
		case 0:
			if (func_344())
			{
				if ((func_277() && func_213()) && func_192())
				{
					Local_154.f_596 = unk_0x666C16A4ED8F3098();
					func_191(1);
					unk_0x9FCD56F864077E14(&(Local_154.f_8), &(Local_154.f_9));
				}
			}
			break;
		
		case 1:
			if (func_190() == 0)
			{
				if (!func_5(&(Local_154.f_3)))
				{
					func_4(&(Local_154.f_3), 0, 0);
				}
				else if (func_187(&(Local_154.f_3), func_188(), 0))
				{
					func_186(1);
				}
				else if (func_187(&(Local_154.f_3), 600000, 0))
				{
					if (!func_37(3))
					{
						func_34(3);
					}
				}
				iVar0 = 0;
				while (iVar0 < func_21())
				{
					if (func_37(1))
					{
						if (unk_0x159BC3DDA80D71AC(Local_154.f_35[iVar0]))
						{
							if (!func_41(iVar0) && !func_185(iVar0))
							{
								if (func_190() != 4)
								{
									func_186(4);
									if (Local_154.f_60 == -1)
									{
										Local_154.f_60 = iVar0;
									}
								}
							}
						}
					}
					iVar0++;
				}
				if (func_37(16) && func_190() == 0)
				{
					func_186(6);
				}
				if (func_37(17) && func_190() == 0)
				{
					func_186(5);
				}
			}
			else
			{
				func_191(2);
			}
			func_44();
			break;
		
		case 2:
			if (func_37(0))
			{
				func_191(3);
			}
			break;
		
		case 3:
			func_513(3);
			break;
	}
}

void func_44()
{
	int iVar0;
	struct<31> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	if (!func_35())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	Var1.f_30 = 1;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (unk_0x234B68AC2E35ED5A(Local_154.f_586, iVar0))
		{
			if (unk_0xBFCE58B2B3249999(func_40(iVar0), 0))
			{
				if (Local_154.f_590 == -1 || Local_154.f_590 == iVar0)
				{
					if (Local_154.f_590 == -1)
					{
						Local_154.f_590 = iVar0;
						Local_154.f_587 = { unk_0xD6E677FAD7521410(func_40(iVar0), 1) };
					}
					Var1 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var2 = { 0f, 0f, 0f };
					fVar3 = 0f;
					iVar4 = unk_0x6471F4759775FCA4(func_40(iVar0));
					if (func_45(Local_154.f_587, 0f, 0f, 0f, iVar4, 0, &Var2, &fVar3, &Var1))
					{
						unk_0x78CDDD1E6367978D(func_40(iVar0), Var2, 1, 0, 0, 1);
						unk_0xCD37A28258D70638(func_40(iVar0), fVar3);
						unk_0x47D0DDD8833C5E5F(func_40(iVar0), 1084227584);
						Local_154.f_590 = -1;
						unk_0xC664C0067EEAB8D1(&(Local_154.f_586), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_45(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, float fParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_182())
	{
		return 0;
	}
	if (func_181() && !Global_2405077.f_679 == unk_0x2053F6ACFD4ED4BC())
	{
		if (!Global_2405077.f_675 == 0)
		{
			Global_2405077.f_675 = 0;
			func_180();
			func_179();
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_674)
	{
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) < func_178(0))
			{
				return 0;
			}
			else
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	else
	{
		if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_676) > 30000)
		{
			Global_2405077.f_675 = 0;
		}
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) > func_178(1))
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_171(Param0))
		{
			if (func_170(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405077.f_675 == 0)
	{
		if (vdist(Global_2405077.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2405077.f_697 != iParam2)
		{
			return 0;
		}
	}
	unk_0xABAA7F8FD10DCDF2((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405077.f_675 == 0)
	{
		Global_2405077.f_681 = 0;
		Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_674 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_694 = { Param0 };
		Global_2405077.f_697 = iParam2;
		Global_2405077.f_680 = unk_0xCB3024ED32EBF9EC();
		func_169();
		func_180();
		if (!uParam6->f_27 || (((((((func_168(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2544210.f_924) && !Global_2544210.f_913) && !Global_2544210.f_921) && !Global_2544210.f_925) && !Global_2544210.f_933) && !Global_2544210.f_945))
		{
			func_149(Param0, iParam2);
		}
		if (func_134(Param0))
		{
			func_149(Param0, iParam2);
		}
		Global_2405077.f_675 = 2;
	}
	switch (Global_2405077.f_675)
	{
		case 2:
			if (unk_0xA1CB00B61C47B900((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405077.f_682 = { Param0 };
				Global_2405077.f_685 = 0f;
				if (Global_2544210.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_128(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_126(Param0, *fParam5, iParam2, unk_0x1146A9AE09CE2B14(), 0))
				{
					Global_2405077.f_682 = { Param0 };
					Global_2405077.f_685 = *fParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2405077.f_681 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_72(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var5);
				}
				func_70(Global_2405077.f_682, Global_2405077.f_685, iParam2, &(Global_2405077.f_672));
				Global_2405077.f_670 = 0;
				Global_2405077.f_671 = 0;
				Global_2405077.f_681++;
				Global_2405077.f_677 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2405077.f_670)
			{
				if (Global_2405077.f_672 == Global_2405077.f_673)
				{
					if (Global_2405077.f_671)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_69(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 1036831949))
							{
								Global_2405077.f_675 = 4;
								Global_2405077.f_699 = unk_0xCB3024ED32EBF9EC();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_67(Global_2405077.f_682, 0);
						func_66(-1);
					}
				}
				else
				{
					Global_2405077.f_670 = 0;
					Global_2405077.f_671 = 0;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_677) > 3000)
			{
				func_66(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_699) < 10000)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_698))
					{
						if (unk_0x61C86D1F86F629E4(Global_2405077.f_698))
						{
							if (!unk_0xED1E23A658F29D8D(Global_2405077.f_698))
							{
								if (func_65(Global_2405077.f_682, Global_2405077.f_685, iParam2, unk_0x1146A9AE09CE2B14(), 0) || func_47(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_67(Global_2405077.f_682, 0);
									func_66(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_67(Global_2405077.f_682, 0);
								func_66(-1);
							}
						}
					}
					else
					{
						func_66(-1);
					}
				}
				else
				{
					func_66(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405077.f_682 = { Param0 };
			Global_2405077.f_685 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_72(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var6);
			Global_2405077.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405077.f_694 = { Param0 };
	Global_2405077.f_697 = iParam2;
	Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
	if (bVar0)
	{
		Global_2405077.f_515 = 0;
		*uParam4 = { Global_2405077.f_682 };
		*fParam5 = Global_2405077.f_685;
		func_46(1);
		return 1;
	}
	return 0;
}

void func_46(bool bParam0)
{
	Global_2405077.f_675 = 0;
	func_169();
	func_180();
	if (bParam0)
	{
		func_179();
	}
}

int func_47(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam7 == 0)
		{
			if (func_2489(iVar1, bParam3, bParam4))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam6 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_64(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam8) && bParam5) && func_59(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar1), 0))
								{
									iVar3 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar1), 0);
									if (unk_0x419E13582192CFEA(iVar3) && !unk_0xE50EB54E0F21BED0(iVar3, 0))
									{
										iVar4 = unk_0x6471F4759775FCA4(iVar3);
										Var5 = { unk_0xD6E677FAD7521410(iVar3, 0) };
										fVar6 = unk_0xA8D713A937F31250(iVar3);
										if (func_58(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_48(func_57(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_48(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_56(iParam3, 1008981770))
	{
		func_49(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_49(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_55(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_50(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x0BCA9ADE67DF9DD8((Var2.x - Var1.x));
}

void func_50(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_53(iParam0);
		if (iVar0 != 0)
		{
			func_51(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_51(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_52(iParam0, &Global_1315836);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F1DFD4C1BC6827A(Global_1315836[iVar0]))
		{
			unk_0xC78A38E5FBC66080(Global_1315836[iVar0], &(Global_1315840[iVar0 /*3*/]), &(Global_1315847[iVar0 /*3*/]));
		}
		if (vmag(Global_1315840[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315847[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315840[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315847[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315854[iVar0] = (Global_1315847[iVar0 /*3*/] - Global_1315840[iVar0 /*3*/]);
		Global_1315857[iVar0] = (Global_1315847[iVar0 /*3*/].f_1 - Global_1315840[iVar0 /*3*/].f_1);
		Global_1315860[iVar0] = (Global_1315847[iVar0 /*3*/].f_2 - Global_1315840[iVar0 /*3*/].f_2);
		if (Global_1315854[iVar0] > Global_1315863)
		{
			Global_1315863 = Global_1315854[iVar0];
		}
		if (Global_1315860[iVar0] > Global_1315864)
		{
			Global_1315864 = Global_1315860[iVar0];
		}
		iVar0++;
	}
	Global_1315865 = (Global_1315863 * -0.5f);
	Global_1315868 = (Global_1315863 * 0.5f);
	Global_1315865.f_1 = ((((0.5f * Global_1315857[0]) + Global_1315857[1]) + Global_1315836.f_3) * -1f);
	Global_1315868.f_1 = (0.5f * Global_1315857[0]);
	Global_1315865.f_2 = (Global_1315860[0] * -0.5f);
	Global_1315868.f_2 = (Global_1315860[0] * 0.5f);
	*uParam1 = { Global_1315865 };
	*uParam2 = { Global_1315868 };
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_54(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_55(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(Param1.x);
	fVar1 = sin(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_1);
	fVar1 = sin(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_2);
	fVar1 = sin(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_56(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_50(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_57(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_58(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_48(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_49(Param0, fParam1, iParam2, &Global_1713901, &(Global_1713901.f_3), &(Global_1713901.f_6), 1036831949);
	func_49(Param3, fParam4, iParam5, &(Global_1713901.f_7), &(Global_1713901.f_10), &(Global_1713901.f_13), 1036831949);
	if (unk_0x55D9593FF40BF91B(Global_1713901, Global_1713901.f_3, Global_1713901.f_6, Global_1713901.f_7, Global_1713901.f_10, Global_1713901.f_13))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_63(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_62(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_60(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_33())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_33())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_33();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_62(iParam0) };
		Global_2518266 = { func_62(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

int func_65(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_2489(iVar1, 0, 1) && func_2489(iParam3, 0, 1))
			{
				if (Global_2418033.f_261[iVar0])
				{
					if (func_48(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_48(func_57(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2418033.f_261[iVar0])
			{
				if (func_48(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2489(iVar1, 0, 0))
			{
				if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
				{
					if (func_48(func_57(iVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_66(int iParam0)
{
	if (Global_2405077.f_681 < 20 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405077.f_681 < iParam0))
		{
			Global_2405077.f_675 = 2;
		}
		else
		{
			Global_2405077.f_675 = 5;
		}
	}
	else
	{
		Global_2405077.f_675 = 5;
	}
}

void func_67(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_68(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2405077.f_2735[iParam1 /*3*/] };
		Global_2405077.f_2735[iParam1 /*3*/] = { Param0 };
		func_67(Var0, iParam1 + 1);
	}
}

int func_68(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2405077.f_2735[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_69(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return 0;
	}
	else
	{
		func_180();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405077.f_686[iVar3] == -1 && unk_0x443E2CA72E118E64())
			{
				func_49(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2405077.f_686[iVar3] = unk_0xC7776239A391CCD0(Var0, Var1, fParam4);
				Global_2405077.f_690[iVar3] = unk_0x62D18D65FE22FF39();
				Global_2405077.f_698 = Global_2405077.f_686[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_71(&Param0, &uParam1, &iParam2);
	Var0 = 1926582096;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_29(1, 1));
}

int func_71(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x15173FB88ABC94F9(&cVar0);
	return iVar1;
}

void func_72(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405077.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_121(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_73(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_112(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412555.f_162 = 0;
	Global_2412555.f_163 = 0;
	Global_2412555.f_164 = -99;
	Global_2412555.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412555[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412555.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_53(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xA10A963F310E9A56(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x197809C7C480B379(iVar6))
		{
			unk_0x94D607F083224BCF(iVar6, &Var1);
			bVar10 = false;
			if (Global_2412555.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412555.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x4664EA53DEDF81DD(iVar6)) || unk_0x16EF1D267886F0A5(iVar6))
			{
				unk_0x8748E0122DD45064(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_105(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_102(Var1))
									{
										Var1 = { func_97(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_96(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_92(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_112(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_91(Var1, fVar2, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_90(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_128(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_128(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_82(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412555.f_162)
																										{
																											Global_2412555[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412555.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412555.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412555.f_162 == 0)
																									{
																										Global_2412555[0 /*3*/] = { Var1 };
																										Global_2412555.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412555.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2412555[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_81(Var1, fVar2, iVar14);
																													iVar14 = Global_2412555.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412555.f_162++;
																									if (Global_2412555.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412555[Global_2412555.f_162 /*3*/] = { Var1 };
																									Global_2412555.f_121[Global_2412555.f_162] = fVar2;
																									Global_2412555.f_162++;
																									if (func_92(Var1, uParam2))
																									{
																										Global_2412555.f_163++;
																									}
																									if (Global_2412555.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412555.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
						{
							func_79(0, uParam2);
						}
						iVar24 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2412555[0 /*3*/] };
						uVar26 = Global_2412555.f_121[0];
						Global_2412555[0 /*3*/] = { Global_2412555[iVar24 /*3*/] };
						Global_2412555.f_121[0] = Global_2412555.f_121[iVar24];
						Global_2412555[iVar24 /*3*/] = { Var25 };
						Global_2412555.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_78(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_117(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_112(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_74(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412555.f_164 = iVar6;
	}
	return 0;
}

void func_74(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_75(*(uParam0[iVar2 /*4*/]), 5f, unk_0x1146A9AE09CE2B14(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_75(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_77(Param0, fParam1, iParam2, iParam3, 0) || func_76(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_76(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_48(Param0, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_2489(iVar2, 0, 1) && func_2489(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_2489(iVar1, 0, 1) && func_2489(iParam2, 0, 1))
				{
					if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2489(iVar1, 0, 1) && func_2489(iParam2, 0, 1))
				{
					if (Global_2418033.f_261[iVar0])
					{
						if (vdist(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_57(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2418033.f_261[iVar0])
				{
					if (vdist(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_2489(iVar1, 0, 1))
				{
					if (vdist(func_57(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xB36B8558948EA7A8((1 + iParam0), (40 + iParam0));
		unk_0x87BE0E4947F798AC(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_97(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
		if (!func_102(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1)
{
	if (!func_92(Global_2412555[iParam0 /*3*/], uParam1))
	{
		Global_2412555.f_162 = (Global_2412555.f_162 - 1);
		func_80(iParam0);
		if (Global_2412555.f_162 > Global_2412555.f_163)
		{
			func_79(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_79(iParam0 + 1, uParam1);
	}
}

void func_80(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412555[iParam0 /*3*/] = { Global_2412555[iParam0 + 1 /*3*/] };
			Global_2412555.f_121[iParam0] = Global_2412555.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_81(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412555[iParam2 /*3*/] };
	uVar1 = Global_2412555.f_121[iParam2];
	Global_2412555[iParam2 /*3*/] = { Param0 };
	Global_2412555.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412555.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_81(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_82(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_83(iVar3))
		{
			Var1 = { func_57(iVar3) };
			fVar5 = vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_83(int iParam0)
{
	if (func_2489(iParam0, 0, 1))
	{
		if (!func_88(iParam0))
		{
			if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (!unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
				{
					if (func_85(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_84(unk_0x7C3E030BC3ED6671(iParam0), unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
				{
					if (!func_85(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_59(iParam0))
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
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)
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
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_86(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)
{
	return func_87(iParam0);
}

bool func_87(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_88(int iParam0)
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_89())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_89()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_90(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_58(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_58(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_65(Param0, fParam1, iParam2, iParam3, iParam4) || func_126(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_95(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_93(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_93(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_94(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_94(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_95(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_96(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_85(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (Global_4718592.f_32298 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_32298)
			{
				if (Global_4718592.f_32299[iVar0 /*121*/].f_7 != 0)
				{
					if (func_48(Param0, Global_4718592.f_32299[iVar0 /*121*/], Global_4718592.f_32299[iVar0 /*121*/].f_6, Global_4718592.f_32299[iVar0 /*121*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_5739)
			{
				if (Global_4718592.f_5742[iVar0 /*346*/].f_15 != 0)
				{
					if (func_48(Param0, Global_4718592.f_5742[iVar0 /*346*/], Global_4718592.f_5742[iVar0 /*346*/].f_3, Global_4718592.f_5742[iVar0 /*346*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_70985 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_70985)
			{
				if (Global_4718592.f_70989[iVar0 /*392*/].f_12 != 0)
				{
					if (func_48(Param0, Global_4718592.f_70989[iVar0 /*392*/], Global_4718592.f_70989[iVar0 /*392*/].f_3, Global_4718592.f_70989[iVar0 /*392*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_268)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_233[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_233[iVar0], 0))
				{
					if (func_48(Param0, unk_0xD6E677FAD7521410(Global_969056.f_233[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_233[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_266)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_119[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_119[iVar0], 0))
				{
					if (func_48(Param0, unk_0xD6E677FAD7521410(Global_969056.f_119[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_119[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_97(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (vmag(Param4) > 0f)
		{
			if (!func_100(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x8748E0122DD45064(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x74F971D19CAD1757(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xE267416B80E7921F(iParam7) && func_99(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_98(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_98(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(Param4) > 0f)
	{
		if (!func_100(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0x26C2ACB261895E70(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0xA625D96BDE6A2827(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_98(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_98(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_98(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_50(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_99(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x7956E831D8C0C17C(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_100(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_55(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_101(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_101(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_102(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_104(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412262[iVar1])
	{
		if (func_103(Param0, &(Global_2411559[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412262[8])
	{
		if (func_103(Param0, &(Global_2411559[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_103(struct<3> Param0, var uParam1)
{
	return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_104(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411550[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411550[1])
	{
		if (Param0 < Global_2411554[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411550[2])
	{
		if (Param0 < Global_2411554[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411554[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411554[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_105(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_111(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x644B8DBA4F69BB73(0.01f, 360f);
			func_110(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar2);
			if (func_106(Var1, &uVar0) || func_111(Var1))
			{
				Var1 = { *uParam0 };
				func_110(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_106(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_109())
	{
		return 0;
	}
	iVar1 = func_108();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_107(Param0, &(Global_2405077.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_107(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_95(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_93(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_108()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_109()
{
	return Global_1683970.f_502;
}

void func_110(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_55(&Var0, 0f, 0f, unk_0x644B8DBA4F69BB73(0f, 360f));
		}
		else
		{
			func_55(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_111(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405077.f_595 > 0f)
	{
		fVar0 = vdist(Param0, Global_2405077.f_592);
		if (fVar0 < Global_2405077.f_595)
		{
			return 1;
		}
	}
	return 0;
}

bool func_112(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405077.f_26.f_18)
	{
		switch (Global_2405077.f_26.f_17)
		{
			case 0:
				if (func_95(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_93(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_113(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, Global_2405077.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_113(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_110(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_116(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_114(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x9FB743331EC18DF4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_95(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_93(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x09C4C80EA1D5B2F7(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_114(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_115(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_101(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_101(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = vdist(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_115(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_115(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x6EE46314283D3C7D(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_101(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_101(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_115(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_116(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_117(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_171(Param0))
	{
		if (func_120(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_118(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_68(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_110(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_106(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_119(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_106(Var2, &uVar1) || func_111(Var2))
			{
				Var2 = { *uParam0 };
				func_119(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_119(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_113(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_113(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_113(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_110(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_116(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_114(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2410002[iVar0 /*17*/].f_16))
			{
				if (func_107(*uParam0, &(Global_2410002[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2410002[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2410002[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_119(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_120(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_119(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2405077.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_112(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412555.f_162 = 0;
		Global_2412555.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2412555[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2412555.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_124(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_123();
		}
		else
		{
			func_122();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405077.f_1753)
		{
			iVar2 = Global_2405077.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405077.f_1754[iVar2 /*4*/] };
				fVar4 = Global_2405077.f_1754[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_91(Var3, fVar4, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_90(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_128(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_128(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_82(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2412555.f_162)
															{
																Global_2412555[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2412555.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2412555.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412555.f_162 == 0)
														{
															Global_2412555[0 /*3*/] = { Var3 };
															Global_2412555.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2412555.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2412555[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_81(Var3, fVar4, iVar5);
																		iVar5 = Global_2412555.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
															}
														}
													}
													else
													{
														Global_2412555[Global_2412555.f_162 /*3*/] = { Var3 };
														Global_2412555.f_121[Global_2412555.f_162] = fVar4;
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412555.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
				{
					func_79(0, uParam2);
				}
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
				Var13 = { Global_2412555[0 /*3*/] };
				uVar14 = Global_2412555.f_121[0];
				Global_2412555[0 /*3*/] = { Global_2412555[iVar0 /*3*/] };
				Global_2412555.f_121[0] = Global_2412555.f_121[iVar0];
				Global_2412555[iVar0 /*3*/] = { Var13 };
				Global_2412555.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405077.f_1753 > 0)
			{
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
				*uParam0 = { Global_2405077.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2405077.f_1754[iVar0 /*4*/].f_3;
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

void func_122()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		iVar2 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		uVar3 = Global_2405077.f_2159[iVar1];
		Global_2405077.f_2159[iVar1] = Global_2405077.f_2159[iVar2];
		Global_2405077.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_124(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405077.f_1753)
	{
		uVar1 = func_125(Param0, fVar0, &fVar0);
		Global_2405077.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_125(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405077.f_1753)
	{
		fVar2 = vdist2(Param0, Global_2405077.f_1754[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_126(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_127(Param0, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_58(Param0, fParam1, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_2489(iVar2, 0, 1) && func_2489(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_56(iParam1, 1008981770);
	fVar1 = func_56(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_128(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405077.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x95F3ABD15748A3D6(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x091D6114DC63264E(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam11)
	{
		if (unk_0x1009A332C2986B7C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam12 > 0f)
	{
		if (func_133(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_129(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_129(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_2489(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_130(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam1))
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
		if (func_2489(iVar1, 1, 1))
		{
			if (!func_30(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_64(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x0BABEFEA577FCFA4(func_130(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam6 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x0BABEFEA577FCFA4(func_130(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
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

Vector3 func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_132() && Global_1590908[iVar0 /*874*/].f_844) && !func_131(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_57(iParam0);
}

int func_131(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return Global_2453009.f_19;
}

int func_133(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam6 == 0)
		{
			if (func_2489(iVar1, bParam2, bParam3))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam5 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_64(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam7) && bParam4) && func_59(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_57(iVar1), Param0, 1) < fParam1)
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

int func_134(struct<3> Param0)
{
	int iVar0;
	
	if (Global_2544210.f_924 && func_135(Param0, &iVar0))
	{
		return 1;
	}
	return 0;
}

int func_135(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_148(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_136(iVar1))
			{
				if (func_148(Global_1683970.f_516[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_33())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_266 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_146(unk_0x1146A9AE09CE2B14(), 0) || (func_143(unk_0x1146A9AE09CE2B14()) && func_141(func_142(unk_0x1146A9AE09CE2B14())) == 12))
	{
		return 1;
	}
	if (func_140(unk_0x1146A9AE09CE2B14()) || (func_143(unk_0x1146A9AE09CE2B14()) && func_141(func_142(unk_0x1146A9AE09CE2B14())) == 8))
	{
		return 1;
	}
	if (func_139(unk_0x1146A9AE09CE2B14()) || (func_143(unk_0x1146A9AE09CE2B14()) && func_141(func_142(unk_0x1146A9AE09CE2B14())) == 5))
	{
		return 1;
	}
	if (func_138(unk_0x1146A9AE09CE2B14()) || (func_143(unk_0x1146A9AE09CE2B14()) && func_141(func_142(unk_0x1146A9AE09CE2B14())) == 10))
	{
		return 1;
	}
	if (func_137(unk_0x1146A9AE09CE2B14()) || (func_143(unk_0x1146A9AE09CE2B14()) && func_141(func_142(unk_0x1146A9AE09CE2B14())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_33())
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_33())
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)
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
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_142(int iParam0)
{
	if (iParam0 != func_33() && func_2489(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_143(int iParam0)
{
	if (iParam0 != func_33() && func_2489(iParam0, 1, 1))
	{
		if (func_145(iParam0) && !func_144(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(int iParam0)
{
	if (iParam0 != func_33() && func_2489(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 != func_33() && func_2489(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_146(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x6471F4759775FCA4(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_33())
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_148(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_107(Param0, &(Global_2410002[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_149(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405077.f_45.f_318)
	{
		return;
	}
	if (!func_167())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_166(Param0);
		if (iVar1 > -1)
		{
			func_179();
			switch (iVar1)
			{
				case 0:
					func_165(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_165(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_165(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_165(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_165(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_165(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_165(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_165(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_165(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_165(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_165(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_165(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_165(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_165(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_165(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_165(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_165(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_165(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_165(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_165(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_165(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_165(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_165(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_165(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_165(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_165(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_165(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_165(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_165(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_165(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_165(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_165(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_165(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_165(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_165(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_165(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_165(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_165(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_165(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_165(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_165(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_165(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_165(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_165(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_165(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_165(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_165(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_165(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_165(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_165(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_165(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_165(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_165(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_163(78);
					break;
				
				case 11:
					func_163(79);
					break;
				
				case 12:
					func_163(82);
					break;
				
				case 13:
					func_163(81);
					break;
				
				case 14:
					func_163(73);
					break;
				
				case 15:
					func_165(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_165(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_165(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_165(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_163(75);
					break;
				
				case 17:
					func_163(76);
					break;
				
				case 18:
					func_163(77);
					break;
				
				case 19:
					func_165(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_165(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_165(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_165(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_163(80);
					break;
				
				case 21:
				case 25:
					func_163(87);
					break;
				
				case 22:
				case 26:
					func_163(88);
					break;
				
				case 23:
				case 27:
					func_163(89);
					break;
				
				case 24:
				case 28:
					func_163(90);
					break;
				
				case 29:
				case 30:
					if (func_162(iParam1))
					{
						func_163(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29);
					}
					break;
				
				case 31:
					func_165(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_165(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_165(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_165(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_165(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_165(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_165(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_165(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_165(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_165(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_165(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_165(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_165(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_165(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_165(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_165(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_165(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_165(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_165(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_165(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_165(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_165(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_165(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_165(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_165(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_165(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_165(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_165(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_165(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_165(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_165(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_165(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_165(-194.254f, -2018.756f, 26.62f, 75f);
					func_165(-186.956f, -2031.369f, 26.62f, 338f);
					func_165(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_165(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_165(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_165(-233.372f, -2089.601f, 26.62f, 304f);
					func_165(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_165(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_165(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_165(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_165(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_165(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_165(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_165(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_165(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_165(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_165(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_165(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_165(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_165(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_165(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_165(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_159(Param0, &iVar2, &iVar3) || (func_135(Param0, &(iVar2[0])) && (unk_0x48E10529AEAE00F9(iParam1) || unk_0xE267416B80E7921F(iParam1))))
		{
			func_179();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405077.f_515 = 1;
				}
				if (!iVar3[iVar0] && func_158(iVar2[iVar0], -1))
				{
					if (func_162(iParam1))
					{
						func_163(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_157(unk_0x7D2B9E6A64637269()) || func_156(unk_0x7D2B9E6A64637269())) && unk_0x48E10529AEAE00F9(iParam1)) || unk_0xE267416B80E7921F(iParam1))
					{
						if (func_155(iParam1))
						{
							func_154(iVar2[iVar0]);
						}
						else if (func_153(iParam1))
						{
							func_152(iVar2[iVar0]);
							func_154(iVar2[iVar0]);
						}
						else
						{
							func_152(iVar2[iVar0]);
							func_154(iVar2[iVar0]);
						}
					}
					else
					{
						func_150(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_163(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_165(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_165(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_165(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_165(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_165(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_165(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_165(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_165(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_165(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_165(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_165(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_165(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_165(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_165(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_165(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_165(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_165(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_165(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_165(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_165(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_165(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_165(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_165(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_165(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_165(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_165(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_165(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_165(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_165(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_165(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_165(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_165(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_165(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_165(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_165(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_165(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_165(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_165(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_165(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_165(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_165(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_165(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_165(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_165(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_165(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_165(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_165(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_165(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_165(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_165(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_165(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_165(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_165(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_165(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_165(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_165(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_165(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_165(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_165(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_165(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_165(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_165(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_165(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_165(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_165(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_165(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_165(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_165(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_165(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_165(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_165(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_165(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_165(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_165(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_165(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_165(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_165(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_165(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_165(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_165(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_165(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_165(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_165(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_165(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_165(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_165(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_165(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_165(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_165(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_165(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_165(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_165(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_165(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_165(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_165(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_165(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_165(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_165(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_165(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_165(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_165(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_165(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_165(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_165(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_165(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_165(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_165(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_165(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_165(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_165(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_165(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_165(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_165(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_165(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_165(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_165(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_165(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_165(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_165(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_165(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_165(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_165(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_165(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_165(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_165(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_165(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_165(142.7427f, -2536.147f, 5f, 205.0002f);
			func_165(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_165(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_165(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_165(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_165(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_165(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_165(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_165(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_165(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_165(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_165(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_165(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_165(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_165(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_165(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_165(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_165(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_165(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_165(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_165(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_165(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_165(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_165(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_165(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_165(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_165(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_165(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_165(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_165(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_165(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_165(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_165(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_165(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_165(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_165(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_165(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_165(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_165(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_165(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_165(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_165(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_165(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_165(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_165(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_165(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_165(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_165(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_165(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_165(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_165(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_165(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_165(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_165(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_165(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_165(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_165(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_165(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_165(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_165(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_165(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_165(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_165(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_165(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_165(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_165(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_165(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_165(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_165(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_165(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_165(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_165(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_165(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_165(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_165(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_165(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_165(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_165(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_165(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_165(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_165(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_165(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_165(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_165(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_165(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_165(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_165(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_165(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_165(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_165(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_165(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_165(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_165(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_165(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_165(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_165(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_165(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_165(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_165(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_165(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_165(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_165(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_165(-1823.414f, 3092.762f, 31.843f, 330f);
			func_165(-1819.045f, 3100.435f, 31.845f, 330f);
			func_165(-1833.313f, 3075.722f, 31.838f, 330f);
			func_165(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_165(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_165(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_165(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_165(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_165(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_165(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_165(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_165(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_165(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_165(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_165(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_165(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_165(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_165(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_165(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_165(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_165(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_165(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_165(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_165(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_165(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_165(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_165(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_165(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_165(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_165(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_165(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_165(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_165(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_165(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_165(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_165(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_165(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_165(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_165(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_165(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_165(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_165(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_165(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_165(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_165(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_165(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_165(1231.279f, 2910.881f, 43.3085f, 12f);
				func_165(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_165(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_165(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_165(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_165(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_165(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_165(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_165(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_165(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_165(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_165(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_165(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_165(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_165(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_165(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_165(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_165(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_165(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_165(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_165(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_165(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_165(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_165(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_165(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_165(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_165(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_165(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_165(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_165(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_165(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_165(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_165(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_165(3.855f, 2672.388f, 78.437f, 319.2f);
				func_165(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_165(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_165(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_165(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_165(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_165(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_165(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_165(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_165(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_165(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_165(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_165(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_165(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_165(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_165(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_165(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_165(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_165(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_165(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_165(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_165(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_165(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_165(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_165(102.851f, 2688.009f, 51.732f, 224f);
				func_165(109.815f, 2681.012f, 51.112f, 224f);
				func_165(116.355f, 2674.26f, 50.529f, 224f);
				func_165(125.138f, 2665.98f, 49.8f, 224f);
				func_165(132.228f, 2659.865f, 49.26f, 228.4f);
				func_165(139.354f, 2653.536f, 48.737f, 228.4f);
				func_165(88.512f, 2702.995f, 53.042f, 224.199f);
				func_165(81.565f, 2710.357f, 53.67f, 224.199f);
				func_165(75.156f, 2716.981f, 54.223f, 224.199f);
				func_165(68.442f, 2723.806f, 54.775f, 226.199f);
				func_165(61.449f, 2730.606f, 55.308f, 226.199f);
				func_165(53.702f, 2738.167f, 55.855f, 226.199f);
				func_165(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_165(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_165(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_165(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_165(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_165(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_165(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_165(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_165(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_165(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_165(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_165(2714.633f, 3918.283f, 42.938f, 16f);
				func_165(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_165(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_165(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_165(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_165(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_165(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_165(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_165(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_165(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_165(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_165(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_165(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_165(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_165(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_165(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_165(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_165(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_165(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_165(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_165(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_165(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_165(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_165(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_165(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_165(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_165(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_165(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_165(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_165(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_165(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_165(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_165(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_165(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_165(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_165(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_165(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_165(3374.923f, 5520.177f, 20.3207f, 86f);
				func_165(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_165(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_165(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_165(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_165(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_165(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_165(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_165(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_165(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_165(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_165(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_165(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_165(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_165(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_165(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_165(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_165(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_165(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_165(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_165(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_165(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_165(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_165(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_165(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_165(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_165(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(43.848f, 6845.657f, 13.379f, 247.2f);
				func_165(50.379f, 6861.146f, 15.105f, 247.2f);
				func_165(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_165(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_165(55.806f, 6875.081f, 14.824f, 247.2f);
				func_165(11.616f, 6877.079f, 11.466f, 247.2f);
				func_165(18.954f, 6891.633f, 11.37f, 247.2f);
				func_165(26.68f, 6907.587f, 11.869f, 247.2f);
				func_165(7.479f, 6907.895f, 12.024f, 247.2f);
				func_165(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_165(35.591f, 6836.608f, 13.288f, 274.4f);
				func_165(36.028f, 6830.135f, 13.801f, 270.8f);
				func_165(35.114f, 6823.884f, 14.527f, 260.8f);
				func_165(48.779f, 6838.693f, 14.337f, 273.6f);
				func_165(56.738f, 6821.8f, 15.244f, 244.8f);
				func_165(48.377f, 6825.895f, 14.656f, 249.8f);
				func_165(49.11f, 6831.439f, 13.991f, 274.8f);
				func_165(53.544f, 6818.275f, 16.342f, 243f);
				func_165(46.162f, 6821.945f, 15.483f, 249.8f);
				func_165(60.129f, 6836.8f, 15.605f, 269.6f);
				func_165(40.88f, 6802.952f, 20.113f, 242.6f);
				func_165(48.203f, 6799.134f, 20.897f, 244.4f);
				func_165(70.449f, 6809.271f, 16.846f, 243f);
				func_165(61.436f, 6814.266f, 16.71f, 244.2f);
				func_165(56.142f, 6793.458f, 19.806f, 242.6f);
				func_165(65.759f, 6791.12f, 18.433f, 276.4f);
				func_165(77.305f, 6805.391f, 18.558f, 245.6f);
				func_165(85.893f, 6800.243f, 18.535f, 249.8f);
				func_165(56.85f, 6780.582f, 18.822f, 297.999f);
				func_165(65.636f, 6784.669f, 18.789f, 293.799f);
				func_165(74.121f, 6788.498f, 18.739f, 293.799f);
				func_165(97.779f, 6796.32f, 19.02f, 276.799f);
				func_165(106.76f, 6796.983f, 18.914f, 272.599f);
				func_165(112.387f, 6802.858f, 18.994f, 210.599f);
				func_165(117.58f, 6802.644f, 18.663f, 209.399f);
				func_165(122.481f, 6802.693f, 18.468f, 209.399f);
				func_165(127.182f, 6802.686f, 18.218f, 209.399f);
				func_165(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_165(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_165(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_165(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_165(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_165(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_165(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_165(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_165(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_165(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_165(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_165(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_165(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_165(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_165(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_165(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_165(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_165(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_165(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_165(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_165(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_165(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_165(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_165(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_165(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_165(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_165(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_165(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_165(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_165(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_165(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_165(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_165(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_165(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_165(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_165(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_165(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_165(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_165(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_165(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_165(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_165(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_165(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_165(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_165(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_165(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_165(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_165(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_165(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_165(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_165(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_165(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_165(30.027f, 3292.351f, 38.604f, 140.199f);
				func_165(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_165(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_165(23.897f, 3283.152f, 39.381f, 145.399f);
				func_165(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_165(18.723f, 3274.025f, 40.054f, 155.799f);
				func_165(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_165(36.958f, 3298.847f, 38.001f, 127.799f);
				func_165(54.165f, 3311.582f, 36.517f, 303.799f);
				func_165(61.607f, 3317.105f, 35.916f, 306.999f);
				func_165(68.994f, 3323.129f, 35.364f, 308.199f);
				func_165(76.266f, 3329.467f, 34.805f, 311.399f);
				func_165(82.757f, 3335.915f, 34.344f, 316.598f);
				func_165(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_165(14.664f, 3263.688f, 40.931f, 160.398f);
				func_165(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_165(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_165(89.575f, 3343.311f, 33.932f, 318.398f);
				func_165(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_165(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_165(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_165(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_165(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_165(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_165(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_165(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_165(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_165(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_165(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_165(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_165(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_165(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_165(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_165(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_165(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_165(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_165(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_165(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_165(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_165(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_165(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_165(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_165(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_165(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_165(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_165(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_165(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_165(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_165(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_165(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_165(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_165(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_165(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_165(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_165(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_165(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_165(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_165(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_165(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_165(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_165(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_165(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_165(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_165(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_165(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_165(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_165(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_165(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_165(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_165(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_165(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_165(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_165(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_165(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_165(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_165(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_165(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_165(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_165(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_165(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_165(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_165(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_165(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_165(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_165(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_165(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_165(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_165(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_165(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_165(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_165(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_165(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_165(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_165(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_165(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_165(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_165(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_165(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_151(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_151(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_151(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_151(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_151(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_151(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_151(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_151(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_151(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_151(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_151(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_151(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_151(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_151(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_151(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_151(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_151(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_151(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_151(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_151(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_151(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_151(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_151(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_151(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_151(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_151(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_151(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_151(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_50(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var3) };
		func_165(Var4, fParam1);
	}
	else
	{
		func_165(Param0, fParam1);
	}
}

void func_152(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_165(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_165(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_165(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_165(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_165(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_165(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_165(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_165(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_165(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_165(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_165(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_165(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_165(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_165(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_165(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_165(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_165(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_165(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_165(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_165(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_165(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_165(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_165(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_165(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_165(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_165(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_165(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_165(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_165(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_165(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_165(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_165(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_165(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_165(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_165(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_165(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_165(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_165(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_165(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_165(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_165(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_165(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_165(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_165(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_165(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_165(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_165(-1356.991f, -3242.228f, 12.945f, 330f);
			func_165(-1369.313f, -3234.758f, 12.945f, 330f);
			func_165(-1381.751f, -3227.408f, 12.945f, 330f);
			func_165(-1394.302f, -3220.021f, 12.945f, 330f);
			func_165(-1354.339f, -3223.129f, 12.945f, 330f);
			func_165(-1366.302f, -3215.809f, 12.945f, 330f);
			func_165(-1378.492f, -3208.645f, 12.945f, 330f);
			func_165(-1350.322f, -3203.405f, 12.945f, 330f);
			func_165(-1362.684f, -3196.451f, 12.945f, 330f);
			func_165(-1347.089f, -3182.69f, 12.945f, 330f);
			func_165(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_165(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_165(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_165(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_165(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_165(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_165(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_165(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_165(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_165(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_165(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_165(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_165(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_165(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_165(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_165(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_165(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_165(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_165(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_165(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_165(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_165(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_165(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_165(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_165(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_165(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_165(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_165(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_165(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_165(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_165(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_165(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_165(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_165(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_165(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_165(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_165(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_165(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_165(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_165(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_165(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_165(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_165(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_165(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_165(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_165(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_165(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_165(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_165(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_165(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_165(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_165(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_165(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_165(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_165(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_165(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_165(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_165(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_165(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_165(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_165(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_165(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_165(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_165(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_165(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_165(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_165(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_165(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_165(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_165(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_165(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_165(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_165(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_165(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_165(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_165(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_165(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_165(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_165(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_165(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_165(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_165(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_165(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_165(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_165(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_165(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_165(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_165(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_165(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_165(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_165(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_165(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_165(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_165(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_165(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_165(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_165(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_165(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_165(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_165(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_165(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_165(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_165(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_165(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_165(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_165(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_165(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_165(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_165(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_165(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_165(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_165(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_165(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_165(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_165(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_165(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_165(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_165(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_165(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_165(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_165(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_165(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_165(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_165(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_165(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_165(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_165(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_165(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_165(-2484.323f, 3249.294f, 31.828f, 151f);
			func_165(-2495.313f, 3255.746f, 31.828f, 151f);
			func_165(-2472.644f, 3242.684f, 31.828f, 151f);
			func_165(-2506.313f, 3262.27f, 31.823f, 151f);
			func_165(-2461.494f, 3235.93f, 31.828f, 151f);
			func_165(-2505.602f, 3238.049f, 31.828f, 151f);
			func_165(-2481.937f, 3224.8f, 31.828f, 151f);
			func_165(-2516.813f, 3244.266f, 31.823f, 151f);
			func_165(-2470.03f, 3217.899f, 31.828f, 151f);
			func_165(-2493.933f, 3231.308f, 31.828f, 151f);
			func_165(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_165(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_165(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_165(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_165(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_165(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_165(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_165(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_165(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_165(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_165(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_165(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_165(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_165(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_165(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_165(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_165(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_165(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_165(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_165(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_165(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_165(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_165(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_165(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_165(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_165(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_165(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_165(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_165(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_165(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_165(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_165(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_165(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_165(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_165(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_165(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_154(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_165(-947.712f, -3367.704f, 12.944f, 60f);
			func_165(-904.692f, -3293.072f, 12.944f, 60f);
			func_165(-863.71f, -3221.978f, 12.944f, 60f);
			func_165(-966.418f, -3162.773f, 12.944f, 60f);
			func_165(-1007.435f, -3233.93f, 12.944f, 60f);
			func_165(-1050.455f, -3308.559f, 12.944f, 60f);
			func_165(-1145.673f, -3253.456f, 12.944f, 60f);
			func_165(-1098.386f, -3181.428f, 12.944f, 60f);
			func_165(-1060.474f, -3108.903f, 12.944f, 60f);
			func_165(-1155.391f, -3053.632f, 12.944f, 60f);
			func_165(-1196.114f, -3125.146f, 12.948f, 60f);
			func_165(-1235.552f, -3201.86f, 12.944f, 60f);
			func_165(-1344.446f, -3139.177f, 12.944f, 60f);
			func_165(-1301.308f, -3064.341f, 12.944f, 60f);
			func_165(-1260.135f, -2992.912f, 12.944f, 60f);
			func_165(-1364.244f, -2932.9f, 12.98f, 60f);
			func_165(-1405.284f, -3004.108f, 12.96f, 60f);
			func_165(-1448.29f, -3078.72f, 12.95f, 60f);
			func_165(-1535.732f, -3028.318f, 12.945f, 60f);
			func_165(-1492.639f, -2953.558f, 12.945f, 60f);
			func_165(-1451.506f, -2882.2f, 12.944f, 60f);
			func_165(-1553.927f, -2823.12f, 13.002f, 60f);
			func_165(-1595.097f, -2894.571f, 12.944f, 60f);
			func_165(-1637.836f, -2968.714f, 12.945f, 60f);
			func_165(-1740.971f, -2911.484f, 12.944f, 330f);
			func_165(-1696.293f, -2833.978f, 12.944f, 330f);
			func_165(-1651.502f, -2756.273f, 12.945f, 330f);
			func_165(-1588.258f, -2647.575f, 12.944f, 330f);
			func_165(-1536.862f, -2681.378f, 12.945f, 330f);
			func_165(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_165(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_165(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_165(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_165(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_165(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_165(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_165(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_165(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_165(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_165(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_165(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_165(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_165(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_165(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_165(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_165(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_165(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_165(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_165(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_165(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_165(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_165(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_165(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_165(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_165(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_165(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_165(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_165(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_165(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_165(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_156(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD6E677FAD7521410(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD6E677FAD7521410(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
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

int func_159(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 127)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 154)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_136(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_160(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_273 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_33())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_273 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_162(int iParam0)
{
	if ((unk_0x69AF387D1A91914C(iParam0) || unk_0x3DA0AF866B552ECB(iParam0)) || unk_0x2F040F7AF0534E16(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_165(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_165(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_165(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_165(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_165(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_165(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_165(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_165(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_165(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_165(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_165(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_165(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_165(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_165(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_165(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_165(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_165(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_165(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_165(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_165(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_165(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_165(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_165(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_165(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_165(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_165(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_165(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_165(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_165(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_165(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_165(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_165(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_165(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_165(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_165(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_165(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_164())
			{
				func_165(-1608.297f, -556.875f, 33.406f, 310f);
				func_165(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_165(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_165(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_165(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_165(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_165(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_165(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_165(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_165(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_165(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_165(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_164())
			{
				func_165(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_165(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_165(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_165(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_165(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_165(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_165(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_165(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_165(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_165(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_165(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_165(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_164())
			{
				func_165(-102.737f, -597.379f, 35.053f, 160.999f);
				func_165(-97.793f, -589.568f, 35.082f, 134.799f);
				func_165(-110.357f, -619.402f, 35.055f, 160.599f);
				func_165(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_165(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_165(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_165(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_165(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_165(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_165(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_165(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_165(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_164())
			{
				func_165(-59.349f, -779.238f, 43.134f, 228.398f);
				func_165(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_165(-65.212f, -772.66f, 43.151f, 219.398f);
				func_165(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_165(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_165(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_165(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_165(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_165(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_165(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_165(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_165(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_165(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_165(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_165(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_165(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_165(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_165(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_165(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_165(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_165(-1464.5f, -927.9f, 9f, 296.7991f);
			func_165(-1466f, -926.1f, 9f, 296.7991f);
			func_165(-1467.9f, -924.7f, 9f, 296.7991f);
			func_165(-1469.7f, -923.7f, 9f, 296.7991f);
			func_165(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_165(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_165(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_165(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_165(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_165(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_165(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_165(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_165(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_165(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_165(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_165(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_165(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_165(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_165(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_165(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_165(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_165(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_165(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_165(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_165(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_165(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_165(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_165(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_165(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_165(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_165(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_165(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_165(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_165(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_165(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_165(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_165(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_165(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_165(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_165(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_165(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_165(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_165(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_165(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_165(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_165(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_165(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_165(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_165(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_165(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_165(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_165(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_165(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_165(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_165(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_165(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_165(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_165(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_165(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_165(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_165(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_165(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_165(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_165(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_165(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_165(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_165(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_165(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_165(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_165(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_165(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_165(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_165(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_165(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_165(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_165(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_165(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_165(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_165(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_165(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_165(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_165(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_165(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_165(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_165(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_165(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_165(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_165(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_164()
{
	return Global_2453009.f_17;
}

void func_165(struct<3> Param0, float fParam1)
{
	if (Global_2405077.f_1753 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/] = { Param0 };
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/].f_3 = fParam1;
		Global_2405077.f_1753++;
	}
}

int func_166(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2405077.f_2902, Param0) < Global_2405077.f_2910)
	{
		return Global_2405077.f_2905;
	}
	Global_2405077.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412316[iVar0 /*7*/].f_2 + Global_2412316[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_103(Param0, &(Global_2412316[iVar0 /*7*/])))
		{
			Global_2405077.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405077.f_2905 = -1;
	return -1;
}

int func_167()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_13, 0) && !Global_2453903.f_6343)
	{
		return 0;
	}
	return 0;
}

int func_168(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_136(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405077.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_170(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412272[iVar0 /*7*/].f_2 + Global_2412272[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_103(Var1, &(Global_2412272[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_114(&Var1, Global_2412272[iVar0 /*7*/], Global_2412272[iVar0 /*7*/].f_3, Global_2412272[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405077.f_514 && !Global_2405077.f_515)
	{
		if (!Global_2405077.f_45.f_316)
		{
			if (!func_175(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 1;
			}
			if (!func_174(Param0, 1008981770))
			{
				if (!func_120(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_120(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_173(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_172(&(Global_2405077.f_45[iVar0 /*12*/])) };
					if (!func_120(&Var1, 0, 0, 0, 1))
					{
						if (!func_120(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_172(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_173(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_107(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_174(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_107(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_175(int iParam0, bool bParam1)
{
	if (func_177() != 0)
	{
		return func_176(iParam0) != 0;
	}
	return func_85(iParam0, bParam1, 0);
}

int func_176(int iParam0)
{
	if (func_2489(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_177()
{
	return Global_31345;
}

int func_178(bool bParam0)
{
	if (unk_0x8B6A925F148E0E94())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_179()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405077.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_1753 = 0;
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x4BE697D014536271(Global_2405077.f_690[iVar0]))
		{
			if (unk_0x62D18D65FE22FF39() == Global_2405077.f_690[iVar0])
			{
				if (!Global_2405077.f_686[iVar0] == -1)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_686[iVar0]))
					{
						unk_0x120FD3F0779D3C4C(Global_2405077.f_686[iVar0]);
						Global_2405077.f_686[iVar0] = -1;
					}
					else
					{
						Global_2405077.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405077.f_686[iVar0] == -1)
		{
			Global_2405077.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_181()
{
	if (!Global_2405077.f_605 == 0 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_610) < func_178(0))
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (unk_0xF471787D45ADC2C1())
	{
		if (!unk_0xE544790FBAA57D4F() > 7 && !unk_0xE544790FBAA57D4F() == 5)
		{
			return 0;
		}
	}
	if (Global_2405077.f_516 == unk_0x2053F6ACFD4ED4BC())
	{
		return 0;
	}
	if (!func_184(unk_0x1146A9AE09CE2B14()) && !func_183())
	{
		return 0;
	}
	return 1;
}

bool func_183()
{
	return Global_1312878;
}

int func_184(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_37(23);
		
		case 1:
			return func_37(24);
		
		case 2:
			return func_37(25);
		
		default:
	}
	return 0;
}

void func_186(int iParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	Local_154.f_6 = iParam0;
}

int func_187(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	return func_189();
}

var func_189()
{
	return Global_262145.f_15287;
}

int func_190()
{
	return Local_154.f_6;
}

void func_191(int iParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	Local_154.f_5 = iParam0;
}

int func_192()
{
	int iVar0;
	
	if (!func_212())
	{
		return 1;
	}
	if (!func_211())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (!func_193(iVar0, 1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_193(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	
	if (func_208(func_209(iParam0)))
	{
		if (!func_207(iParam0))
		{
			if (func_206(iParam0))
			{
				uVar0 = func_205(iParam0);
				uVar1 = func_204(iParam0);
				if (unk_0x159BC3DDA80D71AC(uVar0))
				{
					if (unk_0xB364346471C3B028(uVar0) || (!unk_0xE5AEA27726895658(uVar0) && unk_0x443E2CA72E118E64()))
					{
						if (func_203(uVar0))
						{
							if (func_202(&(Local_154.f_400[iParam0 /*8*/]), uVar0, 26, func_209(iParam0), uVar1, 1, 1, 1))
							{
								unk_0xC664C0067EEAB8D1(&(Local_154.f_547), iParam0);
								Local_154.f_400[iParam0 /*8*/].f_1 = { 0f, 0f, 0f };
								Local_154.f_400[iParam0 /*8*/].f_4 = 0f;
								func_201(&(Local_154.f_400[iParam0 /*8*/].f_6));
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				if (func_198(&(Local_154.f_400[iParam0 /*8*/]), 26, func_209(iParam0), func_200(iParam0), func_199(iParam0), 1, 1, 1))
				{
					unk_0xC664C0067EEAB8D1(&(Local_154.f_547), iParam0);
					Local_154.f_400[iParam0 /*8*/].f_1 = { 0f, 0f, 0f };
					Local_154.f_400[iParam0 /*8*/].f_4 = 0f;
					func_201(&(Local_154.f_400[iParam0 /*8*/].f_6));
					func_194(func_197(iParam0), 75);
				}
			}
		}
		else
		{
			unk_0x824F744352C8BC82(func_209(iParam0));
			return 1;
		}
	}
	return 0;
}

void func_194(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	unk_0xBE91B077ADADE97F(iParam0, 1);
	unk_0xB8FD45B9686D7177(iParam0, 1);
	uVar0 = func_196(-1);
	unk_0xD82D50E4AC0D46B9(iParam0, uVar0, 9999999, 0, 1);
	iVar1 = 3;
	unk_0xEA480A62F5D29812(iParam0, iVar1);
	unk_0x7B28A83A0D3DD0F9(iParam0, 42, 0);
	unk_0x7BC3A9305442B7FD(iParam0, 0);
	unk_0xA415F00D0E0DFBCE(iParam0, 43, 1);
	unk_0x2BDB866C1791F9D7(iParam0, 1);
	unk_0x7B28A83A0D3DD0F9(iParam0, 146, 1);
	unk_0xF8207455457B967E(iParam0, iParam1);
	func_195(iParam0);
	unk_0x504B26425DFF773C(iParam0, 1);
	unk_0x2271ED1E65FB75EE(iParam0, Global_1575024);
}

void func_195(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar2 = Global_1683816;
	if (Global_1683814 == 1)
	{
		iVar2 = 3;
	}
	if (iVar2 == 2)
	{
		unk_0xA1217FA3D209873F(iParam0, Global_262145.f_16427);
		unk_0xA415F00D0E0DFBCE(iParam0, 24, 0);
		fVar0 = Global_262145.f_16428;
	}
	else if (iVar2 == 3)
	{
		unk_0xA1217FA3D209873F(iParam0, Global_262145.f_16431);
		unk_0xA415F00D0E0DFBCE(iParam0, 24, 0);
		unk_0x095503B9F1CAC814(iParam0, 0);
		fVar0 = Global_262145.f_16432;
	}
	iVar1 = round((100f + (100f * fVar0)));
	if (unk_0x5E7C0A485B91DB87(iParam0) > iVar1)
	{
		unk_0xF8E5239A2E6E0754(iParam0, iVar1);
		unk_0xC595907BB71C921D(iParam0, iVar1, 0);
	}
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("weapon_pistol");
	if (func_10() == 12)
	{
		iVar0 = joaat("weapon_microsmg");
	}
	if (func_10() == 13)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, 1000);
		if (iVar1 > 500)
		{
			iVar0 = joaat("weapon_microsmg");
		}
	}
	if (func_10() == 13)
	{
		iVar0 = joaat("weapon_microsmg");
	}
	else if (func_10() == 6)
	{
		switch (func_210())
		{
			case 4:
				iVar0 = joaat("weapon_pistol");
				break;
			
			case 6:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("weapon_pistol");
				}
				else
				{
					iVar0 = joaat("weapon_microsmg");
				}
				break;
			
			case 8:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("weapon_microsmg");
				}
				else
				{
					iVar0 = joaat("weapon_assaultrifle");
				}
				break;
			}
	}
	return iVar0;
}

int func_197(int iParam0)
{
	if (func_207(iParam0))
	{
		return unk_0x8A437068C87289B7(Local_154.f_400[iParam0 /*8*/]);
	}
	return 0;
}

int func_198(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	iVar0 = unk_0x0FDCFECB2EF2BC1C(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0x818C6D67AB3F266B(iVar0);
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(iVar0, iParam7);
		if (unk_0x895470BB92940DC6(iVar0))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

float func_199(int iParam0)
{
	switch (func_10())
	{
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 173.599f;
						
						case 1:
							return 12.199f;
						
						case 2:
							return 130.399f;
						
						case 3:
							return 310.999f;
						
						case 4:
							return 228.598f;
						
						case 5:
							return 199.997f;
						
						case 6:
							return 173.398f;
						
						case 7:
							return 196.994f;
						
						case 8:
							return 162.399f;
						
						case 9:
							return 134.799f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return 259.599f;
						
						case 1:
							return 210.799f;
						
						case 2:
							return 264.798f;
						
						case 3:
							return 289.189f;
						
						case 4:
							return 30.994f;
						
						case 5:
							return 74.593f;
						
						case 6:
							return 332.592f;
						
						case 7:
							return 233.191f;
						
						case 8:
							return 177.588f;
						
						case 9:
							return 166.187f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return 221.9998f;
						
						case 1:
							return 286.398f;
						
						case 2:
							return 115.597f;
						
						case 3:
							return 64.9988f;
						
						case 4:
							return 56.797f;
						
						case 5:
							return 171.7995f;
						
						case 6:
							return 113.395f;
						
						case 7:
							return 1.4f;
						
						case 8:
							return 23.597f;
						
						case 9:
							return 34.2f;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return 272.797f;
						
						case 1:
							return 270.4f;
						
						case 2:
							return 198.797f;
						
						case 3:
							return 26.597f;
						
						case 4:
							return 151.1986f;
						
						case 5:
							return 312.7979f;
						
						case 6:
							return 288.194f;
						
						case 7:
							return 338.594f;
						
						case 8:
							return 153.993f;
						
						case 9:
							return 288.593f;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return 213.399f;
						
						case 1:
							return 43.798f;
						
						case 2:
							return 104.798f;
						
						case 3:
							return 149.397f;
						
						case 4:
							return 282.398f;
						
						case 5:
							return 192.393f;
						
						case 6:
							return 3.193f;
						
						case 7:
							return 173.199f;
						
						case 8:
							return 102.998f;
						
						case 9:
							return 160.998f;
						
						default:
					}
					break;
			}
			break;
		
		case 13:
			switch (Local_154.f_394[0])
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 226.197f;
						
						case 1:
							return 69.999f;
						
						case 2:
							return 57.6f;
						
						case 3:
							return 325.999f;
						
						case 4:
							return 138.995f;
						
						case 5:
							return 26.994f;
						
						case 6:
							return 324.193f;
						
						case 7:
							return 112.592f;
						
						case 8:
							return 312.19f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return 183.597f;
						
						case 1:
							return 80.797f;
						
						case 2:
							return 216.796f;
						
						case 3:
							return 167.996f;
						
						case 4:
							return 152.395f;
						
						case 5:
							return 290.792f;
						
						case 6:
							return 314.794f;
						
						case 7:
							return 165.592f;
						
						case 8:
							return 71.392f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return 180.5975f;
						
						case 1:
							return 36.797f;
						
						case 2:
							return 259.5967f;
						
						case 3:
							return 130.3964f;
						
						case 4:
							return 182.4457f;
						
						case 5:
							return 59.8454f;
						
						case 6:
							return 66.0453f;
						
						case 7:
							return 64.0452f;
						
						case 8:
							return 319.8442f;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return 123.3997f;
						
						case 1:
							return 142.1995f;
						
						case 2:
							return 136.5994f;
						
						case 3:
							return 99.396f;
						
						case 4:
							return 61.3977f;
						
						case 5:
							return 30.1976f;
						
						case 6:
							return 79.197f;
						
						case 7:
							return 180.7967f;
						
						case 8:
							return 38.5959f;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return 234.4485f;
						
						case 1:
							return 312.6486f;
						
						case 2:
							return 330f;
						
						case 3:
							return 55.0465f;
						
						case 4:
							return 265.0478f;
						
						case 5:
							return 349.595f;
						
						case 6:
							return 23.395f;
						
						case 7:
							return 286.995f;
						
						case 8:
							return 359.8465f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_200(int iParam0)
{
	switch (func_10())
	{
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1686.565f, 3283.567f, 40.147f;
						
						case 1:
							return 1686.705f, 3282.48f, 40.146f;
						
						case 2:
							return 1707.38f, 3285.957f, 40.143f;
						
						case 3:
							return 1706.214f, 3284.945f, 40.132f;
						
						case 4:
							return 1705.706f, 3290.164f, 44.399f;
						
						case 5:
							return 1689.609f, 3277.303f, 40.076f;
						
						case 6:
							return 1700.036f, 3286.393f, 47.922f;
						
						case 7:
							return 1698.173f, 3288.865f, 40.147f;
						
						case 8:
							return 1720.138f, 3285.192f, 43.149f;
						
						case 9:
							return 1685.802f, 3278.66f, 40.056f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return -22.418f, 3038.632f, 39.986f;
						
						case 1:
							return 0.953f, 3048.67f, 39.686f;
						
						case 2:
							return -30.788f, 3049.856f, 39.595f;
						
						case 3:
							return -25.003f, 3034.537f, 43.501f;
						
						case 4:
							return 1.45f, 3047.88f, 39.67f;
						
						case 5:
							return -29.428f, 3049.529f, 39.711f;
						
						case 6:
							return -26.525f, 3041.971f, 39.986f;
						
						case 7:
							return -17.376f, 3034.479f, 39.974f;
						
						case 8:
							return -34.036f, 3030.758f, 40.036f;
						
						case 9:
							return -34.53f, 3017.445f, 39.653f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2119.472f, 2615.53f, -0.0022f;
						
						case 1:
							return -2077.927f, 2604.631f, 1.035f;
						
						case 2:
							return -2080.564f, 2603.516f, 1.035f;
						
						case 3:
							return -2086.792f, 2625.189f, 2.089f;
						
						case 4:
							return -2085.976f, 2616.372f, 0.2f;
						
						case 5:
							return -2097.881f, 2637.023f, 1.9161f;
						
						case 6:
							return -2082.671f, 2609.676f, 2.089f;
						
						case 7:
							return -2097.82f, 2635.863f, 1.8648f;
						
						case 8:
							return -2090.961f, 2638.719f, 2.089f;
						
						case 9:
							return -2118.675f, 2614.615f, 0.2f;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return 201.773f, 2444.678f, 59.483f;
						
						case 1:
							return 201.069f, 2434.979f, 59.47f;
						
						case 2:
							return 194.641f, 2457.049f, 54.709f;
						
						case 3:
							return 195.564f, 2455.865f, 54.782f;
						
						case 4:
							return 225.521f, 2447.133f, 56.33f;
						
						case 5:
							return 225.092f, 2446.452f, 56.4106f;
						
						case 6:
							return 202.803f, 2444.631f, 62.421f;
						
						case 7:
							return 205.382f, 2477.153f, 54.631f;
						
						case 8:
							return 211.588f, 2463.634f, 54.958f;
						
						case 9:
							return 216.219f, 2470.21f, 54.765f;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return 2108.241f, 2923.977f, 56.432f;
						
						case 1:
							return 2109.137f, 2922.911f, 56.43f;
						
						case 2:
							return 2137.334f, 2901.555f, 56.268f;
						
						case 3:
							return 2112.013f, 2923.713f, 49.932f;
						
						case 4:
							return 2130.445f, 2917.955f, 46.663f;
						
						case 5:
							return 2136.251f, 2897.009f, 46.331f;
						
						case 6:
							return 2136.553f, 2895.294f, 46.241f;
						
						case 7:
							return 2122.212f, 2887.214f, 46.196f;
						
						case 8:
							return 2108.959f, 2908.356f, 46.703f;
						
						case 9:
							return 2139.324f, 2899.315f, 56.267f;
						
						default:
					}
					break;
			}
			break;
		
		case 13:
			switch (Local_154.f_394[0])
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -106.011f, -2711.141f, 4.997f;
						
						case 1:
							return -104.058f, -2711.94f, 4.996f;
						
						case 2:
							return -92.315f, -2759.717f, 5.087f;
						
						case 3:
							return -93.367f, -2759.866f, 5.087f;
						
						case 4:
							return -77.449f, -2671.311f, 5.009f;
						
						case 5:
							return -78.053f, -2672.953f, 5.012f;
						
						case 6:
							return -100.601f, -2688.139f, 5.001f;
						
						case 7:
							return -93.626f, -2773.771f, 5.087f;
						
						case 8:
							return -96.429f, -2697.867f, 5.013f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return 884.089f, -2599.981f, 9.116f;
						
						case 1:
							return 892.923f, -2618.841f, 4.759f;
						
						case 2:
							return 891.161f, -2617.305f, 4.792f;
						
						case 3:
							return 885.512f, -2603.554f, 5.107f;
						
						case 4:
							return 892.079f, -2626.937f, 2.397f;
						
						case 5:
							return 898.665f, -2600.539f, 9.116f;
						
						case 6:
							return 891.064f, -2627.698f, 2.174f;
						
						case 7:
							return 876.353f, -2629.129f, 2.067f;
						
						case 8:
							return 900.892f, -2600.36f, 9.116f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return -501.2358f, -2811.832f, 5.0004f;
						
						case 1:
							return -517.3156f, -2820.241f, 5.0004f;
						
						case 2:
							return -518.6866f, -2819.406f, 5.0004f;
						
						case 3:
							return -522.037f, -2794.314f, 5.0004f;
						
						case 4:
							return -524.2614f, -2801.131f, 5.0004f;
						
						case 5:
							return -524.0466f, -2802.697f, 5.0004f;
						
						case 6:
							return -511.3055f, -2808.841f, 5.0004f;
						
						case 7:
							return -494.5088f, -2834.58f, 5.0004f;
						
						case 8:
							return -526.2589f, -2803.069f, 5.0004f;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return -707.134f, -1311.777f, 8.5508f;
						
						case 1:
							return -696.8458f, -1318.922f, 7.2005f;
						
						case 2:
							return -700.508f, -1316.76f, 4.1019f;
						
						case 3:
							return -687.0558f, -1335.441f, 4.1019f;
						
						case 4:
							return -707.6573f, -1353.54f, 0.6002f;
						
						case 5:
							return -708.6399f, -1354.614f, 0.6002f;
						
						case 6:
							return -694.9748f, -1331.552f, 4.1019f;
						
						case 7:
							return -695.9897f, -1330.669f, 4.1019f;
						
						case 8:
							return -704.4351f, -1358.116f, 4.1022f;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return -456.904f, -2269.351f, 7.5208f;
						
						case 1:
							return -457.1874f, -2271.031f, 7.5208f;
						
						case 2:
							return -451.85f, -2266.866f, 6.608f;
						
						case 3:
							return -426.7677f, -2265.777f, 6.6082f;
						
						case 4:
							return -454.2534f, -2268.414f, 6.6082f;
						
						case 5:
							return -460.84f, -2262.911f, 7.521f;
						
						case 6:
							return -430.938f, -2273.629f, 6.608f;
						
						case 7:
							return -432.033f, -2273.013f, 6.608f;
						
						case 8:
							return -442.2232f, -2264.978f, 6.6082f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_202(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(uParam1))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0x8A437068C87289B7(*uParam0), iParam7);
		if (unk_0x895470BB92940DC6(unk_0x8A437068C87289B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_203(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (func_10())
	{
		case 13:
			switch (iParam0)
			{
				case 9:
					return -1;
				
				case 10:
					return 0;
				
				default:
			}
			break;
		
		case 12:
			if (!func_37(8))
			{
				switch (iParam0)
				{
					case 0:
					case 2:
						return -1;
					
					case 1:
					case 3:
						return 0;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return -1;
					
					case 1:
						return 0;
					
					case 2:
						return 1;
					
					case 3:
						return 2;
					}
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
				case 2:
					return -1;
				
				case 1:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
						case 2:
							return -1;
						
						case 1:
						case 3:
							return 0;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 0:
						case 3:
							return -1;
						
						case 1:
						case 4:
							return 0;
						
						case 2:
						case 5:
							return 1;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam0)
					{
						case 0:
						case 4:
							return -1;
						
						case 1:
						case 5:
							return 0;
						
						case 2:
						case 6:
							return 1;
						
						case 3:
						case 7:
							return 2;
						
						default:
					}
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
				case 4:
				case 8:
					return -1;
				
				case 1:
				case 5:
				case 9:
					return 0;
				
				case 2:
				case 6:
				case 10:
					return 1;
				
				case 3:
				case 7:
				case 11:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_205(int iParam0)
{
	switch (func_10())
	{
		case 12:
			if (!func_37(8))
			{
				switch (iParam0)
				{
					case 0:
					case 1:
						return Local_154.f_499[0 /*6*/];
					
					case 2:
					case 3:
						return Local_154.f_499[1 /*6*/];
					
					default:
				}
			}
			else
			{
				return Local_154.f_499[0 /*6*/];
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
				case 1:
					return Local_154.f_499[0 /*6*/];
				
				case 2:
				case 3:
					return Local_154.f_499[1 /*6*/];
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return Local_154.f_499[0 /*6*/];
				
				case 4:
				case 5:
				case 6:
				case 7:
					return Local_154.f_499[1 /*6*/];
				
				case 8:
				case 9:
				case 10:
				case 11:
					return Local_154.f_499[2 /*6*/];
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return Local_154.f_499[0 /*6*/];
						
						case 2:
						case 3:
							return Local_154.f_499[1 /*6*/];
							break;
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
						case 2:
							return Local_154.f_499[0 /*6*/];
						
						case 3:
						case 4:
						case 5:
							return Local_154.f_499[1 /*6*/];
							break;
					}
					break;
				
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return Local_154.f_499[0 /*6*/];
						
						case 4:
						case 5:
						case 6:
						case 7:
							return Local_154.f_499[1 /*6*/];
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (func_10())
	{
		case 13:
			if (iParam0 == 9 || iParam0 == 10)
			{
				return 1;
			}
			break;
		
		case 12:
		case 5:
		case 11:
		case 6:
			return 1;
	}
	return 0;
}

bool func_207(int iParam0)
{
	return unk_0x159BC3DDA80D71AC(Local_154.f_400[iParam0 /*8*/]);
}

bool func_208(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_209(int iParam0)
{
	switch (func_10())
	{
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					if (iParam0 == 6)
					{
						return joaat("g_f_y_lost_01");
					}
					return joaat("g_m_y_lost_01");
				
				case 1:
					return joaat("g_m_y_azteca_01");
				
				case 2:
					return joaat("g_m_y_lost_01");
				
				case 3:
					return joaat("g_m_m_chigoon_02");
				
				case 4:
					return joaat("g_m_y_lost_01");
				
				default:
			}
			break;
		
		case 13:
			switch (Local_154.f_394[0])
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("g_m_m_armgoon_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armgoon_01");
						
						case 3:
							return joaat("g_m_m_armgoon_01");
						
						case 4:
							return joaat("g_m_m_armgoon_01");
						
						case 5:
							return joaat("g_m_m_armgoon_01");
						
						case 6:
							return joaat("g_m_m_armgoon_01");
						
						case 7:
							return joaat("g_m_m_armgoon_01");
						
						case 8:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("g_m_y_mexgoon_02");
						
						case 1:
							return joaat("g_m_y_mexgoon_02");
						
						case 2:
							return joaat("g_m_y_mexgoon_02");
						
						case 3:
							return joaat("g_m_y_mexgoon_02");
						
						case 4:
							return joaat("g_m_y_mexgoon_02");
						
						case 5:
							return joaat("g_m_y_mexgoon_02");
						
						case 6:
							return joaat("g_m_y_mexgoon_02");
						
						case 7:
							return joaat("g_m_y_mexgoon_02");
						
						case 8:
							return joaat("g_m_y_mexgoon_02");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("g_m_m_armgoon_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armboss_01");
						
						case 3:
							return joaat("g_m_m_armgoon_01");
						
						case 4:
							return joaat("g_m_m_armgoon_01");
						
						case 5:
							return joaat("g_m_m_armgoon_01");
						
						case 6:
							return joaat("g_m_m_armgoon_01");
						
						case 7:
							return joaat("g_m_m_armgoon_01");
						
						case 8:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("g_m_y_korean_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						case 3:
							return joaat("g_m_y_korean_01");
						
						case 4:
							return joaat("g_m_y_korean_01");
						
						case 5:
							return joaat("g_m_y_korean_01");
						
						case 6:
							return joaat("g_m_y_korean_01");
						
						case 7:
							return joaat("g_m_y_korean_01");
						
						case 8:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return joaat("g_m_y_korean_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						case 3:
							return joaat("g_m_y_korean_01");
						
						case 4:
							return joaat("g_m_y_korean_01");
						
						case 5:
							return joaat("g_m_y_korean_01");
						
						case 6:
							return joaat("g_m_y_korean_01");
						
						case 7:
							return joaat("g_m_y_korean_01");
						
						case 8:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
		case 6:
			return Local_154.f_546;
			break;
		
		case 11:
			return joaat("s_m_y_blackops_01");
			break;
	}
	return joaat("g_m_m_armgoon_01");
}

int func_210()
{
	switch (func_10())
	{
		case 13:
			return 9;
		
		case 12:
			return 4;
		
		case 5:
			return 4;
		
		case 9:
			return 10;
		
		case 11:
			return 12;
		
		case 6:
			switch (round(Local_154.f_544))
			{
				case 0:
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 8;
				
				default:
			}
			break;
	}
	return 0;
}

int func_211()
{
	switch (func_10())
	{
		case 13:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_212()
{
	if (((((func_10() == 13 || func_10() == 12) || func_10() == 5) || func_10() == 9) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (func_214(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (!unk_0x159BC3DDA80D71AC(Local_154.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_214(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (func_272())
	{
		if (!unk_0x159BC3DDA80D71AC(Local_154.f_42[iParam0]))
		{
			if (func_208(func_271(iParam0)))
			{
				Var0 = { func_270(iParam0) };
				uVar1 = func_268(iParam0);
				if (unk_0x035BBFB481EB12F2(func_219(168, -1, -1, -1) + 1))
				{
					if (func_217())
					{
						if (unk_0x159BC3DDA80D71AC(Local_154.f_39[0]))
						{
							if (func_202(&(Local_154.f_42[iParam0]), Local_154.f_39[0], 26, func_271(iParam0), func_216(iParam0), 1, 1, 1))
							{
								unk_0x8F160110753EB17B(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
								unk_0xC22CF0F8AABFA658(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 0);
								unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 3, 0);
								unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 229, 1);
								unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 128, 0);
								unk_0x13812A3531901D7E(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 0);
								unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 398, 1);
								unk_0x5249BC3946DCDA75(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
								unk_0x82D2BB48A39F1E88(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 512, 1);
								unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), Global_1575021);
								unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
								unk_0x05D0B763CEEA9ABD(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
								unk_0x373635EFD76DFAB3(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), -1);
								if (func_215())
								{
									unk_0x61C47C6F50394A92(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
								}
							}
						}
					}
					else if (func_198(&(Local_154.f_42[iParam0]), 26, func_271(iParam0), Var0, uVar1, 1, 1, 1))
					{
						unk_0x8F160110753EB17B(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
						unk_0xC22CF0F8AABFA658(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 0);
						unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
						unk_0x05D0B763CEEA9ABD(unk_0x8A437068C87289B7(Local_154.f_42[iParam0]), 1);
					}
				}
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
	return 0;
}

bool func_215()
{
	return func_10() == 12;
}

int func_216(int iParam0)
{
	if (iParam0 == 1)
	{
		return 0;
	}
	return -1;
}

int func_217()
{
	if (func_218())
	{
		return 0;
	}
	return 1;
}

bool func_218()
{
	return func_10() == 9;
}

int func_219(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_267(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_263(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_258(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_253(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_248(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_239(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_238();
		
		case 218:
			return func_237();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_236(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_235(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_230(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_225(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_220(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_220(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_224(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_221(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_221(int iParam0, var uParam1)
{
	if (func_224(iParam0, uParam1))
	{
		return (func_223(iParam0, uParam1) + func_222(iParam0, uParam1));
	}
	return 0;
}

int func_222(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_224(int iParam0, int iParam1)
{
	return func_223(iParam0, iParam1) > 0;
}

int func_225(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_229(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_226(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)
{
	if (func_229(iParam0, iParam1))
	{
		return (func_228(iParam0, iParam1) + func_227(iParam0, iParam1));
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_229(int iParam0, int iParam1)
{
	return func_228(iParam0, iParam1) > 0;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_234(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_231(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1)
{
	if (func_234(iParam0, iParam1))
	{
		return (func_233(iParam0, iParam1) + func_232(iParam0, iParam1));
	}
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_234(int iParam0, int iParam1)
{
	return func_233(iParam0, iParam1) > 0;
}

int func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_237()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_238()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_240(iParam0, func_245() + 1));
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_244(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_243(iParam0, iParam1);
			iVar2 = func_242(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_241(iParam0))
		{
			if (iVar0 > Global_262145.f_18093)
			{
				iVar0 = Global_262145.f_18093;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18092)
			{
				iVar0 = Global_262145.f_18092;
			}
			if (iVar0 > Global_262145.f_18091)
			{
				iVar0 = Global_262145.f_18091;
			}
		}
	}
	return iVar0;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18130;
		
		case 10:
			return Global_262145.f_18155;
		
		default:
	}
	return 1;
}

int func_243(int iParam0, int iParam1)
{
	if (func_241(iParam0))
	{
		if (iParam1 >= Global_262145.f_18094)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18131;
		
		case 10:
			return Global_262145.f_18156;
		
		default:
	}
	return 8;
}

int func_244(int iParam0)
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

int func_245()
{
	if (func_247() == func_33())
	{
		return 0;
	}
	return func_246(func_247());
}

int func_246(int iParam0)
{
	if (func_61(iParam0) == func_33())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

int func_247()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_248(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_252(iParam0))
		{
			iVar0 = (iVar0 + func_249(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_249(int iParam0, var uParam1)
{
	if (func_252(iParam0))
	{
		return (func_251(iParam0) + func_250(iParam0, uParam1));
	}
	return 0;
}

int func_250(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_252(int iParam0)
{
	return func_251(iParam0) > 0;
}

int func_253(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_257(iParam0))
		{
			iVar0 = (iVar0 + func_254(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1)
{
	if (func_257(iParam0))
	{
		return (func_256(iParam0) + func_255(iParam0, iParam1));
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_257(int iParam0)
{
	return func_256(iParam0) > 0;
}

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_262(iParam0))
		{
			iVar0 = (iVar0 + func_259(iParam0));
		}
	}
	return iVar0;
}

int func_259(int iParam0)
{
	if (func_262(iParam0))
	{
		return (func_261(iParam0) + func_260(iParam0));
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_262(int iParam0)
{
	return func_261(iParam0) > 0;
}

int func_263(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_264(iParam0));
	return iVar0;
}

int func_264(int iParam0)
{
	if (func_266(iParam0))
	{
		if (func_265(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

float func_268(int iParam0)
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 138.3995f;
					
					case 1:
						return 143.5995f;
					
					case 2:
						return 72.3994f;
					
					case 3:
						return 133.7989f;
					
					case 4:
						return 242.1995f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 138.3995f;
					
					case 1:
						return 143.5995f;
					
					case 2:
						return 72.3994f;
					
					case 3:
						return 133.7989f;
					
					case 4:
						return 242.1995f;
					
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 29.2012f;
					
					case 1:
						return 293.3999f;
					
					case 2:
						return 144.6493f;
					
					case 3:
						return 305.7995f;
					
					case 4:
						return 265.1998f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 29.2012f;
					
					case 1:
						return 293.3999f;
					
					case 2:
						return 144.6493f;
					
					case 3:
						return 305.7995f;
					
					case 4:
						return 265.1998f;
					
					default:
				}
				break;
			}
	}
	return 124.5999f;
}

bool func_269()
{
	return func_10() == 13;
}

Vector3 func_270(int iParam0)
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 1158.124f, -4352.054f, 0.2f;
					
					case 1:
						return 2568.467f, -3494.837f, 0.2f;
					
					case 2:
						return -2046.004f, -4112.687f, 0.2f;
					
					case 3:
						return -2804.802f, -2614.12f, 0.2f;
					
					case 4:
						return -414.3029f, -4404.976f, 0.2f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_154.f_394[0])
				{
					case 0:
						return 1157.04f, -4351.059f, 0.2f;
					
					case 1:
						return 2567.951f, -3493.595f, 0.2f;
					
					case 2:
						return -2045.257f, -4111.685f, 0.2f;
					
					case 3:
						return -2804.355f, -2612.158f, 0.2f;
					
					case 4:
						return -412.17f, -4408.401f, 0.2f;
					
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_154.f_394[0])
				{
					case 0:
						return -3017.04f, -1744.734f, 0.2f;
					
					case 1:
						return 362.1313f, -4237.417f, 0.2f;
					
					case 2:
						return -1186.682f, -4125.632f, 0.2f;
					
					case 3:
						return 3186.52f, -3343.655f, 0.2f;
					
					case 4:
						return 2227.898f, -4272.729f, 0.2f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_154.f_394[0])
				{
					case 0:
						return -3016.528f, -1745.616f, 0.2f;
					
					case 1:
						return 362.1313f, -4237.417f, 0.2f;
					
					case 2:
						return -1187.493f, -4126.532f, 0.2f;
					
					case 3:
						return 3186.269f, -3345.155f, 0.2f;
					
					case 4:
						return 2228.611f, -4273.838f, 0.2f;
					
					default:
				}
				break;
			}
	}
	return 1678.634f, 2307.834f, 74.3844f;
}

int func_271(int iParam0)
{
	switch (func_10())
	{
		case 12:
		case 13:
			if (iParam0 == 0)
			{
				return joaat("a_m_y_beach_03");
			}
			else
			{
				return joaat("a_m_y_busicas_01");
			}
			break;
		
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					if (iParam0 == 6)
					{
						return joaat("g_f_y_lost_01");
					}
					return joaat("g_m_y_lost_01");
				
				case 1:
					return joaat("g_m_y_azteca_01");
				
				case 2:
					return joaat("g_m_y_lost_01");
				
				case 3:
					return joaat("g_m_m_chigoon_02");
				
				case 4:
					return joaat("g_m_y_lost_01");
				
				default:
			}
			break;
	}
	return joaat("g_m_y_strpunk_01");
}

int func_272()
{
	if (func_274() || func_273())
	{
		return 1;
	}
	return 0;
}

bool func_273()
{
	return func_10() == 8;
}

bool func_274()
{
	return func_275(func_10());
}

int func_275(int iParam0)
{
	if (iParam0 == 12 || iParam0 == 13)
	{
		return 1;
	}
	return 0;
}

int func_276()
{
	switch (func_10())
	{
		case 13:
			return 2;
		
		case 12:
			return 2;
		
		default:
	}
	return 0;
}

int func_277()
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		Var0 = { func_17(Local_154.f_54) };
	}
	if (!func_343())
	{
		func_34(2);
		return 1;
	}
	if (!func_37(2))
	{
		if (func_343() || func_342(Var0, &Var1, &uVar2, &uVar3, 1, 1, 1))
		{
			iVar4 = 0;
			while (iVar4 < func_341())
			{
				if (func_208(func_340(iVar4)) && !unk_0x159BC3DDA80D71AC(Local_154.f_39[iVar4]))
				{
					if (func_343())
					{
						Var1 = { func_339(iVar4) };
						uVar2 = func_336(iVar4);
					}
					if (unk_0xA8911798335DCDA2(func_282(168, -1, 1, -1, -1, -1) + 1))
					{
						if (func_279(&(Local_154.f_39[iVar4]), func_340(iVar4), Var1, uVar2, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
							{
								if (unk_0x5B38E054B758C032(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), "MPBitset"))
								{
									iVar5 = unk_0x05351AF95891EE5C(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), "MPBitset");
								}
								unk_0x191DDA30577F440A(&iVar5, 10);
								unk_0x191DDA30577F440A(&iVar5, 11);
								unk_0x6C9577C090944B92(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), "MPBitset", iVar5);
							}
							if (func_274())
							{
								unk_0x4B7B525F9E13CE0C(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 1);
							}
							unk_0x78683FED1CF3DDE3(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 0, 0);
							unk_0x410F7E904016F85F(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), 0, 0);
							unk_0x8F160110753EB17B(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), 1);
							unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 0);
							unk_0xC22CF0F8AABFA658(unk_0xD93F965CFAC1D06A(Local_154.f_39[iVar4]), 0);
							unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 1);
							unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 1);
							unk_0x788A8B142314D1E9(unk_0x854C404AEB476240(Local_154.f_39[iVar4]), 0);
							func_278(unk_0x854C404AEB476240(Local_154.f_39[iVar4]));
						}
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < func_341())
			{
				if (unk_0x159BC3DDA80D71AC(Local_154.f_39[iVar4]))
				{
					func_34(2);
				}
				iVar4++;
			}
		}
	}
	return func_37(2);
}

void func_278(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x040C47F5DFA52DB2(iParam0, 0);
	}
}

int func_279(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F1DFD4C1BC6827A(iParam1))
	{
		return 0;
	}
	if (!unk_0xA8911798335DCDA2(1))
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
		unk_0xB7D390F8F682127B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0x419E13582192CFEA(iVar1))
	{
		*uParam0 = unk_0x431E33F39AEFC4C4(iVar1);
		Global_2544210.f_6610 = iVar1;
		if (unk_0xB7D6400C89373777(*uParam0))
		{
			if (bParam13)
			{
				unk_0x6DA4D1FB7DCE9FD8(iVar1, 1);
			}
			unk_0x8B58E7AC53EED9F1(iVar1, iParam8);
			if (unk_0x895470BB92940DC6(iVar1))
			{
				if (bParam6)
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
				}
				else
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x84CE5E7CD3A7E197(*uParam0, unk_0x1146A9AE09CE2B14(), 1);
				}
			}
			unk_0x2AC1ECA957EB9158(iVar1, bParam7);
			unk_0xF4B0F1D16C5ECDB7(iVar1, 1);
			if (bParam10)
			{
				unk_0xD1A5295FE7ADF001(iVar1);
				unk_0x65FFB0A9D15E084E(iVar1, 5, 5, 1f);
			}
			func_280(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_280(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_281(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
	{
		if ((Global_2405077.f_2919[1 /*6*/].f_5 == iParam3 && Global_2405077.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2405077.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405077.f_2919[iVar0 /*6*/] = { Global_2405077.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405077.f_2919[1 /*6*/] = { Param0 };
		Global_2405077.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_281(int iParam0, struct<3> Param1, int iParam2)
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
			if (Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0BCA9ADE67DF9DD8((Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_335(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_332(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_327(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_314(iParam1, iParam3, iParam4, unk_0xC502CD39B4994F3A(iParam5), 0, 0, 0);
		
		case 233:
			return func_304(iParam1, iParam3, iParam4, unk_0xC502CD39B4994F3A(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_303(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_301(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_300(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_294(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_287(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_283(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_283(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_286(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_285(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_284(func_246(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_224(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_223(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_284(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_293(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_292(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_288(func_246(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_229(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_228(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_33())
			{
				if (func_290(iParam2, 1))
				{
					Var0 = { func_289(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

Vector3 func_289(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_304;
}

bool func_290(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_291(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_33();
}

int func_291(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_33())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_293(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_294(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_299(iParam0))
		{
			iVar0 = (iVar0 + func_298(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_297(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_296(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_295(func_246(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_234(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_233(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_295(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_296(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_297(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_246(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_299(int iParam0)
{
	return 0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_302(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_302(int iParam0)
{
	return 1;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_241(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_240(iParam0, func_245() + 1));
	}
	return iVar0;
}

int func_304(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_313(iParam0))
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_310(iParam0, func_246(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_33())
		{
			iVar0 = (iVar0 + func_307(iParam0, func_246(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_306(0, iParam1) != -1)
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_305(func_246(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_252(iParam0))
		{
			iVar0 = (iVar0 + func_251(iParam0));
		}
	}
	return iVar0;
}

int func_305(var uParam0, int iParam1)
{
	return 2;
}

int func_306(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_307(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_308(5328, -1, 0);
			if (unk_0x234B68AC2E35ED5A(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_309(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_310(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_313(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_312(iParam0))
	{
		iVar0 = func_312(iParam0);
	}
	else if (iVar0 < func_311(iParam0))
	{
		iVar0 = func_311(iParam0);
	}
	return iVar0;
}

int func_311(int iParam0)
{
	return 1;
}

int func_312(int iParam0)
{
	return 4;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_326(iParam0))
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_319(iParam0, func_246(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_33())
		{
			iVar0 = (iVar0 + func_318(iParam0, func_246(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_317(0, iParam1) != -1)
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_315(func_246(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_257(iParam0))
		{
			iVar0 = (iVar0 + func_256(iParam0));
		}
	}
	return iVar0;
}

int func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_316(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_316(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_317(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_325(iParam0))
	{
		iVar1 = func_324(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_323(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_322(iParam2))
		{
			iVar0 = func_322(iParam2);
		}
	}
	if (iVar0 > func_321(iParam0))
	{
		iVar0 = func_321(iParam0);
	}
	else if (iVar0 < func_320(iParam0))
	{
		iVar0 = func_320(iParam0);
	}
	return iVar0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_321(int iParam0)
{
	if (!func_325(iParam0))
	{
		if (func_326(iParam0))
		{
			if (func_316(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_322(int iParam0)
{
	if (iParam0 == func_33() || Global_1590908[iParam0 /*874*/].f_267.f_266 == 0)
	{
		return 50;
	}
	return (50 - Global_1590908[iParam0 /*874*/].f_267.f_266.f_3);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_324(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_326(int iParam0)
{
	if (func_325(iParam0) || func_323(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_330(iParam0, func_245() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_329(iParam0))
		{
			iVar0 = (iVar0 + func_330(iParam0, func_245() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_328(iParam0, func_245() + 1));
	}
	if (!bParam3)
	{
		if (func_262(iParam0))
		{
			iVar0 = (iVar0 + func_261(iParam0));
		}
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_331(iParam0))
	{
		if (iParam2 <= Global_262145.f_21387)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21388)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_329(iParam0))
	{
		if (iParam1 < Global_262145.f_21347)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 14:
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

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_334(iParam0, func_245() + 1, iParam2));
	iVar0 = (iVar0 + func_333(iParam0));
	return iVar0;
}

int func_333(int iParam0)
{
	if (func_266(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_334(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

float func_336(int iParam0)
{
	if (func_218())
	{
		switch (Local_154.f_384)
		{
			case 0:
				if (iParam0 == 0)
				{
					return 126f;
				}
				return 261.598f;
			
			case 1:
				if (iParam0 == 0)
				{
					return 73.595f;
				}
				return 210.799f;
			
			case 2:
				if (iParam0 == 0)
				{
					return 0f;
				}
				return 34.2f;
			
			case 3:
				if (iParam0 == 0)
				{
					return 133.398f;
				}
				return 341.5993f;
			
			case 4:
				if (iParam0 == 0)
				{
					return 270.399f;
				}
				return 133.6f;
			}
		
		default:
	}
	if (func_337())
	{
		return 100.5717f;
	}
	if (func_215())
	{
		switch (Local_154.f_384)
		{
			case 0:
				return 5.6f;
			
			case 1:
				return 293.3999f;
			
			case 2:
				return 144.6493f;
			
			case 3:
				return 305.7995f;
			
			case 4:
				return 265.1998f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_154.f_384)
		{
			case 0:
				return 1.2f;
			
			case 1:
				return 46.2f;
			
			case 2:
				return 273.199f;
			
			case 3:
				return 64.2f;
			
			case 4:
				return 2f;
			}
		
		default:
	}
	return 114.2482f;
}

bool func_337()
{
	return func_338(func_10());
}

int func_338(int iParam0)
{
	if ((((iParam0 == 8 || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return 1;
	}
	return 0;
}

Vector3 func_339(int iParam0)
{
	switch (func_10())
	{
		case 12:
			switch (Local_154.f_384)
			{
				case 0:
					return -3018.016f, -1737.731f, 1.125f;
				
				case 1:
					return 369.5443f, -4234.714f, 0f;
				
				case 2:
					return -1190.621f, -4129.769f, 0f;
				
				case 3:
					return 3191.532f, -3339.914f, 0.75f;
				
				case 4:
					return 2233.975f, -4274.487f, 0f;
				
				default:
			}
			break;
		
		case 13:
			switch (Local_154.f_384)
			{
				case 0:
					return 1154.318f, -4355.971f, 0f;
				
				case 1:
					return 2564.08f, -3499.01f, -0.1876f;
				
				case 2:
					return -2051.98f, -4110.346f, 0f;
				
				case 3:
					return -2808.998f, -2617.194f, 0.9375f;
				
				case 4:
					return -407.7797f, -4408.372f, 0f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return 1704.879f, 3286.602f, 40.148f;
					}
					return 1689.943f, 3276.071f, 40.045f;
				
				case 1:
					if (iParam0 == 0)
					{
						return -25.427f, 3043.566f, 40.003f;
					}
					return -0.217f, 3046.414f, 39.661f;
				
				case 2:
					if (iParam0 == 0)
					{
						return -2095.506f, 2637.109f, 1.9348f;
					}
					return -2117.166f, 2616.247f, 0.0221f;
				
				case 3:
					if (iParam0 == 0)
					{
						return 212.767f, 2467.536f, 54.686f;
					}
					return 223.4591f, 2448.032f, 56.2378f;
				
				case 4:
					if (iParam0 == 0)
					{
						return 2121.68f, 2889.23f, 46.279f;
					}
					return 2110.948f, 2907.49f, 46.652f;
				
				default:
			}
			break;
	}
	return -1193.289f, -2245.799f, 12.9446f;
}

int func_340(int iParam0)
{
	switch (func_10())
	{
		case 12:
		case 13:
			return joaat("marquis");
		
		case 9:
			switch (Local_154.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return joaat("gburrito");
					}
					return joaat("daemon");
				
				case 1:
					if (iParam0 == 0)
					{
						return joaat("sadler");
					}
					return joaat("phoenix");
				
				case 2:
					return joaat("gburrito");
				
				case 3:
					return joaat("bison");
				
				case 4:
					return joaat("gburrito");
				
				default:
			}
			break;
	}
	return joaat("marquis");
}

int func_341()
{
	switch (func_10())
	{
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 9:
			return 2;
		
		default:
	}
	return 0;
}

int func_342(struct<3> Param0, var uParam1, float fParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	while (true)
	{
		if (unk_0x87BE0E4947F798AC(Param0, iParam4, uParam1, uParam2, uParam3, 1, 1077936128, 0))
		{
			if (func_128(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam4++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam1 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_343()
{
	if (func_274())
	{
		return 1;
	}
	if (func_218())
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	int iVar0;
	
	if (func_37(1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_349(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (!unk_0x419E13582192CFEA(func_40(iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	if (func_337())
	{
		if (func_348() == 2)
		{
			func_345();
			if (!unk_0x159BC3DDA80D71AC(Local_154.f_53))
			{
				return 0;
			}
		}
	}
	func_34(1);
	return 1;
}

int func_345()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	
	if (!unk_0x159BC3DDA80D71AC(Local_154.f_53))
	{
		if (func_208(joaat("buzzard")))
		{
			Var0 = { func_347() };
			uVar1 = func_346();
			if (func_279(&(Local_154.f_53), joaat("buzzard"), Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0xFC4706297CB9D7D2(unk_0x854C404AEB476240(Local_154.f_53), 1, 1);
				if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
				{
					if (unk_0x5B38E054B758C032(unk_0x854C404AEB476240(Local_154.f_53), "MPBitset"))
					{
						iVar2 = unk_0x05351AF95891EE5C(unk_0x854C404AEB476240(Local_154.f_53), "MPBitset");
					}
					unk_0x191DDA30577F440A(&iVar2, 10);
					unk_0x191DDA30577F440A(&iVar2, 11);
					unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_154.f_53), "MPBitset", iVar2);
				}
				unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_154.f_53), 0, 0);
				unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(Local_154.f_53), 1);
				unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_154.f_53), 1);
				unk_0x788A8B142314D1E9(unk_0x854C404AEB476240(Local_154.f_53), 0);
			}
		}
	}
	return 0;
}

float func_346()
{
	switch (Local_154.f_394[0])
	{
		case 0:
			return 291.9019f;
		
		case 1:
			return 38.8973f;
		
		case 2:
			return 170.3048f;
		
		case 3:
			return 104.1791f;
		
		case 4:
			return 6.7766f;
		
		case 5:
			return 290.7564f;
		
		case 6:
			return 81.0553f;
		
		case 7:
			return 210.7148f;
		
		case 8:
			return 48.5395f;
		
		case 9:
			return 172.8551f;
		
		case 10:
			return 227.376f;
		
		case 11:
			return 109.6783f;
		
		default:
	}
	return 0f;
}

Vector3 func_347()
{
	switch (Local_154.f_394[0])
	{
		case 0:
			return -1249.752f, -2863.093f, 12.9449f;
		
		case 1:
			return -1365.395f, -2587.993f, 12.9449f;
		
		case 2:
			return -924.1804f, -3067.145f, 12.9444f;
		
		case 3:
			return -975.8615f, -3410.342f, 12.8401f;
		
		case 4:
			return -1819.134f, -3186.567f, 12.9444f;
		
		case 5:
			return -1902.047f, -3139.103f, 12.9444f;
		
		case 6:
			return -1163.066f, -2256.789f, 12.9446f;
		
		case 7:
			return -1694.218f, -2741.422f, 14.2526f;
		
		case 8:
			return -999.9483f, -2950.592f, 12.9545f;
		
		case 9:
			return -1115.896f, -2946.971f, 12.9451f;
		
		case 10:
			return -1299.238f, -2136.711f, 12.9248f;
		
		case 11:
			return -1266.912f, -2471.362f, 12.9452f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_348()
{
	return Local_154.f_582;
}

int func_349(int iParam0)
{
	struct<31> Var0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	
	if (!unk_0x159BC3DDA80D71AC(Local_154.f_35[iParam0]))
	{
		if (func_365(iParam0, &(Local_154.f_25), &(Local_154.f_28)))
		{
			if (func_274())
			{
				Local_154.f_10[iParam0 /*3*/] = { Local_154.f_25 };
				Local_154.f_20[iParam0] = Local_154.f_28;
				unk_0x191DDA30577F440A(&(Local_154.f_24), iParam0);
			}
			else if (!func_16(Local_154.f_10[iParam0 /*3*/], 0f, 0f, 0f, 0))
			{
				if (iParam0 == 0 || (iParam0 > 0 && unk_0x234B68AC2E35ED5A(Local_154.f_24, (iParam0 - 1))))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_154.f_24, iParam0))
					{
						if (func_208(func_364()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0.f_30 = 1;
							Var0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_337())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var1 = { func_362(Local_154.f_25, Local_154.f_28, 20f) };
							if (func_45(Local_154.f_25, Var1, func_364(), 0, &(Local_154.f_10[iParam0 /*3*/]), &(Local_154.f_20[iParam0]), &Var0))
							{
								unk_0x191DDA30577F440A(&(Local_154.f_24), iParam0);
							}
						}
					}
				}
			}
		}
		if (func_208(func_364()))
		{
			if (unk_0xA8911798335DCDA2(func_282(168, -1, 1, -1, -1, -1)))
			{
				if (unk_0x234B68AC2E35ED5A(Local_154.f_24, iParam0))
				{
					if (func_279(&(Local_154.f_35[iParam0]), func_364(), Local_154.f_10[iParam0 /*3*/], Local_154.f_20[iParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xFC4706297CB9D7D2(unk_0x854C404AEB476240(Local_154.f_35[iParam0]), 1, 1);
						unk_0xB7D390F8F682127B(Local_154.f_10[iParam0 /*3*/], 20f, 0, 0, 0, 0, 0, 0);
						if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
						{
							if (unk_0x5B38E054B758C032(func_40(iParam0), "MPBitset"))
							{
								iVar2 = unk_0x05351AF95891EE5C(func_40(iParam0), "MPBitset");
							}
							unk_0x191DDA30577F440A(&iVar2, 10);
							unk_0x191DDA30577F440A(&iVar2, 11);
							unk_0x6C9577C090944B92(func_40(iParam0), "MPBitset", iVar2);
						}
						if (!func_6())
						{
							func_359(func_40(iParam0), iParam0, -1292453789, 0, 0);
						}
						if (func_274())
						{
							unk_0x440657FAB96ABF59(func_40(iParam0), 1);
							unk_0x4B7B525F9E13CE0C(func_40(iParam0), 1);
							unk_0xF8E5239A2E6E0754(func_40(iParam0), Global_262145.f_15293);
							unk_0xC595907BB71C921D(func_40(iParam0), Global_262145.f_15293, 0);
							unk_0x0D8475829632C03A(func_40(iParam0), 0);
							unk_0x63A152463BA5D8EC(func_40(iParam0), 0);
							unk_0xA93D9EAF176A34D2(func_40(iParam0), 1);
							if (func_358())
							{
								unk_0x9982130A0A4E9E8E(func_40(iParam0), func_357());
							}
							else if (func_215())
							{
								unk_0x9982130A0A4E9E8E(func_40(iParam0), Global_262145.f_15303);
							}
							else if (func_269())
							{
								unk_0x9982130A0A4E9E8E(func_40(iParam0), Global_262145.f_15304);
							}
						}
						else if (func_337())
						{
							if (func_364() == joaat("cuban800"))
							{
								unk_0xC612552622E74D36(func_40(iParam0), 132, 64);
								unk_0xA2FEFE3BBCD9FB23(func_40(iParam0), 111, 156);
							}
							else
							{
								unk_0xC612552622E74D36(func_40(iParam0), 7, 7);
								unk_0xA2FEFE3BBCD9FB23(func_40(iParam0), 7, 7);
							}
							unk_0xF8E5239A2E6E0754(func_40(iParam0), Global_262145.f_15288);
							unk_0xC595907BB71C921D(func_40(iParam0), Global_262145.f_15288, 0);
							unk_0x510B8B2F51ECC627(func_40(iParam0), 0);
							bVar3 = func_356();
							Local_154.f_385 = func_355(bVar3);
							Local_154.f_386 = func_354(bVar3);
							Local_154.f_387 = func_353(bVar3);
						}
						else
						{
							unk_0xAFB5FBF26893A713(func_40(iParam0), to_float(Global_262145.f_15292));
							unk_0xFA657401A11FF221(func_40(iParam0), to_float(Global_262145.f_15292));
							unk_0xEBF08082D648C482(func_40(iParam0), to_float(Global_262145.f_15292));
							unk_0xC612552622E74D36(func_40(iParam0), 17, 12);
							unk_0xA2FEFE3BBCD9FB23(func_40(iParam0), 1, 156);
							if (func_352())
							{
								unk_0xED4E91A1FC7ABBF6(func_40(iParam0), 0);
							}
						}
						unk_0x410F7E904016F85F(func_40(iParam0), 0, 0);
						unk_0x1FB6C0DF282CC98A(func_40(iParam0), 1);
						unk_0x4551B6FEB638C979(func_40(iParam0), 1);
						unk_0x788A8B142314D1E9(func_40(iParam0), 0);
						unk_0x1F7ED1C13023483B(func_40(iParam0), 0);
						if (!func_337())
						{
							unk_0xAC2B08493719B297(func_40(iParam0), 1);
						}
						unk_0x3CCFC106A6738860(func_40(iParam0), 0);
						if (func_350())
						{
							unk_0x47DE5E87A1AC7CBD(func_40(iParam0), 0.08f);
						}
						else
						{
							unk_0x47DE5E87A1AC7CBD(func_40(iParam0), 0.2f);
						}
						unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_154.f_35[iParam0]), 1);
						func_278(func_40(iParam0));
						Local_154.f_25 = { 0f, 0f, 0f };
						Local_154.f_29 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_350()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_274())
	{
		if (Global_262145.f_15477)
		{
			return 0;
		}
		iVar0 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar0, 0))
		{
			return 1;
		}
	}
	else if (func_337())
	{
		if (Global_262145.f_15475)
		{
			return 0;
		}
		iVar1 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar1, 2))
		{
			return 1;
		}
	}
	else
	{
		if (Global_262145.f_15476)
		{
			return 0;
		}
		iVar2 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar2, 4))
		{
			return 1;
		}
	}
	return 0;
}

var func_351()
{
	return Global_2595543[func_32()];
}

int func_352()
{
	int iVar0;
	
	if (Global_262145.f_15479)
	{
		return 0;
	}
	if (!func_337() && !func_274())
	{
		iVar0 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar0, 5))
		{
			return 1;
		}
	}
	return 0;
}

var func_353(bool bParam0)
{
	if (bParam0)
	{
		return Global_262145.f_15308;
	}
	return Global_262145.f_15290;
}

var func_354(bool bParam0)
{
	if (bParam0)
	{
		return Global_262145.f_15309;
	}
	return Global_262145.f_15291;
}

var func_355(bool bParam0)
{
	if (bParam0)
	{
		return Global_262145.f_15307;
	}
	return Global_262145.f_15289;
}

int func_356()
{
	int iVar0;
	
	if (Global_262145.f_15478)
	{
		return 0;
	}
	if (func_337())
	{
		iVar0 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar0, 3))
		{
			return 1;
		}
	}
	return 0;
}

float func_357()
{
	if (func_274())
	{
		return Global_262145.f_15306;
	}
	return 0f;
}

int func_358()
{
	int iVar0;
	
	if (Global_262145.f_15480)
	{
		return 0;
	}
	if (func_274())
	{
		iVar0 = func_351();
		if (unk_0x234B68AC2E35ED5A(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8BA4AD00568AB5FC("ContrabandOwner", 3))
	{
		iVar0 = func_28();
		func_361(iParam1, &iVar0);
		unk_0x6C9577C090944B92(iParam0, "ContrabandOwner", iVar0);
		if (unk_0x8BA4AD00568AB5FC("ContrabandDeliveryType", 3))
		{
			unk_0x6C9577C090944B92(iParam0, "ContrabandDeliveryType", iParam2);
		}
		func_360(iParam2);
		if (iParam2 == -81613951)
		{
			if (unk_0x8BA4AD00568AB5FC("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				unk_0x6C9577C090944B92(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_360(int iParam0)
{
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_460 != iParam0)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_460 = iParam0;
	}
}

void func_361(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0 && iParam0 < 8)
	{
		iVar0 = (24 + iParam0);
		unk_0x191DDA30577F440A(iParam1, iVar0);
	}
}

Vector3 func_362(struct<3> Param0, float fParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_363(Var0, fParam1);
	Var0.x = (Var0.x * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_363(struct<3> Param0, float fParam1)
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

int func_364()
{
	if (func_337())
	{
		switch (func_348())
		{
			case 0:
			case 1:
			case 7:
				return joaat("cuban800");
			
			case 2:
				return joaat("titan");
			}
		
		default:
	}
	if (func_274())
	{
		return joaat("tug");
	}
	return joaat("brickade");
}

int func_365(int iParam0, var uParam1, var uParam2)
{
	struct<31> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	
	if (func_35())
	{
		if (iParam0 == 0 || (iParam0 > 0 && unk_0x159BC3DDA80D71AC(Local_154.f_35[(iParam0 - 1)])))
		{
			if (!func_131(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0.f_30 = 1;
			Var0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var2 = { func_371(iParam0, Local_154.f_29) };
			fVar3 = func_370(iParam0, Local_154.f_29);
			Var1 = { func_362(Var2, fVar3, 20f) };
			if (func_45(Var2, Var1, func_364(), 0, &Var2, &fVar3, &Var0))
			{
				*uParam1 = { Var2 };
				*uParam2 = fVar3;
				Local_154.f_10[iParam0 /*3*/] = { *uParam1 };
				Local_154.f_20[iParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2405077.f_681 > 1)
				{
					if (Global_2405077.f_675 > 2)
					{
						bVar4 = true;
					}
				}
				if (!func_131(Global_2405077.f_682))
				{
					if (Global_2405077.f_675 > 2)
					{
						if (!func_16(Global_2405077.f_682, Var2, 0))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					Global_2405077.f_675 = 0;
					func_180();
					func_179();
					Local_154.f_29++;
					if (Local_154.f_29 > 2)
					{
						*uParam1 = { func_371(iParam0, 0) };
						*uParam2 = func_370(iParam0, 0);
						Local_154.f_10[iParam0 /*3*/] = { *uParam1 };
						Local_154.f_20[iParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_337())
	{
		*uParam1 = { func_369(iParam0) };
		*uParam2 = func_368(iParam0);
		return 1;
	}
	else
	{
		*uParam1 = { func_367() };
		*uParam2 = func_366();
		return 1;
	}
	return 0;
}

float func_366()
{
	if (func_215())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				return 110.1267f;
			
			case 1:
				return 93.7369f;
			
			case 2:
				return 179.0316f;
			
			case 3:
				return 0.3224f;
			
			case 4:
				return 183.994f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				return 175.892f;
			
			case 1:
				return 248.6986f;
			
			case 2:
				return 133.4317f;
			
			case 3:
				return 137.4506f;
			
			case 4:
				return 167.3423f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_367()
{
	if (func_215())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				return -808.96f, -1507.267f, 0f;
			
			case 1:
				return 87.946f, -2274.033f, 0f;
			
			case 2:
				return 421.2115f, -2759.854f, 0f;
			
			case 3:
				return 774.3229f, -2884.722f, 0f;
			
			case 4:
				return 623.0291f, -3248.27f, 0f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				return -114.8788f, -2777.618f, 0f;
			
			case 1:
				return 880.7318f, -2652.588f, 0f;
			
			case 2:
				return -570.7896f, -2778.848f, 0f;
			
			case 3:
				return -720.5604f, -1347.188f, 0f;
			
			case 4:
				return -485.6249f, -2277.072f, 0f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_368(int iParam0)
{
	switch (Local_154.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_154.f_394[iParam0])
			{
				case 0:
					return 103.3978f;
				
				case 1:
					return 125.9975f;
				
				case 2:
					return 91.5969f;
				
				case 3:
					return 132.3964f;
				
				case 4:
					return 191.7962f;
				
				case 5:
					return 15.1962f;
				
				case 6:
					return 290.1954f;
				
				case 7:
					return 100.995f;
				
				case 8:
					return 48.3939f;
				
				case 9:
					return 104.9941f;
				
				case 10:
					return 12.7939f;
				
				case 11:
					return 109.3935f;
				
				case 12:
					return 63.1932f;
				
				case 13:
					return 296.993f;
				
				case 14:
					return 130.9911f;
				
				case 15:
					return 306.3914f;
				
				case 16:
					return 9.3913f;
				
				case 17:
					return 307.7906f;
				
				case 18:
					return 305.589f;
				
				case 19:
					return 330.3874f;
				
				case 20:
					return 117.6098f;
				
				case 21:
					return 131.1266f;
				
				case 22:
					return 192.5231f;
				
				case 23:
					return 125.385f;
				
				case 24:
					return 195.3724f;
				
				case 25:
					return 86.6037f;
				
				case 26:
					return 317.811f;
				
				case 27:
					return 303.5216f;
				
				case 28:
					return 242.0844f;
				
				case 29:
					return 99.0054f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_154.f_394[iParam0])
			{
				case 0:
					return 329.1949f;
				
				case 1:
					return 60.5958f;
				
				case 2:
					return 107.7927f;
				
				case 3:
					return 61.1982f;
				
				case 4:
					return 330.5976f;
				
				case 5:
					return 330.5976f;
				
				case 6:
					return 109.1921f;
				
				case 7:
					return 213.3918f;
				
				case 8:
					return 114.7918f;
				
				case 9:
					return 195.191f;
				
				case 10:
					return 158.391f;
				
				case 11:
					return 87.1908f;
				
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_369(int iParam0)
{
	switch (Local_154.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_154.f_394[iParam0])
			{
				case 0:
					return -968.1948f, -2889.675f, 12.9599f;
				
				case 1:
					return -960.1045f, -3067.625f, 12.9444f;
				
				case 2:
					return -1067.529f, -3154.738f, 13.0472f;
				
				case 3:
					return -930.1005f, -3121.037f, 12.9444f;
				
				case 4:
					return -1086.102f, -2977.599f, 12.9449f;
				
				case 5:
					return -1708.297f, -2959.572f, 12.9448f;
				
				case 6:
					return -1227.573f, -2346.825f, 12.9451f;
				
				case 7:
					return -1101.446f, -2400.557f, 12.9451f;
				
				case 8:
					return -1025.158f, -2429.9f, 12.9445f;
				
				case 9:
					return -979.2667f, -2373.14f, 12.9445f;
				
				case 10:
					return -1070.736f, -2478.907f, 12.9446f;
				
				case 11:
					return -1297.445f, -2437.89f, 12.9451f;
				
				case 12:
					return -1291.242f, -2303.709f, 13.0883f;
				
				case 13:
					return -1097.962f, -3434.013f, 12.9451f;
				
				case 14:
					return -1114.178f, -2966.988f, 12.9448f;
				
				case 15:
					return -1730.189f, -2946f, 12.9443f;
				
				case 16:
					return -1677.477f, -3094.124f, 12.9447f;
				
				case 17:
					return -1412.524f, -3248.308f, 12.9449f;
				
				case 18:
					return -1514.502f, -3199.309f, 12.9449f;
				
				case 19:
					return -1602.308f, -3134.281f, 12.9449f;
				
				case 20:
					return -1275.201f, -2842.465f, 12.9476f;
				
				case 21:
					return -1257.471f, -2804.208f, 12.9502f;
				
				case 22:
					return -1387.523f, -2721.518f, 12.9449f;
				
				case 23:
					return -1306.913f, -2766.759f, 12.9449f;
				
				case 24:
					return -1441.124f, -2764.755f, 12.9449f;
				
				case 25:
					return -1396.843f, -2642.261f, 12.9449f;
				
				case 26:
					return -1305.934f, -3319.571f, 12.945f;
				
				case 27:
					return -1180.561f, -3380.75f, 12.945f;
				
				case 28:
					return -1749.98f, -2842.727f, 14.1329f;
				
				case 29:
					return -1503.618f, -2733.548f, 12.9449f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_154.f_394[iParam0])
			{
				case 0:
					return -1230.741f, -2878.474f, 12.9451f;
				
				case 1:
					return -1399.54f, -2559.158f, 12.9451f;
				
				case 2:
					return -939.5087f, -3095.118f, 12.9444f;
				
				case 3:
					return -1003.699f, -3407.047f, 12.8401f;
				
				case 4:
					return -1825.004f, -3158.986f, 12.9444f;
				
				case 5:
					return -1870.778f, -3132.809f, 12.9444f;
				
				case 6:
					return -1204.345f, -2252.822f, 12.9445f;
				
				case 7:
					return -1710.99f, -2776.27f, 14.1329f;
				
				case 8:
					return -1000.948f, -2915.138f, 12.9488f;
				
				case 9:
					return -1085.086f, -2930.166f, 12.9456f;
				
				case 10:
					return -1256.457f, -2150.702f, 12.9248f;
				
				case 11:
					return -1300.874f, -2478.351f, 12.9452f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_370(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 208.6f;
						
						case 2:
							return 299.4024f;
						
						case 3:
							return 0.3993f;
						
						case 4:
							return 48f;
						
						case 5:
							return 0f;
						
						case 6:
							return 315.1989f;
						
						case 7:
							return 218.9982f;
						
						case 8:
							return 331.6f;
						
						case 9:
							return 86.546f;
						
						case 10:
							return 151.6492f;
						
						case 11:
							return 315.3995f;
						
						case 12:
							return 169.0126f;
						
						case 13:
							return 233.9757f;
						
						case 14:
							return 270.3038f;
						
						case 15:
							return 164.4331f;
						
						case 16:
							return 89.2575f;
						
						case 17:
							return 1.5266f;
						
						case 18:
							return 170.6689f;
						
						case 19:
							return 351.747f;
						
						case 20:
							return 285.2916f;
						
						case 21:
							return 306.6468f;
						
						case 22:
							return 269.4978f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 270.0406f;
						
						case 2:
							return 29.429f;
						
						case 3:
							return 270.2136f;
						
						case 4:
							return 312.7653f;
						
						case 5:
							return 279.422f;
						
						case 6:
							return 44.2798f;
						
						case 7:
							return 126.2662f;
						
						case 8:
							return 59.3633f;
						
						case 9:
							return 44.3454f;
						
						case 10:
							return 255.4957f;
						
						case 11:
							return 316.404f;
						
						case 12:
							return 174.7817f;
						
						case 13:
							return 54.306f;
						
						case 14:
							return 180.0455f;
						
						case 15:
							return 344.4206f;
						
						case 16:
							return 89.1443f;
						
						case 17:
							return 91.5654f;
						
						case 18:
							return 355.3597f;
						
						case 19:
							return 267.6826f;
						
						case 20:
							return 354.9587f;
						
						case 21:
							return 124.9008f;
						
						case 22:
							return 270.1882f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 241.2394f;
						
						case 2:
							return 30.5329f;
						
						case 3:
							return 268.7542f;
						
						case 4:
							return 235.685f;
						
						case 5:
							return 263.4533f;
						
						case 6:
							return 21.6045f;
						
						case 7:
							return 38.3122f;
						
						case 8:
							return 60.0909f;
						
						case 9:
							return 359.511f;
						
						case 10:
							return 14.6433f;
						
						case 11:
							return 315.3233f;
						
						case 12:
							return 172.1901f;
						
						case 13:
							return 320.4538f;
						
						case 14:
							return 179.2461f;
						
						case 15:
							return 250.3752f;
						
						case 16:
							return 0.2447f;
						
						case 17:
							return 261.7306f;
						
						case 18:
							return 52.3126f;
						
						case 19:
							return 267.7954f;
						
						case 20:
							return 89.242f;
						
						case 21:
							return 44.0817f;
						
						case 22:
							return 268.8879f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 209.6f;
						
						case 2:
							return 298.7994f;
						
						case 3:
							return 92.9994f;
						
						case 4:
							return 324.2342f;
						
						case 5:
							return 3.1991f;
						
						case 6:
							return 315.3998f;
						
						case 7:
							return 215.5996f;
						
						case 8:
							return 330f;
						
						case 9:
							return 89.5971f;
						
						case 10:
							return 169.649f;
						
						case 11:
							return 315.3995f;
						
						case 12:
							return 173.9054f;
						
						case 13:
							return 234.8527f;
						
						case 14:
							return 359.4676f;
						
						case 15:
							return 165.2123f;
						
						case 16:
							return 88.0328f;
						
						case 17:
							return 269.7469f;
						
						case 18:
							return 81.7539f;
						
						case 19:
							return 350.7536f;
						
						case 20:
							return 271.8376f;
						
						case 21:
							return 295.806f;
						
						case 22:
							return 268.5489f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 266.5706f;
						
						case 2:
							return 34.6929f;
						
						case 3:
							return 270.4595f;
						
						case 4:
							return 314.1925f;
						
						case 5:
							return 262.1631f;
						
						case 6:
							return 44.2599f;
						
						case 7:
							return 129.1114f;
						
						case 8:
							return 59.3746f;
						
						case 9:
							return 90.6921f;
						
						case 10:
							return 239.9254f;
						
						case 11:
							return 314.6845f;
						
						case 12:
							return 175.8269f;
						
						case 13:
							return 54.2188f;
						
						case 14:
							return 179.6606f;
						
						case 15:
							return 341.9566f;
						
						case 16:
							return 90.6128f;
						
						case 17:
							return 89.2581f;
						
						case 18:
							return 355.3481f;
						
						case 19:
							return 266.7427f;
						
						case 20:
							return 356.4481f;
						
						case 21:
							return 136.6899f;
						
						case 22:
							return 270.2851f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 245.33f;
						
						case 2:
							return 31.3559f;
						
						case 3:
							return 269.2654f;
						
						case 4:
							return 235.3301f;
						
						case 5:
							return 270.3575f;
						
						case 6:
							return 9.4474f;
						
						case 7:
							return 38.199f;
						
						case 8:
							return 60.6946f;
						
						case 9:
							return 359.8666f;
						
						case 10:
							return 8.8486f;
						
						case 11:
							return 322.7813f;
						
						case 12:
							return 171.8957f;
						
						case 13:
							return 313.731f;
						
						case 14:
							return 179.9229f;
						
						case 15:
							return 248.6389f;
						
						case 16:
							return 358.9486f;
						
						case 17:
							return 269.3399f;
						
						case 18:
							return 51.0447f;
						
						case 19:
							return 266.7723f;
						
						case 20:
							return 89.7738f;
						
						case 21:
							return 25.4218f;
						
						case 22:
							return 269.0639f;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 209.1995f;
						
						case 2:
							return 302.7997f;
						
						case 3:
							return 92.9994f;
						
						case 4:
							return 325.1249f;
						
						case 5:
							return 357.3996f;
						
						case 6:
							return 135.1994f;
						
						case 7:
							return 308.5542f;
						
						case 8:
							return 330f;
						
						case 9:
							return 88.5975f;
						
						case 10:
							return 200.4493f;
						
						case 11:
							return 315.3995f;
						
						case 12:
							return 83.0145f;
						
						case 13:
							return 245.6889f;
						
						case 14:
							return 359.5525f;
						
						case 15:
							return 250.3085f;
						
						case 16:
							return 180.3578f;
						
						case 17:
							return 275.278f;
						
						case 18:
							return 82.4021f;
						
						case 19:
							return 89.672f;
						
						case 20:
							return 175.7747f;
						
						case 21:
							return 298.8189f;
						
						case 22:
							return 272.5778f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 239.8358f;
						
						case 2:
							return 47.7028f;
						
						case 3:
							return 269.296f;
						
						case 4:
							return 317.4547f;
						
						case 5:
							return 261.8835f;
						
						case 6:
							return 45.2661f;
						
						case 7:
							return 131.5014f;
						
						case 8:
							return 59.3505f;
						
						case 9:
							return 43.3622f;
						
						case 10:
							return 242.5756f;
						
						case 11:
							return 314.2681f;
						
						case 12:
							return 176.731f;
						
						case 13:
							return 55.0103f;
						
						case 14:
							return 200.8372f;
						
						case 15:
							return 68.8202f;
						
						case 16:
							return 47.4361f;
						
						case 17:
							return 89.1401f;
						
						case 18:
							return 354.0209f;
						
						case 19:
							return 266.7281f;
						
						case 20:
							return 356.1704f;
						
						case 21:
							return 144.1817f;
						
						case 22:
							return 270.3809f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 259.1305f;
						
						case 2:
							return 32.29f;
						
						case 3:
							return 269.3044f;
						
						case 4:
							return 233.7558f;
						
						case 5:
							return 274.4951f;
						
						case 6:
							return 354.4731f;
						
						case 7:
							return 36.0818f;
						
						case 8:
							return 60.2114f;
						
						case 9:
							return 359.9043f;
						
						case 10:
							return 14.0337f;
						
						case 11:
							return 335.3627f;
						
						case 12:
							return 172.7723f;
						
						case 13:
							return 305.7141f;
						
						case 14:
							return 90.7033f;
						
						case 15:
							return 253.9543f;
						
						case 16:
							return 1.6254f;
						
						case 17:
							return 265.4617f;
						
						case 18:
							return 48.5508f;
						
						case 19:
							return 264.2763f;
						
						case 20:
							return 88.9135f;
						
						case 21:
							return 32.2909f;
						
						case 22:
							return 180.6358f;
						
						default:
					}
					break;
			}
			break;
	}
	return 269.4978f;
}

Vector3 func_371(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 75.566f, -2540.649f, 5f;
						
						case 2:
							return -1078.262f, -1239.851f, 4.1434f;
						
						case 3:
							return 883.4796f, -1017.313f, 31.3352f;
						
						case 4:
							return 257.9049f, -1957.535f, 22.0042f;
						
						case 5:
							return -439.4763f, 178.6946f, 74.2514f;
						
						case 6:
							return -1100.738f, -2038.471f, 12.2665f;
						
						case 7:
							return -1280.453f, -829.5875f, 16.0992f;
						
						case 8:
							return -869.777f, -2705.146f, 12.9452f;
						
						case 9:
							return 282.588f, -2994.094f, 4.6682f;
						
						case 10:
							return 1544.658f, -2177.76f, 76.3443f;
						
						case 11:
							return -338.8323f, -2704.073f, 5.028f;
						
						case 12:
							return 517.5385f, -645.653f, 23.7512f;
						
						case 13:
							return -551.9077f, -1766.713f, 20.7291f;
						
						case 14:
							return -299.124f, -1326.529f, 30.3017f;
						
						case 15:
							return 346.8094f, 337.0167f, 104.1991f;
						
						case 16:
							return 900.0145f, -1572.714f, 29.8542f;
						
						case 17:
							return 786.6585f, -900.3587f, 24.0527f;
						
						case 18:
							return 1049.079f, -2171.625f, 30.6872f;
						
						case 19:
							return 981.4014f, -2510.991f, 27.302f;
						
						case 20:
							return -264.0942f, 188.8373f, 84.1883f;
						
						case 21:
							return 557.2414f, -1960.689f, 23.8062f;
						
						case 22:
							return 101.8777f, -2230.142f, 5.0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 66.5896f, -2544.517f, 5f;
						
						case 2:
							return -1025.685f, -1317.374f, 4.984f;
						
						case 3:
							return 909.1116f, -1092.301f, 31.3332f;
						
						case 4:
							return 270.9639f, -1956.482f, 22.4214f;
						
						case 5:
							return -446.1908f, 223.8166f, 82.006f;
						
						case 6:
							return -1054.04f, -2049.198f, 12.216f;
						
						case 7:
							return -1311.915f, -790.1375f, 16.9507f;
						
						case 8:
							return -848.2803f, -2706.428f, 12.9445f;
						
						case 9:
							return 267.5522f, -3048.199f, 5.04f;
						
						case 10:
							return 1519.344f, -2185.571f, 76.5866f;
						
						case 11:
							return -300.4395f, -2638.489f, 5.0418f;
						
						case 12:
							return 515.6205f, -679.5475f, 24.2445f;
						
						case 13:
							return -564.9694f, -1732.855f, 21.3362f;
						
						case 14:
							return -333.6444f, -1376.203f, 30.2957f;
						
						case 15:
							return 369.0242f, 300.1814f, 102.4281f;
						
						case 16:
							return 980.7197f, -1538.239f, 29.5977f;
						
						case 17:
							return 799.59f, -918.3593f, 24.6337f;
						
						case 18:
							return 1061.246f, -2198.076f, 29.6956f;
						
						case 19:
							return 951.1177f, -2544.439f, 27.3027f;
						
						case 20:
							return -216.3499f, 203.5424f, 82.6981f;
						
						case 21:
							return 570.9869f, -1900.998f, 23.8006f;
						
						case 22:
							return 131.1389f, -2187.469f, 4.953f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 17.2971f, -2548.397f, 5.0366f;
						
						case 2:
							return -1111.007f, -1241.691f, 1.4219f;
						
						case 3:
							return 853.504f, -1092.164f, 26.9982f;
						
						case 4:
							return 253.4216f, -1991.415f, 19.226f;
						
						case 5:
							return -420.191f, 230.0672f, 82.4149f;
						
						case 6:
							return -1083.174f, -2010.841f, 12.1633f;
						
						case 7:
							return -1311.055f, -773.2202f, 18.8163f;
						
						case 8:
							return -836.7797f, -2704.234f, 12.8121f;
						
						case 9:
							return 304.8296f, -2998.689f, 4.9774f;
						
						case 10:
							return 1565.06f, -2074.245f, 76.0599f;
						
						case 11:
							return -337.0353f, -2676.035f, 5.0441f;
						
						case 12:
							return 465.3821f, -656.4695f, 26.7156f;
						
						case 13:
							return -606.8765f, -1729.371f, 22.3962f;
						
						case 14:
							return -346.9227f, -1404.342f, 29.197f;
						
						case 15:
							return 385.7742f, 253.9456f, 101.9867f;
						
						case 16:
							return 965.1168f, -1534.567f, 29.7544f;
						
						case 17:
							return 753.7557f, -956.1052f, 23.8429f;
						
						case 18:
							return 1079.304f, -2155.766f, 30.762f;
						
						case 19:
							return 973.3874f, -2493.156f, 27.302f;
						
						case 20:
							return -275.7711f, 133.0159f, 67.5569f;
						
						case 21:
							return 479.9522f, -1965.064f, 23.6035f;
						
						case 22:
							return 207.8649f, -2236.68f, 5.3571f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 80.18f, -2534.817f, 5f;
						
						case 2:
							return -1077.115f, -1242.028f, 4.2154f;
						
						case 3:
							return 917.6459f, -993.7324f, 35.4143f;
						
						case 4:
							return 256.9997f, -1973.177f, 20.8855f;
						
						case 5:
							return -404.2649f, 199.9949f, 81.7681f;
						
						case 6:
							return -1090.594f, -2049.731f, 12.271f;
						
						case 7:
							return -1271.107f, -848.6555f, 12.0146f;
						
						case 8:
							return -892.0394f, -2739.922f, 12.8285f;
						
						case 9:
							return 262.0403f, -2999.025f, 4.7474f;
						
						case 10:
							return 1548.647f, -2141.337f, 76.448f;
						
						case 11:
							return -330.3534f, -2695.275f, 5.0115f;
						
						case 12:
							return 518.8716f, -629.5131f, 23.7529f;
						
						case 13:
							return -543.8981f, -1763.519f, 20.6171f;
						
						case 14:
							return -263.9384f, -1369.898f, 30.3f;
						
						case 15:
							return 348.4588f, 354.0681f, 104.0595f;
						
						case 16:
							return 927.0326f, -1579.571f, 29.4263f;
						
						case 17:
							return 754.1151f, -872.9401f, 24.0701f;
						
						case 18:
							return 1095.888f, -2175.671f, 30.3221f;
						
						case 19:
							return 979.4924f, -2527.655f, 27.302f;
						
						case 20:
							return -248.7708f, 180.1573f, 76.8737f;
						
						case 21:
							return 536.7711f, -1974.162f, 23.8071f;
						
						case 22:
							return 115.9594f, -2230.136f, 5.0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 51.1315f, -2544.015f, 5.002f;
						
						case 2:
							return -1013.461f, -1320.874f, 4.8685f;
						
						case 3:
							return 891.0043f, -1092.538f, 29.375f;
						
						case 4:
							return 283.8082f, -1944.086f, 23.3962f;
						
						case 5:
							return -460.6299f, 227.2324f, 82.1805f;
						
						case 6:
							return -1043.421f, -2060.035f, 12.2542f;
						
						case 7:
							return -1323.81f, -799.6187f, 16.7538f;
						
						case 8:
							return -836.1172f, -2713.632f, 12.9445f;
						
						case 9:
							return 276.9312f, -3041.241f, 4.843f;
						
						case 10:
							return 1501.615f, -2179.107f, 76.9969f;
						
						case 11:
							return -312.4042f, -2651.017f, 5.0429f;
						
						case 12:
							return 514.2888f, -695.7411f, 24.1667f;
						
						case 13:
							return -576.8483f, -1724.337f, 21.7285f;
						
						case 14:
							return -339.4656f, -1376.456f, 30.3116f;
						
						case 15:
							return 364.1374f, 283.0252f, 102.3552f;
						
						case 16:
							return 992.5272f, -1533.687f, 29.745f;
						
						case 17:
							return 816.9606f, -918.3287f, 24.7227f;
						
						case 18:
							return 1059.176f, -2216.868f, 29.3004f;
						
						case 19:
							return 933.7609f, -2543.49f, 27.3027f;
						
						case 20:
							return -217.0926f, 174.9504f, 75.4322f;
						
						case 21:
							return 582.6407f, -1890.364f, 24.2265f;
						
						case 22:
							return 145.7482f, -2187.39f, 4.953f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 29.7453f, -2554.565f, 5f;
						
						case 2:
							return -1119.537f, -1227.846f, 1.4313f;
						
						case 3:
							return 836.6307f, -1092.544f, 27.0783f;
						
						case 4:
							return 265.7728f, -1999.919f, 18.8226f;
						
						case 5:
							return -393.0742f, 227.925f, 82.7333f;
						
						case 6:
							return -1088.037f, -1993.077f, 12.1576f;
						
						case 7:
							return -1325.427f, -757.1539f, 19.367f;
						
						case 8:
							return -815.2336f, -2711.911f, 12.812f;
						
						case 9:
							return 304.6926f, -3012.622f, 4.9702f;
						
						case 10:
							return 1568.957f, -2095.701f, 76.5195f;
						
						case 11:
							return -348.3641f, -2688.345f, 5.0425f;
						
						case 12:
							return 467.2889f, -640.745f, 27.4996f;
						
						case 13:
							return -617.1298f, -1740.959f, 22.6394f;
						
						case 14:
							return -352.1258f, -1404.453f, 28.9612f;
						
						case 15:
							return 368.8197f, 259.9216f, 101.9686f;
						
						case 16:
							return 975.7991f, -1520.66f, 29.9604f;
						
						case 17:
							return 751.5151f, -965.7788f, 23.8412f;
						
						case 18:
							return 1082.607f, -2150.683f, 30.5369f;
						
						case 19:
							return 956.5896f, -2492.579f, 27.302f;
						
						case 20:
							return -257.9995f, 133.273f, 68.2289f;
						
						case 21:
							return 475.7105f, -1978.248f, 23.6205f;
						
						case 22:
							return 192.1165f, -2236.279f, 4.8551f;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_154.f_54)
					{
						case 1:
							return 89.799f, -2530.924f, 5f;
						
						case 2:
							return -1071.393f, -1252.443f, 4.7051f;
						
						case 3:
							return 899.5668f, -994.5377f, 33.1194f;
						
						case 4:
							return 241.0012f, -1996.41f, 18.6848f;
						
						case 5:
							return -447.0587f, 178.2333f, 74.2037f;
						
						case 6:
							return -1062.537f, -2009.48f, 12.1616f;
						
						case 7:
							return -1285.753f, -813.0154f, 16.3218f;
						
						case 8:
							return -887.17f, -2742.64f, 12.8285f;
						
						case 9:
							return 270.8913f, -2989.357f, 4.7132f;
						
						case 10:
							return 1534.311f, -2158.243f, 76.6882f;
						
						case 11:
							return -321.6567f, -2686.351f, 5.0111f;
						
						case 12:
							return 503.5738f, -624.4263f, 23.8131f;
						
						case 13:
							return -515.0387f, -1766.265f, 20.374f;
						
						case 14:
							return -263.8943f, -1385.979f, 30.3057f;
						
						case 15:
							return 339.818f, 313.7482f, 103.4573f;
						
						case 16:
							return 922.7253f, -1538.224f, 29.8691f;
						
						case 17:
							return 753.661f, -861.8409f, 24.2223f;
						
						case 18:
							return 1096.373f, -2168.761f, 30.2795f;
						
						case 19:
							return 1024.333f, -2504.33f, 27.3434f;
						
						case 20:
							return -233.9646f, 210.537f, 84.1244f;
						
						case 21:
							return 538.3644f, -1984.858f, 23.751f;
						
						case 22:
							return 131.7841f, -2230.233f, 5.0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_154.f_54)
					{
						case 1:
							return 35.9444f, -2539.717f, 5.0024f;
						
						case 2:
							return -1007.394f, -1317.224f, 4.9067f;
						
						case 3:
							return 876.8945f, -1092.53f, 28.2771f;
						
						case 4:
							return 295.9134f, -1932.292f, 24.3064f;
						
						case 5:
							return -455.1007f, 234.6203f, 82.0244f;
						
						case 6:
							return -1031.724f, -2072.077f, 12.5716f;
						
						case 7:
							return -1335.552f, -809.8959f, 16.4896f;
						
						case 8:
							return -821.3975f, -2722.354f, 12.9444f;
						
						case 9:
							return 283.6107f, -3053.823f, 4.9867f;
						
						case 10:
							return 1499.083f, -2185.737f, 76.7263f;
						
						case 11:
							return -324.779f, -2663.592f, 5.0445f;
						
						case 12:
							return 512.3986f, -721.838f, 23.8624f;
						
						case 13:
							return -591.0884f, -1714.103f, 22.3323f;
						
						case 14:
							return -346.9976f, -1370.863f, 30.3182f;
						
						case 15:
							return 377.8062f, 288.2171f, 102.1705f;
						
						case 16:
							return 996.5148f, -1543.246f, 29.8335f;
						
						case 17:
							return 835.5129f, -918.463f, 24.7448f;
						
						case 18:
							return 1046.311f, -2211.777f, 29.1671f;
						
						case 19:
							return 913.9238f, -2542.353f, 27.3173f;
						
						case 20:
							return -218.8107f, 151.816f, 70.3569f;
						
						case 21:
							return 593.3129f, -1876.054f, 24.006f;
						
						case 22:
							return 163.7395f, -2187.274f, 4.9529f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_154.f_54)
					{
						case 1:
							return 42.259f, -2558.294f, 5f;
						
						case 2:
							return -1128.897f, -1212.134f, 1.3396f;
						
						case 3:
							return 819.2865f, -1093.124f, 27.5717f;
						
						case 4:
							return 277.0835f, -2007.957f, 18.7094f;
						
						case 5:
							return -375.8415f, 228.6617f, 83.2295f;
						
						case 6:
							return -1087.756f, -1975.791f, 12.1524f;
						
						case 7:
							return -1341.878f, -751.0708f, 21.4101f;
						
						case 8:
							return -808.8249f, -2701.321f, 12.812f;
						
						case 9:
							return 304.6487f, -3030.21f, 4.9632f;
						
						case 10:
							return 1572.752f, -2073.607f, 75.9901f;
						
						case 11:
							return -357.2827f, -2703.429f, 5.0408f;
						
						case 12:
							return 470.1857f, -620.3571f, 27.4997f;
						
						case 13:
							return -629.9596f, -1751.494f, 22.941f;
						
						case 14:
							return -312.814f, -1415.919f, 30.0626f;
						
						case 15:
							return 352.8829f, 266.151f, 101.9626f;
						
						case 16:
							return 975.6237f, -1502.637f, 30.2482f;
						
						case 17:
							return 751.2968f, -971.9805f, 23.8482f;
						
						case 18:
							return 1083.86f, -2143.323f, 30.7745f;
						
						case 19:
							return 935.8514f, -2489.557f, 27.3192f;
						
						case 20:
							return -302.9154f, 133.8862f, 66.9406f;
						
						case 21:
							return 489.8722f, -1992.808f, 23.9485f;
						
						case 22:
							return 182.5244f, -2221.961f, 4.9515f;
						
						default:
					}
					break;
			}
			break;
	}
	return 131.7841f, -2230.233f, 5.0333f;
}

int func_372()
{
	return Local_154.f_5;
}

void func_373()
{
	if (func_247() == func_33() && func_190() == 0)
	{
		func_186(2);
	}
}

void func_374()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_185(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_154.f_595 != iVar1)
	{
		Local_154.f_595 = iVar1;
	}
}

void func_375()
{
	int iVar0;
	
	if (func_6())
	{
		if (!func_2253(3))
		{
			if (func_5(&(Local_154.f_584)) && func_187(&(Local_154.f_584), func_379(), 0))
			{
				iVar0 = 0;
				while (iVar0 < func_21())
				{
					func_359(func_40(iVar0), iVar0, -1292453789, 0, 0);
					iVar0++;
				}
				func_376();
				func_24(3);
			}
		}
	}
}

void func_376()
{
	struct<14> Var0;
	
	Var0.f_2 = -669786206;
	Var0.f_10 = unk_0x1146A9AE09CE2B14();
	Var0.f_11 = func_247();
	func_377(Var0, func_378(1));
}

void func_377(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

int func_378(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_2489(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_379()
{
	int iVar0;
	
	iVar0 = func_7();
	if (func_2251() == 1 && !func_2252())
	{
		iVar0 = 3;
	}
	switch (iVar0)
	{
		case 2:
			return Global_262145.f_16423;
		
		case 3:
			return Global_262145.f_16422;
		
		default:
	}
	return Global_262145.f_16424;
}

void func_380()
{
	struct<3> Var0;
	
	Var0 = { func_17(Local_154.f_54) };
	if (!func_131(Var0))
	{
		func_381(&(Local_154.f_578), Var0, 1, 1103626240);
	}
}

void func_381(var uParam0, struct<3> Param1, int iParam2, int iParam3)
{
	if (!unk_0x6CFCAD853B84B192(*uParam0))
	{
		*uParam0 = unk_0x2F0D1CE923B94A1B(Param1 - Vector(iParam3, iParam3, iParam3), Param1 + Vector(iParam3, iParam3, iParam3), 1f, 0.25f, iParam2, 1);
	}
}

void func_382()
{
	if (func_212() && func_399())
	{
		if (!func_398())
		{
			if (func_396())
			{
				func_4(&(Local_154.f_518), 0, 0);
			}
		}
		else if (func_394())
		{
			if (!func_5(&(Local_154.f_520)))
			{
				if (func_392() && func_388())
				{
					func_201(&(Local_154.f_518));
					func_4(&(Local_154.f_520), 0, 0);
					func_386();
					if (func_385())
					{
						if (!func_11() && !func_384())
						{
							Local_154.f_591 = unk_0xB36B8558948EA7A8(0, func_21());
						}
					}
				}
			}
		}
		else if (func_383())
		{
			func_392();
			func_388();
			func_386();
			if (func_385())
			{
				if (!func_11() && !func_384())
				{
					Local_154.f_591 = unk_0xB36B8558948EA7A8(0, func_21());
				}
			}
		}
	}
}

int func_383()
{
	if (func_12())
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return func_10() == 5;
}

int func_385()
{
	switch (func_348())
	{
		case 1:
		case 5:
		case 6:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

void func_386()
{
	int iVar0;
	
	if (func_399())
	{
		switch (func_10())
		{
			case 12:
				iVar0 = unk_0xB36B8558948EA7A8(0, 100);
				if (iVar0 < func_387())
				{
					if (!func_37(8))
					{
						func_34(8);
					}
				}
				else if (func_37(8))
				{
					func_2(8);
				}
				break;
			}
	}
}

int func_387()
{
	switch (Local_154.f_593)
	{
		case 1:
		case 4:
			return Global_262145.f_16445;
		
		case 2:
			return Global_262145.f_16444;
		
		case 3:
			return Global_262145.f_16443;
		
		default:
	}
	return Global_262145.f_16443;
}

int func_388()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_400[iVar0 /*8*/]))
		{
			if ((unk_0xB364346471C3B028(Local_154.f_400[iVar0 /*8*/]) || (!unk_0xE5AEA27726895658(Local_154.f_400[iVar0 /*8*/]) && unk_0x443E2CA72E118E64())) || (unk_0xE5AEA27726895658(Local_154.f_400[iVar0 /*8*/]) && unk_0x443E2CA72E118E64()))
			{
				if (func_203(Local_154.f_400[iVar0 /*8*/]))
				{
					if (!func_11() && !func_384())
					{
						unk_0x407B7FBB86B988B9(unk_0xD93F965CFAC1D06A(Local_154.f_400[iVar0 /*8*/]), 1, 1);
						func_391(&(Local_154.f_400[iVar0 /*8*/]));
					}
					else
					{
						func_390(&(Local_154.f_400[iVar0 /*8*/]));
					}
					func_389(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_400[iVar0 /*8*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_389(int iParam0, int iParam1)
{
	Local_154.f_400[iParam0 /*8*/].f_5 = iParam1;
}

void func_390(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

void func_391(var uParam0)
{
	int iVar0;
	
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		if (!unk_0xB364346471C3B028(*uParam0))
		{
		}
	}
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		iVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x24DBE20C830AE9AB(&iVar0);
	}
}

int func_392()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_9())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar0 /*6*/]))
		{
			if ((unk_0xB364346471C3B028(Local_154.f_499[iVar0 /*6*/]) || (!unk_0xE5AEA27726895658(Local_154.f_499[iVar0 /*6*/]) && unk_0x443E2CA72E118E64())) || (unk_0xE5AEA27726895658(Local_154.f_499[iVar0 /*6*/]) && unk_0x443E2CA72E118E64()))
			{
				if (func_203(Local_154.f_499[iVar0 /*6*/]))
				{
					if (!func_11() && !func_384())
					{
						unk_0x407B7FBB86B988B9(unk_0xD93F965CFAC1D06A(Local_154.f_499[iVar0 /*6*/]), 1, 1);
					}
					func_390(&(Local_154.f_499[iVar0 /*6*/]));
					func_201(&(Local_154.f_571[iVar0 /*2*/]));
					func_393(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_9())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar0 /*6*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_393(int iParam0, int iParam1)
{
	Local_154.f_499[iParam0 /*6*/].f_5 = iParam1;
}

int func_394()
{
	if (func_5(&(Local_154.f_518)))
	{
		if (func_187(&(Local_154.f_518), func_395(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395()
{
	if (Local_154.f_7 == 6)
	{
		return 5000;
	}
	return 10000;
}

int func_396()
{
	int iVar0;
	
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				if (Local_154.f_499[0 /*6*/].f_5 == 4 || func_397())
				{
					iVar0 = 1;
				}
			}
			else if ((Local_154.f_499[0 /*6*/].f_5 == 4 && Local_154.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if ((Local_154.f_499[0 /*6*/].f_5 == 4 && Local_154.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		
		case 6:
			if (Local_154.f_56 > 0)
			{
				if (func_397())
				{
					iVar0 = 1;
				}
			}
			break;
		
		case 11:
			break;
	}
	return iVar0;
}

int func_397()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (Local_154.f_400[iVar0 /*8*/].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_398()
{
	return func_5(&(Local_154.f_518));
}

int func_399()
{
	if (((func_10() == 12 || func_10() == 5) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

void func_400()
{
	int iVar0;
	int iVar1;
	
	if (func_399())
	{
		iVar0 = 0;
		while (iVar0 < func_9())
		{
			switch (func_8(iVar0))
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar0 /*6*/]))
					{
						if (func_421())
						{
							if (func_5(&(Local_154.f_520)))
							{
								func_201(&(Local_154.f_520));
							}
							if (func_208(func_420()))
							{
								if (func_403(iVar0, func_420()))
								{
									func_393(iVar0, 2);
								}
							}
						}
					}
					break;
				
				case 2:
					if (func_212())
					{
						iVar1 = 0;
						while (iVar1 < func_210())
						{
							if (func_193(iVar1, 0))
							{
							}
							iVar1++;
						}
					}
					if (func_401(iVar0))
					{
						func_393(iVar0, 3);
					}
					break;
				
				case 3:
					if (unk_0x159BC3DDA80D71AC(Local_154.f_499[iVar0 /*6*/]))
					{
						if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_154.f_499[iVar0 /*6*/]), 0) || unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_154.f_499[iVar0 /*6*/]), 0))
						{
							func_393(iVar0, 4);
						}
					}
					break;
				
				case 4:
					break;
				
				case 5:
					break;
			}
			iVar0++;
		}
	}
}

int func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar1 = 0;
				while (iVar1 < func_210())
				{
					if (unk_0x159BC3DDA80D71AC(Local_154.f_400[iVar1 /*8*/]))
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(Local_154.f_400[iVar1 /*8*/])))
						{
							if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[iVar1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					iVar1++;
				}
			}
			else if (iParam0 == 0)
			{
				if (unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/]))
				{
					if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) && !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]))
			{
				if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) && !func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
			break;
		
		case 5:
			iVar1 = 0;
			while (iVar1 < func_210())
			{
				if (iParam0 == 0)
				{
					if (unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/]))
					{
						if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]))
				{
					if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					if (iParam0 == 0)
					{
						if (unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/]))
						{
							if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]))
					{
						if (!func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				
				case 6:
					if (iParam0 == 0)
					{
						if ((unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/]))
						{
							if ((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if ((unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[4 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[5 /*8*/]))
					{
						if ((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[4 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[5 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				
				case 8:
					if (iParam0 == 0)
					{
						if (((unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]))
						{
							if (((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (((unk_0x159BC3DDA80D71AC(Local_154.f_400[4 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[5 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[6 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[7 /*8*/]))
					{
						if (((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[4 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[5 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[6 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[7 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				if (((unk_0x159BC3DDA80D71AC(Local_154.f_400[0 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[1 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[2 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[3 /*8*/]))
				{
					if (((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[0 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[1 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[2 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[3 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iParam0 == 1)
			{
				if (((unk_0x159BC3DDA80D71AC(Local_154.f_400[4 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[5 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[6 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[7 /*8*/]))
				{
					if (((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[4 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[5 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[6 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[7 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iParam0 == 2)
			{
				if (((unk_0x159BC3DDA80D71AC(Local_154.f_400[8 /*8*/]) && unk_0x159BC3DDA80D71AC(Local_154.f_400[9 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[10 /*8*/])) && unk_0x159BC3DDA80D71AC(Local_154.f_400[11 /*8*/]))
				{
					if (((!func_402(unk_0x8A437068C87289B7(Local_154.f_400[8 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[9 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[10 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0)) || !func_402(unk_0x8A437068C87289B7(Local_154.f_400[11 /*8*/]), unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			break;
	}
	return iVar0;
}

int func_402(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x419E13582192CFEA(iParam1) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (unk_0xF41EB7643E61A928(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<31> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	var uVar9;
	bool bVar10;
	float fVar11;
	struct<31> Var12;
	struct<3> Var13;
	
	switch (func_10())
	{
		case 12:
			if (Local_154.f_522 == -1)
			{
				if (Local_154.f_522.f_6 == -1 || Local_154.f_522.f_6 == iParam0)
				{
					Local_154.f_522.f_6 = iParam0;
					if (func_131(Local_154.f_522.f_7))
					{
						if (func_131(Local_154.f_522.f_13))
						{
							Local_154.f_522.f_13 = { unk_0x557C9CA8FCC667DF(func_40(0)) };
						}
						else if (func_37(8))
						{
							if (Local_115.f_361 > 5)
							{
								if (Local_115.f_363 == 1)
								{
									Local_115.f_363 = 0;
								}
							}
							func_419(func_40(0), &(Local_154.f_522.f_7), &(Local_154.f_522.f_10));
							if (func_128(Local_154.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_115.f_363, Local_115.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								Local_154.f_522.f_7.f_2 = func_418();
							}
							else
							{
								Local_154.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_115.f_361 < 5)
								{
									Local_115.f_361++;
								}
								else
								{
									Local_115.f_362++;
								}
							}
						}
						else
						{
							if (Local_115.f_361 >= 5)
							{
								if (Local_115.f_363 == 1)
								{
									Local_115.f_363 = 0;
								}
								if (Local_115.f_362 >= 5)
								{
									if (!func_37(8))
									{
										func_34(8);
										Local_154.f_522.f_7 = { 0f, 0f, 0f };
										Local_115.f_361 = 0;
										Local_115.f_362 = 0;
									}
								}
								else
								{
									func_415(func_40(0), &(Local_154.f_522.f_7), &(Local_154.f_522.f_10), 1);
								}
							}
							else
							{
								func_415(func_40(0), &(Local_154.f_522.f_7), &(Local_154.f_522.f_10), 0);
							}
							if (unk_0xD13544ADC6A3F165(Local_154.f_522.f_7 + Vector(2f, 0f, 0f), Local_154.f_522.f_7 - Vector(10f, 0f, 0f), &(Local_154.f_522.f_7)))
							{
								if (func_128(Local_154.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_115.f_363, Local_115.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									if (func_414(Local_154.f_522.f_7))
									{
									}
									else
									{
										Local_154.f_522.f_7 = { 0f, 0f, 0f };
										if (Local_115.f_361 < 5)
										{
											Local_115.f_361++;
										}
										else
										{
											Local_115.f_362++;
										}
									}
								}
								else
								{
									Local_154.f_522.f_7 = { 0f, 0f, 0f };
									if (Local_115.f_361 < 5)
									{
										Local_115.f_361++;
									}
									else
									{
										Local_115.f_362++;
									}
								}
							}
							else
							{
								Local_154.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_115.f_361 < 5)
								{
									Local_115.f_361++;
								}
								else
								{
									Local_115.f_362++;
								}
							}
						}
					}
					else if (func_279(&(Local_154.f_499[iParam0 /*6*/]), iParam1, Local_154.f_522.f_7, Local_154.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_413(iParam0);
						unk_0x824F744352C8BC82(iParam1);
						Local_154.f_522.f_6 = -1;
						Local_154.f_522.f_7 = { 0f, 0f, 0f };
						Local_154.f_522.f_10 = 0f;
						Local_154.f_522.f_12 = 0;
						Local_154.f_522.f_11 = 0;
						Local_115.f_361 = 0;
						Local_115.f_363 = 1;
						func_4(&(Local_154.f_571[iParam0 /*2*/]), 0, 0);
						if (func_37(8))
						{
							Local_154.f_544 = (Local_154.f_544 + 1f);
						}
						else
						{
							Local_154.f_544 = (Local_154.f_544 + 0.5f);
						}
						return 1;
					}
				}
			}
			break;
		
		case 5:
			if (Local_154.f_522 == -1)
			{
				if (unk_0x159BC3DDA80D71AC(Local_154.f_35[Local_154.f_591]))
				{
					if (func_19(Local_154.f_35[Local_154.f_591]))
					{
						if (Local_154.f_522.f_6 == -1 || Local_154.f_522.f_6 == iParam0)
						{
							Local_154.f_522.f_6 = iParam0;
							if (func_131(Local_154.f_522.f_7))
							{
								if (func_131(Local_154.f_522.f_13))
								{
									Local_154.f_522.f_13 = { unk_0x557C9CA8FCC667DF(unk_0x854C404AEB476240(Local_154.f_35[Local_154.f_591])) };
								}
								else
								{
									if ((Local_154.f_522.f_13.f_2 >= 0f && Local_154.f_522.f_13.f_2 < 90f) || (Local_154.f_522.f_13.f_2 >= 270f && Local_154.f_522.f_13.f_2 < 360f))
									{
										fVar0 = 220f;
									}
									else
									{
										fVar0 = 120f;
									}
									bVar1 = true;
									if (unk_0xDB6FBA5468510E93(unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_154.f_35[Local_154.f_591]), 1), Local_154.f_522.f_13, fVar0, &(Local_154.f_522.f_7)))
									{
										fVar2 = unk_0x0BABEFEA577FCFA4(Local_154.f_522.f_7, unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_154.f_35[Local_154.f_591]), 0), 1);
										Var3 = { unk_0x8EB57098C563AB39(unk_0x854C404AEB476240(Local_154.f_35[Local_154.f_591]), Local_154.f_522.f_7) };
										if (fVar2 > 290f)
										{
											bVar1 = false;
										}
										if (!func_128(Local_154.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar1 = false;
										}
										if (unk_0x0BCA9ADE67DF9DD8(Var3.x) > 100f)
										{
											bVar1 = false;
										}
										if (!bVar1)
										{
											Local_154.f_522.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_154.f_522.f_10 = func_412(Local_154.f_522.f_7, unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_154.f_35[Local_154.f_591]), 1));
										}
									}
									else
									{
										func_411(&(Local_154.f_522.f_13));
									}
								}
							}
							if (!func_131(Local_154.f_522.f_7))
							{
								if (func_279(&(Local_154.f_499[iParam0 /*6*/]), iParam1, Local_154.f_522.f_7, Local_154.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(iParam0);
									unk_0x824F744352C8BC82(iParam1);
									Local_154.f_522.f_6 = -1;
									Local_154.f_522.f_7 = { 0f, 0f, 0f };
									Local_154.f_522.f_10 = 0f;
									Local_154.f_522.f_12 = 0;
									Local_154.f_522.f_11 = 0;
									Local_154.f_544 = (Local_154.f_544 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 11:
			if (Local_154.f_522 == -1)
			{
				if (Local_154.f_522.f_6 == -1 || Local_154.f_522.f_6 == iParam0)
				{
					Local_154.f_522.f_6 = iParam0;
					if (func_131(Local_154.f_522.f_7))
					{
						if (func_131(Local_154.f_522.f_16))
						{
							Local_154.f_522.f_16 = { func_410(11, Local_154.f_551[iParam0], Local_154.f_384, 0) };
							Local_154.f_522.f_16.f_2 = (Local_154.f_522.f_16.f_2 + 50f);
						}
						if (!func_131(Local_154.f_522.f_16))
						{
							Var4.f_4 = 1125515264;
							Var4.f_5 = 1;
							Var4.f_6 = 1;
							Var4.f_8 = 1082130432;
							Var4.f_9 = 1176255488;
							Var4.f_10 = 1;
							Var4.f_13 = 1;
							Var4.f_15 = 2;
							Var4.f_22 = 2;
							Var4.f_25 = 1;
							Var4.f_26 = 1;
							Var4.f_29 = 1123024896;
							Var4.f_30 = 1;
							Var4 = 0f;
							Var4.f_1 = 1;
							Var4.f_4 = 50f;
							Var4.f_5 = 0;
							Var4.f_6 = 1;
							Var4.f_12 = 1;
							Var4.f_3 = 1;
							Var6 = { Local_154.f_522.f_16 };
							Var5 = { Local_154.f_522.f_16 };
							if (func_45(Local_154.f_522.f_16, Var5, iParam1, 0, &Var6, &(Local_154.f_522.f_10), &Var4))
							{
								Local_154.f_522.f_7 = { Var6 };
							}
						}
					}
					else if (func_279(&(Local_154.f_499[iParam0 /*6*/]), iParam1, Local_154.f_522.f_7, Local_154.f_522.f_10, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
					{
						func_413(iParam0);
						unk_0x824F744352C8BC82(iParam1);
						Local_154.f_522.f_6 = -1;
						Local_154.f_522.f_16 = { 0f, 0f, 0f };
						Local_154.f_522.f_7 = { 0f, 0f, 0f };
						Local_154.f_522.f_10 = 0f;
						Local_154.f_522.f_12 = 0;
						Local_154.f_522.f_11 = 0;
						Local_115.f_361 = 0;
						unk_0x9982130A0A4E9E8E(unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]), 30f);
						Local_154.f_544 = (Local_154.f_544 + 1f);
						return 1;
					}
				}
			}
			break;
		
		case 6:
			if (Local_154.f_522 == -1)
			{
				if (unk_0x159BC3DDA80D71AC(Local_154.f_35[Local_154.f_591]))
				{
					if (func_19(Local_154.f_35[Local_154.f_591]))
					{
						if (Local_154.f_522.f_6 == -1 || Local_154.f_522.f_6 == iParam0)
						{
							Local_154.f_522.f_6 = iParam0;
							if (Local_115.f_361 < 50)
							{
								if (func_131(Local_154.f_522.f_7))
								{
									iVar8 = func_409(Local_154.f_591);
									fVar7 = func_408(iVar8);
									if (func_131(Local_154.f_522.f_13))
									{
										if (iVar8 >= 0)
										{
											Local_154.f_522.f_13 = { func_407(iVar8) };
											uVar9 = func_406(iVar8);
											Local_154.f_522.f_19 = { 0f, 0f, uVar9 };
										}
									}
									if (!func_131(Local_154.f_522.f_13))
									{
										bVar10 = true;
										if (unk_0xDB6FBA5468510E93(unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_154.f_35[Local_154.f_591]), 1), Local_154.f_522.f_13, fVar7, &(Local_154.f_522.f_7)))
										{
											fVar11 = unk_0x0BABEFEA577FCFA4(Local_154.f_522.f_7, unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_154.f_35[Local_154.f_591]), 0), 1);
											if (fVar11 > 300f)
											{
												bVar10 = false;
											}
											if (!func_128(Local_154.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
											{
												bVar10 = false;
											}
											if (!bVar10)
											{
												Local_154.f_522.f_7 = { 0f, 0f, 0f };
												Local_154.f_522.f_13 = { 0f, 0f, 0f };
												Local_115.f_361++;
											}
											else
											{
												Local_154.f_522.f_10 = func_412(Local_154.f_522.f_7, unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_154.f_35[Local_154.f_591]), 1));
											}
										}
										else
										{
											Local_115.f_361++;
											func_411(&(Local_154.f_522.f_19));
											Local_154.f_522.f_13 = { func_405(Local_154.f_522.f_19) };
										}
									}
								}
							}
							else
							{
								if (func_131(Local_154.f_522.f_16))
								{
									Local_154.f_522.f_16 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_154.f_35[Local_154.f_591]), 0) };
								}
								if (!func_131(Local_154.f_522.f_16))
								{
									Var12.f_4 = 1125515264;
									Var12.f_5 = 1;
									Var12.f_6 = 1;
									Var12.f_8 = 1082130432;
									Var12.f_9 = 1176255488;
									Var12.f_10 = 1;
									Var12.f_13 = 1;
									Var12.f_15 = 2;
									Var12.f_22 = 2;
									Var12.f_25 = 1;
									Var12.f_26 = 1;
									Var12.f_29 = 1123024896;
									Var12.f_30 = 1;
									if (func_404(Local_154.f_522.f_16, -1190.658f, -2196.359f, 12.1951f, 50f, 0))
									{
										Local_154.f_522.f_16 = { -962.3659f, -2148.924f, 7.879f };
										Var12 = 0f;
										Var12.f_1 = 0;
										Var12.f_4 = 75f;
										Var12.f_5 = 1;
										Var12.f_6 = 1;
										Var12.f_12 = 0;
										Var12.f_3 = 0;
									}
									else
									{
										Var12 = 100f;
										Var12.f_1 = 0;
										Var12.f_4 = 250f;
										Var12.f_5 = 0;
										Var12.f_6 = 1;
										Var12.f_12 = 0;
										Var12.f_3 = 0;
									}
									Var13 = { Local_154.f_522.f_16 };
									if (func_45(Local_154.f_522.f_16, Var13, iParam1, 0, &(Local_154.f_522.f_7), &(Local_154.f_522.f_10), &Var12))
									{
									}
								}
							}
							if (!func_131(Local_154.f_522.f_7))
							{
								if (func_279(&(Local_154.f_499[iParam0 /*6*/]), iParam1, Local_154.f_522.f_7, Local_154.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(iParam0);
									unk_0x824F744352C8BC82(iParam1);
									Local_154.f_522.f_6 = -1;
									Local_154.f_522.f_7 = { 0f, 0f, 0f };
									Local_154.f_522.f_13 = { 0f, 0f, 0f };
									Local_154.f_522.f_10 = 0f;
									Local_154.f_522.f_12 = 0;
									Local_154.f_522.f_11 = 0;
									Local_154.f_544 = (Local_154.f_544 + 1f);
									Local_115.f_361 = 0;
									unk_0xC664C0067EEAB8D1(&(Local_154.f_550), iParam0);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_404(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_405(struct<3> Param0)
{
	return (-sin(Param0.f_2) * cos(Param0.x)), (cos(Param0.f_2) * cos(Param0.x)), sin(Param0.x);
}

float func_406(int iParam0)
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = 317.5908f;
			break;
		
		case 1:
			fVar0 = 65.8782f;
			break;
		
		case 2:
			fVar0 = 79.6437f;
			break;
		
		case 3:
			fVar0 = 339.162f;
			break;
		
		case 4:
			fVar0 = 300.5366f;
			break;
		
		case 5:
			fVar0 = 26.3732f;
			break;
		
		case 6:
			fVar0 = 12.9312f;
			break;
		
		case 7:
			fVar0 = 306.5281f;
			break;
		
		case 8:
			fVar0 = 70.6314f;
			break;
		
		case 9:
			fVar0 = 199.4232f;
			break;
		
		case 10:
			fVar0 = 232.5371f;
			break;
		
		case 11:
			fVar0 = 217.9965f;
			break;
		
		case 12:
			fVar0 = 97.8555f;
			break;
		
		case 13:
			fVar0 = 254.7614f;
			break;
		
		case 14:
			fVar0 = 149.1127f;
			break;
		
		case 15:
			fVar0 = 299.9396f;
			break;
		
		case 16:
			fVar0 = 143.5423f;
			break;
		
		case 17:
			fVar0 = 153.6289f;
			break;
		
		case 18:
			fVar0 = 327.4365f;
			break;
		
		case 19:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

Vector3 func_407(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = func_406(iParam0);
	Var1 = { func_405(0f, 0f, uVar0) };
	return Var1;
}

float func_408(int iParam0)
{
	float fVar0;
	
	fVar0 = 225f;
	switch (iParam0)
	{
		case 16:
			fVar0 = 150f;
			break;
		
		case 19:
			fVar0 = 150f;
			break;
	}
	return fVar0;
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	iVar1 = -1;
	fVar2 = 1E+10f;
	if (unk_0x159BC3DDA80D71AC(Local_154.f_35[iParam0]))
	{
		Var4 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_154.f_35[iParam0]), 0) };
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Var5 = { func_410(func_10(), iVar0, Local_154.f_384, iParam0) };
			if (!func_131(Var5))
			{
				fVar3 = vdist2(Var4, Var5);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

Vector3 func_410(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							Var0 = { -1299.452f, 262.6427f, 62.4118f };
							break;
						
						case 1:
							Var0 = { -695.6533f, 40.4916f, 42.2066f };
							break;
						
						case 2:
							Var0 = { -423.2495f, -333.4061f, 32.1091f };
							break;
						
						case 3:
							Var0 = { -811.9092f, -954.7036f, 14.3921f };
							break;
						
						case 4:
							Var0 = { -1398.584f, -458.2471f, 33.4826f };
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							Var0 = { -369.0282f, -119.8091f, 37.7011f };
							break;
						
						case 1:
							Var0 = { 191.6113f, 295.0079f, 104.5737f };
							break;
						
						case 2:
							Var0 = { 46.4537f, -100.893f, 55.2574f };
							break;
						
						case 3:
							Var0 = { 274.1785f, 6.6766f, 78.2459f };
							break;
						
						case 4:
							Var0 = { -23.201f, -715.1903f, 31.3893f };
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							Var0 = { -585.7718f, -754.8728f, 28.487f };
							break;
						
						case 1:
							Var0 = { -944.804f, -1526.43f, 4.0691f };
							break;
						
						case 2:
							Var0 = { -1192.996f, -730.683f, 19.8283f };
							break;
						
						case 3:
							Var0 = { 132.2173f, -1060.27f, 28.1924f };
							break;
						
						case 4:
							Var0 = { -832.2669f, -1267.991f, 4.0004f };
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							Var0 = { 332.3376f, -1258.746f, 30.6282f };
							break;
						
						case 1:
							Var0 = { 1249.714f, -344.7008f, 68.0822f };
							break;
						
						case 2:
							Var0 = { 1240.689f, -1096.686f, 37.5253f };
							break;
						
						case 3:
							Var0 = { 1212.722f, -1764.765f, 39.0275f };
							break;
						
						case 4:
							Var0 = { 1108.78f, -781.7119f, 57.2627f };
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							Var0 = { 186.5039f, -1675.689f, 28.5411f };
							break;
						
						case 1:
							Var0 = { -146.6724f, -1421.555f, 29.8175f };
							break;
						
						case 2:
							Var0 = { 444.3614f, -1754.799f, 27.8588f };
							break;
						
						case 3:
							Var0 = { -297.4062f, -2219.247f, 8.3765f };
							break;
						
						case 4:
							Var0 = { 585.7614f, -2808.511f, 5.0589f };
							break;
					}
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							Var0 = { -449.1798f, 1587.87f, 358.0182f };
							break;
						
						case 1:
							Var0 = { -3225.118f, 1286.525f, 4.4326f };
							break;
						
						case 2:
							Var0 = { -1586.618f, 5206.799f, 3.0067f };
							break;
						
						case 3:
							Var0 = { 1310.94f, 4324.869f, 37.0952f };
							break;
						
						case 4:
							Var0 = { -2113.739f, 2836.921f, 31.8098f };
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							Var0 = { 3809.724f, 4462.729f, 3.2886f };
							break;
						
						case 1:
							Var0 = { 2482.591f, 1592.293f, 31.7203f };
							break;
						
						case 2:
							Var0 = { 1233.033f, 1915.367f, 76.9579f };
							break;
						
						case 3:
							Var0 = { 891.9604f, 3580.195f, 32.3722f };
							break;
						
						case 4:
							Var0 = { 3521.939f, 3726.971f, 35.4464f };
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							Var0 = { 2580.501f, 493.3184f, 107.4995f };
							break;
						
						case 1:
							Var0 = { 358.391f, 939.3512f, 204.4465f };
							break;
						
						case 2:
							Var0 = { 410.5613f, 2988.301f, 39.5277f };
							break;
						
						case 3:
							Var0 = { 2718.154f, 4314.578f, 45.8063f };
							break;
						
						case 4:
							Var0 = { 1681.848f, 2514.129f, 44.5649f };
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							Var0 = { 1883.553f, -1038.177f, 77.9114f };
							break;
						
						case 1:
							Var0 = { 532.6779f, -175.9999f, 53.5182f };
							break;
						
						case 2:
							Var0 = { -1370.041f, 145.2471f, 55.1749f };
							break;
						
						case 3:
							Var0 = { -1843.174f, -1222.625f, 12.0172f };
							break;
						
						case 4:
							Var0 = { 496.9435f, -3309.341f, 5.0699f };
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							Var0 = { 737.5259f, 1298.149f, 359.296f };
							break;
						
						case 1:
							Var0 = { 855.9249f, -2342.031f, 29.3313f };
							break;
						
						case 2:
							Var0 = { 2311.147f, -2101.435f, 4.7593f };
							break;
						
						case 3:
							Var0 = { 2332.73f, 2582.851f, 45.6677f };
							break;
						
						case 4:
							Var0 = { 2525.849f, -381.3248f, 91.9928f };
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							Var0 = { -707.0764f, -120.0074f, 36.5922f };
							break;
						
						case 1:
							Var0 = { -1696.003f, -443.9459f, 40.2671f };
							break;
						
						case 2:
							Var0 = { -789.0488f, -402.33f, 34.9388f };
							break;
						
						case 3:
							Var0 = { -754.5149f, -1061.631f, 10.95f };
							break;
						
						case 4:
							Var0 = { -1674.866f, 404.3879f, 87.9936f };
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							Var0 = { 133.3449f, -372.5482f, 42.257f };
							break;
						
						case 1:
							Var0 = { 932.5692f, -4.6969f, 77.7649f };
							break;
						
						case 2:
							Var0 = { -133.423f, -26.4075f, 57.1028f };
							break;
						
						case 3:
							Var0 = { 50.0543f, -913.4272f, 28.8183f };
							break;
						
						case 4:
							Var0 = { 225.4608f, -29.0171f, 68.7371f };
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							Var0 = { -299.8723f, -617.105f, 32.4082f };
							break;
						
						case 1:
							Var0 = { -549.9492f, -902.8572f, 22.8788f };
							break;
						
						case 2:
							Var0 = { -15.4556f, -1087.453f, 25.6721f };
							break;
						
						case 3:
							Var0 = { -1039.15f, -1592.79f, 3.8447f };
							break;
						
						case 4:
							Var0 = { -871.0274f, -224.0974f, 38.4019f };
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							Var0 = { 318.3301f, -179.1691f, 56.6632f };
							break;
						
						case 1:
							Var0 = { 164.1423f, -1282.765f, 28.2341f };
							break;
						
						case 2:
							Var0 = { 1189.492f, -1382.987f, 34.1077f };
							break;
						
						case 3:
							Var0 = { 1002.124f, -1856.855f, 29.8898f };
							break;
						
						case 4:
							Var0 = { 1153.555f, -469.6292f, 65.5486f };
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							Var0 = { 234.9748f, -1772.652f, 27.6514f };
							break;
						
						case 1:
							Var0 = { 429.9525f, -1519.895f, 28.3023f };
							break;
						
						case 2:
							Var0 = { 64.8993f, -1416.897f, 28.3117f };
							break;
						
						case 3:
							Var0 = { -692.3597f, -2287.157f, 11.9528f };
							break;
						
						case 4:
							Var0 = { 662.7217f, -2672.821f, 5.0812f };
							break;
					}
					break;
			}
			break;
		
		case 9:
			switch (func_348())
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1700.735f, 3275.532f, 40.1501f };
							break;
						
						case 1:
							Var0 = { -12.182f, 3040.162f, 39.806f };
							break;
						
						case 2:
							Var0 = { -2106.702f, 2623.127f, 0.1216f };
							break;
						
						case 3:
							Var0 = { 214.3879f, 2455.856f, 55.6948f };
							break;
						
						case 4:
							Var0 = { 2124.389f, 2907.424f, 46.5752f };
							break;
					}
					break;
				
				case 1:
				case 7:
					switch (iParam3)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1700.735f, 3275.532f, 40.1501f };
									break;
								
								case 1:
									Var0 = { -12.182f, 3040.162f, 39.806f };
									break;
								
								case 2:
									Var0 = { -2106.702f, 2623.127f, 0.1216f };
									break;
								
								case 3:
									Var0 = { 214.3879f, 2455.856f, 55.6948f };
									break;
								
								case 4:
									Var0 = { 2124.389f, 2907.424f, 46.5752f };
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1717.141f, 3263.154f, 40.1444f };
									break;
								
								case 1:
									Var0 = { -3.0926f, 3021.231f, 39.6635f };
									break;
								
								case 2:
									Var0 = { -2116.218f, 2673.74f, 1.8178f };
									break;
								
								case 3:
									Var0 = { 217.964f, 2436.037f, 57.85f };
									break;
								
								case 4:
									Var0 = { 2101.716f, 2916.395f, 46.8035f };
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1693.036f, 3244.896f, 39.8872f };
									break;
								
								case 1:
									Var0 = { 22.1065f, 3048.683f, 39.9493f };
									break;
								
								case 2:
									Var0 = { -2108.359f, 2643.392f, 2.1806f };
									break;
								
								case 3:
									Var0 = { 229.8819f, 2455.856f, 54.7963f };
									break;
								
								case 4:
									Var0 = { 2137.322f, 2873.328f, 45.837f };
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1693.036f, 3244.896f, 39.8872f };
							break;
						
						case 1:
							Var0 = { 22.1065f, 3048.683f, 39.9493f };
							break;
						
						case 2:
							Var0 = { -2108.359f, 2643.392f, 2.1806f };
							break;
						
						case 3:
							Var0 = { 229.8819f, 2455.856f, 54.7963f };
							break;
						
						case 4:
							Var0 = { 2137.322f, 2873.328f, 45.837f };
							break;
					}
					break;
			}
			break;
		
		case 8:
		case 7:
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							Var0 = { -670.0045f, 849.1271f, 224.0524f };
							break;
						
						case 1:
							Var0 = { -400.403f, 876.396f, 230.2865f };
							break;
						
						case 2:
							Var0 = { -874.7065f, -25.0867f, 40.7714f };
							break;
						
						case 3:
							Var0 = { -537.2419f, 615.7321f, 136.7603f };
							break;
						
						case 4:
							Var0 = { -2174.372f, -408.0548f, 12.2911f };
							break;
						
						case 5:
							Var0 = { -1554.388f, 840.493f, 181.9932f };
							break;
						
						case 6:
							Var0 = { -1940.993f, 1787.986f, 172.0708f };
							break;
						
						case 7:
							Var0 = { -3015.475f, 91.9937f, 10.6141f };
							break;
						
						case 8:
							Var0 = { -3174.391f, 1108.541f, 19.8395f };
							break;
						
						case 9:
							Var0 = { -1731.302f, -194.1319f, 57.2888f };
							break;
						
						case 10:
							Var0 = { -2198.402f, 4260.813f, 47.0475f };
							break;
						
						case 11:
							Var0 = { -187.4784f, 1554.445f, 321.2434f };
							break;
						
						case 12:
							Var0 = { -2015.946f, 597.9245f, 116.7153f };
							break;
						
						case 13:
							Var0 = { 163.7828f, 474.4106f, 141.2679f };
							break;
						
						case 14:
							Var0 = { -1609.788f, -816.7905f, 9.0389f };
							break;
						
						case 15:
							Var0 = { -36.5543f, 3023.273f, 39.906f };
							break;
						
						case 16:
							Var0 = { -2817.479f, 2320.174f, 1.6076f };
							break;
						
						case 17:
							Var0 = { -220.7927f, 3662.056f, 63.4125f };
							break;
						
						case 18:
							Var0 = { -2512.163f, 3610.042f, 12.7256f };
							break;
						
						case 19:
							Var0 = { -1603.872f, 3092.417f, 31.5661f };
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							Var0 = { -381.3748f, 282.9188f, 83.8448f };
							break;
						
						case 1:
							Var0 = { -106.229f, 909.09f, 235.2054f };
							break;
						
						case 2:
							Var0 = { -59.7287f, 1958.52f, 189.1861f };
							break;
						
						case 3:
							Var0 = { 1101.413f, 2122.263f, 52.4739f };
							break;
						
						case 4:
							Var0 = { 1213.987f, 2655.706f, 36.81f };
							break;
						
						case 5:
							Var0 = { -1513.631f, 1495.125f, 114.6609f };
							break;
						
						case 6:
							Var0 = { 659.1781f, 603.3151f, 128.0561f };
							break;
						
						case 7:
							Var0 = { 79.8783f, -432.2236f, 36.553f };
							break;
						
						case 8:
							Var0 = { -285.1832f, 2546.966f, 73.0644f };
							break;
						
						case 9:
							Var0 = { -1549.607f, 118.4193f, 55.6403f };
							break;
						
						case 10:
							Var0 = { -512.8932f, 1184.815f, 323.9306f };
							break;
						
						case 11:
							Var0 = { 2447.034f, 1583.661f, 31.7203f };
							break;
						
						case 12:
							Var0 = { 2695.286f, 2768.691f, 36.883f };
							break;
						
						case 13:
							Var0 = { 2100.727f, 2332.267f, 93.2854f };
							break;
						
						case 14:
							Var0 = { -877.3867f, -38.4123f, 37.7636f };
							break;
						
						case 15:
							Var0 = { 1458.147f, 1113.403f, 113.334f };
							break;
						
						case 16:
							Var0 = { -1161.019f, 933.2432f, 196.7478f };
							break;
						
						case 17:
							Var0 = { 770.8779f, -233.7807f, 65.1145f };
							break;
						
						case 18:
							Var0 = { 2178.225f, 3314.676f, 45.0137f };
							break;
						
						case 19:
							Var0 = { 705.1279f, 3121.097f, 42.8557f };
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							Var0 = { 56.9063f, 3715.503f, 38.7549f };
							break;
						
						case 1:
							Var0 = { 982.8329f, 3587.869f, 32.5401f };
							break;
						
						case 2:
							Var0 = { 1941.305f, 3826.197f, 30.91f };
							break;
						
						case 3:
							Var0 = { 2932.435f, 4307.926f, 49.8501f };
							break;
						
						case 4:
							Var0 = { -2093.322f, 2623.675f, 0.1029f };
							break;
						
						case 5:
							Var0 = { -1911.57f, 2047.298f, 139.7377f };
							break;
						
						case 6:
							Var0 = { 741.1844f, 2568.981f, 74.6179f };
							break;
						
						case 7:
							Var0 = { 2333.234f, 2553.385f, 45.6677f };
							break;
						
						case 8:
							Var0 = { -299.0912f, 2834.353f, 56.3827f };
							break;
						
						case 9:
							Var0 = { -2821.048f, 1423.333f, 99.8296f };
							break;
						
						case 10:
							Var0 = { 1800.979f, 4611.315f, 36.1828f };
							break;
						
						case 11:
							Var0 = { 2615.021f, 3263.901f, 54.2129f };
							break;
						
						case 12:
							Var0 = { 1735.609f, 3039.561f, 60.1301f };
							break;
						
						case 13:
							Var0 = { 1337.261f, 4372.085f, 43.3327f };
							break;
						
						case 14:
							Var0 = { 787.413f, 4199.005f, 42.0116f };
							break;
						
						case 15:
							Var0 = { 519.8339f, 3076.235f, 39.2289f };
							break;
						
						case 16:
							Var0 = { 1373.727f, 2172.662f, 96.7173f };
							break;
						
						case 17:
							Var0 = { 2484.979f, 4118.685f, 37.0647f };
							break;
						
						case 18:
							Var0 = { 2378.74f, 5052.728f, 45.4446f };
							break;
						
						case 19:
							Var0 = { -255.3838f, 2194.551f, 128.7711f };
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							Var0 = { 1518.801f, 785.9623f, 76.4403f };
							break;
						
						case 1:
							Var0 = { 1581.077f, 2165.04f, 78.3579f };
							break;
						
						case 2:
							Var0 = { 2527.621f, 2632.557f, 36.9449f };
							break;
						
						case 3:
							Var0 = { 2709.996f, 4145.588f, 42.7586f };
							break;
						
						case 4:
							Var0 = { 1080.862f, -693.2229f, 56.9129f };
							break;
						
						case 5:
							Var0 = { 2126.975f, 4795.901f, 40.1411f };
							break;
						
						case 6:
							Var0 = { 714.4439f, 4174.895f, 39.7092f };
							break;
						
						case 7:
							Var0 = { -200.5495f, 3661.389f, 50.7431f };
							break;
						
						case 8:
							Var0 = { -589.3684f, 5303.475f, 69.2145f };
							break;
						
						case 9:
							Var0 = { -1150.776f, 4924.217f, 220.44f };
							break;
						
						case 10:
							Var0 = { 381.9156f, 3559.266f, 32.7679f };
							break;
						
						case 11:
							Var0 = { 1752.881f, 3322.908f, 40.1889f };
							break;
						
						case 12:
							Var0 = { 1422.619f, 4382.753f, 42.9035f };
							break;
						
						case 13:
							Var0 = { 1830.393f, 3834.776f, 32.322f };
							break;
						
						case 14:
							Var0 = { 1054.493f, 2669.53f, 38.5525f };
							break;
						
						case 15:
							Var0 = { 2719.419f, 3510.76f, 60.526f };
							break;
						
						case 16:
							Var0 = { -691.6814f, 5774.155f, 16.331f };
							break;
						
						case 17:
							Var0 = { 1123.888f, 3589.888f, 30.4069f };
							break;
						
						case 18:
							Var0 = { -89.1929f, 6132.037f, 29.3863f };
							break;
						
						case 19:
							Var0 = { 357.4159f, 4442.63f, 61.914f };
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							Var0 = { -2531.017f, 2329.048f, 32.0599f };
							break;
						
						case 1:
							Var0 = { -1114.902f, 2707.805f, 22.8413f };
							break;
						
						case 2:
							Var0 = { 182.5478f, 3056.533f, 42.0161f };
							break;
						
						case 3:
							Var0 = { 1563.959f, 3572.568f, 32.76f };
							break;
						
						case 4:
							Var0 = { 2530.204f, 4207.563f, 39.0731f };
							break;
						
						case 5:
							Var0 = { -1602.434f, 235.0285f, 58.3189f };
							break;
						
						case 6:
							Var0 = { -65.4509f, 1895.882f, 195.0575f };
							break;
						
						case 7:
							Var0 = { 667.8909f, 1279.831f, 359.296f };
							break;
						
						case 8:
							Var0 = { 2674.628f, 1453.696f, 23.5008f };
							break;
						
						case 9:
							Var0 = { 2941.702f, 2781.825f, 38.5054f };
							break;
						
						case 10:
							Var0 = { 892.1917f, 3649.88f, 31.8108f };
							break;
						
						case 11:
							Var0 = { 1336.44f, 2751.43f, 50.5583f };
							break;
						
						case 12:
							Var0 = { 2382.11f, 3051.253f, 47.1529f };
							break;
						
						case 13:
							Var0 = { 1945.158f, 4623.212f, 39.4508f };
							break;
						
						case 14:
							Var0 = { -221.1028f, 1006.303f, 231.3454f };
							break;
						
						case 15:
							Var0 = { -682.4611f, 535.6774f, 109.7483f };
							break;
						
						case 16:
							Var0 = { 1215.716f, 1871.846f, 77.9239f };
							break;
						
						case 17:
							Var0 = { 2962.188f, 3482.686f, 70.3452f };
							break;
						
						case 18:
							Var0 = { 2131.371f, 1937.693f, 92.7868f };
							break;
						
						case 19:
							Var0 = { -3196.841f, 1307.077f, 22.8526f };
							break;
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					Var0 = { -3006.451f, -1739.208f, 0.375f };
					break;
				
				case 1:
					Var0 = { 362.5889f, -4226.308f, 0f };
					break;
				
				case 2:
					Var0 = { -1197.301f, -4122.952f, 0f };
					break;
				
				case 3:
					Var0 = { 3183.194f, -3334.239f, 0.7499f };
					break;
				
				case 4:
					Var0 = { 2231.863f, -4262.798f, 0f };
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					Var0 = { 1141.957f, -4341.856f, 0f };
					break;
				
				case 1:
					Var0 = { 2548.961f, -3486.992f, 0.375f };
					break;
				
				case 2:
					Var0 = { -2044.753f, -4092.995f, 0f };
					break;
				
				case 3:
					Var0 = { -2793.705f, -2629.224f, 0.75f };
					break;
				
				case 4:
					Var0 = { -401.409f, -4391.101f, 0f };
					break;
			}
			break;
		
		default:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							Var0 = { -1143.777f, -2223.181f, 12.1958f };
							break;
						
						case 1:
							Var0 = { -815.8469f, -771.4702f, 20.0395f };
							break;
						
						case 2:
							Var0 = { -247.3628f, -252.8104f, 35.519f };
							break;
						
						case 3:
							Var0 = { -20.1711f, -196.9198f, 51.3703f };
							break;
						
						case 4:
							Var0 = { -1206.244f, 332.5545f, 69.9894f };
							break;
						
						case 5:
							Var0 = { -737.7712f, -271.9272f, 35.9486f };
							break;
						
						case 6:
							Var0 = { -10.6554f, -1032.781f, 27.9804f };
							break;
						
						case 7:
							Var0 = { 203.926f, -1469.377f, 28.1446f };
							break;
						
						case 8:
							Var0 = { 1242.214f, -3156.207f, 4.5283f };
							break;
						
						case 9:
							Var0 = { -3157.448f, 1127.872f, 19.844f };
							break;
						
						case 10:
							Var0 = { -1805.809f, -406.731f, 43.6066f };
							break;
						
						case 11:
							Var0 = { -2091.808f, -295.2459f, 12.0469f };
							break;
						
						case 12:
							Var0 = { 1499.64f, -1888.19f, 70.8845f };
							break;
						
						case 13:
							Var0 = { 521.9511f, -2731.876f, 5.0571f };
							break;
						
						case 14:
							Var0 = { 620.4022f, 193.6013f, 97.381f };
							break;
						
						case 15:
							Var0 = { -2190.606f, -414.4555f, 12.1441f };
							break;
						
						case 16:
							Var0 = { 2528.09f, -311.8917f, 91.9929f };
							break;
						
						case 17:
							Var0 = { 1475.093f, 1140.771f, 113.3343f };
							break;
						
						case 18:
							Var0 = { -164.1015f, 976.5763f, 234.9009f };
							break;
						
						case 19:
							Var0 = { -125.636f, -2244.66f, 6.8117f };
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							Var0 = { -1133.386f, -2229.273f, 12.1957f };
							break;
						
						case 1:
							Var0 = { -834.9979f, -771.7531f, 20.0186f };
							break;
						
						case 2:
							Var0 = { -242.6335f, -240.8987f, 35.519f };
							break;
						
						case 3:
							Var0 = { 1.871f, -202.816f, 51.742f };
							break;
						
						case 4:
							Var0 = { -1208.844f, 340.3609f, 70.0006f };
							break;
						
						case 5:
							Var0 = { -727.7335f, -287.528f, 35.9482f };
							break;
						
						case 6:
							Var0 = { -28.01f, -1030.556f, 27.8435f };
							break;
						
						case 7:
							Var0 = { 190.617f, -1454.129f, 28.1416f };
							break;
						
						case 8:
							Var0 = { 1242.088f, -3148.675f, 4.5282f };
							break;
						
						case 9:
							Var0 = { -3170.323f, 1126.011f, 19.9681f };
							break;
						
						case 10:
							Var0 = { -1792.41f, -394.6852f, 44.0166f };
							break;
						
						case 11:
							Var0 = { -2104.064f, -294.0901f, 12.0469f };
							break;
						
						case 12:
							Var0 = { 1458.824f, -1937.281f, 70.3057f };
							break;
						
						case 13:
							Var0 = { 529.5776f, -2736.348f, 5.0569f };
							break;
						
						case 14:
							Var0 = { 602.5372f, 147.507f, 97.0363f };
							break;
						
						case 15:
							Var0 = { -2189.286f, -384.7161f, 12.3121f };
							break;
						
						case 16:
							Var0 = { 2490.019f, -332.8641f, 91.9927f };
							break;
						
						case 17:
							Var0 = { 1481.655f, 1140.735f, 113.3343f };
							break;
						
						case 18:
							Var0 = { -130.6895f, 1005.831f, 234.732f };
							break;
						
						case 19:
							Var0 = { -125.1937f, -2249.124f, 6.8117f };
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							Var0 = { -1190.658f, -2196.359f, 12.1951f };
							break;
						
						case 1:
							Var0 = { -810.0179f, -747.1166f, 22.3082f };
							break;
						
						case 2:
							Var0 = { -243.9944f, -218.211f, 35.519f };
							break;
						
						case 3:
							Var0 = { -47.888f, -188.9245f, 51.1469f };
							break;
						
						case 4:
							Var0 = { -1194.665f, 323.0352f, 69.7224f };
							break;
						
						case 5:
							Var0 = { -703.6254f, -299.056f, 35.6984f };
							break;
						
						case 6:
							Var0 = { -20.652f, -1017.787f, 27.9166f };
							break;
						
						case 7:
							Var0 = { 182.8745f, -1485.711f, 28.1416f };
							break;
						
						case 8:
							Var0 = { 1242.467f, -3142.34f, 4.5282f };
							break;
						
						case 9:
							Var0 = { -3183.809f, 1088.898f, 19.8407f };
							break;
						
						case 10:
							Var0 = { -1784.578f, -378.8281f, 43.9675f };
							break;
						
						case 11:
							Var0 = { -2077.491f, -336.0633f, 12.1576f };
							break;
						
						case 12:
							Var0 = { 1484.176f, -1923.298f, 70.2404f };
							break;
						
						case 13:
							Var0 = { 492.0316f, -2718.325f, 5.0576f };
							break;
						
						case 14:
							Var0 = { 611.6172f, 168.9255f, 97.2794f };
							break;
						
						case 15:
							Var0 = { -2205.85f, -370.1107f, 12.283f };
							break;
						
						case 16:
							Var0 = { 2527.898f, -307.077f, 91.9929f };
							break;
						
						case 17:
							Var0 = { 1497.473f, 1130.526f, 113.3343f };
							break;
						
						case 18:
							Var0 = { -105.4721f, 1004.142f, 234.7601f };
							break;
						
						case 19:
							Var0 = { -125.1227f, -2253.726f, 6.8117f };
							break;
					}
					break;
			}
			break;
	}
	return Var0;
}

void func_411(var uParam0)
{
	Local_154.f_522.f_12++;
	if (Local_154.f_522.f_12 < 5)
	{
		switch (Local_154.f_522.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_154.f_522.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

float func_412(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x832AD84AA258AE80((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x854C404AEB476240(Local_154.f_499[iParam0 /*6*/]);
	if (!unk_0x8D367F0B53916265(unk_0x6471F4759775FCA4(iVar0)))
	{
		unk_0xED4E91A1FC7ABBF6(iVar0, 1);
		unk_0xD4DF29F3D7B97053(iVar0, 0);
	}
	unk_0x1F7ED1C13023483B(iVar0, 1);
	unk_0x89E171705EA920DA(iVar0, 1, 1, 0);
	unk_0x1FB6C0DF282CC98A(iVar0, 1);
	unk_0x4551B6FEB638C979(iVar0, 1);
	if (func_384() || func_11())
	{
		if (unk_0x6471F4759775FCA4(iVar0) == joaat("huntley"))
		{
			unk_0x473DA067A7AE5435(iVar0, 0);
		}
	}
	else if (func_12() || (func_215() && func_37(8)))
	{
		unk_0x4B43AFBD2CEE7724(iVar0);
		unk_0x0B87A8220B73252D(iVar0, 1);
		unk_0xC5DE9743D6DA2C15(iVar0);
		unk_0x8B58E7AC53EED9F1(iVar0, 1);
		if (func_37(8))
		{
			unk_0xAB1C4744AF94EBCA(1, joaat("vehicle_weapon_space_rocket"), iVar0, 0);
			unk_0xAB1C4744AF94EBCA(1, joaat("weapon_vehicle_rocket"), iVar0, 0);
		}
	}
}

int func_414(struct<3> Param0)
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { Param0 + Vector(100f, 0f, 0f) };
	if (unk_0x7956E831D8C0C17C(Var1, &fVar0, 0, 0))
	{
		if (Param0.f_2 > fVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_415(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	
	if (bParam3)
	{
		*uParam1 = { func_416(unk_0xD6E677FAD7521410(iParam0, 1), 50f, (50f * 1.5f), 10f) };
	}
	else
	{
		Var0 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xA8D713A937F31250(iParam0), 0f, 120f, 0f) };
		*uParam1 = { func_416(Var0, 25f, 50f, 10f) };
	}
	*uParam2 = func_412(*uParam1, unk_0xD6E677FAD7521410(iParam0, 1));
}

Vector3 func_416(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0x644B8DBA4F69BB73(-1f, 1f), unk_0x644B8DBA4F69BB73(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_417(Var0, unk_0x644B8DBA4F69BB73(fParam1, fParam2)) };
	Var0.f_2 = unk_0x644B8DBA4F69BB73(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_417(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

float func_418()
{
	if (func_12())
	{
		return 75f;
	}
	return 75f;
}

void func_419(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	fVar1 = func_418();
	*uParam1 = { func_416(Var0, 100f, 200f, fVar1) };
	uParam1->f_2 = fVar1;
	*uParam2 = func_412(*uParam1, unk_0xD6E677FAD7521410(iParam0, 1));
}

int func_420()
{
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("seashark");
			}
			break;
		
		case 5:
		case 6:
			return Local_154.f_545;
			break;
		
		case 11:
			if (Local_154.f_544 <= 1f)
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("valkyrie");
			}
			break;
	}
	return 0;
}

int func_421()
{
	if (func_190() != 0)
	{
		return 0;
	}
	if (((func_215() || func_384()) || func_12()) || func_11())
	{
		if (Local_154.f_544 >= IntToFloat(func_425()))
		{
			return 0;
		}
	}
	if (func_5(&(Local_154.f_520)))
	{
		if (!func_187(&(Local_154.f_520), 3000, 0))
		{
			return 0;
		}
	}
	if (func_424())
	{
		if (func_37(9))
		{
			return 1;
		}
	}
	if (func_37(18))
	{
		if (func_384())
		{
			if (func_5(&(Local_154.f_518)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (func_12())
	{
		if (Local_154.f_544 < 3f)
		{
			return 1;
		}
	}
	if (func_11())
	{
		if (func_5(&(Local_154.f_518)))
		{
			return 0;
		}
		if (Local_154.f_56 >= func_422())
		{
			if (func_385())
			{
				if (!func_2253(1))
				{
					Local_154.f_591 = unk_0xB36B8558948EA7A8(0, func_21());
					func_24(1);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_422()
{
	switch (Local_154.f_582)
	{
		case 0:
			return func_423();
			break;
		
		case 1:
			return func_423() * 2;
			break;
		
		case 2:
			return func_423();
			break;
		
		case 3:
			return func_423();
			break;
		
		case 4:
			return func_423();
			break;
		
		case 5:
			return func_423() * 2;
			break;
		
		case 6:
		case 7:
			return func_423() * 3;
			break;
	}
	return -1;
}

int func_423()
{
	switch (func_10())
	{
		case 8:
		case 11:
		case 7:
			if (Global_1683814 <= 4)
			{
				return 3;
			}
			else if (Global_1683814 <= 9)
			{
				return 6;
			}
			else
			{
				return 10;
			}
			break;
		
		case 1:
		case 2:
		case 10:
			return 5;
	}
	return 1;
}

int func_424()
{
	if ((func_37(10) || func_37(11)) || func_37(12))
	{
		return 1;
	}
	return 0;
}

int func_425()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Global_1683816;
	if (Global_1683814 == 1)
	{
		iVar1 = 3;
	}
	if (func_215())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16442;
				break;
			
			case 2:
				iVar0 = Global_262145.f_16441;
				break;
			
			case 3:
				iVar0 = Global_262145.f_16440;
				break;
			
			default:
				iVar0 = Global_262145.f_16442;
				break;
			}
	}
	if (func_384())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16439 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16438 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16437 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	if (func_12())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16421;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16420;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16419;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			default:
				iVar0 = 3;
				break;
			}
	}
	if (func_11())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16436 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16435 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16434 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

void func_426()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (func_212())
	{
		iVar2 = 0;
		while (iVar2 < func_210())
		{
			func_441(iVar2);
			switch (func_440(iVar2))
			{
				case 0:
					break;
				
				case 1:
					if (func_207(iVar2))
					{
						func_389(iVar2, 2);
					}
					break;
				
				case 2:
					if (func_207(iVar2))
					{
						switch (func_10())
						{
							case 13:
							case 9:
								if (!unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
								{
									if (func_37(6))
									{
										func_389(iVar2, func_438(iVar2));
									}
								}
								else
								{
									if (!func_37(6))
									{
										func_34(6);
									}
									func_389(iVar2, 18);
								}
								break;
							
							case 12:
								if (!unk_0xE50EB54E0F21BED0(func_197(iVar2), 0))
								{
									func_389(iVar2, func_438(iVar2));
								}
								else
								{
									func_389(iVar2, 18);
								}
								break;
							
							case 5:
							case 6:
								if (!unk_0xE50EB54E0F21BED0(func_197(iVar2), 0))
								{
									func_389(iVar2, func_438(iVar2));
								}
								else
								{
									func_389(iVar2, 18);
								}
								break;
							
							case 11:
								if (!unk_0xE50EB54E0F21BED0(func_197(iVar2), 0))
								{
									if (unk_0x234B68AC2E35ED5A(Local_154.f_549, func_437(iVar2)))
									{
										func_389(iVar2, func_438(iVar2));
									}
								}
								else
								{
									func_389(iVar2, 18);
								}
								break;
							}
					}
					break;
				
				case 6:
					if (func_207(iVar2))
					{
						if (unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
						{
							func_389(iVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(iVar2);
							}
							if (unk_0x234B68AC2E35ED5A(Local_154.f_548, iVar2))
							{
								func_389(iVar2, 14);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(iVar2, 12);
								}
							}
						}
					}
					break;
				
				case 9:
					if (func_207(iVar2))
					{
						if (unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
						{
							func_389(iVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(iVar2);
							}
							if (func_12())
							{
								if (func_429())
								{
									func_389(iVar2, 13);
								}
							}
							if (unk_0x234B68AC2E35ED5A(Local_154.f_548, iVar2))
							{
								func_389(iVar2, 14);
							}
						}
					}
					break;
				
				case 8:
					if (func_207(iVar2))
					{
						if (unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
						{
							func_389(iVar2, 18);
						}
						else
						{
							if ((func_215() || func_384()) || func_12())
							{
								func_431(iVar2);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(iVar2, 13);
								}
								else if (func_428(iVar2))
								{
									if (func_427(iVar2, &uVar1, 1132068864))
									{
										Local_154.f_591 = uVar1;
										func_389(iVar2, 9);
									}
								}
							}
							if (func_11())
							{
								iVar0 = func_437(iVar2);
								if (iVar0 > -1)
								{
									if (unk_0x234B68AC2E35ED5A(Local_154.f_550, iVar0))
									{
										if (unk_0xC49311A2A500FF09(func_197(iVar2), 0))
										{
											func_389(iVar2, 17);
										}
									}
								}
							}
						}
					}
					break;
				
				case 12:
					break;
				
				case 13:
					break;
				
				case 17:
					if (func_11())
					{
						if (func_207(iVar2))
						{
							if (!unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
							{
								if (!unk_0xC49311A2A500FF09(func_197(iVar2), 0))
								{
									func_389(iVar2, 8);
								}
							}
						}
					}
					break;
				
				case 14:
					if (func_207(iVar2))
					{
						if (unk_0xE50EB54E0F21BED0(func_439(iVar2), 0))
						{
							func_389(iVar2, 18);
						}
						else
						{
							if (func_372() > 1)
							{
								func_389(iVar2, 10);
							}
							func_431(iVar2);
						}
					}
					break;
				
				case 15:
					break;
				
				case 16:
					break;
				
				case 18:
					break;
				
				case 19:
					break;
			}
			iVar2++;
		}
	}
}

int func_427(int iParam0, var uParam1, float fParam2)
{
	float fVar0;
	int iVar1;
	
	fVar0 = (fParam2 * fParam2);
	iVar1 = 0;
	while (iVar1 < func_21())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_35[iVar1]))
		{
			if (func_19(Local_154.f_35[iVar1]))
			{
				if (unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_154.f_35[iVar1]), -1, 0) != 0)
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x8A437068C87289B7(Local_154.f_400[iParam0 /*8*/]), 0), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_154.f_35[iVar1]), 1)) <= fVar0)
					{
						*uParam1 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_428(int iParam0)
{
	if (func_12())
	{
		switch (iParam0)
		{
			case 0:
			case 4:
			case 8:
				return 1;
			}
		
		default:
	}
	return 0;
}

bool func_429()
{
	return func_430() == func_422();
}

int func_430()
{
	return Local_154.f_56;
}

void func_431(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	
	fVar0 = func_436();
	fVar1 = func_435();
	iVar3 = func_434(iParam0, &iVar2);
	if (unk_0x419E13582192CFEA(iVar3))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_154.f_547, iParam0))
		{
			if (func_433(func_439(iParam0), iVar3, 1) > fVar0)
			{
				unk_0x191DDA30577F440A(&(Local_154.f_547), iParam0);
			}
			else if (func_433(func_439(iParam0), iVar3, 1) > fVar1)
			{
				if (!func_5(&(Local_154.f_400[iParam0 /*8*/].f_6)))
				{
					func_4(&(Local_154.f_400[iParam0 /*8*/].f_6), 0, 0);
				}
				else if (func_187(&(Local_154.f_400[iParam0 /*8*/].f_6), func_432(), 0))
				{
					unk_0x191DDA30577F440A(&(Local_154.f_547), iParam0);
				}
			}
			else if (func_5(&(Local_154.f_400[iParam0 /*8*/].f_6)))
			{
				func_201(&(Local_154.f_400[iParam0 /*8*/].f_6));
			}
		}
		if (func_384())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_154.f_547, iParam0))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_154.f_548, iParam0))
				{
					if (Local_154.f_71[iVar2] >= 0)
					{
						Var4 = { func_410(func_10(), Local_154.f_71[iVar2], Local_154.f_384, iVar2) };
						fVar5 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(func_439(iParam0), 0), Var4, 1);
						if (fVar5 < 100f)
						{
							unk_0x191DDA30577F440A(&(Local_154.f_548), iParam0);
						}
					}
				}
			}
		}
		else if (func_12())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_154.f_547, iParam0))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_154.f_548, iParam0))
				{
					if (func_430() == (func_422() - 1))
					{
						if (Local_154.f_71[iVar2] >= 0)
						{
							Var4 = { func_410(func_10(), Local_154.f_71[iVar2], Local_154.f_384, iVar2) };
							fVar6 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(func_439(iParam0), 0), Var4, 1);
							if (fVar6 < 100f)
							{
								unk_0x191DDA30577F440A(&(Local_154.f_548), iParam0);
							}
						}
					}
				}
			}
		}
	}
}

int func_432()
{
	if (func_12())
	{
		return 100000;
	}
	return 10000;
}

float func_433(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var1, iParam2);
}

int func_434(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_385())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (unk_0x419E13582192CFEA(func_40(iVar0)))
			{
				fVar2 = func_433(unk_0x8A437068C87289B7(Local_154.f_400[iParam0 /*8*/]), func_40(iVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_40(iVar0);
					*uParam1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar3 = func_40(0);
		*uParam1 = 0;
	}
	return iVar3;
}

float func_435()
{
	if (func_12())
	{
		return 1000f;
	}
	return 200f;
}

float func_436()
{
	if (func_12())
	{
		return 2000f;
	}
	return 400f;
}

int func_437(int iParam0)
{
	switch (func_10())
	{
		case 11:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
				
				case 4:
				case 5:
				case 6:
				case 7:
					return 1;
				
				case 8:
				case 9:
				case 10:
				case 11:
					return 2;
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
						case 3:
							return 1;
							break;
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
						case 2:
							return 0;
						
						case 3:
						case 4:
						case 5:
							return 1;
							break;
					}
					break;
				
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return 0;
						
						case 4:
						case 5:
						case 6:
						case 7:
							return 1;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_438(int iParam0)
{
	var uVar0;
	
	switch (func_10())
	{
		case 13:
		case 9:
		case 6:
			return 8;
		
		case 12:
			if (func_37(8))
			{
				switch (iParam0)
				{
					case 0:
						return 9;
					
					case 1:
					case 2:
					case 3:
						return 8;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
					case 2:
						return 6;
					
					case 1:
					case 3:
						return 8;
					}
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
				case 2:
					return 6;
				
				case 1:
				case 3:
					return 8;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
				case 4:
				case 8:
					if (func_427(iParam0, &uVar0, 600f))
					{
						Local_154.f_591 = uVar0;
						return 9;
					}
					else
					{
						return 8;
					}
					break;
				
				case 1:
				case 2:
				case 3:
				case 5:
				case 6:
				case 7:
				case 9:
				case 10:
				case 11:
					return 8;
			}
			break;
	}
	return 2;
}

int func_439(int iParam0)
{
	if (func_207(iParam0))
	{
		return unk_0xD93F965CFAC1D06A(Local_154.f_400[iParam0 /*8*/]);
	}
	return 0;
}

int func_440(int iParam0)
{
	return Local_154.f_400[iParam0 /*8*/].f_5;
}

void func_441(int iParam0)
{
	if (!func_11())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_154.f_400[iParam0 /*8*/]))
	{
		if (func_442(Local_154.f_400[iParam0 /*8*/]))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_154.f_497, iParam0))
			{
				unk_0x191DDA30577F440A(&(Local_154.f_497), iParam0);
				Local_154.f_498++;
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_154.f_497, iParam0))
		{
			unk_0xC664C0067EEAB8D1(&(Local_154.f_497), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_154.f_497, iParam0))
	{
		unk_0xC664C0067EEAB8D1(&(Local_154.f_497), iParam0);
	}
}

int func_442(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

void func_443()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_41(iVar0))
		{
			if (!func_37(17))
			{
				if (func_274())
				{
					if (func_445(iVar0))
					{
						if (!unk_0x0297E633EADA2182(func_40(iVar0)))
						{
							if (!func_5(&(Local_154.f_562[iVar0 /*2*/])))
							{
								func_4(&(Local_154.f_562[iVar0 /*2*/]), 0, 0);
							}
							else if (func_187(&(Local_154.f_562[iVar0 /*2*/]), func_444(), 0))
							{
								func_34(17);
							}
						}
						else if (func_5(&(Local_154.f_562[iVar0 /*2*/])))
						{
							func_201(&(Local_154.f_562[iVar0 /*2*/]));
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_444()
{
	return 120000;
}

int func_445(int iParam0)
{
	if (func_446(func_40(iParam0), Local_154.f_10[iParam0 /*3*/], 1) > 10f)
	{
		return 1;
	}
	if (func_433(unk_0x7D2B9E6A64637269(), func_40(iParam0), 1) < 100f)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (func_37(10))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_37(11))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(12))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_446(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam2);
}

void func_447()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_385())
	{
		iVar1 = 0;
		while (iVar1 < func_21())
		{
			if (unk_0x419E13582192CFEA(func_40(iVar1)) && !func_185(iVar1))
			{
				func_448(func_40(iVar1), iVar1, &iVar0);
				if (Local_154.f_71[iVar1] != iVar0)
				{
					Local_154.f_71[iVar1] = iVar0;
				}
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	else if (unk_0x419E13582192CFEA(func_40(0)))
	{
		func_448(func_40(0), 0, &iVar2);
		if (Local_154.f_71[0] != iVar2)
		{
			Local_154.f_71[0] = iVar2;
		}
	}
}

void func_448(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar4 = 1E+07f;
	if (!func_429())
	{
		if (func_459())
		{
			iVar1 = func_458(iParam1);
			if (iVar1 < 10)
			{
				if (unk_0xB7D6400C89373777(Local_154.f_75[iVar1 /*30*/][iParam1]))
				{
					iVar5 = unk_0xD93F965CFAC1D06A(Local_154.f_75[iVar1 /*30*/][iParam1]);
				}
			}
		}
		else
		{
			iVar5 = iParam0;
		}
		if (func_457())
		{
			if (Local_154.f_67[iParam1] != -1)
			{
				if (iVar1 >= 4)
				{
					Local_154.f_67[iParam1] = -1;
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (unk_0x234B68AC2E35ED5A(Local_154.f_61[iParam1], iVar0) && !func_456(iVar0, iParam1))
			{
				Var2 = { func_410(func_10(), iVar0, Local_154.f_384, iParam1) };
				fVar3 = unk_0x0BABEFEA577FCFA4(Var2, unk_0xD6E677FAD7521410(iParam0, 0), 1);
				if (fVar3 < fVar4)
				{
					fVar4 = fVar3;
					*uParam2 = iVar0;
				}
			}
			iVar0++;
		}
		if (unk_0x419E13582192CFEA(iVar5) && !unk_0xE50EB54E0F21BED0(iVar5, 0))
		{
			if (func_218())
			{
				if (func_23(iParam1))
				{
					func_22(iParam1);
				}
			}
			else if (func_452(func_410(func_10(), *uParam2, Local_154.f_384, iParam1), iVar5, 1))
			{
				func_451(*uParam2, iParam1);
				if (func_459() && !func_337())
				{
					unk_0x4569EA65F1B056ED(-1, "Drop_Package", func_450(iParam1, 0), "DLC_Exec_Land_Multiple_Sounds", 1, 0, 0);
				}
				if (func_385())
				{
					if (func_458(iParam1) == func_449())
					{
						func_22(iParam1);
					}
				}
				else if (func_429())
				{
					func_22(iParam1);
				}
			}
		}
	}
}

int func_449()
{
	return (func_422() / func_21());
}

Vector3 func_450(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_41(iParam0))
	{
		Var0 = { unk_0xD6E677FAD7521410(func_42(iParam0), 1) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_385())
	{
		if (iParam1 == 0)
		{
			Local_154.f_57++;
		}
		else if (iParam1 == 1)
		{
			Local_154.f_58++;
		}
		else
		{
			Local_154.f_59++;
		}
	}
	Local_154.f_56++;
	if (func_337())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			unk_0xC664C0067EEAB8D1(&(Local_154.f_61[iVar0]), iParam0);
			iVar0++;
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Local_154.f_61[iParam1]), iParam0);
	}
}

int func_452(struct<3> Param0, int iParam1, bool bParam2)
{
	if (unk_0x591190E69BE43117(iParam1, Param0, func_453(bParam2, 0), 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_453(bool bParam0, bool bParam1)
{
	if (func_337())
	{
		if (func_218())
		{
			if (bParam1)
			{
				return (150f * 4f), (150f * 4f), (150f * 1.5f);
			}
			else
			{
				return (150f * 1.5f), (150f * 1.5f), (150f * 1.5f);
			}
		}
		else
		{
			return (150f / 2f), (150f / 2f), (150f * 1.5f);
		}
	}
	else if (func_455() || func_454())
	{
		if (bParam0)
		{
			return (20f * 1.5f), (20f * 1.5f), 3f;
		}
		else
		{
			return (20f * 1.2f), (20f * 1.2f), 3f;
		}
	}
	if (func_274())
	{
		return (3f * 3f), (3f * 3f), (3f * 1.5f);
	}
	return 3f, 3f, 3f;
}

bool func_454()
{
	return func_10() == 2;
}

bool func_455()
{
	return func_10() == 1;
}

int func_456(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0 == Local_154.f_67[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (iParam0 == Local_154.f_67[iParam1])
	{
		return 1;
	}
	return 0;
}

bool func_457()
{
	return func_10() == 10;
}

int func_458(int iParam0)
{
	if (func_385())
	{
		switch (iParam0)
		{
			case 0:
				return Local_154.f_57;
			
			case 1:
				return Local_154.f_58;
			
			case 2:
				return Local_154.f_59;
			
			default:
		}
	}
	else
	{
		return Local_154.f_56;
	}
	return 0;
}

int func_459()
{
	if ((func_337() || (func_455() && func_430() < (func_422() - 1))) || (func_454() && func_430() < (func_422() - 1)))
	{
		return 1;
	}
	return 0;
}

void func_460()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_459())
	{
		if (func_470())
		{
			iVar0 = 0;
			while (iVar0 < func_21())
			{
				iVar1 = (26 + iVar0);
				iVar2 = iVar1;
				if (func_37(iVar2))
				{
					if (Local_154.f_376[iVar0] < 10)
					{
						switch (Local_154.f_380[iVar0])
						{
							case 0:
								Local_154.f_380[iVar0]++;
								break;
							
							case 1:
								if (unk_0x234B68AC2E35ED5A(Local_154.f_592, iVar0))
								{
									if (func_41(iVar0) && func_464(unk_0x9E695CE384C77EF0(func_42(iVar0), func_469()), func_468(iVar0), iVar0))
									{
										Local_154.f_376[iVar0]++;
										func_2(iVar2);
										Local_154.f_380[iVar0] = 0;
										unk_0xC664C0067EEAB8D1(&(Local_154.f_592), iVar0);
									}
								}
								else
								{
									func_2(iVar2);
								}
								break;
							}
						}
				}
				iVar0++;
			}
		}
	}
	func_461();
}

void func_461()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < func_21())
	{
		iVar4 = 0;
		while (iVar4 < 10)
		{
			if (unk_0xB7D6400C89373777(Local_154.f_75[iVar4 /*30*/][iVar5]) && unk_0x159BC3DDA80D71AC(Local_154.f_75[iVar4 /*30*/][iVar5]))
			{
				if (func_203(Local_154.f_75[iVar4 /*30*/][iVar5]))
				{
					unk_0x0A6448DF4E471932(unk_0xD93F965CFAC1D06A(Local_154.f_75[iVar4 /*30*/][iVar5]), 0, 0f, 0f, 10f, 0, 0, 1, 0);
				}
				if (unk_0xB364346471C3B028(Local_154.f_75[iVar4 /*30*/][iVar5]) || (!unk_0xE5AEA27726895658(Local_154.f_75[iVar4 /*30*/][iVar5]) && unk_0x443E2CA72E118E64()))
				{
					if (unk_0xB7D6400C89373777(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]) && unk_0x159BC3DDA80D71AC(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]))
					{
						iVar2 = unk_0xBD11ACD80727BD31(Local_154.f_75[iVar4 /*30*/][iVar5]);
						iVar3 = unk_0xBD11ACD80727BD31(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]);
						if (unk_0xB364346471C3B028(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]) || (!unk_0xE5AEA27726895658(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]) && unk_0x443E2CA72E118E64()))
						{
							if (func_203(Local_154.f_75[iVar4 /*30*/][iVar5]) && func_203(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_154.f_75[iVar4 /*30*/].f_12[iVar5], 2) && !unk_0x234B68AC2E35ED5A(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5], 2))
								{
									if (unk_0x234B68AC2E35ED5A(Local_154.f_75[iVar4 /*30*/].f_12[iVar5], 1) || unk_0x234B68AC2E35ED5A(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5], 1))
									{
										if (unk_0x419E13582192CFEA(iVar3))
										{
											if (!unk_0x698F51FB33ADAF7B(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												unk_0x191DDA30577F440A(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5]), 2);
												func_391(&(Local_154.f_75[iVar4 /*30*/].f_4[iVar5]));
												func_391(&(Local_154.f_75[iVar4 /*30*/][iVar5]));
												unk_0xC664C0067EEAB8D1(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5]), 0);
												unk_0xC664C0067EEAB8D1(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5]), 1);
												unk_0xC664C0067EEAB8D1(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5]), 2);
											}
										}
									}
								}
								if (!unk_0x234B68AC2E35ED5A(Local_154.f_75[iVar4 /*30*/].f_12[iVar5], 1) && !unk_0x234B68AC2E35ED5A(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5], 1))
								{
									if (unk_0x234B68AC2E35ED5A(Local_154.f_75[iVar4 /*30*/].f_12[iVar5], 0) || unk_0x234B68AC2E35ED5A(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5], 0))
									{
										if (unk_0x419E13582192CFEA(iVar3))
										{
											if (unk_0x698F51FB33ADAF7B(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												unk_0x191DDA30577F440A(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_3[iVar5]), 1);
											}
										}
									}
								}
								if (!unk_0x234B68AC2E35ED5A(Local_154.f_75[iVar4 /*30*/].f_12[iVar5], 0))
								{
									if (func_462(iVar4, iVar5, iVar2))
									{
										unk_0xFFE2CF1579FA5C68(iVar3, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
										unk_0x191DDA30577F440A(&(Local_154.f_75[iVar4 /*30*/].f_12[iVar5]), 0);
										unk_0xE2D24A37AFCF27BF(Local_115.f_360, "Parachute_Land", iVar3, "DLC_Exec_Air_Drop_Sounds", 0, 0);
									}
									else
									{
										unk_0x6992F96C61296A6B(iVar2, 2, 0.0245f);
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iVar2))
					{
						Var0 = { unk_0xD6E677FAD7521410(iVar2, 1) };
						if (unk_0x7956E831D8C0C17C(Var0, &fVar1, 0, 0))
						{
							if (Var0.f_2 < fVar1 && !unk_0x0297E633EADA2182(iVar2))
							{
								if (func_203(Local_154.f_75[iVar4 /*30*/][iVar5]))
								{
									unk_0x78CDDD1E6367978D(iVar2, Var0.x, Var0.f_1, fVar1, 1, 0, 0, 1);
								}
							}
						}
					}
					if (func_35())
					{
						if (!func_5(&(Local_154.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/])))
						{
							func_4(&(Local_154.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/]), 0, 0);
						}
						else if (func_187(&(Local_154.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/]), 30000, 0))
						{
							func_390(&(Local_154.f_75[iVar4 /*30*/][iVar5]));
						}
					}
				}
			}
			iVar4++;
		}
		iVar5++;
	}
}

int func_462(int iParam0, int iParam1, int iParam2)
{
	if (func_187(&(Local_154.f_75[iParam0 /*30*/].f_16[iParam1 /*2*/]), 3000, 0))
	{
		if (unk_0x419E13582192CFEA(iParam2))
		{
			if (!unk_0x397C98A5552886EB(iParam2))
			{
				return 1;
			}
		}
	}
	if (unk_0x419E13582192CFEA(iParam2))
	{
		if (unk_0x0297E633EADA2182(iParam2))
		{
			return 1;
		}
	}
	if (func_463(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = unk_0xEE91D595F0A7D056(unk_0xBD11ACD80727BD31(Local_154.f_75[iParam0 /*30*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x6178A36ADE734254(unk_0xBD11ACD80727BD31(Local_154.f_75[iParam0 /*30*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_464(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = Local_154.f_376[iParam2];
	if (!unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/][iParam2]))
	{
		if (unk_0x3E42A32E15B11FFA(1))
		{
			Local_154.f_75[iVar2 /*30*/][iParam2] = unk_0x99A6768052B30AE8(unk_0x61A4FE6962D74E54(joaat("pickup_portable_crate_unfixed_incar"), Param0 + Var0, 0, func_467()));
			unk_0xCD37A28258D70638(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), fParam1);
			unk_0xFEDD7E9148CF3B3E(Local_154.f_75[iVar2 /*30*/][iParam2], 1);
			unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1);
			unk_0x0E0A6D38926C4DD2(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1);
			unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1);
			unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 0);
			unk_0xC5DE9743D6DA2C15(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]));
			unk_0xFA67B92FD990FE3A(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 0f, 0f, -0.2f);
			unk_0x61918AA39871DD2B(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1, 0);
			unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1200);
			if (func_5(&(Local_154.f_75[iVar2 /*30*/].f_23[iParam2 /*2*/])))
			{
				func_201(&(Local_154.f_75[iVar2 /*30*/].f_23[iParam2 /*2*/]));
			}
		}
	}
	if (func_337())
	{
		if (unk_0x3E42A32E15B11FFA(1))
		{
			if (unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/][iParam2]))
			{
				if (!unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]))
				{
					Var1 = { unk_0xD6E677FAD7521410(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 1) };
					if (func_465(&(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), func_466(), Var1 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x0F1058706D5A58B4(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/][iParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), 1);
						unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), 0);
						unk_0xFFE2CF1579FA5C68(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0x20CC00CC70A99443(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]));
						unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]), 1200);
						func_201(&(Local_154.f_75[iVar2 /*30*/].f_16[iParam2 /*2*/]));
					}
				}
			}
			if (unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/][iParam2]) && unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/].f_4[iParam2]))
			{
				return 1;
			}
		}
	}
	else if (unk_0xB7D6400C89373777(Local_154.f_75[iVar2 /*30*/][iParam2]))
	{
		return 1;
	}
	return 0;
}

int func_465(var uParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x3E42A32E15B11FFA(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x0358AFF5157FE26F(uParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x795434E153F90E41(uParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x6DA4D1FB7DCE9FD8(unk_0xBD11ACD80727BD31(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(*uParam0), 0, 0);
		}
		if (unk_0x895470BB92940DC6(unk_0xBD11ACD80727BD31(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_466()
{
	return joaat("p_cargo_chute_s");
}

int func_467()
{
	if (func_35())
	{
		return joaat("ex_prop_adv_case_sm");
	}
	else if (func_337())
	{
		return joaat("ex_prop_adv_case_sm_flash");
	}
	return joaat("prop_drug_package");
}

float func_468(int iParam0)
{
	float fVar0;
	
	if (func_41(iParam0))
	{
		fVar0 = unk_0xA8D713A937F31250(func_42(iParam0));
	}
	return fVar0;
}

Vector3 func_469()
{
	if (!func_337())
	{
		return 0f, -6f, -0.32f;
	}
	if (func_348() == 2)
	{
		return 0f, 0f, -5f;
	}
	return 0f, 0f, -2f;
}

int func_470()
{
	unk_0x16E516CA9C88FF48(func_467());
	unk_0x16E516CA9C88FF48(func_466());
	unk_0x068BDE31F7D112BB(func_471());
	if ((unk_0xA9C0BBFB9CBB66F1(func_467()) && unk_0xA9C0BBFB9CBB66F1(func_466())) && unk_0x0EC2B29D4172D225(func_471()))
	{
		return 1;
	}
	return 0;
}

char* func_471()
{
	return "P_cargo_chute_S";
}

int func_472()
{
	func_512();
	func_511();
	if ((((func_497() && func_496()) && func_492()) && func_490()) && func_488())
	{
		func_486();
		func_485();
		if (func_477())
		{
			if (func_476())
			{
				func_475();
				if (func_385())
				{
					Local_154.f_591 = unk_0xB36B8558948EA7A8(0, func_21());
				}
				Local_154.f_30 = unk_0x1146A9AE09CE2B14();
				if (func_474())
				{
					Local_154.f_555 = Global_262145.f_15300;
				}
				func_473();
				return 1;
			}
		}
	}
	return 0;
}

void func_473()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_35())
		{
			Local_154.f_10[iVar0 /*3*/] = { func_371(iVar0, 0) };
			Local_154.f_20[iVar0] = func_370(iVar0, 0);
		}
		else if (func_337())
		{
			Local_154.f_10[iVar0 /*3*/] = { func_369(iVar0) };
			Local_154.f_20[iVar0] = func_368(iVar0);
		}
		else
		{
			Local_154.f_10[iVar0 /*3*/] = { func_367() };
			Local_154.f_20[iVar0] = func_366();
		}
		if (!func_128(Local_154.f_10[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			unk_0x6AF7EE4DD9F8B944(Local_154.f_10[iVar0 /*3*/], 4f, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

bool func_474()
{
	return func_10() == 3;
}

void func_475()
{
	int iVar0;
	
	if (unk_0x443E2CA72E118E64())
	{
		if (func_384())
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 3);
			switch (iVar0)
			{
				case 0:
					Local_154.f_545 = joaat("schafter2");
					Local_154.f_546 = joaat("g_m_m_armgoon_01");
					break;
				
				case 1:
					Local_154.f_545 = joaat("huntley");
					Local_154.f_546 = joaat("g_m_m_mexboss_01");
					break;
				
				case 2:
					Local_154.f_545 = joaat("kuruma");
					Local_154.f_546 = joaat("g_m_y_korean_01");
					break;
			}
		}
		else if (func_11())
		{
			Local_154.f_545 = joaat("huntley");
			Local_154.f_546 = joaat("g_m_m_mexboss_01");
		}
	}
}

int func_476()
{
	int iVar0;
	
	if (!func_12())
	{
		return 1;
	}
	if (Local_154.f_551[0] == -1)
	{
		Local_154.f_551[0] = unk_0xB36B8558948EA7A8(0, func_423());
	}
	if (Local_154.f_551[1] == -1)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, func_423());
		if (iVar0 != Local_154.f_551[0])
		{
			Local_154.f_551[1] = iVar0;
		}
	}
	if (Local_154.f_551[2] == -1)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, func_423());
		if (iVar0 != Local_154.f_551[0] && iVar0 != Local_154.f_551[1])
		{
			Local_154.f_551[2] = iVar0;
		}
	}
	if ((Local_154.f_551[0] != -1 && Local_154.f_551[1] != -1) && Local_154.f_551[2] != -1)
	{
		return 1;
	}
	return 0;
}

bool func_477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (((!func_337() && !func_455()) && !func_454()) && !func_274())
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 20);
		iVar2 = 1;
		if (func_484(iVar0))
		{
			return 0;
		}
		iVar1 = (iVar0 + Local_154.f_65);
	}
	else if ((func_273() || func_483()) && func_422() < 20)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 20);
		iVar2 = 1;
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = (iVar0 + Local_154.f_65);
	}
	if (iVar1 >= 20)
	{
		iVar1 = 0;
	}
	if (func_274())
	{
		iVar1 = 0;
	}
	if (func_457())
	{
		if (Local_154.f_582 == 1)
		{
			if (Local_154.f_67[1] == -1)
			{
				Local_154.f_67[1] = ((func_422() / 2) - 1);
			}
			if (Local_154.f_67[0] == -1)
			{
				Local_154.f_67[0] = ((func_422() / 2) - 1);
			}
		}
		else if (Local_154.f_67[0] == -1)
		{
			Local_154.f_67[0] = (func_422() - 1);
		}
	}
	if (func_479(iVar1))
	{
		if (Local_154.f_65 < func_422())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_154.f_61[0], iVar1))
			{
				Local_154.f_65++;
				if (iVar2 || iVar1 < func_478())
				{
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < func_21())
					{
						unk_0x191DDA30577F440A(&(Local_154.f_61[iVar3]), iVar1);
						unk_0x191DDA30577F440A(&(Local_154.f_66), iVar1);
						iVar3++;
					}
				}
				if ((!func_455() && !func_337()) && !func_454())
				{
					return 1;
				}
			}
		}
	}
	return Local_154.f_65 == func_422();
}

int func_478()
{
	if ((func_273() || func_483()) || func_12())
	{
		if (Global_1683814 <= 4)
		{
			return 3;
		}
		else if (Global_1683814 <= 9)
		{
			return 6;
		}
		else
		{
			return 20;
		}
	}
	return 5;
}

int func_479(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	if (func_480())
	{
		Var1 = { func_17(Local_154.f_54) };
		iVar2 = 0;
		while (iVar2 < func_21())
		{
			fVar0 = unk_0x0BABEFEA577FCFA4(func_410(func_10(), iParam0, Local_154.f_384, iVar2), Var1, 1);
			if (fVar0 >= IntToFloat(Global_262145.f_15698))
			{
				return 1;
			}
			iVar2++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_480()
{
	if ((((func_482() || func_474()) || func_384()) || func_11()) || func_481())
	{
		return 1;
	}
	return 0;
}

bool func_481()
{
	return func_10() == 4;
}

bool func_482()
{
	return func_10() == 0;
}

bool func_483()
{
	return func_10() == 7;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_15429;
		
		case 1:
			return Global_262145.f_15430;
		
		case 2:
			return Global_262145.f_15431;
		
		case 3:
			return Global_262145.f_15432;
		
		case 4:
			return Global_262145.f_15433;
		
		case 5:
			return Global_262145.f_15434;
		
		case 6:
			return Global_262145.f_15435;
		
		case 7:
			return Global_262145.f_15436;
		
		case 8:
			return Global_262145.f_15437;
		
		case 9:
			return Global_262145.f_15438;
		
		case 10:
			return Global_262145.f_15439;
		
		case 11:
			return Global_262145.f_15440;
		
		case 12:
			return Global_262145.f_15441;
		
		case 13:
			return Global_262145.f_15442;
		
		case 14:
			return Global_262145.f_15443;
		
		case 15:
			return Global_262145.f_15444;
		
		case 16:
			return Global_262145.f_15445;
		
		case 17:
			return Global_262145.f_15446;
		
		case 18:
			return Global_262145.f_15447;
		
		case 19:
			return Global_262145.f_15448;
		
		default:
	}
	return 0;
}

void func_485()
{
	if (func_215())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				Local_154.f_579 = { -1419.803f, -1540.264f, 2.0909f };
				break;
			
			case 1:
				Local_154.f_579 = { -141.5667f, -2711.081f, 6.0002f };
				break;
			
			case 2:
				Local_154.f_579 = { 215.8467f, -3336.942f, 5.7982f };
				break;
			
			case 3:
				Local_154.f_579 = { 1294.194f, -3217.033f, 5.9059f };
				break;
			
			case 4:
				Local_154.f_579 = { 982.3854f, -3343.457f, 6.0958f };
				break;
			}
	}
	if (func_269())
	{
		switch (Local_154.f_394[0])
		{
			case 0:
				Local_154.f_579 = { 133.834f, -3336.725f, 6.0218f };
				break;
			
			case 1:
				Local_154.f_579 = { 1293.464f, -3126.078f, 5.906f };
				break;
			
			case 2:
				Local_154.f_579 = { -761.9681f, -2840.404f, 13.9415f };
				break;
			
			case 3:
				Local_154.f_579 = { -1331.282f, -1693.366f, 2.1151f };
				break;
			
			case 4:
				Local_154.f_579 = { -587.2385f, -2362.541f, 13.8282f };
				break;
			}
	}
}

void func_486()
{
	int iVar0;
	int iVar1;
	
	if (Local_154.f_388 == -1 && func_454())
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 10000);
		if (func_487(iVar0, 7500, 10000))
		{
			iVar1 = 1;
		}
		else if (func_487(iVar0, 5000, 7500))
		{
			iVar1 = 2;
		}
		else if (func_487(iVar0, 2500, 5000))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 4;
		}
		Local_154.f_388 = iVar1;
	}
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return 1;
	}
	return 0;
}

int func_488()
{
	int iVar0;
	
	if (!func_37(30))
	{
		if ((func_455() || func_454()) || func_337())
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_154.f_384 = iVar0;
			func_34(30);
		}
		else if (func_274())
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_154.f_384 = iVar0;
			Local_154.f_394[0] = iVar0;
			func_34(30);
		}
		else
		{
			func_34(30);
			return 1;
		}
	}
	return func_37(30);
}

int func_489(int iParam0)
{
	switch (func_10())
	{
		case 11:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15401;
				
				case 1:
					return Global_262145.f_15402;
				
				case 2:
					return Global_262145.f_15403;
				
				case 3:
					return Global_262145.f_15404;
				
				case 4:
					return Global_262145.f_15405;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15407;
				
				case 1:
					return Global_262145.f_15408;
				
				case 2:
					return Global_262145.f_15409;
				
				case 3:
					return Global_262145.f_15410;
				
				case 4:
					return Global_262145.f_15411;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15413;
				
				case 1:
					return Global_262145.f_15414;
				
				case 2:
					return Global_262145.f_15415;
				
				case 3:
					return Global_262145.f_15416;
				
				case 4:
					return Global_262145.f_15417;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15420;
				
				case 1:
					return Global_262145.f_15421;
				
				case 2:
					return Global_262145.f_15422;
				
				case 3:
					return Global_262145.f_15423;
				
				case 4:
					return Global_262145.f_15424;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15450;
				
				case 1:
					return Global_262145.f_15451;
				
				case 2:
					return Global_262145.f_15452;
				
				case 3:
					return Global_262145.f_15453;
				
				case 4:
					return Global_262145.f_15454;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15469;
				
				case 1:
					return Global_262145.f_15470;
				
				case 2:
					return Global_262145.f_15471;
				
				case 3:
					return Global_262145.f_15472;
				
				case 4:
					return Global_262145.f_15473;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15457;
				
				case 1:
					return Global_262145.f_15458;
				
				case 2:
					return Global_262145.f_15459;
				
				case 3:
					return Global_262145.f_15460;
				
				case 4:
					return Global_262145.f_15461;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15463;
				
				case 1:
					return Global_262145.f_15464;
				
				case 2:
					return Global_262145.f_15465;
				
				case 3:
					return Global_262145.f_15466;
				
				case 4:
					return Global_262145.f_15467;
				
				default:
			}
			break;
	}
	return 0;
}

int func_490()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_37(29))
	{
		iVar3 = func_491(unk_0x1146A9AE09CE2B14());
		if (func_337())
		{
			switch (func_348())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				
				case 7:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
				
				case 2:
					iVar0 = unk_0xB36B8558948EA7A8(0, 12);
					break;
			}
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 5);
		}
		Local_154.f_394[0] = iVar0;
		Local_154.f_394[1] = iVar1;
		Local_154.f_394[2] = iVar2;
		func_34(29);
	}
	return func_37(29);
}

int func_491(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar1 < Global_262145.f_12544)
	{
		if (Global_1658176.f_11.f_132[iVar1] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_492()
{
	var uVar0;
	var uVar1;
	
	if (Local_154.f_582 == -1)
	{
		uVar1 = func_495(func_10(), &uVar0);
		func_494(uVar1);
		func_493(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0)
{
	Local_154.f_583 = uParam0;
}

void func_494(var uParam0)
{
	Local_154.f_582 = uParam0;
}

int func_495(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_1683814;
	switch (iParam0)
	{
		case 8:
		case 7:
		case 9:
		case 10:
		case 11:
			if (iVar0 >= 1 && iVar0 < Global_262145.f_15294)
			{
				*uParam1 = iVar0;
				return 0;
			}
			else if (iVar0 >= Global_262145.f_15294 && iVar0 < Global_262145.f_15295)
			{
				*uParam1 = iVar0;
				return 0;
			}
			*uParam1 = iVar0;
			if (iParam0 == 9)
			{
				return 7;
			}
			return 2;
		
		case 12:
		case 13:
			*uParam1 = iVar0;
			return 3;
		
		default:
	}
	if (iVar0 >= 1 && iVar0 < Global_262145.f_15296)
	{
		*uParam1 = iVar0;
		return 4;
	}
	else if (iVar0 >= Global_262145.f_15296 && iVar0 < Global_262145.f_15297)
	{
		*uParam1 = iVar0;
		return 5;
	}
	*uParam1 = iVar0;
	return 6;
	*uParam1 = 1;
	return -1;
}

int func_496()
{
	if (Local_154.f_54 == -1)
	{
		if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183 == -1)
		{
			Local_154.f_54 = Local_115.f_102;
		}
		else
		{
			Local_154.f_54 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183;
		}
		Local_154.f_55 = func_2251();
		if (Local_154.f_55 <= 0)
		{
			Local_154.f_55 = 1;
			func_24(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_497()
{
	int iVar0;
	
	if (func_10() == 14)
	{
		if (func_2252())
		{
			iVar0 = func_510();
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 14);
		}
		if ((((!func_508(iVar0) && !func_507(iVar0)) && !func_503(iVar0)) && func_502(iVar0)) && func_501(iVar0))
		{
			Local_154.f_7 = iVar0;
			func_500(iVar0);
			func_498(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_498(int iParam0)
{
	Global_2544210.f_5191.f_366 = func_499(iParam0);
}

int func_499(int iParam0)
{
	if (func_36(iParam0))
	{
		return 0;
	}
	else if (func_338(iParam0))
	{
		return 1;
	}
	else if (func_275(iParam0))
	{
		return 2;
	}
	return -1;
}

void func_500(int iParam0)
{
	if (Global_2544210.f_5191.f_346[0] == 14)
	{
		Global_2544210.f_5191.f_346[0] = iParam0;
		return;
	}
	else
	{
		Global_2544210.f_5191.f_346[7] = Global_2544210.f_5191.f_346[6];
		Global_2544210.f_5191.f_346[6] = Global_2544210.f_5191.f_346[5];
		Global_2544210.f_5191.f_346[5] = Global_2544210.f_5191.f_346[4];
		Global_2544210.f_5191.f_346[4] = Global_2544210.f_5191.f_346[3];
		Global_2544210.f_5191.f_346[3] = Global_2544210.f_5191.f_346[2];
		Global_2544210.f_5191.f_346[2] = Global_2544210.f_5191.f_346[1];
		Global_2544210.f_5191.f_346[1] = Global_2544210.f_5191.f_346[0];
		Global_2544210.f_5191.f_346[0] = iParam0;
	}
}

bool func_501(int iParam0)
{
	return Global_2544210.f_5191.f_366 != func_499(iParam0);
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			return Global_1683814 >= 5;
		
		default:
	}
	return 1;
}

int func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(iVar0)))
		{
			iVar2 = unk_0xC502CD39B4994F3A(iVar0);
			if (func_291(iVar2))
			{
				if (func_506(iVar2) == 168)
				{
					iVar1 = func_504(iVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_504(int iParam0)
{
	if (func_505(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_505(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (func_505(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_15426)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_262145.f_15449)
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_262145.f_15468)
			{
				return 1;
			}
			break;
		
		case 3:
			if (Global_262145.f_15455)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Global_262145.f_15474)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Global_262145.f_15425)
			{
				return 1;
			}
			break;
		
		case 6:
			if (Global_262145.f_15427)
			{
				return 1;
			}
			break;
		
		case 7:
			if (Global_262145.f_15418)
			{
				return 1;
			}
			break;
		
		case 8:
			if (Global_262145.f_15412)
			{
				return 1;
			}
			break;
		
		case 9:
			if (Global_262145.f_15406)
			{
				return 1;
			}
			break;
		
		case 10:
			if (Global_262145.f_15419)
			{
				return 1;
			}
			break;
		
		case 11:
			if (Global_262145.f_15400)
			{
				return 1;
			}
			break;
		
		case 12:
			if (Global_262145.f_15456)
			{
				return 1;
			}
			break;
		
		case 13:
			if (Global_262145.f_15462)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_508(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_509())
	{
		if (Global_2544210.f_5191.f_346[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_509()
{
	return Global_262145.f_15804;
}

int func_510()
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 8);
	switch (iVar0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 9;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		default:
	}
	return 0;
}

void func_511()
{
	if (Local_154.f_594 == -1)
	{
		Local_154.f_594 = Global_1683814;
	}
}

void func_512()
{
	if (Local_154.f_593 == -1)
	{
		Local_154.f_593 = Global_1683816;
	}
}

void func_513(int iParam0)
{
	Local_154 = iParam0;
}

int func_514()
{
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

void func_515()
{
	func_2202();
	func_2196();
	func_2191();
	func_2189();
	func_2188();
	func_2187();
	switch (func_372())
	{
		case 0:
			break;
		
		case 1:
			if (!func_2186(2))
			{
				func_2164(168, 1, Local_154.f_7, 0);
				func_2162();
				func_2161(1);
				if (func_337())
				{
					func_2160();
				}
				if (unk_0xCC09B877A009E41F(210.93f, -2022.58f, 17.65f, 6f, joaat("prop_fnclink_03gate1"), 0))
				{
					unk_0x863490667AD88563(joaat("prop_fnclink_03gate1"), 210.93f, -2022.58f, 17.65f, 1, 1f, 0);
				}
				func_2159(2);
			}
			else if (!func_2186(3))
			{
				if (func_187(&(Local_154.f_3), 10000, 0))
				{
					func_2158();
					func_2159(3);
				}
			}
			if (func_2157(unk_0x1146A9AE09CE2B14()) && !func_2186(15))
			{
				Global_1683970.f_3262 = 1;
				func_2159(15);
			}
			else
			{
				if (Global_1683970.f_3262 == 1 || !func_2186(15))
				{
					func_2159(15);
					Global_1683970.f_3262 = 0;
				}
				if (!func_2152() && !func_2151())
				{
					if (func_190() == 0)
					{
						if (func_2128(1, 1, 1, 0) || func_429())
						{
							if (!func_2186(4))
							{
								func_2042(-1, 0, 0, -1, 0, 0);
								func_2159(4);
							}
							func_1941(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
							func_1811();
							if (!Global_1683970.f_502)
							{
								func_1764(0);
								func_1723(0);
								func_1680();
							}
							unk_0xEFD424FDD55A6EC7(7);
							unk_0xEFD424FDD55A6EC7(8);
							unk_0xEFD424FDD55A6EC7(9);
							func_1674();
							func_1671();
							func_1669();
							func_1668();
							func_1659();
							func_1651();
							func_1648();
							if (func_218())
							{
								func_1647();
							}
							else if (((((func_483() || func_273()) || func_457()) || func_12()) || func_454()) || func_455())
							{
								func_1634();
							}
							if (iLocal_144 > -1)
							{
								if (iLocal_144 == unk_0xDD0E57E73E5C4BF6())
								{
								}
							}
						}
					}
				}
				else
				{
					func_1633(24);
					func_1626();
				}
			}
			break;
		
		case 2:
			if (func_274())
			{
				if (!func_5(&(Local_115.f_364)))
				{
					func_4(&(Local_115.f_364), 0, 0);
				}
			}
			if (func_190() != 6)
			{
				if (!unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 4))
				{
					unk_0x191DDA30577F440A(&(Global_1681713.f_3), 4);
				}
			}
			func_1625();
			func_1624();
			func_1622();
			func_1620();
			if (func_851())
			{
				func_831(0);
				func_828();
				func_819();
				func_1764(1);
				func_1723(1);
				func_530();
				func_525(Local_154.f_54);
				func_518();
			}
			func_516();
			break;
		
		case 3:
			break;
	}
}

void func_516()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (unk_0x159BC3DDA80D71AC(Local_154.f_35[iVar0]))
		{
			if (unk_0x419E13582192CFEA(func_42(iVar0)))
			{
				if (unk_0xA6BE8F025C6B653F(func_42(iVar0)))
				{
					if (!unk_0xE50EB54E0F21BED0(func_42(iVar0), 0))
					{
						func_517(func_40(iVar0));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_517(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("ContrabandOwner", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "ContrabandOwner"))
		{
			unk_0xDCD4F88620190EFE(iParam0, "ContrabandOwner");
		}
	}
	if (unk_0x8BA4AD00568AB5FC("ContrabandDeliveryType", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "ContrabandDeliveryType"))
		{
			unk_0xDCD4F88620190EFE(iParam0, "ContrabandDeliveryType");
		}
	}
}

void func_518()
{
	if (!func_524(19))
	{
		if (func_523())
		{
			if (func_524(0))
			{
				if (func_190() == 6)
				{
					func_520(func_522(1));
				}
				else
				{
					func_520(func_522(0));
				}
				unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
				unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
			}
		}
		func_519(19);
	}
}

void func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(uLocal_140[iVar0]), iVar1);
}

void func_520(int iParam0)
{
	if (!func_524(iParam0))
	{
		unk_0xFB8A6909539A30B1(func_521(iParam0));
		func_519(iParam0);
	}
}

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIR_CLEAR_START";
		
		case 2:
			return "EXEC1_AIR_CLEAR_LAND";
		
		case 3:
			return "EXEC1_AIR_CLEAR_SHOOTOUT";
		
		case 36:
			return "EXEC1_AIR_CLEAR_LEFT_AREA";
		
		case 4:
			return "EXEC1_AIR_CLEAR_STOP";
		
		case 5:
			return "EXEC1_AIR_CLEAR_FAIL";
		
		case 6:
			return "EXEC1_SEA_ATTACK_START";
		
		case 25:
			return "EXEC1_SEA_ATTACK_FIGHT";
		
		case 7:
			return "EXEC1_SEA_ATTACK_STOP";
		
		case 8:
			return "EXEC1_SEA_ATTACK_FAIL";
		
		case 9:
			return "EXEC1_SEA_DEFEND_START";
		
		case 10:
			return "EXEC1_SEA_DEFEND_DELIVER";
		
		case 11:
			return "EXEC1_SEA_DEFEND_STOP";
		
		case 12:
			return "EXEC1_SEA_DEFEND_FAIL";
		
		case 13:
			return "EXEC1_DELIVERING_START";
		
		case 14:
			return "EXEC1_STING_WANTED_SMA";
		
		case 15:
			return "EXEC1_DELIVERING_SMA";
		
		case 16:
			return "EXEC1_MP_MUSIC_STOP";
		
		case 17:
			return "EXEC1_STING_FAIL";
		
		case 18:
			return "EXEC1_MP_MUSIC_FAIL";
		
		case 20:
			return "EXEC1_AIR_ATTACK_START";
		
		case 21:
			return "EXEC1_AIR_ATTACK_ENEMIES";
		
		case 22:
			return "EXEC1_AIR_ATTACK_DELIVERING";
		
		case 23:
			return "EXEC1_AIR_ATTACK_STOP";
		
		case 24:
			return "EXEC1_AIR_ATTACK_FAIL";
		
		case 26:
			return "EXEC1_LAND_ATTACK_START";
		
		case 27:
			return "EXEC1_LAND_ATTACK_HOSTILE";
		
		case 28:
			return "EXEC1_LAND_ATTACK_LOST";
		
		case 29:
			return "EXEC1_LAND_ATTACK_STOP";
		
		case 30:
			return "EXEC1_LAND_DEFEND_START";
		
		case 31:
			return "EXEC1_LAND_DEFEND_ENEMIES";
		
		case 32:
			return "EXEC1_LAND_DEFEND_STOP";
		
		case 33:
			return "EXEC1_AIR_FLY_LOW_START";
		
		case 34:
			return "EXEC1_AIR_FLY_LOW_WANTED";
		
		case 35:
			return "EXEC1_AIR_FLY_LOW_FLYING";
		
		default:
	}
	return "";
}

int func_522(bool bParam0)
{
	if (bParam0)
	{
		switch (func_10())
		{
			case 9:
				return 4;
			
			case 12:
				return 7;
			
			case 13:
				return 11;
			
			case 2:
				return 16;
			
			case 3:
				return 16;
			
			case 4:
				return 16;
			
			case 0:
				return 16;
			
			case 11:
				return 23;
			
			case 5:
				return 29;
			
			case 6:
				return 32;
			
			case 1:
				return 16;
			
			case 7:
				return 16;
			
			default:
		}
	}
	else
	{
		switch (func_10())
		{
			case 9:
				return 5;
			
			case 12:
				return 8;
			
			case 13:
				return 12;
			
			case 2:
				return 17;
			
			case 3:
				return 18;
			
			case 4:
				return 18;
			
			case 0:
				return 18;
			
			case 11:
				return 24;
			
			case 5:
				return 18;
			
			case 6:
				return 18;
			
			case 1:
				return 18;
			
			case 7:
				return 16;
			}
		
		default:
	}
	return 4;
}

int func_523()
{
	if (func_10() == 8 || func_10() == 10)
	{
		return 0;
	}
	return 1;
}

bool func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(uLocal_140[iVar0], iVar1);
}

void func_525(int iParam0)
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		if (!func_2186(7))
		{
			if (func_190() == 6)
			{
				if (func_2287())
				{
					if (func_529(iParam0))
					{
						iVar0 = func_528(iParam0);
						Global_2544210.f_5191.f_367[iVar0] = unk_0x666C16A4ED8F3098();
						func_526(func_527(iVar0), Global_2544210.f_5191.f_367[iVar0], -1, 1, 0);
						func_2159(7);
					}
				}
			}
		}
	}
}

void func_526(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_309(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3658;
		
		case 1:
			return 3781;
		
		case 2:
			return 3782;
		
		case 3:
			return 3783;
		
		case 4:
			return 3784;
		
		default:
	}
	return 3658;
}

int func_528(int iParam0)
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_529(int iParam0)
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_530()
{
	int iVar0;
	struct<14> Var1;
	
	if (!func_2186(1))
	{
		if (func_2489(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (func_190() != 0)
			{
				iVar0 = unk_0x1146A9AE09CE2B14();
				if (func_190() == 6)
				{
					bLocal_160 = true;
					if (func_2287())
					{
						Local_117.f_7 = func_2251();
						if (Global_2595537[func_32()] == 0)
						{
							func_818(42);
						}
						if (func_474())
						{
							Local_117 = Local_154.f_555;
							Local_117.f_6 = 1;
						}
					}
				}
				Local_117.f_5 = func_2252();
				Local_117.f_9 = Local_154.f_593;
				func_635(168, bLocal_160, &Local_117, 0);
				if (bLocal_160)
				{
					func_633(1, iVar0);
					Var1.f_2 = -1872791489;
					Var1.f_10 = iVar0;
					if (func_2287())
					{
						func_377(Var1, func_29(0, 1));
					}
				}
				else
				{
					func_632();
					func_633(1, func_33());
				}
				func_2359(bLocal_160, 0);
				func_2159(1);
			}
		}
	}
	else
	{
		if (!func_2253(0))
		{
			if (func_2287())
			{
				if (!func_38(unk_0x63700C801F742019(), 13))
				{
					if (bLocal_160)
					{
						func_2212(2);
					}
					else if (func_190() == 4)
					{
						func_2212(1);
					}
					else
					{
						Global_2544210.f_5191.f_384 = 0;
						func_631(13);
					}
					if (iLocal_150 == 2)
					{
						Global_2544210.f_5191.f_384 = 0;
						func_631(13);
					}
					if (iLocal_150 == 3)
					{
						Global_2544210.f_5191.f_384 = 0;
						func_631(13);
					}
					if (func_2253(2))
					{
						Global_2544210.f_5191.f_384 = 0;
						func_631(13);
					}
				}
			}
			else if (func_247() == func_33())
			{
				if (unk_0x443E2CA72E118E64())
				{
					func_24(0);
				}
			}
		}
		if (func_2128(1, 1, 1, 0))
		{
			if ((!func_2152() && !func_2151()) && !func_630(168))
			{
				if (!func_2186(26))
				{
					if (func_628())
					{
						switch (func_190())
						{
							case 2:
								unk_0x66AE54CE92457FEE(1);
								break;
							
							case 3:
								unk_0x66AE54CE92457FEE(1);
								func_570(2, func_190());
								break;
							
							case 1:
								unk_0x66AE54CE92457FEE(1);
								func_570(2, func_190());
								break;
							
							case 4:
							case 5:
								unk_0x66AE54CE92457FEE(1);
								func_570(2, func_190());
								break;
							
							case 6:
								unk_0x66AE54CE92457FEE(1);
								func_570(1, 0);
								break;
						}
						func_2159(26);
					}
				}
			}
		}
	}
	if (func_531(&uLocal_131, 1, 0) && func_2253(0))
	{
		func_631(0);
	}
}

int func_531(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_569(29);
	if ((*uParam0 > 0 && !func_568()) && func_559(unk_0x1146A9AE09CE2B14()) != 0)
	{
		if (!func_557())
		{
			func_556();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_187(&(uParam0->f_3), 1000, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 2);
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_555(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_187(&(uParam0->f_5), 3000, 0))
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
				func_544(iParam2);
				func_555(uParam0, 2);
			}
			break;
		
		case 2:
			func_544(0);
			if (func_187(&(uParam0->f_1), 15000, 0))
			{
				if (func_532(func_533(0)))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_555(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_187(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
				func_555(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
			unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_532(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

char* func_533(int iParam0)
{
	if (((func_542(unk_0x1146A9AE09CE2B14()) || func_541(unk_0x1146A9AE09CE2B14())) || func_537()) || iParam0)
	{
		if (func_541(unk_0x1146A9AE09CE2B14()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_534(func_536()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_534(int iParam0)
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
	return func_535(iParam0, 0);
	return 0;
}

int func_535(int iParam0, int iParam1)
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

int func_536()
{
	return Global_1658176;
}

bool func_537()
{
	return (func_540() && func_538(func_28()));
}

bool func_538(int iParam0)
{
	return func_539(iParam0, 1);
}

int func_539(int iParam0, int iParam1)
{
	if (iParam0 != func_33())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_33())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_540()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

bool func_541(int iParam0)
{
	return func_535(func_506(iParam0), 0);
}

bool func_542(int iParam0)
{
	return func_543(func_506(iParam0));
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148 && func_539(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35, 1))
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

void func_544(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0))
	{
		if (((((((((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_2489(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0x8B6A925F148E0E94()) && !func_554(unk_0x1146A9AE09CE2B14(), 22)) && func_559(unk_0x1146A9AE09CE2B14()) != 0) && !func_552(func_553())) && !func_542(unk_0x1146A9AE09CE2B14())) && !func_551(func_506(unk_0x1146A9AE09CE2B14()))) && !func_550(func_506(unk_0x1146A9AE09CE2B14())))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 1);
			func_549(func_533(iParam0), -1);
			func_545(1);
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_545(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_546(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_568())
	{
		unk_0x9B0169E27978C1A2(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_546(bool bParam0)
{
	return func_547(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_547(int iParam0, bool bParam1)
{
	return func_548(iParam0, bParam1, 1);
}

int func_548(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_33())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_539(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_33() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_549(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_550(int iParam0)
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

int func_551(int iParam0)
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

int func_552(int iParam0)
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

int func_553()
{
	var uVar0;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_554(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_555(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_556()
{
	Global_2465049 = 1;
}

int func_557()
{
	if (((((((func_506(unk_0x1146A9AE09CE2B14()) == 170 || func_506(unk_0x1146A9AE09CE2B14()) == 219) || func_506(unk_0x1146A9AE09CE2B14()) == 221) || func_506(unk_0x1146A9AE09CE2B14()) == 220) || func_506(unk_0x1146A9AE09CE2B14()) == 216) || func_506(unk_0x1146A9AE09CE2B14()) == 215) || func_506(unk_0x1146A9AE09CE2B14()) == 214) || func_506(unk_0x1146A9AE09CE2B14()) == 218)
	{
		return 1;
	}
	if (func_558(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	if (iParam0 != func_33())
	{
		if (func_2489(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_141(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_559(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_567(iParam0) && !func_566(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_565(iParam0);
	uVar3 = func_564();
	bVar4 = func_2152();
	if ((bVar1 && (func_563(iParam0) || func_562(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_561(iParam0)) && !func_560(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_560(int iParam0)
{
	return func_554(iParam0, 19);
}

int func_561(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_554(iParam0, 9);
	}
	return 0;
}

int func_562(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_563(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

bool func_564()
{
	return Global_1312436;
}

bool func_565(int iParam0)
{
	return func_554(iParam0, 20);
}

bool func_566(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_567(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

bool func_568()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

void func_569(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

void func_570(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (func_628() || iParam0 == 2)
	{
		if (!func_627(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "GB_SELL_BM_01";
					if (func_337())
					{
						if (func_385())
						{
							sVar1 = "GB_SELL_BM_06b";
						}
						else
						{
							sVar1 = "GB_SELL_BM_06";
						}
					}
					else if (func_274())
					{
						sVar1 = "GB_SELL_BM_07";
					}
					else if (func_385())
					{
						sVar1 = "GB_SELL_BM_02b";
					}
					else
					{
						sVar1 = "GB_SELL_BM_02";
					}
					iVar2 = 86;
					func_626(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_625(iParam0);
					break;
				
				case 1:
					sVar0 = "EXEC_SOLD";
					sVar1 = "GB_SELL_BM_03";
					iVar2 = 87;
					func_626(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_625(iParam0);
					break;
				
				case 2:
					sVar0 = "BIGM_CLOST";
					iVar2 = 89;
					if (func_2287())
					{
						if (func_2252())
						{
							if (iLocal_152 > 1)
							{
								sVar1 = "GB_SELL_BM_10p";
							}
							else
							{
								sVar1 = "GB_SELL_BM_10";
							}
							if (iLocal_153 > 0)
							{
								func_624("GB_SELL_TICK_1", iLocal_153, func_2251());
							}
							else
							{
								func_619("GB_SELL_TICK_3", 0);
							}
						}
						else
						{
							if (iParam1 == 4)
							{
								if (iLocal_152 > 1)
								{
									sVar1 = "GB_SELL_BM_08p";
								}
								else
								{
									sVar1 = "GB_SELL_BM_08";
								}
							}
							else if (iParam1 == 1 || iParam1 == 5)
							{
								if (iLocal_152 > 1)
								{
									sVar1 = "GB_SELL_BM_09p";
								}
								else
								{
									sVar1 = "GB_SELL_BM_09";
								}
							}
							else
							{
								sVar1 = "GB_SELL_BM_04";
							}
							if (iLocal_153 > 0)
							{
								func_624("GB_SELL_TICK_1", iLocal_153, func_2251());
							}
							else
							{
								func_619("GB_SELL_TICK_2", 0);
							}
						}
						if (iLocal_152 > -1)
						{
							func_571(iVar2, iLocal_152, sVar1, sVar0, 1, -1, -1082130432, 2);
						}
					}
					else
					{
						sVar1 = "GB_SELL_BM_04";
						func_626(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					}
					func_625(iParam0);
					break;
				}
			}
	}
}

int func_571(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_618(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_572(&Var0);
}

int func_572(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_588(uParam0, uParam0->f_17);
	func_585(uParam0);
	if (func_132())
	{
		func_585(uParam0);
	}
	if (func_584(uParam0->f_1))
	{
		func_577();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_576(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_577();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_574(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_576(uParam0->f_69, 128))
			{
				if (func_573(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_574(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
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

void func_574(var uParam0, int iParam1)
{
	func_575(uParam0, iParam1);
}

void func_575(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_576(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_577()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_578();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_578()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_582(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_579(&(Global_2441237.f_3165.f_1), 1);
}

void func_579(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_581(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_580(0);
}

void func_580(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_581(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_582(var uParam0)
{
	func_583(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_583(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_584(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_585(var uParam0)
{
	if (func_587(uParam0->f_1))
	{
		uParam0->f_72 = func_586();
	}
}

int func_586()
{
	return 21;
}

int func_587(int iParam0)
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

void func_588(var uParam0, int iParam1)
{
	if (func_587(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_33() || !func_2489(iParam1, 0, 1))
	{
		return;
	}
	if (func_573(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_589(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_589(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_88(iParam0) && !bParam4)
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
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_88(unk_0x1146A9AE09CE2B14()) || (func_617() && func_616())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		uVar1 = func_615();
		if (unk_0x419E13582192CFEA(uVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_2489(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_613(iParam1, iParam0, 0);
							}
							else
							{
								return func_601(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_601(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_613(iParam1, iParam0, 0);
				}
				else
				{
					return func_590(0, -1, 0);
				}
			}
			else
			{
				return func_590(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_613(iParam1, iParam0, 0);
		}
		else
		{
			return func_601(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_601(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_590(bool bParam0, int iParam1, bool bParam2)
{
	return func_591(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_591(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_600() || (func_599() && func_597())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_596(iParam2, iVar0);
		}
		else
		{
			return func_596(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_84(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_595(1);
				}
				else
				{
					return func_595(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_592(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_592(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_595(1);
	}
	return func_595(0);
}

int func_592(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_594(iParam0, iParam1, iParam3);
	if (func_593(Global_4456448.f_85535, 1))
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

int func_593(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
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
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_594(int iParam0, int iParam1, int iParam2)
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
			if (!func_84(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_595(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_596(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_594(iParam1, iParam0, 4);
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

bool func_597()
{
	if (func_598())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_598()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_599()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_600()
{
	if (func_598() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_601(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_607())
			{
				iVar3 = func_606(iParam0);
				if (!iVar3 == -1)
				{
					return func_604(iVar3);
				}
			}
			if ((func_603(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_84(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_595(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_602(1);
			}
			else
			{
				return func_591(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_595(1);
			}
			else
			{
				return func_591(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_606(iParam0);
	if (!iVar4 == -1)
	{
		return func_604(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_602(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_603(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

int func_604(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_605(iParam0);
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

var func_605(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_606(int iParam0)
{
	if (!iParam0 == func_33())
	{
		if (func_290(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_607()
{
	if (((((func_164() || func_612()) || func_132()) || func_611()) || func_610()) || func_608())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_608()
{
	return func_609(Global_4456448.f_85535);
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_610()
{
	return Global_2453009.f_24;
}

var func_611()
{
	return Global_2453009.f_21;
}

var func_612()
{
	return Global_2453009.f_18;
}

int func_613(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_607())
	{
		iVar2 = func_606(iParam1);
		if (!iVar2 == -1)
		{
			return func_604(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_33())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_591(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_614(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_84(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_602(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_614(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
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

var func_615()
{
	return Global_2359302.f_2;
}

bool func_616()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_617()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_618(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_33();
	uParam1->f_18 = func_33();
	uParam1->f_19 = func_33();
	uParam1->f_20 = func_33();
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

int func_619(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xAD97A7EDCF347FBB(sParam0);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	func_620(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_620(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_623() || !unk_0xE45310E861787FC2()) || !func_30(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_621(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_622(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_623()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

int func_624(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x38CD3C04C877C35F(iParam2);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	func_620(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_625(int iParam0)
{
	unk_0x191DDA30577F440A(&(Local_115.f_2), iParam0);
}

int func_626(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_618(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_574(&(Var0.f_69), iParam7);
	}
	return func_572(&Var0);
}

bool func_627(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Local_115.f_2, iParam0);
}

int func_628()
{
	if ((func_2489(unk_0x1146A9AE09CE2B14(), 1, 1) && !unk_0xA300BD5F71A8C704()) && !func_629())
	{
		return 1;
	}
	return 0;
}

bool func_629()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_630(int iParam0)
{
	if (!func_2287() && !func_290(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (!func_561(unk_0x1146A9AE09CE2B14()))
		{
			if (func_2152())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_631(int iParam0)
{
	unk_0x191DDA30577F440A(&(Local_155[unk_0xDD0E57E73E5C4BF6() /*10*/].f_2), iParam0);
}

void func_632()
{
	if (func_5(&(Global_2519724.f_140)))
	{
		func_201(&(Global_2519724.f_140));
	}
	func_4(&(Global_2519724.f_140), 1, 0);
}

void func_633(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_33())
	{
		if (unk_0x8CFC2F41A749E236(iParam1))
		{
			if (iParam1 == unk_0x1146A9AE09CE2B14())
			{
				iVar0 = 1;
			}
			else if (func_634(iParam1, unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_2489(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			Global_2544210.f_5191.f_386 = unk_0x666C16A4ED8F3098();
		}
	}
}

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_33() && iParam1 != func_33())
	{
		iVar0 = func_61(iParam0);
		if (iVar0 != func_33())
		{
			return iVar0 == func_61(iParam1);
		}
	}
	return 0;
}

void func_635(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_816(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_815(iParam0, uParam2->f_13, bParam3));
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
		iVar0 = (iVar0 + func_814(iParam0, bParam3));
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
	if (func_811(iParam0))
	{
		if (bParam1)
		{
			if (func_810(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_809();
			}
			else
			{
				func_808();
			}
		}
		else
		{
			func_807();
		}
	}
	func_794(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_792(iParam0, uParam2, &iVar0, &iVar5);
	func_766(iParam0, uParam2, &iVar0, &iVar5);
	func_763(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_746(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = uVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_28();
	if (iVar8 != func_33() && iParam0 != 148)
	{
		if (func_290(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (!func_744(unk_0x1146A9AE09CE2B14(), iVar8, 1))
			{
				func_735(&iVar0, 1);
			}
		}
	}
	func_730(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_729();
		func_685(0, unk_0x7D2B9E6A64637269(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_661(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_660(iParam0, iVar0);
		if (func_659(iParam0))
		{
			if (func_658(iParam0) > -1)
			{
				func_657(func_658(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_656(&Global_2463963, 0, 0);
	}
	if (func_561(unk_0x1146A9AE09CE2B14()) || func_565(unk_0x1146A9AE09CE2B14()))
	{
		func_647(iParam0);
	}
	if (func_543(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_551(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_646(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_645(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_644(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_550(iParam0))
	{
		if (func_643(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_640(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_639(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_638(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_637(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_636(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_640(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_641(func_642(unk_0x1146A9AE09CE2B14()))))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0)
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

int func_642(int iParam0)
{
	if (func_506(iParam0) == 237 || func_506(iParam0) == 250)
	{
		return func_504(iParam0);
	}
	return -1;
}

int func_643(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_645(int iParam0)
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

int func_646(int iParam0)
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

void func_647(int iParam0)
{
	if (func_655(unk_0x1146A9AE09CE2B14()) && func_654())
	{
		if (func_653(iParam0))
		{
			func_650(10571, -1);
		}
		else if (func_649(iParam0))
		{
			func_650(10573, -1);
		}
		else if (func_535(iParam0, 1))
		{
			func_650(10574, -1);
		}
		else if (func_648(iParam0))
		{
			func_650(10575, -1);
		}
	}
}

int func_648(int iParam0)
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

int func_649(int iParam0)
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

void func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_308(iParam0, func_309(iParam1), 0);
	iVar0++;
	if (!func_652(iParam0))
	{
		func_526(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_651(iParam0, iVar0, iParam1, 1);
	}
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_309(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_309(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_309(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_309(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_309(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_309(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_309(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_309(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_309(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_309(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_309(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_309(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_309(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_309(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_309(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_309(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_309(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_309(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_309(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_309(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_309(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_309(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_309(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_309(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_309(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_309(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_309(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_309(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_309(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_309(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_309(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_309(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_309(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_309(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_309(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_309(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_309(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_309(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_309(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_309(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_309(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_309(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_309(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_309(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_309(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_309(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_309(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_309(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_309(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_309(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_309(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_309(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_309(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_309(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_652(int iParam0)
{
	if (Global_1390376)
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
			case 10441:
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_653(int iParam0)
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

bool func_654()
{
	return func_538(unk_0x1146A9AE09CE2B14());
}

bool func_655(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

void func_656(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

void func_657(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!unk_0x3640D836D145B814() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_658(int iParam0)
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

int func_659(int iParam0)
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

void func_660(int iParam0, int iParam1)
{
	if (func_655(unk_0x1146A9AE09CE2B14()) && func_654())
	{
		if (func_653(iParam0) && iParam1 > 0)
		{
			func_526(10572, (func_308(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_661(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_247();
	if (iVar5 != func_33())
	{
		func_684(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_683(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_682())
			{
				unk_0x5770EF297A89065D(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_654())
			{
				if (!func_682())
				{
					Var7 = { func_681() };
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_680(Var7)), func_679(Var7), iParam4);
				}
			}
			else if (func_682())
			{
				func_667(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_2287())
			{
				if (!func_682())
				{
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_680(func_666(unk_0x1146A9AE09CE2B14()))), 5, iParam4);
				}
			}
			else if (func_682())
			{
				func_667(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_2287())
			{
				if (!func_682())
				{
					iVar2 = func_662(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xCC29ABFF6ADFDE69(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_682())
			{
				func_667(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x57338FC01D78BA44(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_682())
			{
				func_667(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5EDA486C8AECA356(iParam1);
			}
			break;
		
		case 237:
			if (func_2287())
			{
				if (!func_682())
				{
					unk_0x624394FE858634D7(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_682())
			{
				func_667(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_682())
			{
				func_667(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xF31622289C134E5A(iParam1);
			}
			break;
		
		case 249:
			if (func_682())
			{
				func_667(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3A22644C8900D074(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_682())
			{
				func_667(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB91DFEF32DEB33DB(iParam1);
			}
			break;
		
		case 243:
			if (func_682())
			{
				func_667(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB4F8EBDFC90D5044(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_682())
				{
					func_667(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x6BB4249BA6AD63A1(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_682())
			{
				func_667(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x6BB4249BA6AD63A1(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_682())
			{
				func_667(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x08D3EECA50D3697F(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_662(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_665(iParam0, iParam1);
	fVar1 = (to_float(func_663(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_663(int iParam0, int iParam1)
{
	return (func_664(iParam0) * iParam1);
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22490;
		
		case 0:
			return Global_262145.f_22491;
		
		case 1:
			return Global_262145.f_22492;
		
		case 2:
			return Global_262145.f_22493;
		
		case 3:
			return Global_262145.f_22494;
		
		case 4:
			return Global_262145.f_22495;
		
		case 5:
			return Global_262145.f_22496;
		
		case 6:
			return Global_262145.f_22497;
		
		case 7:
			return Global_262145.f_22498;
		
		default:
	}
	return 0;
}

float func_665(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22500);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_666(int iParam0)
{
	if (iParam0 == func_33())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

void func_667(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_682())
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
		case 1850983186:
		case 763367758:
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
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_668(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_668(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_668(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_668(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_668(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_682())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_32()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_675(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_674(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_669(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_669(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_670(iParam0);
	}
}

void func_670(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_682())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_673(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_671(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_671(var uParam0)
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
	func_672(&(uParam0->f_14));
	func_672(&(uParam0->f_14.f_13));
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

void func_672(var uParam0)
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

int func_673(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_674(int iParam0, int iParam1)
{
	Global_2465846 = iParam1;
	Global_2465845 = iParam0;
}

int func_675(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_682())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_676(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_676(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_678(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_677();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_677()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

var func_678(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_679(int iParam0)
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

char* func_680(int iParam0)
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

struct<2> func_681()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_194;
}

int func_682()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

bool func_683(bool bParam0)
{
	return func_290(unk_0x1146A9AE09CE2B14(), bParam0);
}

void func_684(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_685(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_686(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_686(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_696(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				iVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_692(unk_0x885F3A431ECE75E3(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_687(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_687(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_690(iParam0, 1) };
	if (iParam0 == func_689(unk_0x7D2B9E6A64637269()))
	{
		func_688(1);
	}
	func_692(Var0, iParam1, 0, sParam2, iParam3);
}

void func_688(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_689(int iParam0)
{
	return iParam0;
}

Vector3 func_690(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var1 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_691(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar2 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_691(int iParam0)
{
	return iParam0;
}

void func_692(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_695(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam1;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam2;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_694();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_693();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam4);
		}
	}
}

int func_693()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_694()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_695(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
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

var func_696(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_697(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_697(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_728(unk_0x1146A9AE09CE2B14()) || func_727(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_725() || func_724(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_723(sParam2))
	{
	}
	if (func_722())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_720(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_719(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_717(0, &iVar1);
					break;
				
				case 3:
					func_717(1, &iVar1);
					break;
				
				case 1:
					func_715(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
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
			func_714(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_707((func_713(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_714(1166, iVar1, -1);
				}
				func_702(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_698((func_700(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_698((func_700(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_698(int iParam0)
{
	if (func_722())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_699(joaat("mpply_globalxp"), iParam0);
	}
}

void func_699(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_700(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_2489(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_701(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_701(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_701(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_702(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_62(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_705(func_706(&Var0));
			if (iVar1 == 0)
			{
				func_704(&Global_1390382, iParam0);
				func_703(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_704(&Global_1390383, iParam0);
				func_703(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_704(&Global_1390384, iParam0);
				func_703(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_704(&Global_1390385, iParam0);
				func_703(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_704(&Global_1390386, iParam0);
				func_703(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_703(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_704(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_705(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_706(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	if (func_722())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_309(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_309(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_184(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_711(iParam0, 1);
		}
		func_651(640, iParam0, -1, 1);
		func_526(641, func_711(iParam0, 1), -1, 1, 0);
		Global_1390527[func_309(-1)] = iParam0;
		func_708(-1109644434, 7, 0);
	}
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_710(iParam1, iParam2))
	{
		iVar0 = func_709();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_709()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_710(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_711(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_712(iParam0, 0);
}

int func_712(int iParam0, int iParam1)
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
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
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

int func_713(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_309(-1)];
			}
			else if (func_184(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_309(-1)];
	}
	return 0;
}

void func_714(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_308(iParam0, func_309(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_652(iParam0))
	{
		func_526(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_651(iParam0, iVar0, iParam2, 1);
	}
}

void func_715(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_84(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_63(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = round((func_716(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_716(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_716(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_717(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_2489(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_63(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_2489(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_718(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = round((func_716(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_716(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_718(int iParam0, int iParam1)
{
	return vdist(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_719(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_716(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_720(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_713(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_713(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_721(8000, 0, 0) > 0)
	{
		if (func_721(8000, 0, 0) < (iParam0 + func_713(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_721(8000, 0, 0) - func_713(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_721(int iParam0, bool bParam1, int iParam2)
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
	return Global_293361[iParam0];
}

int func_722()
{
	return 1;
}

int func_723(char* sParam0)
{
	if (unk_0x4030103C8B148AFC(sParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(sParam0, "") || unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0)
{
	return func_644(func_506(iParam0));
}

bool func_725()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_132();
	}
	return func_726(Global_4456448.f_85535);
}

int func_726(int iParam0)
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

bool func_727(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_728(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_729()
{
	Global_2465048 = 1;
}

void func_730(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_734(7))
	{
		return;
	}
	iVar0 = func_733(iParam0);
	iVar1 = func_732(iParam0);
	iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2544210.f_5191.f_268, unk_0x551F46B3C7DFB654()));
	if (func_731(iParam0) != -1)
	{
		if (iVar2 > func_731(iParam0))
		{
			iVar2 = func_731(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12573)
	{
		iVar2 = Global_262145.f_12573;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_731(int iParam0)
{
	if (func_535(iParam0, 0) || func_649(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_653(iParam0))
	{
		return Global_262145.f_18665;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18662;
		
		case 191:
			return Global_262145.f_18664;
		
		case 190:
			return Global_262145.f_18663;
		
		case 227:
			return Global_262145.f_21224;
		
		case 226:
			return Global_262145.f_21212;
		
		case 225:
			return Global_262145.f_21232;
		
		case 230:
			return Global_262145.f_22487;
		
		case 229:
			return Global_262145.f_22391;
		
		case 233:
			return Global_262145.f_22967;
		
		case 237:
			return Global_262145.f_24130;
		
		case 238:
			return Global_262145.f_24241;
		
		case 249:
			return Global_262145.f_24257;
		
		case 243:
			return Global_262145.f_26590;
		
		default:
	}
	return -1;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12664;
		
		case 152:
			return Global_262145.f_12699;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12687;
		
		case 157:
			return Global_262145.f_12654;
		
		case 159:
			return Global_262145.f_12637;
		
		case 164:
			return Global_262145.f_12677;
		
		case 160:
			return Global_262145.f_12727;
		
		case 162:
			return Global_262145.f_12747;
		
		case 163:
			return Global_262145.f_12712;
		
		case 154:
			return Global_262145.f_12782;
		
		case 155:
			return Global_262145.f_12772;
		
		case 153:
			return Global_262145.f_12736;
		
		case 170:
			return Global_262145.f_15174;
		
		case 171:
			return Global_262145.f_15233;
		
		case 172:
			return Global_262145.f_15251;
		
		case 173:
			return Global_262145.f_15192;
		
		case 166:
			return Global_262145.f_15207;
		
		case 167:
			return Global_262145.f_15298;
		
		case 169:
			return Global_262145.f_15270;
		
		case 168:
			return Global_262145.f_15263;
		
		case 179:
			return Global_262145.f_18545;
		
		case 180:
			return Global_262145.f_18323;
		
		case 182:
			return Global_262145.f_18323;
		
		case 183:
			return Global_262145.f_18323;
		
		case 185:
			return Global_262145.f_18323;
		
		case 186:
			return Global_262145.f_18323;
		
		case 189:
			return Global_262145.f_18545;
		
		case 190:
			return Global_262145.f_18199;
		
		case 191:
			return Global_262145.f_18290;
		
		case 192:
			return Global_262145.f_18084;
		
		case 193:
			return Global_262145.f_18545;
		
		case 194:
			return Global_262145.f_18545;
		
		case 195:
			return Global_262145.f_18323;
		
		case 197:
			return Global_262145.f_18323;
		
		case 198:
			return Global_262145.f_18323;
		
		case 199:
			return Global_262145.f_18545;
		
		case 200:
			return Global_262145.f_18545;
		
		case 201:
			return Global_262145.f_18545;
		
		case 205:
			return Global_262145.f_18545;
		
		case 207:
			return Global_262145.f_18323;
		
		case 208:
			return Global_262145.f_18323;
		
		case 209:
			return Global_262145.f_18323;
		
		case 210:
			return Global_262145.f_18545;
		
		case 211:
			return Global_262145.f_18545;
		
		case 214:
			return Global_262145.f_19395;
		
		case 215:
			return Global_262145.f_19397;
		
		case 216:
			return Global_262145.f_19399;
		
		case 217:
			return Global_262145.f_19401;
		
		case 218:
			return Global_262145.f_19403;
		
		case 219:
			return Global_262145.f_19405;
		
		case 220:
			return Global_262145.f_19407;
		
		case 221:
			return Global_262145.f_19409;
		
		case 225:
			if (!func_2287())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_2287())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_2287())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_2287())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_2287())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_2287())
			{
				return Global_262145.f_22966;
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
			if (!func_2287())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_2287())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_2287())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_2287())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_2287())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12663;
		
		case 152:
			return Global_262145.f_12698;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12686;
		
		case 157:
			return Global_262145.f_12653;
		
		case 159:
			return Global_262145.f_12636;
		
		case 164:
			return Global_262145.f_12676;
		
		case 160:
			return Global_262145.f_12726;
		
		case 162:
			return Global_262145.f_12746;
		
		case 163:
			return Global_262145.f_12711;
		
		case 154:
			return Global_262145.f_12781;
		
		case 155:
			return Global_262145.f_12771;
		
		case 153:
			return Global_262145.f_12735;
		
		case 170:
			return Global_262145.f_15173;
		
		case 171:
			return Global_262145.f_15232;
		
		case 172:
			return Global_262145.f_15250;
		
		case 173:
			return Global_262145.f_15191;
		
		case 166:
			return Global_262145.f_15206;
		
		case 179:
			return Global_262145.f_18544;
		
		case 180:
			return Global_262145.f_18322;
		
		case 182:
			return Global_262145.f_18322;
		
		case 183:
			return Global_262145.f_18322;
		
		case 185:
			return Global_262145.f_18322;
		
		case 186:
			return Global_262145.f_18322;
		
		case 189:
			return Global_262145.f_18544;
		
		case 193:
			return Global_262145.f_18544;
		
		case 194:
			return Global_262145.f_18544;
		
		case 195:
			return Global_262145.f_18322;
		
		case 197:
			return Global_262145.f_18322;
		
		case 198:
			return Global_262145.f_18322;
		
		case 199:
			return Global_262145.f_18544;
		
		case 200:
			return Global_262145.f_18544;
		
		case 201:
			return Global_262145.f_18544;
		
		case 205:
			return Global_262145.f_18544;
		
		case 207:
			return Global_262145.f_18322;
		
		case 208:
			return Global_262145.f_18322;
		
		case 209:
			return Global_262145.f_18322;
		
		case 210:
			return Global_262145.f_18544;
		
		case 211:
			return Global_262145.f_18544;
		
		case 190:
			if (func_546(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_546(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_546(0))
			{
				return Global_262145.f_18083;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19394;
		
		case 215:
			return Global_262145.f_19396;
		
		case 216:
			return Global_262145.f_19398;
		
		case 217:
			return Global_262145.f_19400;
		
		case 218:
			return Global_262145.f_19402;
		
		case 219:
			return Global_262145.f_19404;
		
		case 220:
			return Global_262145.f_19406;
		
		case 221:
			return Global_262145.f_19408;
		
		case 225:
			if (func_546(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_546(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_546(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_546(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_546(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_546(0))
			{
				return Global_262145.f_22968;
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
			if (func_546(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_546(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_546(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_546(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_734(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

void func_735(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_2287())
		{
			if (func_683(0))
			{
				if (!func_546(0))
				{
					if (unk_0x8CFC2F41A749E236(func_247()))
					{
						if (func_743() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_743());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_741(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_738("GB_BCUT_TICK1", func_247(), iVar0, 0, 0, 1);
						}
						func_818(20);
						func_736(func_247(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_736(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_2489(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_737(iParam0);
		func_27(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_678(iParam0));
	}
}

var func_737(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

int func_738(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var1))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		unk_0xB2A9BDF905DC5A51(func_589(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_739(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_620(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_739(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_740(&cVar0);
}

var func_740(char[4] cParam0)
{
	return cParam0;
}

void func_741(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_742(1);
	}
	else
	{
		iVar1 = func_742(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_742(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_743()
{
	return Global_262145.f_12567;
}

int func_744(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_33())
	{
		if (!bParam2)
		{
			if (func_745(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_33())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_745(int iParam0, int iParam1)
{
	if (iParam1 != func_33())
	{
		if (iParam0 != func_33())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_33())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_746(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_546(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_2287())
		{
			iVar17 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar17 = func_247();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590908[iVar11 /*874*/].f_851.f_1;
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
				iVar2 = Global_1590908[iVar11 /*874*/].f_851.f_2;
			}
			else
			{
				iVar2 = func_762(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
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
			iVar10 = func_761(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x1146A9AE09CE2B14())
				{
					func_760("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == unk_0x1146A9AE09CE2B14())
			{
				if (iVar2 > 0)
				{
					func_759(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_757(*uParam3);
				}
				iVar6 = func_756(&uVar5);
				iVar7 = Global_262145.f_24161;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_24160));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_818(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x5E72DF7B8C03AA05())
						{
							iVar22 = iVar21;
							if (unk_0xF46EDF82CA845956(iVar22))
							{
								iVar23 = unk_0x539ED6DF32477DE0(iVar22);
								if (func_755(iVar23))
								{
									func_747(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24133;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24134;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_818(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_747(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_749(iParam0);
	func_748(iParam0, uVar0, iParam1, iParam2);
}

void func_748(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_737(iParam0);
	func_27(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_33())
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_678(iParam0));
		}
	}
}

int func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_754();
	iVar0 = func_752(iParam0, iVar0);
	iVar1 = Global_1630816[func_247() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_751())
	{
		iVar0 = func_751();
	}
	if (iVar0 > func_750())
	{
		iVar0 = func_750();
	}
	return iVar0;
}

int func_750()
{
	return Global_262145.f_15135;
}

int func_751()
{
	return Global_262145.f_16310;
}

int func_752(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_810(iParam0) * func_753());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_753()
{
	return Global_262145.f_16309;
}

var func_754()
{
	return Global_262145.f_12559;
}

int func_755(int iParam0)
{
	if (unk_0x8CFC2F41A749E236(iParam0))
	{
		if (iParam0 != unk_0x1146A9AE09CE2B14())
		{
			if (func_744(iParam0, unk_0x1146A9AE09CE2B14(), 0))
			{
				if (!func_554(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_756(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(iVar0)))
		{
			iVar2 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_30(iVar2, 0) && !func_744(iVar2, unk_0x1146A9AE09CE2B14(), 1))
			{
				iVar1++;
			}
			else if (func_30(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_757(int iParam0)
{
	func_758(iParam0, 7238);
}

void func_758(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_308(iParam1, -1, 0);
	func_526(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_759(int iParam0)
{
	func_758(iParam0, 7233);
}

int func_760(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	if (bParam2)
	{
		func_620(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_620(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_761(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24162);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_762(struct<5> Param0, int iParam1)
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

void func_763(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_546(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_2287())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_247();
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
			iVar2 = func_663(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_662(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_765(*iParam2) > 0)
			{
				if (iVar15 == unk_0x1146A9AE09CE2B14())
				{
					func_760("SMTICK_RONCUT", func_765(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_765(*iParam2));
			}
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_764(iVar2, iVar9);
				iVar6 = func_756(&uVar5);
				iVar7 = Global_262145.f_22506;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22505));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_818(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_755(iVar20))
								{
									func_747(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22439;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22440;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_818(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_764(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_758(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_758(iParam1, 6119);
	}
}

int func_765(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22473);
	if (fVar1 > to_float(Global_262145.f_22474))
	{
		fVar1 = to_float(Global_262145.f_22474);
	}
	return round(fVar1);
}

void func_766(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_546(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_2287())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_247();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_666(iVar15);
			iVar0 = (func_791(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_787(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21216));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21215));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_781(iVar16, iVar2);
				if (func_777(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_767(5);
				}
				iVar6 = func_756(&uVar5);
				iVar7 = round(Global_262145.f_21218);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21217));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_818(108);
					}
					else
					{
						func_818(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_755(iVar20))
								{
									func_747(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21219;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21220;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_818(112);
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

void func_767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_769(Global_262145.f_20751))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_769(Global_262145.f_20753))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_769(Global_262145.f_20755))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_769(Global_262145.f_20757))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_769(Global_262145.f_20759))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_769(Global_262145.f_20761))
				{
					func_760("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_769(Global_262145.f_20764))
				{
					func_760("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_769(Global_262145.f_20767))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_769(Global_262145.f_20769))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_769(Global_262145.f_20771))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_769(Global_262145.f_20773))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_769(Global_262145.f_20775))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_769(Global_262145.f_20777))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_769(Global_262145.f_20779))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_769(Global_262145.f_20781))
				{
					func_768("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_768(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam3);
	}
	unk_0x1896EC0B030A48A2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
	}
	else
	{
		Global_2518253 = { func_62(unk_0x1146A9AE09CE2B14()) };
		if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
		{
			iVar1 = 0;
			if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2518183.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x05F3E4A6F62A5ACD(iVar2, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar1, 0, Global_2518183, unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
	}
	func_620(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_774(15417, -1, -1))
			{
				func_773(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_774(15418, -1, -1))
			{
				func_773(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_774(15425, -1, -1))
			{
				func_773(15425, 1, -1, 1);
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
			if (!func_774(15405, -1, -1))
			{
				func_773(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_774(15393, -1, -1))
			{
				func_773(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_774(15409, -1, -1))
			{
				func_773(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_774(15396, -1, -1))
			{
				func_773(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_774(15412, -1, -1))
			{
				func_773(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_774(15403, -1, -1))
			{
				func_773(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_774(15389, -1, -1))
			{
				func_773(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_774(15398, -1, -1))
			{
				func_773(15398, 1, -1, 1);
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
			if (!func_774(15400, -1, -1))
			{
				func_773(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_774(15408, -1, -1))
			{
				func_773(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_774(15411, -1, -1))
			{
				func_773(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_774(15397, -1, -1))
			{
				func_773(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_774(15413, -1, -1))
			{
				func_773(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_774(15391, -1, -1))
			{
				func_773(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_774(15388, -1, -1))
			{
				func_773(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_774(15401, -1, -1))
			{
				func_773(15401, 1, -1, 1);
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
			if (!func_774(15394, -1, -1))
			{
				func_773(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_774(15406, -1, -1))
			{
				func_773(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_774(15395, -1, -1))
			{
				func_773(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_774(15410, -1, -1))
			{
				func_773(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_774(15407, -1, -1))
			{
				func_773(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_774(15414, -1, -1))
			{
				func_773(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_774(15415, -1, -1))
			{
				func_773(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_774(15399, -1, -1))
			{
				func_773(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_774(15404, -1, -1))
			{
				func_773(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_774(15392, -1, -1))
			{
				func_773(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_774(15390, -1, -1))
			{
				func_773(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_774(15402, -1, -1))
			{
				func_773(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_774(15416, -1, -1))
			{
				func_773(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_772(209, -1))
			{
				func_770(209, 1, -1, 1);
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
			if (!func_774(15426, -1, -1))
			{
				func_773(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_774(15422, -1, -1))
			{
				func_773(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_774(15423, -1, -1))
			{
				func_773(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_774(15421, -1, -1))
			{
				func_773(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_774(15427, -1, -1))
			{
				func_773(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_774(15419, -1, -1))
			{
				func_773(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_774(15420, -1, -1))
			{
				func_773(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_770(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_771())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_309(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_771()
{
	return 1;
	return 0;
}

int func_772(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_773(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_774(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar1 = func_776(iParam0, iParam1);
	uVar2 = func_775(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_775(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_776(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_777(int iParam0)
{
	int iVar0;
	
	iVar0 = func_779(iParam0);
	return func_308(func_778(iVar0), -1, 0);
}

int func_778(int iParam0)
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

int func_779(int iParam0)
{
	int iVar0;
	
	if (func_780(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_780(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_781(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_779(iParam0);
	iVar1 = func_778(iVar0);
	iVar2 = (func_308(iVar1, -1, 0) + iParam1);
	func_526(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_784(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_778(iVar0);
				iVar3 = (iVar3 + func_308(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_783(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_782(9357, iVar5, -1, 1);
	}
}

var func_782(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_783(int iParam0)
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

int func_784(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	iVar1 = func_786(iParam0, iParam1);
	iVar2 = func_785(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_785(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_786(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_787(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_679(iParam1);
	if (func_780(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_788(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_788(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_788(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_790(iParam0, iParam1))
	{
		iVar0 = func_789(iParam0, iParam1);
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_789(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_780(iParam1) && iParam0 != func_33())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_790(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_780(iParam1) && iParam0 != func_33())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_791(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_33())
	{
		return 0;
	}
	if (func_780(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_792(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_654())
			{
				Var0 = { func_681() };
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
				iVar6 = func_787(unk_0x1146A9AE09CE2B14(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18774);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18773);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_756(&uVar9);
				iVar11 = round(Global_262145.f_18764);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18763));
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
					func_818(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_546(0))
			{
				Var14 = { func_793(func_247()) };
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
				iVar20 = func_787(func_247(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18774));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18773));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18813;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18814;
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

struct<2> func_793(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_794(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_291(unk_0x1146A9AE09CE2B14()))
		{
			if (bParam1)
			{
				func_806();
			}
			func_805();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_291(unk_0x1146A9AE09CE2B14()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_800(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_799(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_756(&uVar2);
					iVar4 = Global_262145.f_16320;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15529));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_818(44);
					}
				}
				func_797(*iParam3);
				func_796();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x5E72DF7B8C03AA05())
				{
					iVar8 = iVar7;
					if (unk_0xF46EDF82CA845956(iVar8))
					{
						iVar9 = unk_0x539ED6DF32477DE0(iVar8);
						if (func_755(iVar9))
						{
							func_747(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_291(unk_0x1146A9AE09CE2B14()))
		{
			func_795();
		}
	}
}

void func_795()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_32()];
	iVar0++;
	func_651(3669, iVar0, -1, 1);
}

void func_796()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_32()];
	iVar0++;
	func_651(3668, iVar0, -1, 1);
}

void func_797(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_32()];
	iVar0 = (iVar0 + iParam0);
	func_651(3670, iVar0, -1, 1);
	if (func_784(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_798(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_782(7666, iVar2, -1, 1);
	}
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16453;
			break;
		
		case 2:
			return Global_262145.f_16454;
			break;
		
		case 3:
			return Global_262145.f_16455;
			break;
		
		case 4:
			return Global_262145.f_16456;
			break;
		
		case 5:
			return Global_262145.f_16457;
			break;
		
		case 6:
			return Global_262145.f_16458;
			break;
		
		case 7:
			return Global_262145.f_16459;
			break;
		
		case 8:
			return Global_262145.f_16460;
			break;
		
		case 9:
			return Global_262145.f_16461;
			break;
		
		case 10:
			return Global_262145.f_16462;
			break;
		
		case 11:
			return Global_262145.f_16463;
			break;
		
		case 12:
			return Global_262145.f_16464;
			break;
		
		case 13:
			return Global_262145.f_16465;
			break;
		
		case 14:
			return Global_262145.f_16466;
			break;
		
		case 15:
			return Global_262145.f_16467;
			break;
		
		case 16:
			return Global_262145.f_16468;
			break;
		
		case 17:
			return Global_262145.f_16469;
			break;
		
		case 18:
			return Global_262145.f_16470;
			break;
		
		case 19:
			return Global_262145.f_16471;
			break;
		
		case 20:
			return Global_262145.f_16472;
			break;
		
		case 21:
			return Global_262145.f_16473;
			break;
		
		case 22:
			return Global_262145.f_16474;
			break;
		
		case 23:
			return Global_262145.f_16475;
			break;
		
		case 24:
			return Global_262145.f_16476;
			break;
	}
	return 0;
}

var func_799(int iParam0)
{
	if (iParam0 >= Global_262145.f_15507)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 >= Global_262145.f_15506)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 >= Global_262145.f_15505)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 >= Global_262145.f_15504)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 >= Global_262145.f_15503)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 >= Global_262145.f_15502)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 >= Global_262145.f_15501)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 >= Global_262145.f_15500)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 >= Global_262145.f_15499)
	{
		return Global_262145.f_15520;
	}
	else if (iParam0 >= Global_262145.f_15498)
	{
		return Global_262145.f_15519;
	}
	else if (iParam0 >= Global_262145.f_15497)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 >= Global_262145.f_15496)
	{
		return Global_262145.f_15517;
	}
	else if (iParam0 >= Global_262145.f_15495)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 >= Global_262145.f_15494)
	{
		return Global_262145.f_15515;
	}
	else if (iParam0 >= Global_262145.f_15493)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 >= Global_262145.f_15492)
	{
		return Global_262145.f_15513;
	}
	else if (iParam0 >= Global_262145.f_15491)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 >= Global_262145.f_15490)
	{
		return Global_262145.f_15511;
	}
	else if (iParam0 >= Global_262145.f_15489)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 >= Global_262145.f_15488)
	{
		return Global_262145.f_15509;
	}
	return Global_262145.f_15508;
}

int func_800(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_529(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_804(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_803(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_801(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_801(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_803(unk_0xB36B8558948EA7A8(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_801(int iParam0)
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = func_802(func_528(iParam0));
		return func_308(iVar0, -1, 0);
	}
	return 0;
}

int func_802(int iParam0)
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

int func_803(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15707;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15705;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15709;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15703;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15701;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15711;
	}
	return 0;
}

int func_804(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1683674[iVar0] == iParam1 && Global_1683681[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_805()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_32()];
	iVar0++;
	Global_2595528[func_32()] = iVar0;
	func_651(3667, iVar0, -1, 1);
}

void func_806()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_32()];
	iVar1 = Global_2595534[func_32()];
	iVar0++;
	iVar1++;
	Global_2595525[func_32()] = iVar0;
	Global_2595534[func_32()] = iVar1;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_130 = iVar1;
	func_651(3665, iVar0, -1, 1);
	func_651(3666, iVar1, -1, 1);
}

void func_807()
{
	if (func_2287())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_808()
{
	if (func_2287())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_809()
{
	if (func_2287())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_810(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_811(int iParam0)
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
			if (func_683(1) && !func_546(1))
			{
				if (func_813(func_247()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_812(iParam0) == 0)
	{
		if (func_683(1) && !func_546(1))
		{
			if (func_813(func_247()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_812(int iParam0)
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

bool func_813(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

int func_814(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18460;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12689));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12634) * Global_262145.f_12639));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12661) * Global_262145.f_12665));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12674) * Global_262145.f_12678));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12696) * Global_262145.f_12701));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12858) * Global_262145.f_12859));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12864) * Global_262145.f_12865));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12862) * Global_262145.f_12863));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12856) * Global_262145.f_12857));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12860) * Global_262145.f_12861));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12854) * Global_262145.f_12855));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15230;
		
		case 172:
			return Global_262145.f_15246;
		
		case 173:
			return Global_262145.f_15189;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18468;
		
		case 180:
			return Global_262145.f_18343;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18351;
		
		case 185:
			return Global_262145.f_18360;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18556;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18573;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18420;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18604;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18482;
		
		case 205:
			return Global_262145.f_18591;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18449;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18586;
		
		case 211:
			return Global_262145.f_18550;
		
		case 214:
			return Global_262145.f_19144;
		
		case 215:
			return Global_262145.f_19154;
		
		case 216:
			return Global_262145.f_19164;
		
		case 217:
			return Global_262145.f_19173;
		
		case 218:
			return Global_262145.f_19182;
		
		case 219:
			return Global_262145.f_19198;
		
		case 241:
			return Global_262145.f_24278;
		
		case 242:
			return Global_262145.f_24274;
		
		case 248:
			return Global_262145.f_24277;
		
		case 244:
			return Global_262145.f_24275;
		
		case 239:
			return Global_262145.f_24279;
		
		case 240:
			return Global_262145.f_24280;
		
		case 243:
			return Global_262145.f_26588;
		
		default:
	}
	return 0;
}

int func_815(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18461;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12685) * Global_262145.f_12690));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12635) * Global_262145.f_12640));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12662) * Global_262145.f_12666));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12675) * Global_262145.f_12679));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12697) * Global_262145.f_12702));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12734) * Global_262145.f_12737));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12780) * Global_262145.f_12783));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12770) * Global_262145.f_12773));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12725) * Global_262145.f_12728));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12745) * Global_262145.f_12750));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12710) * Global_262145.f_12713));
		
		case 170:
			return Global_262145.f_15172;
		
		case 171:
			return Global_262145.f_15231;
		
		case 172:
			return Global_262145.f_15247;
		
		case 173:
			return Global_262145.f_15190;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17269;
		
		case 168:
			return Global_262145.f_17268;
		
		case 179:
			return Global_262145.f_18469;
		
		case 180:
			return Global_262145.f_18344;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18352;
		
		case 185:
			return Global_262145.f_18361;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18557;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18574;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18421;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18605;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18483;
		
		case 205:
			return Global_262145.f_18592;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18450;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18587;
		
		case 211:
			return Global_262145.f_18551;
		
		case 214:
			return Global_262145.f_19145;
		
		case 215:
			return Global_262145.f_19155;
		
		case 216:
			return Global_262145.f_19165;
		
		case 217:
			return Global_262145.f_19174;
		
		case 218:
			return Global_262145.f_19183;
		
		case 219:
			return Global_262145.f_19199;
		
		case 178:
			if (func_2287())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_2287())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_22963;
			}
			break;
		
		case 241:
			return Global_262145.f_24285;
		
		case 242:
			return Global_262145.f_24281;
		
		case 244:
			return Global_262145.f_24282;
		
		case 248:
			return Global_262145.f_24284;
		
		case 239:
			return Global_262145.f_24286;
		
		case 240:
			return Global_262145.f_24287;
		
		case 237:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_654())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_2287() && !func_654())
			{
				if (func_813(unk_0x1146A9AE09CE2B14()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_654())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_816(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_817(iParam0))
	{
		if (!func_2287())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12578;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_290(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (func_543(iParam0))
		{
			*uParam1 = (Global_262145.f_18320 / 100f);
			*uParam2 = (Global_262145.f_18320 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24288;
			*uParam2 = Global_262145.f_24288;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24289;
			*uParam2 = Global_262145.f_24289;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24291;
			*uParam2 = Global_262145.f_24291;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24292;
			*uParam2 = Global_262145.f_24292;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24293;
			*uParam2 = Global_262145.f_24293;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24294;
			*uParam2 = Global_262145.f_24294;
		}
		else
		{
			*uParam1 = Global_262145.f_12575;
			*uParam2 = Global_262145.f_12574;
		}
	}
	else if (func_543(iParam0))
	{
		*uParam1 = (Global_262145.f_18321 / 100f);
		*uParam2 = (Global_262145.f_18321 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24295;
		*uParam2 = Global_262145.f_24295;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24296;
		*uParam2 = Global_262145.f_24296;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24298;
		*uParam2 = Global_262145.f_24298;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24299;
		*uParam2 = Global_262145.f_24299;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24300;
		*uParam2 = Global_262145.f_24300;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24301;
		*uParam2 = Global_262145.f_24301;
	}
	else
	{
		*uParam1 = Global_262145.f_12577;
		*uParam2 = Global_262145.f_12576;
	}
	iVar0 = func_28();
	if (iVar0 != func_33())
	{
		if (func_744(unk_0x1146A9AE09CE2B14(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_817(int iParam0)
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

void func_818(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

void func_819()
{
	if (func_481())
	{
		if (func_2186(8))
		{
			if (func_827(0))
			{
				func_822(0);
			}
			else
			{
				func_821(0);
				func_820(8);
			}
		}
	}
}

void func_820(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&uLocal_138, iParam0);
}

void func_821(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&Global_4272479, 4);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_4272479, 4);
	}
}

void func_822(int iParam0)
{
	if (func_826())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_825())
		{
			func_824(1, 1);
		}
		else
		{
			func_824(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_823())
	{
		Global_19798.f_1 = 3;
	}
}

int func_823()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_824(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_827(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_825()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_826()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_827(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_828()
{
	if (iLocal_149 != -1)
	{
		func_829(&iLocal_149);
	}
}

void func_829(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_830(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_830(int iParam0)
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
		if (Global_42737[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_831(int iParam0)
{
	if (func_2186(23) || iParam0)
	{
		if (!func_850(unk_0x1146A9AE09CE2B14(), 0, 0))
		{
			func_820(23);
			func_820(24);
			func_848();
			func_844(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
			func_832(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		}
	}
}

void func_832(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_843())
		{
			func_842();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_848();
		func_836(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_833();
	}
}

void func_833()
{
	if (func_843() && !func_835())
	{
		func_842();
	}
	if (func_835())
	{
		func_834();
	}
	else
	{
		func_848();
		func_836(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_834()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_835()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_836(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_33())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_837())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_837()
{
	if ((((((func_506(unk_0x1146A9AE09CE2B14()) == 229 || func_506(unk_0x1146A9AE09CE2B14()) == 191) || func_841()) || func_840()) || func_839(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_838(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_838(int iParam0)
{
	if (func_563(iParam0))
	{
		return 1;
	}
	if (func_565(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_839(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
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

var func_840()
{
	return Global_1574420;
}

int func_841()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_842()
{
	if (func_835())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_843()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_844(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x62A5B93F8270CC83(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405077.f_45.f_65 = bParam0;
	Global_2405077.f_45.f_67 = iParam1;
	Global_2405077.f_45.f_68 = bParam2;
	Global_2405077.f_45.f_174 = iParam3;
	Global_2405077.f_45.f_66 = iParam4;
	Global_2405077.f_45.f_176 = bParam5;
	Global_2405077.f_45.f_177 = bParam7;
	Global_2405077.f_45.f_182 = iParam6;
	Global_2405077.f_45.f_178 = iParam8;
	Global_2405077.f_45.f_179 = iParam9;
	Global_2405077.f_45.f_180 = bParam10;
	Global_2405077.f_45.f_181 = iParam11;
	if (!bParam0)
	{
		func_847();
	}
	if (bParam2)
	{
		iVar0 = func_846();
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (!unk_0xEE1D92A39CF8E1E6(iVar0))
			{
				if (unk_0x456C91FDAFEEF560(iVar0))
				{
					unk_0x4985CD0720AFD468(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x9984C023D4E57C2E(iVar0, 1))
				{
					if (!unk_0xA6BE8F025C6B653F(iVar0))
					{
						unk_0x1AA7FA4BBD799B88(unk_0x431E33F39AEFC4C4(iVar0));
					}
				}
			}
			if (unk_0xA6BE8F025C6B653F(iVar0))
			{
				if (bVar1)
				{
					unk_0x795957CD3A0042C8(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						unk_0xAC2B08493719B297(iVar0, 1);
					}
				}
				if (bParam7)
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						unk_0xED4E91A1FC7ABBF6(iVar0, 0);
					}
				}
				if (iParam6 > -1)
				{
					unk_0xC612552622E74D36(iVar0, iParam6, iParam6);
					unk_0xA2FEFE3BBCD9FB23(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_845(iVar0);
				}
			}
		}
	}
}

void func_845(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0xA6BE8F025C6B653F(iParam0))
		{
			if (Global_1695571 > -1)
			{
				if (unk_0x8BA4AD00568AB5FC("GBMissionFire", 3))
				{
					if (!unk_0x5B38E054B758C032(iParam0, "GBMissionFire"))
					{
						unk_0x6C9577C090944B92(iParam0, "GBMissionFire", Global_1695571);
					}
				}
			}
		}
	}
}

int func_846()
{
	return Global_2405077.f_2667;
}

void func_847()
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405077.f_45.f_69 = { Var0 };
	Global_2405077.f_45.f_172 = 0;
}

void func_848()
{
	if (func_843() && !func_835())
	{
		func_842();
	}
	func_849();
	Global_2405077.f_713 = 0;
}

void func_849()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

int func_850(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2426865[iParam0 /*449*/].f_231 == 99)
	{
		if ((iParam2 && Global_2426865[iParam0 /*449*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2426865[iParam0 /*449*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_851()
{
	if (func_274())
	{
		if (func_1619() || func_1618())
		{
			if (func_1617() || func_1618())
			{
				switch (Local_115.f_115)
				{
					case 0:
						if (!unk_0x8B6A925F148E0E94())
						{
							func_831(1);
							func_1616(Local_154.f_579, 0f, 100f, 1, 0f, 0, 0, 65f, 1, 1, 0, 1, -1082130432);
							unk_0x8BA9BCDD56AA7115(500);
							Local_115.f_115++;
						}
						break;
					
					case 1:
						if (unk_0x8B6A925F148E0E94())
						{
							Local_115.f_115++;
						}
						break;
					
					case 2:
						if (func_853(10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
						{
							Local_115.f_115++;
						}
						break;
					
					case 3:
						if (!unk_0xE0A6F16F546C8274())
						{
							unk_0x6E1E3A5B1F9AB95B(500);
							Local_115.f_115++;
						}
						else
						{
							Local_115.f_115++;
						}
						break;
					
					case 4:
						if (unk_0xE0A6F16F546C8274())
						{
							func_852();
							func_2159(30);
							return 1;
						}
						break;
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
	else
	{
		return 1;
	}
	return 0;
}

void func_852()
{
	struct<28> Var0;
	
	if (unk_0x4BE697D014536271(Global_2413982.f_6))
	{
		if (!Global_2413982.f_6 == unk_0x62D18D65FE22FF39())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413982 = { Var0 };
	Global_2413982.f_6 = -1;
}

int func_853(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1615();
	if (func_850(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (((bParam4 && func_2489(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
		{
		}
		else if (func_1614() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 150, 1);
		if (!Global_2405077.f_701 == iParam0)
		{
			if (bParam15 && Global_2405077.f_701 == 37)
			{
			}
			else if (!Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
			{
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_702) < func_178(0))
				{
					return 0;
				}
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
		{
			Global_2405077.f_701 = iParam0;
			Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
			if (bParam2)
			{
				if (!func_1613())
				{
					bParam2 = false;
				}
			}
			Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
			Global_2405077.f_2477 = 0;
			Global_2405077.f_2478 = 0;
			Global_2405077.f_2476 = 0;
			Global_2405077.f_2876 = 0;
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2405077.f_701 == 11)
			{
				Global_2405077.f_705 = { Global_2413982 };
				Global_2405077.f_708 = Global_2413982.f_5;
				Global_2405077.f_2896 = Global_2413982.f_26;
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 3;
			}
			else if (func_1345(&(Global_2405077.f_705), &(Global_2405077.f_708), Global_2405077.f_701, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 3;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
						unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						func_1340(&iVar2);
					}
					else
					{
						iVar2 = func_846();
						func_1339(&iVar2);
					}
					if (func_1613())
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							if (!unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) == Global_2405077.f_45.f_67)
							{
								iVar4 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								if (iVar4 == Global_2405077.f_45.f_173)
								{
									func_1337();
								}
								unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
							}
						}
					}
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
					}
					else
					{
						iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
						if (unk_0xA6BE8F025C6B653F(iVar2))
						{
							func_1319(iVar2);
							func_1318(1);
							Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
						}
						else
						{
							unk_0x13F856602366FE17(iVar2);
						}
					}
				}
				else
				{
					func_1318(1);
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 4)
		{
			if (func_1316())
			{
				if (Global_2405077.f_45.f_65)
				{
					if (func_1114(Global_2405077.f_705, Global_2405077.f_705.f_1, func_1312(Global_2405077.f_45.f_67), Global_2405077.f_708, 0))
					{
						Global_2405077.f_703 = unk_0x551F46B3C7DFB654();
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 5;
					}
				}
				else if (func_1113(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0)
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 5)
		{
			unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 150, 1);
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				if (Global_2405077.f_45.f_175)
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_236 = 1;
				}
				else
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_236 = 0;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_703) > 5000)
			{
				unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
			}
			else if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) == 7)
			{
				if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173) && unk_0xBFCE58B2B3249999(Global_2405077.f_45.f_173, 0))
				{
					func_910(unk_0x7D2B9E6A64637269(), Global_2405077.f_45.f_173, -1, 0);
				}
				else
				{
					unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 6)
		{
			Global_2405077.f_702 = unk_0x551F46B3C7DFB654();
			if (Global_2405077.f_711)
			{
				Global_2405077.f_704 = unk_0x551F46B3C7DFB654();
				Global_2405077.f_711 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_704)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1574425)
			{
				func_904(Global_2405077.f_705);
			}
			if (bParam7 && !Global_2441237.f_1351)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if ((unk_0xE50EB54E0F21BED0(iVar2, 0) || !unk_0xBFCE58B2B3249999(iVar2, 0)) || func_20(iVar2))
						{
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_896(Global_2405077.f_705, Global_2405077.f_708, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2405077.f_2896))
				{
					if (bParam15)
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 7;
						return 0;
					}
					else
					{
						func_892();
					}
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 7)
		{
			if ((Global_2405077.f_701 == 8 && Global_2405077.f_713.f_507) && Global_2405077.f_2876)
			{
				func_892();
			}
			else if (func_886(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0)) || func_885())
			{
				if (Global_2405077.f_701 == 8 && !Global_2405077.f_2876)
				{
					Global_2405077.f_2876 = 1;
				}
				else
				{
					Global_2405077.f_701 = 37;
				}
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
				Global_2405077.f_2477 = 0;
				Global_2405077.f_2478 = 0;
				Global_2405077.f_2476 = 0;
			}
			else
			{
				func_892();
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 10)
		{
			if (vdist(Global_2413982, Global_2405077.f_705) > 0.1f)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar2)) || unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iVar2)))
					{
						unk_0x7956E831D8C0C17C(Global_2405077.f_705, Global_2405077.f_705.f_1, Global_2405077.f_705.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2405077.f_705.f_2 - fVar0) > 1.5f)
						{
							if (vdist(Global_2413982, Global_2405077.f_705) > 15f)
							{
								Global_2405077.f_705 = { Global_2413982 };
								if (unk_0xA6BE8F025C6B653F(iVar2))
								{
									unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_884(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
									unk_0x47D0DDD8833C5E5F(iVar2, 1084227584);
								}
								Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
							}
							else
							{
								Global_2405077.f_705.f_2 = (Global_2405077.f_705.f_2 + 1f);
							}
						}
						else
						{
							if (unk_0xA6BE8F025C6B653F(iVar2))
							{
								unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_884(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
								unk_0x47D0DDD8833C5E5F(iVar2, 1084227584);
							}
							Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
						}
					}
					else
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
					}
				}
				else
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
				}
			}
			else
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 11)
		{
			if (!bParam14)
			{
				if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173) && unk_0xA6BE8F025C6B653F(Global_2405077.f_45.f_173))
				{
					unk_0x4603196EEEA2355C(Global_2405077.f_45.f_173, 1, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_876(iParam9, 0, 0);
				}
			}
			func_874(func_57(unk_0x1146A9AE09CE2B14()), 0);
			if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173))
			{
				func_1337();
			}
			if (!(func_1113(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0) && !Global_2405077.f_489.f_5)
			{
				func_873(0, 0);
			}
			func_871(0, 0);
			if (bParam10)
			{
				func_870();
			}
			func_869();
			func_855();
			if (bParam13)
			{
				func_180();
			}
			func_854();
			return 1;
		}
	}
	else if (!Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
	{
		unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
		func_1339(&(Global_2405077.f_45.f_173));
		func_854();
	}
	Global_2405077.f_702 = unk_0x551F46B3C7DFB654();
	return 0;
}

void func_854()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

void func_855()
{
	int iVar0;
	
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_270.f_20 = -1;
	Global_2405077.f_2873 = -1f;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_857(iVar0);
		iVar0++;
	}
	if (func_856(unk_0x1146A9AE09CE2B14(), 0))
	{
		Global_2553486.f_85 = 1;
		Global_2553486.f_86 = unk_0x551F46B3C7DFB654();
	}
}

int func_856(int iParam0, bool bParam1)
{
	if (func_2489(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2426865[iParam0 /*449*/].f_270.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2426865[iParam0 /*449*/].f_270.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_857(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (Global_2426865[iVar0 /*449*/].f_270.f_14 != -1)
	{
		if (func_868(Global_2426865[iVar0 /*449*/].f_270.f_14))
		{
			if (!func_864(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_14, 0, 0))
			{
				Global_2426865[iVar0 /*449*/].f_270.f_14 = -1;
			}
		}
		else
		{
			Global_2426865[iVar0 /*449*/].f_270.f_14 = -1;
		}
	}
	if (Global_2426865[iVar0 /*449*/].f_270.f_16 != -1)
	{
		if (func_868(Global_2426865[iVar0 /*449*/].f_270.f_16))
		{
			if (!func_864(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_16, 0, 1))
			{
				Global_2426865[iVar0 /*449*/].f_270.f_16 = -1;
			}
		}
		else
		{
			Global_2426865[iVar0 /*449*/].f_270.f_16 = -1;
		}
	}
	if (Global_2426865[iVar0 /*449*/].f_270.f_15 != -1)
	{
		if (!func_864(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_15, 0, 0))
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = -1;
		}
	}
	if (func_868(iParam0))
	{
		if (func_864(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_14 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_14 = iParam0;
			}
		}
		if (func_864(unk_0x1146A9AE09CE2B14(), iParam0, 0, 1))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_16 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_16 = iParam0;
			}
		}
		iVar2 = floor((to_float(iParam0) / 32f));
		if (func_859(unk_0x1146A9AE09CE2B14(), iParam0, 1120403456))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = vdist(func_858(iParam0), func_57(unk_0x1146A9AE09CE2B14()));
		if (iParam0 == Global_2426865[iVar0 /*449*/].f_270.f_20)
		{
			Global_2405077.f_2873 = fVar1;
		}
		else if (fVar1 < Global_2405077.f_2873 || Global_2405077.f_2873 <= 0f)
		{
			Global_2405077.f_2873 = fVar1;
			Global_2426865[iVar0 /*449*/].f_270.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2426865[iVar0 /*449*/].f_270.f_20)
	{
		Global_2426865[iVar0 /*449*/].f_270.f_20 = -1;
		Global_2405077.f_2873 = -1f;
	}
	if (func_864(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
	{
		if (!Global_2426865[iVar0 /*449*/].f_270.f_15 == iParam0)
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = iParam0;
		}
	}
}

Vector3 func_858(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_4;
}

int func_859(int iParam0, int iParam1, float fParam2)
{
	if (func_863())
	{
		return 1;
	}
	if (func_862(iParam1))
	{
		if (unk_0x419E13582192CFEA(func_861()))
		{
			if (func_860(unk_0xD6E677FAD7521410(func_861(), 1), iParam1, fParam2) && Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 == 8)
			{
				return 1;
			}
		}
		return func_860(func_57(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_860(struct<3> Param0, int iParam1, float fParam2)
{
	if (func_862(iParam1))
	{
		if (vdist2(Param0, func_858(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_861()
{
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		return Global_1695733.f_20;
	}
	return -1;
}

int func_862(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 40)
	{
		return 1;
	}
	return 0;
}

int func_863()
{
	if (!unk_0xE45310E861787FC2() && !func_183())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_139630[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_864(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_862(iParam1))
	{
		if (!bParam3)
		{
			return func_865(func_57(iParam0), iParam1, fParam2);
		}
		else if (func_865(func_57(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_865(func_57(iParam0), iParam1, 15f))
		{
			if (func_2489(iParam0, 1, 1))
			{
				iVar0 = unk_0xD56332194D622ECE(iParam0);
				if (unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iVar0, 0))
				{
					if (unk_0xC49311A2A500FF09(iVar0, 0))
					{
						iVar1 = unk_0xDA8C680C9B8BFAAF(iVar0);
						if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
						{
							if (unk_0x5B38E054B758C032(iVar1, "PYV_Yacht"))
							{
								iVar2 = unk_0x05351AF95891EE5C(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_865(struct<3> Param0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (func_862(iParam1))
	{
		func_866(iParam1, &Var0, &Var1, &fVar2, fParam2);
		return unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var1, fVar2, 0, 1);
	}
	return 0;
}

void func_866(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	
	Var0 = { func_858(iParam0) };
	fVar1 = func_867(iParam0);
	Var2 = { 0f, 1f, 0f };
	func_55(&Var2, 0f, 0f, fVar1);
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	*uParam1 = { Var0 + Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_867(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_7;
}

int func_868(int iParam0)
{
	if (func_862(iParam0))
	{
		return Global_2553486.f_2[iParam0];
	}
	return 0;
}

void func_869()
{
	Global_1626900 = -1;
	Global_1626906 = 0;
	Global_1626901 = -1;
}

void func_870()
{
	Global_2405077.f_5 = 1;
}

void func_871(float fParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!func_872() || iParam1)
	{
		if (unk_0x8B6A925F148E0E94() || unk_0xF471787D45ADC2C1())
		{
			if (!unk_0xEF482630D7014464())
			{
				Var0 = { func_57(unk_0x1146A9AE09CE2B14()) };
				if (Var0.f_2 > -80f)
				{
					unk_0x3A13FD2813C8251F(0f, 1065353216);
					unk_0xDF23DCD7A3E1B7A5(fParam0);
				}
			}
		}
	}
}

bool func_872()
{
	return Global_1312902;
}

void func_873(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0x5976053523EA16C8(unk_0x7D2B9E6A64637269()))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2405077.f_709)));
		if (unk_0x7956E831D8C0C17C(Var0, &fVar1, 0, 0))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((unk_0x0BCA9ADE67DF9DD8(fVar2) > 0f && unk_0x0BCA9ADE67DF9DD8(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (unk_0xCE84F8AB9BD41C13())
					{
						unk_0xED93DAC36CA89AF2();
					}
				}
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Var0.x, Var0.f_1, fVar1, 0, 1, 0, 1);
				Global_2405077.f_709 = 0;
			}
		}
		else if (Global_2405077.f_709 < 3)
		{
			Global_2405077.f_709++;
			func_873(0, 0);
		}
		else
		{
			Global_2405077.f_709 = 0;
		}
	}
}

void func_874(struct<3> Param0, bool bParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		fVar1 = func_875(unk_0x6471F4759775FCA4(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		unk_0x6AF7EE4DD9F8B944(Param0, fVar1, 1, 0, 0, bParam1);
		unk_0xB7D390F8F682127B(Param0, fVar1, 1, 0, 1, 1, bParam1, 0);
		unk_0x8BE64A4794BF87FA(Param0, 6f);
	}
	else
	{
		uVar6 = unk_0x3876E9B099B1F669(Param0.x, Param0.f_1, (Param0.f_2 - 2f), Param0.x, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
		unk_0xA2B3B271E2AE7A08(uVar6, &iVar2, &uVar3, &uVar4, &uVar5);
		unk_0x6AF7EE4DD9F8B944(Param0, 0.7f, 1, 0, 0, bParam1);
		if (!iVar2 == 0)
		{
			unk_0xB7D390F8F682127B(Param0, 6f, 1, 0, 1, 1, bParam1, 0);
			if (bParam1)
			{
				unk_0xBA7E979B202649F9(Param0, 6f, 17);
			}
			else
			{
				unk_0xBA7E979B202649F9(Param0, 6f, 16);
			}
		}
		unk_0x8BE64A4794BF87FA(Param0, 2.5f);
	}
}

float func_875(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_50(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_1 - Var1.f_1));
}

void func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_883())
	{
		iVar1 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (func_881(iVar1, &iVar0))
		{
			func_877(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x795957CD3A0042C8(&iVar1);
			}
		}
	}
}

void func_877(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x7404749A8C3BD799(iParam0);
	if (unk_0xB7D6400C89373777(uVar0))
	{
		if (Global_1574419 && unk_0xEACFC87E44438F24(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x2B56C657979E352B(uVar0, 1, 1, func_880());
			return;
		}
		else if (func_879())
		{
			func_878(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x2B56C657979E352B(uVar0, iParam2, 1, func_880());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam2);
			}
		}
		else
		{
			unk_0x2B56C657979E352B(uVar0, iParam1, 1, func_880());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam1);
			}
		}
	}
}

int func_878(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
			unk_0x9B25F77587646D08(iVar1, 1);
			if (iParam1 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x23D23D5696058D5D(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0xA6BE8F025C6B653F(iParam0))
	{
		unk_0x741BC8585A65F4E0(iParam0, 1);
		return 1;
	}
	else
	{
		unk_0x13F856602366FE17(iParam0);
	}
	return 0;
}

bool func_879()
{
	return Global_1574437;
}

int func_880()
{
	if (func_177() != 0)
	{
		return 0;
	}
	if (!func_184(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_881(int iParam0, int iParam1)
{
	if (func_882(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_882(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iParam0))
		{
			if (unk_0x456C91FDAFEEF560(iParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(iParam0)))
				{
					unk_0x4985CD0720AFD468(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(iParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_883()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_884(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_50(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var1.f_2));
}

int func_885()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	Var3 = { func_57(unk_0x1146A9AE09CE2B14()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2489(iVar1, 1, 1))
		{
			if (unk_0xBBC3519C07015926(unk_0xD56332194D622ECE(iVar1)))
			{
				if (!iVar1 == unk_0x1146A9AE09CE2B14())
				{
					if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
					{
						fVar2 = vmag(func_57(iVar1) - Var3);
						if (fVar2 < 0.2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_886(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	
	iVar0 = unk_0x5C21627F44D0A4AC(&Global_1315871);
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar5 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!unk_0xE50EB54E0F21BED0(iVar5, 0))
		{
			iVar6 = unk_0x6471F4759775FCA4(iVar5);
			Var7 = { unk_0xD6E677FAD7521410(iVar5, 1) };
			fVar8 = unk_0xA8D713A937F31250(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (unk_0x419E13582192CFEA(Global_1315871[iVar4]))
		{
			if (!unk_0xE50EB54E0F21BED0(Global_1315871[iVar4], 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_1315871[iVar4], 0))
			{
			}
			else if (func_891(Global_1315871[iVar4]))
			{
			}
			else if (!func_887(Global_1315871[iVar4]))
			{
				Var1 = { unk_0xD6E677FAD7521410(Global_1315871[iVar4], 0) };
				fVar2 = unk_0xA8D713A937F31250(Global_1315871[iVar4]);
				iVar3 = unk_0x6471F4759775FCA4(Global_1315871[iVar4]);
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (func_58(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_48(Param0, Var1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_887(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, -1, 0))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0x72D30262CF8C8603(iVar0))
			{
				iVar1 = unk_0xCB567ED25393C1DF(iVar0);
				if (func_2489(iVar1, 0, 0))
				{
					if (func_888(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_888(int iParam0)
{
	if (func_890())
	{
		if (func_889(unk_0x17114A8CCDEB9E3D(iParam0), &(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_353.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_889(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_890()
{
	if (Global_2405077.f_2877 > -1)
	{
		return 1;
	}
	return 0;
}

int func_891(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xE66018878024055F(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_892()
{
	if (!Global_2405077.f_711)
	{
		Global_2405077.f_711 = 1;
	}
	func_1318(0);
	if (Global_2405077.f_2671)
	{
		func_893();
		Global_2405077.f_2671 = 0;
	}
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
}

void func_893()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	struct<3> Var17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	struct<3> Var42;
	float fVar43;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		if ((!Global_2405077.f_45.f_52 && !Global_2405077.f_45.f_53) && !Global_2405077.f_2672)
		{
			if (unk_0xC2B18235ABE89FC1(Var1, &Var2, 1, 1077936128, 0))
			{
				Var2.f_2 = (Var2.f_2 + 1f);
				bVar3 = true;
				if (!vdist(Var1, Var2) < 50f || Global_2405077.f_45.f_52)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_2405077.f_2672)
		{
			Global_2405077.f_2672 = 0;
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			fVar4 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
		}
		fVar5 = 3f;
		Var6 = { unk_0x557C9CA8FCC667DF(unk_0x7D2B9E6A64637269()) };
		Var6 = { Var6 / FtoV(vmag(Var6)) };
		Var6 = { Var6 * Vector(fVar5, fVar5, fVar5) };
		Var7 = { Var6 };
		func_55(&Var7, 0f, 0f, -45f);
		Var8 = { Var6 };
		func_55(&Var8, 0f, 0f, -90f);
		Var9 = { Var6 };
		func_55(&Var9, 0f, 0f, 45f);
		Var10 = { Var6 };
		func_55(&Var10, 0f, 0f, 90f);
		if (bVar3)
		{
			Var11 = { Var2 - Var1 };
			Var12 = { func_115(Var11, 0f, 0f, 1f) };
			Var12 = { Var12 / FtoV(vmag(Var12)) };
			Var12 = { Var12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		Var13 = { Var1 + Var6 };
		Var14 = { Var1 + Var7 };
		Var15 = { Var1 + Var8 };
		Var16 = { Var1 + Var9 };
		Var17 = { Var1 + Var10 };
		uVar18 = unk_0x7AD43B94CD205A49(Var1, Var13, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar19 = unk_0x7AD43B94CD205A49(Var1, Var14, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar20 = unk_0x7AD43B94CD205A49(Var1, Var15, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar21 = unk_0x7AD43B94CD205A49(Var1, Var16, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar22 = unk_0x7AD43B94CD205A49(Var1, Var17, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		if (bVar3)
		{
			uVar23 = unk_0x7AD43B94CD205A49(Var1, Var2, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		}
		iVar33 = unk_0xA2B3B271E2AE7A08(uVar18, &iVar24, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xA2B3B271E2AE7A08(uVar19, &iVar25, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xA2B3B271E2AE7A08(uVar20, &iVar26, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xA2B3B271E2AE7A08(uVar21, &iVar27, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xA2B3B271E2AE7A08(uVar22, &iVar28, &uVar30, &uVar31, &uVar32);
		if (bVar3)
		{
			iVar33 = unk_0xA2B3B271E2AE7A08(uVar23, &iVar29, &uVar30, &uVar31, &uVar32);
		}
		if (iVar33 == 0)
		{
		}
		iVar34 = (iVar34 + iVar24);
		iVar35 = (iVar35 + iVar25);
		iVar36 = (iVar36 + iVar26);
		iVar37 = (iVar37 + iVar27);
		iVar38 = (iVar38 + iVar28);
		if (bVar3)
		{
			iVar39 = (iVar39 + iVar29);
		}
		iVar40 = 99;
		iVar41 = -1;
		if (iVar34 < iVar40)
		{
			iVar40 = iVar34;
			iVar41 = 0;
		}
		if (iVar35 < iVar40)
		{
			iVar40 = iVar35;
			iVar41 = 1;
		}
		if (iVar37 < iVar40)
		{
			iVar40 = iVar37;
			iVar41 = 2;
		}
		if (iVar36 < iVar40)
		{
			iVar40 = iVar36;
			iVar41 = 3;
		}
		if (iVar38 < iVar40)
		{
			iVar40 = iVar38;
			iVar41 = 4;
		}
		if (bVar3)
		{
			if (iVar39 < iVar40)
			{
				iVar40 = iVar39;
				iVar41 = 5;
			}
		}
		if (bVar3 && iVar39 == 0)
		{
			fVar4 = unk_0x832AD84AA258AE80(Var11.x, Var11.f_1);
			func_895(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2405077.f_45.f_52)
		{
			Var42 = { Global_2405077.f_45.f_49 - Var1 };
			fVar43 = func_101(Var42, Var15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_895(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_895(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_895(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_895(fVar4);
					return;
				}
				else
				{
					func_894(iVar41, fVar4, Var11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_895(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_895(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_895(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_895(fVar4);
				return;
			}
			else
			{
				func_894(iVar41, fVar4, Var11);
			}
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 2);
			if (iVar0 == 0)
			{
				if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_895(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_895(fVar4);
					return;
				}
				else
				{
					func_894(iVar41, fVar4, Var11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_895(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_895(fVar4);
				return;
			}
			else
			{
				func_894(iVar41, fVar4, Var11);
			}
		}
	}
}

void func_894(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_895(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_895(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_895(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_895(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0x832AD84AA258AE80(Param2, Param2.f_1);
			func_895(fParam1);
			return;
			break;
	}
}

void func_895(float fParam0)
{
	if (!unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
	{
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam0);
	}
	func_871(0f, 1);
}

int func_896(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22531.f_6 = 1;
	if (Global_2441237.f_1351 && Global_2441237.f_1359)
	{
		func_901(0, bParam7);
		return 1;
	}
	if (unk_0xF471787D45ADC2C1() && !bParam7)
	{
		if (Global_2441237.f_1351)
		{
			func_901(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xCE84F8AB9BD41C13() && !bParam7) && !unk_0x7A4185C9A76C12B2())
	{
		return 0;
	}
	if (!func_183())
	{
		if (func_850(unk_0x1146A9AE09CE2B14(), 1, 0) && !(func_900() || func_899()))
		{
			if (((bParam7 && func_2489(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
			{
			}
			else if (func_1614() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2441237.f_1351 && !bParam9)
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		if ((unk_0x0BCA9ADE67DF9DD8((Var1.x - Param0.x)) < 0.2f && unk_0x0BCA9ADE67DF9DD8((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x0BCA9ADE67DF9DD8((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x0BCA9ADE67DF9DD8(fVar2) < 1f)
			{
				Global_2441237.f_1351 = 0;
				Global_2441237.f_1352 = 0;
				if (unk_0x7A4185C9A76C12B2())
				{
					unk_0x9065E9E298F1BC11();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2441237.f_1353 || !Param0.f_1 == Global_2441237.f_1353.f_1) || !Param0.f_2 == Global_2441237.f_1353.f_2) || !fParam1 == Global_2441237.f_1356)
	{
		if (Global_2441237.f_1351 == 1)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2441237.f_1357) < func_178(0))
			{
				return 0;
			}
			unk_0x9065E9E298F1BC11();
			Global_2441237.f_1352 = 1;
		}
		else
		{
			Global_2441237.f_1352 = 0;
		}
		Global_2441237.f_1353 = { Param0 };
		Global_2441237.f_1356 = fParam1;
		Global_2441237.f_1351 = 0;
	}
	if (bParam2)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			if (unk_0x419E13582192CFEA(iVar0) && unk_0x6471F4759775FCA4(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2441237.f_1351 && !unk_0x7A4185C9A76C12B2())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_99422.f_1378[44], 16))
			{
				func_898(0);
			}
			if (!unk_0x4EB3ECD73955E6CC(unk_0x7D2B9E6A64637269(), &(Global_2405077.f_501)))
			{
				Global_2405077.f_501 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
				if (unk_0x83E7671FB1B0EA3F(iVar0))
				{
					Global_2441237.f_1358 = 0;
				}
			}
		}
		if (Global_2441237.f_1358 > -1)
		{
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						if (unk_0xA6BE8F025C6B653F(iVar0))
						{
							unk_0x78CDDD1E6367978D(iVar0, Param0, 0, 1, 1, 1);
							unk_0xCD37A28258D70638(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xBDDCDEC7B6205897(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0x13F856602366FE17(iVar0);
						}
					}
					else
					{
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
						unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam1);
					}
				}
				else
				{
					unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
					unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam1);
				}
				func_901(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x961F6202C2192265();
				unk_0xBD99B1A905B5473C(unk_0x1146A9AE09CE2B14(), Param0, fParam1, bParam2, uParam8, 0);
			}
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
	}
	if (Global_2441237.f_1351)
	{
		Global_22531.f_6 = 1;
		Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
		if (Global_2441237.f_1358 > -1)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			}
			if (func_897(&(Global_2441237.f_1358), Param0, fParam1, iVar0))
			{
				func_901(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_2441237.f_1353) < 2f)
				{
					if (unk_0x7A4185C9A76C12B2())
					{
						unk_0x9065E9E298F1BC11();
					}
					func_901(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x7A4185C9A76C12B2())
			{
				if (fParam10 != 0f)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						unk_0xBDDCDEC7B6205897(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2441237.f_1359 = 1;
						return 0;
					}
				}
				func_901(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_897(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (unk_0x419E13582192CFEA(Global_2441237.f_1360) && !unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
	{
		unk_0x13F856602366FE17(Global_2441237.f_1360);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2441237.f_1360 = iParam3;
			unk_0x13F856602366FE17(Global_2441237.f_1360);
			if (unk_0xA6BE8F025C6B653F(Global_2441237.f_1360))
			{
				if (!unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
				{
					unk_0xCD37A28258D70638(Global_2441237.f_1360, fParam2);
					unk_0x78CDDD1E6367978D(Global_2441237.f_1360, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_898(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405077.f_2689;
	if ((unk_0x38684A9B76A50D6A() && Global_2405077.f_2687 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405077.f_2686)
	{
		if (!unk_0x1275587246A96F24())
		{
			Global_2405077.f_2686 = iVar0;
		}
	}
}

bool func_899()
{
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 12)) && Global_1702509 == 8);
}

bool func_900()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

void func_901(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(0f);
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
	}
	if (!bParam1)
	{
		unk_0x961F6202C2192265();
	}
	if (unk_0x7A4185C9A76C12B2())
	{
		unk_0x9065E9E298F1BC11();
	}
	func_903();
	if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14) && !func_863())
	{
		func_902();
	}
}

void func_902()
{
	Global_2553486.f_88 = 1;
}

void func_903()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_904(struct<3> Param0)
{
	Global_2405077.f_45.f_301 = 1;
	Global_2405077.f_45.f_298 = { Param0 };
	Global_2405077.f_45.f_317 = unk_0x5FBE5EA201067B5E(unk_0xCB3024ED32EBF9EC(), -9999);
	func_905(1);
}

void func_905(bool bParam0)
{
	float fVar0;
	
	if (Global_1574425 || Global_2405077.f_45.f_302)
	{
		if (Global_2405077.f_45.f_301)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (Global_1574429)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xECA23EB9C2A5E83F(unk_0x7D2B9E6A64637269())) && ((vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Global_2405077.f_45.f_298) < fVar0 || func_909(unk_0x1146A9AE09CE2B14())) || func_850(unk_0x1146A9AE09CE2B14(), 0, 0)))
				{
					if ((func_908() || func_907()) || func_906())
					{
						if (unk_0x5C6675393464A814(0, 351))
						{
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
							func_876(1000, 0, 1);
						}
						else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2405077.f_45.f_317, unk_0xCB3024ED32EBF9EC())) > 2000)
						{
							func_876(2500, 0, bParam0);
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						}
					}
					else
					{
						Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						func_876(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2405077.f_45.f_298 = { 0f, 0f, 0f };
					Global_2405077.f_45.f_301 = 0;
				}
			}
		}
	}
}

int func_906()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_907()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_908()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_909(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_216 != 0)
	{
		return 1;
	}
	return 0;
}

void func_910(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	bVar0 = false;
	if (unk_0xA6BE8F025C6B653F(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1112(iParam0, iParam1, bVar0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam0, 0) };
		Var2 = { unk_0xD6E677FAD7521410(iParam1, 0) };
		if (!vdist(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.x = (Var2.x + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			unk_0x78CDDD1E6367978D(iParam0, Var2, 0, 0, 0, 1);
		}
		unk_0x16D66F11FE644901(iParam0);
		unk_0x3CBE9F07524C242D(iParam0, 1, 0);
		unk_0xA2C015B68CE01357(iParam0, 0);
		unk_0xF5143FB7B9EC876D(unk_0x7D2B9E6A64637269(), 0);
		unk_0xD991F7672CE8EAD3(iParam0, 150, 1);
		unk_0xD991F7672CE8EAD3(iParam0, 151, 1);
		if (bParam3)
		{
			unk_0xB1D85A6C23F2F945(iParam0, iParam1, iParam2);
		}
		else
		{
			unk_0x95CA4545D0C61309(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		unk_0xE37EB80DFB0D31FB(iParam0, 0, 0);
		unk_0xD991F7672CE8EAD3(iParam0, 150, 1);
		if (Global_1574425)
		{
			if (func_1109(unk_0x6471F4759775FCA4(iParam1)))
			{
				func_911(0);
			}
		}
	}
}

void func_911(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
	{
		if (Global_4456448.f_133999 == 0)
		{
			if ((Global_2405077.f_2697 == -99 || Global_2405077.f_2697 == 0) || !func_1108(unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()), 14, Global_2405077.f_2697, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_308(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2405077.f_2697;
			}
			Var0 = { func_1065(func_1107(), 14, iVar1, -1) };
			func_1064(unk_0x7D2B9E6A64637269(), 14, iVar1);
			func_912(unk_0x7D2B9E6A64637269(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_912(unk_0x7D2B9E6A64637269(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 380, 1);
		}
	}
}

int func_912(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	var uVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	var uVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	var uVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	if (!unk_0x02BFF15CAA701972())
	{
		if ((Global_1312835 != 4 && Global_1312835 != 5) && Global_1312835 != 7)
		{
			return 0;
		}
	}
	if (unk_0xECEC7528A52B4EE8(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x7D2B9E6A64637269() && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77056;
	}
	Global_77057++;
	iVar5 = unk_0x6471F4759775FCA4(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
		if (!func_1063(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77057 > 1)
		{
		}
		else
		{
			func_1058(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xA7E55BCB7431698B(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77102 };
		}
		else
		{
			uVar15 = { func_1054(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77059[1 /*14*/] = { func_1065(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x4170FE884DF7426D(iParam0, func_1053(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1053(iVar0)));
					}
					else
					{
						unk_0x4170FE884DF7426D(iParam0, func_1053(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
					{
						func_1058(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77059[1 /*14*/] = { func_1065(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_77119 };
							}
							else
							{
								uVar16 = { func_1050(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77059[1 /*14*/] = { func_1065(iVar5, 14, uVar16[iVar1], -1) };
								func_1049(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
								if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
								{
									func_1058(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x4170FE884DF7426D(iParam0, func_1053(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1053(iVar0)));
								}
								else
								{
									unk_0x4170FE884DF7426D(iParam0, func_1053(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_912(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
							{
								func_1058(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_1065(iVar5, iVar0, func_1045(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_1054(iVar5, 0) };
					func_912(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x4170FE884DF7426D(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_1044();
			if (iVar18 != -1)
			{
				func_1042(iVar18, 0, iParam10);
			}
			func_1038(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_1050(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_1065(iVar5, 14, uVar19[iVar1], -1) };
			func_1049(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
			{
				func_1058(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77057 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1036(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_912(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_1049(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			func_1058(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar20 = unk_0xF94D55021DC59203(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1));
				if (unk_0x01758128AAB0BA8F(iVar20, joaat("HAIR_SHRINK"), 0))
				{
					func_912(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			func_1030(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_912(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_912(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar21 = func_1053(iParam1);
		if (unk_0x094C1D2DFE050D6E(iParam0, iVar21) != Global_77059[1 /*14*/].f_3 || unk_0x288277F22D527487(iParam0, iVar21) != Global_77059[1 /*14*/].f_4)
		{
			iVar22 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
			iVar23 = unk_0xF94D55021DC59203(iParam0, 7, unk_0x094C1D2DFE050D6E(iParam0, 7), unk_0x288277F22D527487(iParam0, 7));
			if (((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar23, 307252627, 0)) || (iParam1 == 8 && unk_0x01758128AAB0BA8F(iVar23, 1552218390, 0))) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar23, -2095729091, 0)))
			{
				unk_0x4170FE884DF7426D(iParam0, 7, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar22, 307252627, 0)) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar22, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 15, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 2, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar24 = -1;
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 0);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 1);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 2);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 3);
				}
				iVar25 = func_1028(iParam0, 11);
				iVar26 = func_1028(iParam0, 8);
				iVar27 = func_1028(iParam0, 4);
				iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar24 = func_1027(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar24 = func_1027(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_ROBE"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("GORKA_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_1028(iParam0, 8);
					}
				}
				iVar28 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
				if (unk_0x01758128AAB0BA8F(iVar28, joaat("GLOVES"), 0))
				{
					iVar29 = func_1026(iVar5, iVar26, iVar25, iVar27);
					if (iVar29 == -99)
					{
						iVar29 = func_1036(iParam0, iVar5, 11, iVar25, 3, 0);
					}
					switch (iVar28)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar29 = 11;
							iVar24 = func_1027(iVar5, iParam2, 11, 4);
							if (!unk_0x01758128AAB0BA8F(iVar24, joaat("DRESS"), 0))
							{
								iVar29 = -99;
							}
							break;
					}
					if (iVar29 != -99)
					{
						iVar30 = 0;
						while (iVar30 < 18)
						{
							if (func_1025(iVar5, iVar29, iVar30) == iVar28)
							{
								iVar11 = iVar30;
								iVar12 = unk_0x288277F22D527487(iParam0, 3);
							}
							iVar30++;
						}
					}
				}
				iVar24 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x01758128AAB0BA8F(func_1027(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar25 = func_1028(iParam0, 11);
					if (iVar25 >= 256)
					{
						iVar24 = func_1027(iVar5, iVar25, 11, 4);
					}
					if (iVar25 >= 256 && unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0))
					{
						iVar31 = func_1023(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
						if (iVar31 != -99)
						{
							func_912(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1022(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar25 >= 237)
						{
							iVar24 = func_1027(iVar5, iVar25, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar25 >= 256)
						{
							iVar24 = func_1027(iVar5, iVar25, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1022(iVar5, iVar25, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && (unk_0x01758128AAB0BA8F(iVar24, joaat("VEST"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && ((((((((unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("APART_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar32 = func_1021(iParam0, iParam2);
							iVar33 = func_1023(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
							if (iVar33 != -99)
							{
								func_912(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar32 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								func_912(iParam0, 8, iVar32, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar34 = func_1019(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar34, -1) };
									iVar33 = func_1023(iVar5, iVar34, iParam2, Global_77059[1 /*14*/].f_4);
									iVar35 = func_1027(iVar5, iParam2, 11, 3);
									if ((iVar33 == -99 || unk_0x01758128AAB0BA8F(iVar35, joaat("BIKER_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar35, 1170568373, 0))
									{
										iVar33 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1027(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar33 = 120;
									}
									else
									{
										iVar33 = 48;
									}
								}
								func_912(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar25, -1) };
						iVar36 = Global_77059[1 /*14*/].f_3;
						Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iParam2, -1) };
						iVar37 = Global_77059[1 /*14*/].f_3;
						if (iVar36 != iVar37)
						{
							iVar39 = func_1021(iParam0, iParam2);
							Global_77059[1 /*14*/] = { func_1065(iVar5, 8, iVar26, -1) };
							iVar38 = Global_77059[1 /*14*/].f_4;
							iVar40 = func_1018(iVar5, iVar26, iVar38);
							if (iVar39 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								iVar41 = iVar39;
							}
							else if (iVar40 == -99)
							{
								iVar41 = iVar26;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar42 = func_1027(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1017(iVar42) == 6) || unk_0x01758128AAB0BA8F(iVar42, joaat("BIKER_VEST"), 0))
									{
										iVar40 = func_1019(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar40, -1) };
										iVar41 = func_1023(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar26 == 32 || iVar26 == 33) || iVar26 == 119))
								{
									if (!unk_0x01758128AAB0BA8F(func_1027(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar40 = func_1019(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar40, -1) };
										iVar41 = func_1023(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								iVar43 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar43 = func_1027(iVar5, iVar26, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar43 = func_1027(iVar5, iVar26, 8, 4);
								}
								if (unk_0x01758128AAB0BA8F(iVar43, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar40 = func_1019(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar40, -1) };
									iVar41 = func_1023(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar41 = func_1023(iVar5, iVar40, iParam2, iVar38);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1027(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1016(iVar5, func_1028(iParam0, 4), iVar40))
										{
											iVar41 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1027(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1016(iVar5, func_1028(iParam0, 4), iVar40))
										{
											iVar41 = 48;
										}
									}
								}
							}
							if (iVar41 != -99)
							{
								func_912(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar40 = func_1019(iVar5, 11, -1);
								Global_77059[1 /*14*/] = { func_1065(iVar5, 11, iVar40, -1) };
								iVar41 = func_1023(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
								if (iVar41 == -99)
								{
									iVar41 = 240;
								}
								func_912(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_912(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1013(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x4170FE884DF7426D(iParam0, 10, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 10));
				}
			}
			func_1038(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1026(iVar5, func_1045(iParam0, 8, -1), iParam2, func_1045(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_308(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_308(2160, iParam10, 0);
				}
				unk_0x5288BB5843D19DAD(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar44 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar44 = func_1011(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar44 = func_1009(iParam2);
					}
					if (iVar44 != -99 && iParam2 != iVar44)
					{
						iParam2 = iVar44;
					}
				}
				func_963(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar45 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar45, joaat("GLOVES"), 0))
			{
				iVar46 = func_1028(iParam0, 11);
				iVar47 = func_1028(iParam0, 4);
				iVar48 = func_1026(iVar5, iParam2, iVar46, iVar47);
				if (iVar48 == -99)
				{
					iVar48 = func_1036(iParam0, iVar5, 11, iVar46, 3, 0);
				}
				switch (iVar45)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar48 = 11;
						iVar49 = func_1027(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar49, joaat("DRESS"), 0))
						{
							iVar48 = -99;
						}
						break;
				}
				if (iVar48 != -99)
				{
					iVar50 = 0;
					while (iVar50 < 18)
					{
						if (func_1025(iVar5, iVar48, iVar50) == iVar45)
						{
							iVar11 = iVar50;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar50++;
					}
				}
			}
			func_1038(iParam0, iParam1, iParam2, iParam6, 0);
			iVar51 = func_1028(iParam0, 11);
			if (func_1022(iVar5, iVar51, -1))
			{
				iVar52 = func_1018(iVar5, iParam2, Global_77059[1 /*14*/].f_4);
				func_1013(iVar5, iVar52);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1026(iVar5, iParam2, func_1028(iParam0, 11), func_1028(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar53 = func_1028(iParam0, 7);
				if (!func_960(iVar5, iVar53, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x4170FE884DF7426D(iParam0, func_1053(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar54 = func_308(2100, iParam10, 0);
				iVar55 = func_308(2101, iParam10, 0);
				iVar56 = func_308(2102, iParam10, 0);
				uVar57 = func_959(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 0, 0, 0, iVar54, iVar55, iVar56, 0f, uVar57, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 21, 0, 0, iVar54, iVar55, iVar56, 0f, fVar57, 0f, false);
				}
				iVar58 = 0;
				while (iVar58 < 20)
				{
					unk_0xD8F926AF2B16BC6E(iParam0, iVar58, 0f);
					iVar58++;
				}
			}
			else
			{
				func_946(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar59 = func_1028(iParam0, 11);
			iVar60 = func_1028(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1027(iVar5, iVar59, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1016(iVar5, iParam2, func_1018(iVar5, iVar60, 0)))
					{
						func_912(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1027(iVar5, iVar59, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1016(iVar5, iParam2, func_1018(iVar5, iVar60, 0)))
					{
						func_912(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1065(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1026(iVar5, func_1028(iParam0, 8), func_1028(iParam0, 11), iParam2);
			}
			iVar61 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar61, joaat("GLOVES"), 0))
			{
				iVar62 = func_1026(iVar5, iVar60, iVar59, iParam2);
				if (iVar62 == -99)
				{
					iVar62 = func_1036(iParam0, iVar5, 11, iVar59, 3, 0);
				}
				switch (iVar61)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar62 = 11;
						iVar63 = func_1027(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar63, joaat("DRESS"), 0))
						{
							iVar62 = -99;
						}
						break;
				}
				if (iVar62 != -99)
				{
					iVar64 = 0;
					while (iVar64 < 18)
					{
						if (func_1025(iVar5, iVar62, iVar64) == iVar61)
						{
							iVar11 = iVar64;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar64++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x4170FE884DF7426D(iParam0, func_1053(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1053(iParam1)));
		}
		else
		{
			unk_0x4170FE884DF7426D(iParam0, func_1053(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_912(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_1026(iVar5, iVar3, func_1028(iParam0, 11), func_1028(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_912(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_945(iParam0))
				{
					iVar65 = func_943(iParam0, iVar5, iParam1, iParam2);
					if (iVar65 > 0)
					{
						iVar65 = (iVar65 + unk_0x288277F22D527487(iParam0, 9));
						if (!func_937(iParam0, 9, iVar65))
						{
							func_912(iParam0, 9, iVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_912(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_912(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar66 = func_308(2042, -1, 0);
				if (unk_0x094C1D2DFE050D6E(iParam0, 5) != 0)
				{
					unk_0x4170FE884DF7426D(iParam0, 5, func_931(iParam0, iVar66), func_930(iParam0, iVar66), func_929(iParam0, iVar66));
				}
				if (iParam0 == unk_0x7D2B9E6A64637269())
				{
					unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_931(unk_0x7D2B9E6A64637269(), iVar66), func_930(unk_0x7D2B9E6A64637269(), iVar66), 0);
					unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_929(unk_0x7D2B9E6A64637269(), iVar66));
					func_928(unk_0x1146A9AE09CE2B14(), iVar66);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_912(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar67 = func_1045(iParam0, 4, -1);
					iVar68 = iParam2;
				}
				else
				{
					iVar67 = iParam2;
					iVar68 = func_1045(iParam0, 11, -1);
				}
				if (func_927(iVar5, 11, iVar68, -1))
				{
					if (!func_926(iVar5, 4, iVar67, -1))
					{
						if (func_925(iVar5, 4, iVar67, &uVar69))
						{
							func_912(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_926(iVar5, 4, iVar67, -1))
				{
					if (func_924(iVar5, 4, iVar67, &uVar69))
					{
						func_912(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar70 = unk_0x094C1D2DFE050D6E(iParam0, 6);
				iVar71 = unk_0x288277F22D527487(iParam0, 6);
				iVar72 = unk_0xF94D55021DC59203(iParam0, 6, iVar70, iVar71);
				iVar73 = unk_0x094C1D2DFE050D6E(iParam0, 4);
				iVar74 = unk_0x288277F22D527487(iParam0, 4);
				iVar75 = unk_0xF94D55021DC59203(iParam0, 4, iVar73, iVar74);
				iVar76 = func_1028(iParam0, 4);
				iVar77 = func_1028(iParam0, 6);
				if (func_923(iVar5, iVar72))
				{
					if (unk_0x01758128AAB0BA8F(iVar72, joaat("ALT_FEET"), 0) != func_922(iVar5, iVar76, iVar72))
					{
						iVar78 = unk_0xBEEBC440559223F7(iVar72);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0xE5694002E250F2D1(iVar72, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 6)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar77 = func_919(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_912(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_919(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_912(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar75, joaat("ALT_LEGS"), 0) != func_918(iVar5, iVar77, iVar75))
					{
						iVar78 = unk_0xBEEBC440559223F7(iVar75);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0xE5694002E250F2D1(iVar75, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 4)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar76 = func_919(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_912(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_919(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_912(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
				}
				if (func_923(iVar5, iVar75))
				{
					if (unk_0x01758128AAB0BA8F(iVar75, joaat("ALT_LEGS"), 0) != func_918(iVar5, iVar77, iVar75))
					{
						iVar78 = unk_0xBEEBC440559223F7(iVar75);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0xE5694002E250F2D1(iVar75, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 4)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar76 = func_919(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_912(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_919(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_912(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar72, joaat("ALT_FEET"), 0) != func_922(iVar5, iVar76, iVar72))
					{
						iVar78 = unk_0xBEEBC440559223F7(iVar72);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0xE5694002E250F2D1(iVar72, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 6)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar77 = func_919(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_912(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_919(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_912(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_1030(iParam0);
				iVar83 = unk_0x094C1D2DFE050D6E(iParam0, 1);
				iVar84 = unk_0x288277F22D527487(iParam0, 1);
				iVar85 = unk_0xF94D55021DC59203(iParam0, 1, iVar83, iVar84);
				if (unk_0x01758128AAB0BA8F(iVar85, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_912(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1036(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_912(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_913(iParam0, &uVar4))
		{
			func_912(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_912(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_912(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_912(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar86 = func_1025(iVar5, func_1045(iParam0, 3, -1), iVar11);
		if (iVar86 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_919(iVar5, iVar86, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_919(iVar5, iVar86, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_912(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_77057 = (Global_77057 - 1);
	return 1;
}

int func_913(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1045(unk_0x7D2B9E6A64637269(), 2, -1);
	if (func_308(754, Global_77056, 0) != -99 && func_915())
	{
		if (func_914() == 4)
		{
			return 1;
		}
		if (func_308(754, Global_77056, 0) == 0 && func_308(755, Global_77056, 0) == 0)
		{
			if (func_772(161, Global_77056))
			{
				if (func_308(2053, Global_77056, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_308(753, Global_77056, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_308(754, Global_77056, 0);
		iVar1 = func_308(755, Global_77056, 0);
		if (!func_937(iParam0, iVar1, iVar0))
		{
			if (func_772(161, Global_77056))
			{
				*uParam1 = func_308(2053, Global_77056, 0);
			}
			else
			{
				*uParam1 = func_308(753, Global_77056, 0);
			}
			func_526(754, -99, Global_77056, 1, 0);
			func_526(755, 2, Global_77056, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_914()
{
	return Global_1312835;
}

int func_915()
{
	if (func_917() && func_916(0))
	{
		return 1;
	}
	return 0;
}

var func_916(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_917()
{
	return func_916(func_32() + 1);
}

int func_918(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1027(iParam0, iParam1, 6, 3);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1027(iParam0, iParam1, 6, 4);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_919(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		iVar0 = unk_0xBCEF29BBAC16D038(iParam1);
		if (iVar0 != -1)
		{
			return (func_921(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_1053(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_920(iParam0, func_1053(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_920(int iParam0, int iParam1)
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

int func_921(int iParam0)
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

int func_922(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1027(iParam0, iParam1, 4, 3);
				iVar1 = func_1017(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SKINNY"), 0)) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case joaat("DLC_MP_VAL_M_LEGS1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_1"):
					case joaat("DLC_MP_BEACH_M_LOWR0_2"):
					case joaat("DLC_MP_BEACH_M_LOWR0_3"):
					case joaat("DLC_MP_BEACH_M_LOWR0_4"):
					case joaat("DLC_MP_BEACH_M_LOWR0_5"):
					case joaat("DLC_MP_BEACH_M_LOWR0_6"):
					case joaat("DLC_MP_BEACH_M_LOWR0_7"):
					case joaat("DLC_MP_BEACH_M_LOWR0_8"):
					case joaat("DLC_MP_BEACH_M_LOWR0_9"):
					case joaat("DLC_MP_BEACH_M_LOWR0_10"):
					case joaat("DLC_MP_BEACH_M_LOWR0_11"):
					case joaat("DLC_MP_BEACH_M_LOWR1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR1_1"):
					case joaat("DLC_MP_BEACH_M_LOWR1_2"):
					case joaat("DLC_MP_BEACH_M_LOWR1_3"):
					case joaat("DLC_MP_BEACH_M_LOWR1_4"):
					case joaat("DLC_MP_BEACH_M_LOWR1_5"):
					case joaat("DLC_MP_BEACH_M_LOWR1_6"):
					case joaat("DLC_MP_BEACH_M_LOWR1_7"):
					case joaat("DLC_MP_BEACH_M_LOWR1_8"):
					case joaat("DLC_MP_BEACH_M_LOWR1_9"):
					case joaat("DLC_MP_BEACH_M_LOWR1_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_0"):
					case joaat("DLC_MP_BEACH_M_LOWR2_1"):
					case joaat("DLC_MP_BEACH_M_LOWR2_2"):
					case joaat("DLC_MP_BEACH_M_LOWR2_3"):
					case joaat("DLC_MP_BEACH_M_LOWR2_4"):
					case joaat("DLC_MP_BEACH_M_LOWR2_5"):
					case joaat("DLC_MP_BEACH_M_LOWR2_6"):
					case joaat("DLC_MP_BEACH_M_LOWR2_7"):
					case joaat("DLC_MP_BEACH_M_LOWR2_8"):
					case joaat("DLC_MP_BEACH_M_LOWR2_9"):
					case joaat("DLC_MP_BEACH_M_LOWR2_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_11"):
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case joaat("DLC_MP_VWD_M_LEGS_2_0"):
					case joaat("DLC_MP_VWD_M_LEGS_2_1"):
					case joaat("DLC_MP_VWD_M_LEGS_2_2"):
					case joaat("DLC_MP_VWD_M_LEGS_2_3"):
					case joaat("DLC_MP_VWD_M_LEGS_2_4"):
					case joaat("DLC_MP_VWD_M_LEGS_2_5"):
					case joaat("DLC_MP_VWD_M_LEGS_2_6"):
					case joaat("DLC_MP_VWD_M_LEGS_2_7"):
					case joaat("DLC_MP_VWD_M_LEGS_2_8"):
					case joaat("DLC_MP_VWD_M_LEGS_2_9"):
					case joaat("DLC_MP_VWD_M_LEGS_2_10"):
						iVar2 = 0;
						break;
				}
				if (((unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1027(iParam0, iParam1, 4, 4);
				iVar1 = func_1017(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar0, -1103045158, 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("DUNGAREES"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_923(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_924(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1027(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_919(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_925(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1027(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_919(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_926(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 4, 4);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_927(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 11, 4);
						}
						return unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_928(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x42B4D8C7E389E8B7(iParam0);
	}
}

int func_929(int iParam0, int iParam1)
{
	return 0;
}

int func_930(int iParam0, int iParam1)
{
	switch (iParam1)
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
	}
	return 0;
}

var func_931(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 8);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	iVar2 = unk_0x094C1D2DFE050D6E(iParam0, 4);
	bVar3 = unk_0x094C1D2DFE050D6E(iParam0, 9) != false;
	iVar4 = unk_0xF94D55021DC59203(iParam0, 8, iVar0, unk_0x288277F22D527487(iParam0, 8));
	iVar5 = unk_0xF94D55021DC59203(iParam0, 11, iVar1, unk_0x288277F22D527487(iParam0, 11));
	iVar6 = unk_0xF94D55021DC59203(iParam0, 4, iVar2, unk_0x288277F22D527487(iParam0, 4));
	if (((((((bVar3 != Global_77220 || iParam1 != Global_77221) || iVar4 != Global_77222) || iVar5 != Global_77223) || iVar6 != Global_77224) || iVar0 != Global_77225) || iVar1 != Global_77226) || iVar2 != Global_77227)
	{
		Global_77220 = bVar3;
		Global_77221 = iParam1;
		Global_77222 = iVar4;
		Global_77223 = iVar5;
		Global_77224 = iVar6;
		Global_77225 = iVar0;
		Global_77226 = iVar1;
		Global_77227 = iVar2;
		Global_77228 = func_932(iParam0, iParam1);
	}
	return Global_77228;
}

int func_932(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6471F4759775FCA4(iParam0);
	iVar3 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
	if (unk_0x01758128AAB0BA8F(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_936(iParam0, iParam1, 1);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_936(iParam0, iParam1, 6);
			}
			if ((unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8)) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_936(iParam0, iParam1, 7);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		return func_936(iParam0, iParam1, 9);
	}
	if (func_935(iParam0))
	{
		if (bVar1)
		{
			return func_936(iParam0, iParam1, 7);
		}
		else
		{
			return func_936(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0xF94D55021DC59203(iParam0, 11, iVar0, unk_0x288277F22D527487(iParam0, 11));
		if (unk_0x01758128AAB0BA8F(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_936(iParam0, iParam1, 5);
			}
			else
			{
				return func_936(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_936(iParam0, iParam1, 8);
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_934(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_936(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_936(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_1017(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_936(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_1017(iVar4);
						break;
					}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_933(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_936(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_936(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_936(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_936(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_936(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_936(iParam0, iParam1, 9);
					}
					else
					{
						return func_936(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_936(iParam0, iParam1, 9);
					}
					else
					{
						return func_936(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_936(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_1017(iVar4);
					break;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 8);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_936(iParam0, iParam1, 10);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 6);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 9);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 0);
			}
			else
			{
				return func_936(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_936(iParam0, iParam1, 10);
				}
				else
				{
					return func_936(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 3);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 1);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 9);
			}
			else
			{
				return func_936(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 10);
			}
			else
			{
				return func_936(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_936(iParam0, iParam1, 7);
			}
			else
			{
				return func_936(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_936(iParam0, iParam1, 2);
			}
			else
			{
				return func_936(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0))
		{
			return func_936(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_1017(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 2);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 2);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 2);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 2);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 5);
				}
				else
				{
					return func_936(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 3);
				}
				else
				{
					return func_936(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 5);
				}
				else
				{
					return func_936(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_936(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 6);
				}
				else
				{
					return func_936(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 7);
				}
				else
				{
					return func_936(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_936(iParam0, iParam1, 1);
				}
				else
				{
					return func_936(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_936(iParam0, iParam1, 0);
	return 0;
}

int func_933(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_934(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_935(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 4, unk_0x094C1D2DFE050D6E(iParam0, 4), unk_0x288277F22D527487(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_936(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
	}
	return 0;
}

int func_937(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0xECEC7528A52B4EE8(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	Global_77059[1 /*14*/] = { func_1065(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_1054(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_937(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_1050(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_937(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_77059[2 /*14*/] = { func_1065(iVar0, 14, iVar6, -1) };
									if (Global_77059[2 /*14*/].f_12 == iVar5)
									{
										if (func_937(iParam0, 14, iVar6))
										{
											if (!func_938(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_77059[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_1028(iParam0, iVar4);
						Global_77059[2 /*14*/] = { func_1065(iVar0, iVar4, iVar1, -1) };
						if (!func_938(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_77059[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_308(1759, Global_77056, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_1050(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_937(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_3 && (unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_4 || Global_77059[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_77059[1 /*14*/].f_12 == 0 && unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6)) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("HELMET"), 1)) && unk_0x9673CDADA8C3A4D1(Global_2621444) > 0)
		{
			iVar16 = unk_0x9673CDADA8C3A4D1(Global_2621444);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0x2C86987E2C1DF572(Global_2621444, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					unk_0x71794FDA9361403E(&Var17);
					unk_0x092B9A2C8F9C705E(iVar13, &Var17);
					if (Var17.f_3 == unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) && Var17.f_4 == unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_77059[1 /*14*/].f_3 == unk_0x094C1D2DFE050D6E(iParam0, func_1053(iParam1)) && Global_77059[1 /*14*/].f_4 == unk_0x288277F22D527487(iParam0, func_1053(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_77058++;
			if (Global_77058 == 1)
			{
				if (func_927(iVar0, 11, func_1028(iParam0, 11), -1))
				{
					if (func_925(iVar0, 4, iParam2, &uVar18))
					{
						return func_937(iParam0, 4, uVar18);
					}
				}
				else if (func_924(iVar0, 4, iParam2, &uVar18))
				{
					return func_937(iParam0, 4, uVar18);
				}
			}
			Global_77058 = (Global_77058 - 1);
		}
	}
	return 0;
}

int func_938(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_1050(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_942(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_941(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_940(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_939(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_941(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_940(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_939(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_941(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_940(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_939(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_939(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 14, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 1, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 14, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1027(iParam0, iParam2, 1, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_940(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1027(iParam0, iParam2, 1, 3);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1027(iParam0, iParam2, 1, 4);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_941(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1027(iParam0, iParam2, 14, 3);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1027(iParam0, iParam2, 14, 4);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_942(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_943(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_935(iParam0))
	{
		return -99;
	}
	if (func_944(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_1027(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0xBEEBC440559223F7(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_919(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_1027(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0xBEEBC440559223F7(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xE5694002E250F2D1(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_919(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_944(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8)), joaat("X17_DRAW_6"), 0))
	{
		return 1;
	}
	return 0;
}

int func_945(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = unk_0x6471F4759775FCA4(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_946(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!unk_0x313CC23B5525839F(iParam0))
	{
	}
	unk_0x062D667A62314213(iParam0, &Var0);
	iVar1 = func_308(2097, iParam1, 0);
	iVar2 = func_308(2098, iParam1, 0);
	iVar3 = func_308(2099, iParam1, 0);
	iVar4 = func_308(2100, iParam1, 0);
	iVar5 = func_308(2101, iParam1, 0);
	iVar6 = func_308(2102, iParam1, 0);
	fVar7 = func_959(134, iParam1);
	fVar8 = func_959(135, iParam1);
	fVar9 = func_959(136, iParam1);
	bVar10 = func_772(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x759AC27BF6C1426E(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_308(2103, iParam1, 0);
		if (iVar11 > 0)
		{
			func_947(iParam0, iParam1, 0);
		}
	}
}

void func_947(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_958(iVar1);
		if (!bParam2)
		{
			fVar3 = func_959(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_957(iVar2, iParam1);
		}
		unk_0xD8F926AF2B16BC6E(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_956(iVar4);
		iVar6 = func_955(iVar5);
		iVar7 = func_954(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_784(iVar6, iParam1, -1);
				uVar11 = func_959(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_953(iVar6, iParam1);
				uVar11 = func_957(iVar7, iParam1);
			}
			unk_0xB7EDA69A6A5C7562(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_952(iVar5);
			iVar9 = func_951(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_308(iVar8, iParam1, 0);
					iVar14 = func_308(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_950(iVar8, iParam1);
					iVar14 = func_950(iVar9, iParam1);
				}
				func_949(iVar13, &uVar12, &uVar15);
				unk_0x76DCBBAB09EC9564(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_948(&iParam0, iParam1, bParam2);
}

void func_948(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_959(157, iParam1);
	}
	else
	{
		fVar0 = func_957(157, iParam1);
	}
	if (*iParam0 == unk_0x7D2B9E6A64637269())
	{
	}
	unk_0xC10C84A8F8D6A4BB(*iParam0, round(fVar0));
}

void func_949(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_950(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2555716[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0xFC832BB48EA293B3(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_951(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2161;
		
		case 1:
			return 2162;
		
		case 5:
			return 2163;
		
		case 8:
			return 2164;
		
		case 10:
			return 2159;
		
		default:
	}
	return -1;
}

int func_952(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2154;
		
		case 1:
			return 2155;
		
		case 5:
			return 2156;
		
		case 8:
			return 2157;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_953(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
		iVar2 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	if (!unk_0x7419FA8584FCEA12(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_954(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_955(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_957(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2591939[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0xB35FEF5CE3334BE4(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_958(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_959(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2591939[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0xFB03099134FEF45C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_960(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4269710 == iParam1)
		{
			iVar2 = Global_4269709;
			iVar1 = Global_4269708;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_1027(iParam0, iParam1, 7, 3);
			iVar1 = func_1017(iVar2);
			Global_4269710 = iParam1;
			Global_4269709 = iVar2;
			Global_4269708 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4269713 == iParam3)
		{
			iVar4 = Global_4269712;
			iVar3 = Global_4269711;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_1027(iParam0, iParam3, 11, 3);
			iVar3 = func_1017(iVar4);
			Global_4269713 = iParam3;
			Global_4269712 = iVar4;
			Global_4269711 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4269716 == iParam4)
		{
			iVar6 = Global_4269715;
			iVar5 = Global_4269714;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_1027(iParam0, iParam4, 8, 3);
			iVar5 = func_1017(iVar6);
			Global_4269716 = iParam4;
			Global_4269715 = iVar6;
			Global_4269714 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4269719 == iParam10)
		{
			iVar8 = Global_4269718;
			iVar7 = Global_4269717;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_1027(iParam0, iParam10, 1, 3);
			iVar7 = func_1017(iVar8);
			Global_4269719 = iParam10;
			Global_4269718 = iVar8;
			Global_4269717 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x01758128AAB0BA8F(iVar4, joaat("MORPH_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SCUBA_GEAR"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0) && !unk_0x01758128AAB0BA8F(iVar8, joaat("SMUG_DRAW_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar2, 1930035188, 0))
		{
			if (func_1022(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar6, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_1027(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("DLC_MP_EXEC_M_PHEAD_1_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_1"):
					case joaat("DLC_MP_BEACH_M_HEAD0_2"):
					case joaat("DLC_MP_BEACH_M_HEAD0_3"):
					case joaat("DLC_MP_BEACH_M_HEAD0_4"):
					case joaat("DLC_MP_BEACH_M_HEAD0_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_20"):
					case joaat("DLC_MP_GR_M_PHEAD_7_0"):
					case joaat("DLC_MP_GR_M_PHEAD_7_1"):
					case joaat("DLC_MP_GR_M_PHEAD_7_2"):
					case joaat("DLC_MP_GR_M_PHEAD_7_3"):
					case joaat("DLC_MP_GR_M_PHEAD_7_4"):
					case joaat("DLC_MP_GR_M_PHEAD_7_5"):
					case joaat("DLC_MP_GR_M_PHEAD_7_6"):
					case joaat("DLC_MP_GR_M_PHEAD_7_7"):
					case joaat("DLC_MP_GR_M_PHEAD_7_8"):
					case joaat("DLC_MP_GR_M_PHEAD_7_9"):
					case joaat("DLC_MP_GR_M_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_SCARFS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_962(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				else if (func_962(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x01758128AAB0BA8F(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0)) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_1027(iParam0, iParam11, 4, 3);
				}
				if (unk_0x01758128AAB0BA8F(iVar10, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x01758128AAB0BA8F(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_CHAINS"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("TUX_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SCRUFFY_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_13"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_16"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JACKET_ONLY"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x01758128AAB0BA8F(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("BLOCK_CHAINS"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("STUNT_DRAW_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("CLOSED_COLLAR"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("OPEN_COLLAR"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_1022(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0)))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_1028(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_1017(func_1027(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_1022(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0))) || unk_0x01758128AAB0BA8F(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_1028(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_1017(func_1027(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_0")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_1")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_0")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_1")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_3"))
				{
					if (!unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0))) || unk_0x01758128AAB0BA8F(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) && unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE_ALT"), 0)) || (((iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0)) && !unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE_ALT"), 0)) && !unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_2")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_3")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_4")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_5")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_6")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_7")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_8")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x01758128AAB0BA8F(iVar6, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_11"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x01758128AAB0BA8F(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x01758128AAB0BA8F(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x01758128AAB0BA8F(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_961(iVar6)) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4269710 == iParam1)
		{
			iVar12 = Global_4269709;
			iVar11 = Global_4269708;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_1027(iParam0, iParam1, 7, 4);
			iVar11 = func_1017(iVar12);
			Global_4269710 = iParam1;
			Global_4269709 = iVar12;
			Global_4269708 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4269713 == iParam3)
		{
			iVar14 = Global_4269712;
			iVar13 = Global_4269711;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_1027(iParam0, iParam3, 11, 4);
			iVar13 = func_1017(iVar14);
			Global_4269713 = iParam3;
			Global_4269712 = iVar14;
			Global_4269711 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4269716 == iParam4)
		{
			iVar16 = Global_4269715;
			iVar15 = Global_4269714;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_1027(iParam0, iParam4, 8, 4);
			iVar15 = func_1017(iVar16);
			Global_4269716 = iParam4;
			Global_4269715 = iVar16;
			Global_4269714 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4269719 == iParam10)
		{
			iVar18 = Global_4269718;
			iVar17 = Global_4269717;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_1027(iParam0, iParam10, 1, 4);
			iVar17 = func_1017(iVar18);
			Global_4269719 = iParam10;
			Global_4269718 = iVar18;
			Global_4269717 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_1027(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x01758128AAB0BA8F(iVar14, joaat("MORPH_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("SCUBA_GEAR"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("CAT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0) && !unk_0x01758128AAB0BA8F(iVar18, joaat("SMUG_DRAW_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CUFF"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar12, 1930035188, 0))
		{
			if (func_1022(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar14, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar16, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case joaat("DLC_MP_EXEC_F_PHEAD_1_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_20"):
					case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					case joaat("DLC_MP_GR_F_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("OVER_JACKET"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar12, joaat("JACKET_SCARF"), 0))
				{
					if ((((((((((((((((unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_SCARFS"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_962(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_962(iParam0, iParam3) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("LUXE_SCARF"), 0))
			{
				if ((((unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_SCARFS"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CHAIN"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_CHAINS"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0)) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("BIG_CHAIN"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_1027(iParam0, iParam11, 4, 4);
				}
				if (unk_0x01758128AAB0BA8F(iVar20, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x01758128AAB0BA8F(iVar12, joaat("TIE"), 0) || unk_0x01758128AAB0BA8F(iVar12, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_25"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_9"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar14, 144417099, 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("BOWTIE"), 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("OPEN_COLLAR"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("CLOSED_COLLAR"), 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("TIE"), 0))
					{
						if (unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_9"), 0))
						{
							if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_TIE"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("EARRING"), 1)) || (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("BLOCK_EARRINGS"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar12, 1930035188, 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (func_1022(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_1")) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMUG_DRAW_5"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("XMAS2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -1086258388, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_13"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -1103045158, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x01758128AAB0BA8F(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_11"), 0)) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_0")) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_2")) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_17"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_33"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("SMUG_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_CHAINS"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x01758128AAB0BA8F(iVar16, joaat("VEST_SHIRT"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar16, 1353777856, 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_1"), 0))
				{
					return 0;
				}
				else if (func_1018(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					unk_0x092B9A2C8F9C705E(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_1027(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_16"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_3"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("VEST_SHIRT"), 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
				else if (((unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
				else if ((unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_4"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("SWEAT_VEST"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("BASIC_VEST"), 0))
				{
					return 0;
				}
				else if (((unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("BRACES"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_1027(iParam0, iParam11, 4, 4);
				}
				if (unk_0x01758128AAB0BA8F(iVar22, joaat("HIGH_WAIST"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_961(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BUSI_M_ACCS4_0"):
		case joaat("DLC_MP_BUSI_M_ACCS5_0"):
		case joaat("DLC_MP_BUSI_M_ACCS4_1"):
		case joaat("DLC_MP_BUSI_M_ACCS5_1"):
		case joaat("DLC_MP_BUSI_M_ACCS4_2"):
		case joaat("DLC_MP_BUSI_M_ACCS5_2"):
		case joaat("DLC_MP_BUSI_M_ACCS4_3"):
		case joaat("DLC_MP_BUSI_M_ACCS5_3"):
		case joaat("DLC_MP_BUSI_M_ACCS4_4"):
		case joaat("DLC_MP_BUSI_M_ACCS5_4"):
		case joaat("DLC_MP_BUSI_M_ACCS4_5"):
		case joaat("DLC_MP_BUSI_M_ACCS5_5"):
		case joaat("DLC_MP_BUSI_M_ACCS4_6"):
		case joaat("DLC_MP_BUSI_M_ACCS5_6"):
		case joaat("DLC_MP_BUSI_M_ACCS4_7"):
		case joaat("DLC_MP_BUSI_M_ACCS5_7"):
		case joaat("DLC_MP_BUSI_M_ACCS4_8"):
		case joaat("DLC_MP_BUSI_M_ACCS5_8"):
		case joaat("DLC_MP_BUSI_M_ACCS4_9"):
		case joaat("DLC_MP_BUSI_M_ACCS5_9"):
		case joaat("DLC_MP_BUSI_M_ACCS4_10"):
		case joaat("DLC_MP_BUSI_M_ACCS5_10"):
		case joaat("DLC_MP_BUSI_M_ACCS4_11"):
		case joaat("DLC_MP_BUSI_M_ACCS5_11"):
		case joaat("DLC_MP_BUSI_M_ACCS4_12"):
		case joaat("DLC_MP_BUSI_M_ACCS5_12"):
		case joaat("DLC_MP_BUSI_M_ACCS4_13"):
		case joaat("DLC_MP_BUSI_M_ACCS5_13"):
		case joaat("DLC_MP_BUSI_M_ACCS4_14"):
		case joaat("DLC_MP_BUSI_M_ACCS5_14"):
		case joaat("DLC_MP_BUSI_M_ACCS4_15"):
		case joaat("DLC_MP_BUSI_M_ACCS5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_962(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_1027(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar0, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("USE_JACKET_SCARF"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				return 1;
			}
		}
		return func_1022(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_1027(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_1017(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x01758128AAB0BA8F(iVar1, joaat("JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar1, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar1, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("AIR_DRAW_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_963(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	func_1008(unk_0x15173FB88ABC94F9("hairOverlay"), iParam0);
	iVar1 = func_1007(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_77056;
		}
		func_1042(iVar1, 1, iParam2);
	}
	func_964(iParam0, bParam3, 0, -1);
}

void func_964(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = Global_77056;
		unk_0xACFB6D8CB325EF49(iParam0);
		iVar2 = func_1006(iParam0);
		bVar3 = func_1004(iParam0, 0);
		bVar4 = func_998(iParam0);
		bVar5 = func_997(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_994(iVar6, iVar0))
			{
				if (func_987(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_984(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0xFA02DDD2134428AC(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_994(123, iVar0))
		{
			if (unk_0x3FCD41FDB4395083(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0xFA02DDD2134428AC(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = unk_0x534A9B3C6415526C(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (unk_0x37A11A039E429460(iVar2, iVar7, &Var9))
			{
				if (!unk_0xD1ABD511D9C326A3(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_994(iVar10, iVar0))
					{
						if (func_984(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_966(Var9.f_2, Var9.f_3, iVar10))
							{
								unk_0xFA02DDD2134428AC(iParam0, Var9.f_2, Var9.f_3);
								func_965(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_965(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1970774728:
			switch (iParam2)
			{
				case -129339642:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1959383570);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case 887263619:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -598443208:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -1160700813);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -619123295:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -2139930425:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case 991513037:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 847416951);
					break;
				
				case -675149090:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 847416951);
					break;
				
				case 2021781367:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -1625184579);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -436866133:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case 457275657:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 429414924);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -250832592:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -798760789:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -1634791241:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -2021672848);
					break;
				
				case -1227437948:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -2021672848);
					break;
			}
			break;
		
		case -1368357453:
			switch (iParam2)
			{
				case 901985554:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -125935718);
					break;
				
				case -1199174880:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1060131742);
					break;
				
				case 1450237635:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1305394591);
					break;
				
				case -389741205:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 667969632);
					break;
				
				case -141257402:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1359014181);
					break;
				
				case 153754618:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 2081465940);
					break;
				
				case 659374865:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -465054321);
					break;
				
				case -13136248:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 775081672);
					break;
				
				case -1132960710:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 106529549);
					break;
				
				case 1993003331:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -914124698);
					break;
				
				case -625419875:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 621839126);
					break;
				
				case -774542024:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1907053018);
					break;
				
				case 888079344:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1813906196);
					break;
				
				case -700883358:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 773995069);
					break;
				
				case -13127060:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1207511209);
					break;
				
				case -1825878923:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1417506982);
					break;
				
				case -308681510:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -952353610);
					break;
				
				case -2032106950:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 595710974);
					break;
				
				case 921664999:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1317513903);
					break;
				
				case 1700345329:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1607579128);
					break;
				
				case -46539229:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 90277989);
					break;
				
				case 552527284:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1999546193);
					break;
			}
			break;
		
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				
				case joaat("CasinoTop_M_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_2"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_3"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_4"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_5"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_6"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_7"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				
				case joaat("CasinoTop_M_8"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				
				case joaat("CasinoTop_M_9"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_10"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_11"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				
				case joaat("CasinoTop_M_12"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				
				case joaat("CasinoTop_M_13"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				
				case joaat("CasinoTop_M_14"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				
				case joaat("CasinoTop_M_15"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				
				case joaat("CasinoTop_M_16"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				
				case joaat("CasinoTop_M_17"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				
				case joaat("CasinoTop_M_18"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				
				case joaat("CasinoTop_M_19"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				
				case joaat("CasinoTop_M_20"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_22"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_23"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				
				case joaat("CasinoTop_M_24"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_25"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_26"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				
				case joaat("CasinoTop_M_27"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_28"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_29"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_30"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_31"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_32"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_33"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_34"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_35"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_36"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_37"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_38"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_39"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_40"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_41"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_42"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_43"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				
				case joaat("CasinoTop_M_44"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				
				case joaat("CasinoTop_F_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_2"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_3"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_4"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_5"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_6"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_7"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				
				case joaat("CasinoTop_F_8"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				
				case joaat("CasinoTop_F_9"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_10"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_11"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				
				case joaat("CasinoTop_F_12"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				
				case joaat("CasinoTop_F_13"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				
				case joaat("CasinoTop_F_14"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				
				case joaat("CasinoTop_F_15"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				
				case joaat("CasinoTop_F_16"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				
				case joaat("CasinoTop_F_17"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				
				case joaat("CasinoTop_F_18"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				
				case joaat("CasinoTop_F_19"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				
				case joaat("CasinoTop_F_20"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				
				case joaat("CasinoTop_F_21"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_22"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_23"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				
				case joaat("CasinoTop_F_24"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_25"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_26"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				
				case joaat("CasinoTop_F_27"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_28"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_29"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_30"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_31"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_32"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_33"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_34"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_35"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_36"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_37"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_38"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_39"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_40"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_41"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_42"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_43"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
				
				case joaat("CasinoTop_F_44"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
		
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_17_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_10_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_11_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_12_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_13_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_20_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_21_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_23_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_22_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_5_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_18_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_0_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_3_b"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_25_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_7_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_4_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_1_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_9_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_17_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_10_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_11_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_12_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_13_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_20_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_21_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_23_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_22_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_5_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_18_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_0_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_3_b"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_25_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_7_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_4_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_1_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_9_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
				
				case joaat("MP_Securoserv_000_Fb"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_966(int iParam0, int iParam1, int iParam2)
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
	
	switch (iParam0)
	{
		case -1970774728:
			switch (iParam1)
			{
				case -129339642:
				case 2021781367:
					if (func_983(116, -1) >= func_982(116, 5, 9) || func_774(31760, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -129339642);
					break;
				
				case 887263619:
				case -436866133:
					if (func_977(123, -1) || func_774(31761, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 887263619);
					break;
				
				case -598443208:
				case 457275657:
					if (func_977(124, -1) || func_774(31762, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -598443208);
					break;
				
				case -619123295:
				case -250832592:
					if (func_977(125, -1) || func_774(31763, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -619123295);
					break;
				
				case -2139930425:
				case -798760789:
					if (func_977(126, -1) || func_774(31764, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -2139930425);
					break;
				
				case 991513037:
				case -1634791241:
					if (func_774(31768, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 991513037);
					break;
				
				case -675149090:
				case -1227437948:
					if (func_774(31769, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -675149090);
					break;
				
				case -1686814509:
				case -1408179706:
					if (func_774(31770, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1686814509);
					break;
				
				case 2138708412:
				case -1894139601:
					if (func_774(31771, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 2138708412);
					break;
				
				case 205793848:
				case -786254870:
					if (func_774(31772, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 205793848);
					break;
				
				case 1325175663:
				case -773154515:
					if (func_774(31773, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1325175663);
					break;
				
				case -368088972:
				case 1778247767:
					if (func_774(31774, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -368088972);
					break;
				
				case -1771053026:
				case -648092145:
					if (func_774(31775, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1771053026);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -1368357453:
			switch (iParam1)
			{
				case 156407004:
				case 992344178:
					if (func_774(30533, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 156407004);
					break;
				
				case 850137272:
				case 530639494:
					if (func_774(30534, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 850137272);
					break;
				
				case -907859154:
				case 1472939772:
					if (func_774(30535, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -907859154);
					break;
				
				case -475744483:
				case 1057844725:
					if (func_774(30536, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -475744483);
					break;
				
				case -47667242:
				case 1810957693:
					if (func_774(30537, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -47667242);
					break;
				
				case -409012879:
				case 1261157513:
					if (func_774(30538, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -409012879);
					break;
				
				case 1327735228:
				case 1864065459:
					if (func_774(30539, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1327735228);
					break;
				
				case -187858220:
				case -1644702422:
					if (func_774(30540, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -187858220);
					break;
				
				case 1452108911:
				case -1603076035:
					if (func_774(30541, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1452108911);
					break;
				
				case -1932584643:
				case -310682988:
					if (func_774(30542, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1932584643);
					break;
				
				case -252057754:
				case 2103214089:
					if (func_774(30543, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -252057754);
					break;
				
				case 116007471:
				case 2133791411:
					if (func_774(30544, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 116007471);
					break;
				
				case -463212372:
				case 70168645:
					if (func_774(30545, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -463212372);
					break;
				
				case -1171053658:
				case -669229192:
					if (func_774(30546, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1171053658);
					break;
				
				case -990049180:
				case 620186715:
					if (func_774(30547, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -990049180);
					break;
				
				case -1617127026:
				case 519116877:
					if (func_774(30548, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1617127026);
					break;
				
				case 1770910373:
				case -1586273681:
					if (func_774(30549, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1770910373);
					break;
				
				case -2143701887:
				case -72045715:
					if (func_774(30550, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -2143701887);
					break;
				
				case 1999836107:
				case 1105733954:
					if (func_774(30551, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1999836107);
					break;
				
				case 417383307:
				case -1733868774:
					if (func_774(30552, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 417383307);
					break;
				
				case -2136840722:
				case 75001248:
					if (func_774(30553, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -2136840722);
					break;
				
				case -83336071:
				case -351320953:
					if (func_774(30554, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -83336071);
					break;
				
				case -1391222343:
				case -1824952815:
					if (func_774(30555, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1391222343);
					break;
				
				case -1715443581:
				case -548539487:
					if (func_774(30556, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1715443581);
					break;
				
				case 1673024230:
				case -925164242:
					if (func_774(30557, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1673024230);
					break;
				
				case -1832442562:
				case 887187828:
					if (func_774(30524, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1832442562);
					break;
				
				case 2086548996:
				case 249518856:
					if (func_774(30525, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 2086548996);
					break;
				
				case 1006203940:
				case -1491875241:
					if (func_774(30526, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1006203940);
					break;
				
				case -1032809603:
				case 1114248050:
					if (func_774(30527, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1032809603);
					break;
				
				case 1054867669:
				case 335686386:
					if (func_774(30528, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1054867669);
					break;
				
				case -1911088924:
				case -773349244:
					if (func_774(30529, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1911088924);
					break;
				
				case 983574619:
				case -1153521254:
					if (func_774(30530, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 983574619);
					break;
				
				case 2119361460:
				case 449125530:
					if (func_774(30531, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 2119361460);
					break;
				
				case 596636884:
				case -1089524784:
					if (func_774(30532, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 596636884);
					break;
				
				case 1510632880:
				case -594316604:
					if (func_774(30570, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1510632880);
					break;
				
				case 1912778271:
				case 1362488454:
					if (func_774(30571, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1912778271);
					break;
				
				case 686668863:
				case -304462319:
					if (func_774(30568, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 686668863);
					break;
				
				case 235066951:
				case 1884986113:
					if (func_774(30569, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 235066951);
					break;
				
				case -389741205:
				case -13127060:
					if (func_774(30634, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -389741205);
					break;
				
				case -141257402:
				case -1825878923:
					if (func_774(30635, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -141257402);
					break;
				
				case -1976007910:
				case -389955533:
					if (func_774(30636, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1976007910);
					break;
				
				case -371038609:
				case -485599033:
					if (func_774(30637, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -371038609);
					break;
				
				case 153754618:
				case -308681510:
					if (func_774(30703, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 153754618);
					break;
				
				case 659374865:
				case -2032106950:
					if (func_774(30704, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 659374865);
					break;
				
				case -13136248:
				case 921664999:
					if (func_774(30700, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -13136248);
					break;
				
				case -1132960710:
				case 1700345329:
					if (func_774(30701, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1132960710);
					break;
				
				case 1993003331:
				case -46539229:
					if (func_774(30702, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1993003331);
					break;
				
				case -625419875:
				case 552527284:
					if (func_774(30699, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -625419875);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_774(30260, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_774(30261, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_774(30262, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_774(30263, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_774(30264, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_774(30265, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_774(30266, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_774(30267, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_774(30268, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_774(30269, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_774(30270, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_774(30271, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_774(30272, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_774(30273, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_774(30274, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_774(30275, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_774(30276, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_774(30277, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_774(30278, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_774(30279, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_774(30280, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_774(30281, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_774(30282, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_774(30283, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_774(30284, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_774(30285, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_774(30286, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_774(30287, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_774(30288, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_774(30289, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_774(28255, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_977(89, -1) || func_774(30254, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_977(90, -1) || func_774(30255, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_977(92, -1) || func_774(30256, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_977(89, -1) && func_977(90, -1)) && func_977(92, -1)) && func_977(91, -1)) || func_774(30257, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_977(78, -1) || func_774(28199, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_977(77, -1) && func_977(78, -1)) && func_983(92, -1) >= func_982(92, 5, 9)) || func_774(28200, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((func_983(93, -1) >= func_982(93, 5, 9) && func_977(79, -1)) && func_977(80, -1)) || func_774(28204, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_977(81, -1) || func_774(28206, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_983(94, -1) >= func_982(94, 5, 9) || func_774(28207, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((func_977(84, -1) && func_977(85, -1)) && func_983(97, -1) >= func_982(97, 5, 9)) || func_774(28212, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (func_774(28249, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (func_774(28183, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_774(28182, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_774(28184, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_774(28181, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_774(28178, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_774(28177, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_774(28176, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_774(28180, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_774(28179, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_774(28176, -1, -1) && func_774(28177, -1, -1)) && func_774(28178, -1, -1)) && func_774(28179, -1, -1)) && func_774(28180, -1, -1)) && func_774(28181, -1, -1)) && func_774(28182, -1, -1)) && func_774(28183, -1, -1)) && func_774(28184, -1, -1)) || func_774(28221, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (func_774(28191, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (func_774(28190, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_774(28189, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_974(0, 1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((func_977(77, -1) && func_977(78, -1)) && func_983(92, -1) >= func_982(92, 5, 9)) && func_983(93, -1) >= func_982(93, 5, 9)) && func_977(79, -1)) && func_977(80, -1)) && func_977(81, -1)) && func_983(94, -1) >= func_982(94, 5, 9)) && func_983(95, -1) >= func_982(95, 5, 9)) && func_977(82, -1)) && func_977(83, -1)) && func_983(96, -1) >= func_982(96, 5, 9)) && func_977(84, -1)) && func_977(85, -1)) && func_983(97, -1) >= func_982(97, 5, 9)) && func_977(86, -1)) && func_977(87, -1)) && func_977(88, -1)) || func_774(28222, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_774(27109, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_774(27110, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_774(27111, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_774(27112, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_774(27113, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_774(27114, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_774(27115, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_774(25032, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_774(25033, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_774(25034, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_774(25035, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_774(25036, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_774(25037, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_774(25038, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_774(25039, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_774(25040, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_774(25041, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_774(25042, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_774(25043, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_774(25044, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_774(25045, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_774(25046, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_774(25047, -1, -1))
					{
						return 0;
					}
					return !func_978(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_774(25048, -1, -1))
				